
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: LauncherSocialTypes
/// dependency: SlateCore

/// Class /Script/LauncherSocialDefaults.ChatColorSchemeDataAsset
/// Size: 0x0120 (0x000030 - 0x000150)
class UChatColorSchemeDataAsset : public UDataAsset
{ 
public:
	FChatColorScheme                                   ChatColorData;                                              // 0x0030   (0x0120)  
};

/// Class /Script/LauncherSocialDefaults.SocialActionButtonStyleDataAsset
/// Size: 0x03B0 (0x000030 - 0x0003E0)
class USocialActionButtonStyleDataAsset : public UDataAsset
{ 
public:
	FButtonStyle                                       style;                                                      // 0x0030   (0x03B0)  
};

/// Class /Script/LauncherSocialDefaults.SocialChatChromeColorSchemeDataAsset
/// Size: 0x0050 (0x000030 - 0x000080)
class USocialChatChromeColorSchemeDataAsset : public UDataAsset
{ 
public:
	FChatChromeColorScheme                             style;                                                      // 0x0030   (0x0050)  
};

/// Class /Script/LauncherSocialDefaults.SocialChatChromeMarginsDataAsset
/// Size: 0x0068 (0x000030 - 0x000098)
class USocialChatChromeMarginsDataAsset : public UDataAsset
{ 
public:
	FChatChromeMargins                                 style;                                                      // 0x0030   (0x0064)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0094   (0x0004)  MISSED
};

/// Class /Script/LauncherSocialDefaults.SocialChatChromeStyleDataAsset
/// Size: 0x0B50 (0x000030 - 0x000B80)
class USocialChatChromeStyleDataAsset : public UDataAsset
{ 
public:
	FChatChromeStyle                                   style;                                                      // 0x0030   (0x0B50)  
};

/// Class /Script/LauncherSocialDefaults.SocialChatMarkupStyleDataAsset
/// Size: 0x08B0 (0x000030 - 0x0008E0)
class USocialChatMarkupStyleDataAsset : public UDataAsset
{ 
public:
	FChatMarkupStyle                                   style;                                                      // 0x0030   (0x08B0)  
};

/// Class /Script/LauncherSocialDefaults.SocialChatStyleDataAsset
/// Size: 0x2000 (0x000030 - 0x002030)
class USocialChatStyleDataAsset : public UDataAsset
{ 
public:
	FChatStyle                                         style;                                                      // 0x0030   (0x2000)  
};

/// Class /Script/LauncherSocialDefaults.SocialCheckBoxStyleDataAsset
/// Size: 0x0A10 (0x000030 - 0x000A40)
class USocialCheckBoxStyleDataAsset : public UDataAsset
{ 
public:
	FCheckBoxStyle                                     style;                                                      // 0x0030   (0x0A10)  
};

/// Class /Script/LauncherSocialDefaults.SocialFontStyleDataAsset
/// Size: 0x0240 (0x000030 - 0x000270)
class USocialFontStyleDataAsset : public UDataAsset
{ 
public:
	FSocialFontStyle                                   style;                                                      // 0x0030   (0x0240)  
};

/// Class /Script/LauncherSocialDefaults.SocialListMarginsDataAsset
/// Size: 0x0210 (0x000030 - 0x000240)
class USocialListMarginsDataAsset : public UDataAsset
{ 
public:
	FSocialListMargins                                 style;                                                      // 0x0030   (0x0210)  
};

/// Class /Script/LauncherSocialDefaults.SocialListStyleDataAsset
/// Size: 0x3A60 (0x000030 - 0x003A90)
class USocialListStyleDataAsset : public UDataAsset
{ 
public:
	FSocialListStyle                                   style;                                                      // 0x0030   (0x3A60)  
};

/// Class /Script/LauncherSocialDefaults.SocialProfanityDataAsset
/// Size: 0x0010 (0x000030 - 0x000040)
class USocialProfanityDataAsset : public UDataAsset
{ 
public:
	TArray<FProfanityData>                             ProfanityData;                                              // 0x0030   (0x0010)  
};

/// Class /Script/LauncherSocialDefaults.SocialRadioBoxStyleDataAsset
/// Size: 0x0A10 (0x000030 - 0x000A40)
class USocialRadioBoxStyleDataAsset : public UDataAsset
{ 
public:
	FCheckBoxStyle                                     style;                                                      // 0x0030   (0x0A10)  
};

/// Class /Script/LauncherSocialDefaults.SocialScrollBarStyleDataAsset
/// Size: 0x06E0 (0x000030 - 0x000710)
class USocialScrollBarStyleDataAsset : public UDataAsset
{ 
public:
	FScrollBarStyle                                    style;                                                      // 0x0030   (0x06E0)  
};

/// Class /Script/LauncherSocialDefaults.SocialSoundSchemaDataAsset
/// Size: 0x0048 (0x000030 - 0x000078)
class USocialSoundSchemaDataAsset : public UDataAsset
{ 
public:
	FSocialSoundSchema                                 SoundSchema;                                                // 0x0030   (0x0048)  
};

/// Class /Script/LauncherSocialDefaults.SocialStyleDataAsset
/// Size: 0x9AE0 (0x000030 - 0x009B10)
class USocialStyleDataAsset : public UDataAsset
{ 
public:
	class USocialFontStyleDataAsset*                   SmallFontStyle;                                             // 0x0030   (0x0008)  
	class USocialFontStyleDataAsset*                   NormalFontStyle;                                            // 0x0038   (0x0008)  
	class USocialFontStyleDataAsset*                   LargeFontStyle;                                             // 0x0040   (0x0008)  
	class USocialFontStyleDataAsset*                   ChatFontStyle;                                              // 0x0048   (0x0008)  
	class USocialListStyleDataAsset*                   SocialListStyle;                                            // 0x0050   (0x0008)  
	class USocialListMarginsDataAsset*                 SocialListMargins;                                          // 0x0058   (0x0008)  
	class USocialChatStyleDataAsset*                   ChatStyle;                                                  // 0x0060   (0x0008)  
	class USocialChatChromeStyleDataAsset*             ChatChromeStyle;                                            // 0x0068   (0x0008)  
	class USocialChatChromeMarginsDataAsset*           ChatChromeMargins;                                          // 0x0070   (0x0008)  
	class USocialChatChromeColorSchemeDataAsset*       ChatChromeColorScheme;                                      // 0x0078   (0x0008)  
	class UChatColorSchemeDataAsset*                   ChatColorScheme;                                            // 0x0080   (0x0008)  
	class USocialSoundSchemaDataAsset*                 SoundSchema;                                                // 0x0088   (0x0008)  
	class USocialActionButtonStyleDataAsset*           ActionButtonStyle;                                          // 0x0090   (0x0008)  
	class USocialCheckBoxStyleDataAsset*               CheckBoxStyle;                                              // 0x0098   (0x0008)  
	class USocialRadioBoxStyleDataAsset*               RadioBoxStyle;                                              // 0x00A0   (0x0008)  
	class USocialScrollBarStyleDataAsset*              ScrollBoxStyle;                                             // 0x00A8   (0x0008)  
	class USocialChatMarkupStyleDataAsset*             MarkupStyle;                                                // 0x00B0   (0x0008)  
	class USocialProfanityDataAsset*                   ProfanityDataAsset;                                         // 0x00B8   (0x0008)  
	unsigned char                                      UnknownData00_6[0x9A50];                                    // 0x00C0   (0x9A50)  MISSED
};

