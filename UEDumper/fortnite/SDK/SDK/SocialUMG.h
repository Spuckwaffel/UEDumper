
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
/// dependency: Party
/// dependency: SlateCore
/// dependency: UMG

/// Class /Script/SocialUMG.DesignerPreviewChatChannel
/// Size: 0x0068 (0x0000E8 - 0x000150)
class UDesignerPreviewChatChannel : public USocialChatChannel
{ 
public:
	unsigned char                                      UnknownData00_1[0x68];                                      // 0x00E8   (0x0068)  MISSED
};

/// Class /Script/SocialUMG.SocialChatChannelTab
/// Size: 0x0010 (0x0014E0 - 0x0014F0)
class USocialChatChannelTab : public UCommonButtonLegacy
{ 
public:
	class USocialChatChannel*                          ChatChannel;                                                // 0x14E0   (0x0008)  
	class UCommonTextBlock*                            CommonText_ChannelName;                                     // 0x14E8   (0x0008)  
};

/// Class /Script/SocialUMG.SocialChatContainer
/// Size: 0x0058 (0x0002C0 - 0x000318)
class USocialChatContainer : public UUserWidget
{ 
public:
	class USocialChatManager*                          ChatManager;                                                // 0x02C0   (0x0008)  
	TArray<class USocialChatChannel*>                  JoinedChannels;                                             // 0x02C8   (0x0010)  
	class USocialChatChannel*                          ActiveChannel;                                              // 0x02D8   (0x0008)  
	class UCommonButtonGroupLegacy*                    TabButtonGroup;                                             // 0x02E0   (0x0008)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x02E8   (0x0008)  MISSED
	class USocialChatMessageList*                      ChatList_Messages;                                          // 0x02F0   (0x0008)  
	class USocialChatEditableText*                     ChatEditableText_MessageEntry;                              // 0x02F8   (0x0008)  
	class UCommonButtonBase*                           Button_SendMessage;                                         // 0x0300   (0x0008)  
	class UDynamicEntryBox*                            EntryBox_JoinedChannels;                                    // 0x0308   (0x0008)  
	class UScrollBox*                                  ScrollBox_Channels;                                         // 0x0310   (0x0008)  


	/// Functions
	// Function /Script/SocialUMG.SocialChatContainer.SendCurrentMessage
	// void SendCurrentMessage();                                                                                            // [0x997155c] Final|Native|Public|BlueprintCallable 
	// Function /Script/SocialUMG.SocialChatContainer.OnChatOpenChanged
	// void OnChatOpenChanged(bool bShouldBeOpen);                                                                           // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/SocialUMG.SocialChatContainer.HandleRightTabPressed
	// void HandleRightTabPressed();                                                                                         // [0x99714d4] Final|Native|Public|BlueprintCallable 
	// Function /Script/SocialUMG.SocialChatContainer.HandleLeftTabPressed
	// void HandleLeftTabPressed();                                                                                          // [0x99713b8] Final|Native|Public|BlueprintCallable 
	// Function /Script/SocialUMG.SocialChatContainer.FocusEditableText
	// void FocusEditableText();                                                                                             // [0x9971308] Final|Native|Public|BlueprintCallable 
	// Function /Script/SocialUMG.SocialChatContainer.DynamicHandleMessageTextCommitted
	// void DynamicHandleMessageTextCommitted(FText& MessageText, TEnumAsByte<ETextCommit> CommitMethod);                    // [0x99711f4] Final|Native|Private|HasOutParms 
};

/// Struct /Script/SocialUMG.SocialChatMessageEntryTextStyle
/// Size: 0x0068 (0x000000 - 0x000068)
struct FSocialChatMessageEntryTextStyle
{ 
	FSlateFontInfo                                     FontInfo;                                                   // 0x0000   (0x0058)  
	FLinearColor                                       ColorAndOpacity;                                            // 0x0058   (0x0010)  
};

