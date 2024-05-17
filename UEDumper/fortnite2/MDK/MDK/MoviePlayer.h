
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject

/// Class /Script/MoviePlayer.MoviePlayerSettings
/// Size: 0x0018 (0x000028 - 0x000040)
class UMoviePlayerSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(bool)                                      bWaitForMoviesToComplete                                    OFFSET(get<bool>, {0x28, 1, 0, 0})
	DMember(bool)                                      bMoviesAreSkippable                                         OFFSET(get<bool>, {0x29, 1, 0, 0})
	CMember(TArray<FString>)                           StartupMovies                                               OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Enum /Script/MoviePlayer.EMoviePlaybackType
/// Size: 0x03
enum class EMoviePlaybackType : uint8_t
{
	MT_Normal                                                                        = 0,
	MT_Looped                                                                        = 1,
	MT_LoadingLoop                                                                   = 2
};

