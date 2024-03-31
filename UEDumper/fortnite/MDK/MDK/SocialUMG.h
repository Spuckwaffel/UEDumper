
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

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
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
};

/// Class /Script/SocialUMG.SocialChatChannelTab
/// Size: 0x0010 (0x0014E0 - 0x0014F0)
class USocialChatChannelTab : public UCommonButtonLegacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5360;

public:
	CMember(class USocialChatChannel*)                 ChatChannel                                                 OFFSET(get<T>, {0x14E0, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   CommonText_ChannelName                                      OFFSET(get<T>, {0x14E8, 8, 0, 0})
};

/// Class /Script/SocialUMG.SocialChatContainer
/// Size: 0x0058 (0x0002C0 - 0x000318)
class USocialChatContainer : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 792;

public:
	CMember(class USocialChatManager*)                 ChatManager                                                 OFFSET(get<T>, {0x2C0, 8, 0, 0})
	CMember(TArray<class USocialChatChannel*>)         JoinedChannels                                              OFFSET(get<T>, {0x2C8, 16, 0, 0})
	CMember(class USocialChatChannel*)                 ActiveChannel                                               OFFSET(get<T>, {0x2D8, 8, 0, 0})
	CMember(class UCommonButtonGroupLegacy*)           TabButtonGroup                                              OFFSET(get<T>, {0x2E0, 8, 0, 0})
	CMember(class USocialChatMessageList*)             ChatList_Messages                                           OFFSET(get<T>, {0x2F0, 8, 0, 0})
	CMember(class USocialChatEditableText*)            ChatEditableText_MessageEntry                               OFFSET(get<T>, {0x2F8, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_SendMessage                                          OFFSET(get<T>, {0x300, 8, 0, 0})
	CMember(class UDynamicEntryBox*)                   EntryBox_JoinedChannels                                     OFFSET(get<T>, {0x308, 8, 0, 0})
	CMember(class UScrollBox*)                         ScrollBox_Channels                                          OFFSET(get<T>, {0x310, 8, 0, 0})


	/// Functions
	// Function /Script/SocialUMG.SocialChatContainer.SendCurrentMessage
	// void SendCurrentMessage();                                                                                               // [0xa4308f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SocialUMG.SocialChatContainer.OnChatOpenChanged
	// void OnChatOpenChanged(bool bShouldBeOpen);                                                                              // [0x186becc] Event|Protected|BlueprintEvent 
	// Function /Script/SocialUMG.SocialChatContainer.HandleRightTabPressed
	// void HandleRightTabPressed();                                                                                            // [0xa430868] Final|Native|Public|BlueprintCallable 
	// Function /Script/SocialUMG.SocialChatContainer.HandleLeftTabPressed
	// void HandleLeftTabPressed();                                                                                             // [0xa4306c4] Final|Native|Public|BlueprintCallable 
	// Function /Script/SocialUMG.SocialChatContainer.FocusEditableText
	// void FocusEditableText();                                                                                                // [0xa430614] Final|Native|Public|BlueprintCallable 
	// Function /Script/SocialUMG.SocialChatContainer.DynamicHandleMessageTextCommitted
	// void DynamicHandleMessageTextCommitted(FText& MessageText, TEnumAsByte<ETextCommit> CommitMethod);                       // [0xa430500] Final|Native|Private|HasOutParms 
};

/// Class /Script/SocialUMG.SocialChatMessageEntry
/// Size: 0x0160 (0x0002C0 - 0x000420)
class USocialChatMessageEntry : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1056;

public:
	SMember(FSocialChatMessageEntryStyle)              DefaultStyle                                                OFFSET(getStruct<T>, {0x2D8, 312, 0, 0})
	CMember(class UCommonRichTextBlock*)               RichText_Message                                            OFFSET(get<T>, {0x410, 8, 0, 0})
	CMember(class UButton*)                            Button_MessageButton                                        OFFSET(get<T>, {0x418, 8, 0, 0})


	/// Functions
	// Function /Script/SocialUMG.SocialChatMessageEntry.OnMessageSet
	// void OnMessageSet();                                                                                                     // [0x186becc] Event|Protected|BlueprintEvent 
	// Function /Script/SocialUMG.SocialChatMessageEntry.CanInteract
	// bool CanInteract();                                                                                                      // [0x32247e0] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SocialUMG.SocialChatMessageList
/// Size: 0x0118 (0x000298 - 0x0003B0)
class USocialChatMessageList : public UListViewBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 944;

public:
	DMember(bool)                                      bIsFocusable                                                OFFSET(get<bool>, {0x380, 1, 0, 0})
	CMember(class USocialChatChannel*)                 ActiveChannel                                               OFFSET(get<T>, {0x388, 8, 0, 0})
};

/// Class /Script/SocialUMG.SocialGroupListEntry
/// Size: 0x0030 (0x0014E0 - 0x001510)
class USocialGroupListEntry : public UCommonButtonLegacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5392;

public:
	CMember(class UClass*)                             ActionMenuClass                                             OFFSET(get<T>, {0x14E8, 8, 0, 0})
	CMember(class USocialGroupChannel*)                SocialGroup                                                 OFFSET(get<T>, {0x14F0, 8, 0, 0})
	CMember(class UTextBlock*)                         Text_GroupName                                              OFFSET(get<T>, {0x14F8, 8, 0, 0})
	CMember(class UMenuAnchor*)                        MenuAnchor_Actions                                          OFFSET(get<T>, {0x1500, 8, 0, 0})


	/// Functions
	// Function /Script/SocialUMG.SocialGroupListEntry.HandleGetMenuContent
	// class UUserWidget* HandleGetMenuContent();                                                                               // [0xa43067c] Final|Native|Protected 
};

