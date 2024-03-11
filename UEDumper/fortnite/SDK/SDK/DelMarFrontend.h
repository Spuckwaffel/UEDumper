
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
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
public:


	/// Functions
	// Function /Script/DelMarFrontend.DelMarFrontendCheatManager.DelMarResetNux
	// void DelMarResetNux();                                                                                                // [0x36203b0] Final|Exec|Native|Protected 
	// Function /Script/DelMarFrontend.DelMarFrontendCheatManager.DelMarMarkTutorialPlayed
	// void DelMarMarkTutorialPlayed();                                                                                      // [0x36203b0] Final|Exec|Native|Protected 
};

/// Class /Script/DelMarFrontend.DelMarFrontendExperienceFlow
/// Size: 0x0128 (0x000028 - 0x000150)
class UDelMarFrontendExperienceFlow : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x30];                                      // 0x0000   (0x0030)  MISSED
	class AFortPlayerController*                       CachedPlayerController;                                     // 0x0030   (0x0008)  
	class UFortStreamMediaSource*                      VideoStream_Source;                                         // 0x0038   (0x0008)  
	SDK_UNDEFINED(32,13191) /* TWeakObjectPtr<UClass*> */ __um(VideoPlayerClass);                                  // 0x0040   (0x0020)  
	class UClass*                                      ConfirmationWindowClass;                                    // 0x0060   (0x0008)  
	SDK_UNDEFINED(24,13192) /* FText */                __um(TutorialPromptTitle);                                  // 0x0068   (0x0018)  
	SDK_UNDEFINED(24,13193) /* FText */                __um(TutorialPromptDescription);                            // 0x0080   (0x0018)  
	SDK_UNDEFINED(24,13194) /* FText */                __um(TutorialPromptConfirmButtonText);                      // 0x0098   (0x0018)  
	SDK_UNDEFINED(24,13195) /* FText */                __um(TutorialPromptDeclineButtonText);                      // 0x00B0   (0x0018)  
	class UDelMarGameUserSettings*                     DelMarUserSettings;                                         // 0x00C8   (0x0008)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x00D0   (0x0008)  MISSED
	SDK_UNDEFINED(80,13196) /* TMap<FString, FString> */ __um(NUXTrailerRating);                                   // 0x00D8   (0x0050)  
	unsigned char                                      UnknownData02_6[0x28];                                      // 0x0128   (0x0028)  MISSED
};

/// Class /Script/DelMarFrontend.DelMarFrontendSubsystem
/// Size: 0x00C0 (0x000030 - 0x0000F0)
class UDelMarFrontendSubsystem : public UFortLocalPlayerSubsystem
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0030   (0x0008)  MISSED
	class AVehicleCosmeticsPreviewVehicle*             PreviewVehicle;                                             // 0x0038   (0x0008)  
	FFrontendLobbyActor                                LobbyVehicleActorData;                                      // 0x0040   (0x0070)  
	FCosmeticLoadoutSlot                               LobbyVehicleDefaultBody;                                    // 0x00B0   (0x0020)  
	unsigned char                                      UnknownData01_6[0x20];                                      // 0x00D0   (0x0020)  MISSED
};

/// Class /Script/DelMarFrontend.DelMarMatchmakingWidgetExtension
/// Size: 0x0038 (0x000028 - 0x000060)
class UDelMarMatchmakingWidgetExtension : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x30];                                      // 0x0000   (0x0030)  MISSED
	SDK_UNDEFINED(24,13197) /* FText */                __um(ModeSetButtonPrimaryText);                             // 0x0030   (0x0018)  
	class UClass*                                      GameSelectionOverride;                                      // 0x0048   (0x0008)  
	bool                                               bDisplayGameSelectionOnContentStack;                        // 0x0050   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0051   (0x0007)  MISSED
	class UClass*                                      CustomHeadingWidget;                                        // 0x0058   (0x0008)  
};

/// Class /Script/DelMarFrontend.DelMarRankedWidgetExtension
/// Size: 0x0028 (0x000028 - 0x000050)
class UDelMarRankedWidgetExtension : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x30];                                      // 0x0000   (0x0030)  MISSED
	SDK_UNDEFINED(32,13198) /* TWeakObjectPtr<UClass*> */ __um(RankInfoModalOverride);                             // 0x0030   (0x0020)  
};

/// Class /Script/DelMarFrontend.DelMarTrackSelectModal
/// Size: 0x0040 (0x000418 - 0x000458)
class UDelMarTrackSelectModal : public UFortActivityModeSetSelectionModalBase
{ 
public:
	class UFortActivityPrivacyButton*                  Button_ActivityPrivacy;                                     // 0x0418   (0x0008)  
	class UCommonButtonBase*                           Button_CloseTouch;                                          // 0x0420   (0x0008)  
	class UCommonButtonBase*                           Button_Back;                                                // 0x0428   (0x0008)  
	unsigned char                                      UnknownData00_6[0x28];                                      // 0x0430   (0x0028)  MISSED
};

/// Class /Script/DelMarFrontend.DelMarFrontendRuntimeOptions
/// Size: 0x0050 (0x000038 - 0x000088)
class UDelMarFrontendRuntimeOptions : public URuntimeOptionsBase
{ 
public:
	SDK_UNDEFINED(16,13199) /* FString */              __um(FrontendNuxVideoKey);                                  // 0x0038   (0x0010)  
	FName                                              FrontendNuxVideoName;                                       // 0x0048   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x004C   (0x0004)  MISSED
	SDK_UNDEFINED(16,13200) /* FString */              __um(FrontendNuxVideoId);                                   // 0x0050   (0x0010)  
	bool                                               bDisableFrontendNuxFlow;                                    // 0x0060   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0061   (0x0007)  MISSED
	SDK_UNDEFINED(16,13201) /* FString */              __um(DelMarTutorialLinkCode);                               // 0x0068   (0x0010)  
	SDK_UNDEFINED(16,13202) /* FString */              __um(DelMarDefaultLinkCode);                                // 0x0078   (0x0010)  


	/// Functions
	// Function /Script/DelMarFrontend.DelMarFrontendRuntimeOptions.GetDelMarFrontendRuntimeOptions
	// class UDelMarFrontendRuntimeOptions* GetDelMarFrontendRuntimeOptions();                                               // [0xb099e18] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

