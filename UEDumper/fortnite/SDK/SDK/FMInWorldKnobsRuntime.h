
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FabricRuntime
/// dependency: FMDeviceCablesRuntime
/// dependency: FortniteGame
/// dependency: GameplayTags
/// dependency: StructUtils
/// dependency: UMG

/// Class /Script/FMInWorldKnobsRuntime.FabricChildActorTickSubsystem
/// Size: 0x0018 (0x0000D0 - 0x0000E8)
class UFabricChildActorTickSubsystem : public UFortManagedTickSubsystem
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x00D0   (0x0008)  MISSED
	SDK_UNDEFINED(16,13793) /* TArray<TWeakObjectPtr<UFabricChildActorComponent*>> */ __um(ChildActorComponentsPendingSpawn); // 0x00D8   (0x0010)  
};

/// Class /Script/FMInWorldKnobsRuntime.FabricChildActorComponent
/// Size: 0x0080 (0x000270 - 0x0002F0)
class UFabricChildActorComponent : public UChildActorComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x10];                                      // 0x0270   (0x0010)  MISSED
	class UFMDeviceCableModulatorPortComponent*        InWorldKnobModulatorPort;                                   // 0x0280   (0x0008)  
	bool                                               bUseScreenGrid;                                             // 0x0288   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0289   (0x0007)  MISSED
	FVector2D                                          ScreenGridPosition;                                         // 0x0290   (0x0010)  
	FModulatorPortSaveData                             ModulatorPortSaveData;                                      // 0x02A0   (0x0020)  
	unsigned char                                      UnknownData02_5[0x20];                                      // 0x02C0   (0x0020)  MISSED
	class UClass*                                      CableManagerClassForModulatorPorts;                         // 0x02E0   (0x0008)  
	unsigned char                                      UnknownData03_6[0x8];                                       // 0x02E8   (0x0008)  MISSED


	/// Functions
	// Function /Script/FMInWorldKnobsRuntime.FabricChildActorComponent.OnModulatorPortDisconnected
	// void OnModulatorPortDisconnected(class UFMDeviceCablePortComponent* DisconnectedPort);                                // [0xac3c118] Final|Native|Private 
	// Function /Script/FMInWorldKnobsRuntime.FabricChildActorComponent.OnModulatorPortConnected
	// void OnModulatorPortConnected(class UFMDeviceCablePortComponent* ConnectedPort);                                      // [0xac3c118] Final|Native|Private 
	// Function /Script/FMInWorldKnobsRuntime.FabricChildActorComponent.GetKnobOptionKey
	// FString GetKnobOptionKey();                                                                                           // [0xac3ad94] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMInWorldKnobsRuntime.FabricChildActorComponent.GetChildActorAsInWorldKnobActorBase
	// class AFMInWorldKnobActorBase* GetChildActorAsInWorldKnobActorBase();                                                 // [0xac3a9bc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMInWorldKnobsRuntime.FabricChildActorComponent.GetChildActorAsFabricInteractable
	// TScriptInterface<Class> GetChildActorAsFabricInteractable();                                                          // [0xac3a988] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMInWorldKnobsRuntime.FabricChildActorComponent.GetChildActorAsFabricButton
	// class AFabricButtonBase* GetChildActorAsFabricButton();                                                               // [0xac3a964] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMInWorldKnobsRuntime.FabricChildActorComponent.CreateModulatorPortIfNeeded
	// class UFMDeviceCableModulatorPortComponent* CreateModulatorPortIfNeeded();                                            // [0xac3a8f0] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
};

/// Class /Script/FMInWorldKnobsRuntime.FabricScreenComponent
/// Size: 0x00A0 (0x000220 - 0x0002C0)
class UFabricScreenComponent : public USceneComponent
{ 
public:
	SDK_UNDEFINED(16,13794) /* FMulticastInlineDelegate */ __um(OnWidgetCreated);                                  // 0x0220   (0x0010)  
	SDK_UNDEFINED(16,13795) /* FMulticastInlineDelegate */ __um(OnWidgetAdded);                                    // 0x0230   (0x0010)  
	unsigned char                                      UnknownData00_5[0x18];                                      // 0x0240   (0x0018)  MISSED
	SDK_UNDEFINED(8,13796) /* TWeakObjectPtr<UFabricScreenWidget*> */ __um(ScreenWidget);                          // 0x0258   (0x0008)  
	class UWidgetComponent*                            ScreenWidgetComponent;                                      // 0x0260   (0x0008)  
	SDK_UNDEFINED(80,13797) /* TMap<UFMInWorldKnobActorCopyComponent*, FScreenWidgetLayoutInfo> */ __um(CopyComponentsToWidget); // 0x0268   (0x0050)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x02B8   (0x0008)  MISSED


