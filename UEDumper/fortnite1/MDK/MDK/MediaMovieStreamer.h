
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: MediaAssets

/// Class /Script/MediaMovieStreamer.MediaMovieAssets
/// Size: 0x0028 (0x000028 - 0x000050)
class UMediaMovieAssets : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(class UMediaPlayer*)                       MediaPlayer                                                 OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(class UMediaSoundComponent*)               MediaSoundComponent                                         OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(class UMediaSource*)                       MediaSource                                                 OFFSET(get<T>, {0x38, 8, 0, 0})
	CMember(class UMediaTexture*)                      MediaTexture                                                OFFSET(get<T>, {0x40, 8, 0, 0})


	/// Functions
	// Function /Script/MediaMovieStreamer.MediaMovieAssets.OnMediaEnd
	// void OnMediaEnd();                                                                                                       // [0x83f9db8] Final|Native|Private 
};

