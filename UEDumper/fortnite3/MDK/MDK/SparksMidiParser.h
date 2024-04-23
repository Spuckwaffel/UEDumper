
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: HarmonixMidi

/// Class /Script/SparksMidiParser.AsyncAction_ListenForMidiEventBase
/// Size: 0x0030 (0x000030 - 0x000060)
class UAsyncAction_ListenForMidiEventBase : public UCancellableAsyncAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FMulticastInlineDelegate)                  OnFinished                                                  OFFSET(getStruct<T>, {0x30, 16, 0, 0})


	/// Functions
	// Function /Script/SparksMidiParser.AsyncAction_ListenForMidiEventBase.OnFinished__DelegateSignature
	// void OnFinished__DelegateSignature(bool bCanceled);                                                                      // [0x1340978] MulticastDelegate|Public|Delegate 
};

/// Class /Script/SparksMidiParser.AsyncAction_ListenForMidiNoteEvent
/// Size: 0x0040 (0x000060 - 0x0000A0)
class UAsyncAction_ListenForMidiNoteEvent : public UAsyncAction_ListenForMidiEventBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	SMember(FMulticastInlineDelegate)                  OnMidiEventStart                                            OFFSET(getStruct<T>, {0x60, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnMidiEventEnd                                              OFFSET(getStruct<T>, {0x70, 16, 0, 0})


	/// Functions
	// Function /Script/SparksMidiParser.AsyncAction_ListenForMidiNoteEvent.OnMidiNoteEventDelegate__DelegateSignature
	// void OnMidiNoteEventDelegate__DelegateSignature(char MidiEventNote, FParsedMidiNoteEvent& MidiEventData);                // [0x1340978] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/SparksMidiParser.AsyncAction_ListenForMidiNoteEvent.ListenForMidiNoteEvents_WithParams
	// class UAsyncAction_ListenForMidiNoteEvent* ListenForMidiNoteEvents_WithParams(TScriptInterface<Class> MidiEventDriver, FMidiNoteEventListenerParams& Params); // [0xb6c3b94] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SparksMidiParser.AsyncAction_ListenForMidiNoteEvent.ListenForMidiNoteEvents
	// class UAsyncAction_ListenForMidiNoteEvent* ListenForMidiNoteEvents(TScriptInterface<Class> MidiEventDriver, FName MidiTrackName, TArray<char> EventNotes, float SecondsBeforeEventStart, float SecondsBeforeEventEnd, EMidiEventListenerInitBroadcast InitBroadcast); // [0xb6c285c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SparksMidiParser.AsyncAction_ListenForMidiNoteEvent.ListenForMidiNoteEvent
	// class UAsyncAction_ListenForMidiNoteEvent* ListenForMidiNoteEvent(TScriptInterface<Class> MidiEventDriver, FName MidiTrackName, char EventNote, float SecondsBeforeEventStart, float SecondsBeforeEventEnd, EMidiEventListenerInitBroadcast InitBroadcast); // [0xb6c16b8] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SparksMidiParser.AsyncAction_ListenForMidiTextEvent
/// Size: 0x0030 (0x000060 - 0x000090)
class UAsyncAction_ListenForMidiTextEvent : public UAsyncAction_ListenForMidiEventBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FMulticastInlineDelegate)                  OnMidiEventStart                                            OFFSET(getStruct<T>, {0x60, 16, 0, 0})


	/// Functions
	// Function /Script/SparksMidiParser.AsyncAction_ListenForMidiTextEvent.OnMidiTextEventDelegate__DelegateSignature
	// void OnMidiTextEventDelegate__DelegateSignature(FString MidiEventText, FParsedMidiTextEvent& MidiEventData);             // [0x1340978] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/SparksMidiParser.AsyncAction_ListenForMidiTextEvent.ListenForMidiTextEvents_WithParams
	// class UAsyncAction_ListenForMidiTextEvent* ListenForMidiTextEvents_WithParams(TScriptInterface<Class> MidiEventDriver, FMidiTextEventListenerParams& Params); // [0xb6c4dbc] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SparksMidiParser.AsyncAction_ListenForMidiTextEvent.ListenForMidiTextEvents
	// class UAsyncAction_ListenForMidiTextEvent* ListenForMidiTextEvents(TScriptInterface<Class> MidiEventDriver, FName MidiTrackName, TArray<FString>& EventStrings, float SecondsBeforeEventStart, EMidiEventListenerInitBroadcast InitBroadcast); // [0xb6c4918] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SparksMidiParser.AsyncAction_ListenForMidiTextEvent.ListenForMidiTextEvent
	// class UAsyncAction_ListenForMidiTextEvent* ListenForMidiTextEvent(TScriptInterface<Class> MidiEventDriver, FName MidiTrackName, FString EventString, float SecondsBeforeEventStart, EMidiEventListenerInitBroadcast InitBroadcast); // [0xb6c3d6c] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SparksMidiParser.AsyncAction_ListenForMidiNoteEventPools
/// Size: 0x0048 (0x000060 - 0x0000A8)
class UAsyncAction_ListenForMidiNoteEventPools : public UAsyncAction_ListenForMidiEventBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	SMember(FMulticastInlineDelegate)                  OnMidiNoteStart                                             OFFSET(getStruct<T>, {0x60, 16, 0, 0})


	/// Functions
	// Function /Script/SparksMidiParser.AsyncAction_ListenForMidiNoteEventPools.OnMidiNotePoolEventDelegate__DelegateSignature
	// void OnMidiNotePoolEventDelegate__DelegateSignature(char MidiNote, FParsedMidiNoteEvent& MidiNoteData, FName WaitPoolID, float ActualDelay, float MaxDelayShortenedBy); // [0x1340978] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/SparksMidiParser.AsyncAction_ListenForMidiNoteEventPools.ListenForMidiNoteEventsPools_WithParams
	// class UAsyncAction_ListenForMidiNoteEventPools* ListenForMidiNoteEventsPools_WithParams(TScriptInterface<Class> MidiEventDriver, FMidiNotePoolEventListenerParams& Params); // [0xb6c39b4] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SparksMidiParser.AsyncAction_ListenForMidiNoteEventPools.ListenForMidiNoteEventsPools
	// class UAsyncAction_ListenForMidiNoteEventPools* ListenForMidiNoteEventsPools(TScriptInterface<Class> MidiEventDriver, FName MidiTrackName, TArray<char>& EventNotes, TArray<char>& WatchNotes, TArray<FMidiNoteEvent_DelayPool>& DelayPools, EMidiEventListenerInitBroadcast InitBroadcast); // [0xb6c2efc] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SparksMidiParser.AsyncAction_ListenForMidiNoteEventPools.ListenForMidiNoteEventPools
	// class UAsyncAction_ListenForMidiNoteEventPools* ListenForMidiNoteEventPools(TScriptInterface<Class> MidiEventDriver, FName MidiTrackName, char EventNote, TArray<char>& WatchNotes, TArray<FMidiNoteEvent_DelayPool>& DelayPools, EMidiEventListenerInitBroadcast InitBroadcast); // [0xb6c1d0c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/SparksMidiParser.MidiEventDriverInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UMidiEventDriverInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/SparksMidiParser.MidiEventDriverInterface.TickToSeconds
	// float TickToSeconds(int32_t Tick);                                                                                       // [0xb6c501c] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksMidiParser.MidiEventDriverInterface.SecondsToTick
	// int32_t SecondsToTick(float Seconds);                                                                                    // [0xb6c4f88] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksMidiParser.MidiEventDriverInterface.IsPlaybackEnded
	// bool IsPlaybackEnded();                                                                                                  // [0x6bdc338] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksMidiParser.MidiEventDriverInterface.GetSparksInstrumentFromMidiTrackName
	// ESparksInstrumentType GetSparksInstrumentFromMidiTrackName(FName TrackName);                                             // [0xb6c14a0] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksMidiParser.MidiEventDriverInterface.GetParsedMidiEventData
	// class UParsedMidiEventData* GetParsedMidiEventData();                                                                    // [0x692ed28] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksMidiParser.MidiEventDriverInterface.GetMidiTrackNameFromSparksInstrument
	// FName GetMidiTrackNameFromSparksInstrument(ESparksInstrumentType InstrumentType);                                        // [0xb6c0858] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksMidiParser.MidiEventDriverInterface.GetMidiPlaybackState
	// FMidiPlaybackState GetMidiPlaybackState();                                                                               // [0xb6c04c8] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksMidiParser.MidiEventDriverInterface.GetCurrentMidiTick
	// int32_t GetCurrentMidiTick();                                                                                            // [0xb6bfad0] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksMidiParser.MidiEventDriverInterface.GetCurrentMidiSeconds
	// float GetCurrentMidiSeconds();                                                                                           // [0x9842778] Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SparksMidiParser.MidiEventListenerSubsystem
/// Size: 0x0018 (0x000040 - 0x000058)
class UMidiEventListenerSubsystem : public UTickableWorldSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:


	/// Functions
	// Function /Script/SparksMidiParser.MidiEventListenerSubsystem.IsListenerActive
	// bool IsListenerActive(FMidiEventListenerHandle& Handle);                                                                 // [0xb6c15f8] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/SparksMidiParser.MidiEventListenerSubsystem.CancelListener
	// void CancelListener(FMidiEventListenerHandle& Handle);                                                                   // [0xb6bf920] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SparksMidiParser.MidiEventListenerSubsystem.CancelAllListenersForDriver
	// void CancelAllListenersForDriver(TScriptInterface<Class>& Driver);                                                       // [0xb6bf890] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/SparksMidiParser.ParsedMidiEventData
/// Size: 0x00A8 (0x000028 - 0x0000D0)
class UParsedMidiEventData : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	CMember(TMap<FName, FMidiNoteEventList>)           MidiNoteEvents                                              OFFSET(get<T>, {0x28, 80, 0, 0})
	CMember(TMap<FName, FMidiTextEventList>)           MidiTextEvents                                              OFFSET(get<T>, {0x78, 80, 0, 0})
	CMember(class UMidiFile*)                          MidiFilePtr                                                 OFFSET(get<T>, {0xC8, 8, 0, 0})


	/// Functions
	// Function /Script/SparksMidiParser.ParsedMidiEventData.GetRecentOrFirstMidiTextEvent
	// bool GetRecentOrFirstMidiTextEvent(FName TrackName, TArray<FString>& MidiEventStrings, int32_t UpToMidiTick, FParsedMidiTextEvent& OutResult); // [0xb6c11a0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksMidiParser.ParsedMidiEventData.GetRecentOrFirstMidiNoteEvent
	// bool GetRecentOrFirstMidiNoteEvent(FName TrackName, TArray<char>& MidiEventInts, int32_t UpToMidiTick, FParsedMidiNoteEvent& OutResult); // [0xb6c0eb0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksMidiParser.ParsedMidiEventData.GetPreviousMidiTextEventsWithStrings
	// void GetPreviousMidiTextEventsWithStrings(FName TrackName, TArray<FString>& MidiEventStrings, int32_t UpToMidiTick, TArray<FMidiTextEventList>& OutResults); // [0xb6c0bd0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksMidiParser.ParsedMidiEventData.GetPreviousMidiNoteEventsWithInts
	// void GetPreviousMidiNoteEventsWithInts(FName TrackName, TArray<char>& MidiEventInts, int32_t UpToMidiTick, TArray<FMidiNoteEventList>& OutResults); // [0xb6c08e4] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksMidiParser.ParsedMidiEventData.GetMidiTextEventsWithStrings
	// void GetMidiTextEventsWithStrings(FName TrackName, TArray<FString>& MidiEventStrings, TArray<FParsedMidiTextEvent>& OutArray); // [0xb6c0660] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksMidiParser.ParsedMidiEventData.GetMidiTextEvents
	// TArray<FParsedMidiTextEvent> GetMidiTextEvents(FName TrackName);                                                         // [0xb6c0500] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksMidiParser.ParsedMidiEventData.GetMidiNoteEventsWithInts
	// void GetMidiNoteEventsWithInts(FName TrackName, TArray<char>& MidiEventInts, TArray<FParsedMidiNoteEvent>& OutArray);    // [0xb6bfc78] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksMidiParser.ParsedMidiEventData.GetMidiNoteEvents
	// TArray<FParsedMidiNoteEvent> GetMidiNoteEvents(FName TrackName);                                                         // [0xb6bfb18] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksMidiParser.ParsedMidiEventData.GetMidiFile
	// class UMidiFile* GetMidiFile();                                                                                          // [0xb6bfaf4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksMidiParser.ParsedMidiEventData.GetAllMidiTextEvents
	// TMap<FName, FMidiTextEventList> GetAllMidiTextEvents();                                                                  // [0xb6bfa40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksMidiParser.ParsedMidiEventData.GetAllMidiNoteEvents
	// TMap<FName, FMidiNoteEventList> GetAllMidiNoteEvents();                                                                  // [0xb6bf9b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/SparksMidiParser.MidiEventListenerParams
/// Size: 0x0008 (0x000000 - 0x000008)
class FMidiEventListenerParams : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FName)                                     TrackName                                                   OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(EMidiEventListenerInitBroadcast)           InitBroadcast                                               OFFSET(get<T>, {0x4, 1, 0, 0})
};