	/// Functions
	// Function /Script/FMInWorldKnobsRuntime.FabricScreenComponent.SnapUnrealLocationToScreenGrid
	// FVector SnapUnrealLocationToScreenGrid(FVector UnrealPosition);                                                       // [0xac3cdf0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMInWorldKnobsRuntime.FabricScreenComponent.SetScreenSize
	// void SetScreenSize(int32_t InWidth, int32_t InHeight);                                                                // [0xac3cb48] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMInWorldKnobsRuntime.FabricScreenComponent.OnCopiedKnobActorSet
	// void OnCopiedKnobActorSet(class UFMInWorldKnobActorCopyComponent* CopyComponent, class AFMInWorldKnobActorBase* NewKnobActor); // [0xac3b5a4] Final|Native|Private 
	// Function /Script/FMInWorldKnobsRuntime.FabricScreenComponent.Initialize
	// void Initialize(class UWidgetComponent* InScreenWidgetComponent, int32_t InWidth, int32_t InHeight, class UFabricScreenLayoutDataAsset* ScreenLayout); // [0xac3b15c] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMInWorldKnobsRuntime.FabricScreenComponent.GetScreenGridWidth
	// int32_t GetScreenGridWidth();                                                                                         // [0xac3af8c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMInWorldKnobsRuntime.FabricScreenComponent.GetScreenGridHeight
	// int32_t GetScreenGridHeight();                                                                                        // [0xac3af74] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMInWorldKnobsRuntime.FabricScreenComponent.ConvertUnrealLocationToGridPosition
	// FVector2D ConvertUnrealLocationToGridPosition(FVector UnrealPosition);                                                // [0xac3a714] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMInWorldKnobsRuntime.FabricScreenComponent.ConvertGridPositionToUnrealLocation
	// FVector ConvertGridPositionToUnrealLocation(FVector2D GridPosition);                                                  // [0xac3a5bc] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/FMInWorldKnobsRuntime.FabricScreenLayout
/// Size: 0x0020 (0x000000 - 0x000020)
struct FFabricScreenLayout
{ 
	FVector2D                                          GridPosition;                                               // 0x0000   (0x0010)  
	FName                                              UserOptionName;                                             // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0014   (0x0004)  MISSED
	class UClass*                                      FabricWidgetClass;                                          // 0x0018   (0x0008)  
};

/// Class /Script/FMInWorldKnobsRuntime.FabricScreenLayoutDataAsset
/// Size: 0x0018 (0x000030 - 0x000048)
class UFabricScreenLayoutDataAsset : public UDataAsset
{ 
public:
	TArray<FFabricScreenLayout>                        Layout;                                                     // 0x0030   (0x0010)  
	class UClass*                                      FabricScreenWidgetClass;                                    // 0x0040   (0x0008)  
};

/// Struct /Script/FMInWorldKnobsRuntime.FabricUserOptionPreset
/// Size: 0x0020 (0x000000 - 0x000020)
struct FFabricUserOptionPreset
{ 
	SDK_UNDEFINED(16,13798) /* FString */              __um(UserOption);                                           // 0x0000   (0x0010)  
	FInstancedStruct                                   UserOptionValue;                                            // 0x0010   (0x0010)  
};

/// Struct /Script/FMInWorldKnobsRuntime.FabricUserOptionPresetCollection
/// Size: 0x0010 (0x000000 - 0x000010)
struct FFabricUserOptionPresetCollection
{ 
	TArray<FFabricUserOptionPreset>                    UserOptionPresets;                                          // 0x0000   (0x0010)  
};

/// Class /Script/FMInWorldKnobsRuntime.FabricUserOptionPresetAsset
/// Size: 0x0010 (0x000030 - 0x000040)
class UFabricUserOptionPresetAsset : public UDataAsset
{ 
public:
	FFabricUserOptionPresetCollection                  UserOptionPreset;                                           // 0x0030   (0x0010)  
};

/// Class /Script/FMInWorldKnobsRuntime.FabricUserOptionSaveModulatable
/// Size: 0x0030 (0x000328 - 0x000358)
class UFabricUserOptionSaveModulatable : public UFabricModulatable
{ 
public:
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x0328   (0x0030)  MISSED
};

/// Struct /Script/FMInWorldKnobsRuntime.FabricUserOptionSavedValue
/// Size: 0x0020 (0x000000 - 0x000020)
struct FFabricUserOptionSavedValue
{ 
	SDK_UNDEFINED(16,13799) /* FString */              __um(Key);                                                  // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,13800) /* FString */              __um(Value);                                                // 0x0010   (0x0010)  
};

/// Struct /Script/FMInWorldKnobsRuntime.FabricUserOptionSaveData
/// Size: 0x0010 (0x000000 - 0x000010)
struct FFabricUserOptionSaveData
{ 
	TArray<FFabricUserOptionSavedValue>                SavedUserOptions;                                           // 0x0000   (0x0010)  
};

/// Class /Script/FMInWorldKnobsRuntime.FabricUserOptionSaveComponent
/// Size: 0x0168 (0x0000A0 - 0x000208)
class UFabricUserOptionSaveComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x00A0   (0x0008)  MISSED
	SDK_UNDEFINED(16,13801) /* TArray<FString> */      __um(UserOptionsToSave);                                    // 0x00A8   (0x0010)  
	int32_t                                            MaxSaveSlots;                                               // 0x00B8   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x00BC   (0x0004)  MISSED
	SDK_UNDEFINED(16,13802) /* FString */              __um(SaveIndexParam);                                       // 0x00C0   (0x0010)  
	TArray<class UFabricUserOptionPresetAsset*>        PresetAssets;                                               // 0x00D0   (0x0010)  
	SDK_UNDEFINED(16,13803) /* FString */              __um(PresetIndexParam);                                     // 0x00E0   (0x0010)  
	SDK_UNDEFINED(16,13804) /* FString */              __um(ApplyIndexImmediatelyToggleParam);                     // 0x00F0   (0x0010)  
	SDK_UNDEFINED(16,13805) /* FMulticastInlineDelegate */ __um(OnActiveOverridesChanged);                         // 0x0100   (0x0010)  
	class ABuildingActor*                              Owner;                                                      // 0x0110   (0x0008)  
	class UFabricUserOptionSaveModulatable*            UserOptionSaveModulatable;                                  // 0x0118   (0x0008)  
	unsigned char                                      UnknownData02_5[0x8];                                       // 0x0120   (0x0008)  MISSED
	TArray<FFabricUserOptionSaveData>                  Presets;                                                    // 0x0128   (0x0010)  
	TArray<FFabricUserOptionSaveData>                  Saves;                                                      // 0x0138   (0x0010)  
	SDK_UNDEFINED(80,13806) /* TSet<FString> */        __um(FloatUserOptions);                                     // 0x0148   (0x0050)  
	int32_t                                            ActiveSaveIndex;                                            // 0x0198   (0x0004)  
	int32_t                                            ActivePresetIndex;                                          // 0x019C   (0x0004)  
	unsigned char                                      UnknownData03_6[0x68];                                      // 0x01A0   (0x0068)  MISSED


