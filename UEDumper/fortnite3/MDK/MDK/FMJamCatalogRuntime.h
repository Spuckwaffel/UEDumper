
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine
/// dependency: FMCoreRuntime
/// dependency: FortniteGame
/// dependency: GameplayTags
/// dependency: ItemizationCoreRuntime
/// dependency: McpProfileSys
/// dependency: ModularGameplay
/// dependency: SparksCMS

/// Class /Script/FMJamCatalogRuntime.FMJamCatalogDeveloperSettings
/// Size: 0x0018 (0x000030 - 0x000048)
class UFMJamCatalogDeveloperSettings : public UDeveloperSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	DMember(bool)                                      bOverrideJamSongLoadout                                     OFFSET(get<bool>, {0x30, 1, 0, 0})
	CMember(TArray<FName>)                             JamSongLoadout                                              OFFSET(get<T>, {0x38, 16, 0, 0})
};

/// Class /Script/FMJamCatalogRuntime.FMJamLoop
/// Size: 0x00F8 (0x000030 - 0x000128)
class UFMJamLoop : public UPrimaryDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
	CMember(TWeakObjectPtr<UMidiFile*>)                MidiFileMajor                                               OFFSET(get<T>, {0x30, 32, 0, 0})
	CMember(TWeakObjectPtr<UMidiFile*>)                MidiFileMinor                                               OFFSET(get<T>, {0x50, 32, 0, 0})
	CMember(TWeakObjectPtr<UFusionPatch*>)             FusionPatchMajor                                            OFFSET(get<T>, {0x70, 32, 0, 0})
	CMember(TWeakObjectPtr<UFusionPatch*>)             FusionPatchMinor                                            OFFSET(get<T>, {0x90, 32, 0, 0})
	DMember(bool)                                      bOverrideDefaultTransposition                               OFFSET(get<bool>, {0xB0, 1, 0, 0})
	CMember(TMap<EMusicKey, int32_t>)                  Transposes                                                  OFFSET(get<T>, {0xB8, 80, 0, 0})
	CMember(TWeakObjectPtr<UFMJamSong*>)               Song                                                        OFFSET(get<T>, {0x108, 32, 0, 0})


	/// Functions
	// Function /Script/FMJamCatalogRuntime.FMJamLoop.HasPitch
	// bool HasPitch();                                                                                                         // [0xb6f5ba4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamCatalogRuntime.FMJamLoop.GetSong
	// class UFMJamSong* GetSong();                                                                                             // [0xb6f5088] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamCatalogRuntime.FMJamLoop.GetSemitoneTranspose
	// int32_t GetSemitoneTranspose(EMusicKey ToKey);                                                                           // [0xb6f4ffc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamCatalogRuntime.FMJamLoop.GetMinorMidi
	// void GetMinorMidi(TWeakObjectPtr<UMidiFile*>& OutMetasoundMidi, TWeakObjectPtr<UFusionPatch*>& OutMetasoundFusion);      // [0xb6f470c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamCatalogRuntime.FMJamLoop.GetMidi
	// void GetMidi(EMusicKeyMode Mode, TWeakObjectPtr<UMidiFile*>& OutMetasoundMidi, TWeakObjectPtr<UFusionPatch*>& OutMetasoundFusion); // [0xb6f45b4] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamCatalogRuntime.FMJamLoop.GetMajorMidi
	// void GetMajorMidi(TWeakObjectPtr<UMidiFile*>& OutMetasoundMidi, TWeakObjectPtr<UFusionPatch*>& OutMetasoundFusion);      // [0xb6f449c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamCatalogRuntime.FMJamLoop.GetLoopType
	// EFMJamLoopType GetLoopType();                                                                                            // [0xb6f4254] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamCatalogRuntime.FMJamLoop.GetKey
	// EMusicKey GetKey();                                                                                                      // [0xb6f4154] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/FMJamCatalogRuntime.FMJamSong
