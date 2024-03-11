
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject

/// Enum /Script/EngineSettings.ETwoPlayerSplitScreenType
/// Size: 0x03
enum class ETwoPlayerSplitScreenType : uint8_t
{
	ETwoPlayerSplitScreenType__Horizontal                                            = 0,
	ETwoPlayerSplitScreenType__Vertical                                              = 1,
	ETwoPlayerSplitScreenType__ETwoPlayerSplitScreenType_MAX                         = 2
};

/// Enum /Script/EngineSettings.EThreePlayerSplitScreenType
/// Size: 0x05
enum class EThreePlayerSplitScreenType : uint8_t
{
	EThreePlayerSplitScreenType__FavorTop                                            = 0,
	EThreePlayerSplitScreenType__FavorBottom                                         = 1,
	EThreePlayerSplitScreenType__Vertical                                            = 2,
	EThreePlayerSplitScreenType__Horizontal                                          = 3,
	EThreePlayerSplitScreenType__EThreePlayerSplitScreenType_MAX                     = 4
};

/// Enum /Script/EngineSettings.EFourPlayerSplitScreenType
/// Size: 0x04
enum class EFourPlayerSplitScreenType : uint8_t
{
	EFourPlayerSplitScreenType__Grid                                                 = 0,
	EFourPlayerSplitScreenType__Vertical                                             = 1,
	EFourPlayerSplitScreenType__Horizontal                                           = 2,
	EFourPlayerSplitScreenType__EFourPlayerSplitScreenType_MAX                       = 3
};

/// Enum /Script/EngineSettings.ESubLevelStripMode
/// Size: 0x03
enum class ESubLevelStripMode : uint8_t
{
	ESubLevelStripMode__ExactClass                                                   = 0,
	ESubLevelStripMode__IsChildOf                                                    = 1,
	ESubLevelStripMode__ESubLevelStripMode_MAX                                       = 2
};

/// Struct /Script/EngineSettings.AutoCompleteCommand
/// Size: 0x0028 (0x000000 - 0x000028)
struct FAutoCompleteCommand
{ 
	SDK_UNDEFINED(16,13496) /* FString */              __um(Command);                                              // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,13497) /* FString */              __um(Desc);                                                 // 0x0010   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0020   (0x0008)  MISSED
};

/// Class /Script/EngineSettings.ConsoleSettings
/// Size: 0x0048 (0x000028 - 0x000070)
class UConsoleSettings : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	int32_t                                            MaxScrollbackSize;                                          // 0x0028   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x002C   (0x0004)  MISSED
	TArray<FAutoCompleteCommand>                       ManualAutoCompleteList;                                     // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,13498) /* TArray<FString> */      __um(AutoCompleteMapPaths);                                 // 0x0040   (0x0010)  
	float                                              BackgroundOpacityPercentage;                                // 0x0050   (0x0004)  
	bool                                               bOrderTopToBottom;                                          // 0x0054   (0x0001)  
	bool                                               bDisplayHelpInAutoComplete;                                 // 0x0055   (0x0001)  
	unsigned char                                      UnknownData02_5[0x2];                                       // 0x0056   (0x0002)  MISSED
	FColor                                             InputColor;                                                 // 0x0058   (0x0004)  
	FColor                                             HistoryColor;                                               // 0x005C   (0x0004)  
	FColor                                             AutoCompleteCommandColor;                                   // 0x0060   (0x0004)  
	FColor                                             AutoCompleteCVarColor;                                      // 0x0064   (0x0004)  
	FColor                                             AutoCompleteFadedColor;                                     // 0x0068   (0x0004)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x006C   (0x0004)  MISSED
};

/// Struct /Script/EngineSettings.GameModeName
/// Size: 0x0028 (0x000000 - 0x000028)
struct FGameModeName
{ 
	SDK_UNDEFINED(16,13499) /* FString */              __um(Name);                                                 // 0x0000   (0x0010)  
	FSoftClassPath                                     GameMode;                                                   // 0x0010   (0x0018)  
};

