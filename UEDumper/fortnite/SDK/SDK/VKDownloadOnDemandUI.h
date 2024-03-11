
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
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
/// Size: 0x00A0 (0x0002C0 - 0x000360)
class UDownloadOnDemandProjectManagementTab : public UUserWidget
{ 
public:
	unsigned char                                      UnknownData00_3[0x30];                                      // 0x02C0   (0x0030)  MISSED
	class UDownloadOnDemandProject*                    Project;                                                    // 0x02F0   (0x0008)  
	unsigned char                                      UnknownData01_5[0x10];                                      // 0x02F8   (0x0010)  MISSED
	class UCommonTextBlock*                            TextBlock_ProjectTitle;                                     // 0x0308   (0x0008)  
	class UCommonTextBlock*                            TextBlock_LinkCode;                                         // 0x0310   (0x0008)  
	class UCommonTextBlock*                            TextBlock_VersionNumber;                                    // 0x0318   (0x0008)  
	class UCommonTextBlock*                            TextBlock_LatestVersionNumber;                              // 0x0320   (0x0008)  
	class UImage*                                      Image_LatestVersionSpinner;                                 // 0x0328   (0x0008)  
	class UCommonTextBlock*                            TextBlock_Description;                                      // 0x0330   (0x0008)  
	class UCommonButtonLegacy*                         Button_RemoveProject;                                       // 0x0338   (0x0008)  
	class UCommonButtonLegacy*                         Button_UpdateProject;                                       // 0x0340   (0x0008)  
	class UCommonVisibilitySwitcher*                   Switcher_Props;                                             // 0x0348   (0x0008)  
	class UCommonTileView*                             CommonTileView_ProjectAssetTiles;                           // 0x0350   (0x0008)  
	class UCommonTextBlock*                            TextBlock_NoPropsMessage;                                   // 0x0358   (0x0008)  


	/// Functions
	// Function /Script/VKDownloadOnDemandUI.DownloadOnDemandProjectManagementTab.UpdateProjectConfirmed
	// void UpdateProjectConfirmed();                                                                                        // [0xacfc4c4] Final|Native|Protected|BlueprintCallable 
	// Function /Script/VKDownloadOnDemandUI.DownloadOnDemandProjectManagementTab.RemoveProjectConfirmed
	// void RemoveProjectConfirmed();                                                                                        // [0xacfc420] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/VKDownloadOnDemandUI.DownloadOnDemandTabPanel
/// Size: 0x00A8 (0x000448 - 0x0004F0)
class UDownloadOnDemandTabPanel : public UFortCreativeContentBrowserTabPanelBase
{ 
public:
	FDataTableRowHandle                                AddProjectWithLinkCodeInputRowHandle;                       // 0x0448   (0x0010)  
	FDataTableRowHandle                                AddSelectedProjectInputRowHandle;                           // 0x0458   (0x0010)  
	FDataTableRowHandle                                ManageSelectedProjectInputRowHandle;                        // 0x0468   (0x0010)  
	class UClass*                                      DownloadOnDemandProjectDetailsSidePanelClass;               // 0x0478   (0x0008)  
	class UClass*                                      DownloadOnDemandAddProjectModalClass;                       // 0x0480   (0x0008)  
	class UClass*                                      DownloadOnDemandMessageModalClass;                          // 0x0488   (0x0008)  
	SDK_UNDEFINED(16,15745) /* FString */              __um(AddProjectsWithMnemonicEntitlementName);               // 0x0490   (0x0010)  
	class UDownloadOnDemandProject*                    SelectedProject;                                            // 0x04A0   (0x0008)  
	unsigned char                                      UnknownData00_5[0x10];                                      // 0x04A8   (0x0010)  MISSED
	class UOverlay*                                    Overlay_AddProjectParent;                                   // 0x04B8   (0x0008)  
	class UCommonTileView*                             CommonTileView_ProjectTiles;                                // 0x04C0   (0x0008)  
	class UCommonVisibilitySwitcher*                   Switcher_DownloadOnDemandPanels;                            // 0x04C8   (0x0008)  
	class UCommonButtonLegacy*                         Button_AddProject;                                          // 0x04D0   (0x0008)  
	class UHorizontalBox*                              HorizontalBox_EntitlementCheckMessage;                      // 0x04D8   (0x0008)  
	class UHorizontalBox*                              HorizontalBox_EntitlementCheckFailed;                       // 0x04E0   (0x0008)  
	class UDownloadOnDemandProjectManagementTab*       ProjectManagementTab;                                       // 0x04E8   (0x0008)  
};

/// Class /Script/VKDownloadOnDemandUI.DownloadOnDemandTab_EntitlementCreationCondition
/// Size: 0x0010 (0x000028 - 0x000038)
class UDownloadOnDemandTab_EntitlementCreationCondition : public UCreativeContentBrowserTab_CreationCondition
{ 
public:
	SDK_UNDEFINED(16,15746) /* FString */              __um(EntitlementName);                                      // 0x0028   (0x0010)  
};

/// Class /Script/VKDownloadOnDemandUI.DownloadOnDemandAddProjectModal
/// Size: 0x0048 (0x000400 - 0x000448)
class UDownloadOnDemandAddProjectModal : public UCommonActivatableWidget
{ 
public:
	class UDownloadOnDemandProject*                    Project;                                                    // 0x0400   (0x0008)  
	unsigned char                                      UnknownData00_5[0x10];                                      // 0x0408   (0x0010)  MISSED
	class UEditableTextBox*                            EditableTextBox_DownloadLinkCode;                           // 0x0418   (0x0008)  
	class UCommonButtonLegacy*                         Button_AddProject;                                          // 0x0420   (0x0008)  
	class UCommonButtonLegacy*                         Button_Cancel;                                              // 0x0428   (0x0008)  
	class UDownloadOnDemandProjectTileImage*           ProjectTileImage_Preview;                                   // 0x0430   (0x0008)  
	class UOverlay*                                    Overlay_ProjectTitle;                                       // 0x0438   (0x0008)  
	class UCommonTextBlock*                            TextBlock_ProjectTitle;                                     // 0x0440   (0x0008)  