	/// Functions
	// Function /Script/FMInWorldKnobsRuntime.FabricUserOptionSaveComponent.SetSaveSlot
	// void SetSaveSlot(int32_t SaveSlotIndex);                                                                              // [0xac3cac8] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMInWorldKnobsRuntime.FabricUserOptionSaveComponent.SetPreset
	// void SetPreset(int32_t PresetIndex);                                                                                  // [0xac3ca48] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMInWorldKnobsRuntime.FabricUserOptionSaveComponent.SetMusicClock
	// void SetMusicClock(class UMusicClockComponent* MusicClockComponent);                                                  // [0xac3c7e8] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMInWorldKnobsRuntime.FabricUserOptionSaveComponent.OnAnyOptionUpdated
	// void OnAnyOptionUpdated();                                                                                            // [0xac3b408] Final|Native|Private 
	// Function /Script/FMInWorldKnobsRuntime.FabricUserOptionSaveComponent.OnActiveOverridesChanged__DelegateSignature
	// void OnActiveOverridesChanged__DelegateSignature();                                                                   // [0x18a39e4] MulticastDelegate|Public|Delegate 
	// Function /Script/FMInWorldKnobsRuntime.FabricUserOptionSaveComponent.IsApplyingOverrides
	// bool IsApplyingOverrides();                                                                                           // [0xac3b298] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/FMInWorldKnobsRuntime.FabricUserOptionSaveComponent.HasOverrideForParam
	// bool HasOverrideForParam(FString Param);                                                                              // [0xac3aff0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMInWorldKnobsRuntime.FabricUserOptionSaveComponent.GetOverrideForParam
	// FString GetOverrideForParam(FString Param);                                                                           // [0xac3adec] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/FMInWorldKnobsRuntime.FMInWorldCableOptionsComponent
/// Size: 0x0080 (0x0000A0 - 0x000120)
class UFMInWorldCableOptionsComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x80];                                      // 0x00A0   (0x0080)  MISSED


	/// Functions
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldCableOptionsComponent.OnOptionsLoaded
	// void OnOptionsLoaded();                                                                                               // [0xac3c194] Final|Native|Protected 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldCableOptionsComponent.OnCableDisconncted
	// void OnCableDisconncted(class UFMDeviceCablePortComponent* SourcePort, class UFMDeviceCablePortComponent* DisconnectedPort); // [0xac3b4e0] Final|Native|Protected 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldCableOptionsComponent.OnCableConnected
	// void OnCableConnected(class UFMDeviceCablePortComponent* SourcePort, class UFMDeviceCablePortComponent* ConnectedPort); // [0xac3b41c] Final|Native|Protected 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldCableOptionsComponent.OnAnyOptionChanged
	// void OnAnyOptionChanged();                                                                                            // [0xac3b3e0] Final|Native|Protected 
};

