
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/SparksAlbumArtRuntime.SparksAlbumArtData
/// Size: 0x0008 (0x000030 - 0x000038)
class USparksAlbumArtData : public UPrimaryDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(class UDataTable*)                         BakedAlbumArt                                               OFFSET(get<T>, {0x30, 8, 0, 0})
};

/// Class /Script/SparksAlbumArtRuntime.SparksAlbumArtManager
/// Size: 0x0008 (0x000030 - 0x000038)
class USparksAlbumArtManager : public UGameInstanceSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(class USparksAlbumArtData*)                AlbumArtData                                                OFFSET(get<T>, {0x30, 8, 0, 0})


	/// Functions
	// Function /Script/SparksAlbumArtRuntime.SparksAlbumArtManager.RequestAlbumArt
	// bool RequestAlbumArt(FName& SongShortName, FDelegateProperty OnRequestFinished);                                         // [0xb689b94] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/SparksAlbumArtRuntime.SparksBakedAlbumArt
/// Size: 0x0028 (0x000008 - 0x000030)
class FSparksBakedAlbumArt : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FName)                                     SongShortName                                               OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	CMember(TWeakObjectPtr<UTexture2D*>)               AlbumArt                                                    OFFSET(get<T>, {0x10, 32, 0, 0})
};