/// Struct /Script/SocialUMG.SocialChatMessageEntryStyle
/// Size: 0x0138 (0x000000 - 0x000138)
struct FSocialChatMessageEntryStyle
{ 
	FSocialChatMessageEntryTextStyle                   SenderNameStyle;                                            // 0x0000   (0x0068)  
	FSocialChatMessageEntryTextStyle                   ChannelNameStyle;                                           // 0x0068   (0x0068)  
	FSocialChatMessageEntryTextStyle                   MessageTextStyle;                                           // 0x00D0   (0x0068)  
};

/// Class /Script/SocialUMG.SocialChatMessageEntry
/// Size: 0x0160 (0x0002C0 - 0x000420)
class USocialChatMessageEntry : public UUserWidget
{ 
public:
	unsigned char                                      UnknownData00_3[0x18];                                      // 0x02C0   (0x0018)  MISSED
	FSocialChatMessageEntryStyle                       DefaultStyle;                                               // 0x02D8   (0x0138)  
	class UCommonRichTextBlock*                        RichText_Message;                                           // 0x0410   (0x0008)  
	class UButton*                                     Button_MessageButton;                                       // 0x0418   (0x0008)  


	/// Functions
	// Function /Script/SocialUMG.SocialChatMessageEntry.OnMessageSet
	// void OnMessageSet();                                                                                                  // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/SocialUMG.SocialChatMessageEntry.CanInteract
	// bool CanInteract();                                                                                                   // [0x331049c] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SocialUMG.SocialChatMessageList
/// Size: 0x0118 (0x000298 - 0x0003B0)
class USocialChatMessageList : public UListViewBase
{ 
public:
	unsigned char                                      UnknownData00_3[0xE8];                                      // 0x0298   (0x00E8)  MISSED
	bool                                               bIsFocusable;                                               // 0x0380   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0381   (0x0007)  MISSED
	class USocialChatChannel*                          ActiveChannel;                                              // 0x0388   (0x0008)  
	unsigned char                                      UnknownData02_6[0x20];                                      // 0x0390   (0x0020)  MISSED
};

/// Class /Script/SocialUMG.SocialGroupListEntry
/// Size: 0x0030 (0x0014E0 - 0x001510)
class USocialGroupListEntry : public UCommonButtonLegacy
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x14E0   (0x0008)  MISSED
	class UClass*                                      ActionMenuClass;                                            // 0x14E8   (0x0008)  
	class USocialGroupChannel*                         SocialGroup;                                                // 0x14F0   (0x0008)  
	class UTextBlock*                                  Text_GroupName;                                             // 0x14F8   (0x0008)  
	class UMenuAnchor*                                 MenuAnchor_Actions;                                         // 0x1500   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x1508   (0x0008)  MISSED


	/// Functions
	// Function /Script/SocialUMG.SocialGroupListEntry.HandleGetMenuContent
	// class UUserWidget* HandleGetMenuContent();                                                                            // [0x9971370] Final|Native|Protected 
};

/// Class /Script/SocialUMG.SocialGroupTreeView
/// Size: 0x0020 (0x000C30 - 0x000C50)
class USocialGroupTreeView : public UTreeView
{ 
public:
	class UClass*                                      GroupEntryWidgetClass;                                      // 0x0C28   (0x0008)  
	class UClass*                                      UserEntryWidgetClass;                                       // 0x0C30   (0x0008)  
	class UClass*                                      ActionMenuClass;                                            // 0x0C38   (0x0008)  
	class USocialInteractionMenu*                      ActionMenu;                                                 // 0x0C40   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0C48   (0x0008)  MISSED
};

/// Class /Script/SocialUMG.SocialInteractionButton
/// Size: 0x00B0 (0x0014E0 - 0x001590)
class USocialInteractionButton : public UCommonButtonLegacy
{ 
public:
	FLinearColor                                       DefaultIndicatorColor;                                      // 0x14E0   (0x0010)  
	FLinearColor                                       AlertingIndicatorColor;                                     // 0x14F0   (0x0010)  
	unsigned char                                      UnknownData00_5[0x80];                                      // 0x1500   (0x0080)  MISSED
	class UCommonTextBlock*                            Text_InteractionName;                                       // 0x1580   (0x0008)  
	class UBorder*                                     Border_InteractionIndicator;                                // 0x1588   (0x0008)  


