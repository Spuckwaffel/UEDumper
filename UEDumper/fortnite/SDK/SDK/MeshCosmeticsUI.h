
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
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

/// Enum /Script/MeshCosmeticsUI.ERedirectorTileDisplayMode
/// Size: 0x04
enum class ERedirectorTileDisplayMode : uint8_t
{
	ERedirectorTileDisplayMode__DisplaySprayTexture                                  = 0,
	ERedirectorTileDisplayMode__ChangeOpacity                                        = 1,
	ERedirectorTileDisplayMode__SwitchTextures                                       = 2,
	ERedirectorTileDisplayMode__ERedirectorTileDisplayMode_MAX                       = 3
};

/// Struct /Script/MeshCosmeticsUI.FortVariantRedirectorTileLoadedEmoteToRandomize
/// Size: 0x0010 (0x000000 - 0x000010)
struct FFortVariantRedirectorTileLoadedEmoteToRandomize
{ 
	class UItemDefinitionBase*                         LoadedEmote;                                                // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0008   (0x0008)  MISSED
};

/// Class /Script/MeshCosmeticsUI.FortVariantRedirectorTile
/// Size: 0x00E8 (0x0003C0 - 0x0004A8)
class UFortVariantRedirectorTile : public UFortVariantEditorWidgetBase
{ 
public:
	class UDynamicEntryBox*                            EntryBox_VariantOptions;                                    // 0x03C0   (0x0008)  
	class UCommonTextBlock*                            Text_VariantName;                                           // 0x03C8   (0x0008)  
	SDK_UNDEFINED(32,14957) /* TWeakObjectPtr<UClass*> */ __um(SprayCustomizerClass);                              // 0x03D0   (0x0020)  
	class UFortVariantSprayCustomizerConfig*           SprayCustomizerConfig;                                      // 0x03F0   (0x0008)  
	FDataTableRowHandle                                ClearAllSlotsInputAction;                                   // 0x03F8   (0x0010)  
	FDataTableRowHandle                                RandomizeSpraysInputAction;                                 // 0x0408   (0x0010)  
	SDK_UNDEFINED(8,14958) /* TWeakObjectPtr<UAthenaCosmeticItemDefinition*> */ __um(ItemDefinition);              // 0x0418   (0x0008)  
	TArray<FFortVariantRedirectorTileLoadedEmoteToRandomize> LoadedEmotesToRandomize;                              // 0x0420   (0x0010)  
	SDK_UNDEFINED(16,14959) /* FMulticastInlineDelegate */ __um(OnVariantEngagedEvent);                            // 0x0430   (0x0010)  
	unsigned char                                      UnknownData00_6[0x68];                                      // 0x0440   (0x0068)  MISSED


	/// Functions
	// Function /Script/MeshCosmeticsUI.FortVariantRedirectorTile.OnVariantChangedEvent__DelegateSignature
	// void OnVariantChangedEvent__DelegateSignature(FMcpVariantChannelInfo& InChannelInfo);                                 // [0x18a39e4] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/MeshCosmeticsUI.FortVariantRedirectorTile.HandleBoundaryNavigation
	// class UWidget* HandleBoundaryNavigation(EUINavigation InNavigation);                                                  // [0xa968e4c] Final|Native|Private 
	// Function /Script/MeshCosmeticsUI.FortVariantRedirectorTile.GetButtonToFocus
	// class UWidget* GetButtonToFocus();                                                                                    // [0xa968e24] Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/MeshCosmeticsUI.FortVariantSprayCustomizerConfig
/// Size: 0x0050 (0x000030 - 0x000080)
class UFortVariantSprayCustomizerConfig : public UDataAsset
{ 
public:
	SDK_UNDEFINED(80,14960) /* TMap<FGameplayTag, FFortVariantSprayCustomizerCosmeticOptions> */ __um(SprayCustomizerOptions); // 0x0030   (0x0050)  
};

/// Class /Script/MeshCosmeticsUI.FortVariantRedirectorTileButton
/// Size: 0x0060 (0x001490 - 0x0014F0)
class UFortVariantRedirectorTileButton : public UCommonButtonBase
{ 
public:
	class UOverlay*                                    ImageOverlay;                                               // 0x1490   (0x0008)  
	class UFortLazyImage*                              LazyImage_TileIcon;                                         // 0x1498   (0x0008)  
	ERedirectorTileDisplayMode                         DisplayMode;                                                // 0x14A0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x14A1   (0x0003)  MISSED
	float                                              SlotOpacitySprayAssigned;                                   // 0x14A4   (0x0004)  
	float                                              SlotOpacitySprayNotAssigned;                                // 0x14A8   (0x0004)  
	unsigned char                                      UnknownData01_6[0x44];                                      // 0x14AC   (0x0044)  MISSED
};

/// Class /Script/MeshCosmeticsUI.FortVariantSprayCustomizer
/// Size: 0x0158 (0x000730 - 0x000888)
class UFortVariantSprayCustomizer : public UFortItemPreviewScreen
{ 
public:
	class UCommonButtonBase*                           Button_Back;                                                // 0x0730   (0x0008)  
	class UCommonButtonBase*                           Button_Confirm;                                             // 0x0738   (0x0008)  
	class UCommonButtonBase*                           Button_HideArchivedItems;                                   // 0x0740   (0x0008)  
	class UCommonButtonBase*                           Button_ShowArchivedItems;                                   // 0x0748   (0x0008)  
	class UWidget*                                     Widget_ArchivedItemsButtons;                                // 0x0750   (0x0008)  
	class UCommonButtonBase*                           Button_SpraysTab;                                           // 0x0758   (0x0008)  
	class UCommonButtonBase*                           Button_SettingsTab;                                         // 0x0760   (0x0008)  
	class UCommonButtonBase*                           Button_TouchClose;                                          // 0x0768   (0x0008)  
	class UCommonActionWidget*                         ActionWidget_TabLeft;                                       // 0x0770   (0x0008)  
	class UCommonActionWidget*                         ActionWidget_TabRight;                                      // 0x0778   (0x0008)  
	class UCommonActivatableWidgetSwitcher*            Switcher_Tabs;                                              // 0x0780   (0x0008)  
	class UWidget*                                     Widget_Sprays;                                              // 0x0788   (0x0008)  
	class UWidget*                                     Widget_Settings;                                            // 0x0790   (0x0008)  
	class UFortVariantItemTexturePicker*               TexturePicker_Sprays;                                       // 0x0798   (0x0008)  
	class UFortVariantSprayCustomizerSetting*          Setting_Saturation;                                         // 0x07A0   (0x0008)  
	class UFortVariantSprayCustomizerSetting*          Setting_Wear;                                               // 0x07A8   (0x0008)  
	class UFortVariantSprayCustomizerSetting*          Setting_Scale;                                              // 0x07B0   (0x0008)  
	FDataTableRowHandle                                TabLeftAction;                                              // 0x07B8   (0x0010)  
	FDataTableRowHandle                                TabRightAction;                                             // 0x07C8   (0x0010)  
	FGameplayTag                                       ItemShopPreviewSceneChangerTag;                             // 0x07D8   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x07DC   (0x0004)  MISSED
	class UCommonButtonGroupLegacy*                    TabButtonGroup;                                             // 0x07E0   (0x0008)  
	class UFortCustomizableObjectSprayVariant*         SprayVariant;                                               // 0x07E8   (0x0008)  
	unsigned char                                      UnknownData01_6[0x98];                                      // 0x07F0   (0x0098)  MISSED


