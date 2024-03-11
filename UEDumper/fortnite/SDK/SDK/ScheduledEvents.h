
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: JsonUtilities

/// Struct /Script/ScheduledEvents.EventRecord
/// Size: 0x0020 (0x000000 - 0x000020)
struct FEventRecord
{ 
	SDK_UNDEFINED(16,15534) /* FString */              __um(EventType);                                            // 0x0000   (0x0010)  
	FDateTime                                          ActiveUntil;                                                // 0x0010   (0x0008)  
	FDateTime                                          ActiveSince;                                                // 0x0018   (0x0008)  
};

/// Struct /Script/ScheduledEvents.EventChannelState
/// Size: 0x0038 (0x000000 - 0x000038)
struct FEventChannelState
{ 
	FDateTime                                          ValidFrom;                                                  // 0x0000   (0x0008)  
	TArray<FEventRecord>                               ActiveEvents;                                               // 0x0008   (0x0010)  
	FJsonObjectWrapper                                 State;                                                      // 0x0018   (0x0020)  
};

/// Struct /Script/ScheduledEvents.EventsTimeline
/// Size: 0x0018 (0x000000 - 0x000018)
struct FEventsTimeline
{ 
	FDateTime                                          CacheExpire;                                                // 0x0000   (0x0008)  
	TArray<FEventChannelState>                         States;                                                     // 0x0008   (0x0010)  
};

/// Struct /Script/ScheduledEvents.CalendarDownload
/// Size: 0x0060 (0x000000 - 0x000060)
struct FCalendarDownload
{ 
	FDateTime                                          CurrentTime;                                                // 0x0000   (0x0008)  
	double                                             CacheIntervalMins;                                          // 0x0008   (0x0008)  
	SDK_UNDEFINED(80,15535) /* TMap<FString, FEventsTimeline> */ __um(Channels);                                   // 0x0010   (0x0050)  
};

