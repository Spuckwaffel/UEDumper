
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/BeatSyncedAnimMetaData.BeatSyncedAnimMetaData
/// Size: 0x0008 (0x000028 - 0x000030)
class UBeatSyncedAnimMetaData : public UAnimMetaData
{ 
public:
	bool                                               bAllowBeatsyncing;                                          // 0x0028   (0x0001)  
	bool                                               bIsForEmote;                                                // 0x0029   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x002A   (0x0006)  MISSED
};

/// Class /Script/BeatSyncedAnimMetaData.PreciseBeatSyncedAnimMetaData
/// Size: 0x0018 (0x000030 - 0x000048)
class UPreciseBeatSyncedAnimMetaData : public UBeatSyncedAnimMetaData
{ 
public:
	float                                              FirstBeatAtFrame;                                           // 0x0030   (0x0004)  
	float                                              BeatB;                                                      // 0x0034   (0x0004)  
	bool                                               bShouldHalfOrDoublePlayRate;                                // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0039   (0x0003)  MISSED
	float                                              MaxPlayRateBeforeHalf;                                      // 0x003C   (0x0004)  
	float                                              MinPlayRateBeforeDouble;                                    // 0x0040   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0044   (0x0004)  MISSED
};

/// Class /Script/BeatSyncedAnimMetaData.TimeSyncedBeatSyncedAnimMetaData
/// Size: 0x0008 (0x000030 - 0x000038)
class UTimeSyncedBeatSyncedAnimMetaData : public UBeatSyncedAnimMetaData
{ 
public:
	float                                              AnimTimeZeroOffsetSeconds;                                  // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0034   (0x0004)  MISSED
};

