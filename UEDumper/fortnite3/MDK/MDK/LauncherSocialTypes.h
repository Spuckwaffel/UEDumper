
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: SlateCore

/// Struct /Script/LauncherSocialTypes.ChatChromeColorScheme
/// Size: 0x0050 (0x000000 - 0x000050)
class FChatChromeColorScheme : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FLinearColor)                              ChatEntryBackgroundColor                                    OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FLinearColor)                              NoneActiveTabColor                                          OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FLinearColor)                              TabFontColor                                                OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	SMember(FLinearColor)                              TabFontColorInverted                                        OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	SMember(FLinearColor)                              ChatBackgroundColor                                         OFFSET(getStruct<T>, {0x40, 16, 0, 0})
};

/// Struct /Script/LauncherSocialTypes.ChatChromeMargins
/// Size: 0x0064 (0x000000 - 0x000064)
class FChatChromeMargins : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 100;

public:
	DMember(float)                                     TabWidth                                                    OFFSET(get<float>, {0x0, 4, 0, 0})
	SMember(FMargin)                                   TabPadding                                                  OFFSET(getStruct<T>, {0x4, 16, 0, 0})
	SMember(FMargin)                                   ChatWindowPadding                                           OFFSET(getStruct<T>, {0x14, 16, 0, 0})
	SMember(FMargin)                                   ChatWindowToEntryMargin                                     OFFSET(getStruct<T>, {0x24, 16, 0, 0})
	SMember(FMargin)                                   ChatChannelPadding                                          OFFSET(getStruct<T>, {0x34, 16, 0, 0})
	SMember(FMargin)                                   UserListButtonPadding                                       OFFSET(getStruct<T>, {0x44, 16, 0, 0})
	SMember(FMargin)                                   UserListIconPadding                                         OFFSET(getStruct<T>, {0x54, 16, 0, 0})
};

/// Struct /Script/LauncherSocialTypes.ChatChromeStyle
/// Size: 0x0B50 (0x000000 - 0x000B50)
class FChatChromeStyle : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 2896;

public:
	SMember(FSlateBrush)                               UserListBrush                                               OFFSET(getStruct<T>, {0x0, 192, 0, 0})
	SMember(FSlateBrush)                               ChatBackgroundBrush                                         OFFSET(getStruct<T>, {0xC0, 192, 0, 0})
	SMember(FSlateBrush)                               ChatEntryBackgroundBrush                                    OFFSET(getStruct<T>, {0x180, 192, 0, 0})
	SMember(FSlateBrush)                               ChannelBackgroundBrush                                      OFFSET(getStruct<T>, {0x240, 192, 0, 0})
	SMember(FSlateBrush)                               TabBackgroundBrush                                          OFFSET(getStruct<T>, {0x300, 192, 0, 0})
	SMember(FButtonStyle)                              TabSelectorButtonStyle                                      OFFSET(getStruct<T>, {0x3C0, 944, 0, 0})
	SMember(FMargin)                                   TabOptionPadding                                            OFFSET(getStruct<T>, {0x770, 16, 0, 0})
	SMember(FMargin)                                   TabContentPadding                                           OFFSET(getStruct<T>, {0x780, 16, 0, 0})
	SMember(FMargin)                                   TabClosePadding                                             OFFSET(getStruct<T>, {0x790, 16, 0, 0})
	SMember(FButtonStyle)                              UserListButtonStyle                                         OFFSET(getStruct<T>, {0x7A0, 944, 0, 0})
};