/// Class /Script/EngineSettings.GameMapsSettings
/// Size: 0x00C8 (0x000028 - 0x0000F0)
class UGameMapsSettings : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	SDK_UNDEFINED(16,13500) /* FString */              __um(LocalMapOptions);                                      // 0x0028   (0x0010)  
	FSoftObjectPath                                    TransitionMap;                                              // 0x0038   (0x0018)  
	bool                                               bUseSplitscreen;                                            // 0x0050   (0x0001)  
	SDK_UNDEFINED(1,13501) /* TEnumAsByte<ETwoPlayerSplitScreenType> */ __um(TwoPlayerSplitscreenLayout);          // 0x0051   (0x0001)  
	SDK_UNDEFINED(1,13502) /* TEnumAsByte<EThreePlayerSplitScreenType> */ __um(ThreePlayerSplitscreenLayout);      // 0x0052   (0x0001)  
	EFourPlayerSplitScreenType                         FourPlayerSplitscreenLayout;                                // 0x0053   (0x0001)  
	bool                                               bOffsetPlayerGamepadIds;                                    // 0x0054   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0055   (0x0003)  MISSED
	FSoftClassPath                                     GameInstanceClass;                                          // 0x0058   (0x0018)  
	FSoftObjectPath                                    GameDefaultMap;                                             // 0x0070   (0x0018)  
	FSoftObjectPath                                    ServerDefaultMap;                                           // 0x0088   (0x0018)  
	FSoftClassPath                                     GlobalDefaultGameMode;                                      // 0x00A0   (0x0018)  
	FSoftClassPath                                     GlobalDefaultServerGameMode;                                // 0x00B8   (0x0018)  
	TArray<FGameModeName>                              GameModeMapPrefixes;                                        // 0x00D0   (0x0010)  
	TArray<FGameModeName>                              GameModeClassAliases;                                       // 0x00E0   (0x0010)  


	/// Functions
	// Function /Script/EngineSettings.GameMapsSettings.SetSkipAssigningGamepadToPlayer1
	// void SetSkipAssigningGamepadToPlayer1(bool bSkipFirstPlayer);                                                         // [0x5a5aeb8] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/EngineSettings.GameMapsSettings.GetSkipAssigningGamepadToPlayer1
	// bool GetSkipAssigningGamepadToPlayer1();                                                                              // [0x5a5aea4] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EngineSettings.GameMapsSettings.GetGameMapsSettings
	// class UGameMapsSettings* GetGameMapsSettings();                                                                       // [0x5a5ae74] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/EngineSettings.GameNetworkManagerSettings
/// Size: 0x0030 (0x000028 - 0x000058)
class UGameNetworkManagerSettings : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	int32_t                                            MinDynamicBandwidth;                                        // 0x0028   (0x0004)  
	int32_t                                            MaxDynamicBandwidth;                                        // 0x002C   (0x0004)  
	int32_t                                            TotalNetBandwidth;                                          // 0x0030   (0x0004)  
	int32_t                                            BadPingThreshold;                                           // 0x0034   (0x0004)  
	bool                                               bIsStandbyCheckingEnabled : 1;                              // 0x0038:0 (0x0001)  
	unsigned char                                      UnknownData01_4[0x3];                                       // 0x0039   (0x0003)  MISSED
	float                                              StandbyRxCheatTime;                                         // 0x003C   (0x0004)  
	float                                              StandbyTxCheatTime;                                         // 0x0040   (0x0004)  
	float                                              PercentMissingForRxStandby;                                 // 0x0044   (0x0004)  
	float                                              PercentMissingForTxStandby;                                 // 0x0048   (0x0004)  
	float                                              PercentForBadPing;                                          // 0x004C   (0x0004)  
	float                                              JoinInProgressStandbyWaitTime;                              // 0x0050   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0054   (0x0004)  MISSED
};

/// Class /Script/EngineSettings.GameSessionSettings
/// Size: 0x0010 (0x000028 - 0x000038)
class UGameSessionSettings : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	int32_t                                            MaxSpectators;                                              // 0x0028   (0x0004)  
	int32_t                                            MaxPlayers;                                                 // 0x002C   (0x0004)  
	bool                                               bRequiresPushToTalk : 1;                                    // 0x0030:0 (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0031   (0x0007)  MISSED
};

