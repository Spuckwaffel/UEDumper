
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: EnhancedInput
/// dependency: FabricMetasoundDataTypes
/// dependency: FabricUI
/// dependency: FMCoreRuntime
/// dependency: FortniteGame
/// dependency: GameFeatures
/// dependency: GameplayAbilities
/// dependency: GameplayMessages
/// dependency: GameplayTags
/// dependency: HarmonixDsp
/// dependency: HarmonixMetasound
/// dependency: HarmonixMidi
/// dependency: MetasoundEngine
/// dependency: MetasoundFrontend
/// dependency: ModularGameplay
/// dependency: PlayspaceSystem
/// dependency: SlateCore
/// dependency: TargetingSystem
/// dependency: UMG

/// Class /Script/FabricRuntime.FabricAnimatableButtonInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UFabricAnimatableButtonInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/FabricRuntime.FabricAnimatableButtonInterface.PlayOpenAnimation
	// void PlayOpenAnimation();                                                                                                // [0x309d440] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricAnimatableButtonInterface.PlayCloseAnimation
	// void PlayCloseAnimation();                                                                                               // [0x3581814] Native|Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/FabricRuntime.FabricButtonBase
/// Size: 0x00A8 (0x000290 - 0x000338)
class AFabricButtonBase : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 824;

public:
	SMember(FMulticastInlineDelegate)                  ToggleStateChanged                                          OFFSET(getStruct<T>, {0x2A8, 16, 0, 0})
	DMember(double)                                    OpenTimeSeconds                                             OFFSET(get<double>, {0x2B8, 8, 0, 0})
	DMember(double)                                    CloseTimeSeconds                                            OFFSET(get<double>, {0x2C0, 8, 0, 0})
	DMember(bool)                                      bHasToggle                                                  OFFSET(get<bool>, {0x2C8, 1, 0, 0})
	CMember(TEnumAsByte<EButtonPressMethod>)           ClickMethod                                                 OFFSET(get<T>, {0x2C9, 1, 0, 0})
	CMember(class APlayerController*)                  InteractingController                                       OFFSET(get<T>, {0x2D0, 8, 0, 0})
	SMember(FString)                                   ButtonId                                                    OFFSET(getStruct<T>, {0x2D8, 16, 0, 0})
	SMember(FText)                                     ButtonLabel                                                 OFFSET(getStruct<T>, {0x2E8, 16, 0, 0})
	SMember(FText)                                     ButtonDescription                                           OFFSET(getStruct<T>, {0x2F8, 16, 0, 0})
	SMember(FGameplayTagContainer)                     GameplayTags                                                OFFSET(getStruct<T>, {0x308, 32, 0, 0})
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x328, 1, 0, 0})
	DMember(bool)                                      bHovered                                                    OFFSET(get<bool>, {0x329, 1, 0, 0})
	DMember(bool)                                      bPressed                                                    OFFSET(get<bool>, {0x32A, 1, 0, 0})
	CMember(ECheckBoxState)                            ToggleState                                                 OFFSET(get<T>, {0x32B, 1, 0, 0})
	CMember(class UFabricInteractableViewModel*)       WidgetViewModel                                             OFFSET(get<T>, {0x330, 8, 0, 0})


	/// Functions
	// Function /Script/FabricRuntime.FabricButtonBase.ToggleStateChanged__DelegateSignature
	// void ToggleStateChanged__DelegateSignature(class APlayerController* InteractingController, bool IsToggle);               // [0x228deb8] MulticastDelegate|Public|Delegate 
	// Function /Script/FabricRuntime.FabricButtonBase.SwapToggle
	// void SwapToggle();                                                                                                       // [0xc781db8] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricButtonBase.SetWidgetViewModel
	// void SetWidgetViewModel(class UFabricInteractableViewModel* ViewModel);                                                  // [0xc781cb8] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricButtonBase.SetToggleState
	// void SetToggleState(bool bNewToggleState, bool bBroadcast, bool bForce);                                                 // [0xc781aa0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricButtonBase.SetEnabled
	// void SetEnabled(bool bNewEnabled);                                                                                       // [0xc781804] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricButtonBase.OnUnhovered
	// void OnUnhovered();                                                                                                      // [0x34bb474] Native|Event|Public|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricButtonBase.OnToggleStateChanged
	// void OnToggleStateChanged(bool bIsToggled);                                                                              // [0x8052ce8] Native|Event|Public|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricButtonBase.OnHovered
	// void OnHovered();                                                                                                        // [0x6983ddc] Native|Event|Public|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricButtonBase.OnEnabled
	// void OnEnabled();                                                                                                        // [0x2f2ca1c] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricButtonBase.OnDisabled
	// void OnDisabled();                                                                                                       // [0x18c13e4] Native|Event|Public|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricButtonBase.OnButtonReleased
	// void OnButtonReleased();                                                                                                 // [0x81ffef4] Native|Event|Public|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricButtonBase.OnButtonPressed
	// void OnButtonPressed();                                                                                                  // [0x81fff0c] Native|Event|Public|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricButtonBase.OnButtonDoubleClicked
	// void OnButtonDoubleClicked();                                                                                            // [0x32f8fc0] Native|Event|Public|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricButtonBase.OnButtonClicked
	// void OnButtonClicked();                                                                                                  // [0x18c0d84] Native|Event|Public|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricButtonBase.IsToggledOn
	// bool IsToggledOn();                                                                                                      // [0xc7809e8] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/FabricRuntime.FabricButtonBase.IsPressed
	// bool IsPressed();                                                                                                        // [0xc7809b8] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/FabricRuntime.FabricButtonBase.IsHovered
	// bool IsHovered();                                                                                                        // [0xc780988] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/FabricRuntime.FabricButtonBase.IsEnabled
	// bool IsEnabled();                                                                                                        // [0xbd67910] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/FabricRuntime.FabricButtonBase.HandleButtonUnhovered
	// void HandleButtonUnhovered();                                                                                            // [0x6dee964] Native|Event|Public|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricButtonBase.HandleButtonReleased
	// void HandleButtonReleased();                                                                                             // [0x9b6ab74] Native|Event|Public|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricButtonBase.HandleButtonPressed
	// void HandleButtonPressed();                                                                                              // [0x18bc790] Native|Event|Public|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricButtonBase.HandleButtonHovered
	// void HandleButtonHovered();                                                                                              // [0x8d35d8c] Native|Event|Public|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricButtonBase.HandleButtonDoubleClicked
	// void HandleButtonDoubleClicked();                                                                                        // [0x20820f0] Native|Event|Public|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricButtonBase.HandleButtonClicked
	// void HandleButtonClicked();                                                                                              // [0x2081c84] Native|Event|Public|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricButtonBase.GetOpenTimeline
	// class UTimelineComponent* GetOpenTimeline();                                                                             // [0x6c981bc] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Script/FabricRuntime.FabricButtonBase.GetCloseTimeline
	// class UTimelineComponent* GetCloseTimeline();                                                                            // [0x6c981bc] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure 
};

/// Class /Script/FabricRuntime.FabricButtonComponentBase
/// Size: 0x00C0 (0x0005C0 - 0x000680)
class UFabricButtonComponentBase : public UStaticMeshComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1664;

public:
	SMember(FMulticastInlineDelegate)                  ToggleStateChanged                                          OFFSET(getStruct<T>, {0x5D0, 16, 0, 0})
	DMember(double)                                    OpenTimeSeconds                                             OFFSET(get<double>, {0x5E0, 8, 0, 0})
	DMember(double)                                    CloseTimeSeconds                                            OFFSET(get<double>, {0x5E8, 8, 0, 0})
	DMember(bool)                                      bHasToggle                                                  OFFSET(get<bool>, {0x5F0, 1, 0, 0})
	CMember(TEnumAsByte<EButtonPressMethod>)           ClickMethod                                                 OFFSET(get<T>, {0x5F1, 1, 0, 0})
	CMember(class APlayerController*)                  InteractingController                                       OFFSET(get<T>, {0x5F8, 8, 0, 0})
	SMember(FString)                                   ButtonId                                                    OFFSET(getStruct<T>, {0x600, 16, 0, 0})
	SMember(FText)                                     ButtonLabel                                                 OFFSET(getStruct<T>, {0x610, 16, 0, 0})
	SMember(FText)                                     ButtonDescription                                           OFFSET(getStruct<T>, {0x620, 16, 0, 0})
	SMember(FGameplayTagContainer)                     GameplayTags                                                OFFSET(getStruct<T>, {0x630, 32, 0, 0})
	DMember(bool)                                      bUseScreenGrid                                              OFFSET(get<bool>, {0x650, 1, 0, 0})
	SMember(FVector2D)                                 ScreenGridPosition                                          OFFSET(getStruct<T>, {0x658, 16, 0, 0})
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x668, 1, 0, 0})
	DMember(bool)                                      bHovered                                                    OFFSET(get<bool>, {0x669, 1, 0, 0})
	DMember(bool)                                      bPressed                                                    OFFSET(get<bool>, {0x66A, 1, 0, 0})
	CMember(ECheckBoxState)                            ToggleState                                                 OFFSET(get<T>, {0x66B, 1, 0, 0})
	CMember(class UFabricInteractableViewModel*)       WidgetViewModel                                             OFFSET(get<T>, {0x670, 8, 0, 0})


	/// Functions
	// Function /Script/FabricRuntime.FabricButtonComponentBase.ToggleStateChanged__DelegateSignature
	// void ToggleStateChanged__DelegateSignature(class APlayerController* InteractingController, bool IsToggle);               // [0x228deb8] MulticastDelegate|Public|Delegate 
	// Function /Script/FabricRuntime.FabricButtonComponentBase.SwapToggle
	// void SwapToggle();                                                                                                       // [0xc781dcc] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricButtonComponentBase.SetWidgetViewModel
	// void SetWidgetViewModel(class UFabricInteractableViewModel* ViewModel);                                                  // [0xc781d38] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricButtonComponentBase.SetToggleState
	// void SetToggleState(bool bNewToggleState, bool bBroadcast, bool bForce);                                                 // [0xc781bac] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricButtonComponentBase.SetEnabled
	// void SetEnabled(bool bNewEnabled);                                                                                       // [0xc781884] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricButtonComponentBase.OnUnhovered
	// void OnUnhovered();                                                                                                      // [0xc78176c] Native|Event|Public|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricButtonComponentBase.OnToggleStateChanged
	// void OnToggleStateChanged(bool bIsToggled);                                                                              // [0xc7816e8] Native|Event|Public|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricButtonComponentBase.OnHovered
	// void OnHovered();                                                                                                        // [0xc780a80] Native|Event|Public|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricButtonComponentBase.OnEnabled
	// void OnEnabled();                                                                                                        // [0xc780a68] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricButtonComponentBase.OnDisabled
	// void OnDisabled();                                                                                                       // [0xc780a50] Native|Event|Public|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricButtonComponentBase.OnButtonReleased
	// void OnButtonReleased();                                                                                                 // [0xc780a38] Native|Event|Public|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricButtonComponentBase.OnButtonPressed
	// void OnButtonPressed();                                                                                                  // [0xc0d7a00] Native|Event|Public|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricButtonComponentBase.OnButtonDoubleClicked
	// void OnButtonDoubleClicked();                                                                                            // [0xc780a20] Native|Event|Public|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricButtonComponentBase.OnButtonClicked
	// void OnButtonClicked();                                                                                                  // [0x402e60c] Native|Event|Public|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricButtonComponentBase.IsToggledOn
	// bool IsToggledOn();                                                                                                      // [0xc780a04] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/FabricRuntime.FabricButtonComponentBase.IsPressed
	// bool IsPressed();                                                                                                        // [0xc7809d0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/FabricRuntime.FabricButtonComponentBase.IsHovered
	// bool IsHovered();                                                                                                        // [0xc7809a0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/FabricRuntime.FabricButtonComponentBase.IsEnabled
	// bool IsEnabled();                                                                                                        // [0xc780970] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/FabricRuntime.FabricButtonComponentBase.HandleButtonUnhovered
	// void HandleButtonUnhovered();                                                                                            // [0xc780958] Native|Event|Public|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricButtonComponentBase.HandleButtonReleased
	// void HandleButtonReleased();                                                                                             // [0x97efb38] Native|Event|Public|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricButtonComponentBase.HandleButtonPressed
	// void HandleButtonPressed();                                                                                              // [0xc0d7a18] Native|Event|Public|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricButtonComponentBase.HandleButtonHovered
	// void HandleButtonHovered();                                                                                              // [0xc780940] Native|Event|Public|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricButtonComponentBase.HandleButtonDoubleClicked
	// void HandleButtonDoubleClicked();                                                                                        // [0x6e47af8] Native|Event|Public|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricButtonComponentBase.HandleButtonClicked
	// void HandleButtonClicked();                                                                                              // [0xc780928] Native|Event|Public|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricButtonComponentBase.GetOpenTimeline
	// class UTimelineComponent* GetOpenTimeline();                                                                             // [0x6c981bc] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Script/FabricRuntime.FabricButtonComponentBase.GetCloseTimeline
	// class UTimelineComponent* GetCloseTimeline();                                                                            // [0x6c981bc] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Script/FabricRuntime.FabricButtonComponentBase.ConstructButton
	// void ConstructButton();                                                                                                  // [0xc780680] Native|Event|Public|BlueprintCallable|BlueprintEvent 
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
	// class UFabricMetaSoundPatchWrapper* GetMetaSoundPatchWrapper();                                                          // [0x7594b4c] Native|Event|Public|BlueprintEvent 
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
	// FSourceEffectChainEntry GetAudioAnalyzer();                                                                              // [0xc780698] Native|Event|Public|BlueprintEvent 
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
	// TArray<FSourceEffectChainEntry> GetSourceEffectChainEntries();                                                           // [0xc7808b4] Native|Event|Public|BlueprintEvent 
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
	// class USoundSourceBus* GetSoundSourceBus();                                                                              // [0x7594b4c] Native|Event|Public|BlueprintEvent 
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
	// class UFabricFloatProviderBase* GetFloatProvider();                                                                      // [0x7594b4c] Native|Event|Public|BlueprintEvent 
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
	// void SetFloatProviders(TArray<UFabricFloatProviderBase*>& FloatProvider);                                                // [0x6a1b31c] Native|Event|Public|HasOutParms|BlueprintEvent 
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
	// class UFabricTextureProviderBase* GetTextureProvider();                                                                  // [0x7594b4c] Native|Event|Public|BlueprintEvent 
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
	// bool IsShowingTexturePreview();                                                                                          // [0x1ab0b38] Native|Event|Public|BlueprintEvent|Const 
	// Function /Script/FabricRuntime.FabricTextureModifier.GetTextureModifier
	// class UFabricTextureModifierBase* GetTextureModifier();                                                                  // [0x7594b4c] Native|Event|Public|BlueprintEvent 
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
	// void OnTexturesChanged(TArray<FFabricTextureProviderTexture>& Texture);                                                  // [0xc781000] Native|Event|Public|HasOutParms|BlueprintEvent 
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
	// class UFabricMeshProviderBase* GetMeshProvider();                                                                        // [0x7594b4c] Native|Event|Public|BlueprintEvent 
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
	// void OnMeshesChanged(TArray<FFabricMeshInstanceReference>& InstanceMeshReferences, bool bInstancesChanged);              // [0xc780e70] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricMeshModifier.IsShowingMeshPreview
	// bool IsShowingMeshPreview();                                                                                             // [0x8ab2a94] Native|Event|Public|BlueprintEvent|Const 
	// Function /Script/FabricRuntime.FabricMeshModifier.GetMeshModifier
	// class UFabricMeshModifierBase* GetMeshModifier();                                                                        // [0x6a6b4c4] Native|Event|Public|BlueprintEvent|Const 
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
	// void OnMeshReferenceChanged(FFabricMeshProviderMeshReference& ReferenceMesh);                                            // [0xc780db0] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricMeshReceiver.OnMeshInstancesChanged
	// void OnMeshInstancesChanged(TArray<FTransform>& Meshes);                                                                 // [0xc780d10] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricMeshReceiver.OnMeshInstanceReferencesChanged
	// void OnMeshInstanceReferencesChanged(TArray<FFabricMeshInstanceReference>& MeshInstanceReferences, bool bMeshChanged, bool bInstancesChanged); // [0xc780a98] Native|Event|Public|HasOutParms|BlueprintEvent 
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
	// void OnOptionsLoaded();                                                                                                  // [0xc7915c4] Final|Native|Protected 
	// Function /Script/FabricRuntime.FabricModulatable.OnModulatorFloatProviderConnectionChanged
	// void OnModulatorFloatProviderConnectionChanged(bool bConnected, class UObject* ModulatorObject);                         // [0xc791de8] Final|Native|Private 
	// Function /Script/FabricRuntime.FabricModulatable.OnModulatedPropertyChanged
	// void OnModulatedPropertyChanged(FString Value, class UObject* ModulatorObject);                                          // [0xc7916c8] Final|Native|Private 
	// Function /Script/FabricRuntime.FabricModulatable.OnAnyOptionUpdated
	// void OnAnyOptionUpdated();                                                                                               // [0xc7915c4] Final|Native|Protected 
	// Function /Script/FabricRuntime.FabricModulatable.IsParamModulated
	// bool IsParamModulated(FString Param);                                                                                    // [0xc790e38] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricModulatable.GetModulatedString
	// bool GetModulatedString(FString Param, FMidiSongPos& SongPos, FString& OutString);                                       // [0xc78fab8] Final|Native|Protected|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricModulatable.GetModulatedInt
	// bool GetModulatedInt(FString Param, FMidiSongPos& SongPos, int32_t& OutInt);                                             // [0xc78f24c] Final|Native|Protected|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricModulatable.GetModulatedFloat
	// bool GetModulatedFloat(FString Param, FMidiSongPos& SongPos, float& OutFloat);                                           // [0xc78ea1c] Final|Native|Protected|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricModulatable.GetModulatedEnum
	// bool GetModulatedEnum(FString Param, FMidiSongPos& SongPos, char& OutEnum);                                              // [0xc78e260] Final|Native|Protected|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricModulatable.GetModulatedBool
	// bool GetModulatedBool(FString Param, FMidiSongPos& SongPos, bool& OutBool);                                              // [0xc78da30] Final|Native|Protected|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricModulatable.GetModulatedActor
	// class AActor* GetModulatedActor();                                                                                       // [0xc78da08] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/FabricRuntime.FabricFloatProviderBase