/// Struct /Script/LauncherSocialTypes.ChatColorScheme
/// Size: 0x0120 (0x000000 - 0x000120)
class FChatColorScheme : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	SMember(FLinearColor)                              TimeStampColor                                              OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FLinearColor)                              DefaultChatColor                                            OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FLinearColor)                              WhisperChatColor                                            OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	SMember(FLinearColor)                              GlobalChatColor                                             OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	SMember(FLinearColor)                              FounderChatColor                                            OFFSET(getStruct<T>, {0x40, 16, 0, 0})
	SMember(FLinearColor)                              GameChatColor                                               OFFSET(getStruct<T>, {0x50, 16, 0, 0})
	SMember(FLinearColor)                              TeamChatColor                                               OFFSET(getStruct<T>, {0x60, 16, 0, 0})
	SMember(FLinearColor)                              PartyChatColor                                              OFFSET(getStruct<T>, {0x70, 16, 0, 0})
	SMember(FLinearColor)                              AdminChatColor                                              OFFSET(getStruct<T>, {0x80, 16, 0, 0})
	SMember(FLinearColor)                              GameAdminChatColor                                          OFFSET(getStruct<T>, {0x90, 16, 0, 0})
	SMember(FLinearColor)                              WhisperHyperlinkChatColor                                   OFFSET(getStruct<T>, {0xA0, 16, 0, 0})
	SMember(FLinearColor)                              GlobalHyperlinkChatColor                                    OFFSET(getStruct<T>, {0xB0, 16, 0, 0})
	SMember(FLinearColor)                              FounderHyperlinkChatColor                                   OFFSET(getStruct<T>, {0xC0, 16, 0, 0})
	SMember(FLinearColor)                              GameHyperlinkChatColor                                      OFFSET(getStruct<T>, {0xD0, 16, 0, 0})
	SMember(FLinearColor)                              TeamHyperlinkChatColor                                      OFFSET(getStruct<T>, {0xE0, 16, 0, 0})
	SMember(FLinearColor)                              PartyHyperlinkChatColor                                     OFFSET(getStruct<T>, {0xF0, 16, 0, 0})
	SMember(FLinearColor)                              EnemyColor                                                  OFFSET(getStruct<T>, {0x100, 16, 0, 0})
	SMember(FLinearColor)                              FriendlyColor                                               OFFSET(getStruct<T>, {0x110, 16, 0, 0})
};

/// Struct /Script/LauncherSocialTypes.ChatMarkupStyle
/// Size: 0x08B0 (0x000000 - 0x0008B0)
class FChatMarkupStyle : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 2224;

public:
	SMember(FButtonStyle)                              MarkupButtonStyle                                           OFFSET(getStruct<T>, {0x0, 944, 0, 0})
	SMember(FTextBlockStyle)                           MarkupTextStyle                                             OFFSET(getStruct<T>, {0x3B0, 784, 0, 0})
	SMember(FSlateBrush)                               MarkupBackground                                            OFFSET(getStruct<T>, {0x6C0, 192, 0, 0})
	SMember(FSlateColor)                               ButtonColor                                                 OFFSET(getStruct<T>, {0x780, 20, 0, 0})
	SMember(FSlateColor)                               ButtonHoverColor                                            OFFSET(getStruct<T>, {0x794, 20, 0, 0})
	SMember(FSlateColor)                               TipColor                                                    OFFSET(getStruct<T>, {0x7A8, 20, 0, 0})
	SMember(FSlateBrush)                               SeperatorBrush                                              OFFSET(getStruct<T>, {0x7C0, 192, 0, 0})
	DMember(float)                                     SeperatorThickness                                          OFFSET(get<float>, {0x880, 4, 0, 0})
	SMember(FMargin)                                   MarkupPadding                                               OFFSET(getStruct<T>, {0x884, 16, 0, 0})
	SMember(FMargin)                                   ButtonPadding                                               OFFSET(getStruct<T>, {0x894, 16, 0, 0})
};

/// Struct /Script/LauncherSocialTypes.ChatStyle
/// Size: 0x2000 (0x000000 - 0x002000)
class FChatStyle : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8192;