/// Class /Script/EngineSettings.GeneralEngineSettings
/// Size: 0x0000 (0x000028 - 0x000028)
class UGeneralEngineSettings : public UObject
{ 
public:
};

/// Class /Script/EngineSettings.GeneralProjectSettings
/// Size: 0x00F0 (0x000028 - 0x000118)
class UGeneralProjectSettings : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	SDK_UNDEFINED(16,13503) /* FString */              __um(CompanyName);                                          // 0x0028   (0x0010)  
	SDK_UNDEFINED(16,13504) /* FString */              __um(CompanyDistinguishedName);                             // 0x0038   (0x0010)  
	SDK_UNDEFINED(16,13505) /* FString */              __um(CopyrightNotice);                                      // 0x0048   (0x0010)  
	SDK_UNDEFINED(16,13506) /* FString */              __um(Description);                                          // 0x0058   (0x0010)  
	SDK_UNDEFINED(16,13507) /* FString */              __um(Homepage);                                             // 0x0068   (0x0010)  
	SDK_UNDEFINED(16,13508) /* FString */              __um(LicensingTerms);                                       // 0x0078   (0x0010)  
	SDK_UNDEFINED(16,13509) /* FString */              __um(PrivacyPolicy);                                        // 0x0088   (0x0010)  
	FGuid                                              ProjectID;                                                  // 0x0098   (0x0010)  
	SDK_UNDEFINED(16,13510) /* FString */              __um(ProjectName);                                          // 0x00A8   (0x0010)  
	SDK_UNDEFINED(16,13511) /* FString */              __um(ProjectVersion);                                       // 0x00B8   (0x0010)  
	SDK_UNDEFINED(16,13512) /* FString */              __um(SupportContact);                                       // 0x00C8   (0x0010)  
	SDK_UNDEFINED(24,13513) /* FText */                __um(ProjectDisplayedTitle);                                // 0x00D8   (0x0018)  
	SDK_UNDEFINED(24,13514) /* FText */                __um(ProjectDebugTitleInfo);                                // 0x00F0   (0x0018)  
	bool                                               bShouldWindowPreserveAspectRatio;                           // 0x0108   (0x0001)  
	bool                                               bUseBorderlessWindow;                                       // 0x0109   (0x0001)  
	bool                                               bStartInVR;                                                 // 0x010A   (0x0001)  
	bool                                               bAllowWindowResize;                                         // 0x010B   (0x0001)  
	bool                                               bAllowClose;                                                // 0x010C   (0x0001)  
	bool                                               bAllowMaximize;                                             // 0x010D   (0x0001)  
	bool                                               bAllowMinimize;                                             // 0x010E   (0x0001)  
	unsigned char                                      UnknownData01_5[0x1];                                       // 0x010F   (0x0001)  MISSED
	float                                              EyeOffsetForFakeStereoRenderingDevice;                      // 0x0110   (0x0004)  
	float                                              FOVForFakeStereoRenderingDevice;                            // 0x0114   (0x0004)  
};

/// Class /Script/EngineSettings.HudSettings
/// Size: 0x0018 (0x000028 - 0x000040)
class UHudSettings : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	bool                                               bShowHUD : 1;                                               // 0x0028:0 (0x0001)  
	unsigned char                                      UnknownData01_4[0x7];                                       // 0x0029   (0x0007)  MISSED
	TArray<FName>                                      DebugDisplay;                                               // 0x0030   (0x0010)  
};

/// Struct /Script/EngineSettings.TemplateMapInfoOverride
/// Size: 0x0048 (0x000000 - 0x000048)
struct FTemplateMapInfoOverride
{ 
	FSoftObjectPath                                    Thumbnail;                                                  // 0x0000   (0x0018)  
	FSoftObjectPath                                    Map;                                                        // 0x0018   (0x0018)  
	SDK_UNDEFINED(24,13515) /* FText */                __um(DisplayName);                                          // 0x0030   (0x0018)  
};