/// Class /Script/SocialUMG.SocialGroupTreeView
/// Size: 0x0020 (0x000C30 - 0x000C50)
class USocialGroupTreeView : public UTreeView
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3152;

public:
	CMember(class UClass*)                             GroupEntryWidgetClass                                       OFFSET(get<T>, {0xC28, 8, 0, 0})
	CMember(class UClass*)                             UserEntryWidgetClass                                        OFFSET(get<T>, {0xC30, 8, 0, 0})
	CMember(class UClass*)                             ActionMenuClass                                             OFFSET(get<T>, {0xC38, 8, 0, 0})
	CMember(class USocialInteractionMenu*)             ActionMenu                                                  OFFSET(get<T>, {0xC40, 8, 0, 0})
};

/// Class /Script/SocialUMG.SocialInteractionButton
/// Size: 0x00B0 (0x0014E0 - 0x001590)
class USocialInteractionButton : public UCommonButtonLegacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5520;

public:
	SMember(FLinearColor)                              DefaultIndicatorColor                                       OFFSET(getStruct<T>, {0x14E0, 16, 0, 0})
	SMember(FLinearColor)                              AlertingIndicatorColor                                      OFFSET(getStruct<T>, {0x14F0, 16, 0, 0})
	CMember(class UCommonTextBlock*)                   Text_InteractionName                                        OFFSET(get<T>, {0x1580, 8, 0, 0})
	CMember(class UBorder*)                            Border_InteractionIndicator                                 OFFSET(get<T>, {0x1588, 8, 0, 0})


	/// Functions
	// Function /Script/SocialUMG.SocialInteractionButton.OnInteractionSet
	// void OnInteractionSet();                                                                                                 // [0x186becc] Event|Protected|BlueprintEvent 
	// Function /Script/SocialUMG.SocialInteractionButton.IsPlatformOnlyFriend
	// bool IsPlatformOnlyFriend();                                                                                             // [0xa43087c] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SocialUMG.SocialInteractionButton.GetInteractionName
	// FName GetInteractionName();                                                                                              // [0xa430648] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SocialUMG.SocialActionMenu
/// Size: 0x0040 (0x000400 - 0x000440)
class USocialActionMenu : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1088;

public:


	/// Functions
	// Function /Script/SocialUMG.SocialActionMenu.OnOpened
	// void OnOpened();                                                                                                         // [0x186becc] Event|Protected|BlueprintEvent 
	// Function /Script/SocialUMG.SocialActionMenu.HandleMenuAnchorOpenChanged
	// void HandleMenuAnchorOpenChanged(bool bIsOpen);                                                                          // [0xa4306d8] Final|Native|Protected 
};