	/// Functions
	// Function /Script/SocialUMG.SocialInteractionButton.OnInteractionSet
	// void OnInteractionSet();                                                                                              // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/SocialUMG.SocialInteractionButton.IsPlatformOnlyFriend
	// bool IsPlatformOnlyFriend();                                                                                          // [0x99714e8] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SocialUMG.SocialInteractionButton.GetInteractionName
	// FName GetInteractionName();                                                                                           // [0x997133c] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SocialUMG.SocialActionMenu
/// Size: 0x0040 (0x000400 - 0x000440)
class USocialActionMenu : public UCommonActivatableWidget
{ 
public:
	unsigned char                                      UnknownData00_1[0x40];                                      // 0x0400   (0x0040)  MISSED


	/// Functions
	// Function /Script/SocialUMG.SocialActionMenu.OnOpened
	// void OnOpened();                                                                                                      // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/SocialUMG.SocialActionMenu.HandleMenuAnchorOpenChanged
	// void HandleMenuAnchorOpenChanged(bool bIsOpen);                                                                       // [0x99713cc] Final|Native|Protected 
};

/// Class /Script/SocialUMG.SocialInteractionMenu
/// Size: 0x0068 (0x000440 - 0x0004A8)
class USocialInteractionMenu : public USocialActionMenu
{ 
public:
	unsigned char                                      UnknownData00_3[0x30];                                      // 0x0440   (0x0030)  MISSED
	class UDynamicEntryBox*                            EntryBox_PositiveInteractions;                              // 0x0470   (0x0008)  
	class UDynamicEntryBox*                            EntryBox_NegativeInteractions;                              // 0x0478   (0x0008)  
	class USpacer*                                     Spacer_InteractionSeparator;                                // 0x0480   (0x0008)  
	class UCommonWidgetSwitcherLegacy*                 Switcher_Confirmation;                                      // 0x0488   (0x0008)  
	class UTextBlock*                                  Text_ConfirmationLabel;                                     // 0x0490   (0x0008)  
	class UCommonButtonLegacy*                         Button_Confirm;                                             // 0x0498   (0x0008)  
	class UCommonButtonLegacy*                         Button_Decline;                                             // 0x04A0   (0x0008)  


	/// Functions
	// Function /Script/SocialUMG.SocialInteractionMenu.OnToggleConfirmation
	// void OnToggleConfirmation(bool bIsVisible);                                                                           // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/SocialUMG.SocialInteractionMenu.GetFirstEntryToCenter
	// class UWidget* GetFirstEntryToCenter();                                                                               // [0x997131c] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SocialUMG.SocialNameTextBlock
/// Size: 0x0020 (0x000880 - 0x0008A0)
class USocialNameTextBlock : public UCommonRichTextBlock
{ 
public:
	class USocialUser*                                 SocialUser;                                                 // 0x0878   (0x0008)  
	float                                              MinDesiredSize;                                             // 0x0880   (0x0004)  
	float                                              MaxDesiredSize;                                             // 0x0884   (0x0004)  
	bool                                               bShowSecondName;                                            // 0x0888   (0x0001)  
	EPlatformIconDisplayRule                           PlatformIconDisplayRule;                                    // 0x0889   (0x0001)  
	bool                                               bWrapToNextLine;                                            // 0x088A   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x088B   (0x0001)  MISSED
	FColor                                             SecondNameColor;                                            // 0x088C   (0x0004)  
	int32_t                                            SecondNameFontSize;                                         // 0x0890   (0x0004)  
	unsigned char                                      UnknownData01_6[0xC];                                       // 0x0894   (0x000C)  MISSED
};

/// Class /Script/SocialUMG.SocialListEntryBase
/// Size: 0x0020 (0x0014E0 - 0x001500)
#pragma pack(push, 0x1)
class alignas(0x10) USocialListEntryBase : public UCommonButtonLegacy
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x14E0   (0x0018)  MISSED
};
#pragma pack(pop)

/// Class /Script/SocialUMG.SocialListInteractableEntryBase
/// Size: 0x0010 (0x001500 - 0x001510)
#pragma pack(push, 0x1)
class alignas(0x10) USocialListInteractableEntryBase : public USocialListEntryBase
{ 
public:
	class UClass*                                      ActionMenuClass;                                            // 0x14F8   (0x0008)  
	class UMenuAnchor*                                 MenuAnchor_Actions;                                         // 0x1500   (0x0008)  


