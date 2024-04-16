
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: LevelSequence

/// Class /Script/CRD_VideoSchedule.VideoScheduleDeviceBase
/// Size: 0x0108 (0x000BC8 - 0x000CD0)
class AVideoScheduleDeviceBase : public ABuildingProp
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3280;

public:
	CMember(EVideoScheduleDeviceRepeat)                RepeatSchedule                                              OFFSET(get<T>, {0xC10, 1, 0, 0})
	CMember(TArray<FVideoScheduleDeviceEntryAbsolute>) AbsoluteSchedule                                            OFFSET(get<T>, {0xC18, 16, 0, 0})
	CMember(TArray<FVideoScheduleDeviceEntryDaily>)    DailySchedule                                               OFFSET(get<T>, {0xC28, 16, 0, 0})
	CMember(TArray<FVideoScheduleDeviceEntryHourly>)   HourlySchedule                                              OFFSET(get<T>, {0xC38, 16, 0, 0})
	DMember(bool)                                      bFillSchedule                                               OFFSET(get<bool>, {0xC48, 1, 0, 0})
	DMember(int32_t)                                   FillScheduleGap                                             OFFSET(get<int32_t>, {0xC4C, 4, 0, 0})
	DMember(int32_t)                                   FillScheduleAlign                                           OFFSET(get<int32_t>, {0xC50, 4, 0, 0})
	SMember(FString)                                   SimpleSchedule                                              OFFSET(getStruct<T>, {0xC58, 16, 0, 0})


	/// Functions
	// Function /Script/CRD_VideoSchedule.VideoScheduleDeviceBase.TestControlVideoPlayer
	// void TestControlVideoPlayer(FString VUID, FDateTime StartTime, TArray<AController*>& Players);                           // [0xc357fc0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/CRD_VideoSchedule.VideoScheduleDeviceBase.StopSchedule
	// void StopSchedule(class AController* InPlayer);                                                                          // [0xc357f00] Final|Native|Public|BlueprintCallable 
	// Function /Script/CRD_VideoSchedule.VideoScheduleDeviceBase.StartSchedule
	// void StartSchedule(class AController* InPlayer);                                                                         // [0xc357dec] Final|Native|Public|BlueprintCallable 
	// Function /Script/CRD_VideoSchedule.VideoScheduleDeviceBase.OnControlVideoPlayer
	// void OnControlVideoPlayer(FString VUID, FDateTime StartTime, TArray<AController*>& Players, class ULevelSequence* Sequence); // [0x246f7d8] Event|Public|HasOutParms|HasDefaults|BlueprintEvent 
};

/// Struct /Script/CRD_VideoSchedule.VideoScheduleDeviceEntryHourly
/// Size: 0x0028 (0x000000 - 0x000028)
class FVideoScheduleDeviceEntryHourly : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(int32_t)                                   Minutes                                                     OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   Seconds                                                     OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	SMember(FString)                                   VUID                                                        OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	DMember(int32_t)                                   DurationSeconds                                             OFFSET(get<int32_t>, {0x18, 4, 0, 0})
	CMember(class ULevelSequence*)                     Sequence                                                    OFFSET(get<T>, {0x20, 8, 0, 0})
};

/// Struct /Script/CRD_VideoSchedule.VideoScheduleDeviceEntryDaily
/// Size: 0x0030 (0x000000 - 0x000030)
class FVideoScheduleDeviceEntryDaily : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(int32_t)                                   Hours                                                       OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   Minutes                                                     OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   Seconds                                                     OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	SMember(FString)                                   VUID                                                        OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	DMember(int32_t)                                   DurationSeconds                                             OFFSET(get<int32_t>, {0x20, 4, 0, 0})
	CMember(class ULevelSequence*)                     Sequence                                                    OFFSET(get<T>, {0x28, 8, 0, 0})
};

/// Struct /Script/CRD_VideoSchedule.VideoScheduleDeviceEntryAbsolute
/// Size: 0x0030 (0x000000 - 0x000030)
class FVideoScheduleDeviceEntryAbsolute : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FString)                                   IsoStartTime                                                OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   VUID                                                        OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	DMember(int32_t)                                   DurationSeconds                                             OFFSET(get<int32_t>, {0x20, 4, 0, 0})
	CMember(class ULevelSequence*)                     Sequence                                                    OFFSET(get<T>, {0x28, 8, 0, 0})
};

/// Struct /Script/CRD_VideoSchedule.VideoScheduleDeviceScheduleInfo
/// Size: 0x0028 (0x000000 - 0x000028)
class FVideoScheduleDeviceScheduleInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FDateTime)                                 StartTime                                                   OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	SMember(FTimespan)                                 RelativeStartTime                                           OFFSET(getStruct<T>, {0x8, 8, 0, 0})
	SMember(FString)                                   VUID                                                        OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	CMember(class ULevelSequence*)                     Sequence                                                    OFFSET(get<T>, {0x20, 8, 0, 0})
};

/// Enum /Script/CRD_VideoSchedule.EVideoScheduleDeviceRepeat
/// Size: 0x04
enum class EVideoScheduleDeviceRepeat : uint8_t
{
	EVideoScheduleDeviceRepeat__None                                                 = 0,
	EVideoScheduleDeviceRepeat__Hourly                                               = 1,
	EVideoScheduleDeviceRepeat__Daily                                                = 2,
	EVideoScheduleDeviceRepeat__EVideoScheduleDeviceRepeat_MAX                       = 3
};

