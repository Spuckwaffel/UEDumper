
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: HarmonixDsp

/// Class /Script/RubberBandPitchShifter.RubberBandPitchShifterConfig
/// Size: 0x00A8 (0x000028 - 0x0000D0)
class URubberBandPitchShifterConfig : public UStretcherAndPitchShifterConfig
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	SMember(FPlatformStretcherCounts)                  DefaultStretcherCounts                                      OFFSET(getStruct<T>, {0x28, 24, 0, 0})
	SMember(FPlatformStretcherCounts)                  SwitchStretcherCounts                                       OFFSET(getStruct<T>, {0x40, 24, 0, 0})
	SMember(FPlatformStretcherCounts)                  PS4StretcherCounts                                          OFFSET(getStruct<T>, {0x58, 24, 0, 0})
	SMember(FPlatformStretcherCounts)                  PS5StretcherCounts                                          OFFSET(getStruct<T>, {0x70, 24, 0, 0})
	SMember(FPlatformStretcherCounts)                  XboxOneStretcherCounts                                      OFFSET(getStruct<T>, {0x88, 24, 0, 0})
	SMember(FPlatformStretcherCounts)                  XSXStretcherCounts                                          OFFSET(getStruct<T>, {0xA0, 24, 0, 0})
	SMember(FPlatformStretcherCounts)                  AndroidStretcherCounts                                      OFFSET(getStruct<T>, {0xB8, 24, 0, 0})
};

/// Struct /Script/RubberBandPitchShifter.PlatformStretcherCounts
/// Size: 0x0018 (0x000000 - 0x000018)
class FPlatformStretcherCounts : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(uint32_t)                                  NumProStretchers                                            OFFSET(get<uint32_t>, {0x0, 4, 0, 0})
	DMember(uint32_t)                                  NumEffStretchers                                            OFFSET(get<uint32_t>, {0x4, 4, 0, 0})
	DMember(uint32_t)                                  NumEffWithSpectralStretchers                                OFFSET(get<uint32_t>, {0x8, 4, 0, 0})
	DMember(uint32_t)                                  NumMobileStretchers                                         OFFSET(get<uint32_t>, {0xC, 4, 0, 0})
	DMember(uint32_t)                                  NumMobileWithSpectralStretchers                             OFFSET(get<uint32_t>, {0x10, 4, 0, 0})
	DMember(bool)                                      bForceMonoProcessing                                        OFFSET(get<bool>, {0x14, 1, 0, 0})
};

