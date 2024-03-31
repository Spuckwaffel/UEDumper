
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CommonUI
/// dependency: CoreUObject
/// dependency: CosmeticsFrameworkLoadouts
/// dependency: DelMarCore
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: FortniteUI
/// dependency: UMG
/// dependency: VehicleCosmeticsRuntime

/// Class /Script/DelMarFrontend.DelMarFrontendCheatManager
/// Size: 0x0000 (0x000028 - 0x000028)
class UDelMarFrontendCheatManager : public UChildCheatManager
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/DelMarFrontend.DelMarFrontendCheatManager.DelMarResetNux
	// void DelMarResetNux();                                                                                                   // [0x3518b8c] Final|Exec|Native|Protected 
	// Function /Script/DelMarFrontend.DelMarFrontendCheatManager.DelMarMarkTutorialPlayed
	// void DelMarMarkTutorialPlayed();                                                                                         // [0x3518b8c] Final|Exec|Native|Protected 
};

/// Class /Script/DelMarFrontend.DelMarFrontendExperienceFlow
/// Size: 0x0140 (0x000028 - 0x000168)
class UDelMarFrontendExperienceFlow : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 360;

public:
	CMember(class AFortPlayerController*)              CachedPlayerController                                      OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   VideoPlayerClass                                            OFFSET(get<T>, {0x38, 32, 0, 0})
	CMember(class UClass*)                             ConfirmationWindowClass                                     OFFSET(get<T>, {0x58, 8, 0, 0})
	SMember(FText)                                     TutorialPromptTitle                                         OFFSET(getStruct<T>, {0x60, 24, 0, 0})
	SMember(FText)                                     TutorialPromptDescription                                   OFFSET(getStruct<T>, {0x78, 24, 0, 0})
	SMember(FText)                                     TutorialPromptConfirmButtonText                             OFFSET(getStruct<T>, {0x90, 24, 0, 0})
	SMember(FText)                                     TutorialPromptDeclineButtonText                             OFFSET(getStruct<T>, {0xA8, 24, 0, 0})
	CMember(class UDelMarGameUserSettings*)            DelMarUserSettings                                          OFFSET(get<T>, {0xC0, 8, 0, 0})
	CMember(TMap<FString, FString>)                    NUXTrailerRating                                            OFFSET(get<T>, {0xD0, 80, 0, 0})


	/// Functions
	// Function /Script/DelMarFrontend.DelMarFrontendExperienceFlow.HandleVideoTerminalError
	// void HandleVideoTerminalError(EBaseMediaTerminalErrorReason Reason);                                                     // [0xc481920] Final|Native|Protected 
	// Function /Script/DelMarFrontend.DelMarFrontendExperienceFlow.FinishTrailerStep
	// void FinishTrailerStep();                                                                                                // [0xc4818dc] Final|Native|Protected 
};

/// Class /Script/DelMarFrontend.DelMarFrontendSubsystem
/// Size: 0x00C0 (0x000030 - 0x0000F0)
class UDelMarFrontendSubsystem : public UFortLocalPlayerSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	CMember(class AVehicleCosmeticsPreviewVehicle*)    PreviewVehicle                                              OFFSET(get<T>, {0x38, 8, 0, 0})
	SMember(FFrontendLobbyActor)                       LobbyVehicleActorData                                       OFFSET(getStruct<T>, {0x40, 112, 0, 0})
	SMember(FCosmeticLoadoutSlot)                      LobbyVehicleDefaultBody                                     OFFSET(getStruct<T>, {0xB0, 32, 0, 0})
};

/// Class /Script/DelMarFrontend.DelMarMatchmakingWidgetExtension
/// Size: 0x0038 (0x000028 - 0x000060)
class UDelMarMatchmakingWidgetExtension : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FText)                                     ModeSetButtonPrimaryText                                    OFFSET(getStruct<T>, {0x30, 24, 0, 0})
	CMember(class UClass*)                             GameSelectionOverride                                       OFFSET(get<T>, {0x48, 8, 0, 0})
	DMember(bool)                                      bDisplayGameSelectionOnContentStack                         OFFSET(get<bool>, {0x50, 1, 0, 0})
	CMember(class UClass*)                             CustomHeadingWidget                                         OFFSET(get<T>, {0x58, 8, 0, 0})
};

/// Class /Script/DelMarFrontend.DelMarRankedWidgetExtension
/// Size: 0x0028 (0x000028 - 0x000050)
class UDelMarRankedWidgetExtension : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TWeakObjectPtr<UClass*>)                   RankInfoModalOverride                                       OFFSET(get<T>, {0x30, 32, 0, 0})
};

/// Class /Script/DelMarFrontend.DelMarTrackSelectModal
/// Size: 0x0040 (0x000418 - 0x000458)
class UDelMarTrackSelectModal : public UFortActivityModeSetSelectionModalBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1112;

public:
	CMember(class UFortActivityPrivacyButton*)         Button_ActivityPrivacy                                      OFFSET(get<T>, {0x418, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_CloseTouch                                           OFFSET(get<T>, {0x420, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_Back                                                 OFFSET(get<T>, {0x428, 8, 0, 0})
};

/// Class /Script/DelMarFrontend.DelMarFrontendRuntimeOptions
/// Size: 0x0050 (0x000038 - 0x000088)
class UDelMarFrontendRuntimeOptions : public URuntimeOptionsBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FString)                                   FrontendNuxVideoKey                                         OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	SMember(FName)                                     FrontendNuxVideoName                                        OFFSET(getStruct<T>, {0x48, 4, 0, 0})
	SMember(FString)                                   FrontendNuxVideoId                                          OFFSET(getStruct<T>, {0x50, 16, 0, 0})
	DMember(bool)                                      bAlwaysShowNuxVideo                                         OFFSET(get<bool>, {0x60, 1, 0, 0})
	DMember(bool)                                      bDisableFrontendNuxFlow                                     OFFSET(get<bool>, {0x61, 1, 0, 0})
	SMember(FString)                                   DelMarTutorialLinkCode                                      OFFSET(getStruct<T>, {0x68, 16, 0, 0})
	SMember(FString)                                   DelMarDefaultLinkCode                                       OFFSET(getStruct<T>, {0x78, 16, 0, 0})


	/// Functions
	// Function /Script/DelMarFrontend.DelMarFrontendRuntimeOptions.GetDelMarFrontendRuntimeOptions
	// class UDelMarFrontendRuntimeOptions* GetDelMarFrontendRuntimeOptions();                                                  // [0xc4818f0] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

