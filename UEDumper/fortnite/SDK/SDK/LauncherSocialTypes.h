
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: SlateCore

/// Struct /Script/LauncherSocialTypes.ChatChromeColorScheme
/// Size: 0x0050 (0x000000 - 0x000050)
struct FChatChromeColorScheme
{ 
	FLinearColor                                       ChatEntryBackgroundColor;                                   // 0x0000   (0x0010)  
	FLinearColor                                       NoneActiveTabColor;                                         // 0x0010   (0x0010)  
	FLinearColor                                       TabFontColor;                                               // 0x0020   (0x0010)  
	FLinearColor                                       TabFontColorInverted;                                       // 0x0030   (0x0010)  
	FLinearColor                                       ChatBackgroundColor;                                        // 0x0040   (0x0010)  
};

/// Struct /Script/LauncherSocialTypes.ChatChromeMargins
/// Size: 0x0064 (0x000000 - 0x000064)
struct FChatChromeMargins
{ 
	float                                              TabWidth;                                                   // 0x0000   (0x0004)  
	FMargin                                            TabPadding;                                                 // 0x0004   (0x0010)  
	FMargin                                            ChatWindowPadding;                                          // 0x0014   (0x0010)  
	FMargin                                            ChatWindowToEntryMargin;                                    // 0x0024   (0x0010)  
	FMargin                                            ChatChannelPadding;                                         // 0x0034   (0x0010)  
	FMargin                                            UserListButtonPadding;                                      // 0x0044   (0x0010)  
	FMargin                                            UserListIconPadding;                                        // 0x0054   (0x0010)  
};

/// Struct /Script/LauncherSocialTypes.ChatChromeStyle
/// Size: 0x0B50 (0x000000 - 0x000B50)
struct FChatChromeStyle
{ 
	FSlateBrush                                        UserListBrush;                                              // 0x0000   (0x00C0)  
	FSlateBrush                                        ChatBackgroundBrush;                                        // 0x00C0   (0x00C0)  
	FSlateBrush                                        ChatEntryBackgroundBrush;                                   // 0x0180   (0x00C0)  
	FSlateBrush                                        ChannelBackgroundBrush;                                     // 0x0240   (0x00C0)  
	FSlateBrush                                        TabBackgroundBrush;                                         // 0x0300   (0x00C0)  
	FButtonStyle                                       TabSelectorButtonStyle;                                     // 0x03C0   (0x03B0)  
	FMargin                                            TabOptionPadding;                                           // 0x0770   (0x0010)  
	FMargin                                            TabContentPadding;                                          // 0x0780   (0x0010)  
	FMargin                                            TabClosePadding;                                            // 0x0790   (0x0010)  
	FButtonStyle                                       UserListButtonStyle;                                        // 0x07A0   (0x03B0)  
};

/// Struct /Script/LauncherSocialTypes.ChatColorScheme
/// Size: 0x0120 (0x000000 - 0x000120)
struct FChatColorScheme
{ 
	FLinearColor                                       TimeStampColor;                                             // 0x0000   (0x0010)  
	FLinearColor                                       DefaultChatColor;                                           // 0x0010   (0x0010)  
	FLinearColor                                       WhisperChatColor;                                           // 0x0020   (0x0010)  
	FLinearColor                                       GlobalChatColor;                                            // 0x0030   (0x0010)  
	FLinearColor                                       FounderChatColor;                                           // 0x0040   (0x0010)  
	FLinearColor                                       GameChatColor;                                              // 0x0050   (0x0010)  
	FLinearColor                                       TeamChatColor;                                              // 0x0060   (0x0010)  
	FLinearColor                                       PartyChatColor;                                             // 0x0070   (0x0010)  
	FLinearColor                                       AdminChatColor;                                             // 0x0080   (0x0010)  
	FLinearColor                                       GameAdminChatColor;                                         // 0x0090   (0x0010)  
	FLinearColor                                       WhisperHyperlinkChatColor;                                  // 0x00A0   (0x0010)  
	FLinearColor                                       GlobalHyperlinkChatColor;                                   // 0x00B0   (0x0010)  
	FLinearColor                                       FounderHyperlinkChatColor;                                  // 0x00C0   (0x0010)  
	FLinearColor                                       GameHyperlinkChatColor;                                     // 0x00D0   (0x0010)  
	FLinearColor                                       TeamHyperlinkChatColor;                                     // 0x00E0   (0x0010)  
	FLinearColor                                       PartyHyperlinkChatColor;                                    // 0x00F0   (0x0010)  
	FLinearColor                                       EnemyColor;                                                 // 0x0100   (0x0010)  
	FLinearColor                                       FriendlyColor;                                              // 0x0110   (0x0010)  
};

