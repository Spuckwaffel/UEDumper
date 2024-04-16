
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: EpicCMSUIFramework
/// dependency: FortniteGame
/// dependency: MediaAssets
/// dependency: Overlay
/// dependency: SlateCore
/// dependency: SubtitlesWidgets
/// dependency: UMG

/// Class /Script/PictureInPictureDescriptors.PictureInPicturePartnerDataAsset
/// Size: 0x00C0 (0x000030 - 0x0000F0)
class UPictureInPicturePartnerDataAsset : public UPrimaryDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	SMember(FString)                                   PartnerName                                                 OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	CMember(class UImage*)                             ClientImage                                                 OFFSET(get<T>, {0x40, 8, 0, 0})
	DMember(int32_t)                                   MediaHeight                                                 OFFSET(get<int32_t>, {0x48, 4, 0, 0})
	DMember(int32_t)                                   MediaWidth                                                  OFFSET(get<int32_t>, {0x4C, 4, 0, 0})
	CMember(class UClass*)                             MetadataOverlayClass                                        OFFSET(get<T>, {0x50, 8, 0, 0})
	CMember(TArray<FPictureInPictureActionConfig>)     Actions                                                     OFFSET(get<T>, {0x58, 16, 0, 0})
	SMember(FPIPVideoPlayerAssetConfig)                AssetConfig                                                 OFFSET(getStruct<T>, {0x68, 136, 0, 0})
};

/// Class /Script/PictureInPictureDescriptors.PictureInPictureActionData
/// Size: 0x0138 (0x000028 - 0x000160)
class UPictureInPictureActionData : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:
	SMember(FString)                                   PartnerName                                                 OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	SMember(FSlateBrush)                               ActionBrush                                                 OFFSET(getStruct<T>, {0x40, 192, 0, 0})
	SMember(FText)                                     ActionText                                                  OFFSET(getStruct<T>, {0x100, 16, 0, 0})
	CMember(PictureInPictureAction)                    ActionType                                                  OFFSET(get<T>, {0x110, 1, 0, 0})
	SMember(FMulticastInlineDelegate)                  ActionEvent                                                 OFFSET(getStruct<T>, {0x118, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  ActionFiredEvent                                            OFFSET(getStruct<T>, {0x128, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  CallbackEvent                                               OFFSET(getStruct<T>, {0x150, 16, 0, 0})


	/// Functions
	// Function /Script/PictureInPictureDescriptors.PictureInPictureActionData.CallEvent
	// void CallEvent();                                                                                                        // [0x1f83abc] Native|Public|BlueprintCallable 
};

/// Class /Script/PictureInPictureDescriptors.PictureInPictureSourceActionData
/// Size: 0x0020 (0x000160 - 0x000180)
class UPictureInPictureSourceActionData : public UPictureInPictureActionData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 384;

public:
	SMember(FString)                                   SourceName                                                  OFFSET(getStruct<T>, {0x160, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  SourceActionEvent                                           OFFSET(getStruct<T>, {0x170, 16, 0, 0})
};

/// Class /Script/PictureInPictureDescriptors.PictureInPictureAnalyticsManager
/// Size: 0x0050 (0x000028 - 0x000078)
class UPictureInPictureAnalyticsManager : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	CMember(TMap<FString, FPictureInPictureAnalyticsPayload>) PartnerAnalytics                                     OFFSET(get<T>, {0x28, 80, 0, 0})
};

/// Struct /Script/PictureInPictureDescriptors.PiPPartnerSource
/// Size: 0x01F0 (0x000000 - 0x0001F0)
class FPiPPartnerSource : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 496;

public:
	CMember(PictureInPictureSourceType)                SourceType                                                  OFFSET(get<T>, {0x48, 1, 0, 0})
	SMember(FString)                                   Name                                                        OFFSET(getStruct<T>, {0x50, 16, 0, 0})
	SMember(FDateTime)                                 StartTime                                                   OFFSET(getStruct<T>, {0x60, 8, 0, 0})
	SMember(FDateTime)                                 EndTime                                                     OFFSET(getStruct<T>, {0x68, 8, 0, 0})
	SMember(FFortMediaEventsStreamAssets)              AssetConfig                                                 OFFSET(getStruct<T>, {0x70, 104, 0, 0})
	SMember(FString)                                   EventIconUrl                                                OFFSET(getStruct<T>, {0xD8, 16, 0, 0})
	CMember(class UEpicCMSImage*)                      CMSImage                                                    OFFSET(get<T>, {0xE8, 8, 0, 0})
	CMember(class UPictureInPictureSourceActionData*)  ActionData                                                  OFFSET(get<T>, {0xF0, 8, 0, 0})
	CMember(TSet<FString>)                             PlatformDenylist                                            OFFSET(get<T>, {0xF8, 80, 0, 0})
	CMember(TSet<FString>)                             GameplayTagDenylist                                         OFFSET(get<T>, {0x148, 80, 0, 0})
	CMember(TSet<FString>)                             GameplayTagAllowlist                                        OFFSET(get<T>, {0x198, 80, 0, 0})
	DMember(bool)                                      bManual                                                     OFFSET(get<bool>, {0x1E8, 1, 0, 0})
};

/// Struct /Script/PictureInPictureDescriptors.PIPVideoPlayerAssetConfig
/// Size: 0x0088 (0x000000 - 0x000088)
class FPIPVideoPlayerAssetConfig : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	CMember(class UMediaTexture*)                      VideoTexture                                                OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class UMediaPlayer*)                       VideoPlayer                                                 OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(class UMaterialInterface*)                 VideoMaterial                                               OFFSET(get<T>, {0x10, 8, 0, 0})
	CMember(class UMaterialInterface*)                 ThumbnailMaterial                                           OFFSET(get<T>, {0x18, 8, 0, 0})
	SMember(FVector2D)                                 LoadingScreenSize                                           OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	SMember(FVector2D)                                 LoadingScreenPosition                                       OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	CMember(class UFortStreamMediaSource*)             MediaSource                                                 OFFSET(get<T>, {0x40, 8, 0, 0})
	CMember(class UMediaSoundComponent*)               SoundComponent                                              OFFSET(get<T>, {0x48, 8, 0, 0})
	CMember(class USoundClass*)                        SoundClass                                                  OFFSET(get<T>, {0x50, 8, 0, 0})
	CMember(class USoundMix*)                          ActiveSoundMix                                              OFFSET(get<T>, {0x58, 8, 0, 0})
	CMember(class USoundSubmixBase*)                   DefaultSubmix                                               OFFSET(get<T>, {0x60, 8, 0, 0})
	CMember(class USoundSubmixBase*)                   LicensedSubmix                                              OFFSET(get<T>, {0x68, 8, 0, 0})
	CMember(class UFortMediaSubtitlesPlayer*)          SubtitlePlayer                                              OFFSET(get<T>, {0x70, 8, 0, 0})
	CMember(class ULocalizedOverlays*)                 SubtitleOverlays                                            OFFSET(get<T>, {0x78, 8, 0, 0})
	CMember(class USubtitleDisplayOptions*)            SubtitleDisplayOptions                                      OFFSET(get<T>, {0x80, 8, 0, 0})
};