/// Class /Script/FMInWorldKnobsRuntime.FMInWorldKnobActorBase
/// Size: 0x0148 (0x000290 - 0x0003D8)
class AFMInWorldKnobActorBase : public AActor
{ 
public:
	unsigned char                                      UnknownData00_3[0x20];                                      // 0x0290   (0x0020)  MISSED
	SDK_UNDEFINED(16,13807) /* FMulticastInlineDelegate */ __um(OnModulatedPropertyValueChanged);                  // 0x02B0   (0x0010)  
	SDK_UNDEFINED(16,13808) /* FMulticastInlineDelegate */ __um(OnKnobRuntimeValueChanged);                        // 0x02C0   (0x0010)  
	SDK_UNDEFINED(16,13809) /* FMulticastInlineDelegate */ __um(OnKnobSerializedValueChanged);                     // 0x02D0   (0x0010)  
	SDK_UNDEFINED(16,13810) /* FMulticastInlineDelegate */ __um(OnFloatProviderConnectionChanged);                 // 0x02E0   (0x0010)  
	SDK_UNDEFINED(16,13811) /* FString */              __um(OptionKey);                                            // 0x02F0   (0x0010)  
	SDK_UNDEFINED(24,13812) /* FText */                __um(OverriddenTitle);                                      // 0x0300   (0x0018)  
	bool                                               bCanBeModulated;                                            // 0x0318   (0x0001)  
	bool                                               bKnobEnabled;                                               // 0x0319   (0x0001)  
	bool                                               bKnobDisplayOnly;                                           // 0x031A   (0x0001)  
	unsigned char                                      UnknownData01_5[0x5];                                       // 0x031B   (0x0005)  MISSED
	class USceneComponent*                             ModulatorPortParent;                                        // 0x0320   (0x0008)  
	class UFMDeviceCableModulatorPortComponent*        ModulatorPort;                                              // 0x0328   (0x0008)  
	FGameplayTagContainer                              GameplayTags;                                               // 0x0330   (0x0020)  
	class UPlaylistUserOptionBase*                     MyUserOption;                                               // 0x0350   (0x0008)  
	unsigned char                                      UnknownData02_5[0x8];                                       // 0x0358   (0x0008)  MISSED
	SDK_UNDEFINED(16,13813) /* TArray<TWeakObjectPtr<UFabricFloatProviderBase*>> */ __um(CurrentFloatProviders);   // 0x0360   (0x0010)  
	SDK_UNDEFINED(8,13814) /* TWeakObjectPtr<UFabricFloatProviderBase*> */ __um(ActiveFloatProvider);              // 0x0370   (0x0008)  
	class USceneComponent*                             HitComponent;                                               // 0x0378   (0x0008)  
	SDK_UNDEFINED(8,13815) /* TWeakObjectPtr<APlayerController*> */ __um(InteractingController);                   // 0x0380   (0x0008)  
	EFabricInteractableType                            InteractableType;                                           // 0x0388   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x0389   (0x0003)  MISSED
	SDK_UNDEFINED(8,13816) /* TWeakObjectPtr<UFabricInteractableViewModel*> */ __um(WidgetViewModel);              // 0x038C   (0x0008)  
	unsigned char                                      UnknownData04_5[0x4];                                       // 0x0394   (0x0004)  MISSED
	SDK_UNDEFINED(16,13817) /* TArray<FText> */        __um(OverrideLabels);                                       // 0x0398   (0x0010)  
	SDK_UNDEFINED(16,13818) /* TArray<FText> */        __um(OptionLabels);                                         // 0x03A8   (0x0010)  
	SDK_UNDEFINED(16,13819) /* TArray<FString> */      __um(OptionValues);                                         // 0x03B8   (0x0010)  
	int32_t                                            SerializedOptionIndex;                                      // 0x03C8   (0x0004)  
	int32_t                                            CurrentOptionIndex;                                         // 0x03CC   (0x0004)  
	float                                              ClampedKnobValue;                                           // 0x03D0   (0x0004)  
	bool                                               bTrackingInput;                                             // 0x03D4   (0x0001)  
	bool                                               bIsVisibilityBound;                                         // 0x03D5   (0x0001)  
	unsigned char                                      UnknownData05_6[0x2];                                       // 0x03D6   (0x0002)  MISSED