/// Size: 0x0058 (0x000328 - 0x000380)
class UFabricFloatProviderBase : public UFabricModulatable
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 896;

public:
	SMember(FMulticastInlineDelegate)                  OnFloatChanged                                              OFFSET(getStruct<T>, {0x330, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnFloatProviderEnabledChanged                               OFFSET(getStruct<T>, {0x340, 16, 0, 0})
	DMember(float)                                     CurrentFloat                                                OFFSET(get<float>, {0x350, 4, 0, 0})
	CMember(TWeakObjectPtr<UMusicClockComponent*>)     MusicClock                                                  OFFSET(get<T>, {0x354, 8, 0, 0})
	CMember(class UFabricMetaSoundModulatorPatchWrapper*) AssociatedPatchWrapper                                   OFFSET(get<T>, {0x360, 8, 0, 0})
	SMember(FString)                                   EnabledParam                                                OFFSET(getStruct<T>, {0x368, 16, 0, 0})
	DMember(bool)                                      bAlwaysModulates                                            OFFSET(get<bool>, {0x378, 1, 0, 0})
	DMember(bool)                                      bBindBlueprintOnFloatChanged                                OFFSET(get<bool>, {0x379, 1, 0, 0})
	DMember(bool)                                      bIsEnabled                                                  OFFSET(get<bool>, {0x37A, 1, 0, 0})
	DMember(bool)                                      bModulatorValueChanged                                      OFFSET(get<bool>, {0x37B, 1, 0, 0})


	/// Functions
	// Function /Script/FabricRuntime.FabricFloatProviderBase.SetProviderEnabled
	// void SetProviderEnabled(bool bInIsEnabled);                                                                              // [0xc781a04] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricFloatProviderBase.SetMusicClock
	// void SetMusicClock(class UMusicClockComponent* NewMusicClock);                                                           // [0xc781904] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricFloatProviderBase.SetAssociatedPatchWrapper
	// void SetAssociatedPatchWrapper(class UFabricMetaSoundModulatorPatchWrapper* PatchWrapper);                               // [0xc781784] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricFloatProviderBase.ReceiveTick
	// void ReceiveTick(float DeltaSeconds);                                                                                    // [0x228deb8] Event|Protected|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricFloatProviderBase.OnFloatProviderEnabledChanged__DelegateSignature
	// void OnFloatProviderEnabledChanged__DelegateSignature(bool bEnabled, class UFabricFloatProviderBase* FloatProvider);     // [0x228deb8] MulticastDelegate|Public|Delegate 
	// Function /Script/FabricRuntime.FabricFloatProviderBase.OnFloatChanged__DelegateSignature
	// void OnFloatChanged__DelegateSignature(float float, class UFabricFloatProviderBase* FloatProvider);                      // [0x228deb8] MulticastDelegate|Public|Delegate 
	// Function /Script/FabricRuntime.FabricFloatProviderBase.GetProviderEnabled
	// bool GetProviderEnabled();                                                                                               // [0xb184b00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricFloatProviderBase.GetFloatProviderType
	// EFabricFloatProviderType GetFloatProviderType();                                                                         // [0x6a6bd98] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricFloatProviderBase.GetFloatAtSongPos
	// float GetFloatAtSongPos(FMidiSongPos& SongPos);                                                                          // [0xc7807c8] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricFloatProviderBase.GetCurrentSongPosWithOffset
	// FMidiSongPos GetCurrentSongPosWithOffset(float OffsetSeconds);                                                           // [0xc780720] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricFloatProviderBase.GetCurrentSongPos
	// FMidiSongPos GetCurrentSongPos();                                                                                        // [0xc7806e4] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricFloatProviderBase.GetCurrentFloat
	// float GetCurrentFloat();                                                                                                 // [0xa77c554] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricFloatProviderBase.GetAssociatedPatchWrapper
	// class UFabricMetaSoundModulatorPatchWrapper* GetAssociatedPatchWrapper();                                                // [0x944b6e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/FabricRuntime.FabricFloatProviderWave
/// Size: 0x0150 (0x000380 - 0x0004D0)
class UFabricFloatProviderWave : public UFabricFloatProviderBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1232;

public:
	SMember(FString)                                   WaveShapeParam                                              OFFSET(getStruct<T>, {0x380, 16, 0, 0})
	SMember(FString)                                   FreeHzParam                                                 OFFSET(getStruct<T>, {0x390, 16, 0, 0})
	SMember(FString)                                   MinParam                                                    OFFSET(getStruct<T>, {0x3A0, 16, 0, 0})
	SMember(FString)                                   MaxParam                                                    OFFSET(getStruct<T>, {0x3B0, 16, 0, 0})
	SMember(FString)                                   BeatDurationParam                                           OFFSET(getStruct<T>, {0x3C0, 16, 0, 0})
	SMember(FString)                                   BeatOffsetParam                                             OFFSET(getStruct<T>, {0x3D0, 16, 0, 0})
	SMember(FString)                                   ShapeParam                                                  OFFSET(getStruct<T>, {0x3E0, 16, 0, 0})
	SMember(FString)                                   StyleParam                                                  OFFSET(getStruct<T>, {0x3F0, 16, 0, 0})
	DMember(int32_t)                                   PhaseCPDIndex                                               OFFSET(get<int32_t>, {0x400, 4, 0, 0})
	DMember(int32_t)                                   ValueCPDIndex                                               OFFSET(get<int32_t>, {0x404, 4, 0, 0})
	CMember(TSet<TWeakObjectPtr<UStaticMeshComponent*>>) PreviewDisplayMeshes                                      OFFSET(get<T>, {0x480, 80, 0, 0})


	/// Functions
	// Function /Script/FabricRuntime.FabricFloatProviderWave.SetRandomSeedByGuid
	// void SetRandomSeedByGuid(FGuid& InRandomGuid);                                                                           // [0xc785044] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricFloatProviderWave.SetFreePhase
	// void SetFreePhase(float InFreePhase);                                                                                    // [0xc784e7c] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricFloatProviderWave.RemovePreviewDisplayMesh
	// void RemovePreviewDisplayMesh(class UStaticMeshComponent* Mesh);                                                         // [0xc7849b8] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricFloatProviderWave.GetRandomSeed
	// int32_t GetRandomSeed();                                                                                                 // [0xc784230] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricFloatProviderWave.GetPreviewDisplayMeshes
	// TArray<UStaticMeshComponent*> GetPreviewDisplayMeshes();                                                                 // [0xc7841f0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/FabricRuntime.FabricFloatProviderWave.GetCurrentPhase
	// float GetCurrentPhase();                                                                                                 // [0xc783e88] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricFloatProviderWave.GetCurrentFreePhase
	// float GetCurrentFreePhase();                                                                                             // [0xc783e60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricFloatProviderWave.ClearPreviewDisplayMeshes
	// void ClearPreviewDisplayMeshes();                                                                                        // [0xc783b48] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricFloatProviderWave.AddPreviewDisplayMesh
	// void AddPreviewDisplayMesh(class UStaticMeshComponent* Mesh);                                                            // [0xc7838cc] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/FabricRuntime.FabricFloatProviderStep
/// Size: 0x0078 (0x000380 - 0x0003F8)
class UFabricFloatProviderStep : public UFabricFloatProviderBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1016;

public:
	SMember(FString)                                   StepRateParam                                               OFFSET(getStruct<T>, {0x380, 16, 0, 0})
	SMember(FString)                                   ActiveStepsParam                                            OFFSET(getStruct<T>, {0x390, 16, 0, 0})
	SMember(FString)                                   StepParamBase                                               OFFSET(getStruct<T>, {0x3A0, 16, 0, 0})
	DMember(int32_t)                                   MaxSteps                                                    OFFSET(get<int32_t>, {0x3B0, 4, 0, 0})
	SMember(FFabricStepGenerator)                      RuntimeGenerator                                            OFFSET(getStruct<T>, {0x3B8, 32, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnFloatProviderStepInitialized                              OFFSET(getStruct<T>, {0x3D8, 16, 0, 0})


	/// Functions
	// Function /Script/FabricRuntime.FabricFloatProviderStep.GetStepLengthBeats
	// float GetStepLengthBeats();                                                                                              // [0xc784248] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/FabricRuntime.FabricFloatProviderValueSetter
/// Size: 0x0080 (0x000380 - 0x000400)
class UFabricFloatProviderValueSetter : public UFabricFloatProviderBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1024;

public:
	SMember(FString)                                   ValueParam                                                  OFFSET(getStruct<T>, {0x380, 16, 0, 0})
	SMember(FString)                                   TransitionTimingParam                                       OFFSET(getStruct<T>, {0x390, 16, 0, 0})


	/// Functions
	// Function /Script/FabricRuntime.FabricFloatProviderValueSetter.GetUpdateBeat
	// float GetUpdateBeat();                                                                                                   // [0x8ac99e4] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricFloatProviderValueSetter.CanUsePredictiveBeatBroadcasting
	// bool CanUsePredictiveBeatBroadcasting();                                                                                 // [0xc783b2c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricFloatProviderValueSetter.CalculateTransitionTiming
	// float CalculateTransitionTiming();                                                                                       // [0xc783a60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricFloatProviderValueSetter.BroadcastCurrentValue
	// float BroadcastCurrentValue(float OverriddenBeat);                                                                       // [0xc7839d0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/FabricRuntime.FabricHoldable
/// Size: 0x0000 (0x000028 - 0x000028)
class UFabricHoldable : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/FabricRuntime.FabricIndicatorComponent
/// Size: 0x0080 (0x0000A0 - 0x000120)
class UFabricIndicatorComponent : public UGameFrameworkComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	SMember(FMulticastInlineDelegate)                  OnEnabledStateChanged                                       OFFSET(getStruct<T>, {0xA0, 16, 0, 0})
	CMember(class UClass*)                             FabricTooltipWidgetType                                     OFFSET(get<T>, {0xB0, 8, 0, 0})
	SMember(FGameplayTag)                              TargetsChangedTag                                           OFFSET(getStruct<T>, {0xB8, 4, 0, 0})
	SMember(FGameplayTagContainer)                     HUDTagsToHide                                               OFFSET(getStruct<T>, {0xC0, 32, 0, 0})
	CMember(class UFortInputMappingContext*)           IndicatorShowingInputContext                                OFFSET(get<T>, {0xE0, 8, 0, 0})
	DMember(int32_t)                                   IndicatorShowingPriority                                    OFFSET(get<int32_t>, {0xE8, 4, 0, 0})
	CMember(class UInputAction*)                       ShowMoreAction                                              OFFSET(get<T>, {0xF0, 8, 0, 0})


	/// Functions
	// Function /Script/FabricRuntime.FabricIndicatorComponent.TryGetFortClientSettings
	// void TryGetFortClientSettings();                                                                                         // [0xc7850dc] Final|Native|Protected 
	// Function /Script/FabricRuntime.FabricIndicatorComponent.SetIndicatorEnabled
	// void SetIndicatorEnabled(bool bEnabled, bool bAllowWriteToSettings);                                                     // [0xc784efc] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricIndicatorComponent.OnShowMoreActionTriggered
	// void OnShowMoreActionTriggered(FInputActionInstance& Instance);                                                          // [0xc784914] Final|Native|Public|HasOutParms 
	// Function /Script/FabricRuntime.FabricIndicatorComponent.OnIndicatorWidgetVisibilityChanged
	// void OnIndicatorWidgetVisibilityChanged(ESlateVisibility NewVisibility);                                                 // [0xc7845b8] Final|Native|Public  
	// Function /Script/FabricRuntime.FabricIndicatorComponent.IsIndicatorEnabled
	// bool IsIndicatorEnabled();                                                                                               // [0xc7843d4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricIndicatorComponent.HandleTooltipsEnabledChanged
	// void HandleTooltipsEnabledChanged();                                                                                     // [0xc784314] Final|Native|Protected 
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
	// void ServerRequestDoesIslandContainFabricDevices();                                                                      // [0x30b77b0] Final|Net|NetReliableNative|Event|Private|NetServer 
	// Function /Script/FabricRuntime.FabricInteractableControllerComponent.ServerGivePlayerFabricInteractionTool
	// void ServerGivePlayerFabricInteractionTool();                                                                            // [0x14f8d74] Net|NetReliableNative|Event|Public|NetServer 
	// Function /Script/FabricRuntime.FabricInteractableControllerComponent.OnCreativeModeEnabledChangedDelegate
	// void OnCreativeModeEnabledChangedDelegate(bool bCreativeEnabled);                                                        // [0x65ef434] Final|Native|Public  
	// Function /Script/FabricRuntime.FabricInteractableControllerComponent.GiveBackInteractionTool
	// void GiveBackInteractionTool();                                                                                          // [0xc784270] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricInteractableControllerComponent.EnsurePlayerHasInteractionTool
	// void EnsurePlayerHasInteractionTool();                                                                                   // [0xc783ca8] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricInteractableControllerComponent.ClientReceiveDoesIslandContainFabricDevices
	// void ClientReceiveDoesIslandContainFabricDevices(bool bIslandContainsFabricDevices);                                     // [0xb5e3f20] Final|Net|NetReliableNative|Event|Private|NetClient 
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
	// void StartSpecialInteraction(class APlayerController* Controller);                                                       // [0x78b6978] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricInteractable.StartInteraction
	// void StartInteraction(class APlayerController* Controller);                                                              // [0x8ab3b8c] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricInteractable.ShouldPassInteractionToComponent
	// bool ShouldPassInteractionToComponent(class AFabricInteractionTool* InteractionTool);                                    // [0xafe5a24] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricInteractable.SetInteractable
	// void SetInteractable(bool bInteractable);                                                                                // [0xc784fc0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricInteractable.SetHitComponent
	// void SetHitComponent(class USceneComponent* HitComponent);                                                               // [0x8ab38e0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricInteractable.SetFocused
	// void SetFocused(bool bIsFocused);                                                                                        // [0x8b1ffd4] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricInteractable.OnInteractionFocusTargetChanged
	// void OnInteractionFocusTargetChanged(class APlayerController* Controller, class UObject* FocusTarget, bool bIsFocused);  // [0xc784638] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricInteractable.IsValidToInteractWith
	// bool IsValidToInteractWith(class APlayerController* Controller);                                                         // [0xc784420] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricInteractable.IsFocusDependentOnInteractionContext
	// bool IsFocusDependentOnInteractionContext(class APlayerController* Controller);                                          // [0xc784328] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricInteractable.GetLinkedInteractable
	// class UObject* GetLinkedInteractable();                                                                                  // [0x9969dd8] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricInteractable.GetInteractionSFX
	// class UAudioComponent* GetInteractionSFX();                                                                              // [0xc7841b0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricInteractable.GetInteractableType
	// EFabricInteractableType GetInteractableType();                                                                           // [0x6d0619c] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricInteractable.GetInteractableName
	// void GetInteractableName(FText& OutName);                                                                                // [0xc784110] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricInteractable.GetInteractableForwardVector
	// FVector GetInteractableForwardVector(class USceneComponent* Interactable);                                               // [0xc78406c] Native|Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricInteractable.GetInteractableDescription
	// void GetInteractableDescription(FText& OutDescription);                                                                  // [0xc783fcc] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricInteractable.GetInteractableComponentLocation
	// FVector GetInteractableComponentLocation(class USceneComponent* Interactable);                                           // [0xc783f28] Native|Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricInteractable.GetContinuousInteractableValueNormalized
	// float GetContinuousInteractableValueNormalized();                                                                        // [0xc783d34] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricInteractable.GetContinuousInteractableDirection
	// EFabricContinuousInteractionDirection GetContinuousInteractableDirection();                                              // [0x2fdc2fc] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricInteractable.EndInteraction
	// void EndInteraction(class APlayerController* PlayerController, bool bWasDragAndDropInteraction);                         // [0xc783be0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricInteractable.DoesInteractionRequireHoldable
	// bool DoesInteractionRequireHoldable();                                                                                   // [0x996b214] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricInteractable.CanInteractWithHoldable
	// bool CanInteractWithHoldable(TScriptInterface<Class>& Holdable);                                                         // [0xc783a88] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
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
	// void SetFabricDeviceExistsInPlayspace();                                                                                 // [0xc784e08] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricInteractablePlayspaceComponent.OnPlayspaceUserAdded
	// void OnPlayspaceUserAdded(FPlayspaceUser& PlayspaceUser);                                                                // [0xc784738] Final|Native|Protected|HasOutParms 
	// Function /Script/FabricRuntime.FabricInteractablePlayspaceComponent.OnDownloadOnDemandCompleteIndividualClient
	// void OnDownloadOnDemandCompleteIndividualClient(FEventMessageTag Channel, FClientFinishedDownloadOnDemand& Context);     // [0xc7844b4] Final|Native|Protected|HasOutParms 
};

/// Class /Script/FabricRuntime.FabricInteractionTool
/// Size: 0x01E0 (0x001D58 - 0x001F38)
class AFabricInteractionTool : public AFortWeaponRanged
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 7992;

public:
	SMember(FMulticastInlineDelegate)                  OnInteractionStateChanged                                   OFFSET(getStruct<T>, {0x1D58, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnCablesGrabbed                                             OFFSET(getStruct<T>, {0x1D68, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnCablesDropped                                             OFFSET(getStruct<T>, {0x1D78, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnMetasoundGeneratorCrossfadeStarted                        OFFSET(getStruct<T>, {0x1D88, 16, 0, 0})
	CMember(class UClass*)                             FITSplineMeshComponentClass                                 OFFSET(get<T>, {0x1D98, 8, 0, 0})
	CMember(class USplineComponent*)                   SplineComponent                                             OFFSET(get<T>, {0x1DA0, 8, 0, 0})
	CMember(TArray<class USplineMeshComponent*>)       SplineMeshComponentArray                                    OFFSET(get<T>, {0x1DA8, 16, 0, 0})
	CMember(class UMaterialInstanceDynamic*)           SplineMeshMaterialInstance                                  OFFSET(get<T>, {0x1DB8, 8, 0, 0})
	DMember(float)                                     MaxRange                                                    OFFSET(get<float>, {0x1DC0, 4, 0, 0})
	DMember(float)                                     MinDragAndDropTriggerTime                                   OFFSET(get<float>, {0x1DC4, 4, 0, 0})
	DMember(float)                                     FiringRate                                                  OFFSET(get<float>, {0x1DC8, 4, 0, 0})
	DMember(float)                                     WipeAnim                                                    OFFSET(get<float>, {0x1DCC, 4, 0, 0})
	DMember(float)                                     UseWipe                                                     OFFSET(get<float>, {0x1DD0, 4, 0, 0})
	DMember(int32_t)                                   SplineMeshMaterialIndex                                     OFFSET(get<int32_t>, {0x1DD4, 4, 0, 0})
	DMember(int32_t)                                   CPDUVScale                                                  OFFSET(get<int32_t>, {0x1DD8, 4, 0, 0})
	DMember(int32_t)                                   CPDUVPosition                                               OFFSET(get<int32_t>, {0x1DDC, 4, 0, 0})
	DMember(int32_t)                                   CPDWipeAnim                                                 OFFSET(get<int32_t>, {0x1DE0, 4, 0, 0})
	DMember(int32_t)                                   CPDUseWipe                                                  OFFSET(get<int32_t>, {0x1DE4, 4, 0, 0})
	DMember(float)                                     SplineSectionLength                                         OFFSET(get<float>, {0x1DE8, 4, 0, 0})
	DMember(int32_t)                                   MaxSplineSpawnedInAFrame                                    OFFSET(get<int32_t>, {0x1DEC, 4, 0, 0})
	DMember(float)                                     SplineEndForwardMultiplier                                  OFFSET(get<float>, {0x1DF0, 4, 0, 0})
	DMember(float)                                     SplineStartForwardMultiplier                                OFFSET(get<float>, {0x1DF4, 4, 0, 0})
	CMember(class UObject*)                            HoveredInteractable                                         OFFSET(get<T>, {0x1DF8, 8, 0, 0})
	CMember(class USceneComponent*)                    HoveredInteractableHitComponent                             OFFSET(get<T>, {0x1E00, 8, 0, 0})
	CMember(class UObject*)                            PressedInteractable                                         OFFSET(get<T>, {0x1E08, 8, 0, 0})
	CMember(TWeakObjectPtr<UObject*>)                  LastPressedInteractable                                     OFFSET(get<T>, {0x1E10, 8, 0, 0})
	CMember(class USceneComponent*)                    PressedInteractableHitComponent                             OFFSET(get<T>, {0x1E18, 8, 0, 0})
	CMember(TWeakObjectPtr<AFortCreativeDeviceProp*>)  InteractableOwnerDevice                                     OFFSET(get<T>, {0x1E20, 8, 0, 0})
	DMember(float)                                     AccumulatedDragAndDropTriggerTime                           OFFSET(get<float>, {0x1E28, 4, 0, 0})
	SMember(FInteractionData)                          ServerInteractionData                                       OFFSET(getStruct<T>, {0x1E2C, 12, 0, 0})
	DMember(bool)                                      bServerTriggerPressed                                       OFFSET(get<bool>, {0x1E49, 1, 0, 0})
	DMember(bool)                                      bServerIsHoldingCable                                       OFFSET(get<bool>, {0x1E4B, 1, 0, 0})
	SMember(FInteractionSplinePoints)                  ServerSplinePoints                                          OFFSET(getStruct<T>, {0x1E60, 96, 0, 0})
	DMember(float)                                     ServerContinuousInteractableValue                           OFFSET(get<float>, {0x1EC0, 4, 0, 0})


	/// Functions
	// Function /Script/FabricRuntime.FabricInteractionTool.UpdateSplineMesh
	// void UpdateSplineMesh();                                                                                                 // [0xc785104] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricInteractionTool.UnholsterWeapon
	// void UnholsterWeapon();                                                                                                  // [0xc7850f0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricInteractionTool.ServerSetTriggerPressed
	// void ServerSetTriggerPressed(bool bPressed);                                                                             // [0xc784d84] Net|NetReliableNative|Event|Protected|NetServer 
	// Function /Script/FabricRuntime.FabricInteractionTool.ServerSetSplinePoints
	// void ServerSetSplinePoints(FInteractionSplinePoints SplinePoints);                                                       // [0xc784c80] Net|NetReliableNative|Event|Protected|NetServer 
	// Function /Script/FabricRuntime.FabricInteractionTool.ServerSetIsHoldingCable
	// void ServerSetIsHoldingCable(bool bHoldingCable);                                                                        // [0xc784bfc] Net|NetReliableNative|Event|Protected|NetServer 
	// Function /Script/FabricRuntime.FabricInteractionTool.ServerSetInteractionData
	// void ServerSetInteractionData(FInteractionData NewData);                                                                 // [0xc784b60] Net|NetReliableNative|Event|Protected|NetServer 
	// Function /Script/FabricRuntime.FabricInteractionTool.ServerSetContinuousInteractableValue
	// void ServerSetContinuousInteractableValue(float Value);                                                                  // [0xc784adc] Net|Native|Event|Protected|NetServer 
	// Function /Script/FabricRuntime.FabricInteractionTool.ServerHandleFITFired
	// void ServerHandleFITFired();                                                                                             // [0xc784ac4] Net|Native|Event|Protected|NetServer 
	// Function /Script/FabricRuntime.FabricInteractionTool.OnSplineUpdated
	// void OnSplineUpdated(EFabricInteractionToolStates NewInteractionState);                                                  // [0x228deb8] Event|Protected|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricInteractionTool.OnRep_ServerTriggerPressed
	// void OnRep_ServerTriggerPressed();                                                                                       // [0xc7848c4] Final|Native|Protected 
	// Function /Script/FabricRuntime.FabricInteractionTool.OnRep_ServerIsHoldingCable
	// void OnRep_ServerIsHoldingCable();                                                                                       // [0xc784860] Final|Native|Protected 
	// Function /Script/FabricRuntime.FabricInteractionTool.OnRep_ServerInteractionData
	// void OnRep_ServerInteractionData();                                                                                      // [0xc78484c] Final|Native|Protected 
	// Function /Script/FabricRuntime.FabricInteractionTool.OnRep_ServerContinuousInteractableValue
	// void OnRep_ServerContinuousInteractableValue();                                                                          // [0xc784818] Final|Native|Protected 
	// Function /Script/FabricRuntime.FabricInteractionTool.OnMetasoundGeneratorCrossfadeStarted__DelegateSignature
	// void OnMetasoundGeneratorCrossfadeStarted__DelegateSignature(float CrossfadeSeconds);                                    // [0x228deb8] MulticastDelegate|Public|Delegate 
	// Function /Script/FabricRuntime.FabricInteractionTool.OnInteractionStateChanged__DelegateSignature
	// void OnInteractionStateChanged__DelegateSignature(EFabricInteractionToolStates NewState, class AFortCreativeDeviceProp* Device); // [0x228deb8] MulticastDelegate|Public|Delegate 
	// Function /Script/FabricRuntime.FabricInteractionTool.OnCableHeldStateChanged__DelegateSignature
	// void OnCableHeldStateChanged__DelegateSignature(class AFortCreativeDeviceProp* Device);                                  // [0x228deb8] MulticastDelegate|Public|Delegate 
	// Function /Script/FabricRuntime.FabricInteractionTool.IsRunningOnOwningClient
	// bool IsRunningOnOwningClient();                                                                                          // [0xc7843fc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricInteractionTool.IsHoldingCables
	// bool IsHoldingCables();                                                                                                  // [0xc7843bc] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/FabricRuntime.FabricInteractionTool.HandleMetasoundGeneratorCrossfade
	// void HandleMetasoundGeneratorCrossfade(float CrossfadeSeconds);                                                          // [0xc784284] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricInteractionTool.GetPressedInteractable
	// class UObject* GetPressedInteractable();                                                                                 // [0xc7841d8] Final|Native|Protected|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricInteractionTool.GetHoveredInteractableType
	// EFabricInteractableType GetHoveredInteractableType();                                                                    // [0xc783ee4] Final|Native|Protected|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricInteractionTool.GetHoveredInteractableHitComponent
	// class USceneComponent* GetHoveredInteractableHitComponent();                                                             // [0xc783ecc] Final|Native|Protected|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricInteractionTool.GetFabricInteractionToolState
	// EFabricInteractionToolStates GetFabricInteractionToolState();                                                            // [0xc783eb4] Final|Native|Protected|BlueprintCallable|BlueprintPure 
	// Function /Script/FabricRuntime.FabricInteractionTool.GetContinuousStateValue
	// int32_t GetContinuousStateValue();                                                                                       // [0xc783e20] Final|Native|Protected|BlueprintCallable|BlueprintPure 
	// Function /Script/FabricRuntime.FabricInteractionTool.GetContinuousMovementValue
	// float GetContinuousMovementValue();                                                                                      // [0xc783df8] Final|Native|Protected|BlueprintCallable|BlueprintPure 
	// Function /Script/FabricRuntime.FabricInteractionTool.GetContinuousInteractionDirection
	// EFabricContinuousInteractionDirection GetContinuousInteractionDirection();                                               // [0xc783d60] Final|Native|Protected|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricInteractionTool.GetContinuousInteractableValueNormalized
	// float GetContinuousInteractableValueNormalized();                                                                        // [0xc783d1c] Final|Native|Protected|BlueprintCallable|BlueprintPure 
	// Function /Script/FabricRuntime.FabricInteractionTool.DeactiveWeaponAndState
	// void DeactiveWeaponAndState();                                                                                           // [0xc783bc8] Native|Protected|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricInteractionTool.ClientStopInteracting
	// void ClientStopInteracting();                                                                                            // [0xa4fe2ec] Net|NetReliableNative|Event|Protected|NetClient 
	// Function /Script/FabricRuntime.FabricInteractionTool.ClientDeactiveWeaponAndState
	// void ClientDeactiveWeaponAndState();                                                                                     // [0xc783bb0] Net|NetReliableNative|Event|Protected|NetClient 
	// Function /Script/FabricRuntime.FabricInteractionTool.ClearSplineMesh
	// void ClearSplineMesh();                                                                                                  // [0xc783b9c] Final|Native|Public|BlueprintCallable 
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
	// void Reset();                                                                                                            // [0xc788254] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMeshTreeNode.GenerateMeshInstanceReferences
	// TArray<FFabricMeshInstanceReference> GenerateMeshInstanceReferences();                                                   // [0xc787428] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricMeshTreeNode.CopyProperties
	// void CopyProperties(class UFabricMeshTreeNode* Other);                                                                   // [0xc7871e0] Final|Native|Public|BlueprintCallable 
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
	// void SetReferenceMesh(FFabricMeshProviderMeshReference& InMesh);                                                         // [0xc7889f4] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/FabricRuntime.FabricMetaSoundPatchWrapper
/// Size: 0x0460 (0x000328 - 0x000788)
class UFabricMetaSoundPatchWrapper : public UFabricModulatable
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1928;

public:
	SMember(FName)                                     EnabledStateInputName                                       OFFSET(getStruct<T>, {0x328, 4, 0, 0})
	CMember(TWeakObjectPtr<UMetaSoundPatch*>)          MetaSoundPatch                                              OFFSET(get<T>, {0x330, 32, 0, 0})
	CMember(TMap<FString, FName>)                      UserOptionsToNodeInputs                                     OFFSET(get<T>, {0x350, 80, 0, 0})
	CMember(TArray<FFabricMetaSoundPatchWrapper_PerPlatformBoolInputTuning>) PerPlatformInputBools                 OFFSET(get<T>, {0x3A0, 16, 0, 0})
	CMember(TArray<FFabricMetaSoundPatchWrapper_PerPlatformIntInputTuning>) PerPlatformInputInts                   OFFSET(get<T>, {0x3B0, 16, 0, 0})
	CMember(TArray<FFabricMetaSoundPatchWrapper_PerPlatformFloatInputTuning>) PerPlatformInputFloats               OFFSET(get<T>, {0x3C0, 16, 0, 0})
	CMember(TArray<FFabricMetaSoundDirectInputInfo>)   DirectInputs                                                OFFSET(get<T>, {0x3D0, 16, 0, 0})
	SMember(FFabricMetaSoundPatchWrapperBinding)       SimpleSignalOutputBinding                                   OFFSET(getStruct<T>, {0x3E0, 80, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnSimpleSignalBindingUpdate                                 OFFSET(getStruct<T>, {0x430, 16, 0, 0})
	SMember(FName)                                     VisibleInputParamName                                       OFFSET(getStruct<T>, {0x440, 4, 0, 0})
	SMember(FName)                                     AudibleInputParamName                                       OFFSET(getStruct<T>, {0x444, 4, 0, 0})
	DMember(bool)                                      bCanConsumeVisibleFlag                                      OFFSET(get<bool>, {0x448, 1, 0, 0})
	DMember(bool)                                      bCanConsumeAudibleFlag                                      OFFSET(get<bool>, {0x449, 1, 0, 0})
	DMember(bool)                                      bIsVisible                                                  OFFSET(get<bool>, {0x44A, 1, 0, 0})
	DMember(bool)                                      bIsAudible                                                  OFFSET(get<bool>, {0x44B, 1, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnMetaSoundOutputIntChangedBatch                            OFFSET(getStruct<T>, {0x470, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnMetaSoundOutputFloatChangedBatch                          OFFSET(getStruct<T>, {0x480, 16, 0, 0})
	CMember(class UFabricMetaSoundManagerComponent*)   CurrentManager                                              OFFSET(get<T>, {0x490, 8, 0, 0})
	CMember(TWeakObjectPtr<UFabricMetaSoundTickSubsystem*>) TickSubsystem                                          OFFSET(get<T>, {0x498, 8, 0, 0})
	SMember(FFabricMetaSoundNodeInfo)                  CurrentNode                                                 OFFSET(getStruct<T>, {0x4A0, 240, 0, 0})
	CMember(TWeakObjectPtr<AActor*>)                   PositionalProxyActor                                        OFFSET(get<T>, {0x590, 8, 0, 0})
	CMember(TWeakObjectPtr<UAudioComponent*>)          CurrentAudioComponent                                       OFFSET(get<T>, {0x5B8, 8, 0, 0})
	CMember(TWeakObjectPtr<UAudioComponent*>)          NewAudioComponent                                           OFFSET(get<T>, {0x5C0, 8, 0, 0})
	SMember(FName)                                     CombinerMetaSoundType                                       OFFSET(getStruct<T>, {0x5D8, 4, 0, 0})
	SMember(FName)                                     AnalyzerMetaSoundType                                       OFFSET(getStruct<T>, {0x5DC, 4, 0, 0})
	CMember(TArray<FFabricMetaSoundRuntimeInputInfo>)  MetaSoundRuntimeInputInfos                                  OFFSET(get<T>, {0x5E0, 16, 0, 0})
	CMember(TArray<class UFabricMetaSoundPatchWrapper*>) ConnectedInputWrappers                                    OFFSET(get<T>, {0x5F0, 16, 0, 0})
	CMember(TArray<class UFabricMetaSoundPatchWrapper*>) PendingInputWrappers                                      OFFSET(get<T>, {0x600, 16, 0, 0})
	CMember(TArray<class UFabricMetaSoundPatchWrapper*>) PendingOutputWrappers                                     OFFSET(get<T>, {0x610, 16, 0, 0})
	SMember(FFabricMetaSoundConnectionBuilder)         ConnectionBuilder                                           OFFSET(getStruct<T>, {0x620, 192, 0, 0})
	CMember(TArray<FMetaSoundCombinerNodeHandle>)      CombinersInUse                                              OFFSET(get<T>, {0x730, 16, 0, 0})
	CMember(TArray<class UFabricMetaSoundPatchWrapper*>) ConnectedOutputWrappers                                   OFFSET(get<T>, {0x740, 16, 0, 0})
	CMember(EFabricMetaSoundPatchWrapperQuality)       PatchWrapperQuality                                         OFFSET(get<T>, {0x750, 1, 0, 0})
	CMember(class UMetaSoundPatch*)                    LoadedMetaSoundPatch                                        OFFSET(get<T>, {0x768, 8, 0, 0})


	/// Functions
	// Function /Script/FabricRuntime.FabricMetaSoundPatchWrapper.SetStringInput
	// void SetStringInput(FName& MetaSoundInputName, FString Value);                                                           // [0xc78b7f0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundPatchWrapper.SetRunsOnServer
	// void SetRunsOnServer(bool bAllowRunOnServer);                                                                            // [0xc78b770] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundPatchWrapper.SetPositionalProxyActor
	// void SetPositionalProxyActor(class AActor* InLocationProxyActor);                                                        // [0xc78b670] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundPatchWrapper.SetNodeEnabled
	// void SetNodeEnabled(bool bEnabled);                                                                                      // [0xc78b59c] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundPatchWrapper.SetIsAudible
	// void SetIsAudible(bool bInIsAudible);                                                                                    // [0xc78b458] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundPatchWrapper.SetIntInput
	// void SetIntInput(FName& MetaSoundInputName, int32_t Value);                                                              // [0xc78b344] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundPatchWrapper.SetFloatInput
	// void SetFloatInput(FName& MetaSoundInputName, float Value);                                                              // [0xc78b22c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundPatchWrapper.SetEnumInput
	// void SetEnumInput(FName& MetaSoundInputName, char Value);                                                                // [0xc78b114] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundPatchWrapper.SetBoolInput
	// void SetBoolInput(FName& MetaSoundInputName, bool bValue);                                                               // [0xc78affc] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundPatchWrapper.RemoveFromCurrentGraph
	// void RemoveFromCurrentGraph();                                                                                           // [0xc78ae4c] Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundPatchWrapper.OnMetaSoundOutputValueChanged
	// void OnMetaSoundOutputValueChanged(FName OutputName, FMetaSoundOutput& MetaSoundOutput);                                 // [0xc78aae0] Native|Protected|HasOutParms 
	// Function /Script/FabricRuntime.FabricMetaSoundPatchWrapper.OnMetaSoundOutputChanged
	// void OnMetaSoundOutputChanged(FName OutputName, FMetaSoundOutput& Output);                                               // [0xc78a94c] Final|Native|Private|HasOutParms 
	// Function /Script/FabricRuntime.FabricMetaSoundPatchWrapper.OnMetasoundManagerEndPlay
	// void OnMetasoundManagerEndPlay();                                                                                        // [0xc78ac78] Final|Native|Protected 
	// Function /Script/FabricRuntime.FabricMetaSoundPatchWrapper.OnConnectedModulatorNodeCreated
	// void OnConnectedModulatorNodeCreated(class UFabricMetaSoundPatchWrapper* EnabledPatchWrapper);                           // [0xc78a51c] Final|Native|Private 
	// Function /Script/FabricRuntime.FabricMetaSoundPatchWrapper.OnConnectedModulatorEnabledChanged
	// void OnConnectedModulatorEnabledChanged(class UFabricMetaSoundPatchWrapper* EnabledPatchWrapper, bool bEnabled);         // [0xc78a1e0] Final|Native|Private 
	// Function /Script/FabricRuntime.FabricMetaSoundPatchWrapper.OnAddedToManagerGraph
	// void OnAddedToManagerGraph(class UFabricMetaSoundManagerComponent* Manager);                                             // [0x69bd8fc] Native|Event|Protected|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricMetaSoundPatchWrapper.NeedsParameterPackUpdate
	// void NeedsParameterPackUpdate();                                                                                         // [0xc78a1cc] Final|Native|Protected|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundPatchWrapper.NeedsOutputWatcherUpdate
	// void NeedsOutputWatcherUpdate();                                                                                         // [0xc78a1b8] Final|Native|Protected|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundPatchWrapper.NeedsGeneratorHandleUpdate
	// void NeedsGeneratorHandleUpdate();                                                                                       // [0xc78a1a4] Final|Native|Protected|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundPatchWrapper.NeedsAnalyzerParameterPackUpdate
	// void NeedsAnalyzerParameterPackUpdate();                                                                                 // [0xc78a190] Final|Native|Protected|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundPatchWrapper.GetRunsOnServer
	// bool GetRunsOnServer();                                                                                                  // [0xc78a10c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricMetaSoundPatchWrapper.GetNodeEnabled
	// bool GetNodeEnabled();                                                                                                   // [0xc78a0f4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricMetaSoundPatchWrapper.GetMusicClock
	// class UMusicClockComponent* GetMusicClock();                                                                             // [0xc78a0d4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricMetaSoundPatchWrapper.GetMetaSoundInputNames
	// TSet<FName> GetMetaSoundInputNames();                                                                                    // [0xc78a00c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricMetaSoundPatchWrapper.AddToManagerGraph
	// void AddToManagerGraph(class UFabricMetaSoundManagerComponent* Manager);                                                 // [0x68869bc] Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundPatchWrapper.AddToGraphOnFirstConnect
	// bool AddToGraphOnFirstConnect();                                                                                         // [0x9a43dac] Native|Event|Protected|BlueprintEvent 
};

/// Class /Script/FabricRuntime.FabricMetaSoundDrumPlayerPatchWrapper
/// Size: 0x00E0 (0x000788 - 0x000868)
class UFabricMetaSoundDrumPlayerPatchWrapper : public UFabricMetaSoundPatchWrapper
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2152;

public:
	SMember(FName)                                     PitchSampleInputName                                        OFFSET(getStruct<T>, {0x790, 4, 0, 0})
	SMember(FName)                                     SlotKitInputName                                            OFFSET(getStruct<T>, {0x794, 4, 0, 0})
	CMember(TArray<FString>)                           PitchSampleParams                                           OFFSET(get<T>, {0x798, 16, 0, 0})
	CMember(TArray<FString>)                           SlotLinkParams                                              OFFSET(get<T>, {0x7A8, 16, 0, 0})
	CMember(TArray<FString>)                           SlotUnlinkedKitParams                                       OFFSET(get<T>, {0x7B8, 16, 0, 0})
	SMember(FString)                                   CurrentKitParam                                             OFFSET(getStruct<T>, {0x7C8, 16, 0, 0})
	DMember(int32_t)                                   NumSamplesPerKit                                            OFFSET(get<int32_t>, {0x7D8, 4, 0, 0})
	CMember(TArray<FFabricMetaSoundPatchWrapperBinding>) DrumAmplitudes                                            OFFSET(get<T>, {0x7E0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnFabricMetaSoundDrumPlayerPatchDrumAmplitudesUpdate        OFFSET(getStruct<T>, {0x7F0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnFabricMetaSoundDrumPlayerSampleBanksLoaded                OFFSET(getStruct<T>, {0x800, 16, 0, 0})
	CMember(TArray<class UObject*>)                    CurrentKitSamples                                           OFFSET(get<T>, {0x858, 16, 0, 0})


	/// Functions
	// Function /Script/FabricRuntime.FabricMetaSoundDrumPlayerPatchWrapper.SlotUnlinkedKitParamChanged
	// void SlotUnlinkedKitParamChanged(int32_t PitchSampleIndex, int32_t Value);                                               // [0xc788d6c] Final|Native|Private 
	// Function /Script/FabricRuntime.FabricMetaSoundDrumPlayerPatchWrapper.SlotLinkedParamChanged
	// void SlotLinkedParamChanged(int32_t PitchSampleIndex, bool Value);                                                       // [0xc788ca8] Final|Native|Private 
	// Function /Script/FabricRuntime.FabricMetaSoundDrumPlayerPatchWrapper.PitchSampleParamChanged
	// void PitchSampleParamChanged(int32_t PitchSampleIndex, int32_t Value);                                                   // [0xc787ea4] Final|Native|Private 
	// Function /Script/FabricRuntime.FabricMetaSoundDrumPlayerPatchWrapper.LoadDrumPlayerSampleBanks
	// void LoadDrumPlayerSampleBanks(TArray<TWeakObjectPtr<UFabricMetasoundDrumPlayerSampleBankAsset*>>& SampleBankArray, TSet<int32_t>& KitNumbersToLoad); // [0xc787be4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundDrumPlayerPatchWrapper.KitIndexChanged
	// void KitIndexChanged(FName& Param, int32_t Value);                                                                       // [0xc787ad8] Final|Native|Private|HasOutParms 
};

/// Class /Script/FabricRuntime.FabricMetaSoundWetDryPatchWrapper
/// Size: 0x00B0 (0x000788 - 0x000838)
class UFabricMetaSoundWetDryPatchWrapper : public UFabricMetaSoundPatchWrapper
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2104;

public:
	SMember(FFabricMetaSoundPatchWrapperWetDryOutputBinding) WetDryOutputBinding                                   OFFSET(getStruct<T>, {0x788, 160, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnWetDryOutputSignalUpdate                                  OFFSET(getStruct<T>, {0x828, 16, 0, 0})
};

/// Class /Script/FabricRuntime.FabricMetaSoundEchoPatchWrapper
/// Size: 0x0018 (0x000838 - 0x000850)
class UFabricMetaSoundEchoPatchWrapper : public UFabricMetaSoundWetDryPatchWrapper
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2128;

public:
	DMember(bool)                                      bAllowWetSignalWaveformTexture                              OFFSET(get<bool>, {0x838, 1, 0, 0})
	DMember(bool)                                      bAllowDrySignalWaveformTexture                              OFFSET(get<bool>, {0x839, 1, 0, 0})
	CMember(class UFabricWaveformTexture*)             WetSignalWaveformTexture                                    OFFSET(get<T>, {0x840, 8, 0, 0})
	CMember(class UFabricWaveformTexture*)             DrySignalWaveformTexture                                    OFFSET(get<T>, {0x848, 8, 0, 0})
};

/// Class /Script/FabricRuntime.FabricMetaSoundInstrumentPlayerPatchWrapper
/// Size: 0x00E8 (0x000788 - 0x000870)
class UFabricMetaSoundInstrumentPlayerPatchWrapper : public UFabricMetaSoundPatchWrapper
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2160;

public:
	SMember(FMulticastInlineDelegate)                  OnFFTResultsUpdated                                         OFFSET(getStruct<T>, {0x788, 16, 0, 0})
	SMember(FFabricMetaSoundPatchWrapperBinding)       FFTAnalysisOutputBinding                                    OFFSET(getStruct<T>, {0x798, 80, 0, 0})
	DMember(int32_t)                                   FFTCPDStartIndex                                            OFFSET(get<int32_t>, {0x7E8, 4, 0, 0})
	DMember(int32_t)                                   FFTLength                                                   OFFSET(get<int32_t>, {0x7EC, 4, 0, 0})
	CMember(class UFusionPatch*)                       CurrentFusionPatch                                          OFFSET(get<T>, {0x868, 8, 0, 0})


	/// Functions
	// Function /Script/FabricRuntime.FabricMetaSoundInstrumentPlayerPatchWrapper.SetFusionPatch
	// void SetFusionPatch(class UFusionPatch* FusionPatch);                                                                    // [0xc7886c8] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundInstrumentPlayerPatchWrapper.DriveFFTDataOnPrimitive
	// void DriveFFTDataOnPrimitive(class UPrimitiveComponent* Primitive);                                                      // [0xc787260] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/FabricRuntime.FabricMetaSoundModulatorPatchWrapper
/// Size: 0x0020 (0x000788 - 0x0007A8)
class UFabricMetaSoundModulatorPatchWrapper : public UFabricMetaSoundPatchWrapper
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1960;

public:
	SMember(FMulticastInlineDelegate)                  OnPatchWrapperVisibilityChanged                             OFFSET(getStruct<T>, {0x788, 16, 0, 0})
	CMember(class UPlaylistUserOptionBase*)            CurrentUserOption                                           OFFSET(get<T>, {0x798, 8, 0, 0})
	CMember(class UFabricMetaSoundUserOption*)         MetaSoundUserOption                                         OFFSET(get<T>, {0x7A0, 8, 0, 0})
};

/// Class /Script/FabricRuntime.FabricMetaSoundLFOPatchWrapper
/// Size: 0x0018 (0x0007A8 - 0x0007C0)
class UFabricMetaSoundLFOPatchWrapper : public UFabricMetaSoundModulatorPatchWrapper
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1984;

public:
	CMember(class UFabricFloatProviderWave*)           LFOFloatProvider                                            OFFSET(get<T>, {0x7A8, 8, 0, 0})
	SMember(FName)                                     FreePhaseStartName                                          OFFSET(getStruct<T>, {0x7B0, 4, 0, 0})
	SMember(FName)                                     RandomSeedInputName                                         OFFSET(getStruct<T>, {0x7B4, 4, 0, 0})


	/// Functions
	// Function /Script/FabricRuntime.FabricMetaSoundLFOPatchWrapper.UpdateRandomSeed
	// void UpdateRandomSeed();                                                                                                 // [0xc788f48] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/FabricRuntime.FabricMetaSoundManagerComponent
/// Size: 0x0990 (0x0000A0 - 0x000A30)
class UFabricMetaSoundManagerComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2608;

public:
	CMember(TWeakObjectPtr<UMetaSoundPatch*>)          HarmonixMusicProviderPatch                                  OFFSET(get<T>, {0xA8, 32, 0, 0})
	CMember(TWeakObjectPtr<UMetaSoundPatch*>)          HarmonixMetronomeClockPatch                                 OFFSET(get<T>, {0xC8, 32, 0, 0})
	CMember(TWeakObjectPtr<UMetaSoundPatch*>)          HarmonixTempoClockPatch                                     OFFSET(get<T>, {0xE8, 32, 0, 0})
	CMember(TWeakObjectPtr<UMetaSoundPatch*>)          HarmonixTransportPatch                                      OFFSET(get<T>, {0x108, 32, 0, 0})
	CMember(TWeakObjectPtr<UMetaSoundPatch*>)          UserOptionConverterNode                                     OFFSET(get<T>, {0x128, 32, 0, 0})
	SMember(FFabricMetaSoundUtilityPatches)            MidiStreamUtilityPatches                                    OFFSET(getStruct<T>, {0x148, 136, 0, 0})
	SMember(FFabricMetaSoundUtilityPatches)            AudioUtilityPatches                                         OFFSET(getStruct<T>, {0x1D0, 136, 0, 0})
	SMember(FFabricMetaSoundUtilityPatches)            FloatUtilityPatches                                         OFFSET(getStruct<T>, {0x258, 136, 0, 0})
	SMember(FName)                                     MusicProviderVolumeName                                     OFFSET(getStruct<T>, {0x2E0, 4, 0, 0})
	SMember(FName)                                     MusicProviderRootNoteName                                   OFFSET(getStruct<T>, {0x2E4, 4, 0, 0})
	SMember(FName)                                     MusicProviderScaleName                                      OFFSET(getStruct<T>, {0x2E8, 4, 0, 0})
	SMember(FName)                                     TransportProviderPlayTriggerName                            OFFSET(getStruct<T>, {0x2EC, 4, 0, 0})
	SMember(FName)                                     TransportProviderDelayedRestartTriggerName                  OFFSET(getStruct<T>, {0x2F0, 4, 0, 0})
	SMember(FName)                                     TransportProviderRestartTriggerName                         OFFSET(getStruct<T>, {0x2F4, 4, 0, 0})
	SMember(FName)                                     TransportProviderSeekTriggerName                            OFFSET(getStruct<T>, {0x2F8, 4, 0, 0})
	SMember(FName)                                     TransportProviderPauseTriggerName                           OFFSET(getStruct<T>, {0x2FC, 4, 0, 0})
	SMember(FName)                                     TransportProviderContinueTriggerName                        OFFSET(getStruct<T>, {0x300, 4, 0, 0})
	SMember(FName)                                     TransportProviderStopTriggerName                            OFFSET(getStruct<T>, {0x304, 4, 0, 0})
	SMember(FName)                                     TransportProviderSeekTargetName                             OFFSET(getStruct<T>, {0x308, 4, 0, 0})
	SMember(FName)                                     ClockProviderTempoName                                      OFFSET(getStruct<T>, {0x30C, 4, 0, 0})
	SMember(FName)                                     ClockProviderSpeedName                                      OFFSET(getStruct<T>, {0x310, 4, 0, 0})
	SMember(FName)                                     ClockProviderTimeSigNumName                                 OFFSET(getStruct<T>, {0x314, 4, 0, 0})
	SMember(FName)                                     ClockProviderTimeSignDenomName                              OFFSET(getStruct<T>, {0x318, 4, 0, 0})
	SMember(FName)                                     ClockProviderMidiFileInName                                 OFFSET(getStruct<T>, {0x31C, 4, 0, 0})
	SMember(FName)                                     UserOptionConverterCountInName                              OFFSET(getStruct<T>, {0x320, 4, 0, 0})
	DMember(float)                                     CrossfadeSeconds                                            OFFSET(get<float>, {0x324, 4, 0, 0})
	DMember(float)                                     RebuildTimeOutSeconds                                       OFFSET(get<float>, {0x328, 4, 0, 0})
	DMember(float)                                     BlockRateOverride                                           OFFSET(get<float>, {0x32C, 4, 0, 0})
	SMember(FName)                                     QualityOverride                                             OFFSET(getStruct<T>, {0x330, 4, 0, 0})
	CMember(class UMidiFile*)                          DefaultMidiFile                                             OFFSET(get<T>, {0x338, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnMetasoundGeneratorCrossfadeStarted                        OFFSET(getStruct<T>, {0x370, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnMetasoundClockAuthorityChanged                            OFFSET(getStruct<T>, {0x3D0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPlayStateChanged                                          OFFSET(getStruct<T>, {0x3F8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnMusicEventPriorityChanged                                 OFFSET(getStruct<T>, {0x408, 16, 0, 0})
	CMember(TArray<FFabricSignificanceBasedUpdateBucketRuntime>) SignificanceRuntimeBuckets                        OFFSET(get<T>, {0x428, 16, 0, 0})
	CMember(class UFabricSignificanceAsset*)           SignificanceBasedUpdate                                     OFFSET(get<T>, {0x438, 8, 0, 0})
	DMember(float)                                     InitialCooldownTimeInSeconds                                OFFSET(get<float>, {0x440, 4, 0, 0})
	CMember(class UMetaSoundSourceBuilder*)            SourceBuilder                                               OFFSET(get<T>, {0x448, 8, 0, 0})
	CMember(class UMusicClockComponent*)               MusicClock                                                  OFFSET(get<T>, {0x450, 8, 0, 0})
	CMember(TArray<class UAudioComponent*>)            PlaybackAudioComponents                                     OFFSET(get<T>, {0x458, 16, 0, 0})
	CMember(TArray<class UMetasoundOfflinePlayerComponent*>) ServerPlaybackComponents                              OFFSET(get<T>, {0x468, 16, 0, 0})
	SMember(FFabricTransportRequestConfig)             CurrentTransportRequestLock                                 OFFSET(getStruct<T>, {0x4C8, 12, 0, 0})
	SMember(FFabricMetaSoundNodeInfo)                  HarmonixMusicProviderNode                                   OFFSET(getStruct<T>, {0x4E0, 240, 0, 0})
	SMember(FFabricMetaSoundNodeInfo)                  HarmonixMetronomeClockNode                                  OFFSET(getStruct<T>, {0x5D0, 240, 0, 0})
	SMember(FFabricMetaSoundNodeInfo)                  HarmonixMidiTempoClockNode                                  OFFSET(getStruct<T>, {0x6C0, 240, 0, 0})
	SMember(FFabricMetaSoundNodeInfo)                  HarmonixTransportNode                                       OFFSET(getStruct<T>, {0x7B0, 240, 0, 0})
	SMember(FMetaSoundBuilderNodeOutputHandle)         OnPlayNodeOutput                                            OFFSET(getStruct<T>, {0x8A0, 32, 0, 0})
	SMember(FMetaSoundBuilderNodeInputHandle)          OnFinishedNodeInput                                         OFFSET(getStruct<T>, {0x8C0, 32, 0, 0})
	CMember(TArray<FMetaSoundBuilderNodeInputHandle>)  AudioOutNodeInputs                                          OFFSET(get<T>, {0x8E0, 16, 0, 0})
	CMember(TMap<UMetaSoundPatch*, FFabricMetaSoundNodePool>) FreeMetaSoundNodes                                   OFFSET(get<T>, {0x938, 80, 0, 0})
	CMember(TMap<FName, FFabricLoadedUtilityPatches>)  UtilityNodeTypesToPatches                                   OFFSET(get<T>, {0x988, 80, 0, 0})
	DMember(bool)                                      bGraphDirty                                                 OFFSET(get<bool>, {0x9E8, 1, 0, 0})
	DMember(bool)                                      bIsAudioless                                                OFFSET(get<bool>, {0x9E9, 1, 0, 0})
	DMember(bool)                                      bHasCompletedInitialCooldown                                OFFSET(get<bool>, {0x9EA, 1, 0, 0})
	CMember(EFabricMetasoundClock)                     CurrentClockType                                            OFFSET(get<T>, {0x9EB, 1, 0, 0})
	DMember(bool)                                      bReadyForRebuildOnReturnToPregame                           OFFSET(get<bool>, {0x9EC, 1, 0, 0})
	DMember(bool)                                      bAllowGraphRebuildOnReturnToPregame                         OFFSET(get<bool>, {0x9ED, 1, 0, 0})
	CMember(EFabricMetasoundPlayState)                 CurrentPlayState                                            OFFSET(get<T>, {0x9EE, 1, 0, 0})
	CMember(EFabricMetasoundPlayState)                 PlayStateAfterRebuild                                       OFFSET(get<T>, {0x9EF, 1, 0, 0})
	CMember(EJamFabricSyncType)                        JamSyncType                                                 OFFSET(get<T>, {0x9F0, 1, 0, 0})
	CMember(EFabricMetasoundMusicEventPriority)        MusicEventPriority                                          OFFSET(get<T>, {0x9F1, 1, 0, 0})
	SMember(FName)                                     ClientCurrentAudibleMusicEventGroup                         OFFSET(getStruct<T>, {0x9F4, 4, 0, 0})
	SMember(FGameplayTag)                              AboveEmotesTag                                              OFFSET(getStruct<T>, {0x9F8, 4, 0, 0})
	SMember(FGameplayTag)                              BelowEmotesTag                                              OFFSET(getStruct<T>, {0x9FC, 4, 0, 0})
	DMember(float)                                     ReplicatedReceivedSignalBufferDuration                      OFFSET(get<float>, {0xA00, 4, 0, 0})
	CMember(EFabricMetasoundUtilityLoadedBroadcastBy)  LastBroadcastBy                                             OFFSET(get<T>, {0xA2A, 1, 0, 0})


	/// Functions
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.UnregisterAsAudible
	// void UnregisterAsAudible(class AActor* Device);                                                                          // [0xc788ec8] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.StopMetasound
	// bool StopMetasound(FFabricTransportRequestConfig& PlayConfig);                                                           // [0xc788e2c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.ShouldSeekToStartOnGameReset
	// bool ShouldSeekToStartOnGameReset();                                                                                     // [0xc788c8c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.SetTimeSignature
	// void SetTimeSignature(int32_t Numerator, int32_t Denominator);                                                           // [0xc788bcc] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.SetTempo
	// void SetTempo(float Tempo);                                                                                              // [0xc788b4c] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.SetSpeed
	// void SetSpeed(float Speed);                                                                                              // [0xc788acc] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.SetMusicKey
	// void SetMusicKey(EMusicKey Key, EMusicKeyMode Mode);                                                                     // [0xc788930] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.SetMusicEventPriority
	// void SetMusicEventPriority(EFabricMetasoundMusicEventPriority InMusicEventPriority);                                     // [0xc788894] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.SetMusicClock
	// void SetMusicClock(class UMusicClockComponent* MusicClockComponent);                                                     // [0xc788814] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.SetMidiFile
	// void SetMidiFile(class UMidiFile* MidiFile);                                                                             // [0xc788794] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.SetCurrentJamSyncType
	// void SetCurrentJamSyncType(EJamFabricSyncType& InJamSyncType);                                                           // [0xc78863c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.SetClockAuthority
	// void SetClockAuthority(FFabricTransportRequestConfig& InFabricTransportRequest, EFabricMetasoundClock InClockType);      // [0xc7884b8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.SetAudioComponents
	// void SetAudioComponents(TArray<UAudioComponent*> AudioComponents);                                                       // [0xc78840c] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.SeekToTimestamp
	// void SeekToTimestamp(FMusicTimestamp& Timestamp);                                                                        // [0xc788378] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.SeekToMs
	// void SeekToMs(float Ms);                                                                                                 // [0xc7882f8] Final|Native|Public  
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.RestartMetasoundPlayback
	// void RestartMetasoundPlayback(FFabricTransportRequestConfig& InFabricTransportRequest);                                  // [0xc788268] Final|Native|Public|HasOutParms 
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.ReleaseClockAuthority
	// void ReleaseClockAuthority(FFabricTransportRequestConfig& InFabricTransportRequest, EFabricMetasoundClock InClockType);  // [0xc7880d0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.RegisterAsAudible
	// void RegisterAsAudible(class AActor* Device, FName& AudibleEventGroup);                                                  // [0xc788000] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.PlayMetasound
	// bool PlayMetasound(FFabricTransportRequestConfig& PlayConfig);                                                           // [0xc787f64] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.PauseMetasound
	// bool PauseMetasound();                                                                                                   // [0xc787e80] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.OnMinigamePreGame
	// void OnMinigamePreGame();                                                                                                // [0xc787e44] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.OnMinigameInProgress
	// void OnMinigameInProgress();                                                                                             // [0xc787e1c] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.OnGeneratorJustStarted
	// void OnGeneratorJustStarted(int32_t ComponentIndex);                                                                     // [0xc787d9c] Final|Native|Private 
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.NotifyGraphChanged
	// void NotifyGraphChanged();                                                                                               // [0xc787d84] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.InvalidateMetasoundGeneratorHandle
	// void InvalidateMetasoundGeneratorHandle();                                                                               // [0xc787ac4] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.GetMusicEventTag
	// FGameplayTag GetMusicEventTag(EFabricMetasoundMusicEventPriority InMusicEventPriority);                                  // [0xc787a30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.GetMusicEventPriority
	// EFabricMetasoundMusicEventPriority GetMusicEventPriority();                                                              // [0xc787a18] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.GetMusicClock
	// class UMusicClockComponent* GetMusicClock();                                                                             // [0xaae230c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.GetMetasoundOutputNodeName
	// FName GetMetasoundOutputNodeName(FName NodeName, FName OutputName);                                                      // [0xc787818] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.GetMetaSoundNodeForWrapper
	// FFabricMetaSoundNodeInfo GetMetaSoundNodeForWrapper(class UFabricMetaSoundPatchWrapper* PatchWrapper);                   // [0xc787554] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.GetMetasoundInputNodeName
	// FName GetMetasoundInputNodeName(FName NodeName, FName InputName);                                                        // [0xc787618] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.GetCurrentPlaystate
	// EFabricMetasoundPlayState GetCurrentPlaystate();                                                                         // [0xc78753c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.GetCurrentPlaybackAudioComponent
	// class UAudioComponent* GetCurrentPlaybackAudioComponent();                                                               // [0xc78751c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.GetCurrentMusicEventTag
	// FGameplayTag GetCurrentMusicEventTag();                                                                                  // [0xc7874f4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.GetCurrentJamSyncType
	// EJamFabricSyncType GetCurrentJamSyncType();                                                                              // [0xc7874dc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.GetCurrentClientAudibleMusicEventGroup
	// FName GetCurrentClientAudibleMusicEventGroup();                                                                          // [0xc7874c4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.GetBuilder
	// class UMetaSoundSourceBuilder* GetBuilder();                                                                             // [0x9226c64] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.FreeMetaSoundNode
	// void FreeMetaSoundNode(FFabricMetaSoundNodeInfo& Node);                                                                  // [0xc787364] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.AreAllPatchesReady
	// bool AreAllPatchesReady();                                                                                               // [0xc7871bc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.AddOutputNodeForOutputVertex
	// void AddOutputNodeForOutputVertex(FMetaSoundBuilderNodeOutputHandle& OutputVertex, FName& NodeName, FName& OutOutputName, EMetaSoundBuilderResult& Result); // [0xc786f70] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.AddInputNodeForNodeByNameBP
	// void AddInputNodeForNodeByNameBP(FFabricMetaSoundNodeInfo& InOutNode, EFabricUserOptionType UserOptionType, FName& InputName); // [0xc786d2c] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/FabricRuntime.FabricNoteReceivedPatchWrapper
/// Size: 0x0048 (0x000788 - 0x0007D0)
class UFabricNoteReceivedPatchWrapper : public UFabricMetaSoundPatchWrapper
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2000;

public:
	SMember(FName)                                     NoteOutputName                                              OFFSET(getStruct<T>, {0x788, 4, 0, 0})
	CMember(TArray<FString>)                           TriggerNoteParams                                           OFFSET(get<T>, {0x790, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnMatchingMidiEventPassed                                   OFFSET(getStruct<T>, {0x7A0, 16, 0, 0})


	/// Functions
	// Function /Script/FabricRuntime.FabricNoteReceivedPatchWrapper.OnTriggerNoteChanged
	// void OnTriggerNoteChanged(int32_t NoteIndex, bool bTriggerActive);                                                       // [0xc78ad88] Final|Native|Protected 
	// Function /Script/FabricRuntime.FabricNoteReceivedPatchWrapper.OnMetaSoundMidiEventPassed
	// void OnMetaSoundMidiEventPassed(FName OutputName, FMetaSoundOutput& Output);                                             // [0xc78a7bc] Final|Native|Protected|HasOutParms 
};

/// Class /Script/FabricRuntime.FabricNoteTriggerPatchWrapper
/// Size: 0x0028 (0x0007D0 - 0x0007F8)
class UFabricNoteTriggerPatchWrapper : public UFabricNoteReceivedPatchWrapper
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2040;

public:
	SMember(FString)                                   OctaveParam                                                 OFFSET(getStruct<T>, {0x7D0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnAnyMidiEventPassed                                        OFFSET(getStruct<T>, {0x7E0, 16, 0, 0})


	/// Functions
	// Function /Script/FabricRuntime.FabricNoteTriggerPatchWrapper.OnOctaveChanged
	// void OnOctaveChanged(FName& ParamName, int32_t InOctave);                                                                // [0xc78ac8c] Final|Native|Protected|HasOutParms 
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
	// void Reset();                                                                                                            // [0xc78ae64] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundTreeNode.GetValidChildren
	// TArray<UFabricMetaSoundTreeNode*> GetValidChildren();                                                                    // [0xc78a124] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundTreeNode.ConnectToChildNodes
	// void ConnectToChildNodes();                                                                                              // [0xc789ff8] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/FabricRuntime.FabricMetaSoundSequencerPatchWrapper
/// Size: 0x0008 (0x000788 - 0x000790)
class UFabricMetaSoundSequencerPatchWrapper : public UFabricMetaSoundPatchWrapper
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1936;

public:
	CMember(class UMidiStepSequence*)                  CurrentStepSequence                                         OFFSET(get<T>, {0x788, 8, 0, 0})


	/// Functions
	// Function /Script/FabricRuntime.FabricMetaSoundSequencerPatchWrapper.SetMidiStepSequence
	// void SetMidiStepSequence(class UMidiStepSequence* StepSequence);                                                         // [0xc78b4d8] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/FabricRuntime.FabricMetaSoundSpeakerPatchWrapper
/// Size: 0x0028 (0x000788 - 0x0007B0)
class UFabricMetaSoundSpeakerPatchWrapper : public UFabricMetaSoundPatchWrapper
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1968;

public:
	CMember(TArray<FFabricMetaSoundSpeakerPatchWrapperEqBandsBinding>) EqBands                                     OFFSET(get<T>, {0x788, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnFabricMetaSoundSpeakerPatchEqBandUpdate                   OFFSET(getStruct<T>, {0x798, 16, 0, 0})


	/// Functions
	// Function /Script/FabricRuntime.FabricMetaSoundSpeakerPatchWrapper.SetAudioBusFromSourceBus
	// void SetAudioBusFromSourceBus(class USoundSourceBus* Bus);                                                               // [0xc78ae78] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/FabricRuntime.FabricMetaSoundSplitterPatchWrapper
/// Size: 0x0058 (0x000788 - 0x0007E0)
class UFabricMetaSoundSplitterPatchWrapper : public UFabricMetaSoundPatchWrapper
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2016;

public:
	CMember(TMap<FName, FFabricMetaSoundNodeInfo>)     SplitterNodes                                               OFFSET(get<T>, {0x790, 80, 0, 0})
};

/// Class /Script/FabricRuntime.FabricMetaSoundTickSubsystem
/// Size: 0x01E0 (0x0000D0 - 0x0002B0)
class UFabricMetaSoundTickSubsystem : public UFortManagedTickSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 688;

public:
};

/// Class /Script/FabricRuntime.FabricMidiFollowComponent
/// Size: 0x0040 (0x0000A0 - 0x0000E0)
class UFabricMidiFollowComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	SMember(FMulticastInlineDelegate)                  OnMidiFinished                                              OFFSET(getStruct<T>, {0xA0, 16, 0, 0})
	CMember(class UMidiFile*)                          CurrentMidiFile                                             OFFSET(get<T>, {0xB0, 8, 0, 0})


	/// Functions
	// Function /Script/FabricRuntime.FabricMidiFollowComponent.SetMusicClock
	// void SetMusicClock(class UMusicClockComponent* InMusicClock);                                                            // [0xc792910] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMidiFollowComponent.SetMidiOutputEnabled
	// void SetMidiOutputEnabled(bool bInMidiOutputEnabled);                                                                    // [0xc792880] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMidiFollowComponent.SetMidiFile
	// void SetMidiFile(class UMidiFile* InMidiFile, int32_t InMidiTrackIndex, float InMsOffset, float InBeatOffset, bool bInUseMidiTempo); // [0xc7925fc] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMidiFollowComponent.SetFabricMetaSoundManager
	// void SetFabricMetaSoundManager(class UFabricMetaSoundManagerComponent* InFabricMetaSoundManager);                        // [0xc792264] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMidiFollowComponent.OnFabricPlayStateChanged
	// void OnFabricPlayStateChanged(EFabricMetasoundPlayState CurrentState);                                                   // [0xc7915d8] Final|Native|Private 
};

/// Class /Script/FabricRuntime.FabricMIDIPlayerPatchWrapper
/// Size: 0x0030 (0x0007D0 - 0x000800)
class UFabricMIDIPlayerPatchWrapper : public UFabricNoteReceivedPatchWrapper
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2048;

public:
	SMember(FName)                                     MidiTrackIndexUserOptionName                                OFFSET(getStruct<T>, {0x7D0, 4, 0, 0})
	SMember(FName)                                     EnableMidiOutputName                                        OFFSET(getStruct<T>, {0x7D4, 4, 0, 0})
	SMember(FName)                                     TempoMapMidiOutName                                         OFFSET(getStruct<T>, {0x7D8, 4, 0, 0})
	CMember(class UMidiFile*)                          CurrentMidiFile                                             OFFSET(get<T>, {0x7E0, 8, 0, 0})
	DMember(int32_t)                                   CurrentMidiTrackIndex                                       OFFSET(get<int32_t>, {0x7E8, 4, 0, 0})


	/// Functions
	// Function /Script/FabricRuntime.FabricMIDIPlayerPatchWrapper.SetMidiOutputEnabled
	// void SetMidiOutputEnabled(bool bMidiOutputEnabled);                                                                      // [0xc792800] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMIDIPlayerPatchWrapper.SetMidiFile
	// void SetMidiFile(class UMidiFile* MidiFile);                                                                             // [0xc792538] Final|Native|Public|BlueprintCallable 
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
	// class UPlaylistUserOptionBase* GetUserOption(FString Property);                                                          // [0xc790288] Native|Event|Public|BlueprintEvent|Const 
	// Function /Script/FabricRuntime.FabricModulatorSource.GetModulators
	// void GetModulators(class UFabricModulatable* Modulatable);                                                               // [0x8aac024] Native|Event|Public|BlueprintEvent 
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
	// void SetUserOption(EFabricUserOptionType UserOptionType, class UPlaylistUserOptionBase* UserOption, class UObject* ModulatorObject); // [0xc792cd8] Native|Event|Public|BlueprintEvent 
};

/// Class /Script/FabricRuntime.FabricProgressorManager
/// Size: 0x0040 (0x0000A0 - 0x0000E0)
class UFabricProgressorManager : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	SMember(FMulticastInlineDelegate)                  OnGlobalProgressionChanged                                  OFFSET(getStruct<T>, {0xA8, 16, 0, 0})
	DMember(bool)                                      bHasActiveGlobalProgression                                 OFFSET(get<bool>, {0xB8, 1, 0, 0})
	DMember(int32_t)                                   GlobalPresetNumber                                          OFFSET(get<int32_t>, {0xBC, 4, 0, 0})
	SMember(FFabricProgressionPreset)                  GlobalProgression                                           OFFSET(getStruct<T>, {0xC0, 32, 0, 0})


	/// Functions
	// Function /Script/FabricRuntime.FabricProgressorManager.SetGlobalProgression
	// void SetGlobalProgression(FFabricProgressionPreset& InProgression, int32_t InPresetNumber);                              // [0xc7922e4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricProgressorManager.OnProgressionChanged__DelegateSignature
	// void OnProgressionChanged__DelegateSignature();                                                                          // [0x228deb8] MulticastDelegate|Public|Delegate 
	// Function /Script/FabricRuntime.FabricProgressorManager.IsProgressionGlobal
	// bool IsProgressionGlobal(FFabricProgressionPreset& InProgression);                                                       // [0xc791518] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/FabricRuntime.FabricProgressorManager.HasActiveGlobalProgression
	// bool HasActiveGlobalProgression();                                                                                       // [0xbb8482c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricProgressorManager.GetGlobalProgression
	// FFabricProgressionPreset GetGlobalProgression();                                                                         // [0xc78d9ec] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricProgressorManager.GetGlobalPresetNumber
	// int32_t GetGlobalPresetNumber();                                                                                         // [0xc78d9d4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/FabricRuntime.FabricSteppedPreviewFXComponent
/// Size: 0x0068 (0x000958 - 0x0009C0)
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
	// void UpdateStepData(int32_t Index, bool bMarkRenderStateDirty);                                                          // [0xc796924] Native|Protected|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricSteppedPreviewFXComponent.UpdateExistingTransforms
	// void UpdateExistingTransforms(int32_t NumInstances, int32_t NumSteps);                                                   // [0xc7967e4] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricSteppedPreviewFXComponent.UpdateDeviceEnabledFX
	// void UpdateDeviceEnabledFX(bool bEnabled);                                                                               // [0xc796750] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricSteppedPreviewFXComponent.UpdateAllCurrentStepData
	// void UpdateAllCurrentStepData(int32_t NumSteps, float StepLengthBeats);                                                  // [0xc796688] Native|Protected|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricSteppedPreviewFXComponent.SetSpanLength
	// void SetSpanLength(int32_t InstanceIndex, float SpanLengthBeats);                                                        // [0xc795fa0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricSteppedPreviewFXComponent.SetNumSteps
	// void SetNumSteps(int32_t NumSteps);                                                                                      // [0xc795c40] Final|Native|Protected|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricSteppedPreviewFXComponent.SetNoteTime
	// void SetNoteTime(int32_t InstanceIndex, float NoteTimeOffsetBeats);                                                      // [0xc795b7c] Final|Native|Protected|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricSteppedPreviewFXComponent.SetNoteOn
	// void SetNoteOn(int32_t InstanceIndex, float NoteOn, bool bMarkRenderStateDirty);                                         // [0xc795a04] Final|Native|Protected|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricSteppedPreviewFXComponent.SetNoteLength
	// void SetNoteLength(int32_t InstanceIndex, float NoteLengthBeats);                                                        // [0xc795940] Final|Native|Protected|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricSteppedPreviewFXComponent.SetGenericFloatValue
	// void SetGenericFloatValue(int32_t InstanceIndex, float FloatValue, bool bMarkRenderStateDirty);                          // [0xc7954e0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricSteppedPreviewFXComponent.OnQuarterNotesLengthChanged
	// void OnQuarterNotesLengthChanged(float QuarterNoteLength);                                                               // [0xc7952b0] Native|Protected     
	// Function /Script/FabricRuntime.FabricSteppedPreviewFXComponent.OnPageChanged
	// void OnPageChanged(int32_t CurrentPage);                                                                                 // [0xc79522c] Native|Protected     
	// Function /Script/FabricRuntime.FabricSteppedPreviewFXComponent.OnNumTracksChanged
	// void OnNumTracksChanged(int32_t NumTracks);                                                                              // [0xc791fe4] Native|Protected     
	// Function /Script/FabricRuntime.FabricSteppedPreviewFXComponent.OnNumStepsChanged
	// void OnNumStepsChanged(int32_t NumSteps);                                                                                // [0xc791f60] Native|Protected     
	// Function /Script/FabricRuntime.FabricSteppedPreviewFXComponent.OnNoteStyleChanged
	// void OnNoteStyleChanged(EFabricNoteStyle style);                                                                         // [0xc7951a8] Native|Protected     
	// Function /Script/FabricRuntime.FabricSteppedPreviewFXComponent.OnBeatScaleChanged
	// void OnBeatScaleChanged(float BeatScale);                                                                                // [0xc795124] Native|Protected     
	// Function /Script/FabricRuntime.FabricSteppedPreviewFXComponent.OnBeatOffsetChanged
	// void OnBeatOffsetChanged(float BeatOffset);                                                                              // [0xc7950a0] Native|Protected     
	// Function /Script/FabricRuntime.FabricSteppedPreviewFXComponent.GetNoteOn
	// float GetNoteOn(int32_t InstanceIndex);                                                                                  // [0xc7945b4] Native|Protected|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricSteppedPreviewFXComponent.ConstructPreviewVisuals
	// void ConstructPreviewVisuals(int32_t NumSteps, float StepBeatLength, bool bForceUpdateTransform, bool bInTestNotesOn);   // [0xc794038] Native|Public|BlueprintCallable 
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
	// void UpdateNoteOn(int32_t Index, int32_t NumSteps, bool bMarkRenderStateDirty);                                          // [0xc792e64] Final|Native|Private|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricSequencerPreviewFXComponent.SetSustainLength
	// void SetSustainLength(int32_t InstanceIndex, float SustainLengthBeats);                                                  // [0xc792c14] Final|Native|Private|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricSequencerPreviewFXComponent.SetSingleTrackNoteOn
	// void SetSingleTrackNoteOn(int32_t InstanceIndex, int32_t TrackPICDIndex, float NoteOn, bool bMarkRenderStateDirty);      // [0xc792a10] Final|Native|Private|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricSequencerPreviewFXComponent.OnStepChanged
	// void OnStepChanged(FFabricSequencerStepChangedInfo& StepInfo);                                                           // [0xc792068] Final|Native|Protected|HasOutParms 
	// Function /Script/FabricRuntime.FabricSequencerPreviewFXComponent.OnFullTableChanged
	// void OnFullTableChanged();                                                                                               // [0xc7916a0] Final|Native|Protected 
	// Function /Script/FabricRuntime.FabricSequencerPreviewFXComponent.InitializePreviewFXComponent
	// void InitializePreviewFXComponent(class UFabricStepSequencerComponent* InStepSequencer, class UFabricStepSequencerGridComponent* InStepSequencerGrid, bool bInTestNotesOn); // [0xc79096c] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/FabricRuntime.FabricSequencerSustainComponent
/// Size: 0x0088 (0x000958 - 0x0009E0)
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
	// void UpdateVisibilityOfInstances();                                                                                      // [0xc793240] Final|Native|Protected|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricSequencerSustainComponent.UpdateSustainMaterial
	// void UpdateSustainMaterial(int32_t InstanceIndex, int32_t HeadNoteStepIndex, int32_t TrackIndex);                        // [0xc79314c] Final|Native|Protected|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricSequencerSustainComponent.UpdateSustainInstance
	// void UpdateSustainInstance(int32_t StepIndex, int32_t TrackIndex, int32_t PageIndex, bool bEnabled, bool bContinuous, bool bStepChanged); // [0xc792f7c] Final|Native|Protected|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricSequencerSustainComponent.UpdatePipsOnGridChanged
	// void UpdatePipsOnGridChanged();                                                                                          // [0xc792f68] Final|Native|Protected|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricSequencerSustainComponent.UpdateDeviceEnabledOnSustain
	// void UpdateDeviceEnabledOnSustain(bool bEnabled);                                                                        // [0xc792dd0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricSequencerSustainComponent.SetStartBeat
	// void SetStartBeat(int32_t InstanceIndex, float StartBeatValue);                                                          // [0xc792b50] Final|Native|Protected|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricSequencerSustainComponent.SetLoopBeat
	// void SetLoopBeat(int32_t InstanceIndex, float LoopBeatValue);                                                            // [0xc792474] Final|Native|Protected|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricSequencerSustainComponent.SetEndBeat
	// void SetEndBeat(int32_t InstanceIndex, float EndBeatValue);                                                              // [0xc7921a0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricSequencerSustainComponent.OnStepChanged
	// void OnStepChanged(FFabricSequencerStepChangedInfo& StepInfo);                                                           // [0xc792104] Final|Native|Protected|HasOutParms 
	// Function /Script/FabricRuntime.FabricSequencerSustainComponent.OnPageChanged
	// void OnPageChanged(int32_t CurrentPage);                                                                                 // [0xc791fe4] Native|Protected     
	// Function /Script/FabricRuntime.FabricSequencerSustainComponent.OnNumTracksChanged
	// void OnNumTracksChanged(int32_t NumTracks);                                                                              // [0xc791f60] Native|Protected     
	// Function /Script/FabricRuntime.FabricSequencerSustainComponent.OnNumStepsChanged
	// void OnNumStepsChanged(int32_t NumSteps);                                                                                // [0xc791edc] Native|Protected     
	// Function /Script/FabricRuntime.FabricSequencerSustainComponent.OnFullTableChanged
	// void OnFullTableChanged();                                                                                               // [0xc7916b4] Final|Native|Protected 
	// Function /Script/FabricRuntime.FabricSequencerSustainComponent.InitializeSustainComponent
	// void InitializeSustainComponent(class UFabricStepSequencerComponent* InStepSequencer, class UFabricStepSequencerGridComponent* InStepSequencerGrid); // [0xc790a70] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricSequencerSustainComponent.FindHeadNoteAndUpdateInstance
	// void FindHeadNoteAndUpdateInstance(int32_t StepIndex, int32_t TrackIndex);                                               // [0xc78d914] Final|Native|Protected|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricSequencerSustainComponent.FindAndDeleteInstance
	// void FindAndDeleteInstance(int32_t StepIndex, int32_t TrackIndex);                                                       // [0xc78d854] Final|Native|Protected|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricSequencerSustainComponent.ConstructSustains
	// void ConstructSustains();                                                                                                // [0xc78d840] Final|Native|Protected|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricSequencerSustainComponent.CalculateSustainLength
	// float CalculateSustainLength(float NumStepsCoveredBySustain);                                                            // [0xc78d7b0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricSequencerSustainComponent.AddSustainInstance
	// void AddSustainInstance(int32_t StepIndex, int32_t TrackIndex);                                                          // [0xc78d6f0] Final|Native|Protected|BlueprintCallable 
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
	// void UpdatePackedStepTableSaveRecordIfChanged(FFabricStepTablePacked& InPackedStepTable);                                // [0xc7968a4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.ToggleStepEnabledOnPage
	// void ToggleStepEnabledOnPage(int32_t Page, int32_t Row, int32_t Column);                                                 // [0xc796594] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.ToggleStepEnabled
	// void ToggleStepEnabled(int32_t Row, int32_t Column);                                                                     // [0xc7964cc] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.SetStepEnabledOnPage
	// void SetStepEnabledOnPage(int32_t Page, int32_t Row, int32_t Column, bool bState);                                       // [0xc796390] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.SetStepEnabled
	// void SetStepEnabled(int32_t Row, int32_t Column, bool bState);                                                           // [0xc796298] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.SetStepContinuationOnPage
	// void SetStepContinuationOnPage(int32_t Page, int32_t Row, int32_t Column, bool bIsContinuation);                         // [0xc79615c] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.SetStepContinuation
	// void SetStepContinuation(int32_t Row, int32_t Column, bool bIsContinuation);                                             // [0xc796064] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.SetQuarterNotesLength
	// void SetQuarterNotesLength(float QuarterNotes);                                                                          // [0xc795f20] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.SetPlaying
	// void SetPlaying(bool bNewPlaying);                                                                                       // [0xc795ea0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.SetNumberTracks
	// void SetNumberTracks(int32_t NumTracks);                                                                                 // [0xc795ddc] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.SetNumberSteps
	// void SetNumberSteps(int32_t NumSteps);                                                                                   // [0xc795d5c] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.SetNumberPages
	// void SetNumberPages(int32_t NumPages);                                                                                   // [0xc795cc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.SetNoteStyle
	// void SetNoteStyle(EFabricNoteStyle style);                                                                               // [0xc795afc] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.SetNoteForTrack
	// void SetNoteForTrack(FMidiNote Note, int32_t Track);                                                                     // [0xc79587c] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.SetMusicClock
	// void SetMusicClock(class UMusicClockComponent* InMusicClock);                                                            // [0xc79577c] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.SetMonophonic
	// void SetMonophonic(bool bNewMonophonic);                                                                                 // [0xc7956fc] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.SetMaxSteps
	// void SetMaxSteps(int32_t NumSteps);                                                                                      // [0xc795668] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.SetLoop
	// void SetLoop(bool bNewLoop);                                                                                             // [0xc7955e8] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.SetCurrentPage
	// void SetCurrentPage(int32_t NewPage);                                                                                    // [0xc795460] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.SetBeatScale
	// void SetBeatScale(float BeatScale);                                                                                      // [0xc7953e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.RandomizePage
	// void RandomizePage(int32_t Page);                                                                                        // [0xc795360] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.RandomizeCurrentPage
	// void RandomizeCurrentPage();                                                                                             // [0xc795348] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.OnRep_PackedStepTable
	// void OnRep_PackedStepTable();                                                                                            // [0xc795334] Final|Native|Private 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.IsStepEnabledForAnyTrackOnPage
	// bool IsStepEnabledForAnyTrackOnPage(int32_t Page, int32_t Column);                                                       // [0xc794fe0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.IsStepEnabledForAnyTrack
	// bool IsStepEnabledForAnyTrack(int32_t Column);                                                                           // [0xc794f48] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.IsPageBlank
	// bool IsPageBlank(int32_t PageIndex);                                                                                     // [0xc794eb8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.GetSupportsContinuation
	// bool GetSupportsContinuation();                                                                                          // [0x91b7358] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.GetStepStartQuarterNotes
	// float GetStepStartQuarterNotes(int32_t Step);                                                                            // [0xc794e14] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.GetStepStartBeat
	// float GetStepStartBeat(int32_t Step);                                                                                    // [0xc794d68] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.GetStepIsContinuationOnPage
	// bool GetStepIsContinuationOnPage(int32_t Page, int32_t Row, int32_t Column);                                             // [0xc794c70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.GetStepIsContinuation
	// bool GetStepIsContinuation(int32_t Row, int32_t Column);                                                                 // [0xc794ba4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.GetStepEnabledOnPage
	// bool GetStepEnabledOnPage(int32_t Page, int32_t Row, int32_t Column);                                                    // [0xc794aac] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.GetStepEnabled
	// bool GetStepEnabled(int32_t Row, int32_t Column);                                                                        // [0xc7949e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.GetStepContinuationLengthOnPage
	// float GetStepContinuationLengthOnPage(int32_t Page, int32_t Row, int32_t Column);                                        // [0xc7948e8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.GetStepContinuationLength
	// float GetStepContinuationLength(int32_t Row, int32_t Column);                                                            // [0xc79481c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.GetPageData
	// void GetPageData(int32_t PageIndex, FStepSequencePage& OutPageData);                                                     // [0xc794704] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.GetNumUsedSteps
	// int32_t GetNumUsedSteps(int32_t TotalSteps);                                                                             // [0xc794648] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.GetNumberTracks
	// int32_t GetNumberTracks();                                                                                               // [0xc7946ec] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.GetNumberSteps
	// int32_t GetNumberSteps();                                                                                                // [0xc7946d4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.GetMidiStepSequence
	// class UMidiStepSequence* GetMidiStepSequence();                                                                          // [0x666bde8] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.GetMaxSteps
	// int32_t GetMaxSteps();                                                                                                   // [0xc79459c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.GetLongestContinuationLengthForColumnOnPage
	// float GetLongestContinuationLengthForColumnOnPage(int32_t Page, int32_t Column);                                         // [0xc7944d8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.GetLongestContinuationLengthForColumn
	// float GetLongestContinuationLengthForColumn(int32_t Column);                                                             // [0xc794440] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.GetLengthTrackQuarterNotes
	// float GetLengthTrackQuarterNotes();                                                                                      // [0xc794400] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.GetLengthTrackBeats
	// float GetLengthTrackBeats();                                                                                             // [0xc7943b8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.GetLengthStepQuarterNotes
	// float GetLengthStepQuarterNotes();                                                                                       // [0xc794398] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.GetLengthStepBeats
	// float GetLengthStepBeats();                                                                                              // [0xc794370] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.GetCurrentPage
	// int32_t GetCurrentPage();                                                                                                // [0xc794358] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.GetContinuationFocusIndeces
	// void GetContinuationFocusIndeces(int32_t& OutRowIndex, int32_t& OutStepIndex, int32_t& OutNumContinuationSteps);         // [0xc79417c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.ClearPage
	// void ClearPage(int32_t Page, bool bUpdateSaveRecord);                                                                    // [0xc793f7c] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.ClearCurrentPage
	// void ClearCurrentPage();                                                                                                 // [0xc793f64] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.ApplyTemplate
	// void ApplyTemplate(class UMidiStepSequence* Template, int32_t StepSequencePageIndex, bool bUpdateSaveRecord);            // [0xc793d84] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.ApplyPage
	// void ApplyPage(int32_t PageIndex, FStepSequencePage& PageData);                                                          // [0xc793ca8] Final|Native|Public|HasOutParms|BlueprintCallable 
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
	// void SetGridVisible(bool bInGridVisible, bool bForceRefresh);                                                            // [0xc7a19a4] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricStepSequencerGridComponent.SetBypassed
	// void SetBypassed(bool bBypassed);                                                                                        // [0xc7a186c] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricStepSequencerGridComponent.SetActiveTrackIndex
	// void SetActiveTrackIndex(int32_t ActiveTrackIndex);                                                                      // [0xc7a17ec] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricStepSequencerGridComponent.OnStepChanged
	// void OnStepChanged(FFabricSequencerStepChangedInfo& StepInfo);                                                           // [0xc7a15d8] Final|Native|Protected|HasOutParms 
	// Function /Script/FabricRuntime.FabricStepSequencerGridComponent.OnQuarterNotesLengthChanged
	// void OnQuarterNotesLengthChanged(float QuarterNotesLength);                                                              // [0xc7a1338] Final|Native|Protected 
	// Function /Script/FabricRuntime.FabricStepSequencerGridComponent.OnNumTracksChanged
	// void OnNumTracksChanged(int32_t NumTracks);                                                                              // [0xc7a1540] Final|Native|Protected 
	// Function /Script/FabricRuntime.FabricStepSequencerGridComponent.OnNumStepsChanged
	// void OnNumStepsChanged(int32_t NumSteps);                                                                                // [0xc7a14c0] Final|Native|Protected 
	// Function /Script/FabricRuntime.FabricStepSequencerGridComponent.OnNoteStyleChanged
	// void OnNoteStyleChanged(EFabricNoteStyle style);                                                                         // [0xc7a1444] Final|Native|Protected 
	// Function /Script/FabricRuntime.FabricStepSequencerGridComponent.OnFullTableChanged
	// void OnFullTableChanged();                                                                                               // [0xc7a1430] Final|Native|Protected 
	// Function /Script/FabricRuntime.FabricStepSequencerGridComponent.OnCurrentPageChanged
	// void OnCurrentPageChanged(int32_t NewPage);                                                                              // [0xc7a13b4] Final|Native|Protected 
	// Function /Script/FabricRuntime.FabricStepSequencerGridComponent.OnBeatScaleChanged
	// void OnBeatScaleChanged(float BeatScale);                                                                                // [0xc7a1338] Final|Native|Protected 
	// Function /Script/FabricRuntime.FabricStepSequencerGridComponent.OnBeatOffsetChanged
	// void OnBeatOffsetChanged(float BeatOffset);                                                                              // [0xc7a1338] Final|Native|Protected 
	// Function /Script/FabricRuntime.FabricStepSequencerGridComponent.NotifyInteractionFocusTargetExternallyChanged
	// void NotifyInteractionFocusTargetExternallyChanged(class APlayerController* PlayerController, int32_t SourceRowIndex, int32_t SourceColumnIndex, int32_t FocusRowIndex, int32_t FocusColumnIndex, bool bIsFocused); // [0xc7a1174] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricStepSequencerGridComponent.IsStepToggledOnForAnyTrack
	// bool IsStepToggledOnForAnyTrack(int32_t StepIndex);                                                                      // [0xc7a10e8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricStepSequencerGridComponent.IsBypassed
	// bool IsBypassed();                                                                                                       // [0x3f18410] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/FabricRuntime.FabricStepSequencerGridComponent.GetGridSquareYPosition
	// float GetGridSquareYPosition(int32_t NumRows, int32_t RowIndex);                                                         // [0xc7a1010] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/FabricRuntime.FabricStepSequencerGridComponent.GetGridSquareXPosition
	// float GetGridSquareXPosition(int32_t NumSteps, int32_t StepIndex);                                                       // [0xc7a0f4c] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/FabricRuntime.FabricStepSequencerGridComponent.GetGridSquareSize
	// FVector2D GetGridSquareSize(int32_t NumSteps, int32_t NumRows);                                                          // [0xc7a0e34] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricStepSequencerGridComponent.GetGridSquareExtents
	// FVector GetGridSquareExtents(int32_t RowIndex, int32_t ColumnIndex);                                                     // [0xc7a0d60] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
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
	// void SetActiveTrack(int32_t Track);                                                                                      // [0xc7a176c] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricStepSequencerGridSquareComponent.OnContinuationControl_StartInteraction
	// void OnContinuationControl_StartInteraction(class APlayerController* Controller);                                        // [0x228deb8] Event|Protected|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricStepSequencerGridSquareComponent.OnContinuationControl_EndInteraction
	// void OnContinuationControl_EndInteraction(class APlayerController* Controller);                                          // [0x228deb8] Event|Protected|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricStepSequencerGridSquareComponent.CanDoInteractionLogicOnStartInteraction
	// bool CanDoInteractionLogicOnStartInteraction();                                                                          // [0xc7a0c58] Final|Native|Private|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricStepSequencerGridSquareComponent.CanDoInteractionLogicOnEndInteraction
	// bool CanDoInteractionLogicOnEndInteraction();                                                                            // [0xc7a0c34] Final|Native|Private|BlueprintCallable|BlueprintPure|Const 
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
	// void OnSourceTextureChanged__DelegateSignature(TArray<FFabricTextureProviderTexture>& Textures);                         // [0x228deb8] MulticastDelegate|Public|Delegate|HasOutParms 
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
	// void Reset();                                                                                                            // [0xc7a1758] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricTextureTreeNode.CopyProperties
	// void CopyProperties(class UFabricTextureTreeNode* Other);                                                                // [0xc7a0c7c] Final|Native|Public|BlueprintCallable 
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
	// void SetSourceTexture(FFabricTextureProviderTexture& InTexture);                                                         // [0xc7a1aa8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricTextureProviderBase.OnTextureChanged__DelegateSignature
	// void OnTextureChanged__DelegateSignature(FFabricTextureProviderTexture& Texture);                                        // [0x228deb8] MulticastDelegate|Public|Delegate|HasOutParms 
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
	// void PreviewTimeline(class UTimelineComponent* Timeline, float SecondsToPlay, bool bReverseAnimation);                   // [0xc7a1674] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricTimelinePreviewComponent.GetShouldPreview
	// bool GetShouldPreview();                                                                                                 // [0x30b5aa4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
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
	// void SetFabricMetaSoundManager(class UFabricMetaSoundManagerComponent* InMetaSoundManager);                              // [0xc7a18ec] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricTimelineSyncComponent.OnTimelinePlayingChanged
	// void OnTimelinePlayingChanged(EMusicClockState State);                                                                   // [0x8ac99fc] Final|Native|Public  
	// Function /Script/FabricRuntime.FabricTimelineSyncComponent.OnRep_ServerCurrentSongPos
	// void OnRep_ServerCurrentSongPos();                                                                                       // [0xc7a15c0] Final|Native|Public  
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
	// void Initialize();                                                                                                       // [0xc7a10d4] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricWaveformTexture.GetWaveformTexture
	// class UTexture2D* GetWaveformTexture();                                                                                  // [0x666b4e4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricWaveformTexture.AddNewValueToWaveformTexture
	// void AddNewValueToWaveformTexture(float Value);                                                                          // [0xc7a0bb4] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricWaveformTexture.AddMultipleValuesToWaveformTexture
	// void AddMultipleValuesToWaveformTexture(TArray<float>& Values);                                                          // [0xc7a0ad8] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/FabricRuntime.FabricInteractableTargetPayload
/// Size: 0x0010 (0x000028 - 0x000038)
class UFabricInteractableTargetPayload : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TWeakObjectPtr<AActor*>)                   TargetedActor                                               OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(TWeakObjectPtr<UPrimitiveComponent*>)      TargetedComponent                                           OFFSET(get<T>, {0x30, 8, 0, 0})
};

/// Class /Script/FabricRuntime.FortGameplayAbility_FabricInteractableTargeting
/// Size: 0x0050 (0x000B48 - 0x000B98)
class UFortGameplayAbility_FabricInteractableTargeting : public UFortGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2968;

public:
	CMember(class UTargetingPreset*)                   TargetingPreset                                             OFFSET(get<T>, {0xB48, 8, 0, 0})
	SMember(FGameplayTag)                              TargetsChangedTag                                           OFFSET(getStruct<T>, {0xB50, 4, 0, 0})
	SMember(FScalableFloat)                            TargetingInterval                                           OFFSET(getStruct<T>, {0xB58, 40, 0, 0})
	CMember(class UFabricInteractableTargetPayload*)   PayloadCache                                                OFFSET(get<T>, {0xB80, 8, 0, 0})
	SMember(FTargetingRequestHandle)                   AsyncTargetingHandle                                        OFFSET(getStruct<T>, {0xB88, 4, 0, 0})
	SMember(FTimerHandle)                              TargetingTimerHandle                                        OFFSET(getStruct<T>, {0xB90, 8, 0, 0})


	/// Functions
	// Function /Script/FabricRuntime.FortGameplayAbility_FabricInteractableTargeting.StopTargeting
	// void StopTargeting();                                                                                                    // [0xc7a1ba4] Final|Native|Protected|BlueprintCallable 
	// Function /Script/FabricRuntime.FortGameplayAbility_FabricInteractableTargeting.StartTargeting
	// void StartTargeting();                                                                                                   // [0xc7a1b90] Final|Native|Protected|BlueprintCallable 
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
/// Size: 0x0050 (0x000000 - 0x000050)
class FFabricMetaSoundPatchWrapperBinding : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

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
/// Size: 0x00A0 (0x000000 - 0x0000A0)
class FFabricMetaSoundPatchWrapperWetDryOutputBinding : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	SMember(FFabricMetaSoundPatchWrapperBinding)       WetOutputSignalBinding                                      OFFSET(getStruct<T>, {0x0, 80, 0, 0})
	SMember(FFabricMetaSoundPatchWrapperBinding)       DryOutputSignalBinding                                      OFFSET(getStruct<T>, {0x50, 80, 0, 0})
};

/// Struct /Script/FabricRuntime.FabricMetaSoundSpeakerPatchWrapperEqBandsBinding
/// Size: 0x0008 (0x000050 - 0x000058)
class FFabricMetaSoundSpeakerPatchWrapperEqBandsBinding : public FFabricMetaSoundPatchWrapperBinding
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	DMember(int32_t)                                   PrimitiveDataIndex                                          OFFSET(get<int32_t>, {0x50, 4, 0, 0})
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
/// Size: 0x0018 (0x000008 - 0x000020)
class FFabricProgressionPreset : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FText)                                     ProgressionName                                             OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	CMember(EHarmonicProgression)                      Interval0                                                   OFFSET(get<T>, {0x18, 1, 0, 0})
	CMember(EHarmonicProgression)                      Interval1                                                   OFFSET(get<T>, {0x19, 1, 0, 0})
	CMember(EHarmonicProgression)                      Interval2                                                   OFFSET(get<T>, {0x1A, 1, 0, 0})
	CMember(EHarmonicProgression)                      Interval3                                                   OFFSET(get<T>, {0x1B, 1, 0, 0})
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

/// Struct /Script/FabricRuntime.FabricMetaSoundMergeNode
/// Size: 0x0158 (0x000000 - 0x000158)
class FFabricMetaSoundMergeNode : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 344;

public:
	SMember(FMetaSoundCombinerNodeHandle)              CombinerNode                                                OFFSET(getStruct<T>, {0x0, 336, 0, 0})
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

/// Struct /Script/FabricRuntime.FabricMetaSoundConnectionBuilder
/// Size: 0x00C0 (0x000000 - 0x0000C0)
class FFabricMetaSoundConnectionBuilder : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	CMember(TArray<FFabricMetaSoundMergeNode>)         MergeList                                                   OFFSET(get<T>, {0xB0, 16, 0, 0})
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

/// Struct /Script/FabricRuntime.FabricTransportRequestConfig
/// Size: 0x000C (0x000000 - 0x00000C)
class FFabricTransportRequestConfig : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	CMember(EFabricMetasoundPlayStrategy)              PlayStrategy                                                OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(EFabricMetasoundPlayPriority)              PlayPriority                                                OFFSET(get<T>, {0x1, 1, 0, 0})
	CMember(TWeakObjectPtr<ABuildingActor*>)           LockingDevice                                               OFFSET(get<T>, {0x4, 8, 0, 0})
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
/// Size: 0x0240 (0x000000 - 0x000240)
class FFabricMetaSoundRuntimeInputInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 576;

public:
	SMember(FFabricMetaSoundUserOptionInputInfo)       InputInfo                                                   OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	CMember(EFabricMetasoundInputType)                 InputType                                                   OFFSET(get<T>, {0x18, 1, 0, 0})
	CMember(EFabricUserOptionType)                     FabricKnobType                                              OFFSET(get<T>, {0x19, 1, 0, 0})
	SMember(FName)                                     DataType                                                    OFFSET(getStruct<T>, {0x1C, 4, 0, 0})
	SMember(FName)                                     MetaSoundInputNodeName                                      OFFSET(getStruct<T>, {0x20, 4, 0, 0})
	CMember(class UFabricMetaSoundUserOption*)         MetaSoundUserOption                                         OFFSET(get<T>, {0x80, 8, 0, 0})
	SMember(FFabricMetaSoundNodeInfo)                  UserOptionConverterNode                                     OFFSET(getStruct<T>, {0x90, 240, 0, 0})
	SMember(FFabricMetaSoundConnectionBuilder)         InputBuilder                                                OFFSET(getStruct<T>, {0x180, 192, 0, 0})
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
/// Size: 0x02
enum class EFabricContinuousInteractionDirection : uint8_t
{
	EFabricContinuousInteractionDirection__Vertical                                  = 0,
	EFabricContinuousInteractionDirection__Horizontal                                = 1
};

/// Enum /Script/FabricRuntime.EFabricInteractionToolStates
/// Size: 0x08
enum class EFabricInteractionToolStates : uint8_t
{
	EFabricInteractionToolStates__Equipped                                           = 0,
	EFabricInteractionToolStates__HoveredControl                                     = 1,
	EFabricInteractionToolStates__HoveredValidCablePort                              = 2,
	EFabricInteractionToolStates__HoveredInvalid                                     = 3,
	EFabricInteractionToolStates__ContinuousSelected                                 = 4,
	EFabricInteractionToolStates__MomentarySelected                                  = 5,
	EFabricInteractionToolStates__CableSelected                                      = 6,
	EFabricInteractionToolStates__None                                               = 7
};

/// Enum /Script/FabricRuntime.EFabricInteractableType
/// Size: 0x04
enum class EFabricInteractableType : uint8_t
{
	EFabricInteractableType__Momentary                                               = 0,
	EFabricInteractableType__Continuous                                              = 1,
	EFabricInteractableType__Cable                                                   = 2,
	EFabricInteractableType__None                                                    = 3
};

/// Enum /Script/FabricRuntime.EFabricMetasoundPlayState
/// Size: 0x04
enum class EFabricMetasoundPlayState : uint8_t
{
	EFabricMetasoundPlayState__Playing                                               = 0,
	EFabricMetasoundPlayState__Rebuilding                                            = 1,
	EFabricMetasoundPlayState__Paused                                                = 2,
	EFabricMetasoundPlayState__Stopped                                               = 3
};

/// Enum /Script/FabricRuntime.EFabricMetasoundMusicEventPriority
/// Size: 0x02
enum class EFabricMetasoundMusicEventPriority : uint8_t
{
	EFabricMetasoundMusicEventPriority__AboveEmotes                                  = 0,
	EFabricMetasoundMusicEventPriority__BelowEmotes                                  = 1
};

/// Enum /Script/FabricRuntime.EFabricMetasoundClock
/// Size: 0x02
enum class EFabricMetasoundClock : uint8_t
{
	EFabricMetasoundClock__Metronome                                                 = 0,
	EFabricMetasoundClock__MidiTempoMap                                              = 1
};

/// Enum /Script/FabricRuntime.EFabricNoteStyle
/// Size: 0x03
enum class EFabricNoteStyle : uint8_t
{
	EFabricNoteStyle__Straight                                                       = 0,
	EFabricNoteStyle__Triplet                                                        = 1,
	EFabricNoteStyle__Dotted                                                         = 2
};

/// Enum /Script/FabricRuntime.EFabricFloatProviderType
/// Size: 0x02
enum class EFabricFloatProviderType : uint8_t
{
	EFabricFloatProviderType__Continuous                                             = 0,
	EFabricFloatProviderType__Instantaneous                                          = 1
};

/// Enum /Script/FabricRuntime.EFabricWaveSyncType
/// Size: 0x02
enum class EFabricWaveSyncType : uint8_t
{
	EFabricWaveSyncType__Free                                                        = 0,
	EFabricWaveSyncType__BeatSync                                                    = 1
};

/// Enum /Script/FabricRuntime.EFabricWaveShape
/// Size: 0x06
enum class EFabricWaveShape : uint8_t
{
	EFabricWaveShape__Sine                                                           = 0,
	EFabricWaveShape__Triangle                                                       = 1,
	EFabricWaveShape__Saw                                                            = 2,
	EFabricWaveShape__Square                                                         = 3,
	EFabricWaveShape__RandomStepped                                                  = 4,
	EFabricWaveShape__RandomSmooth                                                   = 5
};

/// Enum /Script/FabricRuntime.EFabricValueSetterTransitionTiming
/// Size: 0x04
enum class EFabricValueSetterTransitionTiming : uint8_t
{
	Immediate                                                                        = 0,
	NextBeat                                                                         = 1,
	NextBar                                                                          = 2,
	NextPhrase                                                                       = 3
};

/// Enum /Script/FabricRuntime.EFabricCloneTransformBehavior
/// Size: 0x05
enum class EFabricCloneTransformBehavior : uint8_t
{
	EFabricCloneTransformBehavior__None                                              = 0,
	EFabricCloneTransformBehavior__Uniform                                           = 1,
	EFabricCloneTransformBehavior__Stepped                                           = 2,
	EFabricCloneTransformBehavior__SteppedCentered                                   = 3,
	EFabricCloneTransformBehavior__SteppedExponential                                = 4
};

/// Enum /Script/FabricRuntime.EFabricMetasoundPlayStrategy
/// Size: 0x02
enum class EFabricMetasoundPlayStrategy : uint8_t
{
	EFabricMetasoundPlayStrategy__Delayed                                            = 0,
	EFabricMetasoundPlayStrategy__Instant                                            = 1
};

/// Enum /Script/FabricRuntime.EFabricMetasoundPlayPriority
/// Size: 0x02
enum class EFabricMetasoundPlayPriority : uint8_t
{
	EFabricMetasoundPlayPriority__Normal                                             = 0,
	EFabricMetasoundPlayPriority__High                                               = 1
};

/// Enum /Script/FabricRuntime.EJamFabricSyncType
/// Size: 0x03
enum class EJamFabricSyncType : uint8_t
{
	EJamFabricSyncType__Disconnected                                                 = 0,
	EJamFabricSyncType__FabricControlsJam                                            = 1,
	EJamFabricSyncType__Bidirectional                                                = 2
};

/// Enum /Script/FabricRuntime.EFabricMetasoundUtilityLoadedBroadcastBy
/// Size: 0x07
enum class EFabricMetasoundUtilityLoadedBroadcastBy : uint8_t
{
	EFabricMetasoundUtilityLoadedBroadcastBy__Never                                  = 0,
	EFabricMetasoundUtilityLoadedBroadcastBy__UtilityPatchAsyncLoad                  = 1,
	EFabricMetasoundUtilityLoadedBroadcastBy__LiveUpdateGraphInit                    = 2,
	EFabricMetasoundUtilityLoadedBroadcastBy__AddMusicProviderPatch                  = 3,
	EFabricMetasoundUtilityLoadedBroadcastBy__AddTempoClockProviderPatch             = 4,
	EFabricMetasoundUtilityLoadedBroadcastBy__AddMetronomeClockPatch                 = 5,
	EFabricMetasoundUtilityLoadedBroadcastBy__AddHarmonixTransportPatch              = 6
};

/// Enum /Script/FabricRuntime.EFabricMetaSoundPinDirection
/// Size: 0x02
enum class EFabricMetaSoundPinDirection : uint8_t
{
	EFabricMetaSoundPinDirection__Input                                              = 0,
	EFabricMetaSoundPinDirection__Output                                             = 1
};

/// Enum /Script/FabricRuntime.EFabricMetasoundInputType
/// Size: 0x03
enum class EFabricMetasoundInputType : uint8_t
{
	EFabricMetasoundInputType__ModulatedUserOption                                   = 0,
	EFabricMetasoundInputType__NonModulatedUserOption                                = 1,
	EFabricMetasoundInputType__DirectInput                                           = 2
};

/// Enum /Script/FabricRuntime.EFabricMetaSoundPatchWrapperQuality
/// Size: 0x02
enum class EFabricMetaSoundPatchWrapperQuality : uint8_t
{
	EFabricMetaSoundPatchWrapperQuality__High                                        = 0,
	EFabricMetaSoundPatchWrapperQuality__Low                                         = 1
};

/// Enum /Script/FabricRuntime.EFabricUserOptionType
/// Size: 0x05
enum class EFabricUserOptionType : uint8_t
{
	EFabricUserOptionType__Boolean                                                   = 0,
	EFabricUserOptionType__Integer                                                   = 1,
	EFabricUserOptionType__Float                                                     = 2,
	EFabricUserOptionType__String                                                    = 3,
	EFabricUserOptionType__Enum                                                      = 4
};

/// Enum /Script/FabricRuntime.ESequencerType
/// Size: 0x02
enum class ESequencerType : uint8_t
{
	ESequencerType__MultiTrack                                                       = 0,
	ESequencerType__SingleTrack                                                      = 1
};

