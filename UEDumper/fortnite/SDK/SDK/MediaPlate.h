
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: MediaAssets

/// Enum /Script/MediaPlate.EMediaPlateEventState
/// Size: 0x08
enum class EMediaPlateEventState : uint8_t
{
	EMediaPlateEventState__Play                                                      = 0,
	EMediaPlateEventState__Open                                                      = 1,
	EMediaPlateEventState__Close                                                     = 2,
	EMediaPlateEventState__Pause                                                     = 3,
	EMediaPlateEventState__Reverse                                                   = 4,
	EMediaPlateEventState__Forward                                                   = 5,
	EMediaPlateEventState__Rewind                                                    = 6,
	EMediaPlateEventState__MAX                                                       = 7
};

/// Class /Script/MediaPlate.MediaPlate
/// Size: 0x0010 (0x000290 - 0x0002A0)
class AMediaPlate : public AActor
{ 
public:
	class UMediaPlateComponent*                        MediaPlateComponent;                                        // 0x0290   (0x0008)  
	class UStaticMeshComponent*                        StaticMeshComponent;                                        // 0x0298   (0x0008)  
};

/// Class /Script/MediaPlate.MediaPlateAssetUserData
/// Size: 0x0010 (0x000028 - 0x000038)
class UMediaPlateAssetUserData : public UAssetUserData
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0028   (0x0010)  MISSED
};

/// Struct /Script/MediaPlate.MediaTextureResourceSettings
/// Size: 0x0002 (0x000000 - 0x000002)
struct FMediaTextureResourceSettings
{ 
	bool                                               bEnableGenMips;                                             // 0x0000   (0x0001)  
	char                                               CurrentNumMips;                                             // 0x0001   (0x0001)  
};

