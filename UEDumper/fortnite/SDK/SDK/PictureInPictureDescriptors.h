
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
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

/// Struct /Script/PictureInPictureDescriptors.PictureInPictureActionConfig
/// Size: 0x00F0 (0x000000 - 0x0000F0)
struct FPictureInPictureActionConfig
{ 
	PictureInPictureAction                             ActionType;                                                 // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0xF];                                       // 0x0001   (0x000F)  MISSED
	FSlateBrush                                        ActionBrush;                                                // 0x0010   (0x00C0)  
	SDK_UNDEFINED(24,15139) /* FText */                __um(ActionText);                                           // 0x00D0   (0x0018)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x00E8   (0x0008)  MISSED
};

/// Struct /Script/PictureInPictureDescriptors.PIPVideoPlayerAssetConfig
/// Size: 0x0088 (0x000000 - 0x000088)
struct FPIPVideoPlayerAssetConfig
{ 
	class UMediaTexture*                               VideoTexture;                                               // 0x0000   (0x0008)  
	class UMediaPlayer*                                VideoPlayer;                                                // 0x0008   (0x0008)  
	class UMaterialInterface*                          VideoMaterial;                                              // 0x0010   (0x0008)  
	class UMaterialInterface*                          ThumbnailMaterial;                                          // 0x0018   (0x0008)  
	FVector2D                                          LoadingScreenSize;                                          // 0x0020   (0x0010)  
	FVector2D                                          LoadingScreenPosition;                                      // 0x0030   (0x0010)  
	class UFortStreamMediaSource*                      MediaSource;                                                // 0x0040   (0x0008)  
	class UMediaSoundComponent*                        SoundComponent;                                             // 0x0048   (0x0008)  
	class USoundClass*                                 SoundClass;                                                 // 0x0050   (0x0008)  
	class USoundMix*                                   ActiveSoundMix;                                             // 0x0058   (0x0008)  
	class USoundSubmixBase*                            DefaultSubmix;                                              // 0x0060   (0x0008)  
	class USoundSubmixBase*                            LicensedSubmix;                                             // 0x0068   (0x0008)  
	class UFortMediaSubtitlesPlayer*                   SubtitlePlayer;                                             // 0x0070   (0x0008)  
	class ULocalizedOverlays*                          SubtitleOverlays;                                           // 0x0078   (0x0008)  
	class USubtitleDisplayOptions*                     SubtitleDisplayOptions;                                     // 0x0080   (0x0008)  
};

/// Class /Script/PictureInPictureDescriptors.PictureInPicturePartnerDataAsset
/// Size: 0x00C0 (0x000030 - 0x0000F0)
class UPictureInPicturePartnerDataAsset : public UPrimaryDataAsset
{ 
public:
	SDK_UNDEFINED(16,15140) /* FString */              __um(PartnerName);                                          // 0x0030   (0x0010)  
	class UImage*                                      ClientImage;                                                // 0x0040   (0x0008)  
	int32_t                                            MediaHeight;                                                // 0x0048   (0x0004)  
	int32_t                                            MediaWidth;                                                 // 0x004C   (0x0004)  
	class UClass*                                      MetadataOverlayClass;                                       // 0x0050   (0x0008)  
	TArray<FPictureInPictureActionConfig>              Actions;                                                    // 0x0058   (0x0010)  
	FPIPVideoPlayerAssetConfig                         AssetConfig;                                                // 0x0068   (0x0088)  
};

/// Class /Script/PictureInPictureDescriptors.PictureInPictureActionData
/// Size: 0x0148 (0x000028 - 0x000170)
#pragma pack(push, 0x1)
class alignas(0x10) UPictureInPictureActionData : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	SDK_UNDEFINED(16,15141) /* FString */              __um(PartnerName);                                          // 0x0028   (0x0010)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0038   (0x0008)  MISSED
	FSlateBrush                                        ActionBrush;                                                // 0x0040   (0x00C0)  
	SDK_UNDEFINED(24,15142) /* FText */                __um(ActionText);                                           // 0x0100   (0x0018)  
	PictureInPictureAction                             ActionType;                                                 // 0x0118   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x0119   (0x0007)  MISSED
	SDK_UNDEFINED(16,15143) /* FMulticastInlineDelegate */ __um(ActionEvent);                                      // 0x0120   (0x0010)  
	SDK_UNDEFINED(16,15144) /* FMulticastInlineDelegate */ __um(ActionFiredEvent);                                 // 0x0130   (0x0010)  
	unsigned char                                      UnknownData03_5[0x18];                                      // 0x0140   (0x0018)  MISSED
	SDK_UNDEFINED(16,15145) /* FMulticastInlineDelegate */ __um(CallbackEvent);                                    // 0x0158   (0x0010)  


	/// Functions
	// Function /Script/PictureInPictureDescriptors.PictureInPictureActionData.CallEvent
	// void CallEvent();                                                                                                     // [0x15d82c4] Native|Public|BlueprintCallable 
};
#pragma pack(pop)