public:
	SMember(FEditableTextBoxStyle)                     ChatEntryTextStyle                                          OFFSET(getStruct<T>, {0x0, 3456, 0, 0})
	SMember(FEditableTextBoxStyle)                     ChatDisplayTextStyle                                        OFFSET(getStruct<T>, {0xD80, 3456, 0, 0})
	SMember(FScrollBoxStyle)                           ScrollBorderStyle                                           OFFSET(getStruct<T>, {0x1B00, 816, 0, 0})
	SMember(FSlateBrush)                               MessageNotificationBrush                                    OFFSET(getStruct<T>, {0x1E30, 192, 0, 0})
	SMember(FMargin)                                   ChatEntryPadding                                            OFFSET(getStruct<T>, {0x1EF0, 16, 0, 0})
	DMember(float)                                     ChatEntryHeight                                             OFFSET(get<float>, {0x1F00, 4, 0, 0})
	SMember(FSlateBrush)                               ChatMenuBackgroundBrush                                     OFFSET(getStruct<T>, {0x1F10, 192, 0, 0})
	SMember(FMargin)                                   FriendActionPadding                                         OFFSET(getStruct<T>, {0x1FD0, 16, 0, 0})
	SMember(FMargin)                                   FriendActionHeaderPadding                                   OFFSET(getStruct<T>, {0x1FE0, 16, 0, 0})
	SMember(FMargin)                                   FriendActionStatusMargin                                    OFFSET(getStruct<T>, {0x1FF0, 16, 0, 0})
};

/// Struct /Script/LauncherSocialTypes.SocialFontStyle
/// Size: 0x0240 (0x000000 - 0x000240)
class FSocialFontStyle : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 576;

public:
	SMember(FSlateFontInfo)                            FontSmall                                                   OFFSET(getStruct<T>, {0x0, 88, 0, 0})
	SMember(FSlateFontInfo)                            FontSmallBold                                               OFFSET(getStruct<T>, {0x58, 88, 0, 0})
	SMember(FSlateFontInfo)                            FontNormal                                                  OFFSET(getStruct<T>, {0xB0, 88, 0, 0})
	SMember(FSlateFontInfo)                            FontNormalBold                                              OFFSET(getStruct<T>, {0x108, 88, 0, 0})
	SMember(FSlateFontInfo)                            FontLarge                                                   OFFSET(getStruct<T>, {0x160, 88, 0, 0})
	SMember(FSlateFontInfo)                            FontLargeBold                                               OFFSET(getStruct<T>, {0x1B8, 88, 0, 0})
	SMember(FLinearColor)                              DefaultFontColor                                            OFFSET(getStruct<T>, {0x210, 16, 0, 0})
	SMember(FLinearColor)                              InvertedFontColor                                           OFFSET(getStruct<T>, {0x220, 16, 0, 0})
	SMember(FLinearColor)                              DefaultDullFontColor                                        OFFSET(getStruct<T>, {0x230, 16, 0, 0})
};

/// Struct /Script/LauncherSocialTypes.SocialListMargins
/// Size: 0x0210 (0x000000 - 0x000210)
class FSocialListMargins : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 528;