/// Class /Script/MediaPlate.MediaPlateComponent
/// Size: 0x00D0 (0x0000A0 - 0x000170)
class UMediaPlateComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x00A0   (0x0008)  MISSED
	bool                                               bPlayOnOpen;                                                // 0x00A8   (0x0001)  
	bool                                               bAutoPlay;                                                  // 0x00A9   (0x0001)  
	bool                                               bEnableAudio;                                               // 0x00AA   (0x0001)  
	unsigned char                                      UnknownData01_5[0x1];                                       // 0x00AB   (0x0001)  MISSED
	float                                              StartTime;                                                  // 0x00AC   (0x0004)  
	class UMediaSoundComponent*                        SoundComponent;                                             // 0x00B0   (0x0008)  
	class UStaticMeshComponent*                        StaticMeshComponent;                                        // 0x00B8   (0x0008)  
	TArray<class UStaticMeshComponent*>                Letterboxes;                                                // 0x00C0   (0x0010)  
	class UMediaPlaylist*                              MediaPlaylist;                                              // 0x00D0   (0x0008)  
	int32_t                                            PlaylistIndex;                                              // 0x00D8   (0x0004)  
	FMediaSourceCacheSettings                          CacheSettings;                                              // 0x00DC   (0x0008)  
	bool                                               bIsMediaPlatePlaying;                                       // 0x00E4   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x00E5   (0x0007)  MISSED
	bool                                               bPlayOnlyWhenVisible;                                       // 0x00EC   (0x0001)  
	bool                                               bLoop;                                                      // 0x00ED   (0x0001)  
	EMediaTextureVisibleMipsTiles                      VisibleMipsTilesCalculations;                               // 0x00EE   (0x0001)  
	unsigned char                                      UnknownData03_5[0x1];                                       // 0x00EF   (0x0001)  MISSED
	float                                              MipMapBias;                                                 // 0x00F0   (0x0004)  
	bool                                               bIsAspectRatioAuto;                                         // 0x00F4   (0x0001)  
	bool                                               bEnableMipMapUpscaling;                                     // 0x00F5   (0x0001)  
	unsigned char                                      UnknownData04_5[0x2];                                       // 0x00F6   (0x0002)  MISSED
	int32_t                                            MipLevelToUpscale;                                          // 0x00F8   (0x0004)  
	bool                                               bAdaptivePoleMipUpscaling;                                  // 0x00FC   (0x0001)  
	unsigned char                                      UnknownData05_5[0x3];                                       // 0x00FD   (0x0003)  MISSED
	float                                              LetterboxAspectRatio;                                       // 0x0100   (0x0004)  
	unsigned char                                      UnknownData06_5[0x4];                                       // 0x0104   (0x0004)  MISSED
	FVector2D                                          MeshRange;                                                  // 0x0108   (0x0010)  
	TArray<class UMediaTexture*>                       MediaTextures;                                              // 0x0118   (0x0010)  
	FMediaTextureResourceSettings                      MediaTextureSettings;                                       // 0x0128   (0x0002)  
	unsigned char                                      UnknownData07_5[0x6];                                       // 0x012A   (0x0006)  MISSED
	class UMediaPlayer*                                MediaPlayer;                                                // 0x0130   (0x0008)  
	unsigned char                                      UnknownData08_6[0x38];                                      // 0x0138   (0x0038)  MISSED


	/// Functions
	// Function /Script/MediaPlate.MediaPlateComponent.SetPlayOnlyWhenVisible
	// void SetPlayOnlyWhenVisible(bool bInPlayOnlyWhenVisible);                                                             // [0xbc0bfb4] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaPlate.MediaPlateComponent.SetMeshRange
	// void SetMeshRange(FVector2D InMeshRange);                                                                             // [0xbc0be80] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/MediaPlate.MediaPlateComponent.SetLoop
	// void SetLoop(bool bInLoop);                                                                                           // [0xbc0bdf0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaPlate.MediaPlateComponent.SetLetterboxAspectRatio
	// void SetLetterboxAspectRatio(float AspectRatio);                                                                      // [0xbc0bd70] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaPlate.MediaPlateComponent.SetIsAspectRatioAuto
	// void SetIsAspectRatioAuto(bool bInIsAspectRatioAuto);                                                                 // [0xbc0bce0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaPlate.MediaPlateComponent.Seek
	// bool Seek(FTimespan& Time);                                                                                           // [0xbc0bc48] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MediaPlate.MediaPlateComponent.Rewind
	// bool Rewind();                                                                                                        // [0xbc0bc18] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaPlate.MediaPlateComponent.Play
	// void Play();                                                                                                          // [0xbc0bbe0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaPlate.MediaPlateComponent.Pause
	// void Pause();                                                                                                         // [0xbc0bbac] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaPlate.MediaPlateComponent.Open
	// void Open();                                                                                                          // [0xbc0bb98] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaPlate.MediaPlateComponent.OnMediaOpened
	// void OnMediaOpened(FString DeviceUrl);                                                                                // [0xbc0ba2c] Final|Native|Private 
	// Function /Script/MediaPlate.MediaPlateComponent.OnMediaEnd
	// void OnMediaEnd();                                                                                                    // [0xbc0ba18] Final|Native|Private 
	// Function /Script/MediaPlate.MediaPlateComponent.IsMediaPlatePlaying
	// bool IsMediaPlatePlaying();                                                                                           // [0xa76bac8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaPlate.MediaPlateComponent.GetMeshRange
	// FVector2D GetMeshRange();                                                                                             // [0xbc0b9fc] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaPlate.MediaPlateComponent.GetMediaTexture
	// class UMediaTexture* GetMediaTexture(int32_t Index);                                                                  // [0xbc0b970] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaPlate.MediaPlateComponent.GetMediaPlayer
	// class UMediaPlayer* GetMediaPlayer();                                                                                 // [0x6473eb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaPlate.MediaPlateComponent.GetLoop
	// bool GetLoop();                                                                                                       // [0xbc0b958] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MediaPlate.MediaPlateComponent.GetLetterboxAspectRatio
	// float GetLetterboxAspectRatio();                                                                                      // [0x6581bbc] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaPlate.MediaPlateComponent.GetIsAspectRatioAuto
	// bool GetIsAspectRatioAuto();                                                                                          // [0x8b51f70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaPlate.MediaPlateComponent.Close
	// void Close();                                                                                                         // [0xbc0b944] Final|Native|Public|BlueprintCallable 
};