/// Struct /Script/LauncherSocialTypes.ChatMarkupStyle
/// Size: 0x08B0 (0x000000 - 0x0008B0)
struct FChatMarkupStyle
{ 
	FButtonStyle                                       MarkupButtonStyle;                                          // 0x0000   (0x03B0)  
	FTextBlockStyle                                    MarkupTextStyle;                                            // 0x03B0   (0x0310)  
	FSlateBrush                                        MarkupBackground;                                           // 0x06C0   (0x00C0)  
	FSlateColor                                        ButtonColor;                                                // 0x0780   (0x0014)  
	FSlateColor                                        ButtonHoverColor;                                           // 0x0794   (0x0014)  
	FSlateColor                                        TipColor;                                                   // 0x07A8   (0x0014)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x07BC   (0x0004)  MISSED
	FSlateBrush                                        SeperatorBrush;                                             // 0x07C0   (0x00C0)  
	float                                              SeperatorThickness;                                         // 0x0880   (0x0004)  
	FMargin                                            MarkupPadding;                                              // 0x0884   (0x0010)  
	FMargin                                            ButtonPadding;                                              // 0x0894   (0x0010)  
	unsigned char                                      UnknownData01_6[0xC];                                       // 0x08A4   (0x000C)  MISSED
};

/// Struct /Script/LauncherSocialTypes.ChatStyle
/// Size: 0x2000 (0x000000 - 0x002000)
struct FChatStyle
{ 
	FEditableTextBoxStyle                              ChatEntryTextStyle;                                         // 0x0000   (0x0D80)  
	FEditableTextBoxStyle                              ChatDisplayTextStyle;                                       // 0x0D80   (0x0D80)  
	FScrollBoxStyle                                    ScrollBorderStyle;                                          // 0x1B00   (0x0330)  
	FSlateBrush                                        MessageNotificationBrush;                                   // 0x1E30   (0x00C0)  
	FMargin                                            ChatEntryPadding;                                           // 0x1EF0   (0x0010)  
	float                                              ChatEntryHeight;                                            // 0x1F00   (0x0004)  
	unsigned char                                      UnknownData00_5[0xC];                                       // 0x1F04   (0x000C)  MISSED
	FSlateBrush                                        ChatMenuBackgroundBrush;                                    // 0x1F10   (0x00C0)  
	FMargin                                            FriendActionPadding;                                        // 0x1FD0   (0x0010)  
	FMargin                                            FriendActionHeaderPadding;                                  // 0x1FE0   (0x0010)  
	FMargin                                            FriendActionStatusMargin;                                   // 0x1FF0   (0x0010)  
};

/// Struct /Script/LauncherSocialTypes.SocialFontStyle
/// Size: 0x0240 (0x000000 - 0x000240)
struct FSocialFontStyle
{ 
	FSlateFontInfo                                     FontSmall;                                                  // 0x0000   (0x0058)  
	FSlateFontInfo                                     FontSmallBold;                                              // 0x0058   (0x0058)  
	FSlateFontInfo                                     FontNormal;                                                 // 0x00B0   (0x0058)  
	FSlateFontInfo                                     FontNormalBold;                                             // 0x0108   (0x0058)  
	FSlateFontInfo                                     FontLarge;                                                  // 0x0160   (0x0058)  
	FSlateFontInfo                                     FontLargeBold;                                              // 0x01B8   (0x0058)  
	FLinearColor                                       DefaultFontColor;                                           // 0x0210   (0x0010)  
	FLinearColor                                       InvertedFontColor;                                          // 0x0220   (0x0010)  
	FLinearColor                                       DefaultDullFontColor;                                       // 0x0230   (0x0010)  
};