public:
	SMember(FVector2D)                                 UserPresenceImageSize                                       OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FMargin)                                   HeaderButtonMargin                                          OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FMargin)                                   FriendsListMargin                                           OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	SMember(FMargin)                                   FriendsListNoFriendsMargin                                  OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	SMember(FMargin)                                   FriendsListHeaderMargin                                     OFFSET(getStruct<T>, {0x40, 16, 0, 0})
	SMember(FMargin)                                   FriendsListHeaderCountMargin                                OFFSET(getStruct<T>, {0x50, 16, 0, 0})
	SMember(FMargin)                                   HeaderButtonContentMargin                                   OFFSET(getStruct<T>, {0x60, 16, 0, 0})
	SMember(FMargin)                                   FriendItemMargin                                            OFFSET(getStruct<T>, {0x70, 16, 0, 0})
	SMember(FMargin)                                   FriendItemStatusMargin                                      OFFSET(getStruct<T>, {0x80, 16, 0, 0})
	SMember(FMargin)                                   FriendTipStatusMargin                                       OFFSET(getStruct<T>, {0x90, 16, 0, 0})
	SMember(FMargin)                                   FriendItemPresenceMargin                                    OFFSET(getStruct<T>, {0xA0, 16, 0, 0})
	SMember(FMargin)                                   FriendItemPlatformMargin                                    OFFSET(getStruct<T>, {0xB0, 16, 0, 0})
	SMember(FMargin)                                   FriendItemTextScrollerMargin                                OFFSET(getStruct<T>, {0xC0, 16, 0, 0})
	SMember(FMargin)                                   ConfirmationBorderMargin                                    OFFSET(getStruct<T>, {0xD0, 16, 0, 0})
	SMember(FMargin)                                   ConfirmationButtonMargin                                    OFFSET(getStruct<T>, {0xE0, 16, 0, 0})
	SMember(FMargin)                                   ConfirmationButtonContentMargin                             OFFSET(getStruct<T>, {0xF0, 16, 0, 0})
	SMember(FMargin)                                   NoneFriendContentMargin                                     OFFSET(getStruct<T>, {0x100, 16, 0, 0})
	DMember(float)                                     NoneFriendContentHeight                                     OFFSET(get<float>, {0x110, 4, 0, 0})
	DMember(float)                                     NoneFriendIconWidth                                         OFFSET(get<float>, {0x114, 4, 0, 0})
	SMember(FMargin)                                   SubMenuBackIconMargin                                       OFFSET(getStruct<T>, {0x118, 16, 0, 0})
	SMember(FMargin)                                   SubMenuPageIconMargin                                       OFFSET(getStruct<T>, {0x128, 16, 0, 0})
	SMember(FMargin)                                   RadioSettingTitleMargin                                     OFFSET(getStruct<T>, {0x138, 16, 0, 0})
	SMember(FMargin)                                   SubMenuSearchIconMargin                                     OFFSET(getStruct<T>, {0x148, 16, 0, 0})
	SMember(FMargin)                                   SubMenuSearchTextMargin                                     OFFSET(getStruct<T>, {0x158, 16, 0, 0})
	SMember(FMargin)                                   SubMenuBackButtonMargin                                     OFFSET(getStruct<T>, {0x168, 16, 0, 0})
	SMember(FMargin)                                   SubMenuSettingButtonMargin                                  OFFSET(getStruct<T>, {0x178, 16, 0, 0})
	SMember(FMargin)                                   SubMenuListMargin                                           OFFSET(getStruct<T>, {0x188, 16, 0, 0})
	DMember(float)                                     SubMenuSeperatorThickness                                   OFFSET(get<float>, {0x198, 4, 0, 0})
	DMember(float)                                     PresenceSeperatorThickness                                  OFFSET(get<float>, {0x19C, 4, 0, 0})
	SMember(FMargin)                                   FriendTipMargin                                             OFFSET(getStruct<T>, {0x1A0, 16, 0, 0})
	SMember(FMargin)                                   FriendTipPresenceMargin                                     OFFSET(getStruct<T>, {0x1B0, 16, 0, 0})
	SMember(FMargin)                                   FriendTipSeperatorMargin                                    OFFSET(getStruct<T>, {0x1C0, 16, 0, 0})
	SMember(FMargin)                                   ToolTipMargin                                               OFFSET(getStruct<T>, {0x1D0, 16, 0, 0})
	SMember(FMargin)                                   TipStatusMargin                                             OFFSET(getStruct<T>, {0x1E0, 16, 0, 0})
	SMember(FMargin)                                   AddButtonMargin                                             OFFSET(getStruct<T>, {0x1F0, 16, 0, 0})
	SMember(FVector2D)                                 AddButtonSpacing                                            OFFSET(getStruct<T>, {0x200, 16, 0, 0})
};

/// Struct /Script/LauncherSocialTypes.SocialListStyle
/// Size: 0x3A60 (0x000000 - 0x003A60)
class FSocialListStyle : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 14944;