	/// Functions
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobActorBase.UpdateInteractableVisuals
	// void UpdateInteractableVisuals(bool bInteractable);                                                                   // [0xac3d0d8] Native|Event|Protected|BlueprintEvent 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobActorBase.UpdateFocusVisuals
	// void UpdateFocusVisuals(bool bFocused);                                                                               // [0xac3d054] Native|Event|Protected|BlueprintEvent 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobActorBase.UpdateEnabledVisuals
	// void UpdateEnabledVisuals(bool bEnabled);                                                                             // [0xac3cfd0] Native|Event|Protected|BlueprintEvent 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobActorBase.UpdateDisplayOnlyVisuals
	// void UpdateDisplayOnlyVisuals(bool bDisplayOnly);                                                                     // [0xac3cf4c] Native|Event|Protected|BlueprintEvent 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobActorBase.StopTrackingInput
	// void StopTrackingInput();                                                                                             // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobActorBase.StartTrackingInput
	// void StartTrackingInput(class APlayerController* PlayerController);                                                   // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobActorBase.SetWidgetViewModel
	// void SetWidgetViewModel(class UFabricInteractableViewModel* ViewModel);                                               // [0xac3cd70] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobActorBase.SetTitle
	// void SetTitle(FText& Title);                                                                                          // [0xac3ccd0] Native|Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobActorBase.SetSelectedIndex
	// void SetSelectedIndex(int32_t Index, bool SnapToSelection);                                                           // [0xac3cc08] Native|Event|Protected|BlueprintEvent 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobActorBase.SetOverrideOptionLabels
	// void SetOverrideOptionLabels(TArray<FText>& Labels);                                                                  // [0xac3c96c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobActorBase.SetNumberOptions
	// void SetNumberOptions(int32_t NumberOptions);                                                                         // [0xac3c8e8] Native|Event|Protected|BlueprintEvent 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobActorBase.SetKnobEnabled
	// void SetKnobEnabled(bool bEnabled);                                                                                   // [0xac3c738] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobActorBase.SetKnobDisplayOnly
	// void SetKnobDisplayOnly(bool bDisplayOnly);                                                                           // [0xac3c6b8] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobActorBase.SetCurrentKnobPosition
	// void SetCurrentKnobPosition(float KnobPosition);                                                                      // [0x8f95bc8] Native|Event|Protected|BlueprintEvent 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobActorBase.ResetToDefaultValue
	// void ResetToDefaultValue(class APlayerController* PlayerController);                                                  // [0xac3c430] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobActorBase.ReceiveOnWidgetViewModelSet
	// void ReceiveOnWidgetViewModelSet();                                                                                   // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobActorBase.OnReceiveFloatProvidersFromPort
	// void OnReceiveFloatProvidersFromPort(TArray<UFabricFloatProviderBase*>& FloatProvider);                               // [0xac3c1bc] Final|Native|Private|HasOutParms 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobActorBase.OnKnobIsVisible
	// void OnKnobIsVisible(bool bInIsVisible);                                                                              // [0xac3c098] Final|Native|Protected 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobActorBase.OnFloatProviderFloatUpdated
	// void OnFloatProviderFloatUpdated(float NewFloat);                                                                     // [0xac3b668] Final|Native|Private 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobActorBase.KnobValueChanged
	// void KnobValueChanged(int32_t NewIndex, bool SnapToSelection, class APlayerController* PlayerController);             // [0xac3b2d8] Final|Native|Protected|BlueprintCallable 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobActorBase.IsOverriddenByPort
	// bool IsOverriddenByPort();                                                                                            // [0xac3b2b0] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobActorBase.HitComponentUpdated
	// void HitComponentUpdated(class USceneComponent* NewHitComponent);                                                     // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobActorBase.HasActiveFloatProvider
	// bool HasActiveFloatProvider();                                                                                        // [0xac3afcc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobActorBase.GetWidgetViewModel
	// class UFabricInteractableViewModel* GetWidgetViewModel();                                                             // [0xac3afa4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobActorBase.GetNumberOptions
	// int32_t GetNumberOptions();                                                                                           // [0xac3add4] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobActorBase.GetInteractingController
	// class APlayerController* GetInteractingController();                                                                  // [0xac3ad6c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobActorBase.GetHitComponent
	// class USceneComponent* GetHitComponent();                                                                             // [0x7055f54] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobActorBase.GetCurrentValueLabel
	// FText GetCurrentValueLabel();                                                                                         // [0xac3ad28] Final|Native|Protected|BlueprintCallable|BlueprintPure 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobActorBase.GetCurrentValueAsString
	// FString GetCurrentValueAsString();                                                                                    // [0xac3ace8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobActorBase.GetCurrentValueAsName
	// FName GetCurrentValueAsName();                                                                                        // [0xac3acbc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobActorBase.GetCurrentValueAsInt
	// int32_t GetCurrentValueAsInt();                                                                                       // [0xac3ac60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobActorBase.GetCurrentValueAsFloat
	// float GetCurrentValueAsFloat();                                                                                       // [0xac3ac38] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobActorBase.GetCurrentValueAsEnum
	// char GetCurrentValueAsEnum();                                                                                         // [0xac3abbc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobActorBase.GetCurrentValueAsBool
	// bool GetCurrentValueAsBool();                                                                                         // [0xac3ab6c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobActorBase.GetCurrentOptionIndex
	// int32_t GetCurrentOptionIndex();                                                                                      // [0xac3ab54] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobActorBase.GetCopyWidgetClassInternal
	// class UClass* GetCopyWidgetClassInternal();                                                                           // [0xac3aad0] Native|Event|Public|BlueprintEvent|Const 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobActorBase.GetCopyClassInternal
	// class UClass* GetCopyClassInternal();                                                                                 // [0x2d4c67c] Native|Event|Public|BlueprintEvent|Const 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobActorBase.GetConsumeInteractionFromChildInteractable
	// bool GetConsumeInteractionFromChildInteractable(class APlayerController* PlayerController);                           // [0xac3a9e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobActorBase.EnsureProperCollision
	// void EnsureProperCollision();                                                                                         // [0xac3a914] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobActorBase.CopyAttributesFromOtherKnobInternal
	// void CopyAttributesFromOtherKnobInternal(class AFMInWorldKnobActorBase* OtherKnob);                                   // [0x8f58510] Native|Event|Protected|BlueprintEvent 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobActorBase.CopyAttributesFromOtherKnob
	// void CopyAttributesFromOtherKnob(class AFMInWorldKnobActorBase* OtherKnob);                                           // [0xac3a870] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/FMInWorldKnobsRuntime.FMInWorldKnobActorCopyComponent
/// Size: 0x0110 (0x0002F0 - 0x000400)
class UFMInWorldKnobActorCopyComponent : public UFabricChildActorComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x10];                                      // 0x02F0   (0x0010)  MISSED
	SDK_UNDEFINED(16,13820) /* FMulticastInlineDelegate */ __um(OnModulatedPropertyValueChanged);                  // 0x0300   (0x0010)  
	SDK_UNDEFINED(16,13821) /* FMulticastInlineDelegate */ __um(OnKnobRuntimeValueChanged);                        // 0x0310   (0x0010)  
	SDK_UNDEFINED(16,13822) /* FMulticastInlineDelegate */ __um(OnKnobSerializedValueChanged);                     // 0x0320   (0x0010)  
	SDK_UNDEFINED(16,13823) /* FMulticastInlineDelegate */ __um(OnFloatProviderConnectionChanged);                 // 0x0330   (0x0010)  
	SDK_UNDEFINED(16,13824) /* FMulticastInlineDelegate */ __um(OnKnobActorSet);                                   // 0x0340   (0x0010)  
	class UClass*                                      DefaultKnobActorClass;                                      // 0x0350   (0x0008)  
	class AFMInWorldKnobActorBase*                     InWorldKnobActor;                                           // 0x0358   (0x0008)  
	SDK_UNDEFINED(16,13825) /* FString */              __um(OptionKey);                                            // 0x0360   (0x0010)  
	SDK_UNDEFINED(24,13826) /* FText */                __um(OverriddenTitle);                                      // 0x0370   (0x0018)  
	bool                                               bCanBeModulated;                                            // 0x0388   (0x0001)  
	bool                                               bKnobEnabled;                                               // 0x0389   (0x0001)  
	unsigned char                                      UnknownData01_5[0x6];                                       // 0x038A   (0x0006)  MISSED
	class UPlaylistUserOptionBase*                     OuterUserOption;                                            // 0x0390   (0x0008)  
	unsigned char                                      UnknownData02_5[0x30];                                      // 0x0398   (0x0030)  MISSED
	class UPlaylistUserOptionBase*                     CopiedUserOption;                                           // 0x03C8   (0x0008)  
	unsigned char                                      UnknownData03_6[0x30];                                      // 0x03D0   (0x0030)  MISSED


	/// Functions
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobActorCopyComponent.SetCopiedInWorldKnob
	// void SetCopiedInWorldKnob(class UObject* InWorldKnobObject);                                                          // [0xac3c4b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobActorCopyComponent.OnInWorldKnobSerializedValueChanged
	// void OnInWorldKnobSerializedValueChanged(FString Value, class UPlaylistUserOptionBase* Option, class APlayerController* PlayerController); // [0xac3beb0] Final|Native|Private 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobActorCopyComponent.OnInWorldKnobRuntimeValueChanged
	// void OnInWorldKnobRuntimeValueChanged(FString Value, class UPlaylistUserOptionBase* Option);                          // [0xac3bb14] Final|Native|Private 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobActorCopyComponent.OnInWorldKnobModulatedPropertyValueChanged
	// void OnInWorldKnobModulatedPropertyValueChanged(FString Value, class UObject* ModulatorObject);                       // [0xac3b7ac] Final|Native|Private 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobActorCopyComponent.OnInWorldKnobFloatProviderConnectionChanged
	// void OnInWorldKnobFloatProviderConnectionChanged(bool bConnected, class UObject* ModulatorObject);                    // [0xac3b6e8] Final|Native|Private 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobActorCopyComponent.GetCurrentKnobValueBP
	// FString GetCurrentKnobValueBP();                                                                                      // [0xac3ab08] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobActorCopyComponent.ClearCopiedInWorldKnob
	// void ClearCopiedInWorldKnob();                                                                                        // [0xac3a5a8] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/FMInWorldKnobsRuntime.InWorldKnobInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UInWorldKnobInterface : public UInterface
{ 
public:
};

