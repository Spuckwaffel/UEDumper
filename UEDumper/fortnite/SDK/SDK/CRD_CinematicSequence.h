
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: LevelSequence
/// dependency: MovieScene

/// Enum /Script/CRD_CinematicSequence.ECinematicSequenceVisibility
/// Size: 0x04
enum class ECinematicSequenceVisibility : uint8_t
{
	ECinematicSequenceVisibility__InstigatorOnly                                     = 0,
	ECinematicSequenceVisibility__InstigatingTeam                                    = 1,
	ECinematicSequenceVisibility__Everyone                                           = 2,
	ECinematicSequenceVisibility__ECinematicSequenceVisibility_MAX                   = 3
};

/// Enum /Script/CRD_CinematicSequence.ECinematicSequenceEnabledOnPhase
/// Size: 0x05
enum class ECinematicSequenceEnabledOnPhase : uint8_t
{
	ECinematicSequenceEnabledOnPhase__Always                                         = 0,
	ECinematicSequenceEnabledOnPhase__PreGameOnly                                    = 1,
	ECinematicSequenceEnabledOnPhase__GameplayOnly                                   = 2,
	ECinematicSequenceEnabledOnPhase__CreateOnly                                     = 3,
	ECinematicSequenceEnabledOnPhase__ECinematicSequenceEnabledOnPhase_MAX           = 4
};

/// Class /Script/CRD_CinematicSequence.CinematicSequenceDeviceBase
/// Size: 0x00C0 (0x000BC8 - 0x000C88)
class ACinematicSequenceDeviceBase : public ABuildingProp
{ 
public:
	unsigned char                                      UnknownData00_3[0x50];                                      // 0x0BC8   (0x0050)  MISSED
	class ULevelSequence*                              Sequence;                                                   // 0x0C18   (0x0008)  
	class ALevelSequenceActor*                         LevelSequenceActor;                                         // 0x0C20   (0x0008)  
	class AFortPlayerController*                       InstigatingController;                                      // 0x0C28   (0x0008)  
	char                                               InstigatingTeam;                                            // 0x0C30   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0C31   (0x0003)  MISSED
	bool                                               bLoopPlayback : 1;                                          // 0x0C34:0 (0x0001)  
	bool                                               bAutoPlay : 1;                                              // 0x0C34:1 (0x0001)  
	unsigned char                                      UnknownData02_4[0x3];                                       // 0x0C35   (0x0003)  MISSED
	ECinematicSequenceEnabledOnPhase                   EnabledOnPhase;                                             // 0x0C38   (0x0001)  
	ECinematicSequenceVisibility                       Visibility;                                                 // 0x0C39   (0x0001)  
	bool                                               bLevelSequenceActorAlwaysRelevant;                          // 0x0C3A   (0x0001)  
	unsigned char                                      UnknownData03_5[0x1];                                       // 0x0C3B   (0x0001)  MISSED
	float                                              PlayRate;                                                   // 0x0C3C   (0x0004)  
	EMovieSceneCompletionModeOverride                  FinishCompletionStateOverride;                              // 0x0C40   (0x0001)  
	unsigned char                                      UnknownData04_6[0x47];                                      // 0x0C41   (0x0047)  MISSED


	/// Functions
	// Function /Script/CRD_CinematicSequence.CinematicSequenceDeviceBase.Stop
	// void Stop();                                                                                                          // [0xab821fc] Final|Native|Public|BlueprintCallable 
	// Function /Script/CRD_CinematicSequence.CinematicSequenceDeviceBase.SetSequence
	// void SetSequence(class ULevelSequence* Sequence);                                                                     // [0xab8217c] Final|Native|Public|BlueprintCallable 
	// Function /Script/CRD_CinematicSequence.CinematicSequenceDeviceBase.SetPlayRate
	// void SetPlayRate(float PlayRate);                                                                                     // [0xab81ffc] Final|Native|Public|BlueprintCallable 
	// Function /Script/CRD_CinematicSequence.CinematicSequenceDeviceBase.SetPlaybackTime
	// void SetPlaybackTime(float Time);                                                                                     // [0xab820fc] Final|Native|Public|BlueprintCallable 
	// Function /Script/CRD_CinematicSequence.CinematicSequenceDeviceBase.SetPlaybackFrame
	// void SetPlaybackFrame(int32_t Frame);                                                                                 // [0xab8207c] Final|Native|Public|BlueprintCallable 
	// Function /Script/CRD_CinematicSequence.CinematicSequenceDeviceBase.Play
	// void Play();                                                                                                          // [0xab81fe8] Final|Native|Public|BlueprintCallable 
	// Function /Script/CRD_CinematicSequence.CinematicSequenceDeviceBase.Pause
	// void Pause();                                                                                                         // [0xab81fd4] Final|Native|Public|BlueprintCallable 
	// Function /Script/CRD_CinematicSequence.CinematicSequenceDeviceBase.OnSequenceFinished
	// void OnSequenceFinished();                                                                                            // [0xab81fc0] Final|Native|Protected 
	// Function /Script/CRD_CinematicSequence.CinematicSequenceDeviceBase.HandleSequencePlayerCreated
	// void HandleSequencePlayerCreated(class ULevelSequencePlayer* Player);                                                 // [0x8868880] Native|Event|Protected|BlueprintEvent 
	// Function /Script/CRD_CinematicSequence.CinematicSequenceDeviceBase.GoToEndAndStop
	// void GoToEndAndStop();                                                                                                // [0xab81fac] Final|Native|Public|BlueprintCallable 
	// Function /Script/CRD_CinematicSequence.CinematicSequenceDeviceBase.GetSequencePlayer
	// class UMovieSceneSequencePlayer* GetSequencePlayer();                                                                 // [0xab81f8c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRD_CinematicSequence.CinematicSequenceDeviceBase.GetPlayRate
	// float GetPlayRate();                                                                                                  // [0xab81f18] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRD_CinematicSequence.CinematicSequenceDeviceBase.GetPlaybackTime
	// float GetPlaybackTime();                                                                                              // [0xab81f64] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRD_CinematicSequence.CinematicSequenceDeviceBase.GetPlaybackFrame
	// int32_t GetPlaybackFrame();                                                                                           // [0xab81f40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