	/// Functions
	// Function /Script/MeshCosmeticsUI.FortVariantSprayCustomizer.BP_SetVariantEditorMode
	// void BP_SetVariantEditorMode(bool bIsLockerMode);                                                                     // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/MeshCosmeticsUI.FortVariantSprayCustomizer.BP_SetChannelSlotIcon
	// void BP_SetChannelSlotIcon(TWeakObjectPtr<UObject*>& ChannelSlotIcon);                                                // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
};

/// Class /Script/MeshCosmeticsUI.FortVariantSprayCustomizerSetting
/// Size: 0x0040 (0x0002C0 - 0x000300)
class UFortVariantSprayCustomizerSetting : public UUserWidget
{ 
public:
	class UAnalogSlider*                               Slider_Value;                                               // 0x02C0   (0x0008)  
	float                                              CommitDelay;                                                // 0x02C8   (0x0004)  
	unsigned char                                      UnknownData00_6[0x34];                                      // 0x02CC   (0x0034)  MISSED


	/// Functions
	// Function /Script/MeshCosmeticsUI.FortVariantSprayCustomizerSetting.HandleSliderValueChanged
	// void HandleSliderValueChanged(float NormalizedValue);                                                                 // [0xa968edc] Final|Native|Private 
	// Function /Script/MeshCosmeticsUI.FortVariantSprayCustomizerSetting.BP_OnSetConstraints
	// void BP_OnSetConstraints(FFloatRange& Constraints);                                                                   // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/MeshCosmeticsUI.FortVariantSprayCustomizerSetting.BP_OnChangeValue
	// void BP_OnChangeValue(float Value, float NormalizedValue);                                                            // [0x18a39e4] Event|Protected|BlueprintEvent 
};

/// Struct /Script/MeshCosmeticsUI.FortVariantSprayCustomizerChannelOptions
/// Size: 0x0018 (0x000000 - 0x000018)
struct FFortVariantSprayCustomizerChannelOptions
{ 
	FRotator                                           RotationOffset;                                             // 0x0000   (0x0018)  
};

/// Struct /Script/MeshCosmeticsUI.FortVariantSprayCustomizerCosmeticOptions
/// Size: 0x0060 (0x000000 - 0x000060)
struct FFortVariantSprayCustomizerCosmeticOptions
{ 
	SDK_UNDEFINED(16,14961) /* TArray<TWeakObjectPtr<UItemDefinitionBase*>> */ __um(ItemShopPreviewStyles);        // 0x0000   (0x0010)  
	SDK_UNDEFINED(80,14962) /* TMap<FGameplayTag, FFortVariantSprayCustomizerChannelOptions> */ __um(ChannelOptions); // 0x0010   (0x0050)  
};

