
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject

/// Enum /Script/MoviePlayer.EMoviePlaybackType
/// Size: 0x04
enum class EMoviePlaybackType : uint8_t
{
	MT_Normal                                                                        = 0,
	MT_Looped                                                                        = 1,
	MT_LoadingLoop                                                                   = 2,
	MT_MAX                                                                           = 3
};

/// Class /Script/MoviePlayer.MoviePlayerSettings
/// Size: 0x0018 (0x000028 - 0x000040)
class UMoviePlayerSettings : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	bool                                               bWaitForMoviesToComplete;                                   // 0x0028   (0x0001)  
	bool                                               bMoviesAreSkippable;                                        // 0x0029   (0x0001)  
	unsigned char                                      UnknownData01_5[0x6];                                       // 0x002A   (0x0006)  MISSED
	SDK_UNDEFINED(16,15079) /* TArray<FString> */      __um(StartupMovies);                                        // 0x0030   (0x0010)  
};

