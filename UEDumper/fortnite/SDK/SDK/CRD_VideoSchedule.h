
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: LevelSequence

/// Enum /Script/CRD_VideoSchedule.EVideoScheduleDeviceRepeat
/// Size: 0x04
enum class EVideoScheduleDeviceRepeat : uint8_t
{
	EVideoScheduleDeviceRepeat__None                                                 = 0,
	EVideoScheduleDeviceRepeat__Hourly                                               = 1,
	EVideoScheduleDeviceRepeat__Daily                                                = 2,
	EVideoScheduleDeviceRepeat__EVideoScheduleDeviceRepeat_MAX                       = 3
};

/// Struct /Script/CRD_VideoSchedule.VideoScheduleDeviceEntryAbsolute
/// Size: 0x0030 (0x000000 - 0x000030)
struct FVideoScheduleDeviceEntryAbsolute
{ 
	SDK_UNDEFINED(16,12604) /* FString */              __um(IsoStartTime);                                         // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,12605) /* FString */              __um(VUID);                                                 // 0x0010   (0x0010)  
	int32_t                                            DurationSeconds;                                            // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0024   (0x0004)  MISSED
	class ULevelSequence*                              Sequence;                                                   // 0x0028   (0x0008)  
};

/// Struct /Script/CRD_VideoSchedule.VideoScheduleDeviceEntryDaily
/// Size: 0x0030 (0x000000 - 0x000030)
struct FVideoScheduleDeviceEntryDaily
{ 
	int32_t                                            Hours;                                                      // 0x0000   (0x0004)  
	int32_t                                            Minutes;                                                    // 0x0004   (0x0004)  
	int32_t                                            Seconds;                                                    // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	SDK_UNDEFINED(16,12606) /* FString */              __um(VUID);                                                 // 0x0010   (0x0010)  
	int32_t                                            DurationSeconds;                                            // 0x0020   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0024   (0x0004)  MISSED
	class ULevelSequence*                              Sequence;                                                   // 0x0028   (0x0008)  
};

/// Struct /Script/CRD_VideoSchedule.VideoScheduleDeviceEntryHourly
/// Size: 0x0028 (0x000000 - 0x000028)
struct FVideoScheduleDeviceEntryHourly
{ 
	int32_t                                            Minutes;                                                    // 0x0000   (0x0004)  
	int32_t                                            Seconds;                                                    // 0x0004   (0x0004)  
	SDK_UNDEFINED(16,12607) /* FString */              __um(VUID);                                                 // 0x0008   (0x0010)  
	int32_t                                            DurationSeconds;                                            // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x001C   (0x0004)  MISSED
	class ULevelSequence*                              Sequence;                                                   // 0x0020   (0x0008)  
};

/// Class /Script/CRD_VideoSchedule.VideoScheduleDeviceBase
/// Size: 0x0108 (0x000BC8 - 0x000CD0)
class AVideoScheduleDeviceBase : public ABuildingProp
{ 
public:
	unsigned char                                      UnknownData00_3[0x48];                                      // 0x0BC8   (0x0048)  MISSED
	EVideoScheduleDeviceRepeat                         RepeatSchedule;                                             // 0x0C10   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0C11   (0x0007)  MISSED
	TArray<FVideoScheduleDeviceEntryAbsolute>          AbsoluteSchedule;                                           // 0x0C18   (0x0010)  
	TArray<FVideoScheduleDeviceEntryDaily>             DailySchedule;                                              // 0x0C28   (0x0010)  
	TArray<FVideoScheduleDeviceEntryHourly>            HourlySchedule;                                             // 0x0C38   (0x0010)  
	bool                                               bFillSchedule;                                              // 0x0C48   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0C49   (0x0003)  MISSED
	int32_t                                            FillScheduleGap;                                            // 0x0C4C   (0x0004)  
	int32_t                                            FillScheduleAlign;                                          // 0x0C50   (0x0004)  
	unsigned char                                      UnknownData03_5[0x4];                                       // 0x0C54   (0x0004)  MISSED
	SDK_UNDEFINED(16,12608) /* FString */              __um(SimpleSchedule);                                       // 0x0C58   (0x0010)  
	unsigned char                                      UnknownData04_6[0x68];                                      // 0x0C68   (0x0068)  MISSED


	/// Functions
	// Function /Script/CRD_VideoSchedule.VideoScheduleDeviceBase.TestControlVideoPlayer
	// void TestControlVideoPlayer(FString VUID, FDateTime StartTime, TArray<AController*>& Players);                        // [0xac851d8] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/CRD_VideoSchedule.VideoScheduleDeviceBase.StopSchedule
	// void StopSchedule(class AController* InPlayer);                                                                       // [0xac84ff8] Final|Native|Public|BlueprintCallable 
	// Function /Script/CRD_VideoSchedule.VideoScheduleDeviceBase.StartSchedule
	// void StartSchedule(class AController* InPlayer);                                                                      // [0xac84f28] Final|Native|Public|BlueprintCallable 
	// Function /Script/CRD_VideoSchedule.VideoScheduleDeviceBase.OnControlVideoPlayer
	// void OnControlVideoPlayer(FString VUID, FDateTime StartTime, TArray<AController*>& Players, class ULevelSequence* Sequence); // [0x18a39e4] Event|Public|HasOutParms|HasDefaults|BlueprintEvent 
};

/// Struct /Script/CRD_VideoSchedule.VideoScheduleDeviceScheduleInfo
/// Size: 0x0028 (0x000000 - 0x000028)
struct FVideoScheduleDeviceScheduleInfo
{ 
	FDateTime                                          StartTime;                                                  // 0x0000   (0x0008)  
	FTimespan                                          RelativeStartTime;                                          // 0x0008   (0x0008)  
	SDK_UNDEFINED(16,12609) /* FString */              __um(VUID);                                                 // 0x0010   (0x0010)  
	class ULevelSequence*                              Sequence;                                                   // 0x0020   (0x0008)  
};