/// Struct /Script/SparksMidiParser.MidiNoteEventListenerParams
/// Size: 0x0018 (0x000008 - 0x000020)
class FMidiNoteEventListenerParams : public FMidiEventListenerParams
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(TArray<char>)                              EventNotes                                                  OFFSET(get<T>, {0x8, 16, 0, 0})
	DMember(float)                                     SecondsBeforeStartTick                                      OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     SecondsBeforeEndTick                                        OFFSET(get<float>, {0x1C, 4, 0, 0})
};

/// Struct /Script/SparksMidiParser.ParsedMidiEventBase
/// Size: 0x0008 (0x000000 - 0x000008)
class FParsedMidiEventBase : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(int32_t)                                   AtMidiTick                                                  OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   EndsAtMidiTick                                              OFFSET(get<int32_t>, {0x4, 4, 0, 0})
};

/// Struct /Script/SparksMidiParser.ParsedMidiNoteEvent
/// Size: 0x0004 (0x000008 - 0x00000C)
class FParsedMidiNoteEvent : public FParsedMidiEventBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(char)                                      EventNote                                                   OFFSET(get<char>, {0x8, 1, 0, 0})
};

/// Struct /Script/SparksMidiParser.MidiNoteEvent_DelayPool
/// Size: 0x000C (0x000000 - 0x00000C)
class FMidiNoteEvent_DelayPool : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	SMember(FName)                                     ID                                                          OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(float)                                     MaxSecondsBefore                                            OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     MinSecondsBefore                                            OFFSET(get<float>, {0x8, 4, 0, 0})
};

