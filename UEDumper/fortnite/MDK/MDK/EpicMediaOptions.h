
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType

/// Struct /Script/EpicMediaOptions.EpicMediaOptions
/// Size: 0x0110 (0x000000 - 0x000110)
class FEpicMediaOptions : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
	DMember(int32_t)                                   FrameRate                                                   OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   MaxResolutionForMediaStreaming                              OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   MaxElectraVerticalResolutionOf60fpsVideos                   OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	DMember(int32_t)                                   MaxElectraVerticalResolutionOfWindowsSWD                    OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	DMember(bool)                                      bElectraLiveUseConservativePresentationOffset               OFFSET(get<bool>, {0x14, 1, 0, 0})
	DMember(bool)                                      bElectraUseDedicatedMediaSegmentDownloadThreads             OFFSET(get<bool>, {0x15, 1, 0, 0})
	DMember(double)                                    ElectraLivePresentationOffset                               OFFSET(get<double>, {0x18, 8, 0, 0})
	DMember(double)                                    ElectraLiveAudioPresentationOffset                          OFFSET(get<double>, {0x20, 8, 0, 0})
	DMember(bool)                                      bDisableBlastURLStreamSource                                OFFSET(get<bool>, {0x28, 1, 0, 0})
	DMember(bool)                                      bIsCN                                                       OFFSET(get<bool>, {0x29, 1, 0, 0})
	CMember(TArray<FString>)                           VideoEVMap                                                  OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TArray<float>)                             CDNDistribution                                             OFFSET(get<T>, {0x40, 16, 0, 0})
	CMember(TArray<FString>)                           VODHostNames                                                OFFSET(get<T>, {0x50, 16, 0, 0})
	CMember(TArray<FString>)                           VODHostNamesCN                                              OFFSET(get<T>, {0x60, 16, 0, 0})
	CMember(TArray<FString>)                           LiveHostNames                                               OFFSET(get<T>, {0x70, 16, 0, 0})
	CMember(TArray<FString>)                           LiveHostNamesCN                                             OFFSET(get<T>, {0x80, 16, 0, 0})
	CMember(TArray<FString>)                           VODHostNamesDev                                             OFFSET(get<T>, {0x90, 16, 0, 0})
	CMember(TArray<FString>)                           LiveHostNamesDev                                            OFFSET(get<T>, {0xA0, 16, 0, 0})
	CMember(TArray<FString>)                           VODHostNamesHF                                              OFFSET(get<T>, {0xB0, 16, 0, 0})
	CMember(TArray<FString>)                           LiveHostNamesHF                                             OFFSET(get<T>, {0xC0, 16, 0, 0})
	CMember(TArray<FString>)                           VODHostNamesCNHF                                            OFFSET(get<T>, {0xD0, 16, 0, 0})
	CMember(TArray<FString>)                           LiveHostNamesCNHF                                           OFFSET(get<T>, {0xE0, 16, 0, 0})
	DMember(bool)                                      bUseQuicksilverEntryPoint                                   OFFSET(get<bool>, {0xF0, 1, 0, 0})
	DMember(bool)                                      bUseSegmentCaching                                          OFFSET(get<bool>, {0x108, 1, 0, 0})
	DMember(bool)                                      bForceSegmentCaching                                        OFFSET(get<bool>, {0x109, 1, 0, 0})
	DMember(float)                                     MetadataRequestTimeout                                      OFFSET(get<float>, {0x10C, 4, 0, 0})
};