/// Class /Script/SocialUMG.SocialInteractionMenu
/// Size: 0x0068 (0x000440 - 0x0004A8)
class USocialInteractionMenu : public USocialActionMenu
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1192;

public:
	CMember(class UDynamicEntryBox*)                   EntryBox_PositiveInteractions                               OFFSET(get<T>, {0x470, 8, 0, 0})
	CMember(class UDynamicEntryBox*)                   EntryBox_NegativeInteractions                               OFFSET(get<T>, {0x478, 8, 0, 0})
	CMember(class USpacer*)                            Spacer_InteractionSeparator                                 OFFSET(get<T>, {0x480, 8, 0, 0})
	CMember(class UCommonWidgetSwitcherLegacy*)        Switcher_Confirmation                                       OFFSET(get<T>, {0x488, 8, 0, 0})
	CMember(class UTextBlock*)                         Text_ConfirmationLabel                                      OFFSET(get<T>, {0x490, 8, 0, 0})
	CMember(class UCommonButtonLegacy*)                Button_Confirm                                              OFFSET(get<T>, {0x498, 8, 0, 0})
	CMember(class UCommonButtonLegacy*)                Button_Decline                                              OFFSET(get<T>, {0x4A0, 8, 0, 0})


	/// Functions
	// Function /Script/SocialUMG.SocialInteractionMenu.OnToggleConfirmation
	// void OnToggleConfirmation(bool bIsVisible);                                                                              // [0x186becc] Event|Protected|BlueprintEvent 
	// Function /Script/SocialUMG.SocialInteractionMenu.GetFirstEntryToCenter
	// class UWidget* GetFirstEntryToCenter();                                                                                  // [0xa430628] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SocialUMG.SocialNameTextBlock
/// Size: 0x0020 (0x000880 - 0x0008A0)
class USocialNameTextBlock : public UCommonRichTextBlock
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2208;

public:
	CMember(class USocialUser*)                        SocialUser                                                  OFFSET(get<T>, {0x878, 8, 0, 0})
	DMember(float)                                     MinDesiredSize                                              OFFSET(get<float>, {0x880, 4, 0, 0})
	DMember(float)                                     MaxDesiredSize                                              OFFSET(get<float>, {0x884, 4, 0, 0})
	DMember(bool)                                      bShowSecondName                                             OFFSET(get<bool>, {0x888, 1, 0, 0})
	CMember(EPlatformIconDisplayRule)                  PlatformIconDisplayRule                                     OFFSET(get<T>, {0x889, 1, 0, 0})
	DMember(bool)                                      bWrapToNextLine                                             OFFSET(get<bool>, {0x88A, 1, 0, 0})
	SMember(FColor)                                    SecondNameColor                                             OFFSET(getStruct<T>, {0x88C, 4, 0, 0})
	DMember(int32_t)                                   SecondNameFontSize                                          OFFSET(get<int32_t>, {0x890, 4, 0, 0})
};

/// Class /Script/SocialUMG.SocialListEntryBase
/// Size: 0x0020 (0x0014E0 - 0x001500)
class USocialListEntryBase : public UCommonButtonLegacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5376;

public:
};

/// Class /Script/SocialUMG.SocialListInteractableEntryBase
/// Size: 0x0010 (0x001500 - 0x001510)
class USocialListInteractableEntryBase : public USocialListEntryBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5392;

public:
	CMember(class UClass*)                             ActionMenuClass                                             OFFSET(get<T>, {0x14F8, 8, 0, 0})
	CMember(class UMenuAnchor*)                        MenuAnchor_Actions                                          OFFSET(get<T>, {0x1500, 8, 0, 0})


	/// Functions
	// Function /Script/SocialUMG.SocialListInteractableEntryBase.HandleMenuOpenChanged
	// void HandleMenuOpenChanged(bool bIsMenuOpen);                                                                            // [0xa4307a0] Final|Native|Private 
	// Function /Script/SocialUMG.SocialListInteractableEntryBase.HandleGetMenuContent
	// class UUserWidget* HandleGetMenuContent();                                                                               // [0xa4306a0] Final|Native|Protected 
};

