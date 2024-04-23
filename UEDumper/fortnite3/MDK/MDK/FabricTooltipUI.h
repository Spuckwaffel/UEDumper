
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CommonUI
/// dependency: CoreUObject
/// dependency: FortniteGame
/// dependency: FortniteUI
/// dependency: ModelViewViewModel
/// dependency: UMG

/// Class /Script/FabricTooltipUI.FabricTooltipViewModel
/// Size: 0x0020 (0x000068 - 0x000088)
class UFabricTooltipViewModel : public UMVVMViewModelBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FText)                                     Name                                                        OFFSET(getStruct<T>, {0x68, 16, 0, 0})
	SMember(FText)                                     Description                                                 OFFSET(getStruct<T>, {0x78, 16, 0, 0})
};

/// Class /Script/FabricTooltipUI.FabricTooltipWidget
/// Size: 0x0060 (0x0003D8 - 0x000438)
class UFabricTooltipWidget : public UFortActorIndicatorWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1080;

public:
	DMember(bool)                                      bUseShortDescription                                        OFFSET(get<bool>, {0x3D8, 1, 0, 0})
	DMember(bool)                                      bUseShortDescriptionWithTouch                               OFFSET(get<bool>, {0x3D9, 1, 0, 0})
	DMember(float)                                     ShortDescriptionHeight                                      OFFSET(get<float>, {0x3DC, 4, 0, 0})
	DMember(float)                                     ShowMoreThreshold                                           OFFSET(get<float>, {0x3E0, 4, 0, 0})
	SMember(FText)                                     ShowMoreText                                                OFFSET(getStruct<T>, {0x3E8, 16, 0, 0})
	SMember(FText)                                     ShowLessText                                                OFFSET(getStruct<T>, {0x3F8, 16, 0, 0})
	CMember(class UAthenaMarkerPointer*)               MarkerPointer                                               OFFSET(get<T>, {0x408, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   Text_Description                                            OFFSET(get<T>, {0x410, 8, 0, 0})
	CMember(class USizeBox*)                           SizeBox_Description                                         OFFSET(get<T>, {0x418, 8, 0, 0})
	CMember(class UPanelWidget*)                       Panel_ShowMorePrompt                                        OFFSET(get<T>, {0x420, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   Text_ShowMorePrompt                                         OFFSET(get<T>, {0x428, 8, 0, 0})
	DMember(bool)                                      bShowingFullDescription                                     OFFSET(get<bool>, {0x430, 1, 0, 0})


	/// Functions
	// Function /Script/FabricTooltipUI.FabricTooltipWidget.UpdateShowMore
	// void UpdateShowMore();                                                                                                   // [0xc6431bc] Final|Native|Protected|BlueprintCallable 
	// Function /Script/FabricTooltipUI.FabricTooltipWidget.ToggleShowMore
	// void ToggleShowMore();                                                                                                   // [0xc64316c] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/FabricTooltipUI.FabricTooltipWidget.SetShowMore
	// void SetShowMore(bool bShowingMore);                                                                                     // [0xc6430ec] Final|Native|Protected|BlueprintCallable 
	// Function /Script/FabricTooltipUI.FabricTooltipWidget.InitTooltip
	// void InitTooltip(class AActor* TargetedActor, class UPrimitiveComponent* TargetedComponent);                             // [0xc643028] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/FabricTooltipUI.FortGameSettingRegistryExtension_Fabric
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortGameSettingRegistryExtension_Fabric : public UFortGameSettingRegistryExtension
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

