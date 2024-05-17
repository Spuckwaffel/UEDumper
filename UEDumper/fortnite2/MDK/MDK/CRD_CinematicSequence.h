
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: LevelSequence
/// dependency: MovieScene

/// Class /Script/CRD_CinematicSequence.CinematicSequenceDeviceBase
/// Size: 0x00C0 (0x000BD0 - 0x000C90)
class ACinematicSequenceDeviceBase : public ABuildingProp
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3216;

public:
	CMember(class ULevelSequence*)                     Sequence                                                    OFFSET(get<T>, {0xC20, 8, 0, 0})
	CMember(class ALevelSequenceActor*)                LevelSequenceActor                                          OFFSET(get<T>, {0xC28, 8, 0, 0})
	CMember(class AFortPlayerController*)              InstigatingController                                       OFFSET(get<T>, {0xC30, 8, 0, 0})
	DMember(char)                                      InstigatingTeam                                             OFFSET(get<char>, {0xC38, 1, 0, 0})
	DMember(bool)                                      bLoopPlayback                                               OFFSET(get<bool>, {0xC3C, 1, 1, 0})
	DMember(bool)                                      bAutoPlay                                                   OFFSET(get<bool>, {0xC3C, 1, 1, 1})
	CMember(ECinematicSequenceEnabledOnPhase)          EnabledOnPhase                                              OFFSET(get<T>, {0xC40, 1, 0, 0})
	CMember(ECinematicSequenceVisibility)              Visibility                                                  OFFSET(get<T>, {0xC41, 1, 0, 0})
	DMember(bool)                                      bLevelSequenceActorAlwaysRelevant                           OFFSET(get<bool>, {0xC42, 1, 0, 0})
	DMember(float)                                     PlayRate                                                    OFFSET(get<float>, {0xC44, 4, 0, 0})
	CMember(EMovieSceneCompletionModeOverride)         FinishCompletionStateOverride                               OFFSET(get<T>, {0xC48, 1, 0, 0})


	/// Functions
	// Function /Script/CRD_CinematicSequence.CinematicSequenceDeviceBase.Stop
	// void Stop();                                                                                                             // [0xc7419c4] Final|Native|Public|BlueprintCallable 
	// Function /Script/CRD_CinematicSequence.CinematicSequenceDeviceBase.SetSequence
	// void SetSequence(class ULevelSequence* Sequence);                                                                        // [0xc741944] Final|Native|Public|BlueprintCallable 
	// Function /Script/CRD_CinematicSequence.CinematicSequenceDeviceBase.SetPlayRate
	// void SetPlayRate(float PlayRate);                                                                                        // [0xc7417c4] Final|Native|Public|BlueprintCallable 
	// Function /Script/CRD_CinematicSequence.CinematicSequenceDeviceBase.SetPlaybackTime
	// void SetPlaybackTime(float Time);                                                                                        // [0xc7418c4] Final|Native|Public|BlueprintCallable 
	// Function /Script/CRD_CinematicSequence.CinematicSequenceDeviceBase.SetPlaybackFrame
	// void SetPlaybackFrame(int32_t Frame);                                                                                    // [0xc741844] Final|Native|Public|BlueprintCallable 
	// Function /Script/CRD_CinematicSequence.CinematicSequenceDeviceBase.PlayReverse
	// void PlayReverse();                                                                                                      // [0xc7417b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CRD_CinematicSequence.CinematicSequenceDeviceBase.Play
	// void Play();                                                                                                             // [0xc74179c] Final|Native|Public|BlueprintCallable 
	// Function /Script/CRD_CinematicSequence.CinematicSequenceDeviceBase.Pause
	// void Pause();                                                                                                            // [0xc741788] Final|Native|Public|BlueprintCallable 
	// Function /Script/CRD_CinematicSequence.CinematicSequenceDeviceBase.OnSequenceFinished
	// void OnSequenceFinished();                                                                                               // [0xc741774] Final|Native|Protected 
	// Function /Script/CRD_CinematicSequence.CinematicSequenceDeviceBase.HandleSequencePlayerCreated
	// void HandleSequencePlayerCreated(class ULevelSequencePlayer* Player);                                                    // [0x928c48c] Native|Event|Protected|BlueprintEvent 
	// Function /Script/CRD_CinematicSequence.CinematicSequenceDeviceBase.GoToEndAndStop
	// void GoToEndAndStop();                                                                                                   // [0xc741760] Final|Native|Public|BlueprintCallable 
	// Function /Script/CRD_CinematicSequence.CinematicSequenceDeviceBase.GetSequencePlayer
	// class UMovieSceneSequencePlayer* GetSequencePlayer();                                                                    // [0xc741740] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRD_CinematicSequence.CinematicSequenceDeviceBase.GetPlayRate
	// float GetPlayRate();                                                                                                     // [0xc7416cc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRD_CinematicSequence.CinematicSequenceDeviceBase.GetPlaybackTime
	// float GetPlaybackTime();                                                                                                 // [0xc741718] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRD_CinematicSequence.CinematicSequenceDeviceBase.GetPlaybackFrame
	// int32_t GetPlaybackFrame();                                                                                              // [0xc7416f4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Enum /Script/CRD_CinematicSequence.ECinematicSequenceVisibility
/// Size: 0x03
enum class ECinematicSequenceVisibility : uint8_t
{
	ECinematicSequenceVisibility__InstigatorOnly                                     = 0,
	ECinematicSequenceVisibility__InstigatingTeam                                    = 1,
	ECinematicSequenceVisibility__Everyone                                           = 2
};

/// Enum /Script/CRD_CinematicSequence.ECinematicSequenceEnabledOnPhase
/// Size: 0x04
enum class ECinematicSequenceEnabledOnPhase : uint8_t
{
	ECinematicSequenceEnabledOnPhase__Always                                         = 0,
	ECinematicSequenceEnabledOnPhase__PreGameOnly                                    = 1,
	ECinematicSequenceEnabledOnPhase__GameplayOnly                                   = 2,
	ECinematicSequenceEnabledOnPhase__CreateOnly                                     = 3
};