/// Class /Script/SocialUMG.SocialListUserEntryBase
/// Size: 0x0020 (0x001510 - 0x001530)
class USocialListUserEntryBase : public USocialListInteractableEntryBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5424;

public:
	CMember(class USocialNameTextBlock*)               Text_SocialName                                             OFFSET(get<T>, {0x1510, 8, 0, 0})
	CMember(class USocialNameTextBlock*)               Text_SocialName_Hover                                       OFFSET(get<T>, {0x1518, 8, 0, 0})
	CMember(class UCommonRichTextBlock*)               Text_RichPresence                                           OFFSET(get<T>, {0x1520, 8, 0, 0})
	CMember(class UCommonRichTextBlock*)               Text_RichPresence_Hover                                     OFFSET(get<T>, {0x1528, 8, 0, 0})
};

/// Class /Script/SocialUMG.SocialUserListHeaderEntry
/// Size: 0x0010 (0x001500 - 0x001510)
class USocialUserListHeaderEntry : public USocialListEntryBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5392;

public:
	CMember(class UTextBlock*)                         Text_ListName                                               OFFSET(get<T>, {0x14F8, 8, 0, 0})
	CMember(class UTextBlock*)                         Text_NumEntries                                             OFFSET(get<T>, {0x1500, 8, 0, 0})
};

/// Class /Script/SocialUMG.SocialUserListViewBase
/// Size: 0x0110 (0x000298 - 0x0003A8)
class USocialUserListViewBase : public UListViewBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 936;

public:
	DMember(float)                                     EntrySpacing                                                OFFSET(get<float>, {0x3A0, 4, 0, 0})
};

/// Class /Script/SocialUMG.SocialUserListView
/// Size: 0x00A0 (0x0003A8 - 0x000448)
class USocialUserListView : public USocialUserListViewBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1096;

public:
	CMember(class USocialActionMenu*)                  ActiveActionMenu                                            OFFSET(get<T>, {0x3F0, 8, 0, 0})
	CMember(TMap<UClass*, USocialActionMenu*>)         CachedActionMenuPool                                        OFFSET(get<T>, {0x3F8, 80, 0, 0})
};

/// Class /Script/SocialUMG.SocialUserTreeView
/// Size: 0x00A0 (0x000448 - 0x0004E8)
class USocialUserTreeView : public USocialUserListView
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1256;

public:
	CMember(class UClass*)                             UserEntryWidgetClass                                        OFFSET(get<T>, {0x4B8, 8, 0, 0})
	CMember(class UClass*)                             InviteEntryWidgetClass                                      OFFSET(get<T>, {0x4C0, 8, 0, 0})
};

/// Class /Script/SocialUMG.SocialChatEditableText
/// Size: 0x0638 (0x000178 - 0x0007B0)
class USocialChatEditableText : public UWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1968;

public:
	SMember(FEditableTextStyle)                        EditableTextStyle                                           OFFSET(getStruct<T>, {0x1A0, 704, 0, 0})
	SMember(FTextBlockStyle)                           AutoCompleteStyle                                           OFFSET(getStruct<T>, {0x460, 784, 0, 0})
};

/// Struct /Script/SocialUMG.SocialChatMessageEntryTextStyle
/// Size: 0x0068 (0x000000 - 0x000068)
class FSocialChatMessageEntryTextStyle : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FSlateFontInfo)                            FontInfo                                                    OFFSET(getStruct<T>, {0x0, 88, 0, 0})
	SMember(FLinearColor)                              ColorAndOpacity                                             OFFSET(getStruct<T>, {0x58, 16, 0, 0})
};

/// Struct /Script/SocialUMG.SocialChatMessageEntryStyle
/// Size: 0x0138 (0x000000 - 0x000138)
class FSocialChatMessageEntryStyle : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 312;

public:
	SMember(FSocialChatMessageEntryTextStyle)          SenderNameStyle                                             OFFSET(getStruct<T>, {0x0, 104, 0, 0})
	SMember(FSocialChatMessageEntryTextStyle)          ChannelNameStyle                                            OFFSET(getStruct<T>, {0x68, 104, 0, 0})
	SMember(FSocialChatMessageEntryTextStyle)          MessageTextStyle                                            OFFSET(getStruct<T>, {0xD0, 104, 0, 0})
};

