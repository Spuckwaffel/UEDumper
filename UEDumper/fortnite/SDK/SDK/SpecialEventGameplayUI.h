
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CommonUI
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: FortniteUI
/// dependency: SpecialEventGameplayRuntime
/// dependency: UMG

/// Struct /Script/SpecialEventGameplayUI.CinematicWidgetData
/// Size: 0x0010 (0x000000 - 0x000010)
struct FCinematicWidgetData
{ 
	FName                                              WidgetEntryName;                                            // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	class UClass*                                      WidgetClass;                                                // 0x0008   (0x0008)  
};

/// Class /Script/SpecialEventGameplayUI.FortGameplayCinematicHostWidget
/// Size: 0x0038 (0x000328 - 0x000360)
class UFortGameplayCinematicHostWidget : public UFortHUDElementWidget
{ 
public:
	FName                                              IntroWidgetEntryName;                                       // 0x0328   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x032C   (0x0004)  MISSED
	TArray<FCinematicWidgetData>                       WidgetEntries;                                              // 0x0330   (0x0010)  
	class UAthenaLoadingScreenItemDefinition*          LoadingScreenDefinition;                                    // 0x0340   (0x0008)  
	unsigned char                                      UnknownData01_6[0x18];                                      // 0x0348   (0x0018)  MISSED
};

/// Class /Script/SpecialEventGameplayUI.FortGameplayCinematicWidget
/// Size: 0x0020 (0x000400 - 0x000420)
class UFortGameplayCinematicWidget : public UCommonActivatableWidget
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0400   (0x0008)  MISSED
	bool                                               bSkipCinematics;                                            // 0x0408   (0x0001)  
	unsigned char                                      UnknownData01_6[0x17];                                      // 0x0409   (0x0017)  MISSED


	/// Functions
	// Function /Script/SpecialEventGameplayUI.FortGameplayCinematicWidget.OnStartCinematic
	// void OnStartCinematic();                                                                                              // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/SpecialEventGameplayUI.FortGameplayCinematicWidget.OnCinematicFinished
	// void OnCinematicFinished();                                                                                           // [0xaaed080] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/SpecialEventGameplayUI.FortGameplayIntroPanelWidget
/// Size: 0x0020 (0x000400 - 0x000420)
class UFortGameplayIntroPanelWidget : public UCommonActivatableWidget
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0400   (0x0020)  MISSED


	/// Functions
	// Function /Script/SpecialEventGameplayUI.FortGameplayIntroPanelWidget.OnWaitingForReadyForGameplay
	// void OnWaitingForReadyForGameplay();                                                                                  // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/SpecialEventGameplayUI.FortGameplayIntroPanelWidget.OnWaitingForPawn
	// void OnWaitingForPawn();                                                                                              // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/SpecialEventGameplayUI.FortGameplayIntroPanelWidget.OnWaitingForMinTime
	// void OnWaitingForMinTime();                                                                                           // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/SpecialEventGameplayUI.FortGameplayIntroPanelWidget.OnStartIntro
	// void OnStartIntro();                                                                                                  // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/SpecialEventGameplayUI.FortGameplayIntroPanelWidget.OnIntroFinished
	// void OnIntroFinished();                                                                                               // [0xaaed504] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/SpecialEventGameplayUI.SpecialEventCursorWidget
/// Size: 0x0020 (0x0002C0 - 0x0002E0)
class USpecialEventCursorWidget : public UUserWidget
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x02C0   (0x0008)  MISSED
	bool                                               bAutomaticallyChangeVisibility;                             // 0x02C8   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x02C9   (0x0007)  MISSED
	class USpecialEventCursorPawnComponent*            CursorPawnComponent;                                        // 0x02D0   (0x0008)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x02D8   (0x0008)  MISSED


	/// Functions
	// Function /Script/SpecialEventGameplayUI.SpecialEventCursorWidget.OnViewportLocationChanged
	// void OnViewportLocationChanged(class USpecialEventCursorPawnComponent* InCursorPawnComponent, FVector2D& NormalizedLocation, FVector2D& ViewportLocation); // [0xaaed518] Native|Event|Protected|HasOutParms|HasDefaults|BlueprintEvent 
	// Function /Script/SpecialEventGameplayUI.SpecialEventCursorWidget.OnDesiredVisibilityChanged
	// void OnDesiredVisibilityChanged(class USpecialEventCursorPawnComponent* InCursorPawnComponent, FGameplayTag& CursorModeTag, bool bShouldBeVisible); // [0xaaed2c4] Final|Native|Private|HasOutParms 
	// Function /Script/SpecialEventGameplayUI.SpecialEventCursorWidget.OnCursorModeChanged
	// void OnCursorModeChanged(class USpecialEventCursorPawnComponent* InCursorPawnComponent, FGameplayTag& NewCursorModeTag, FGameplayTag& OldCursorModeTag); // [0xaaed094] Final|Native|Private|HasOutParms 
	// Function /Script/SpecialEventGameplayUI.SpecialEventCursorWidget.GetCursorModeTags
	// FGameplayTagContainer GetCursorModeTags();                                                                            // [0xaaecd68] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SpecialEventGameplayUI.SpecialEventCursorWidget.BP_OnDesiredVisibilityChanged
	// void BP_OnDesiredVisibilityChanged(class USpecialEventCursorPawnComponent* InCursorPawnComponent, FGameplayTag& CursorModeTag, bool bShouldBeVisible); // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/SpecialEventGameplayUI.SpecialEventCursorWidget.BP_OnCursorModeChanged
	// void BP_OnCursorModeChanged(class USpecialEventCursorPawnComponent* InCursorPawnComponent, FGameplayTag& NewCursorModeTag, FGameplayTag& OldCursorModeTag); // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
};

/// Class /Script/SpecialEventGameplayUI.SpecialEventPlayerInfoWidget
/// Size: 0x0020 (0x000328 - 0x000348)
class USpecialEventPlayerInfoWidget : public UFortHUDElementWidget
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0328   (0x0008)  MISSED
	SDK_UNDEFINED(16,15631) /* FMulticastInlineDelegate */ __um(OnRepresentedPlayerStateChanged);                  // 0x0330   (0x0010)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0340   (0x0008)  MISSED


	/// Functions
	// Function /Script/SpecialEventGameplayUI.SpecialEventPlayerInfoWidget.GetRepresentedPlayerState
	// class AFortPlayerStateAthena* GetRepresentedPlayerState();                                                            // [0xaaecda4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SpecialEventGameplayUI.SpecialEventUILibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class USpecialEventUILibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/SpecialEventGameplayUI.SpecialEventUILibrary.HideFrontEndStateWidget
	// void HideFrontEndStateWidget(class UObject* WorldContextObject, bool bNewlyHidden);                                   // [0xaaecdcc] Final|Native|Static|Public|BlueprintCallable 
};