	/// Functions
	// Function /Script/SocialUMG.SocialListInteractableEntryBase.HandleMenuOpenChanged
	// void HandleMenuOpenChanged(bool bIsMenuOpen);                                                                         // [0x9971450] Final|Native|Private 
	// Function /Script/SocialUMG.SocialListInteractableEntryBase.HandleGetMenuContent
	// class UUserWidget* HandleGetMenuContent();                                                                            // [0x9971394] Final|Native|Protected 
};
#pragma pack(pop)

/// Class /Script/SocialUMG.SocialListUserEntryBase
/// Size: 0x0020 (0x001510 - 0x001530)
class USocialListUserEntryBase : public USocialListInteractableEntryBase
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x1508   (0x0008)  MISSED
	class USocialNameTextBlock*                        Text_SocialName;                                            // 0x1510   (0x0008)  
	class USocialNameTextBlock*                        Text_SocialName_Hover;                                      // 0x1518   (0x0008)  
	class UCommonRichTextBlock*                        Text_RichPresence;                                          // 0x1520   (0x0008)  
	class UCommonRichTextBlock*                        Text_RichPresence_Hover;                                    // 0x1528   (0x0008)  
};

/// Class /Script/SocialUMG.SocialUserListHeaderEntry
/// Size: 0x0010 (0x001500 - 0x001510)
#pragma pack(push, 0x1)
class alignas(0x10) USocialUserListHeaderEntry : public USocialListEntryBase
{ 
public:
	class UTextBlock*                                  Text_ListName;                                              // 0x14F8   (0x0008)  
	class UTextBlock*                                  Text_NumEntries;                                            // 0x1500   (0x0008)  
};
#pragma pack(pop)

/// Class /Script/SocialUMG.SocialUserListViewBase
/// Size: 0x0110 (0x000298 - 0x0003A8)
class USocialUserListViewBase : public UListViewBase
{ 
public:
	unsigned char                                      UnknownData00_3[0x108];                                     // 0x0298   (0x0108)  MISSED
	float                                              EntrySpacing;                                               // 0x03A0   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x03A4   (0x0004)  MISSED
};

/// Class /Script/SocialUMG.SocialUserListView
/// Size: 0x00A0 (0x0003A8 - 0x000448)
class USocialUserListView : public USocialUserListViewBase
{ 
public:
	unsigned char                                      UnknownData00_3[0x48];                                      // 0x03A8   (0x0048)  MISSED
	class USocialActionMenu*                           ActiveActionMenu;                                           // 0x03F0   (0x0008)  
	SDK_UNDEFINED(80,9513) /* TMap<UClass*, USocialActionMenu*> */ __um(CachedActionMenuPool);                     // 0x03F8   (0x0050)  
};

/// Class /Script/SocialUMG.SocialUserTreeView
/// Size: 0x00A0 (0x000448 - 0x0004E8)
class USocialUserTreeView : public USocialUserListView
{ 
public:
	unsigned char                                      UnknownData00_3[0x70];                                      // 0x0448   (0x0070)  MISSED
	class UClass*                                      UserEntryWidgetClass;                                       // 0x04B8   (0x0008)  
	class UClass*                                      InviteEntryWidgetClass;                                     // 0x04C0   (0x0008)  
	unsigned char                                      UnknownData01_6[0x20];                                      // 0x04C8   (0x0020)  MISSED
};

/// Class /Script/SocialUMG.SocialChatEditableText
/// Size: 0x0638 (0x000178 - 0x0007B0)
class USocialChatEditableText : public UWidget
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0178   (0x0028)  MISSED
	FEditableTextStyle                                 EditableTextStyle;                                          // 0x01A0   (0x02C0)  
	FTextBlockStyle                                    AutoCompleteStyle;                                          // 0x0460   (0x0310)  
	unsigned char                                      UnknownData01_6[0x40];                                      // 0x0770   (0x0040)  MISSED
};