public:
	SMember(FButtonStyle)                              GlobalChatButtonStyle                                       OFFSET(getStruct<T>, {0x0, 944, 0, 0})
	SMember(FSlateBrush)                               GlobalChatIcon                                              OFFSET(getStruct<T>, {0x3B0, 192, 0, 0})
	SMember(FButtonStyle)                              FriendItemButtonStyle                                       OFFSET(getStruct<T>, {0x470, 944, 0, 0})
	SMember(FButtonStyle)                              ConfirmButtonStyle                                          OFFSET(getStruct<T>, {0x820, 944, 0, 0})
	SMember(FButtonStyle)                              CancelButtonStyle                                           OFFSET(getStruct<T>, {0xBD0, 944, 0, 0})
	SMember(FSlateColor)                               ButtonContentColor                                          OFFSET(getStruct<T>, {0xF80, 20, 0, 0})
	SMember(FSlateColor)                               ButtonHoverContentColor                                     OFFSET(getStruct<T>, {0xF94, 20, 0, 0})
	SMember(FSlateBrush)                               ActionMenuArrowBrush                                        OFFSET(getStruct<T>, {0xFB0, 192, 0, 0})
	SMember(FSlateBrush)                               ActionMenuArrowRightBrush                                   OFFSET(getStruct<T>, {0x1070, 192, 0, 0})
	SMember(FSlateColor)                               ActionMenuBackgroundColor                                   OFFSET(getStruct<T>, {0x1130, 20, 0, 0})
	SMember(FSlateBrush)                               ToolTipArrowBrush                                           OFFSET(getStruct<T>, {0x1150, 192, 0, 0})
	SMember(FButtonStyle)                              BackButtonStyle                                             OFFSET(getStruct<T>, {0x1210, 944, 0, 0})
	SMember(FButtonStyle)                              HeaderButtonStyle                                           OFFSET(getStruct<T>, {0x15C0, 944, 0, 0})
	SMember(FButtonStyle)                              FriendListActionButtonStyle                                 OFFSET(getStruct<T>, {0x1970, 944, 0, 0})
	SMember(FSlateBrush)                               AddFriendButtonContentBrush                                 OFFSET(getStruct<T>, {0x1D20, 192, 0, 0})
	SMember(FSlateBrush)                               StatusIconBrush                                             OFFSET(getStruct<T>, {0x1DE0, 192, 0, 0})
	SMember(FSlateBrush)                               PCIconBrush                                                 OFFSET(getStruct<T>, {0x1EA0, 192, 0, 0})
	SMember(FSlateBrush)                               ConsoleIconBrush                                            OFFSET(getStruct<T>, {0x1F60, 192, 0, 0})
	SMember(FSlateBrush)                               MobileIconBrush                                             OFFSET(getStruct<T>, {0x2020, 192, 0, 0})
	SMember(FSlateBrush)                               FacebookIconBrush                                           OFFSET(getStruct<T>, {0x20E0, 192, 0, 0})
	SMember(FSlateBrush)                               EpicIconBrush                                               OFFSET(getStruct<T>, {0x21A0, 192, 0, 0})
	SMember(FSlateBrush)                               FriendImageBrush                                            OFFSET(getStruct<T>, {0x2260, 192, 0, 0})
	SMember(FSlateBrush)                               OfflineBrush                                                OFFSET(getStruct<T>, {0x2320, 192, 0, 0})
	SMember(FSlateBrush)                               OnlineBrush                                                 OFFSET(getStruct<T>, {0x23E0, 192, 0, 0})
	SMember(FSlateBrush)                               AwayBrush                                                   OFFSET(getStruct<T>, {0x24A0, 192, 0, 0})
	SMember(FSlateBrush)                               SpectateBrush                                               OFFSET(getStruct<T>, {0x2560, 192, 0, 0})
	SMember(FSlateBrush)                               FriendsContainerBackground                                  OFFSET(getStruct<T>, {0x2620, 192, 0, 0})
	SMember(FSlateBrush)                               FriendsListBackground                                       OFFSET(getStruct<T>, {0x26E0, 192, 0, 0})
	SMember(FEditableTextBoxStyle)                     AddFriendEditableTextStyle                                  OFFSET(getStruct<T>, {0x27A0, 3456, 0, 0})
	SMember(FSlateBrush)                               BackBrush                                                   OFFSET(getStruct<T>, {0x3520, 192, 0, 0})
	SMember(FSlateBrush)                               SelectedOptionBrush                                         OFFSET(getStruct<T>, {0x35E0, 192, 0, 0})
	SMember(FSlateBrush)                               SettingsBrush                                               OFFSET(getStruct<T>, {0x36A0, 192, 0, 0})
	SMember(FSlateBrush)                               SeperatorBrush                                              OFFSET(getStruct<T>, {0x3760, 192, 0, 0})
	SMember(FSlateBrush)                               PresenceSeperatorBrush                                      OFFSET(getStruct<T>, {0x3820, 192, 0, 0})
	SMember(FSlateBrush)                               FontSizeBrush                                               OFFSET(getStruct<T>, {0x38E0, 192, 0, 0})
	SMember(FSlateBrush)                               SearchBrush                                                 OFFSET(getStruct<T>, {0x39A0, 192, 0, 0})
};

