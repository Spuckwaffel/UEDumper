
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
/// dependency: NetCore

/// Struct /Script/PapayaTimedEvents.MediaTimeEventItem
/// Size: 0x002C (0x00000C - 0x000038)
struct FMediaTimeEventItem : FFastArraySerializerItem
{ 
	unsigned char                                      UnknownData00_3[0x4];                                       // 0x000C   (0x0004)  MISSED
	SDK_UNDEFINED(16,15135) /* FString */              __um(EventName);                                            // 0x0010   (0x0010)  
	int64_t                                            Time;                                                       // 0x0020   (0x0008)  
	SDK_UNDEFINED(16,15136) /* FString */              __um(Parameter);                                            // 0x0028   (0x0010)  
};

/// Struct /Script/PapayaTimedEvents.MediaTimeEventArray
/// Size: 0x0010 (0x000108 - 0x000118)
struct FMediaTimeEventArray : FFastArraySerializer
{ 
	TArray<FMediaTimeEventItem>                        Items;                                                      // 0x0108   (0x0010)  
};

/// Class /Script/PapayaTimedEvents.PapayaTimedEvents
/// Size: 0x01D8 (0x000290 - 0x000468)
class APapayaTimedEvents : public AActor
{ 
public:
	SDK_UNDEFINED(80,15137) /* TMap<FString, UMediaPlayer*> */ __um(MediaPlayerMap);                               // 0x0290   (0x0050)  
	class UPapayaTimedEventsResponderComponent*        MeshEventResponder;                                         // 0x02E0   (0x0008)  
	TArray<class AActor*>                              TimedEventActorTargets;                                     // 0x02E8   (0x0010)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x02F8   (0x0008)  MISSED
	FMediaTimeEventArray                               TimedEventsArray;                                           // 0x0300   (0x0118)  
	unsigned char                                      UnknownData01_5[0x18];                                      // 0x0418   (0x0018)  MISSED
	SDK_UNDEFINED(16,15138) /* FString */              __um(ScreenName);                                           // 0x0430   (0x0010)  
	unsigned char                                      UnknownData02_6[0x28];                                      // 0x0440   (0x0028)  MISSED


	/// Functions
	// Function /Script/PapayaTimedEvents.PapayaTimedEvents.ShutdownTimedEvents_Native
	// void ShutdownTimedEvents_Native();                                                                                    // [0xaa3c484] Final|Native|Public|BlueprintCallable 
	// Function /Script/PapayaTimedEvents.PapayaTimedEvents.SetupTimedEvents_Native
	// void SetupTimedEvents_Native(FString ScreenName);                                                                     // [0xaa3c324] Final|Native|Public|BlueprintCallable 
	// Function /Script/PapayaTimedEvents.PapayaTimedEvents.ResetTimedEvents_Native
	// void ResetTimedEvents_Native();                                                                                       // [0xaa3c310] Final|Native|Public|BlueprintCallable 
	// Function /Script/PapayaTimedEvents.PapayaTimedEvents.OnRep_TimedEventsArray
	// void OnRep_TimedEventsArray(FMediaTimeEventArray& PreviousValue);                                                     // [0xaa3c258] Final|Native|Private|HasOutParms 
	// Function /Script/PapayaTimedEvents.PapayaTimedEvents.OnRep_ScreenName
	// void OnRep_ScreenName(FString PreviousValue);                                                                         // [0xaa3c100] Final|Native|Private 
	// Function /Script/PapayaTimedEvents.PapayaTimedEvents.AddTimedEvent_Native
	// void AddTimedEvent_Native(FString EventName, int64_t Time, FString EventParam);                                       // [0xaa3beec] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/PapayaTimedEvents.PapayaTimedEventsResponderComponent
/// Size: 0x0078 (0x0000E8 - 0x000160)
class UPapayaTimedEventsResponderComponent : public UFortEventResponderComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x78];                                      // 0x00E8   (0x0078)  MISSED
};

