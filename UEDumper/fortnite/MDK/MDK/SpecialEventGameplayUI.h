
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CommonUI
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: FortniteUI
/// dependency: SpecialEventGameplayRuntime
/// dependency: UMG

/// Class /Script/SpecialEventGameplayUI.FortGameplayCinematicHostWidget
/// Size: 0x0038 (0x000328 - 0x000360)
class UFortGameplayCinematicHostWidget : public UFortHUDElementWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 864;

public:
	SMember(FName)                                     IntroWidgetEntryName                                        OFFSET(getStruct<T>, {0x328, 4, 0, 0})
	CMember(TArray<FCinematicWidgetData>)              WidgetEntries                                               OFFSET(get<T>, {0x330, 16, 0, 0})
	CMember(class UAthenaLoadingScreenItemDefinition*) LoadingScreenDefinition                                     OFFSET(get<T>, {0x340, 8, 0, 0})
};

/// Class /Script/SpecialEventGameplayUI.FortGameplayCinematicWidget
/// Size: 0x0020 (0x000400 - 0x000420)
class UFortGameplayCinematicWidget : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1056;

public:
	DMember(bool)                                      bSkipCinematics                                             OFFSET(get<bool>, {0x408, 1, 0, 0})


	/// Functions
	// Function /Script/SpecialEventGameplayUI.FortGameplayCinematicWidget.OnStartCinematic
	// void OnStartCinematic();                                                                                                 // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/SpecialEventGameplayUI.FortGameplayCinematicWidget.OnCinematicFinished
	// void OnCinematicFinished();                                                                                              // [0xaaed080] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/SpecialEventGameplayUI.FortGameplayIntroPanelWidget
/// Size: 0x0020 (0x000400 - 0x000420)
class UFortGameplayIntroPanelWidget : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1056;

public:


	/// Functions
	// Function /Script/SpecialEventGameplayUI.FortGameplayIntroPanelWidget.OnWaitingForReadyForGameplay
	// void OnWaitingForReadyForGameplay();                                                                                     // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/SpecialEventGameplayUI.FortGameplayIntroPanelWidget.OnWaitingForPawn
	// void OnWaitingForPawn();                                                                                                 // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/SpecialEventGameplayUI.FortGameplayIntroPanelWidget.OnWaitingForMinTime
	// void OnWaitingForMinTime();                                                                                              // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/SpecialEventGameplayUI.FortGameplayIntroPanelWidget.OnStartIntro
	// void OnStartIntro();                                                                                                     // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/SpecialEventGameplayUI.FortGameplayIntroPanelWidget.OnIntroFinished
	// void OnIntroFinished();                                                                                                  // [0xaaed504] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/SpecialEventGameplayUI.SpecialEventCursorWidget
/// Size: 0x0020 (0x0002C0 - 0x0002E0)
class USpecialEventCursorWidget : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 736;

public:
	DMember(bool)                                      bAutomaticallyChangeVisibility                              OFFSET(get<bool>, {0x2C8, 1, 0, 0})
	CMember(class USpecialEventCursorPawnComponent*)   CursorPawnComponent                                         OFFSET(get<T>, {0x2D0, 8, 0, 0})


	/// Functions
	// Function /Script/SpecialEventGameplayUI.SpecialEventCursorWidget.OnViewportLocationChanged
	// void OnViewportLocationChanged(class USpecialEventCursorPawnComponent* InCursorPawnComponent, FVector2D& NormalizedLocation, FVector2D& ViewportLocation); // [0xaaed518] Native|Event|Protected|HasOutParms|HasDefaults|BlueprintEvent 
	// Function /Script/SpecialEventGameplayUI.SpecialEventCursorWidget.OnDesiredVisibilityChanged
	// void OnDesiredVisibilityChanged(class USpecialEventCursorPawnComponent* InCursorPawnComponent, FGameplayTag& CursorModeTag, bool bShouldBeVisible); // [0xaaed2c4] Final|Native|Private|HasOutParms 
	// Function /Script/SpecialEventGameplayUI.SpecialEventCursorWidget.OnCursorModeChanged
	// void OnCursorModeChanged(class USpecialEventCursorPawnComponent* InCursorPawnComponent, FGameplayTag& NewCursorModeTag, FGameplayTag& OldCursorModeTag); // [0xaaed094] Final|Native|Private|HasOutParms 
	// Function /Script/SpecialEventGameplayUI.SpecialEventCursorWidget.GetCursorModeTags
	// FGameplayTagContainer GetCursorModeTags();                                                                               // [0xaaecd68] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SpecialEventGameplayUI.SpecialEventCursorWidget.BP_OnDesiredVisibilityChanged
	// void BP_OnDesiredVisibilityChanged(class USpecialEventCursorPawnComponent* InCursorPawnComponent, FGameplayTag& CursorModeTag, bool bShouldBeVisible); // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/SpecialEventGameplayUI.SpecialEventCursorWidget.BP_OnCursorModeChanged
	// void BP_OnCursorModeChanged(class USpecialEventCursorPawnComponent* InCursorPawnComponent, FGameplayTag& NewCursorModeTag, FGameplayTag& OldCursorModeTag); // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
};

/// Class /Script/SpecialEventGameplayUI.SpecialEventPlayerInfoWidget
/// Size: 0x0020 (0x000328 - 0x000348)
class USpecialEventPlayerInfoWidget : public UFortHUDElementWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 840;

public:
	SMember(FMulticastInlineDelegate)                  OnRepresentedPlayerStateChanged                             OFFSET(getStruct<T>, {0x330, 16, 0, 0})


	/// Functions
	// Function /Script/SpecialEventGameplayUI.SpecialEventPlayerInfoWidget.GetRepresentedPlayerState
	// class AFortPlayerStateAthena* GetRepresentedPlayerState();                                                               // [0xaaecda4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SpecialEventGameplayUI.SpecialEventUILibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class USpecialEventUILibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/SpecialEventGameplayUI.SpecialEventUILibrary.HideFrontEndStateWidget
	// void HideFrontEndStateWidget(class UObject* WorldContextObject, bool bNewlyHidden);                                      // [0xaaecdcc] Final|Native|Static|Public|BlueprintCallable 
};

/// Struct /Script/SpecialEventGameplayUI.CinematicWidgetData
/// Size: 0x0010 (0x000000 - 0x000010)
class FCinematicWidgetData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FName)                                     WidgetEntryName                                             OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(class UClass*)                             WidgetClass                                                 OFFSET(get<T>, {0x8, 8, 0, 0})
};