	/// Functions
	// Function /Script/VKDownloadOnDemandUI.DownloadOnDemandAddProjectModal.UpdateLightningViolator
	// void UpdateLightningViolator(ESlateVisibility InVisibility, FText& InText);                                           // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/VKDownloadOnDemandUI.DownloadOnDemandAddProjectModal.HandleDownloadLinkIdTextChanged
	// void HandleDownloadLinkIdTextChanged(FText& InputLinkCode);                                                           // [0xacfc384] Final|Native|Private|HasOutParms 
};

/// Class /Script/VKDownloadOnDemandUI.DownloadOnDemandMessageModal
/// Size: 0x0018 (0x000400 - 0x000418)
class UDownloadOnDemandMessageModal : public UCommonActivatableWidget
{ 
public:
	class UCommonTextBlock*                            TextBlock_MessageTitle;                                     // 0x0400   (0x0008)  
	class UCommonTextBlock*                            TextBlock_Message;                                          // 0x0408   (0x0008)  
	class UCommonButtonLegacy*                         Button_Close;                                               // 0x0410   (0x0008)  
};

/// Class /Script/VKDownloadOnDemandUI.DownloadOnDemandProjectDetailsSidePanel
/// Size: 0x0010 (0x0002C0 - 0x0002D0)
class UDownloadOnDemandProjectDetailsSidePanel : public UUserWidget
{ 
public:
	class UDownloadOnDemandProjectTile*                DownloadOnDemandProjectTile_CurrentProjectEntry;            // 0x02C0   (0x0008)  
	class UCreativeContentBrowserItemInfo*             ContentBrowserItemInfo_ItemDetails;                         // 0x02C8   (0x0008)  
};

/// Class /Script/VKDownloadOnDemandUI.DownloadOnDemandStatusFeed
/// Size: 0x0010 (0x0002C0 - 0x0002D0)
class UDownloadOnDemandStatusFeed : public UUserWidget
{ 
public:
	bool                                               bOverrideOldStatusWithNewStatus;                            // 0x02C0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x02C1   (0x0007)  MISSED
	class UFortDynamicEntryBox*                        EntryBox_DownloadStatusContainer;                           // 0x02C8   (0x0008)  
};

/// Class /Script/VKDownloadOnDemandUI.DownloadOnDemandStatusFeedLine
/// Size: 0x0008 (0x0002C0 - 0x0002C8)
class UDownloadOnDemandStatusFeedLine : public UUserWidget
{ 
public:
	class UCommonTextBlock*                            TextBlock_DownloadStatus;                                   // 0x02C0   (0x0008)  
};

/// Class /Script/VKDownloadOnDemandUI.DownloadOnDemandProjectAssetTileInitializer
/// Size: 0x0010 (0x000028 - 0x000038)
class UDownloadOnDemandProjectAssetTileInitializer : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x30];                                      // 0x0000   (0x0030)  MISSED
	class UFortPlaysetPropItemDefinition*              PropItemDefinition;                                         // 0x0030   (0x0008)  
};