/// Class /Script/PictureInPictureDescriptors.PictureInPictureSourceActionData
/// Size: 0x0020 (0x000170 - 0x000190)
class UPictureInPictureSourceActionData : public UPictureInPictureActionData
{ 
public:
	SDK_UNDEFINED(16,15146) /* FString */              __um(SourceName);                                           // 0x0168   (0x0010)  
	SDK_UNDEFINED(16,15147) /* FMulticastInlineDelegate */ __um(SourceActionEvent);                                // 0x0178   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0188   (0x0008)  MISSED
};

/// Class /Script/PictureInPictureDescriptors.PictureInPictureAnalyticsManager
/// Size: 0x0050 (0x000028 - 0x000078)
class UPictureInPictureAnalyticsManager : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	SDK_UNDEFINED(80,15148) /* TMap<FString, FPictureInPictureAnalyticsPayload> */ __um(PartnerAnalytics);         // 0x0028   (0x0050)  
};

/// Struct /Script/PictureInPictureDescriptors.PiPPartnerSource
/// Size: 0x01F0 (0x000000 - 0x0001F0)
struct FPiPPartnerSource
{ 
	PictureInPictureSourceType                         SourceType;                                                 // 0x0048   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0049   (0x0007)  MISSED
	SDK_UNDEFINED(16,15149) /* FString */              __um(Name);                                                 // 0x0050   (0x0010)  
	FDateTime                                          StartTime;                                                  // 0x0060   (0x0008)  
	FDateTime                                          EndTime;                                                    // 0x0068   (0x0008)  
	FFortMediaEventsStreamAssets                       AssetConfig;                                                // 0x0070   (0x0068)  
	SDK_UNDEFINED(16,15150) /* FString */              __um(EventIconUrl);                                         // 0x00D8   (0x0010)  
	class UEpicCMSImage*                               CMSImage;                                                   // 0x00E8   (0x0008)  
	class UPictureInPictureSourceActionData*           ActionData;                                                 // 0x00F0   (0x0008)  
	SDK_UNDEFINED(80,15151) /* TSet<FString> */        __um(PlatformDenylist);                                     // 0x00F8   (0x0050)  
	SDK_UNDEFINED(80,15152) /* TSet<FString> */        __um(GameplayTagDenylist);                                  // 0x0148   (0x0050)  
	SDK_UNDEFINED(80,15153) /* TSet<FString> */        __um(GameplayTagAllowlist);                                 // 0x0198   (0x0050)  
	bool                                               bManual;                                                    // 0x01E8   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x01E9   (0x0007)  MISSED
};

/// Struct /Script/PictureInPictureDescriptors.PIPVideoPlayerConfig
/// Size: 0x0048 (0x000000 - 0x000048)
struct FPIPVideoPlayerConfig
{ 
	SDK_UNDEFINED(16,15154) /* FString */              __um(MimeType);                                             // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,15155) /* FString */              __um(BlurlVUID);                                            // 0x0010   (0x0010)  
	bool                                               bLoopEnabled;                                               // 0x0020   (0x0001)  
	bool                                               bAutoPlay;                                                  // 0x0021   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x0022   (0x0006)  MISSED
	SDK_UNDEFINED(16,15156) /* FString */              __um(VideoURL);                                             // 0x0028   (0x0010)  
	bool                                               bShareBlocked;                                              // 0x0038   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0039   (0x0007)  MISSED
	FDateTime                                          EventStartTime;                                             // 0x0040   (0x0008)  
};

/// Struct /Script/PictureInPictureDescriptors.PictureInPictureAnalyticsPayload
/// Size: 0x0098 (0x000000 - 0x000098)
struct FPictureInPictureAnalyticsPayload
{ 
	SDK_UNDEFINED(80,15157) /* TMap<PictureInPictureAction, int32_t> */ __um(PartnerActionTally);                  // 0x0000   (0x0050)  
	unsigned char                                      UnknownData00_6[0x48];                                      // 0x0050   (0x0048)  MISSED
};

