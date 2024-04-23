
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CommonUI
/// dependency: CoreUObject
/// dependency: DynamicUI
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: FortniteUI
/// dependency: ModularGameplay
/// dependency: SparksCoreUI
/// dependency: UMG

/// Class /Script/FMJamUI.JamDynamicUIDirector
/// Size: 0x0000 (0x0002D8 - 0x0002D8)
class AJamDynamicUIDirector : public ASparksDynamicUIDirector
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 728;

public:
};

/// Class /Script/FMJamUI.JamEmoteWheelOverlay
/// Size: 0x0000 (0x000408 - 0x000408)
class UJamEmoteWheelOverlay : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1032;

public:
};

/// Class /Script/FMJamUI.JamHUDBase
/// Size: 0x0020 (0x000460 - 0x000480)
class UJamHUDBase : public UFortNullHUD
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1152;

public:
	CMember(TWeakObjectPtr<UClass*>)                   EmotePickerClass                                            OFFSET(get<T>, {0x460, 32, 0, 0})


	/// Functions
	// Function /Script/FMJamUI.JamHUDBase.HandlePickerOpenRequest
	// void HandlePickerOpenRequest(EFortPickerMode Mode, int32_t InitialOption, bool bIgnoreFirstAccept);                      // [0xb725ec4] Final|Native|Private 
};

/// Class /Script/FMJamUI.JamUIManagerComponent_SongIndicators
/// Size: 0x0090 (0x0000A8 - 0x000138)
class UJamUIManagerComponent_SongIndicators : public UFortControllerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 312;

public:
	CMember(class UClass*)                             JamSongIndicatorClass                                       OFFSET(get<T>, {0xA8, 8, 0, 0})
	SMember(FUserWidgetPool)                           IndicatorPool                                               OFFSET(getStruct<T>, {0xB0, 136, 0, 0})


	/// Functions
	// Function /Script/FMJamUI.JamUIManagerComponent_SongIndicators.RebuildJamSongIndicatorsForPlayspace
	// void RebuildJamSongIndicatorsForPlayspace(class AJamPlayspace* Playspace);                                               // [0xb725fbc] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMJamUI.JamUIManagerComponent_SongIndicators.ClearJamIndicators
	// void ClearJamIndicators();                                                                                               // [0xb725e44] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/FMJamUI.JamSongIndicator
/// Size: 0x0028 (0x0003D8 - 0x000400)
class UJamSongIndicator : public UFortActorIndicatorWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1024;

public:


	/// Functions
	// Function /Script/FMJamUI.JamSongIndicator.OnScreenClampChanged
	// void OnScreenClampChanged(bool bIsClamped);                                                                              // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Script/FMJamUI.JamSongIndicator.OnInitInfo
	// void OnInitInfo(class UCatalogData* Song, EFMJamLoopType Type);                                                          // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Script/FMJamUI.JamSongIndicator.OnDistanceChanged
	// void OnDistanceChanged(int32_t Distance);                                                                                // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Script/FMJamUI.JamSongIndicator.GetIndicatedPlayerStateAthena
	// class AFortPlayerStateAthena* GetIndicatedPlayerStateAthena();                                                           // [0xb725e58] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