/// Struct /Script/SparksMidiParser.MidiNotePoolEventListenerParams
/// Size: 0x0030 (0x000008 - 0x000038)
class FMidiNotePoolEventListenerParams : public FMidiEventListenerParams
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<char>)                              EventNotes                                                  OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(TArray<char>)                              WatchNotes                                                  OFFSET(get<T>, {0x18, 16, 0, 0})
	CMember(TArray<FMidiNoteEvent_DelayPool>)          DelayPools                                                  OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Struct /Script/SparksMidiParser.MidiTextEventListenerParams
/// Size: 0x0018 (0x000008 - 0x000020)
class FMidiTextEventListenerParams : public FMidiEventListenerParams
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(TArray<FString>)                           EventStrings                                                OFFSET(get<T>, {0x8, 16, 0, 0})
	DMember(float)                                     SecondsBeforeStartTick                                      OFFSET(get<float>, {0x18, 4, 0, 0})
};

/// Struct /Script/SparksMidiParser.ParsedMidiTextEvent
/// Size: 0x0020 (0x000008 - 0x000028)
class FParsedMidiTextEvent : public FParsedMidiEventBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FString)                                   EventString                                                 OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	CMember(TArray<FString>)                           EventPayload                                                OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/SparksMidiParser.MidiEventListenerHandle
/// Size: 0x0010 (0x000000 - 0x000010)
class FMidiEventListenerHandle : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(uint64_t)                                  ID                                                          OFFSET(get<uint64_t>, {0x0, 8, 0, 0})
	CMember(TWeakObjectPtr<UObject*>)                  WeakDriver                                                  OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/SparksMidiParser.MidiPlaybackState