/// Struct /Script/LauncherSocialTypes.ProfanityData
/// Size: 0x0038 (0x000000 - 0x000038)
class FProfanityData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FString)                                   CountryCode                                                 OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   ProfanityList                                               OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FString)                                   Whitelist                                                   OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	DMember(bool)                                      bAutoAdd                                                    OFFSET(get<bool>, {0x30, 1, 0, 0})
};

/// Struct /Script/LauncherSocialTypes.SocialSoundSchema
/// Size: 0x0048 (0x000000 - 0x000048)
class FSocialSoundSchema : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FSlateSound)                               MessageReceivedSound                                        OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FSlateSound)                               PartyInviteReceivedSound                                    OFFSET(getStruct<T>, {0x18, 24, 0, 0})
	SMember(FSlateSound)                               FriendInviteReceivedSound                                   OFFSET(getStruct<T>, {0x30, 24, 0, 0})
};

/// Struct /Script/LauncherSocialTypes.SocialStyle
/// Size: 0x9A50 (0x000000 - 0x009A50)
class FSocialStyle : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 39504;

public:
	SMember(FScrollBarStyle)                           ScrollBarStyle                                              OFFSET(getStruct<T>, {0x0, 1760, 0, 0})
	SMember(FButtonStyle)                              ActionButtonStyle                                           OFFSET(getStruct<T>, {0x6E0, 944, 0, 0})
	SMember(FSocialFontStyle)                          SmallFontStyle                                              OFFSET(getStruct<T>, {0xA90, 576, 0, 0})
	SMember(FSocialFontStyle)                          NormalFontStyle                                             OFFSET(getStruct<T>, {0xCD0, 576, 0, 0})
	SMember(FSocialFontStyle)                          LargeFontStyle                                              OFFSET(getStruct<T>, {0xF10, 576, 0, 0})
	SMember(FSocialFontStyle)                          ChatFontStyle                                               OFFSET(getStruct<T>, {0x1150, 576, 0, 0})
	SMember(FCheckBoxStyle)                            CheckBoxStyle                                               OFFSET(getStruct<T>, {0x1390, 2576, 0, 0})
	SMember(FCheckBoxStyle)                            RadioBoxStyle                                               OFFSET(getStruct<T>, {0x1DA0, 2576, 0, 0})
	SMember(FSocialListStyle)                          SocialListStyle                                             OFFSET(getStruct<T>, {0x27B0, 14944, 0, 0})
	SMember(FSocialListMargins)                        SocialListMargins                                           OFFSET(getStruct<T>, {0x6210, 528, 0, 0})
	SMember(FChatStyle)                                ChatStyle                                                   OFFSET(getStruct<T>, {0x6420, 8192, 0, 0})
	SMember(FChatColorScheme)                          ChatColorScheme                                             OFFSET(getStruct<T>, {0x8420, 288, 0, 0})
	SMember(FChatChromeStyle)                          ChatChromeStyle                                             OFFSET(getStruct<T>, {0x8540, 2896, 0, 0})
	SMember(FChatChromeMargins)                        ChatChromeMargins                                           OFFSET(getStruct<T>, {0x9090, 100, 0, 0})
	SMember(FChatChromeColorScheme)                    ChatChromeColorScheme                                       OFFSET(getStruct<T>, {0x90F4, 80, 0, 0})
	SMember(FChatMarkupStyle)                          ChatMarkupStyle                                             OFFSET(getStruct<T>, {0x9150, 2224, 0, 0})
	SMember(FSocialSoundSchema)                        SoundSchema                                                 OFFSET(getStruct<T>, {0x9A00, 72, 0, 0})
};