/// Struct /Script/LauncherSocialTypes.SocialListMargins
/// Size: 0x0210 (0x000000 - 0x000210)
struct FSocialListMargins
{ 
	FVector2D                                          UserPresenceImageSize;                                      // 0x0000   (0x0010)  
	FMargin                                            HeaderButtonMargin;                                         // 0x0010   (0x0010)  
	FMargin                                            FriendsListMargin;                                          // 0x0020   (0x0010)  
	FMargin                                            FriendsListNoFriendsMargin;                                 // 0x0030   (0x0010)  
	FMargin                                            FriendsListHeaderMargin;                                    // 0x0040   (0x0010)  
	FMargin                                            FriendsListHeaderCountMargin;                               // 0x0050   (0x0010)  
	FMargin                                            HeaderButtonContentMargin;                                  // 0x0060   (0x0010)  
	FMargin                                            FriendItemMargin;                                           // 0x0070   (0x0010)  
	FMargin                                            FriendItemStatusMargin;                                     // 0x0080   (0x0010)  
	FMargin                                            FriendTipStatusMargin;                                      // 0x0090   (0x0010)  
	FMargin                                            FriendItemPresenceMargin;                                   // 0x00A0   (0x0010)  
	FMargin                                            FriendItemPlatformMargin;                                   // 0x00B0   (0x0010)  
	FMargin                                            FriendItemTextScrollerMargin;                               // 0x00C0   (0x0010)  
	FMargin                                            ConfirmationBorderMargin;                                   // 0x00D0   (0x0010)  
	FMargin                                            ConfirmationButtonMargin;                                   // 0x00E0   (0x0010)  
	FMargin                                            ConfirmationButtonContentMargin;                            // 0x00F0   (0x0010)  
	FMargin                                            NoneFriendContentMargin;                                    // 0x0100   (0x0010)  
	float                                              NoneFriendContentHeight;                                    // 0x0110   (0x0004)  
	float                                              NoneFriendIconWidth;                                        // 0x0114   (0x0004)  
	FMargin                                            SubMenuBackIconMargin;                                      // 0x0118   (0x0010)  
	FMargin                                            SubMenuPageIconMargin;                                      // 0x0128   (0x0010)  
	FMargin                                            RadioSettingTitleMargin;                                    // 0x0138   (0x0010)  
	FMargin                                            SubMenuSearchIconMargin;                                    // 0x0148   (0x0010)  
	FMargin                                            SubMenuSearchTextMargin;                                    // 0x0158   (0x0010)  
	FMargin                                            SubMenuBackButtonMargin;                                    // 0x0168   (0x0010)  
	FMargin                                            SubMenuSettingButtonMargin;                                 // 0x0178   (0x0010)  
	FMargin                                            SubMenuListMargin;                                          // 0x0188   (0x0010)  
	float                                              SubMenuSeperatorThickness;                                  // 0x0198   (0x0004)  
	float                                              PresenceSeperatorThickness;                                 // 0x019C   (0x0004)  
	FMargin                                            FriendTipMargin;                                            // 0x01A0   (0x0010)  
	FMargin                                            FriendTipPresenceMargin;                                    // 0x01B0   (0x0010)  
	FMargin                                            FriendTipSeperatorMargin;                                   // 0x01C0   (0x0010)  
	FMargin                                            ToolTipMargin;                                              // 0x01D0   (0x0010)  
	FMargin                                            TipStatusMargin;                                            // 0x01E0   (0x0010)  
	FMargin                                            AddButtonMargin;                                            // 0x01F0   (0x0010)  
	FVector2D                                          AddButtonSpacing;                                           // 0x0200   (0x0010)  
};

/// Struct /Script/LauncherSocialTypes.SocialListStyle
/// Size: 0x3A60 (0x000000 - 0x003A60)
struct FSocialListStyle
{ 
	FButtonStyle                                       GlobalChatButtonStyle;                                      // 0x0000   (0x03B0)  
	FSlateBrush                                        GlobalChatIcon;                                             // 0x03B0   (0x00C0)  
	FButtonStyle                                       FriendItemButtonStyle;                                      // 0x0470   (0x03B0)  
	FButtonStyle                                       ConfirmButtonStyle;                                         // 0x0820   (0x03B0)  
	FButtonStyle                                       CancelButtonStyle;                                          // 0x0BD0   (0x03B0)  
	FSlateColor                                        ButtonContentColor;                                         // 0x0F80   (0x0014)  
	FSlateColor                                        ButtonHoverContentColor;                                    // 0x0F94   (0x0014)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0FA8   (0x0008)  MISSED
	FSlateBrush                                        ActionMenuArrowBrush;                                       // 0x0FB0   (0x00C0)  
	FSlateBrush                                        ActionMenuArrowRightBrush;                                  // 0x1070   (0x00C0)  
	FSlateColor                                        ActionMenuBackgroundColor;                                  // 0x1130   (0x0014)  
	unsigned char                                      UnknownData01_5[0xC];                                       // 0x1144   (0x000C)  MISSED
	FSlateBrush                                        ToolTipArrowBrush;                                          // 0x1150   (0x00C0)  
	FButtonStyle                                       BackButtonStyle;                                            // 0x1210   (0x03B0)  
	FButtonStyle                                       HeaderButtonStyle;                                          // 0x15C0   (0x03B0)  
	FButtonStyle                                       FriendListActionButtonStyle;                                // 0x1970   (0x03B0)  
	FSlateBrush                                        AddFriendButtonContentBrush;                                // 0x1D20   (0x00C0)  
	FSlateBrush                                        StatusIconBrush;                                            // 0x1DE0   (0x00C0)  
	FSlateBrush                                        PCIconBrush;                                                // 0x1EA0   (0x00C0)  
	FSlateBrush                                        ConsoleIconBrush;                                           // 0x1F60   (0x00C0)  
	FSlateBrush                                        MobileIconBrush;                                            // 0x2020   (0x00C0)  
	FSlateBrush                                        FacebookIconBrush;                                          // 0x20E0   (0x00C0)  
	FSlateBrush                                        EpicIconBrush;                                              // 0x21A0   (0x00C0)  
	FSlateBrush                                        FriendImageBrush;                                           // 0x2260   (0x00C0)  
	FSlateBrush                                        OfflineBrush;                                               // 0x2320   (0x00C0)  
	FSlateBrush                                        OnlineBrush;                                                // 0x23E0   (0x00C0)  
	FSlateBrush                                        AwayBrush;                                                  // 0x24A0   (0x00C0)  
	FSlateBrush                                        SpectateBrush;                                              // 0x2560   (0x00C0)  
	FSlateBrush                                        FriendsContainerBackground;                                 // 0x2620   (0x00C0)  
	FSlateBrush                                        FriendsListBackground;                                      // 0x26E0   (0x00C0)  
	FEditableTextBoxStyle                              AddFriendEditableTextStyle;                                 // 0x27A0   (0x0D80)  
	FSlateBrush                                        BackBrush;                                                  // 0x3520   (0x00C0)  
	FSlateBrush                                        SelectedOptionBrush;                                        // 0x35E0   (0x00C0)  
	FSlateBrush                                        SettingsBrush;                                              // 0x36A0   (0x00C0)  
	FSlateBrush                                        SeperatorBrush;                                             // 0x3760   (0x00C0)  
	FSlateBrush                                        PresenceSeperatorBrush;                                     // 0x3820   (0x00C0)  
	FSlateBrush                                        FontSizeBrush;                                              // 0x38E0   (0x00C0)  
	FSlateBrush                                        SearchBrush;                                                // 0x39A0   (0x00C0)  
};

