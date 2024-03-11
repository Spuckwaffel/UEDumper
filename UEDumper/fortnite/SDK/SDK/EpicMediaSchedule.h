
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: LevelSequence

/// Enum /Script/EpicMediaSchedule.EEpicMediaScheduleRepeat
/// Size: 0x04
enum class EEpicMediaScheduleRepeat : uint8_t
{
	EEpicMediaScheduleRepeat__None                                                   = 0,
	EEpicMediaScheduleRepeat__Hourly                                                 = 1,
	EEpicMediaScheduleRepeat__Daily                                                  = 2,
	EEpicMediaScheduleRepeat__EEpicMediaScheduleRepeat_MAX                           = 3
};

/// Class /Script/EpicMediaSchedule.EpicMediaSchedule
/// Size: 0x0058 (0x0000A0 - 0x0000F8)
class UEpicMediaSchedule : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x58];                                      // 0x00A0   (0x0058)  MISSED
};

/// Struct /Script/EpicMediaSchedule.EpicMediaScheduleScheduleEntryHourly
/// Size: 0x0028 (0x000000 - 0x000028)
struct FEpicMediaScheduleScheduleEntryHourly
{ 
	int32_t                                            Minutes;                                                    // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	SDK_UNDEFINED(16,13532) /* FString */              __um(VUID);                                                 // 0x0008   (0x0010)  
	int32_t                                            DurationSeconds;                                            // 0x0018   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x001C   (0x0004)  MISSED
	class ULevelSequence*                              Sequence;                                                   // 0x0020   (0x0008)  
};

/// Struct /Script/EpicMediaSchedule.EpicMediaScheduleScheduleEntryDaily
/// Size: 0x0028 (0x000000 - 0x000028)
struct FEpicMediaScheduleScheduleEntryDaily
{ 
	int32_t                                            Hours;                                                      // 0x0000   (0x0004)  
	int32_t                                            Minutes;                                                    // 0x0004   (0x0004)  
	SDK_UNDEFINED(16,13533) /* FString */              __um(VUID);                                                 // 0x0008   (0x0010)  
	int32_t                                            DurationSeconds;                                            // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x001C   (0x0004)  MISSED
	class ULevelSequence*                              Sequence;                                                   // 0x0020   (0x0008)  
};

/// Struct /Script/EpicMediaSchedule.EpicMediaScheduleScheduleEntryAbsolute
/// Size: 0x0030 (0x000000 - 0x000030)
struct FEpicMediaScheduleScheduleEntryAbsolute
{ 
	SDK_UNDEFINED(16,13534) /* FString */              __um(IsoStartTime);                                         // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,13535) /* FString */              __um(VUID);                                                 // 0x0010   (0x0010)  
	int32_t                                            DurationSeconds;                                            // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0024   (0x0004)  MISSED
	class ULevelSequence*                              Sequence;                                                   // 0x0028   (0x0008)  
};

/// Struct /Script/EpicMediaSchedule.EpicMediaScheduleScheduleInfo
/// Size: 0x0028 (0x000000 - 0x000028)
struct FEpicMediaScheduleScheduleInfo
{ 
	FDateTime                                          StartTime;                                                  // 0x0000   (0x0008)  
	FTimespan                                          RelativeStartTime;                                          // 0x0008   (0x0008)  
	SDK_UNDEFINED(16,13536) /* FString */              __um(VUID);                                                 // 0x0010   (0x0010)  
	class ULevelSequence*                              Sequence;                                                   // 0x0020   (0x0008)  
};