/// Size: 0x00D0 (0x000030 - 0x000100)
class UFMJamSong : public UPrimaryDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	SMember(FName)                                     SongShortName                                               OFFSET(getStruct<T>, {0x30, 4, 0, 0})
	CMember(EJamSongSource)                            SongDataSource                                              OFFSET(get<T>, {0x34, 1, 0, 0})
	CMember(TWeakObjectPtr<UTexture2D*>)               AlbumArt                                                    OFFSET(get<T>, {0x38, 32, 0, 0})
	SMember(FString)                                   UEFNLinkCode                                                OFFSET(getStruct<T>, {0x58, 16, 0, 0})
	SMember(FText)                                     Title                                                       OFFSET(getStruct<T>, {0x70, 16, 0, 0})
	SMember(FText)                                     Artist                                                      OFFSET(getStruct<T>, {0x80, 16, 0, 0})
	DMember(int32_t)                                   Year                                                        OFFSET(get<int32_t>, {0x90, 4, 0, 0})
	SMember(FGameplayTagContainer)                     AdditionalTags                                              OFFSET(getStruct<T>, {0x98, 32, 0, 0})
	CMember(EMusicKey)                                 Key                                                         OFFSET(get<T>, {0xB8, 1, 0, 0})
	CMember(EMusicKeyMode)                             Mode                                                        OFFSET(get<T>, {0xB9, 1, 0, 0})
	DMember(int32_t)                                   Tempo                                                       OFFSET(get<int32_t>, {0xBC, 4, 0, 0})
	CMember(class UFMJamLoop*)                         Lead                                                        OFFSET(get<T>, {0xC0, 8, 0, 0})
	CMember(class UFMJamLoop*)                         Misc                                                        OFFSET(get<T>, {0xC8, 8, 0, 0})
	CMember(class UFMJamLoop*)                         Bass                                                        OFFSET(get<T>, {0xD0, 8, 0, 0})
	CMember(class UFMJamLoop*)                         Beat                                                        OFFSET(get<T>, {0xD8, 8, 0, 0})
	CMember(TWeakObjectPtr<UAnimSequence*>)            LipSyncAnimAsset                                            OFFSET(get<T>, {0xE0, 32, 0, 0})


	/// Functions
	// Function /Script/FMJamCatalogRuntime.FMJamSong.GetYear
	// int32_t GetYear();                                                                                                       // [0xb6f5b80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamCatalogRuntime.FMJamSong.GetTitle
	// FString GetTitle();                                                                                                      // [0xb6f5b40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamCatalogRuntime.FMJamSong.GetTempo
	// int32_t GetTempo();                                                                                                      // [0xb6f5af8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamCatalogRuntime.FMJamSong.GetSongShortName
	// FName GetSongShortName();                                                                                                // [0x67d23e4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamCatalogRuntime.FMJamSong.GetMode
	// EMusicKeyMode GetMode();                                                                                                 // [0xb6f4824] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamCatalogRuntime.FMJamSong.GetLoopTypeForLoop
	// EFMJamLoopType GetLoopTypeForLoop(class UFMJamLoop* Loop);                                                               // [0xb6f4368] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamCatalogRuntime.FMJamSong.GetLoop
	// class UFMJamLoop* GetLoop(EFMJamLoopType LoopType);                                                                      // [0xb6f41c4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamCatalogRuntime.FMJamSong.GetLipSyncAnimAsset
	// TWeakObjectPtr<UAnimSequence*> GetLipSyncAnimAsset();                                                                    // [0xb6f419c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamCatalogRuntime.FMJamSong.GetKey
	// EMusicKey GetKey();                                                                                                      // [0xb6f4178] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamCatalogRuntime.FMJamSong.GetArtist
	// FString GetArtist();                                                                                                     // [0xb6f400c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamCatalogRuntime.FMJamSong.GetAdditionalTags
	// FGameplayTagContainer GetAdditionalTags();                                                                               // [0xb6f3fe4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/FMJamCatalogRuntime.FMJamSongCatalog
