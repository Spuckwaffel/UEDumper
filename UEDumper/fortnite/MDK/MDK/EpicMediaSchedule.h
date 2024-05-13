
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: LevelSequence

/// Class /Script/EpicMediaSchedule.EpicMediaSchedule
/// Size: 0x0058 (0x0000A0 - 0x0000F8)
class UEpicMediaSchedule : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
};

/// Struct /Script/EpicMediaSchedule.EpicMediaScheduleScheduleEntryHourly
/// Size: 0x0028 (0x000000 - 0x000028)
class FEpicMediaScheduleScheduleEntryHourly : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(int32_t)                                   Minutes                                                     OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	SMember(FString)                                   VUID                                                        OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	DMember(int32_t)                                   DurationSeconds                                             OFFSET(get<int32_t>, {0x18, 4, 0, 0})
	CMember(class ULevelSequence*)                     Sequence                                                    OFFSET(get<T>, {0x20, 8, 0, 0})
};

/// Struct /Script/EpicMediaSchedule.EpicMediaScheduleScheduleEntryDaily
/// Size: 0x0028 (0x000000 - 0x000028)
class FEpicMediaScheduleScheduleEntryDaily : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(int32_t)                                   Hours                                                       OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   Minutes                                                     OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	SMember(FString)                                   VUID                                                        OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	DMember(int32_t)                                   DurationSeconds                                             OFFSET(get<int32_t>, {0x18, 4, 0, 0})
	CMember(class ULevelSequence*)                     Sequence                                                    OFFSET(get<T>, {0x20, 8, 0, 0})
};

/// Struct /Script/EpicMediaSchedule.EpicMediaScheduleScheduleEntryAbsolute
/// Size: 0x0030 (0x000000 - 0x000030)
class FEpicMediaScheduleScheduleEntryAbsolute : public MDKBase
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

/// Struct /Script/EpicMediaSchedule.EpicMediaScheduleScheduleInfo
/// Size: 0x0028 (0x000000 - 0x000028)
class FEpicMediaScheduleScheduleInfo : public MDKBase
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

/// Enum /Script/EpicMediaSchedule.EEpicMediaScheduleRepeat
/// Size: 0x03
enum class EEpicMediaScheduleRepeat : uint8_t
{
	EEpicMediaScheduleRepeat__None                                                   = 0,
	EEpicMediaScheduleRepeat__Hourly                                                 = 1,
	EEpicMediaScheduleRepeat__Daily                                                  = 2
};

