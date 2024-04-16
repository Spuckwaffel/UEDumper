
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/BeatSyncedAnimMetaData.BeatSyncedAnimMetaData
/// Size: 0x0008 (0x000028 - 0x000030)
class UBeatSyncedAnimMetaData : public UAnimMetaData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(bool)                                      bAllowBeatsyncing                                           OFFSET(get<bool>, {0x28, 1, 0, 0})
	DMember(bool)                                      bIsForEmote                                                 OFFSET(get<bool>, {0x29, 1, 0, 0})
};

/// Class /Script/BeatSyncedAnimMetaData.PreciseBeatSyncedAnimMetaData
/// Size: 0x0018 (0x000030 - 0x000048)
class UPreciseBeatSyncedAnimMetaData : public UBeatSyncedAnimMetaData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	DMember(float)                                     FirstBeatAtFrame                                            OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(float)                                     BeatB                                                       OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(bool)                                      bShouldHalfOrDoublePlayRate                                 OFFSET(get<bool>, {0x38, 1, 0, 0})
	DMember(float)                                     MaxPlayRateBeforeHalf                                       OFFSET(get<float>, {0x3C, 4, 0, 0})
	DMember(float)                                     MinPlayRateBeforeDouble                                     OFFSET(get<float>, {0x40, 4, 0, 0})
};

/// Class /Script/BeatSyncedAnimMetaData.TimeSyncedBeatSyncedAnimMetaData
/// Size: 0x0008 (0x000030 - 0x000038)
class UTimeSyncedBeatSyncedAnimMetaData : public UBeatSyncedAnimMetaData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(float)                                     AnimTimeZeroOffsetSeconds                                   OFFSET(get<float>, {0x30, 4, 0, 0})
};