/// Class /Script/FMInWorldKnobsRuntime.FMInWorldKnobOptionsComponent
/// Size: 0x0208 (0x0000A0 - 0x0002A8)
class UFMInWorldKnobOptionsComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x00A0   (0x0008)  MISSED
	SDK_UNDEFINED(16,13827) /* FMulticastInlineDelegate */ __um(OnInitialKnobValuesLoaded);                        // 0x00A8   (0x0010)  
	SDK_UNDEFINED(16,13828) /* FMulticastInlineDelegate */ __um(OnAllKnobsLoaded);                                 // 0x00B8   (0x0010)  
	SDK_UNDEFINED(16,13829) /* FMulticastInlineDelegate */ __um(OnAnyKnobRuntimeValueChanged);                     // 0x00C8   (0x0010)  
	SDK_UNDEFINED(16,13830) /* FMulticastInlineDelegate */ __um(OnAnyKnobSerializedValueChanged);                  // 0x00D8   (0x0010)  
	SDK_UNDEFINED(80,13831) /* TSet<UObject*> */       __um(InWorldKnobInterfaceObjects);                          // 0x00E8   (0x0050)  
	TArray<class UObject*>                             ReplicatedInWorldKnobInterfaceObjects;                      // 0x0138   (0x0010)  
	TArray<class UObject*>                             ReplicatedFabricInteractableObjects;                        // 0x0148   (0x0010)  
	TArray<class UFMDeviceCableModulatorPortComponent*> ReplicatedModulatorPorts;                                  // 0x0158   (0x0010)  
	class ABuildingActor*                              BuildingActorOwner;                                         // 0x0168   (0x0008)  
	class UClass*                                      OwnerClass;                                                 // 0x0170   (0x0008)  
	class UFabricUserOptionSaveComponent*              SaveComponent;                                              // 0x0178   (0x0008)  
	SDK_UNDEFINED(80,13832) /* TMap<FString, UPlaylistUserOptionBase*> */ __um(PropertiesEditedByUserOptions);     // 0x0180   (0x0050)  
	SDK_UNDEFINED(80,13833) /* TMap<FString, UObject*> */ __um(OptionKeyToInWorldKnobObject);                      // 0x01D0   (0x0050)  
	SDK_UNDEFINED(80,13834) /* TMap<FString, UFMDeviceCableModulatorPortComponent*> */ __um(OptionKeyToModulatorPort); // 0x0220   (0x0050)  
	TArray<class UFabricModulatable*>                  PendingFabricModulatables;                                  // 0x0270   (0x0010)  
	FTimerHandle                                       ActorSaveRequestTimer;                                      // 0x0280   (0x0008)  
	unsigned char                                      UnknownData01_6[0x20];                                      // 0x0288   (0x0020)  MISSED


	/// Functions
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobOptionsComponent.OwnsInWorldKnobObject
	// bool OwnsInWorldKnobObject(class UObject* InWorldKnobObject);                                                         // [0xac3c378] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobOptionsComponent.OnSaveOverridesChanged
	// void OnSaveOverridesChanged();                                                                                        // [0xac3c364] Final|Native|Private 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobOptionsComponent.OnRep_ReplicatedModulatorPorts
	// void OnRep_ReplicatedModulatorPorts();                                                                                // [0xac3c350] Final|Native|Private 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobOptionsComponent.OnRep_ReplicatedInWorldKnobInterfaceObjects
	// void OnRep_ReplicatedInWorldKnobInterfaceObjects();                                                                   // [0xac3c33c] Final|Native|Private 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobOptionsComponent.OnRep_ReplicatedFabricInteractableObjects
	// void OnRep_ReplicatedFabricInteractableObjects();                                                                     // [0xac3c328] Final|Native|Private 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobOptionsComponent.OnOptionsLoaded
	// void OnOptionsLoaded();                                                                                               // [0xac3c1a8] Final|Native|Private 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobOptionsComponent.OnInWorldKnobSerializedOptionChanged
	// void OnInWorldKnobSerializedOptionChanged(FString Value, class UPlaylistUserOptionBase* Option, class APlayerController* PlayerController); // [0xac3bcc8] Final|Native|Private 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobOptionsComponent.OnInWorldKnobRuntimeOptionChanged
	// void OnInWorldKnobRuntimeOptionChanged(FString Value, class UPlaylistUserOptionBase* Option);                         // [0xac3b960] Final|Native|Private 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobOptionsComponent.OnInitialKnobValuesLoaded__DelegateSignature
	// void OnInitialKnobValuesLoaded__DelegateSignature();                                                                  // [0x18a39e4] MulticastDelegate|Public|Delegate 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobOptionsComponent.OnAnyOptionUpdated
	// void OnAnyOptionUpdated();                                                                                            // [0xac3b3f4] Final|Native|Private 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobOptionsComponent.OnAnyKnobSerializedValueChanged__DelegateSignature
	// void OnAnyKnobSerializedValueChanged__DelegateSignature();                                                            // [0x18a39e4] MulticastDelegate|Public|Delegate 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobOptionsComponent.OnAnyKnobRuntimeValueChanged__DelegateSignature
	// void OnAnyKnobRuntimeValueChanged__DelegateSignature();                                                               // [0x18a39e4] MulticastDelegate|Public|Delegate 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobOptionsComponent.OnAllKnobsLoaded__DelegateSignature
	// void OnAllKnobsLoaded__DelegateSignature();                                                                           // [0x18a39e4] MulticastDelegate|Public|Delegate 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobOptionsComponent.CanMakeUserOptionChanges
	// bool CanMakeUserOptionChanges();                                                                                      // [0xac3a54c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobOptionsComponent.AreAllKnobsLoadedForNotify
	// bool AreAllKnobsLoadedForNotify();                                                                                    // [0xac3a534] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobOptionsComponent.ActorHasValidControllerBP
	// bool ActorHasValidControllerBP(class AActor* Actor, class AFortPlayerPawn*& OutFortPlayerPawn, class APlayerController*& OutPlayerController); // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
};

