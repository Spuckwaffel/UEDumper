
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: HarmonixDsp

/// Struct /Script/RubberBandPitchShifter.PlatformStretcherCounts
/// Size: 0x0018 (0x000000 - 0x000018)
struct FPlatformStretcherCounts
{ 
	uint32_t                                           NumProStretchers;                                           // 0x0000   (0x0004)  
	uint32_t                                           NumEffStretchers;                                           // 0x0004   (0x0004)  
	uint32_t                                           NumEffWithSpectralStretchers;                               // 0x0008   (0x0004)  
	uint32_t                                           NumMobileStretchers;                                        // 0x000C   (0x0004)  
	uint32_t                                           NumMobileWithSpectralStretchers;                            // 0x0010   (0x0004)  
	bool                                               bForceMonoProcessing;                                       // 0x0014   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0015   (0x0003)  MISSED
};

/// Class /Script/RubberBandPitchShifter.RubberBandPitchShifterConfig
/// Size: 0x00A8 (0x000028 - 0x0000D0)
class URubberBandPitchShifterConfig : public UStretcherAndPitchShifterConfig
{ 
public:
	FPlatformStretcherCounts                           DefaultStretcherCounts;                                     // 0x0028   (0x0018)  
	FPlatformStretcherCounts                           SwitchStretcherCounts;                                      // 0x0040   (0x0018)  
	FPlatformStretcherCounts                           PS4StretcherCounts;                                         // 0x0058   (0x0018)  
	FPlatformStretcherCounts                           PS5StretcherCounts;                                         // 0x0070   (0x0018)  
	FPlatformStretcherCounts                           XboxOneStretcherCounts;                                     // 0x0088   (0x0018)  
	FPlatformStretcherCounts                           XSXStretcherCounts;                                         // 0x00A0   (0x0018)  
	FPlatformStretcherCounts                           AndroidStretcherCounts;                                     // 0x00B8   (0x0018)  
};