/// Struct /Script/LauncherSocialTypes.ProfanityData
/// Size: 0x0038 (0x000000 - 0x000038)
struct FProfanityData
{ 
	SDK_UNDEFINED(16,9510) /* FString */               __um(CountryCode);                                          // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,9511) /* FString */               __um(ProfanityList);                                        // 0x0010   (0x0010)  
	SDK_UNDEFINED(16,9512) /* FString */               __um(WhiteList);                                            // 0x0020   (0x0010)  
	bool                                               bAutoAdd;                                                   // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0031   (0x0007)  MISSED
};

/// Struct /Script/LauncherSocialTypes.SocialSoundSchema
/// Size: 0x0048 (0x000000 - 0x000048)
struct FSocialSoundSchema
{ 
	FSlateSound                                        MessageReceivedSound;                                       // 0x0000   (0x0018)  
	FSlateSound                                        PartyInviteReceivedSound;                                   // 0x0018   (0x0018)  
	FSlateSound                                        FriendInviteReceivedSound;                                  // 0x0030   (0x0018)  
};

/// Struct /Script/LauncherSocialTypes.SocialStyle
/// Size: 0x9A50 (0x000000 - 0x009A50)
struct FSocialStyle
{ 
	FScrollBarStyle                                    ScrollBarStyle;                                             // 0x0000   (0x06E0)  
	FButtonStyle                                       ActionButtonStyle;                                          // 0x06E0   (0x03B0)  
	FSocialFontStyle                                   SmallFontStyle;                                             // 0x0A90   (0x0240)  
	FSocialFontStyle                                   NormalFontStyle;                                            // 0x0CD0   (0x0240)  
	FSocialFontStyle                                   LargeFontStyle;                                             // 0x0F10   (0x0240)  
	FSocialFontStyle                                   ChatFontStyle;                                              // 0x1150   (0x0240)  
	FCheckBoxStyle                                     CheckBoxStyle;                                              // 0x1390   (0x0A10)  
	FCheckBoxStyle                                     RadioBoxStyle;                                              // 0x1DA0   (0x0A10)  
	FSocialListStyle                                   SocialListStyle;                                            // 0x27B0   (0x3A60)  
	FSocialListMargins                                 SocialListMargins;                                          // 0x6210   (0x0210)  
	FChatStyle                                         ChatStyle;                                                  // 0x6420   (0x2000)  
	FChatColorScheme                                   ChatColorScheme;                                            // 0x8420   (0x0120)  
	FChatChromeStyle                                   ChatChromeStyle;                                            // 0x8540   (0x0B50)  
	FChatChromeMargins                                 ChatChromeMargins;                                          // 0x9090   (0x0064)  
	FChatChromeColorScheme                             ChatChromeColorScheme;                                      // 0x90F4   (0x0050)  
	unsigned char                                      UnknownData00_5[0xC];                                       // 0x9144   (0x000C)  MISSED
	FChatMarkupStyle                                   ChatMarkupStyle;                                            // 0x9150   (0x08B0)  
	FSocialSoundSchema                                 SoundSchema;                                                // 0x9A00   (0x0048)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x9A48   (0x0008)  MISSED
};

