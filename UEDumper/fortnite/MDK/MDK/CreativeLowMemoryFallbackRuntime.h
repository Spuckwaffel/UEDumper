
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine

/// Class /Script/CreativeLowMemoryFallbackRuntime.CreativeLowMemoryFallbackSettings
/// Size: 0x0108 (0x000030 - 0x000138)
class UCreativeLowMemoryFallbackSettings : public UDeveloperSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 312;

public:
	CMember(TWeakObjectPtr<UObject*>)                  WarningToastIcon                                            OFFSET(get<T>, {0x30, 32, 0, 0})
	SMember(FCreativeLowMemoryFallbackUserFacingText)  DefaultText                                                 OFFSET(getStruct<T>, {0x50, 72, 0, 0})
	CMember(TMap<TWeakObjectPtr<UFortPlaylist*>, FCreativeLowMemoryFallbackFreeMemoryThresholds>) PlaylistOverrideThresholds OFFSET(get<T>, {0x98, 80, 0, 0})
	CMember(TMap<TWeakObjectPtr<UFortPlaylist*>, FCreativeLowMemoryFallbackUserFacingText>) PlaylistOverrideText   OFFSET(get<T>, {0xE8, 80, 0, 0})
};

/// Class /Script/CreativeLowMemoryFallbackRuntime.CreativeLowMemoryFallbackWorldSubsystem
/// Size: 0x0038 (0x000030 - 0x000068)
class UCreativeLowMemoryFallbackWorldSubsystem : public UWorldSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FCreativeLowMemoryFallbackFreeMemoryThresholds) CurrentThresholds                                      OFFSET(getStruct<T>, {0x30, 12, 0, 0})


	/// Functions
	// Function /Script/CreativeLowMemoryFallbackRuntime.CreativeLowMemoryFallbackWorldSubsystem.OnPlaylistDataChanged
	// void OnPlaylistDataChanged(class AFortGameStateAthena* GameState, class UFortPlaylist* Playlist, FGameplayTagContainer& PlaylistContextTags); // [0xc1ad124] Final|Native|Private|HasOutParms 
};

/// Struct /Script/CreativeLowMemoryFallbackRuntime.CreativeLowMemoryFallbackUserFacingText
/// Size: 0x0048 (0x000000 - 0x000048)
class FCreativeLowMemoryFallbackUserFacingText : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FText)                                     ExitToMainMenuReasonText                                    OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FText)                                     WarningToastTitle                                           OFFSET(getStruct<T>, {0x18, 24, 0, 0})
	SMember(FText)                                     WarningToastDescription                                     OFFSET(getStruct<T>, {0x30, 24, 0, 0})
};

/// Struct /Script/CreativeLowMemoryFallbackRuntime.CreativeLowMemoryFallbackFreeMemoryThresholds
/// Size: 0x000C (0x000000 - 0x00000C)
class FCreativeLowMemoryFallbackFreeMemoryThresholds : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(float)                                     FallbackMB                                                  OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     WarningMB                                                   OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     RecoveryMB                                                  OFFSET(get<float>, {0x8, 4, 0, 0})
};