/// Struct /Script/PictureInPictureDescriptors.PIPVideoPlayerConfig
/// Size: 0x0048 (0x000000 - 0x000048)
class FPIPVideoPlayerConfig : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FString)                                   MimeType                                                    OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   BlurlVUID                                                   OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	DMember(bool)                                      bLoopEnabled                                                OFFSET(get<bool>, {0x20, 1, 0, 0})
	DMember(bool)                                      bAutoPlay                                                   OFFSET(get<bool>, {0x21, 1, 0, 0})
	SMember(FString)                                   VideoURL                                                    OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	DMember(bool)                                      bShareBlocked                                               OFFSET(get<bool>, {0x38, 1, 0, 0})
	SMember(FDateTime)                                 EventStartTime                                              OFFSET(getStruct<T>, {0x40, 8, 0, 0})
};

/// Struct /Script/PictureInPictureDescriptors.PictureInPictureActionConfig
/// Size: 0x00E0 (0x000000 - 0x0000E0)
class FPictureInPictureActionConfig : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	CMember(PictureInPictureAction)                    ActionType                                                  OFFSET(get<T>, {0x0, 1, 0, 0})
	SMember(FSlateBrush)                               ActionBrush                                                 OFFSET(getStruct<T>, {0x10, 192, 0, 0})
	SMember(FText)                                     ActionText                                                  OFFSET(getStruct<T>, {0xD0, 16, 0, 0})
};

/// Struct /Script/PictureInPictureDescriptors.PictureInPictureAnalyticsPayload
/// Size: 0x0098 (0x000000 - 0x000098)
class FPictureInPictureAnalyticsPayload : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	CMember(TMap<PictureInPictureAction, int32_t>)     PartnerActionTally                                          OFFSET(get<T>, {0x0, 80, 0, 0})
};

/// Enum /Script/PictureInPictureDescriptors.PictureInPictureAction
/// Size: 0x13
enum class PictureInPictureAction : uint8_t
{
	PictureInPictureAction__NEXT                                                     = 0,
	PictureInPictureAction__PREVIOUS                                                 = 1,
	PictureInPictureAction__PLAY                                                     = 2,
	PictureInPictureAction__PAUSE                                                    = 3,
	PictureInPictureAction__PLAYPAUSE                                                = 4,
	PictureInPictureAction__LIKE                                                     = 5,
	PictureInPictureAction__REPORT                                                   = 6,
	PictureInPictureAction__EXIT                                                     = 7,
	PictureInPictureAction__UNLIKE                                                   = 8,
	PictureInPictureAction__TOGGLELIKE                                               = 9,
	PictureInPictureAction__TOGGLEFULLSCREEN                                         = 10,
	PictureInPictureAction__Count                                                    = 11,
	PictureInPictureAction__PictureInPictureAction_MAX                               = 12
};

/// Enum /Script/PictureInPictureDescriptors.PictureInPictureSourceType
/// Size: 0x05
enum class PictureInPictureSourceType : uint8_t
{
	PictureInPictureSourceType__NONE                                                 = 0,
	PictureInPictureSourceType__URL                                                  = 1,
	PictureInPictureSourceType__BLURL                                                = 2,
	PictureInPictureSourceType__EXTERNAL_ASSETS                                      = 3,
	PictureInPictureSourceType__PictureInPictureSourceType_MAX                       = 4
};

