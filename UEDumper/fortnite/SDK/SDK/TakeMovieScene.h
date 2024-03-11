
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: MovieScene
/// dependency: MovieSceneTracks

/// Class /Script/TakeMovieScene.MovieSceneTakeSection
/// Size: 0x0640 (0x0000F0 - 0x000730)
class UMovieSceneTakeSection : public UMovieSceneSection
{ 
public:
	FMovieSceneIntegerChannel                          HoursCurve;                                                 // 0x00F0   (0x0108)  
	FMovieSceneIntegerChannel                          MinutesCurve;                                               // 0x01F8   (0x0108)  
	FMovieSceneIntegerChannel                          SecondsCurve;                                               // 0x0300   (0x0108)  
	FMovieSceneIntegerChannel                          FramesCurve;                                                // 0x0408   (0x0108)  
	FMovieSceneFloatChannel                            SubFramesCurve;                                             // 0x0510   (0x0110)  
	FMovieSceneStringChannel                           Slate;                                                      // 0x0620   (0x0110)  
};

/// Class /Script/TakeMovieScene.MovieSceneTakeSettings
/// Size: 0x0060 (0x000028 - 0x000088)
class UMovieSceneTakeSettings : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	SDK_UNDEFINED(16,15685) /* FString */              __um(HoursName);                                            // 0x0028   (0x0010)  
	SDK_UNDEFINED(16,15686) /* FString */              __um(MinutesName);                                          // 0x0038   (0x0010)  
	SDK_UNDEFINED(16,15687) /* FString */              __um(SecondsName);                                          // 0x0048   (0x0010)  
	SDK_UNDEFINED(16,15688) /* FString */              __um(FramesName);                                           // 0x0058   (0x0010)  
	SDK_UNDEFINED(16,15689) /* FString */              __um(SubFramesName);                                        // 0x0068   (0x0010)  
	SDK_UNDEFINED(16,15690) /* FString */              __um(SlateName);                                            // 0x0078   (0x0010)  
};

/// Class /Script/TakeMovieScene.MovieSceneTakeTrack
/// Size: 0x0010 (0x000098 - 0x0000A8)
class UMovieSceneTakeTrack : public UMovieSceneNameableTrack
{ 
public:
	TArray<class UMovieSceneSection*>                  Sections;                                                   // 0x0098   (0x0010)  
};

