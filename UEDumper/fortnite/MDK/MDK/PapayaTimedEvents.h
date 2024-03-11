
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: NetCore

/// Class /Script/PapayaTimedEvents.PapayaTimedEvents
/// Size: 0x01D8 (0x000290 - 0x000468)
class APapayaTimedEvents : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1128;

public:
	CMember(TMap<FString, UMediaPlayer*>)              MediaPlayerMap                                              OFFSET(get<T>, {0x290, 80, 0, 0})
	CMember(class UPapayaTimedEventsResponderComponent*) MeshEventResponder                                        OFFSET(get<T>, {0x2E0, 8, 0, 0})
	CMember(TArray<class AActor*>)                     TimedEventActorTargets                                      OFFSET(get<T>, {0x2E8, 16, 0, 0})
	SMember(FMediaTimeEventArray)                      TimedEventsArray                                            OFFSET(getStruct<T>, {0x300, 280, 0, 0})
	SMember(FString)                                   ScreenName                                                  OFFSET(getStruct<T>, {0x430, 16, 0, 0})


	/// Functions
	// Function /Script/PapayaTimedEvents.PapayaTimedEvents.ShutdownTimedEvents_Native
	// void ShutdownTimedEvents_Native();                                                                                       // [0xaa3c484] Final|Native|Public|BlueprintCallable 
	// Function /Script/PapayaTimedEvents.PapayaTimedEvents.SetupTimedEvents_Native
	// void SetupTimedEvents_Native(FString ScreenName);                                                                        // [0xaa3c324] Final|Native|Public|BlueprintCallable 
	// Function /Script/PapayaTimedEvents.PapayaTimedEvents.ResetTimedEvents_Native
	// void ResetTimedEvents_Native();                                                                                          // [0xaa3c310] Final|Native|Public|BlueprintCallable 
	// Function /Script/PapayaTimedEvents.PapayaTimedEvents.OnRep_TimedEventsArray
	// void OnRep_TimedEventsArray(FMediaTimeEventArray& PreviousValue);                                                        // [0xaa3c258] Final|Native|Private|HasOutParms 
	// Function /Script/PapayaTimedEvents.PapayaTimedEvents.OnRep_ScreenName
	// void OnRep_ScreenName(FString PreviousValue);                                                                            // [0xaa3c100] Final|Native|Private 
	// Function /Script/PapayaTimedEvents.PapayaTimedEvents.AddTimedEvent_Native
	// void AddTimedEvent_Native(FString EventName, int64_t Time, FString EventParam);                                          // [0xaa3beec] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/PapayaTimedEvents.PapayaTimedEventsResponderComponent
/// Size: 0x0078 (0x0000E8 - 0x000160)
class UPapayaTimedEventsResponderComponent : public UFortEventResponderComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:
};

/// Struct /Script/PapayaTimedEvents.MediaTimeEventItem
/// Size: 0x002C (0x00000C - 0x000038)
class FMediaTimeEventItem : public FFastArraySerializerItem
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FString)                                   EventName                                                   OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	DMember(int64_t)                                   Time                                                        OFFSET(get<int64_t>, {0x20, 8, 0, 0})
	SMember(FString)                                   Parameter                                                   OFFSET(getStruct<T>, {0x28, 16, 0, 0})
};

/// Struct /Script/PapayaTimedEvents.MediaTimeEventArray
/// Size: 0x0010 (0x000108 - 0x000118)
class FMediaTimeEventArray : public FFastArraySerializer
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 280;

public:
	CMember(TArray<FMediaTimeEventItem>)               Items                                                       OFFSET(get<T>, {0x108, 16, 0, 0})
};

