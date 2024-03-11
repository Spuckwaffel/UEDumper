
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: MovieScene
/// dependency: StructUtils

/// Struct /Script/MovieSceneGameplayEventTrack.MovieSceneGameplayEvent
/// Size: 0x0040 (0x000000 - 0x000040)
struct FMovieSceneGameplayEvent
{ 
	FMemberReference                                   GameplayEventFunctionProperty;                              // 0x0000   (0x0030)  
	FInstancedPropertyBag                              Payload;                                                    // 0x0030   (0x0010)  
};

/// Struct /Script/MovieSceneGameplayEventTrack.MovieSceneGameplayEventChannel
/// Size: 0x00A8 (0x000050 - 0x0000F8)
struct FMovieSceneGameplayEventChannel : FMovieSceneChannel
{ 
	TArray<FFrameNumber>                               KeyTimes;                                                   // 0x0050   (0x0010)  
	TArray<FMovieSceneGameplayEvent>                   KeyValues;                                                  // 0x0060   (0x0010)  
	FMovieSceneKeyHandleMap                            KeyHandles;                                                 // 0x0070   (0x0088)  
};

/// Class /Script/MovieSceneGameplayEventTrack.MovieSceneGameplayEventSection
/// Size: 0x0100 (0x0000F0 - 0x0001F0)
class UMovieSceneGameplayEventSection : public UMovieSceneSection
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x00F0   (0x0008)  MISSED
	FMovieSceneGameplayEventChannel                    EventChannel;                                               // 0x00F8   (0x00F8)  
};

/// Class /Script/MovieSceneGameplayEventTrack.MovieSceneGameplayEventSystem
/// Size: 0x0050 (0x000040 - 0x000090)
class UMovieSceneGameplayEventSystem : public UMovieSceneEntitySystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x50];                                      // 0x0040   (0x0050)  MISSED
};

/// Class /Script/MovieSceneGameplayEventTrack.MovieSceneGameplayEventTrack
/// Size: 0x0020 (0x000098 - 0x0000B8)
class UMovieSceneGameplayEventTrack : public UMovieSceneNameableTrack
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0098   (0x0008)  MISSED
	bool                                               bFireEventsWhenForwards : 1;                                // 0x00A0:0 (0x0001)  
	bool                                               bFireEventsWhenBackwards : 1;                               // 0x00A0:1 (0x0001)  
	unsigned char                                      UnknownData01_4[0x7];                                       // 0x00A1   (0x0007)  MISSED
	TArray<class UMovieSceneSection*>                  Sections;                                                   // 0x00A8   (0x0010)  
};

/// Struct /Script/MovieSceneGameplayEventTrack.MovieSceneGameplayEventTriggerData
/// Size: 0x0060 (0x000000 - 0x000060)
struct FMovieSceneGameplayEventTriggerData
{ 
	FMemberReference                                   GameplayEventFunctionProperty;                              // 0x0000   (0x0030)  
	FInstancedPropertyBag                              Payload;                                                    // 0x0030   (0x0010)  
	FGuid                                              ObjectBindingID;                                            // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0050   (0x0010)  MISSED
};

