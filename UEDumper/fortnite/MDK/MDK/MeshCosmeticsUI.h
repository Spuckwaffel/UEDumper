
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CommonUI
/// dependency: CommonUILegacy
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteUI
/// dependency: GameplayTags
/// dependency: ItemizationCoreRuntime
/// dependency: MeshCosmetics
/// dependency: UMG

/// Class /Script/MeshCosmeticsUI.FortVariantRedirectorTile
/// Size: 0x00E8 (0x0003C0 - 0x0004A8)
class UFortVariantRedirectorTile : public UFortVariantEditorWidgetBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1192;

public:
	CMember(class UDynamicEntryBox*)                   EntryBox_VariantOptions                                     OFFSET(get<T>, {0x3C0, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   Text_VariantName                                            OFFSET(get<T>, {0x3C8, 8, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   SprayCustomizerClass                                        OFFSET(get<T>, {0x3D0, 32, 0, 0})
	CMember(class UFortVariantSprayCustomizerConfig*)  SprayCustomizerConfig                                       OFFSET(get<T>, {0x3F0, 8, 0, 0})
	SMember(FDataTableRowHandle)                       ClearAllSlotsInputAction                                    OFFSET(getStruct<T>, {0x3F8, 16, 0, 0})
	SMember(FDataTableRowHandle)                       RandomizeSpraysInputAction                                  OFFSET(getStruct<T>, {0x408, 16, 0, 0})
	CMember(TWeakObjectPtr<UAthenaCosmeticItemDefinition*>) ItemDefinition                                         OFFSET(get<T>, {0x418, 8, 0, 0})
	CMember(TArray<FFortVariantRedirectorTileLoadedEmoteToRandomize>) LoadedEmotesToRandomize                      OFFSET(get<T>, {0x420, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnVariantEngagedEvent                                       OFFSET(getStruct<T>, {0x430, 16, 0, 0})


	/// Functions
	// Function /Script/MeshCosmeticsUI.FortVariantRedirectorTile.OnVariantChangedEvent__DelegateSignature
	// void OnVariantChangedEvent__DelegateSignature(FMcpVariantChannelInfo& InChannelInfo);                                    // [0x186becc] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/MeshCosmeticsUI.FortVariantRedirectorTile.HandleBoundaryNavigation
	// class UWidget* HandleBoundaryNavigation(EUINavigation InNavigation);                                                     // [0xb7b59c0] Final|Native|Private 
	// Function /Script/MeshCosmeticsUI.FortVariantRedirectorTile.GetButtonToFocus
	// class UWidget* GetButtonToFocus();                                                                                       // [0x68ad82c] Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/MeshCosmeticsUI.FortVariantSprayCustomizerConfig
/// Size: 0x0050 (0x000030 - 0x000080)
class UFortVariantSprayCustomizerConfig : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(TMap<FGameplayTag, FFortVariantSprayCustomizerCosmeticOptions>) SprayCustomizerOptions                 OFFSET(get<T>, {0x30, 80, 0, 0})
};

/// Class /Script/MeshCosmeticsUI.FortVariantRedirectorTileButton
/// Size: 0x0060 (0x001490 - 0x0014F0)
class UFortVariantRedirectorTileButton : public UCommonButtonBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5360;

public:
	CMember(class UOverlay*)                           ImageOverlay                                                OFFSET(get<T>, {0x1490, 8, 0, 0})
	CMember(class UFortLazyImage*)                     LazyImage_TileIcon                                          OFFSET(get<T>, {0x1498, 8, 0, 0})
	CMember(ERedirectorTileDisplayMode)                DisplayMode                                                 OFFSET(get<T>, {0x14A0, 1, 0, 0})
	DMember(float)                                     SlotOpacitySprayAssigned                                    OFFSET(get<float>, {0x14A4, 4, 0, 0})
	DMember(float)                                     SlotOpacitySprayNotAssigned                                 OFFSET(get<float>, {0x14A8, 4, 0, 0})
};

/// Class /Script/MeshCosmeticsUI.FortVariantSprayCustomizer
/// Size: 0x0158 (0x000730 - 0x000888)
class UFortVariantSprayCustomizer : public UFortItemPreviewScreen
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2184;

public:
	CMember(class UCommonButtonBase*)                  Button_Back                                                 OFFSET(get<T>, {0x730, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_Confirm                                              OFFSET(get<T>, {0x738, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_HideArchivedItems                                    OFFSET(get<T>, {0x740, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_ShowArchivedItems                                    OFFSET(get<T>, {0x748, 8, 0, 0})
	CMember(class UWidget*)                            Widget_ArchivedItemsButtons                                 OFFSET(get<T>, {0x750, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_SpraysTab                                            OFFSET(get<T>, {0x758, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_SettingsTab                                          OFFSET(get<T>, {0x760, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_TouchClose                                           OFFSET(get<T>, {0x768, 8, 0, 0})
	CMember(class UCommonActionWidget*)                ActionWidget_TabLeft                                        OFFSET(get<T>, {0x770, 8, 0, 0})
	CMember(class UCommonActionWidget*)                ActionWidget_TabRight                                       OFFSET(get<T>, {0x778, 8, 0, 0})
	CMember(class UCommonActivatableWidgetSwitcher*)   Switcher_Tabs                                               OFFSET(get<T>, {0x780, 8, 0, 0})
	CMember(class UWidget*)                            Widget_Sprays                                               OFFSET(get<T>, {0x788, 8, 0, 0})
	CMember(class UWidget*)                            Widget_Settings                                             OFFSET(get<T>, {0x790, 8, 0, 0})
	CMember(class UFortVariantItemTexturePicker*)      TexturePicker_Sprays                                        OFFSET(get<T>, {0x798, 8, 0, 0})
	CMember(class UFortVariantSprayCustomizerSetting*) Setting_Saturation                                          OFFSET(get<T>, {0x7A0, 8, 0, 0})
	CMember(class UFortVariantSprayCustomizerSetting*) Setting_Wear                                                OFFSET(get<T>, {0x7A8, 8, 0, 0})
	CMember(class UFortVariantSprayCustomizerSetting*) Setting_Scale                                               OFFSET(get<T>, {0x7B0, 8, 0, 0})
	SMember(FDataTableRowHandle)                       TabLeftAction                                               OFFSET(getStruct<T>, {0x7B8, 16, 0, 0})
	SMember(FDataTableRowHandle)                       TabRightAction                                              OFFSET(getStruct<T>, {0x7C8, 16, 0, 0})
	SMember(FGameplayTag)                              ItemShopPreviewSceneChangerTag                              OFFSET(getStruct<T>, {0x7D8, 4, 0, 0})
	CMember(class UCommonButtonGroupLegacy*)           TabButtonGroup                                              OFFSET(get<T>, {0x7E0, 8, 0, 0})
	CMember(class UFortCustomizableObjectSprayVariant*) SprayVariant                                               OFFSET(get<T>, {0x7E8, 8, 0, 0})


	/// Functions
	// Function /Script/MeshCosmeticsUI.FortVariantSprayCustomizer.BP_SetVariantEditorMode
	// void BP_SetVariantEditorMode(bool bIsLockerMode);                                                                        // [0x186becc] Event|Protected|BlueprintEvent 
	// Function /Script/MeshCosmeticsUI.FortVariantSprayCustomizer.BP_SetChannelSlotIcon
	// void BP_SetChannelSlotIcon(TWeakObjectPtr<UObject*>& ChannelSlotIcon);                                                   // [0x186becc] Event|Protected|HasOutParms|BlueprintEvent 
};

/// Class /Script/MeshCosmeticsUI.FortVariantSprayCustomizerSetting
/// Size: 0x0040 (0x0002C0 - 0x000300)
class UFortVariantSprayCustomizerSetting : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 768;

public:
	CMember(class UAnalogSlider*)                      Slider_Value                                                OFFSET(get<T>, {0x2C0, 8, 0, 0})
	DMember(float)                                     CommitDelay                                                 OFFSET(get<float>, {0x2C8, 4, 0, 0})


	/// Functions
	// Function /Script/MeshCosmeticsUI.FortVariantSprayCustomizerSetting.HandleSliderValueChanged
	// void HandleSliderValueChanged(float NormalizedValue);                                                                    // [0xb7b5a90] Final|Native|Private 
	// Function /Script/MeshCosmeticsUI.FortVariantSprayCustomizerSetting.BP_OnSetConstraints
	// void BP_OnSetConstraints(FFloatRange& Constraints);                                                                      // [0x186becc] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/MeshCosmeticsUI.FortVariantSprayCustomizerSetting.BP_OnChangeValue
	// void BP_OnChangeValue(float Value, float NormalizedValue);                                                               // [0x186becc] Event|Protected|BlueprintEvent 
};

/// Struct /Script/MeshCosmeticsUI.FortVariantRedirectorTileLoadedEmoteToRandomize
/// Size: 0x0010 (0x000000 - 0x000010)
class FFortVariantRedirectorTileLoadedEmoteToRandomize : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class UItemDefinitionBase*)                LoadedEmote                                                 OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/MeshCosmeticsUI.FortVariantSprayCustomizerChannelOptions
/// Size: 0x0018 (0x000000 - 0x000018)
class FFortVariantSprayCustomizerChannelOptions : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FRotator)                                  RotationOffset                                              OFFSET(getStruct<T>, {0x0, 24, 0, 0})
};

/// Struct /Script/MeshCosmeticsUI.FortVariantSprayCustomizerCosmeticOptions
/// Size: 0x0060 (0x000000 - 0x000060)
class FFortVariantSprayCustomizerCosmeticOptions : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(TArray<TWeakObjectPtr<UItemDefinitionBase*>>) ItemShopPreviewStyles                                    OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TMap<FGameplayTag, FFortVariantSprayCustomizerChannelOptions>) ChannelOptions                          OFFSET(get<T>, {0x10, 80, 0, 0})
};

/// Enum /Script/MeshCosmeticsUI.ERedirectorTileDisplayMode
/// Size: 0x04
enum class ERedirectorTileDisplayMode : uint8_t
{
	ERedirectorTileDisplayMode__DisplaySprayTexture                                  = 0,
	ERedirectorTileDisplayMode__ChangeOpacity                                        = 1,
	ERedirectorTileDisplayMode__SwitchTextures                                       = 2,
	ERedirectorTileDisplayMode__ERedirectorTileDisplayMode_MAX                       = 3
};