/// Size: 0x00B0 (0x0000A0 - 0x000150)
class UFMJamSongCatalog : public UGameStateComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
	CMember(TMap<FName, UFMJamSong*>)                  SongsByShortName                                            OFFSET(get<T>, {0xE8, 80, 0, 0})
	CMember(class USparksSongCatalog*)                 CachedCMSCatalog                                            OFFSET(get<T>, {0x138, 8, 0, 0})
	DMember(int32_t)                                   NumCMSRetries                                               OFFSET(get<int32_t>, {0x140, 4, 0, 0})
	DMember(bool)                                      bHaveSongCatalog                                            OFFSET(get<bool>, {0x144, 1, 0, 0})


	/// Functions
	// Function /Script/FMJamCatalogRuntime.FMJamSongCatalog.TryGetFMJamSongCatalog
	// class UFMJamSongCatalog* TryGetFMJamSongCatalog(class UObject* WorldContextObject);                                      // [0xb6f5d50] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/FMJamCatalogRuntime.FMJamSongCatalog.OnSongCatalogRetrieved
	// void OnSongCatalogRetrieved(bool bSuccess);                                                                              // [0x36a06ec] Final|Native|Private 
	// Function /Script/FMJamCatalogRuntime.FMJamSongCatalog.HaveCMSSongCatalog
	// bool HaveCMSSongCatalog();                                                                                               // [0xb6f5bd4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamCatalogRuntime.FMJamSongCatalog.GetSortedSongList
	// TArray<UFMJamSong*> GetSortedSongList(EFMJamSongCatalogSortMethod SortMethod, EFMJamSongCatalogSortDirection SortDirection, FGameplayTagQuery& TagQuery); // [0xb6f535c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamCatalogRuntime.FMJamSongCatalog.GetSongCatalogEntryByShortName
	// class UCatalogData* GetSongCatalogEntryByShortName(FName ShortName);                                                     // [0xb6f5204] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamCatalogRuntime.FMJamSongCatalog.GetSongByShortName
	// class UFMJamSong* GetSongByShortName(FName ShortName);                                                                   // [0xb6f50ac] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamCatalogRuntime.FMJamSongCatalog.GetRandomSongList
	// TArray<UFMJamSong*> GetRandomSongList(int32_t NumSongs, FGameplayTagQuery& TagQuery);                                    // [0xb6f486c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamCatalogRuntime.FMJamSongCatalog.GetLoopTypeText
	// FText GetLoopTypeText(EFMJamLoopType& LoopType);                                                                         // [0xb6f43f8] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FMJamCatalogRuntime.FMJamSongCatalog.GetLoopTypeByTag
	// EFMJamLoopType GetLoopTypeByTag(FGameplayTag& LoopTag);                                                                  // [0xb6f42a0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FMJamCatalogRuntime.FMJamSongCatalog.GetFMJamSongCatalog
	// class UFMJamSongCatalog* GetFMJamSongCatalog(class UObject* WorldContextObject);                                         // [0xb6f404c] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/FMJamCatalogRuntime.FortJamEmoteItemDefinition
/// Size: 0x0008 (0x000788 - 0x000790)
class UFortJamEmoteItemDefinition : public UAthenaDanceItemDefinition
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1936;

public:
	DMember(uint32_t)                                  SongIndex                                                   OFFSET(get<uint32_t>, {0x788, 4, 0, 0})
	DMember(bool)                                      ReadSongDataFromAllOwnedSongs                               OFFSET(get<bool>, {0x78C, 1, 0, 0})


	/// Functions
	// Function /Script/FMJamCatalogRuntime.FortJamEmoteItemDefinition.IsJamLoopEnabled
	// bool IsJamLoopEnabled(class AFortPlayerController* PlayerController);                                                    // [0xb6f5bec] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamCatalogRuntime.FortJamEmoteItemDefinition.GetJamSongShortNameForPlayer
	// FName GetJamSongShortNameForPlayer(class AFortPlayerState* PlayerState);                                                 // [0xb6f40cc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Enum /Script/FMJamCatalogRuntime.EJamSongDownloadResult
/// Size: 0x04
enum class EJamSongDownloadResult : uint8_t
{
	EJamSongDownloadResult__Failed                                                   = 0,
	EJamSongDownloadResult__Success                                                  = 1,
	EJamSongDownloadResult__SuccessCached                                            = 2,
	EJamSongDownloadResult__EJamSongDownloadResult_MAX                               = 3
};

/// Enum /Script/FMJamCatalogRuntime.EJamSongSource
/// Size: 0x05
enum class EJamSongSource : uint8_t
{
	EJamSongSource__Baked                                                            = 0,
	EJamSongSource__Plugin                                                           = 1,
	EJamSongSource__UEFN                                                             = 2,
	EJamSongSource__Unknown                                                          = 3,
	EJamSongSource__EJamSongSource_MAX                                               = 4
};

/// Enum /Script/FMJamCatalogRuntime.EFMJamSongCatalogSortMethod
/// Size: 0x05
enum class EFMJamSongCatalogSortMethod : uint8_t
{
	EFMJamSongCatalogSortMethod__Artist                                              = 0,
	EFMJamSongCatalogSortMethod__Title                                               = 1,
	EFMJamSongCatalogSortMethod__Year                                                = 2,
	EFMJamSongCatalogSortMethod__Num                                                 = 3,
	EFMJamSongCatalogSortMethod__EFMJamSongCatalogSortMethod_MAX                     = 4
};

/// Enum /Script/FMJamCatalogRuntime.EFMJamSongCatalogSortDirection
/// Size: 0x04
enum class EFMJamSongCatalogSortDirection : uint8_t
{
	EFMJamSongCatalogSortDirection__Ascending                                        = 0,
	EFMJamSongCatalogSortDirection__Descending                                       = 1,
	EFMJamSongCatalogSortDirection__Num                                              = 2,
	EFMJamSongCatalogSortDirection__EFMJamSongCatalogSortDirection_MAX               = 3
};