/// Size: 0x000C (0x000000 - 0x00000C)
class FMidiPlaybackState : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(int32_t)                                   CurrentTimeTick                                             OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(float)                                     CurrentTimeSeconds                                          OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(bool)                                      bIsPlaybackEnded                                            OFFSET(get<bool>, {0x8, 1, 0, 0})
};

/// Struct /Script/SparksMidiParser.MidiNoteEventList
/// Size: 0x0010 (0x000000 - 0x000010)
class FMidiNoteEventList : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FParsedMidiNoteEvent>)              Events                                                      OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/SparksMidiParser.MidiTextEventList
/// Size: 0x0010 (0x000000 - 0x000010)
class FMidiTextEventList : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FParsedMidiTextEvent>)              Events                                                      OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Enum /Script/SparksMidiParser.EMidiEventListenerInitBroadcast
/// Size: 0x04
enum class EMidiEventListenerInitBroadcast : uint8_t
{
	EMidiEventListenerInitBroadcast__NoPreviousEvents                                = 0,
	EMidiEventListenerInitBroadcast__MostRecentEvent                                 = 1,
	EMidiEventListenerInitBroadcast__AllPreviousEvents                               = 2,
	EMidiEventListenerInitBroadcast__EMidiEventListenerInitBroadcast_MAX             = 3
};