/// Class /Script/VKDownloadOnDemandUI.DownloadOnDemandProjectAssetTile
/// Size: 0x0040 (0x0014E0 - 0x001520)
class UDownloadOnDemandProjectAssetTile : public UCommonButtonLegacy
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x14E0   (0x0008)  MISSED
	class UDownloadOnDemandProjectAssetTileInitializer* Initializer;                                               // 0x14E8   (0x0008)  
	unsigned char                                      UnknownData01_5[0x10];                                      // 0x14F0   (0x0010)  MISSED
	class UImage*                                      Image_Item;                                                 // 0x1500   (0x0008)  
	class UImage*                                      Image_Spinner;                                              // 0x1508   (0x0008)  
	class UCommonNumericTextBlock*                     NumericTextBlock_ItemCount;                                 // 0x1510   (0x0008)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x1518   (0x0008)  MISSED
};

/// Class /Script/VKDownloadOnDemandUI.DownloadOnDemandProjectTile
/// Size: 0x01F0 (0x0014E0 - 0x0016D0)
class UDownloadOnDemandProjectTile : public UCommonButtonLegacy
{ 
public:
	unsigned char                                      UnknownData00_3[0x10];                                      // 0x14E0   (0x0010)  MISSED
	FSlateBrush                                        SelectedHighlightBrush;                                     // 0x14F0   (0x00C0)  
	FSlateBrush                                        HoveredHighlightBrush;                                      // 0x15B0   (0x00C0)  
	bool                                               bIsSelected;                                                // 0x1670   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x1671   (0x0007)  MISSED
	class UDownloadOnDemandProject*                    Project;                                                    // 0x1678   (0x0008)  
	unsigned char                                      UnknownData02_5[0x10];                                      // 0x1680   (0x0010)  MISSED
	class UDownloadOnDemandProjectTileImage*           ProjectTileImage_Preview;                                   // 0x1690   (0x0008)  
	class UImage*                                      Image_UpdatePending;                                        // 0x1698   (0x0008)  
	class UImage*                                      Image_AddProject;                                           // 0x16A0   (0x0008)  
	class UImage*                                      Image_Spinner;                                              // 0x16A8   (0x0008)  
	class UImage*                                      Image_Error;                                                // 0x16B0   (0x0008)  
	class USizeBox*                                    SizeBox_Label;                                              // 0x16B8   (0x0008)  
	class UCommonTextBlock*                            TextBlock_Label;                                            // 0x16C0   (0x0008)  
	class UCommonBorder*                               Border_Highlight;                                           // 0x16C8   (0x0008)  


	/// Functions
	// Function /Script/VKDownloadOnDemandUI.DownloadOnDemandProjectTile.UpdateLabel
	// void UpdateLabel(bool bShowLabel);                                                                                    // [0xacfc444] Final|Native|Public|BlueprintCallable 
	// Function /Script/VKDownloadOnDemandUI.DownloadOnDemandProjectTile.OnLabelUpdated
	// void OnLabelUpdated();                                                                                                // [0x18a39e4] Event|Protected|BlueprintEvent 
};

/// Class /Script/VKDownloadOnDemandUI.DownloadOnDemandProjectTileImage
/// Size: 0x0038 (0x0002C0 - 0x0002F8)
class UDownloadOnDemandProjectTileImage : public UUserWidget
{ 
public:
	class UTexture*                                    EmptyProjectTexture;                                        // 0x02C0   (0x0008)  
	bool                                               bOverrideGrayScale : 1;                                     // 0x02C8:0 (0x0001)  
	unsigned char                                      UnknownData00_4[0x3];                                       // 0x02C9   (0x0003)  MISSED
	float                                              GreyScaleOverride;                                          // 0x02CC   (0x0004)  
	class UDownloadOnDemandProject*                    Project;                                                    // 0x02D0   (0x0008)  
	unsigned char                                      UnknownData01_5[0x10];                                      // 0x02D8   (0x0010)  MISSED
	class UImage*                                      Image_ProjectPreview;                                       // 0x02E8   (0x0008)  
	class UImage*                                      Image_LoadingImageSpinner;                                  // 0x02F0   (0x0008)  
};

