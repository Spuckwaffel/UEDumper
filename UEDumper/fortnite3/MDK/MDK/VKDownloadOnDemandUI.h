
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CommonUI
/// dependency: CommonUILegacy
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: FortniteUI
/// dependency: SlateCore
/// dependency: UMG
/// dependency: VKDownloadOnDemandGameplay

/// Class /Script/VKDownloadOnDemandUI.DownloadOnDemandProjectManagementTab
/// Size: 0x00A0 (0x0002C8 - 0x000368)
class UDownloadOnDemandProjectManagementTab : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 872;

public:
	CMember(class UDownloadOnDemandProject*)           Project                                                     OFFSET(get<T>, {0x2F8, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   TextBlock_ProjectTitle                                      OFFSET(get<T>, {0x310, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   TextBlock_LinkCode                                          OFFSET(get<T>, {0x318, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   TextBlock_VersionNumber                                     OFFSET(get<T>, {0x320, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   TextBlock_LatestVersionNumber                               OFFSET(get<T>, {0x328, 8, 0, 0})
	CMember(class UImage*)                             Image_LatestVersionSpinner                                  OFFSET(get<T>, {0x330, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   TextBlock_Description                                       OFFSET(get<T>, {0x338, 8, 0, 0})
	CMember(class UCommonButtonLegacy*)                Button_RemoveProject                                        OFFSET(get<T>, {0x340, 8, 0, 0})
	CMember(class UCommonButtonLegacy*)                Button_UpdateProject                                        OFFSET(get<T>, {0x348, 8, 0, 0})
	CMember(class UCommonVisibilitySwitcher*)          Switcher_Props                                              OFFSET(get<T>, {0x350, 8, 0, 0})
	CMember(class UCommonTileView*)                    CommonTileView_ProjectAssetTiles                            OFFSET(get<T>, {0x358, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   TextBlock_NoPropsMessage                                    OFFSET(get<T>, {0x360, 8, 0, 0})


	/// Functions
	// Function /Script/VKDownloadOnDemandUI.DownloadOnDemandProjectManagementTab.UpdateProjectConfirmed
	// void UpdateProjectConfirmed();                                                                                           // [0xca408cc] Final|Native|Protected|BlueprintCallable 
	// Function /Script/VKDownloadOnDemandUI.DownloadOnDemandProjectManagementTab.RemoveProjectConfirmed
	// void RemoveProjectConfirmed();                                                                                           // [0xca40828] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/VKDownloadOnDemandUI.DownloadOnDemandTabPanel
/// Size: 0x00A8 (0x000448 - 0x0004F0)
class UDownloadOnDemandTabPanel : public UFortCreativeContentBrowserTabPanelBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1264;

public:
	SMember(FDataTableRowHandle)                       AddProjectWithLinkCodeInputRowHandle                        OFFSET(getStruct<T>, {0x448, 16, 0, 0})
	SMember(FDataTableRowHandle)                       AddSelectedProjectInputRowHandle                            OFFSET(getStruct<T>, {0x458, 16, 0, 0})
	SMember(FDataTableRowHandle)                       ManageSelectedProjectInputRowHandle                         OFFSET(getStruct<T>, {0x468, 16, 0, 0})
	CMember(class UClass*)                             DownloadOnDemandProjectDetailsSidePanelClass                OFFSET(get<T>, {0x478, 8, 0, 0})
	CMember(class UClass*)                             DownloadOnDemandAddProjectModalClass                        OFFSET(get<T>, {0x480, 8, 0, 0})
	CMember(class UClass*)                             DownloadOnDemandMessageModalClass                           OFFSET(get<T>, {0x488, 8, 0, 0})
	SMember(FString)                                   AddProjectsWithMnemonicEntitlementName                      OFFSET(getStruct<T>, {0x490, 16, 0, 0})
	CMember(class UDownloadOnDemandProject*)           SelectedProject                                             OFFSET(get<T>, {0x4A0, 8, 0, 0})
	CMember(class UOverlay*)                           Overlay_AddProjectParent                                    OFFSET(get<T>, {0x4B8, 8, 0, 0})
	CMember(class UCommonTileView*)                    CommonTileView_ProjectTiles                                 OFFSET(get<T>, {0x4C0, 8, 0, 0})
	CMember(class UCommonVisibilitySwitcher*)          Switcher_DownloadOnDemandPanels                             OFFSET(get<T>, {0x4C8, 8, 0, 0})
	CMember(class UCommonButtonLegacy*)                Button_AddProject                                           OFFSET(get<T>, {0x4D0, 8, 0, 0})
	CMember(class UHorizontalBox*)                     HorizontalBox_EntitlementCheckMessage                       OFFSET(get<T>, {0x4D8, 8, 0, 0})
	CMember(class UHorizontalBox*)                     HorizontalBox_EntitlementCheckFailed                        OFFSET(get<T>, {0x4E0, 8, 0, 0})
	CMember(class UDownloadOnDemandProjectManagementTab*) ProjectManagementTab                                     OFFSET(get<T>, {0x4E8, 8, 0, 0})
};

/// Class /Script/VKDownloadOnDemandUI.DownloadOnDemandTab_EntitlementCreationCondition
/// Size: 0x0010 (0x000028 - 0x000038)
class UDownloadOnDemandTab_EntitlementCreationCondition : public UCreativeContentBrowserTab_CreationCondition
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FString)                                   EntitlementName                                             OFFSET(getStruct<T>, {0x28, 16, 0, 0})
};

/// Class /Script/VKDownloadOnDemandUI.DownloadOnDemandAddProjectModal
/// Size: 0x0048 (0x000408 - 0x000450)
class UDownloadOnDemandAddProjectModal : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1104;

public:
	CMember(class UDownloadOnDemandProject*)           Project                                                     OFFSET(get<T>, {0x408, 8, 0, 0})
	CMember(class UEditableTextBox*)                   EditableTextBox_DownloadLinkCode                            OFFSET(get<T>, {0x420, 8, 0, 0})
	CMember(class UCommonButtonLegacy*)                Button_AddProject                                           OFFSET(get<T>, {0x428, 8, 0, 0})
	CMember(class UCommonButtonLegacy*)                Button_Cancel                                               OFFSET(get<T>, {0x430, 8, 0, 0})
	CMember(class UDownloadOnDemandProjectTileImage*)  ProjectTileImage_Preview                                    OFFSET(get<T>, {0x438, 8, 0, 0})
	CMember(class UOverlay*)                           Overlay_ProjectTitle                                        OFFSET(get<T>, {0x440, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   TextBlock_ProjectTitle                                      OFFSET(get<T>, {0x448, 8, 0, 0})


	/// Functions
	// Function /Script/VKDownloadOnDemandUI.DownloadOnDemandAddProjectModal.UpdateLightningViolator
	// void UpdateLightningViolator(ESlateVisibility InVisibility, FText& InText);                                              // [0x1340978] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/VKDownloadOnDemandUI.DownloadOnDemandAddProjectModal.HandleDownloadLinkIdTextChanged
	// void HandleDownloadLinkIdTextChanged(FText& InputLinkCode);                                                              // [0xca4078c] Final|Native|Private|HasOutParms 
};

/// Class /Script/VKDownloadOnDemandUI.DownloadOnDemandMessageModal
/// Size: 0x0018 (0x000408 - 0x000420)
class UDownloadOnDemandMessageModal : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1056;

public:
	CMember(class UCommonTextBlock*)                   TextBlock_MessageTitle                                      OFFSET(get<T>, {0x408, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   TextBlock_Message                                           OFFSET(get<T>, {0x410, 8, 0, 0})
	CMember(class UCommonButtonLegacy*)                Button_Close                                                OFFSET(get<T>, {0x418, 8, 0, 0})
};

/// Class /Script/VKDownloadOnDemandUI.DownloadOnDemandProjectDetailsSidePanel
/// Size: 0x0010 (0x0002C8 - 0x0002D8)
class UDownloadOnDemandProjectDetailsSidePanel : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 728;

public:
	CMember(class UDownloadOnDemandProjectTile*)       DownloadOnDemandProjectTile_CurrentProjectEntry             OFFSET(get<T>, {0x2C8, 8, 0, 0})
	CMember(class UCreativeContentBrowserItemInfo*)    ContentBrowserItemInfo_ItemDetails                          OFFSET(get<T>, {0x2D0, 8, 0, 0})
};

/// Class /Script/VKDownloadOnDemandUI.DownloadOnDemandStatusFeed
/// Size: 0x0010 (0x0002C8 - 0x0002D8)
class UDownloadOnDemandStatusFeed : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 728;

public:
	DMember(bool)                                      bOverrideOldStatusWithNewStatus                             OFFSET(get<bool>, {0x2C8, 1, 0, 0})
	CMember(class UFortDynamicEntryBox*)               EntryBox_DownloadStatusContainer                            OFFSET(get<T>, {0x2D0, 8, 0, 0})
};

/// Class /Script/VKDownloadOnDemandUI.DownloadOnDemandStatusFeedLine
/// Size: 0x0008 (0x0002C8 - 0x0002D0)
class UDownloadOnDemandStatusFeedLine : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 720;

public:
	CMember(class UCommonTextBlock*)                   TextBlock_DownloadStatus                                    OFFSET(get<T>, {0x2C8, 8, 0, 0})
};

/// Class /Script/VKDownloadOnDemandUI.DownloadOnDemandProjectAssetTileInitializer
/// Size: 0x0010 (0x000028 - 0x000038)
class UDownloadOnDemandProjectAssetTileInitializer : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(class UFortPlaysetPropItemDefinition*)     PropItemDefinition                                          OFFSET(get<T>, {0x30, 8, 0, 0})
};

/// Class /Script/VKDownloadOnDemandUI.DownloadOnDemandProjectAssetTile
/// Size: 0x0040 (0x0014D0 - 0x001510)
class UDownloadOnDemandProjectAssetTile : public UCommonButtonLegacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5392;

public:
	CMember(class UDownloadOnDemandProjectAssetTileInitializer*) Initializer                                       OFFSET(get<T>, {0x14D8, 8, 0, 0})
	CMember(class UImage*)                             Image_Item                                                  OFFSET(get<T>, {0x14F0, 8, 0, 0})
	CMember(class UImage*)                             Image_Spinner                                               OFFSET(get<T>, {0x14F8, 8, 0, 0})
	CMember(class UCommonNumericTextBlock*)            NumericTextBlock_ItemCount                                  OFFSET(get<T>, {0x1500, 8, 0, 0})
};

/// Class /Script/VKDownloadOnDemandUI.DownloadOnDemandProjectTile
/// Size: 0x01F0 (0x0014D0 - 0x0016C0)
class UDownloadOnDemandProjectTile : public UCommonButtonLegacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5824;

public:
	SMember(FSlateBrush)                               SelectedHighlightBrush                                      OFFSET(getStruct<T>, {0x14E0, 192, 0, 0})
	SMember(FSlateBrush)                               HoveredHighlightBrush                                       OFFSET(getStruct<T>, {0x15A0, 192, 0, 0})
	DMember(bool)                                      bIsSelected                                                 OFFSET(get<bool>, {0x1660, 1, 0, 0})
	CMember(class UDownloadOnDemandProject*)           Project                                                     OFFSET(get<T>, {0x1668, 8, 0, 0})
	CMember(class UDownloadOnDemandProjectTileImage*)  ProjectTileImage_Preview                                    OFFSET(get<T>, {0x1680, 8, 0, 0})
	CMember(class UImage*)                             Image_UpdatePending                                         OFFSET(get<T>, {0x1688, 8, 0, 0})
	CMember(class UImage*)                             Image_AddProject                                            OFFSET(get<T>, {0x1690, 8, 0, 0})
	CMember(class UImage*)                             Image_Spinner                                               OFFSET(get<T>, {0x1698, 8, 0, 0})
	CMember(class UImage*)                             Image_Error                                                 OFFSET(get<T>, {0x16A0, 8, 0, 0})
	CMember(class USizeBox*)                           SizeBox_Label                                               OFFSET(get<T>, {0x16A8, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   TextBlock_Label                                             OFFSET(get<T>, {0x16B0, 8, 0, 0})
	CMember(class UCommonBorder*)                      Border_Highlight                                            OFFSET(get<T>, {0x16B8, 8, 0, 0})


	/// Functions
	// Function /Script/VKDownloadOnDemandUI.DownloadOnDemandProjectTile.UpdateLabel
	// void UpdateLabel(bool bShowLabel);                                                                                       // [0xca4084c] Final|Native|Public|BlueprintCallable 
	// Function /Script/VKDownloadOnDemandUI.DownloadOnDemandProjectTile.OnLabelUpdated
	// void OnLabelUpdated();                                                                                                   // [0x1340978] Event|Protected|BlueprintEvent 
};

/// Class /Script/VKDownloadOnDemandUI.DownloadOnDemandProjectTileImage
/// Size: 0x0038 (0x0002C8 - 0x000300)
class UDownloadOnDemandProjectTileImage : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 768;

public:
	CMember(class UTexture*)                           EmptyProjectTexture                                         OFFSET(get<T>, {0x2C8, 8, 0, 0})
	DMember(bool)                                      bOverrideGrayScale                                          OFFSET(get<bool>, {0x2D0, 1, 1, 0})
	DMember(float)                                     GreyScaleOverride                                           OFFSET(get<float>, {0x2D4, 4, 0, 0})
	CMember(class UDownloadOnDemandProject*)           Project                                                     OFFSET(get<T>, {0x2D8, 8, 0, 0})
	CMember(class UImage*)                             Image_ProjectPreview                                        OFFSET(get<T>, {0x2F0, 8, 0, 0})
	CMember(class UImage*)                             Image_LoadingImageSpinner                                   OFFSET(get<T>, {0x2F8, 8, 0, 0})
};