/// Struct /Script/FMInWorldKnobsRuntime.FMOutgoingCableConnection
/// Size: 0x0030 (0x000000 - 0x000030)
struct FFMOutgoingCableConnection
{ 
	FName                                              OutputPortName;                                             // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	SDK_UNDEFINED(32,13835) /* TWeakObjectPtr<UObject*> */ __um(Device);                                           // 0x0008   (0x0020)  
	FName                                              ComponentName;                                              // 0x0028   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Class /Script/FMInWorldKnobsRuntime.PlaylistUserOptionFMOutgoingCableConnection
/// Size: 0x0030 (0x0001D0 - 0x000200)
class UPlaylistUserOptionFMOutgoingCableConnection : public UPlaylistUserOptionBase
{ 
public:
	FFMOutgoingCableConnection                         DefaultValue;                                               // 0x01D0   (0x0030)  
};

/// Struct /Script/FMInWorldKnobsRuntime.ScreenMeshArray
/// Size: 0x0010 (0x000000 - 0x000010)
struct FScreenMeshArray
{ 
	SDK_UNDEFINED(16,13836) /* TArray<TWeakObjectPtr<UStaticMesh*>> */ __um(ScreenMeshArrayByHeight);              // 0x0000   (0x0010)  
};

/// Struct /Script/FMInWorldKnobsRuntime.ScreenWidgetLayoutInfo
/// Size: 0x0018 (0x000000 - 0x000018)
struct FScreenWidgetLayoutInfo
{ 
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x0000   (0x0018)  MISSED
};

/// Struct /Script/FMInWorldKnobsRuntime.FabricUserOptionValue
/// Size: 0x0008 (0x000000 - 0x000008)
struct FFabricUserOptionValue
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/FMInWorldKnobsRuntime.FabricUserOptionValueInt
/// Size: 0x0008 (0x000008 - 0x000010)
struct FFabricUserOptionValueInt : FFabricUserOptionValue
{ 
	int32_t                                            Value;                                                      // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
};

/// Struct /Script/FMInWorldKnobsRuntime.FabricUserOptionValueFloat
/// Size: 0x0008 (0x000008 - 0x000010)
struct FFabricUserOptionValueFloat : FFabricUserOptionValue
{ 
	float                                              Value;                                                      // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
};

/// Struct /Script/FMInWorldKnobsRuntime.FabricUserOptionValueEnum
/// Size: 0x0010 (0x000008 - 0x000018)
struct FFabricUserOptionValueEnum : FFabricUserOptionValue
{ 
	SDK_UNDEFINED(16,13837) /* FString */              __um(Value);                                                // 0x0008   (0x0010)  
};

/// Struct /Script/FMInWorldKnobsRuntime.FabricUserOptionValueBool
/// Size: 0x0008 (0x000008 - 0x000010)
struct FFabricUserOptionValueBool : FFabricUserOptionValue
{ 
	bool                                               Value;                                                      // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0009   (0x0007)  MISSED
};

/// Struct /Script/FMInWorldKnobsRuntime.FabricUserOptionValueString
/// Size: 0x0010 (0x000008 - 0x000018)
struct FFabricUserOptionValueString : FFabricUserOptionValue
{ 
	SDK_UNDEFINED(16,13838) /* FString */              __um(Value);                                                // 0x0008   (0x0010)  
};

/// Struct /Script/FMInWorldKnobsRuntime.UserOptionDefinitionFMOutgoingConnectionMetaData
/// Size: 0x0030 (0x000008 - 0x000038)
struct FUserOptionDefinitionFMOutgoingConnectionMetaData : FUserOptionDefinitionMetaData
{ 
	FFMOutgoingCableConnection                         DefaultValue;                                               // 0x0008   (0x0030)  
};

/// Struct /Script/FMInWorldKnobsRuntime.TransportControlLink
/// Size: 0x0020 (0x000000 - 0x000020)
struct FTransportControlLink
{ 
	SDK_UNDEFINED(32,13839) /* TWeakObjectPtr<AActor*> */ __um(Device);                                            // 0x0000   (0x0020)  
};

/// Struct /Script/FMInWorldKnobsRuntime.UserOptionDefinitionTransportControlMetaData
/// Size: 0x0000 (0x000008 - 0x000008)
struct FUserOptionDefinitionTransportControlMetaData : FUserOptionDefinitionMetaData
{ 
};

