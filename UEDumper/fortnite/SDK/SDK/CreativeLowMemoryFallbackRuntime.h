
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine

/// Struct /Script/CreativeLowMemoryFallbackRuntime.CreativeLowMemoryFallbackUserFacingText
/// Size: 0x0048 (0x000000 - 0x000048)
struct FCreativeLowMemoryFallbackUserFacingText
{ 
	SDK_UNDEFINED(24,12711) /* FText */                __um(ExitToMainMenuReasonText);                             // 0x0000   (0x0018)  
	SDK_UNDEFINED(24,12712) /* FText */                __um(WarningToastTitle);                                    // 0x0018   (0x0018)  
	SDK_UNDEFINED(24,12713) /* FText */                __um(WarningToastDescription);                              // 0x0030   (0x0018)  
};

/// Class /Script/CreativeLowMemoryFallbackRuntime.CreativeLowMemoryFallbackSettings
/// Size: 0x0108 (0x000030 - 0x000138)
class UCreativeLowMemoryFallbackSettings : public UDeveloperSettings
{ 
public:
	SDK_UNDEFINED(32,12714) /* TWeakObjectPtr<UObject*> */ __um(WarningToastIcon);                                 // 0x0030   (0x0020)  
	FCreativeLowMemoryFallbackUserFacingText           DefaultText;                                                // 0x0050   (0x0048)  
	SDK_UNDEFINED(80,12715) /* TMap<TWeakObjectPtr<UFortPlaylist*>, FCreativeLowMemoryFallbackFreeMemoryThresholds> */ __um(PlaylistOverrideThresholds); // 0x0098   (0x0050)  
	SDK_UNDEFINED(80,12716) /* TMap<TWeakObjectPtr<UFortPlaylist*>, FCreativeLowMemoryFallbackUserFacingText> */ __um(PlaylistOverrideText); // 0x00E8   (0x0050)  
};

/// Struct /Script/CreativeLowMemoryFallbackRuntime.CreativeLowMemoryFallbackFreeMemoryThresholds
/// Size: 0x000C (0x000000 - 0x00000C)
struct FCreativeLowMemoryFallbackFreeMemoryThresholds
{ 
	float                                              FallbackMB;                                                 // 0x0000   (0x0004)  
	float                                              WarningMB;                                                  // 0x0004   (0x0004)  
	float                                              RecoveryMB;                                                 // 0x0008   (0x0004)  
};

/// Class /Script/CreativeLowMemoryFallbackRuntime.CreativeLowMemoryFallbackWorldSubsystem
/// Size: 0x0038 (0x000030 - 0x000068)
class UCreativeLowMemoryFallbackWorldSubsystem : public UWorldSubsystem
{ 
public:
	FCreativeLowMemoryFallbackFreeMemoryThresholds     CurrentThresholds;                                          // 0x0030   (0x000C)  
	unsigned char                                      UnknownData00_6[0x2C];                                      // 0x003C   (0x002C)  MISSED


	/// Functions
	// Function /Script/CreativeLowMemoryFallbackRuntime.CreativeLowMemoryFallbackWorldSubsystem.OnPlaylistDataChanged
	// void OnPlaylistDataChanged(class AFortGameStateAthena* GameState, class UFortPlaylist* Playlist, FGameplayTagContainer& PlaylistContextTags); // [0xaca24d0] Final|Native|Private|HasOutParms 
};

