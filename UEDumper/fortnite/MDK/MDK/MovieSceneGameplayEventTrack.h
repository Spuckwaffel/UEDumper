
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: MovieScene
/// dependency: StructUtils

/// Class /Script/MovieSceneGameplayEventTrack.MovieSceneGameplayEventSection
/// Size: 0x0100 (0x0000F0 - 0x0001F0)
class UMovieSceneGameplayEventSection : public UMovieSceneSection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 496;

public:
	SMember(FMovieSceneGameplayEventChannel)           EventChannel                                                OFFSET(getStruct<T>, {0xF8, 248, 0, 0})
};

/// Class /Script/MovieSceneGameplayEventTrack.MovieSceneGameplayEventSystem
/// Size: 0x0050 (0x000040 - 0x000090)
class UMovieSceneGameplayEventSystem : public UMovieSceneEntitySystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
};

/// Class /Script/MovieSceneGameplayEventTrack.MovieSceneGameplayEventTrack
/// Size: 0x0020 (0x000098 - 0x0000B8)
class UMovieSceneGameplayEventTrack : public UMovieSceneNameableTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	DMember(bool)                                      bFireEventsWhenForwards                                     OFFSET(get<bool>, {0xA0, 1, 1, 0})
	DMember(bool)                                      bFireEventsWhenBackwards                                    OFFSET(get<bool>, {0xA0, 1, 1, 1})
	CMember(TArray<class UMovieSceneSection*>)         Sections                                                    OFFSET(get<T>, {0xA8, 16, 0, 0})
};

/// Struct /Script/MovieSceneGameplayEventTrack.MovieSceneGameplayEvent
/// Size: 0x0040 (0x000000 - 0x000040)
class FMovieSceneGameplayEvent : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FMemberReference)                          GameplayEventFunctionProperty                               OFFSET(getStruct<T>, {0x0, 48, 0, 0})
	SMember(FInstancedPropertyBag)                     Payload                                                     OFFSET(getStruct<T>, {0x30, 16, 0, 0})
};

/// Struct /Script/MovieSceneGameplayEventTrack.MovieSceneGameplayEventChannel
/// Size: 0x00A8 (0x000050 - 0x0000F8)
class FMovieSceneGameplayEventChannel : public FMovieSceneChannel
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
	CMember(TArray<FFrameNumber>)                      KeyTimes                                                    OFFSET(get<T>, {0x50, 16, 0, 0})
	CMember(TArray<FMovieSceneGameplayEvent>)          KeyValues                                                   OFFSET(get<T>, {0x60, 16, 0, 0})
	SMember(FMovieSceneKeyHandleMap)                   KeyHandles                                                  OFFSET(getStruct<T>, {0x70, 136, 0, 0})
};

/// Struct /Script/MovieSceneGameplayEventTrack.MovieSceneGameplayEventTriggerData
/// Size: 0x0060 (0x000000 - 0x000060)
class FMovieSceneGameplayEventTriggerData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FMemberReference)                          GameplayEventFunctionProperty                               OFFSET(getStruct<T>, {0x0, 48, 0, 0})
	SMember(FInstancedPropertyBag)                     Payload                                                     OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	SMember(FGuid)                                     ObjectBindingID                                             OFFSET(getStruct<T>, {0x40, 16, 0, 0})
};

