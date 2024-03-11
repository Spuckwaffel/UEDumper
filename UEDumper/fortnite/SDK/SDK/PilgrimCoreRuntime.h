
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: BeatSyncedAnimRuntime
/// dependency: ClientPilot
/// dependency: CommonUI
/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine
/// dependency: EnhancedInput
/// dependency: FMCoreRuntime
/// dependency: FortniteGame
/// dependency: GameplayAbilities
/// dependency: GameplayEventRouter
/// dependency: GameplayTags
/// dependency: GameplayTasks
/// dependency: HarmonixAudioReactivity
/// dependency: HarmonixMetasound
/// dependency: HarmonixMidi
/// dependency: HarmonixStems
/// dependency: InputCore
/// dependency: MetasoundEngine
/// dependency: MetasoundFrontend
/// dependency: ModularGameplay
/// dependency: PlayspaceSystem
/// dependency: SlateCore
/// dependency: SparksCMS
/// dependency: SparksCoreRuntime
/// dependency: SparksCosmeticsRuntime
/// dependency: SparksDanceEmotesRuntime
/// dependency: SparksMidiParser
/// dependency: SparksMusicPlayspaceRuntime
/// dependency: UMG

/// Enum /Script/PilgrimCoreRuntime.EPilgrimTrackLane
/// Size: 0x09
enum class EPilgrimTrackLane : uint8_t
{
	EPilgrimTrackLane__TrackLaneNone                                                 = 0,
	EPilgrimTrackLane__TrackLane0                                                    = 1,
	EPilgrimTrackLane__TrackLane1                                                    = 2,
	EPilgrimTrackLane__TrackLane2                                                    = 4,
	EPilgrimTrackLane__TrackLane3                                                    = 8,
	EPilgrimTrackLane__TrackLane4                                                    = 16,
	EPilgrimTrackLane__TrackLane5                                                    = 32,
	EPilgrimTrackLane__NumTrackLanes                                                 = 6,
	EPilgrimTrackLane__EPilgrimTrackLane_MAX                                         = 33
};

/// Enum /Script/PilgrimCoreRuntime.EBeatMarkerType
/// Size: 0x04
enum class EBeatMarkerType : uint8_t
{
	EBeatMarkerType__None                                                            = 0,
	EBeatMarkerType__OnBeat                                                          = 1,
	EBeatMarkerType__OnDownbeat                                                      = 2,
	EBeatMarkerType__EBeatMarkerType_MAX                                             = 3
};

/// Enum /Script/PilgrimCoreRuntime.EPilgrimTrackType
/// Size: 0x11
enum class EPilgrimTrackType : uint8_t
{
	EPilgrimTrackType__TrackGuitar                                                   = 0,
	EPilgrimTrackType__TrackBass                                                     = 1,
	EPilgrimTrackType__TrackVocals                                                   = 2,
	EPilgrimTrackType__TrackDrum                                                     = 3,
	EPilgrimTrackType__TrackPlasticGuitar                                            = 4,
	EPilgrimTrackType__TrackPlasticBass                                              = 5,
	EPilgrimTrackType__TrackPlasticDrum                                              = 6,
	EPilgrimTrackType__TrackEvents                                                   = 7,
	EPilgrimTrackType__TrackNone                                                     = 8,
	EPilgrimTrackType__NumTrackTypes                                                 = 8,
	EPilgrimTrackType__EPilgrimTrackType_MAX                                         = 9
};

/// Enum /Script/PilgrimCoreRuntime.EOverdriveScoringState
/// Size: 0x04
enum class EOverdriveScoringState : uint8_t
{
	EOverdriveScoringState__None                                                     = 0,
	EOverdriveScoringState__FailedSection                                            = 1,
	EOverdriveScoringState__ActiveSection                                            = 2,
	EOverdriveScoringState__EOverdriveScoringState_MAX                               = 3
};

/// Enum /Script/PilgrimCoreRuntime.EMusicBattleProjectileType
/// Size: 0x06
enum class EMusicBattleProjectileType : uint8_t
{
	EMusicBattleProjectileType__None                                                 = 0,
	EMusicBattleProjectileType__BeamSuccess                                          = 1,
	EMusicBattleProjectileType__BeamFailure                                          = 2,
	EMusicBattleProjectileType__BeamClash                                            = 3,
	EMusicBattleProjectileType__BothMiss                                             = 4,
	EMusicBattleProjectileType__EMusicBattleProjectileType_MAX                       = 5
};

/// Enum /Script/PilgrimCoreRuntime.EPilgrimSongDifficulty
/// Size: 0x07
enum class EPilgrimSongDifficulty : uint8_t
{
	EPilgrimSongDifficulty__DifficultyEasy                                           = 0,
	EPilgrimSongDifficulty__DifficultyMedium                                         = 1,
	EPilgrimSongDifficulty__DifficultyHard                                           = 2,
	EPilgrimSongDifficulty__DifficultyExpert                                         = 3,
	EPilgrimSongDifficulty__None                                                     = 4,
	EPilgrimSongDifficulty__NumDifficulties                                          = 5,
	EPilgrimSongDifficulty__EPilgrimSongDifficulty_MAX                               = 6
};

/// Enum /Script/PilgrimCoreRuntime.EPilgrimSongPlayMethod
/// Size: 0x04
enum class EPilgrimSongPlayMethod : uint8_t
{
	EPilgrimSongPlayMethod__Invalid                                                  = 0,
	EPilgrimSongPlayMethod__Streaming                                                = 1,
	EPilgrimSongPlayMethod__LocalMetasounds                                          = 2,
	EPilgrimSongPlayMethod__EPilgrimSongPlayMethod_MAX                               = 3
};

/// Enum /Script/PilgrimCoreRuntime.EMusicBattleEndReason
/// Size: 0x06
enum class EMusicBattleEndReason : uint8_t
{
	EMusicBattleEndReason__NoReason                                                  = 0,
	EMusicBattleEndReason__CompletedNormally                                         = 1,
	EMusicBattleEndReason__HardStopAndSkipPostGame                                   = 2,
	EMusicBattleEndReason__HardStopAndContinueFlow                                   = 3,
	EMusicBattleEndReason__RestartingSong                                            = 4,
	EMusicBattleEndReason__EMusicBattleEndReason_MAX                                 = 5
};

/// Enum /Script/PilgrimCoreRuntime.EMusicBattleClientUpdate
/// Size: 0x05
enum class EMusicBattleClientUpdate : uint8_t
{
	EMusicBattleClientUpdate__SongFinished                                           = 0,
	EMusicBattleClientUpdate__TearDownFinished                                       = 1,
	EMusicBattleClientUpdate__StopAndSkipPostGame                                    = 2,
	EMusicBattleClientUpdate__StopAndRestartSong                                     = 3,
	EMusicBattleClientUpdate__EMusicBattleClientUpdate_MAX                           = 4
};

/// Enum /Script/PilgrimCoreRuntime.EPilgrimTimedInputType
/// Size: 0x06
enum class EPilgrimTimedInputType : uint8_t
{
	EPilgrimTimedInputType__None                                                     = 0,
	EPilgrimTimedInputType__Lane                                                     = 1,
	EPilgrimTimedInputType__DeployOverdrive                                          = 2,
	EPilgrimTimedInputType__DeployOverdriveAndClearGems                              = 3,
	EPilgrimTimedInputType__Strum                                                    = 4,
	EPilgrimTimedInputType__EPilgrimTimedInputType_MAX                               = 5
};

/// Enum /Script/PilgrimCoreRuntime.EMusicBattleType
/// Size: 0x06
enum class EMusicBattleType : uint8_t
{
	EMusicBattleType__None                                                           = 0,
	EMusicBattleType__SinglePlayerLocalVs                                            = 1,
	EMusicBattleType__MultiplayerVs                                                  = 2,
	EMusicBattleType__SinglePlayerSparks                                             = 3,
	EMusicBattleType__TeamQuickplay                                                  = 4,
	EMusicBattleType__EMusicBattleType_MAX                                           = 5
};

/// Enum /Script/PilgrimCoreRuntime.EPilgrimLeaderboardType
/// Size: 0x09
enum class EPilgrimLeaderboardType : uint8_t
{
	EPilgrimLeaderboardType__SoloGuitar                                              = 0,
	EPilgrimLeaderboardType__SoloBass                                                = 1,
	EPilgrimLeaderboardType__SoloVocals                                              = 2,
	EPilgrimLeaderboardType__SoloDrum                                                = 3,
	EPilgrimLeaderboardType__BandDuo                                                 = 4,
	EPilgrimLeaderboardType__BandTrio                                                = 5,
	EPilgrimLeaderboardType__BandQuad                                                = 6,
	EPilgrimLeaderboardType__Invalid                                                 = 7,
	EPilgrimLeaderboardType__EPilgrimLeaderboardType_MAX                             = 8
};

/// Enum /Script/PilgrimCoreRuntime.EPilgrimPlayerFeedSortType
/// Size: 0x05
enum class EPilgrimPlayerFeedSortType : uint8_t
{
	EPilgrimPlayerFeedSortType__NewestScore                                          = 0,
	EPilgrimPlayerFeedSortType__OldestScore                                          = 1,
	EPilgrimPlayerFeedSortType__HighestScore                                         = 2,
	EPilgrimPlayerFeedSortType__LowestScore                                          = 3,
	EPilgrimPlayerFeedSortType__EPilgrimPlayerFeedSortType_MAX                       = 4
};

/// Enum /Script/PilgrimCoreRuntime.ESongShortNameMatchType
/// Size: 0x05
enum class ESongShortNameMatchType : uint8_t
{
	ESongShortNameMatchType__AlwaysMatch                                             = 0,
	ESongShortNameMatchType__MatchAny                                                = 1,
	ESongShortNameMatchType__MatchAll                                                = 2,
	ESongShortNameMatchType__MatchNone                                               = 3,
	ESongShortNameMatchType__ESongShortNameMatchType_MAX                             = 4
};

/// Enum /Script/PilgrimCoreRuntime.EPilgrimCantAddSongReason
/// Size: 0x08
enum class EPilgrimCantAddSongReason : uint8_t
{
	EPilgrimCantAddSongReason__None                                                  = 0,
	EPilgrimCantAddSongReason__SetlistLocked                                         = 1,
	EPilgrimCantAddSongReason__SongAlreadyAdded                                      = 2,
	EPilgrimCantAddSongReason__PlayerHasAddedMaxSongs                                = 3,
	EPilgrimCantAddSongReason__InvalidSongShortName                                  = 4,
	EPilgrimCantAddSongReason__MissingSong                                           = 5,
	EPilgrimCantAddSongReason__SongNotAvailable                                      = 6,
	EPilgrimCantAddSongReason__EPilgrimCantAddSongReason_MAX                         = 7
};

/// Enum /Script/PilgrimCoreRuntime.EPilgrimPlayerHistoryScoreParam
/// Size: 0x04
enum class EPilgrimPlayerHistoryScoreParam : uint8_t
{
	EPilgrimPlayerHistoryScoreParam__AllScores                                       = 0,
	EPilgrimPlayerHistoryScoreParam__HigherScores                                    = 1,
	EPilgrimPlayerHistoryScoreParam__LowerScores                                     = 2,
	EPilgrimPlayerHistoryScoreParam__EPilgrimPlayerHistoryScoreParam_MAX             = 3
};

/// Enum /Script/PilgrimCoreRuntime.EPilgrimStreamerStatus
/// Size: 0x08
enum class EPilgrimStreamerStatus : uint8_t
{
	EPilgrimStreamerStatus__Idle                                                     = 0,
	EPilgrimStreamerStatus__DownloadingMidi                                          = 1,
	EPilgrimStreamerStatus__Preparing                                                = 2,
	EPilgrimStreamerStatus__Opening                                                  = 3,
	EPilgrimStreamerStatus__Ready                                                    = 4,
	EPilgrimStreamerStatus__Streaming                                                = 5,
	EPilgrimStreamerStatus__Errored                                                  = 6,
	EPilgrimStreamerStatus__EPilgrimStreamerStatus_MAX                               = 7
};

/// Enum /Script/PilgrimCoreRuntime.EPilgrimStateMachineMessage
/// Size: 0x06
enum class EPilgrimStateMachineMessage : uint8_t
{
	EPilgrimStateMachineMessage__None                                                = 0,
	EPilgrimStateMachineMessage__Solo_PlayPreviousSong                               = 1,
	EPilgrimStateMachineMessage__Solo_PlayNextSong                                   = 2,
	EPilgrimStateMachineMessage__Solo_LeaveStage                                     = 3,
	EPilgrimStateMachineMessage__Multiplayer_LeaveStage                              = 4,
	EPilgrimStateMachineMessage__EPilgrimStateMachineMessage_MAX                     = 5
};

/// Enum /Script/PilgrimCoreRuntime.EPilgrimAnalyticsSongEndReason
/// Size: 0x04
enum class EPilgrimAnalyticsSongEndReason : uint8_t
{
	EPilgrimAnalyticsSongEndReason__SongFinished                                     = 0,
	EPilgrimAnalyticsSongEndReason__SongRestarted                                    = 1,
	EPilgrimAnalyticsSongEndReason__PlayerDisconnected                               = 2,
	EPilgrimAnalyticsSongEndReason__EPilgrimAnalyticsSongEndReason_MAX               = 3
};

/// Enum /Script/PilgrimCoreRuntime.EPilgrimAnalyticsSongAccessScope
/// Size: 0x05
enum class EPilgrimAnalyticsSongAccessScope : uint8_t
{
	EPilgrimAnalyticsSongAccessScope__None                                           = 0,
	EPilgrimAnalyticsSongAccessScope__Player                                         = 1,
	EPilgrimAnalyticsSongAccessScope__Party                                          = 2,
	EPilgrimAnalyticsSongAccessScope__All                                            = 3,
	EPilgrimAnalyticsSongAccessScope__EPilgrimAnalyticsSongAccessScope_MAX           = 4
};

/// Enum /Script/PilgrimCoreRuntime.EPilgrimAnalyticsResultsReturn
/// Size: 0x05
enum class EPilgrimAnalyticsResultsReturn : uint8_t
{
	EPilgrimAnalyticsResultsReturn__None                                             = 0,
	EPilgrimAnalyticsResultsReturn__LeaveToLobby                                     = 1,
	EPilgrimAnalyticsResultsReturn__LeaveStage                                       = 2,
	EPilgrimAnalyticsResultsReturn__LeaveStage_Timer                                 = 3,
	EPilgrimAnalyticsResultsReturn__EPilgrimAnalyticsResultsReturn_MAX               = 4
};

/// Enum /Script/PilgrimCoreRuntime.EPresetLanesDifficulty
/// Size: 0x03
enum class EPresetLanesDifficulty : uint8_t
{
	EPresetLanesDifficulty__General                                                  = 4,
	EPresetLanesDifficulty__Expert                                                   = 5,
	EPresetLanesDifficulty__EPresetLanesDifficulty_MAX                               = 6
};

/// Enum /Script/PilgrimCoreRuntime.EPilgrimEvaluatorRuleSet
/// Size: 0x03
enum class EPilgrimEvaluatorRuleSet : uint8_t
{
	standard                                                                         = 0,
	StrummedGuitar                                                                   = 1,
	EPilgrimEvaluatorRuleSet_MAX                                                     = 2
};

/// Enum /Script/PilgrimCoreRuntime.EPilgrimGemInputState
/// Size: 0x05
enum class EPilgrimGemInputState : uint8_t
{
	EPilgrimGemInputState__GemHit                                                    = 0,
	EPilgrimGemInputState__UserSwingAndMiss                                          = 1,
	EPilgrimGemInputState__GemPassed                                                 = 2,
	EPilgrimGemInputState__NumGemInputStates                                         = 3,
	EPilgrimGemInputState__EPilgrimGemInputState_MAX                                 = 4
};

/// Enum /Script/PilgrimCoreRuntime.EPilgrimPersonalBestType
/// Size: 0x05
enum class EPilgrimPersonalBestType : uint8_t
{
	EPilgrimPersonalBestType__SoloScore                                              = 0,
	EPilgrimPersonalBestType__BandScore                                              = 1,
	EPilgrimPersonalBestType__SpotlightScore                                         = 2,
	EPilgrimPersonalBestType__Invalid                                                = 3,
	EPilgrimPersonalBestType__EPilgrimPersonalBestType_MAX                           = 4
};

/// Enum /Script/PilgrimCoreRuntime.EPilgrimAccumulateStarsMessageType
/// Size: 0x04
enum class EPilgrimAccumulateStarsMessageType : uint8_t
{
	EPilgrimAccumulateStarsMessageType__BandStars                                    = 0,
	EPilgrimAccumulateStarsMessageType__SoloStars                                    = 1,
	EPilgrimAccumulateStarsMessageType__Count                                        = 2,
	EPilgrimAccumulateStarsMessageType__EPilgrimAccumulateStarsMessageType_MAX       = 3
};

/// Enum /Script/PilgrimCoreRuntime.EPilgrimAccumulateStarTypes
/// Size: 0x04
enum class EPilgrimAccumulateStarTypes : uint8_t
{
	EPilgrimAccumulateStarTypes__None                                                = 0,
	EPilgrimAccumulateStarTypes__Regular                                             = 1,
	EPilgrimAccumulateStarTypes__Golden                                              = 2,
	EPilgrimAccumulateStarTypes__EPilgrimAccumulateStarTypes_MAX                     = 3
};

/// Enum /Script/PilgrimCoreRuntime.EPilgrimNoteEventMessageIncrementType
/// Size: 0x04
enum class EPilgrimNoteEventMessageIncrementType : uint8_t
{
	EPilgrimNoteEventMessageIncrementType__ByTime                                    = 0,
	EPilgrimNoteEventMessageIncrementType__ByValue                                   = 1,
	EPilgrimNoteEventMessageIncrementType__Count                                     = 2,
	EPilgrimNoteEventMessageIncrementType__EPilgrimNoteEventMessageIncrementType_MAX = 3
};

/// Enum /Script/PilgrimCoreRuntime.EPilgrimScoreEventMessageType
/// Size: 0x04
enum class EPilgrimScoreEventMessageType : uint8_t
{
	EPilgrimScoreEventMessageType__BandScore                                         = 0,
	EPilgrimScoreEventMessageType__SoloScore                                         = 1,
	EPilgrimScoreEventMessageType__Count                                             = 2,
	EPilgrimScoreEventMessageType__EPilgrimScoreEventMessageType_MAX                 = 3
};

/// Enum /Script/PilgrimCoreRuntime.EPilgrimScoreEventMessageIncrementType
/// Size: 0x05
enum class EPilgrimScoreEventMessageIncrementType : uint8_t
{
	EPilgrimScoreEventMessageIncrementType__ByScore                                  = 0,
	EPilgrimScoreEventMessageIncrementType__ByStars                                  = 1,
	EPilgrimScoreEventMessageIncrementType__ByValue                                  = 2,
	EPilgrimScoreEventMessageIncrementType__Count                                    = 3,
	EPilgrimScoreEventMessageIncrementType__EPilgrimScoreEventMessageIncrementType_MAX = 4
};

/// Enum /Script/PilgrimCoreRuntime.EScoringMistakeType
/// Size: 0x03
enum class EScoringMistakeType : uint8_t
{
	EScoringMistakeType__Miss                                                        = 0,
	EScoringMistakeType__Pass                                                        = 1,
	EScoringMistakeType__EScoringMistakeType_MAX                                     = 2
};

/// Enum /Script/PilgrimCoreRuntime.EPilgrimScoringMode
/// Size: 0x03
enum class EPilgrimScoringMode : uint8_t
{
	EPilgrimScoringMode__IncludeModifiers                                            = 0,
	EPilgrimScoringMode__ExcludeModifiers                                            = 1,
	EPilgrimScoringMode__EPilgrimScoringMode_MAX                                     = 2
};

/// Enum /Script/PilgrimCoreRuntime.EPilgrimScoringTarget
/// Size: 0x07
enum class EPilgrimScoringTarget : uint8_t
{
	EPilgrimScoringTarget__None                                                      = 0,
	EPilgrimScoringTarget__BaseGem                                                   = 1,
	EPilgrimScoringTarget__StreakMultiplier                                          = 2,
	EPilgrimScoringTarget__OverdriveMultiplier                                       = 3,
	EPilgrimScoringTarget__SustainPerBeat                                            = 4,
	EPilgrimScoringTarget__AccuracyMultiplier                                        = 5,
	EPilgrimScoringTarget__EPilgrimScoringTarget_MAX                                 = 6
};

/// Enum /Script/PilgrimCoreRuntime.EPilgrimSongSortMethod
/// Size: 0x04
enum class EPilgrimSongSortMethod : uint8_t
{
	EPilgrimSongSortMethod__Artist                                                   = 0,
	EPilgrimSongSortMethod__Title                                                    = 1,
	EPilgrimSongSortMethod__Year                                                     = 2,
	EPilgrimSongSortMethod__EPilgrimSongSortMethod_MAX                               = 3
};

/// Enum /Script/PilgrimCoreRuntime.EPilgrimSongSortDirection
/// Size: 0x03
enum class EPilgrimSongSortDirection : uint8_t
{
	EPilgrimSongSortDirection__Ascending                                             = 0,
	EPilgrimSongSortDirection__Descending                                            = 1,
	EPilgrimSongSortDirection__EPilgrimSongSortDirection_MAX                         = 2
};

/// Enum /Script/PilgrimCoreRuntime.EWidgetTouchKbmControllerTransitionType
/// Size: 0x05
enum class EWidgetTouchKbmControllerTransitionType : uint8_t
{
	EWidgetTouchKbmControllerTransitionType__Opacity                                 = 0,
	EWidgetTouchKbmControllerTransitionType__Collapse                                = 1,
	EWidgetTouchKbmControllerTransitionType__DoNothing                               = 2,
	EWidgetTouchKbmControllerTransitionType__Count                                   = 3,
	EWidgetTouchKbmControllerTransitionType__EWidgetTouchKbmControllerTransitionType_MAX = 4
};

/// Enum /Script/PilgrimCoreRuntime.EComboType
/// Size: 0x04
enum class EComboType : uint8_t
{
	EComboType__None                                                                 = 0,
	EComboType__Full                                                                 = 1,
	EComboType__Perfect                                                              = 2,
	EComboType__EComboType_MAX                                                       = 3
};

/// Struct /Script/PilgrimCoreRuntime.SongTimestampData
/// Size: 0x0048 (0x000000 - 0x000048)
struct FSongTimestampData
{ 
	float                                              ServerWorldTime;                                            // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	FMidiSongPos                                       ServerSongPosition;                                         // 0x0008   (0x0040)  
};

/// Class /Script/PilgrimCoreRuntime.NetworkedMusicClockManager
/// Size: 0x0268 (0x0000A0 - 0x000308)
class UNetworkedMusicClockManager : public UGameFrameworkComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x88];                                      // 0x00A0   (0x0088)  MISSED
	SDK_UNDEFINED(16,15178) /* FMulticastInlineDelegate */ __um(OnStartSongSyncCountdown);                         // 0x0128   (0x0010)  
	SDK_UNDEFINED(16,15179) /* FMulticastInlineDelegate */ __um(OnBeatEvent);                                      // 0x0138   (0x0010)  
	SDK_UNDEFINED(16,15180) /* FMulticastInlineDelegate */ __um(OnBarEvent);                                       // 0x0148   (0x0010)  
	class UMusicClockComponent*                        OwnedMusicClockComponent;                                   // 0x0158   (0x0008)  
	SDK_UNDEFINED(8,15181) /* TWeakObjectPtr<UAudioComponent*> */ __um(WeakMetasoundPlayer);                       // 0x0160   (0x0008)  
	SDK_UNDEFINED(8,15182) /* TWeakObjectPtr<UAudioComponent*> */ __um(WeakMetasoundMixer);                        // 0x0168   (0x0008)  
	float                                              ServerStartTime;                                            // 0x0170   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0174   (0x0004)  MISSED
	FSongTimestampData                                 CurrentSongServerTimestamp;                                 // 0x0178   (0x0048)  
	FScalableFloat                                     TimeToStartSyncedClock;                                     // 0x01C0   (0x0028)  
	FTimerHandle                                       ClientLatencyCatchupTimerHandle;                            // 0x01E8   (0x0008)  
	FTimerHandle                                       ServerTimestampRecordingTimerHandle;                        // 0x01F0   (0x0008)  
	FScalableFloat                                     ServerTimestampRecordingFrequency;                          // 0x01F8   (0x0028)  
	FScalableFloat                                     MinDeltaForSeek;                                            // 0x0220   (0x0028)  
	FScalableFloat                                     MinDeltaForSpeedAdjust;                                     // 0x0248   (0x0028)  
	FScalableFloat                                     EndCorrectionDelta;                                         // 0x0270   (0x0028)  
	FScalableFloat                                     SpeedAdjustmentFactor;                                      // 0x0298   (0x0028)  
	float                                              CurrentSpeed;                                               // 0x02C0   (0x0004)  
	FName                                              MetasoundSpeedParamName;                                    // 0x02C4   (0x0004)  
	FName                                              MetasoundSeekParamName;                                     // 0x02C8   (0x0004)  
	FName                                              MetasoundTriggerName;                                       // 0x02CC   (0x0004)  
	FName                                              MetasoundOuputPinName;                                      // 0x02D0   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x02D4   (0x0004)  MISSED
	class UMetasoundGeneratorHandle*                   MetasoundPlayerGeneratorHandle;                             // 0x02D8   (0x0008)  
	class UMetasoundParameterPack*                     MetasoundPlayerSeekParamPack;                               // 0x02E0   (0x0008)  
	EPilgrimSongPlayMethod                             PlayMethod;                                                 // 0x02E8   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x02E9   (0x0003)  MISSED
	FGameplayEventListenerHandle                       SongLoadedGameplayEventHandle;                              // 0x02EC   (0x001C)  


	/// Functions
	// Function /Script/PilgrimCoreRuntime.NetworkedMusicClockManager.SetClientAudioComponentsToUse
	// void SetClientAudioComponentsToUse(class UAudioComponent* InMetasoundPlayer, class UAudioComponent* InMetasoundMixer); // [0xa769eec] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/PilgrimCoreRuntime.NetworkedMusicClockManager.PlayServerAuthoritativeSong
	// void PlayServerAuthoritativeSong(class UPilgrimSongMetadata* SongToPlay);                                             // [0x6414600] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/PilgrimCoreRuntime.NetworkedMusicClockManager.OnRep_ServerStartTime
	// void OnRep_ServerStartTime();                                                                                         // [0xa768b28] Final|Native|Private 
	// Function /Script/PilgrimCoreRuntime.NetworkedMusicClockManager.OnRep_CurrentSongServerTimestamp
	// void OnRep_CurrentSongServerTimestamp();                                                                              // [0xa768b14] Final|Native|Private 
	// Function /Script/PilgrimCoreRuntime.NetworkedMusicClockManager.OnBeat
	// void OnBeat(int32_t BeatNumber, int32_t BeatInBar);                                                                   // [0xa768a54] Final|Native|Protected 
	// Function /Script/PilgrimCoreRuntime.NetworkedMusicClockManager.OnBar
	// void OnBar(int32_t BarNumber);                                                                                        // [0xa7689bc] Final|Native|Protected 
	// Function /Script/PilgrimCoreRuntime.NetworkedMusicClockManager.GetOwnedMusicClock
	// class UMusicClockComponent* GetOwnedMusicClock();                                                                     // [0x3816bdc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/PilgrimCoreRuntime.PilgrimAbilityTask_WaitForBars
/// Size: 0x0020 (0x000078 - 0x000098)
class UPilgrimAbilityTask_WaitForBars : public UAbilityTask
{ 
public:
	SDK_UNDEFINED(16,15183) /* FMulticastInlineDelegate */ __um(OnBarHit);                                         // 0x0078   (0x0010)  
	int32_t                                            BarCount;                                                   // 0x0088   (0x0004)  
	int32_t                                            TargetBar;                                                  // 0x008C   (0x0004)  
	int32_t                                            EndAfterHits;                                               // 0x0090   (0x0004)  
	int32_t                                            CurrentIteration;                                           // 0x0094   (0x0004)  


	/// Functions
	// Function /Script/PilgrimCoreRuntime.PilgrimAbilityTask_WaitForBars.WaitForBars
	// class UPilgrimAbilityTask_WaitForBars* WaitForBars(class UGameplayAbility* OwningAbility, int32_t BarsToWaitFor, int32_t LoopFor); // [0xa76a040] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/PilgrimCoreRuntime.PilgrimAbilityTask_WaitForBeats
/// Size: 0x0020 (0x000078 - 0x000098)
class UPilgrimAbilityTask_WaitForBeats : public UAbilityTask
{ 
public:
	SDK_UNDEFINED(16,15184) /* FMulticastInlineDelegate */ __um(OnBeatHit);                                        // 0x0078   (0x0010)  
	int32_t                                            BeatCount;                                                  // 0x0088   (0x0004)  
	int32_t                                            TargetBeat;                                                 // 0x008C   (0x0004)  
	int32_t                                            EndAfterHits;                                               // 0x0090   (0x0004)  
	int32_t                                            CurrentIteration;                                           // 0x0094   (0x0004)  


	/// Functions
	// Function /Script/PilgrimCoreRuntime.PilgrimAbilityTask_WaitForBeats.WaitForBeats
	// class UPilgrimAbilityTask_WaitForBeats* WaitForBeats(class UGameplayAbility* OwningAbility, int32_t BeatsToWaitFor, int32_t LoopFor); // [0xa76a184] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/PilgrimCoreRuntime.PilgrimAbilityTask_WaitForSection
/// Size: 0x0028 (0x000078 - 0x0000A0)
class UPilgrimAbilityTask_WaitForSection : public UAbilityTask
{ 
public:
	SDK_UNDEFINED(16,15185) /* FMulticastInlineDelegate */ __um(OnSectionStarted);                                 // 0x0078   (0x0010)  
	SDK_UNDEFINED(16,15186) /* FString */              __um(TargetSectionName);                                    // 0x0088   (0x0010)  
	bool                                               bWaitForNextSection;                                        // 0x0098   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0099   (0x0007)  MISSED


	/// Functions
	// Function /Script/PilgrimCoreRuntime.PilgrimAbilityTask_WaitForSection.WaitForSection
	// class UPilgrimAbilityTask_WaitForSection* WaitForSection(class UGameplayAbility* OwningAbility, bool bShouldWaitForNextSection, FString SectionName); // [0xa76a2c8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PilgrimCoreRuntime.PilgrimAbilityTask_WaitForSection.OnSectionEvent
	// void OnSectionEvent(FString SectionName, float SectionStartMs, float SectionLengthMs);                                // [0xa768b3c] Final|Native|Private 
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimActorPoolParams
/// Size: 0x0010 (0x000000 - 0x000010)
struct FPilgrimActorPoolParams
{ 
	class UClass*                                      ActorClass;                                                 // 0x0008   (0x0008)  
};

/// Class /Script/PilgrimCoreRuntime.PilgrimActorPool
/// Size: 0x00B0 (0x000028 - 0x0000D8)
class UPilgrimActorPool : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	FPilgrimActorPoolParams                            ActorPoolParams;                                            // 0x0028   (0x0010)  
	SDK_UNDEFINED(80,15187) /* TSet<AActor*> */        __um(AvailableActors);                                      // 0x0038   (0x0050)  
	SDK_UNDEFINED(80,15188) /* TSet<AActor*> */        __um(InUseActors);                                          // 0x0088   (0x0050)  


	/// Functions
	// Function /Script/PilgrimCoreRuntime.PilgrimActorPool.TryReturnItem
	// bool TryReturnItem(class AActor* ActorToPutBack);                                                                     // [0xa769fb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/PilgrimCoreRuntime.PilgrimActorPool.ReturnAllWidgets
	// void ReturnAllWidgets();                                                                                              // [0xa769ed8] Final|Native|Public|BlueprintCallable 
	// Function /Script/PilgrimCoreRuntime.PilgrimActorPool.InitPool
	// void InitPool(FPilgrimActorPoolParams PilgrimActorPoolParams);                                                        // [0xa76887c] Final|Native|Public|BlueprintCallable 
	// Function /Script/PilgrimCoreRuntime.PilgrimActorPool.GetNumInUseItems
	// int32_t GetNumInUseItems();                                                                                           // [0xa76885c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimActorPool.GetNumAvailableItems
	// int32_t GetNumAvailableItems();                                                                                       // [0xa768844] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/PilgrimCoreRuntime.MusicClockCatchUpStarted
/// Size: 0x0010 (0x000000 - 0x000010)
struct FMusicClockCatchUpStarted
{ 
	float                                              CatchupSpeed;                                               // 0x0000   (0x0004)  
	float                                              CurrentExperiencedTime;                                     // 0x0004   (0x0004)  
	SDK_UNDEFINED(8,15189) /* TWeakObjectPtr<AFortPlayerController*> */ __um(WeakLocalPlayer);                     // 0x0008   (0x0008)  
};

/// Struct /Script/PilgrimCoreRuntime.MusicClockCatchUpData
/// Size: 0x0018 (0x000000 - 0x000018)
struct FMusicClockCatchUpData
{ 
	FMusicClockCatchUpStarted                          StartData;                                                  // 0x0000   (0x0010)  
	float                                              StartTime;                                                  // 0x0010   (0x0004)  
	float                                              MaxDesyncMs;                                                // 0x0014   (0x0004)  
};

/// Class /Script/PilgrimCoreRuntime.PilgrimAnalytics
/// Size: 0x00A8 (0x0000A0 - 0x000148)
class UPilgrimAnalytics : public UPlayspaceComponent
{ 
public:
	FMusicClockCatchUpData                             CurrentCatchUpSession;                                      // 0x00A0   (0x0018)  
	unsigned char                                      UnknownData00_6[0x90];                                      // 0x00B8   (0x0090)  MISSED
};

/// Class /Script/PilgrimCoreRuntime.PilgrimAsyncAction_RequestLeaderboard
/// Size: 0x00E8 (0x000030 - 0x000118)
class UPilgrimAsyncAction_RequestLeaderboard : public UCancellableAsyncAction
{ 
public:
	SDK_UNDEFINED(16,15190) /* FMulticastInlineDelegate */ __um(OnSuccess);                                        // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,15191) /* FMulticastInlineDelegate */ __um(OnFailure);                                        // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_6[0xC8];                                      // 0x0050   (0x00C8)  MISSED


	/// Functions
	// Function /Script/PilgrimCoreRuntime.PilgrimAsyncAction_RequestLeaderboard.PilgrimRequestLeaderboard
	// class UPilgrimAsyncAction_RequestLeaderboard* PilgrimRequestLeaderboard(class UObject* WorldContextObject, FName SongShortName, FString SpotlightGroup, EPilgrimLeaderboardType LeaderboardType, class AFortPlayerController* RequestingPlayer, bool bFriendsOnly, bool bCenteredOnRequestingPlayer, int32_t Page, bool bIsSpotlightCompetition, bool bUseCache); // [0xa768d1c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PilgrimCoreRuntime.PilgrimAsyncAction_RequestLeaderboard.LeaderboardRequestSuccessDelegate__DelegateSignature
	// void LeaderboardRequestSuccessDelegate__DelegateSignature(FPilgrimLeaderboardPage ResultPage, FPilgrimLeaderboardRequestParams RequestParams); // [0x18a39e4] MulticastDelegate|Public|Delegate 
	// Function /Script/PilgrimCoreRuntime.PilgrimAsyncAction_RequestLeaderboard.LeaderboardRequestFailureDelegate__DelegateSignature
	// void LeaderboardRequestFailureDelegate__DelegateSignature(FString Error, FPilgrimLeaderboardRequestParams RequestParams); // [0x18a39e4] MulticastDelegate|Public|Delegate 
};

/// Class /Script/PilgrimCoreRuntime.PilgrimAsyncAction_RequestPersonalBest
/// Size: 0x0258 (0x000030 - 0x000288)
class UPilgrimAsyncAction_RequestPersonalBest : public UCancellableAsyncAction
{ 
public:
	SDK_UNDEFINED(16,15192) /* FMulticastInlineDelegate */ __um(OnSuccess);                                        // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,15193) /* FMulticastInlineDelegate */ __um(OnFailure);                                        // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_6[0x238];                                     // 0x0050   (0x0238)  MISSED


	/// Functions
	// Function /Script/PilgrimCoreRuntime.PilgrimAsyncAction_RequestPersonalBest.PilgrimRequestPersonalBest
	// class UPilgrimAsyncAction_RequestPersonalBest* PilgrimRequestPersonalBest(class UObject* WorldContextObject, class AFortPlayerController* RequestingPlayer, FUniqueNetIdRepl& PlayerAccountId, FName SongShortName, EPilgrimTrackType InstrumentType, int32_t BandSize, int32_t SetlistIndex, bool bUseCache); // [0xa7690ac] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PilgrimCoreRuntime.PilgrimAsyncAction_RequestPersonalBest.PersonalBestRequestSuccessDelegate__DelegateSignature
	// void PersonalBestRequestSuccessDelegate__DelegateSignature(FPilgrimPersonalBestResult PersonalBestResult, FPilgrimPersonalBestParams RequestParams); // [0x18a39e4] MulticastDelegate|Public|Delegate 
	// Function /Script/PilgrimCoreRuntime.PilgrimAsyncAction_RequestPersonalBest.PersonalBestRequestFailureDelegate__DelegateSignature
	// void PersonalBestRequestFailureDelegate__DelegateSignature(FString Error, FPilgrimPersonalBestParams RequestParams);  // [0x18a39e4] MulticastDelegate|Public|Delegate 
};

/// Class /Script/PilgrimCoreRuntime.PilgrimAsyncAction_RequestPlayerFeed
/// Size: 0x00D0 (0x000030 - 0x000100)
class UPilgrimAsyncAction_RequestPlayerFeed : public UCancellableAsyncAction
{ 
public:
	SDK_UNDEFINED(16,15194) /* FMulticastInlineDelegate */ __um(OnSuccess);                                        // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,15195) /* FMulticastInlineDelegate */ __um(OnFailure);                                        // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_6[0xB0];                                      // 0x0050   (0x00B0)  MISSED


	/// Functions
	// Function /Script/PilgrimCoreRuntime.PilgrimAsyncAction_RequestPlayerFeed.RequestFeedSuccessDelegate__DelegateSignature
	// void RequestFeedSuccessDelegate__DelegateSignature(FPilgrimPlayerFeedResult FeedResult, FPilgrimPlayerFeedParams RequestParams); // [0x18a39e4] MulticastDelegate|Public|Delegate 
	// Function /Script/PilgrimCoreRuntime.PilgrimAsyncAction_RequestPlayerFeed.RequestFeedFailureDelegate__DelegateSignature
	// void RequestFeedFailureDelegate__DelegateSignature(FText Error, FPilgrimPlayerFeedParams RequestParams);              // [0x18a39e4] MulticastDelegate|Public|Delegate 
	// Function /Script/PilgrimCoreRuntime.PilgrimAsyncAction_RequestPlayerFeed.PilgrimRequestPlayerFeed
	// class UPilgrimAsyncAction_RequestPlayerFeed* PilgrimRequestPlayerFeed(class UObject* WorldContextObject, class AFortPlayerController* RequestingPlayer, FGameplayTagQuery& SongQuery, FSongShortNameMatcher& SongShortNameMatcher, TArray<EPilgrimLeaderboardType>& Leaderboards, TArray<FUniqueNetIdRepl>& FriendIds, EPilgrimPlayerFeedSortType SortType, bool bAllScores, bool bRequirePlayerScore); // [0xa7696b8] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/PilgrimCoreRuntime.PilgrimBeatMarker
/// Size: 0x0060 (0x000290 - 0x0002F0)
class APilgrimBeatMarker : public AActor
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0290   (0x0008)  MISSED
	SDK_UNDEFINED(32,15196) /* TWeakObjectPtr<APilgrimNowBar*> */ __um(ParentNowBarPtr);                           // 0x0298   (0x0020)  
	unsigned char                                      UnknownData01_6[0x38];                                      // 0x02B8   (0x0038)  MISSED


	/// Functions
	// Function /Script/PilgrimCoreRuntime.PilgrimBeatMarker.SetupNumLanes
	// void SetupNumLanes(int32_t NumLanes);                                                                                 // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/PilgrimCoreRuntime.PilgrimBeatMarker.OnPlacedOnTrack
	// void OnPlacedOnTrack();                                                                                               // [0x21dc214] Native|Event|Public|BlueprintEvent 
	// Function /Script/PilgrimCoreRuntime.PilgrimBeatMarker.OnBeatMarkerPassedNowBar
	// void OnBeatMarkerPassedNowBar();                                                                                      // [0x2f99b74] Native|Event|Public|BlueprintEvent 
};

/// Class /Script/PilgrimCoreRuntime.PilgrimTrackItemMgr
/// Size: 0x0038 (0x0000A0 - 0x0000D8)
class UPilgrimTrackItemMgr : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x4];                                       // 0x00A0   (0x0004)  MISSED
	SDK_UNDEFINED(8,15197) /* TWeakObjectPtr<APilgrimTrack*> */ __um(Track);                                       // 0x00A4   (0x0008)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x00AC   (0x0004)  MISSED
	class UPilgrimActorPool*                           ItemPool;                                                   // 0x00B0   (0x0008)  
	SDK_UNDEFINED(8,15198) /* TWeakObjectPtr<UPilgrimGame*> */ __um(PilgrimGame);                                  // 0x00B8   (0x0008)  
	unsigned char                                      UnknownData02_6[0x18];                                      // 0x00C0   (0x0018)  MISSED
};

/// Class /Script/PilgrimCoreRuntime.PilgrimBeatMarkerTrackItemMgr
/// Size: 0x0018 (0x0000D8 - 0x0000F0)
class UPilgrimBeatMarkerTrackItemMgr : public UPilgrimTrackItemMgr
{ 
public:
	TArray<class APilgrimBeatMarker*>                  ActiveBeatMarkers;                                          // 0x00D8   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x00E8   (0x0008)  MISSED
};

/// Class /Script/PilgrimCoreRuntime.PilgrimBeatValidatedAbility
/// Size: 0x0088 (0x000B60 - 0x000BE8)
class UPilgrimBeatValidatedAbility : public UFortGameplayAbility
{ 
public:
	FScalableFloat                                     MaxTimeDelta;                                               // 0x0B60   (0x0028)  
	FScalableFloat                                     MinClosenessToBeatMsForBonus;                               // 0x0B88   (0x0028)  
	FScalableFloat                                     MinServerClosenessToBeatMsForBonus;                         // 0x0BB0   (0x0028)  
	class UClass*                                      AbilityToRunForOnBeat;                                      // 0x0BD8   (0x0008)  
	class UClass*                                      AbilityToRunForOffBeat;                                     // 0x0BE0   (0x0008)  


	/// Functions
	// Function /Script/PilgrimCoreRuntime.PilgrimBeatValidatedAbility.OnBeatAbilityActivated
	// void OnBeatAbilityActivated(bool bOnBeat);                                                                            // [0x18a39e4] Event|Protected|BlueprintEvent 
};

/// Class /Script/PilgrimCoreRuntime.PilgrimClientSettingRecordPartition
/// Size: 0x00E0 (0x000028 - 0x000108)
class UPilgrimClientSettingRecordPartition : public UFortClientSettingRecordPartition
{ 
public:
	float                                              TrackSpeedMultiplier;                                       // 0x0028   (0x0004)  
	float                                              TrackBackgroundOpacity;                                     // 0x002C   (0x0004)  
	bool                                               UseAlternative5LaneTouchLayout;                             // 0x0030   (0x0001)  
	bool                                               OverdriveClearsGems;                                        // 0x0031   (0x0001)  
	unsigned char                                      UnknownData00_5[0x26];                                      // 0x0032   (0x0026)  MISSED
	SDK_UNDEFINED(80,15199) /* TMap<char, int32_t> */  __um(SelectedControllerPresetIndices);                      // 0x0058   (0x0050)  
	SDK_UNDEFINED(80,15200) /* TMap<char, int32_t> */  __um(SelectedKeyboardAndMousePresetIndices);                // 0x00A8   (0x0050)  
	SDK_UNDEFINED(16,15201) /* FString */              __um(SelectedGeneralControllerPreset);                      // 0x00F8   (0x0010)  


	/// Functions
	// Function /Script/PilgrimCoreRuntime.PilgrimClientSettingRecordPartition.SetUseAlternative5LaneTouchLayout
	// void SetUseAlternative5LaneTouchLayout(bool NewUseAlternative5LaneTouchLayout);                                       // [0xa76d1b8] Final|Native|Public  
	// Function /Script/PilgrimCoreRuntime.PilgrimClientSettingRecordPartition.SetTrackSpeedMultiplier
	// void SetTrackSpeedMultiplier(float NewMultiplier);                                                                    // [0xa76d12c] Final|Native|Public  
	// Function /Script/PilgrimCoreRuntime.PilgrimClientSettingRecordPartition.SetTrackBackgroundOpacity
	// void SetTrackBackgroundOpacity(float NewOpacity);                                                                     // [0xa76d0a0] Final|Native|Public  
	// Function /Script/PilgrimCoreRuntime.PilgrimClientSettingRecordPartition.SetSelectedGeneralControllerPreset
	// void SetSelectedGeneralControllerPreset(FString NewSelectedGeneralControllerPreset);                                  // [0xa76ceb4] Final|RequiredAPI|Native|Public 
	// Function /Script/PilgrimCoreRuntime.PilgrimClientSettingRecordPartition.SetOverdriveClearsGems
	// void SetOverdriveClearsGems(bool NewValue);                                                                           // [0xa76ce34] Final|Native|Public  
	// Function /Script/PilgrimCoreRuntime.PilgrimClientSettingRecordPartition.GetUseAlternative5LaneTouchLayout
	// bool GetUseAlternative5LaneTouchLayout();                                                                             // [0x3ee14c4] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimClientSettingRecordPartition.GetTrackSpeedMultiplier
	// float GetTrackSpeedMultiplier();                                                                                      // [0x3ee14d8] Final|RequiredAPI|Native|Public|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimClientSettingRecordPartition.GetTrackBackgroundOpacity
	// float GetTrackBackgroundOpacity();                                                                                    // [0x3ee14ec] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimClientSettingRecordPartition.GetSelectedGeneralControllerPreset
	// FString GetSelectedGeneralControllerPreset();                                                                         // [0xa76bba0] Final|Native|Public|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimClientSettingRecordPartition.GetOverdriveClearsGems
	// bool GetOverdriveClearsGems();                                                                                        // [0x98646c0] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/PilgrimCoreRuntime.PilgrimCoreBandStateComponent
/// Size: 0x0010 (0x0000A0 - 0x0000B0)
class UPilgrimCoreBandStateComponent : public UPlayspaceComponent
{ 
public:
	TArray<FName>                                      OwnedSongs;                                                 // 0x00A0   (0x0010)  


	/// Functions
	// Function /Script/PilgrimCoreRuntime.PilgrimCoreBandStateComponent.OnRep_OwnedSongs
	// void OnRep_OwnedSongs();                                                                                              // [0x36203b0] Final|Native|Protected 
	// Function /Script/PilgrimCoreRuntime.PilgrimCoreBandStateComponent.GetSongAtIndex
	// class UPilgrimSongMetadata* GetSongAtIndex(int32_t Index);                                                            // [0xa76bd20] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimCoreBandStateComponent.GetNextSong
	// class UPilgrimSongMetadata* GetNextSong();                                                                            // [0x688dbec] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimCoreBandStateComponent.GetCurrentSong
	// class UPilgrimSongMetadata* GetCurrentSong();                                                                         // [0x9b3e184] Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/PilgrimCoreRuntime.PilgrimCorePlayerStateComponent
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UPilgrimCorePlayerStateComponent : public USparksPlayerStateComponent
{ 
public:
	EPilgrimSongDifficulty                             SongDifficulty;                                             // 0x00A8   (0x0001)  
	EPilgrimTrackType                                  InstrumentChoice;                                           // 0x00A9   (0x0001)  
	bool                                               bIsReady;                                                   // 0x00AA   (0x0001)  
	bool                                               bIsUsingPlastic;                                            // 0x00AB   (0x0001)  
	bool                                               bPregameChoicesLocked;                                      // 0x00AC   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00AD   (0x0003)  MISSED


	/// Functions
	// Function /Script/PilgrimCoreRuntime.PilgrimCorePlayerStateComponent.SetSongDifficulty
	// void SetSongDifficulty(EPilgrimSongDifficulty Difficulty);                                                            // [0xa76d020] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/PilgrimCoreRuntime.PilgrimCorePlayerStateComponent.SetInstrumentChoice
	// void SetInstrumentChoice(EPilgrimTrackType Instrument);                                                               // [0xa76cdb4] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/PilgrimCoreRuntime.PilgrimCorePlayerStateComponent.ServerSetIsUsingPlasticInstruments
	// void ServerSetIsUsingPlasticInstruments(bool bIsPlasticAvailable);                                                    // [0xa76ccb4] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/PilgrimCoreRuntime.PilgrimCorePlayerStateComponent.ServerSetIsReady
	// void ServerSetIsReady(bool bInIsReady);                                                                               // [0xa76cbb4] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/PilgrimCoreRuntime.PilgrimCorePlayerStateComponent.OnRep_SongDifficulty
	// void OnRep_SongDifficulty(EPilgrimSongDifficulty PrevDifficulty);                                                     // [0xa76c528] Final|Native|Protected 
	// Function /Script/PilgrimCoreRuntime.PilgrimCorePlayerStateComponent.OnRep_IsReady
	// void OnRep_IsReady(bool bPrevIsReady);                                                                                // [0xa76c36c] Final|Native|Protected 
	// Function /Script/PilgrimCoreRuntime.PilgrimCorePlayerStateComponent.OnRep_InstrumentChoice
	// void OnRep_InstrumentChoice(EPilgrimTrackType PrevInstrument);                                                        // [0xa76c2b4] Final|Native|Protected 
	// Function /Script/PilgrimCoreRuntime.PilgrimCorePlayerStateComponent.GetTrackTypeForGameplay
	// EPilgrimTrackType GetTrackTypeForGameplay();                                                                          // [0xa76be70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimCorePlayerStateComponent.GetSongDifficulty
	// EPilgrimSongDifficulty GetSongDifficulty();                                                                           // [0xa76bdb4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimCorePlayerStateComponent.GetPilgrimCorePlayerStateComponent
	// class UPilgrimCorePlayerStateComponent* GetPilgrimCorePlayerStateComponent(class APlayerState* PlayerState);          // [0xa76bae0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PilgrimCoreRuntime.PilgrimCorePlayerStateComponent.GetIsReady
	// bool GetIsReady();                                                                                                    // [0xa76bab0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimCorePlayerStateComponent.GetIsPlasticInstrumentAvailable
	// bool GetIsPlasticInstrumentAvailable();                                                                               // [0xa76ba98] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimCorePlayerStateComponent.GetInstrumentChoice
	// EPilgrimTrackType GetInstrumentChoice();                                                                              // [0xa76ba80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/PilgrimCoreRuntime.PilgrimCore_BPFL
/// Size: 0x0000 (0x000028 - 0x000028)
class UPilgrimCore_BPFL : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/PilgrimCoreRuntime.PilgrimCore_BPFL.SparksInstrumentToPilgrimTrackType
	// EPilgrimTrackType SparksInstrumentToPilgrimTrackType(ESparksInstrumentType SparksType);                               // [0xa76d2f0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/PilgrimCoreRuntime.PilgrimCore_BPFL.ShouldUseTouchUIForLocalPlayer
	// bool ShouldUseTouchUIForLocalPlayer(class UObject* WorldContextObject);                                               // [0xa76d238] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/PilgrimCoreRuntime.PilgrimCore_BPFL.PilgrimTrackTypeToSparksInstrument
	// ESparksInstrumentType PilgrimTrackTypeToSparksInstrument(EPilgrimTrackType PilgrimType);                              // [0xa76c7ec] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/PilgrimCoreRuntime.PilgrimCore_BPFL.PilgrimTrackTypeToMidiTrackName
	// FString PilgrimTrackTypeToMidiTrackName(EPilgrimTrackType PilgrimType);                                               // [0xa76c75c] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/PilgrimCoreRuntime.PilgrimCore_BPFL.MidiTrackNameToPilgrimTrackType
	// EPilgrimTrackType MidiTrackNameToPilgrimTrackType(FString MidiTrackName);                                             // [0xa76c158] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/PilgrimCoreRuntime.PilgrimCore_BPFL.InstrumentTypesAreEqual
	// bool InstrumentTypesAreEqual(ESparksInstrumentType SparksType, EPilgrimTrackType PilgrimType);                        // [0xa76c094] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/PilgrimCoreRuntime.PilgrimCore_BPFL.GetPlatformTimeSeconds
	// float GetPlatformTimeSeconds();                                                                                       // [0xa76bb78] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimCustomSetlistEntry
/// Size: 0x000C (0x000000 - 0x00000C)
struct FPilgrimCustomSetlistEntry
{ 
	FName                                              SongShortName;                                              // 0x0000   (0x0004)  
	SDK_UNDEFINED(8,15202) /* TWeakObjectPtr<APlayerState*> */ __um(AddedByPlayer);                                // 0x0004   (0x0008)  
};

/// Class /Script/PilgrimCoreRuntime.PilgrimCustomSetlist
/// Size: 0x0048 (0x0000A0 - 0x0000E8)
class UPilgrimCustomSetlist : public UPlayspaceComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x20];                                      // 0x00A0   (0x0020)  MISSED
	SDK_UNDEFINED(16,15203) /* FMulticastInlineDelegate */ __um(OnLockedStateChanged);                             // 0x00C0   (0x0010)  
	TArray<FPilgrimCustomSetlistEntry>                 SetlistEntries;                                             // 0x00D0   (0x0010)  
	int32_t                                            MaxSongsPerPlayer;                                          // 0x00E0   (0x0004)  
	bool                                               bIsSetlistLocked;                                           // 0x00E4   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x00E5   (0x0003)  MISSED


	/// Functions
	// Function /Script/PilgrimCoreRuntime.PilgrimCustomSetlist.SetlistLockedStateChangedDelegate__DelegateSignature
	// void SetlistLockedStateChangedDelegate__DelegateSignature(class UPilgrimCustomSetlist* Setlist, bool bIsLocked);      // [0x18a39e4] MulticastDelegate|Public|Delegate 
	// Function /Script/PilgrimCoreRuntime.PilgrimCustomSetlist.ServerSetMaxSongsPerPlayer
	// void ServerSetMaxSongsPerPlayer(int32_t NewMax);                                                                      // [0xa76cd34] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/PilgrimCoreRuntime.PilgrimCustomSetlist.ServerSetIsSetlistLocked
	// void ServerSetIsSetlistLocked(bool bInIsLocked);                                                                      // [0xa76cc34] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/PilgrimCoreRuntime.PilgrimCustomSetlist.ServerRemoveSongForPlayer
	// void ServerRemoveSongForPlayer(FName SongShortName, class APlayerState* Player, bool bRemoveAll);                     // [0xa76cabc] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/PilgrimCoreRuntime.PilgrimCustomSetlist.ServerRemoveSongAtIndex
	// void ServerRemoveSongAtIndex(int32_t Index, FName SongShortName, class APlayerState* Player);                         // [0xa76c9c4] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/PilgrimCoreRuntime.PilgrimCustomSetlist.ServerRemoveAllSongsForPlayer
	// void ServerRemoveAllSongsForPlayer(class APlayerState* Player);                                                       // [0xa76c944] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/PilgrimCoreRuntime.PilgrimCustomSetlist.ServerRemoveAllSongs
	// void ServerRemoveAllSongs();                                                                                          // [0xa76c930] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/PilgrimCoreRuntime.PilgrimCustomSetlist.ServerAddSongForPlayer
	// void ServerAddSongForPlayer(FName SongShortName, class APlayerState* Player);                                         // [0xa76c86c] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/PilgrimCoreRuntime.PilgrimCustomSetlist.OnRep_SetlistEntries
	// void OnRep_SetlistEntries();                                                                                          // [0xa76c4e0] Final|Native|Protected 
	// Function /Script/PilgrimCoreRuntime.PilgrimCustomSetlist.OnRep_MaxSongsPerPlayer
	// void OnRep_MaxSongsPerPlayer(int32_t PrevMax);                                                                        // [0xa76c438] Final|Native|Protected 
	// Function /Script/PilgrimCoreRuntime.PilgrimCustomSetlist.HasPlayerAddedSong
	// bool HasPlayerAddedSong(FName SongShortName, class APlayerState* Player);                                             // [0xa76bf98] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimCustomSetlist.HasAnyoneAddedSong
	// bool HasAnyoneAddedSong(FName SongShortName, class APlayerState*& OutAddedByPlayer);                                  // [0xa76be90] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimCustomSetlist.GetSongsAddedByPlayer
	// TArray<FName> GetSongsAddedByPlayer(class APlayerState* Player);                                                      // [0xa76bdcc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimCustomSetlist.GetSetlistEntryAtIndex
	// void GetSetlistEntryAtIndex(int32_t Index, FName& OutSongShortName, class APlayerState*& OutAddedByPlayer);           // [0xa76bbec] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimCustomSetlist.GetMaxSongsPerPlayer
	// int32_t GetMaxSongsPerPlayer();                                                                                       // [0x70cea6c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimCustomSetlist.GetIsSetlistLocked
	// bool GetIsSetlistLocked();                                                                                            // [0xa76bac8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimCustomSetlist.FindEntriesForSongAndPlayer
	// void FindEntriesForSongAndPlayer(FName SongShortName, class APlayerState* Player, TArray<int32_t>& OutMatchingEntryIndicies); // [0xa76b968] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimCustomSetlist.FindEntriesForSong
	// void FindEntriesForSong(FName SongShortName, TArray<int32_t>& OutMatchingEntryIndicies);                              // [0xa76b884] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimCustomSetlist.FindEntriesForPlayer
	// void FindEntriesForPlayer(class APlayerState* Player, TArray<int32_t>& OutMatchingEntryIndicies);                     // [0xa76b7a0] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimCustomSetlist.CanAddSongForPlayer
	// bool CanAddSongForPlayer(FName SongShortName, class APlayerState* Player, EPilgrimCantAddSongReason& OutReason, class APlayerState*& OutAddedByPlayer); // [0xa76b63c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/PilgrimCoreRuntime.PilgrimDanceSynchronizerComponent
/// Size: 0x0000 (0x0000F8 - 0x0000F8)
class UPilgrimDanceSynchronizerComponent : public USparksDanceSynchronizerComponent
{ 
public:
};

/// Class /Script/PilgrimCoreRuntime.PilgrimDelayUntilTimeBeforeMidiTick
/// Size: 0x0030 (0x000030 - 0x000060)
class UPilgrimDelayUntilTimeBeforeMidiTick : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,15204) /* FMulticastInlineDelegate */ __um(OnFinished);                                       // 0x0030   (0x0010)  
	unsigned char                                      UnknownData00_5[0x10];                                      // 0x0040   (0x0010)  MISSED
	class UPilgrimGame*                                PilgrimGame;                                                // 0x0050   (0x0008)  
	class UObject*                                     Passthrough;                                                // 0x0058   (0x0008)  


	/// Functions
	// Function /Script/PilgrimCoreRuntime.PilgrimDelayUntilTimeBeforeMidiTick.TimerTick
	// void TimerTick();                                                                                                     // [0xa76d370] Final|Native|Public  
	// Function /Script/PilgrimCoreRuntime.PilgrimDelayUntilTimeBeforeMidiTick.PilgrimDelayUntilTimeBeforeMidiTick
	// class UPilgrimDelayUntilTimeBeforeMidiTick* PilgrimDelayUntilTimeBeforeMidiTick(class UObject* PassthroughObject, class UPilgrimGame* PilgrimGameContext, int32_t MidiTick, float SecondsBeforeTick, ECalibratedMusicTimebase Timebase); // [0xa76c5e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PilgrimCoreRuntime.PilgrimDelayUntilTimeBeforeMidiTick.OnPilgrimDelayUntilTimeBeforeMidiTickDelegate__DelegateSignature
	// void OnPilgrimDelayUntilTimeBeforeMidiTickDelegate__DelegateSignature(class UObject* PassthroughObject);              // [0x18a39e4] MulticastDelegate|Public|Delegate 
};

/// Class /Script/PilgrimCoreRuntime.PilgrimEventRouterLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UPilgrimEventRouterLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/PilgrimCoreRuntime.PilgrimEventRouterLibrary.GetGameplayEventRouter
	// class UGameplayEventRouterComponent* GetGameplayEventRouter(class AActor* ContextActor);                              // [0xa76f414] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/PilgrimCoreRuntime.PilgrimGame
/// Size: 0x05A0 (0x0000A0 - 0x000640)
class UPilgrimGame : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x10];                                      // 0x00A0   (0x0010)  MISSED
	SDK_UNDEFINED(16,15205) /* FMulticastInlineDelegate */ __um(OnGameScoreUpdated);                               // 0x00B0   (0x0010)  
	SDK_UNDEFINED(16,15206) /* FMulticastInlineDelegate */ __um(OnSongEnded);                                      // 0x00C0   (0x0010)  
	unsigned char                                      UnknownData01_5[0x10];                                      // 0x00D0   (0x0010)  MISSED
	SDK_UNDEFINED(16,15207) /* FMulticastInlineDelegate */ __um(OnAutoplayUpdated);                                // 0x00E0   (0x0010)  
	SDK_UNDEFINED(16,15208) /* FMulticastInlineDelegate */ __um(OnDisableMissUpdated);                             // 0x00F0   (0x0010)  
	int32_t                                            CurrentSeekMs;                                              // 0x0100   (0x0004)  
	float                                              JumpMarkerStart;                                            // 0x0104   (0x0004)  
	float                                              JumpMarkerEnd;                                              // 0x0108   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x010C   (0x0004)  MISSED
	class UPilgrimScoringModel*                        ScoringModel;                                               // 0x0110   (0x0008)  
	class UPilgrimGameConfig*                          PilgrimGameConfig;                                          // 0x0118   (0x0008)  
	unsigned char                                      UnknownData03_5[0x10];                                      // 0x0120   (0x0010)  MISSED
	class UPilgrimPlayerControllerComponent*           OwnerControllerComponent;                                   // 0x0130   (0x0008)  
	class UAudioComponent*                             MetasoundPlayer;                                            // 0x0138   (0x0008)  
	class UAudioComponent*                             MetasoundMixer;                                             // 0x0140   (0x0008)  
	class UMusicClockComponent*                        MusicClock;                                                 // 0x0148   (0x0008)  
	class UMetasoundGeneratorHandle*                   MetasoundPlayerGeneratorHandle;                             // 0x0150   (0x0008)  
	class UMetasoundParameterPack*                     MetasoundPlayerSeekParamPack;                               // 0x0158   (0x0008)  
	class UPilgrimMediaStreamer*                       PilgrimMediaStreamer;                                       // 0x0160   (0x0008)  
	class APilgrimTrack*                               MainTrack;                                                  // 0x0168   (0x0008)  
	class USoundBase*                                  MissSound;                                                  // 0x0170   (0x0008)  
	class UPilgrimGameEvaluator*                       PilgrimGameEvaluator;                                       // 0x0178   (0x0008)  
	SDK_UNDEFINED(80,15209) /* TMap<EPilgrimTrackLane, FPilgrimGameInProgressSustain> */ __um(InProgressSustains); // 0x0180   (0x0050)  
	unsigned char                                      UnknownData04_5[0x390];                                     // 0x01D0   (0x0390)  MISSED
	class UPilgrimSongData*                            SongData;                                                   // 0x0560   (0x0008)  
	unsigned char                                      UnknownData05_5[0x18];                                      // 0x0568   (0x0018)  MISSED
	class UPilgrimMidiEventRouter*                     MidiEventRouter;                                            // 0x0580   (0x0008)  
	unsigned char                                      UnknownData06_6[0xB8];                                      // 0x0588   (0x00B8)  MISSED


	/// Functions
	// Function /Script/PilgrimCoreRuntime.PilgrimGame.StopSong
	// void StopSong();                                                                                                      // [0xa7702e8] Final|Native|Public|BlueprintCallable 
	// Function /Script/PilgrimCoreRuntime.PilgrimGame.SetLocalPlayer
	// void SetLocalPlayer(class APlayerController* OwnerPC);                                                                // [0xa770020] Final|Native|Public|BlueprintCallable 
	// Function /Script/PilgrimCoreRuntime.PilgrimGame.SetJumpMarkers
	// void SetJumpMarkers(int32_t FromMillisecnods, int32_t ToMilliseconds);                                                // [0xa76ff60] Final|Native|Public|BlueprintCallable 
	// Function /Script/PilgrimCoreRuntime.PilgrimGame.SetDifficultyAndTrackType
	// void SetDifficultyAndTrackType(EPilgrimSongDifficulty Difficulty, EPilgrimTrackType TrackType);                       // [0xa76fe98] Final|Native|Public|BlueprintCallable 
	// Function /Script/PilgrimCoreRuntime.PilgrimGame.SeekToTime
	// void SeekToTime(int32_t Milliseconds);                                                                                // [0xa76fe18] Final|Native|Public|BlueprintCallable 
	// Function /Script/PilgrimCoreRuntime.PilgrimGame.ProcessSwing
	// void ProcessSwing(EPilgrimTrackLane Lane, bool bIsPress);                                                             // [0xa76fd54] Final|Native|Public  
	// Function /Script/PilgrimCoreRuntime.PilgrimGame.PlaySongStreamed
	// void PlaySongStreamed(class UAudioComponent* InMetasoundPlayer, class UAudioComponent* InMetasoundMixer, class UMusicClockComponent* InMusicClock, class UPilgrimMediaStreamer* InStreamer); // [0xa76fc14] Final|Native|Public|BlueprintCallable 
	// Function /Script/PilgrimCoreRuntime.PilgrimGame.PlaySong
	// void PlaySong(class UAudioComponent* InMetasoundPlayer, class UAudioComponent* InMetasoundMixer, class UMusicClockComponent* InMusicClock, class UPilgrimSongMetadata* InSong); // [0xa76fad4] Final|Native|Public|BlueprintCallable 
	// Function /Script/PilgrimCoreRuntime.PilgrimGame.PilgrimGameSongEnded__DelegateSignature
	// void PilgrimGameSongEnded__DelegateSignature();                                                                       // [0x18a39e4] MulticastDelegate|Public|Delegate 
	// Function /Script/PilgrimCoreRuntime.PilgrimGame.PilgrimGameScoreUpdated__DelegateSignature
	// void PilgrimGameScoreUpdated__DelegateSignature(FPilgrimGameProgress& Score);                                         // [0x18a39e4] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/PilgrimCoreRuntime.PilgrimGame.PilgrimGameDoneProcessingInput__DelegateSignature
	// void PilgrimGameDoneProcessingInput__DelegateSignature();                                                             // [0x18a39e4] MulticastDelegate|Public|Delegate 
	// Function /Script/PilgrimCoreRuntime.PilgrimGame.PilgrimGameDisableMissUpdated__DelegateSignature
	// void PilgrimGameDisableMissUpdated__DelegateSignature(bool Enabled);                                                  // [0x18a39e4] MulticastDelegate|Public|Delegate 
	// Function /Script/PilgrimCoreRuntime.PilgrimGame.PilgrimGameAutoplayUpdated__DelegateSignature
	// void PilgrimGameAutoplayUpdated__DelegateSignature(bool Enabled);                                                     // [0x18a39e4] MulticastDelegate|Public|Delegate 
	// Function /Script/PilgrimCoreRuntime.PilgrimGame.OnMusicResumed
	// void OnMusicResumed();                                                                                                // [0xa76fac0] Final|Native|Protected 
	// Function /Script/PilgrimCoreRuntime.PilgrimGame.OnMusicReachedEndOfPlayback
	// void OnMusicReachedEndOfPlayback();                                                                                   // [0xa76faa8] Final|Native|Protected 
	// Function /Script/PilgrimCoreRuntime.PilgrimGame.OnInputMethodChanged
	// void OnInputMethodChanged(ECommonInputType CurrentInputType);                                                         // [0xa76fa2c] Final|Native|Protected 
	// Function /Script/PilgrimCoreRuntime.PilgrimGame.OnEndedByServer
	// void OnEndedByServer();                                                                                               // [0xa76fa18] Final|Native|Public|BlueprintCallable 
	// Function /Script/PilgrimCoreRuntime.PilgrimGame.OnControlMappingsRebuilt
	// void OnControlMappingsRebuilt();                                                                                      // [0xa76fa04] Final|Native|Protected 
	// Function /Script/PilgrimCoreRuntime.PilgrimGame.IsInputSpecificGemShapesEnabled
	// bool IsInputSpecificGemShapesEnabled();                                                                               // [0xa76f9e4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimGame.IsGameEnded
	// bool IsGameEnded();                                                                                                   // [0xa76f9cc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimGame.IsDisableMissEnabled
	// bool IsDisableMissEnabled();                                                                                          // [0xa76f9a8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimGame.IsAutoplayEnabled
	// bool IsAutoplayEnabled();                                                                                             // [0xa76f984] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimGame.GetTotalSecondsSinceGameEnd
	// float GetTotalSecondsSinceGameEnd();                                                                                  // [0xa76f95c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimGame.GetSongLengthMs
	// float GetSongLengthMs();                                                                                              // [0xa76f93c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimGame.GetSelectedTrackType
	// EPilgrimTrackType GetSelectedTrackType();                                                                             // [0xa76f924] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimGame.GetSelectedDifficulty
	// EPilgrimSongDifficulty GetSelectedDifficulty();                                                                       // [0xa76f8f8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimGame.GetNumLanes
	// int32_t GetNumLanes();                                                                                                // [0xa76f8e0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/PilgrimCoreRuntime.PilgrimGame.GetMusicClock
	// class UMusicClockComponent* GetMusicClock();                                                                          // [0x688dba0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimGame.GetMainTrack
	// class APilgrimTrack* GetMainTrack();                                                                                  // [0xa76f8c8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimGame.GetLocalPlayerController
	// class APlayerController* GetLocalPlayerController();                                                                  // [0xa76f8a4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimGame.GetKeyBoundToLane
	// FKey GetKeyBoundToLane(EPilgrimTrackLane Lane);                                                                       // [0xa76f7fc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimGame.GetInputNameForLane
	// FName GetInputNameForLane(EPilgrimTrackLane Lane);                                                                    // [0xa76f774] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimGame.GetHitOffsetAverage
	// float GetHitOffsetAverage();                                                                                          // [0xa76f75c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimGame.GetGemBreakForTrackDifficulty
	// bool GetGemBreakForTrackDifficulty(EPilgrimTrackType Track, EPilgrimSongDifficulty Difficulty, FPilgrimGemBreak& FoundBreak, float& BarsLeftInBreak, FPilgrimGemBreak& NextBreak, float& BarsTillNextBreak); // [0xa76f494] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimGame.GetGameConfigSettings
	// FPilgrimGameConfigSettings GetGameConfigSettings();                                                                   // [0xa76f3f8] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/PilgrimCoreRuntime.PilgrimGame.GetCurrentSongTick
	// float GetCurrentSongTick(ECalibratedMusicTimebase InTimebase);                                                        // [0xa76f360] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimGame.GetCurrentSongMs
	// float GetCurrentSongMs(ECalibratedMusicTimebase InTimebase);                                                          // [0xa76f2d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimGame.GetCurrentODValue
	// float GetCurrentODValue();                                                                                            // [0xa76f2a4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimGame.GetCurrentMeasureBeatTick
	// FPilgrimSongMeasurePosition GetCurrentMeasureBeatTick();                                                              // [0xa76f22c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimGame.EndGame
	// void EndGame(bool bFadeOut, float FadeOutDurationSeconds);                                                            // [0xa76f168] Final|Native|Public|BlueprintCallable 
	// Function /Script/PilgrimCoreRuntime.PilgrimGame.CheatSetPerformanceData
	// void CheatSetPerformanceData(FPilgrimCheatPerformanceArgument& PerformanceArgument);                                  // [0xa76f0d0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PilgrimCoreRuntime.PilgrimGame.CheatSetJumpMarkers
	// void CheatSetJumpMarkers(FString FromTime, FString ToTime);                                                           // [0xa76eee4] Final|Native|Public|BlueprintCallable 
	// Function /Script/PilgrimCoreRuntime.PilgrimGame.CheatEndSong
	// void CheatEndSong();                                                                                                  // [0xa76eeb4] Final|Native|Public|BlueprintCallable 
	// Function /Script/PilgrimCoreRuntime.PilgrimGame.ApplySettingsFromConfig
	// void ApplySettingsFromConfig(class UPilgrimGameConfig* GameConfig);                                                   // [0xa76ed3c] Final|Native|Public|BlueprintCallable 
	// Function /Script/PilgrimCoreRuntime.PilgrimGame.AddTrack
	// void AddTrack(class APilgrimTrack* Track);                                                                            // [0xa76eb74] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimSongSettings
/// Size: 0x0010 (0x000000 - 0x000010)
struct FPilgrimSongSettings
{ 
	class UPilgrimSongMetadata*                        Song;                                                       // 0x0000   (0x0008)  
	FName                                              SongShortName;                                              // 0x0008   (0x0004)  
	EPilgrimSongDifficulty                             Difficulty;                                                 // 0x000C   (0x0001)  
	EPilgrimTrackType                                  TrackType;                                                  // 0x000D   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x000E   (0x0002)  MISSED
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimScoreMultiplierInfo
/// Size: 0x0008 (0x000000 - 0x000008)
struct FPilgrimScoreMultiplierInfo
{ 
	int32_t                                            NotesCount;                                                 // 0x0000   (0x0004)  
	int32_t                                            ScoreMultiplier;                                            // 0x0004   (0x0004)  
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimAccuracyTier
/// Size: 0x0020 (0x000000 - 0x000020)
struct FPilgrimAccuracyTier
{ 
	float                                              ThresholdMs;                                                // 0x0000   (0x0004)  
	float                                              ScoreMultiplier;                                            // 0x0004   (0x0004)  
	SDK_UNDEFINED(24,15210) /* FText */                __um(Name);                                                 // 0x0008   (0x0018)  
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimGameConfigSettings
/// Size: 0x02F0 (0x000000 - 0x0002F0)
struct FPilgrimGameConfigSettings
{ 
	float                                              SlopMs;                                                     // 0x0000   (0x0004)  
	float                                              GemBreakEndInputUnlockMs;                                   // 0x0004   (0x0004)  
	float                                              EndOfTrackBuffer;                                           // 0x0008   (0x0004)  
	float                                              MsToNowBar;                                                 // 0x000C   (0x0004)  
	float                                              BackgroundTrackDb;                                          // 0x0010   (0x0004)  
	float                                              BackgroundTrackGain;                                        // 0x0014   (0x0004)  
	float                                              FireMidiEventTicksEarly;                                    // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x001C   (0x0004)  MISSED
	SDK_UNDEFINED(80,15211) /* TMap<EPilgrimSongDifficulty, float> */ __um(BaseGemScoreValue);                     // 0x0020   (0x0050)  
	int32_t                                            SustainScorePerBeat;                                        // 0x0070   (0x0004)  
	float                                              OutroPreAlertSeconds;                                       // 0x0074   (0x0004)  
	TArray<FPilgrimScoreMultiplierInfo>                ScoreMultiplierDefinitions;                                 // 0x0078   (0x0010)  
	SDK_UNDEFINED(80,15212) /* TMap<EPilgrimSongDifficulty, FPlayerHealthModifiers> */ __um(PlayerHealthModifiers); // 0x0088   (0x0050)  
	TArray<float>                                      PilgrimHealthCrowdResponseTiers;                            // 0x00D8   (0x0010)  
	SDK_UNDEFINED(80,15213) /* TMap<EPilgrimSongDifficulty, FStarPercentageThresholds> */ __um(IndividualStarPercentageThresholds); // 0x00E8   (0x0050)  
	TArray<float>                                      BandStarPercentageThresholds;                               // 0x0138   (0x0010)  
	bool                                               IsBandMultiplierBasedOnUniqueInstruments;                   // 0x0148   (0x0001)  
	bool                                               IsBandVarietyBonusScoredDuringPlay;                         // 0x0149   (0x0001)  
	unsigned char                                      UnknownData01_5[0x6];                                       // 0x014A   (0x0006)  MISSED
	TArray<float>                                      BandOverdriveScoreMultipliers;                              // 0x0150   (0x0010)  
	TArray<float>                                      BandVarietyScoreMultipliers;                                // 0x0160   (0x0010)  
	TArray<FPilgrimAccuracyTier>                       AccuracyTiers;                                              // 0x0170   (0x0010)  
	int32_t                                            MaximumDisplayedAccuracyTierIndex;                          // 0x0180   (0x0004)  
	float                                              TeamQuickplayInitialHealth;                                 // 0x0184   (0x0004)  
	float                                              TeamQuickplayOverdriveDecayRate;                            // 0x0188   (0x0004)  
	float                                              TeamQuickplayInitialOverdrive;                              // 0x018C   (0x0004)  
	float                                              TeamQuickplayOverdrive;                                     // 0x0190   (0x0004)  
	float                                              TeamQuickplayOverdriveScoreMultiplier;                      // 0x0194   (0x0004)  
	float                                              TeamQuickplayOverdriveHealthGainMultiplier;                 // 0x0198   (0x0004)  
	float                                              TeamQuickplayRequiredOverdriveToActivate;                   // 0x019C   (0x0004)  
	float                                              TeamQuickplayOverdriveAddedOnSuccesfulSection;              // 0x01A0   (0x0004)  
	bool                                               bOverdriveClearsGems;                                       // 0x01A4   (0x0001)  
	bool                                               bOverdriveClearAutoHoldSustain;                             // 0x01A5   (0x0001)  
	unsigned char                                      UnknownData02_5[0x2];                                       // 0x01A6   (0x0002)  MISSED
	float                                              GemBreakPendingBars;                                        // 0x01A8   (0x0004)  
	bool                                               bEnableInputSpecificGemsAndSmashers;                        // 0x01AC   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x01AD   (0x0003)  MISSED
	class UPilgrimInputConfig*                         InputConfig;                                                // 0x01B0   (0x0008)  
	bool                                               bEnableOverdriveSystem;                                     // 0x01B8   (0x0001)  
	bool                                               bEnableCaptureSystem;                                       // 0x01B9   (0x0001)  
	bool                                               bEnableBandPerformanceScoring;                              // 0x01BA   (0x0001)  
	unsigned char                                      UnknownData04_5[0x1];                                       // 0x01BB   (0x0001)  MISSED
	float                                              ArenaInitialShields;                                        // 0x01BC   (0x0004)  
	float                                              ArenaInitialHealth;                                         // 0x01C0   (0x0004)  
	bool                                               ArenaInitialAmmo;                                           // 0x01C4   (0x0001)  
	unsigned char                                      UnknownData05_5[0x3];                                       // 0x01C5   (0x0003)  MISSED
	SDK_UNDEFINED(80,15214) /* TMap<EPilgrimSongDifficulty, float> */ __um(DifficultyCaptureFactors);              // 0x01C8   (0x0050)  
	SDK_UNDEFINED(80,15215) /* TMap<EPilgrimTrackType, UPilgrimInstrumentConfig*> */ __um(PerInstrumentConfigs);   // 0x0218   (0x0050)  
	TArray<int32_t>                                    StreakToastThresholds;                                      // 0x0268   (0x0010)  
	SDK_UNDEFINED(80,15216) /* TMap<ESparksInstrumentType, USoundCue*> */ __um(InstrumentTypeMissCues);            // 0x0278   (0x0050)  
	class USoundCue*                                   DefaultInstrumentTypeMissCue;                               // 0x02C8   (0x0008)  
	bool                                               CreateStandinBandmembers;                                   // 0x02D0   (0x0001)  
	unsigned char                                      UnknownData06_5[0x7];                                       // 0x02D1   (0x0007)  MISSED
	TArray<EPilgrimSongDifficulty>                     SupportedDifficulties;                                      // 0x02D8   (0x0010)  
	float                                              SongIntroEmbargoMs;                                         // 0x02E8   (0x0004)  
	unsigned char                                      UnknownData07_6[0x4];                                       // 0x02EC   (0x0004)  MISSED
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimStreakInfo
/// Size: 0x0008 (0x000000 - 0x000008)
struct FPilgrimStreakInfo
{ 
	int32_t                                            NotesCount;                                                 // 0x0000   (0x0004)  
	float                                              DamageMultiplier;                                           // 0x0004   (0x0004)  
};

/// Class /Script/PilgrimCoreRuntime.PilgrimGameConfig
/// Size: 0x0390 (0x000030 - 0x0003C0)
class UPilgrimGameConfig : public UPrimaryDataAsset
{ 
public:
	FPilgrimSongSettings                               SongSettings;                                               // 0x0030   (0x0010)  
	FPilgrimGameConfigSettings                         ConfigSettings;                                             // 0x0040   (0x02F0)  
	class USoundBase*                                  MissSound;                                                  // 0x0330   (0x0008)  
	float                                              MaxHp;                                                      // 0x0338   (0x0004)  
	float                                              DamagePerHit;                                               // 0x033C   (0x0004)  
	SDK_UNDEFINED(80,15217) /* TMap<EFortRarity, float> */ __um(WeaponRarityToNoteDamage);                         // 0x0340   (0x0050)  
	TArray<FPilgrimStreakInfo>                         StreakDefinitions;                                          // 0x0390   (0x0010)  
	TArray<class UAnimBoneCompressionSettings*>        SideloadLipsyncAnim_BoneCompressionSettings;                // 0x03A0   (0x0010)  
	TArray<class UAnimCurveCompressionSettings*>       SideloadLipsyncAnim_CurveCompressionSettings;               // 0x03B0   (0x0010)  
};

/// Class /Script/PilgrimCoreRuntime.PilgrimInstrumentConfig
/// Size: 0x00B8 (0x000030 - 0x0000E8)
class UPilgrimInstrumentConfig : public UPrimaryDataAsset
{ 
public:
	TArray<FPilgrimScoreMultiplierInfo>                ScoreMultiplierDefinitions;                                 // 0x0030   (0x0010)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0040   (0x0008)  MISSED
	SDK_UNDEFINED(80,15218) /* TMap<EPilgrimSongDifficulty, FStarPercentageThresholds> */ __um(IndividualStarPercentageThresholds); // 0x0048   (0x0050)  
	SDK_UNDEFINED(80,15219) /* TMap<EPilgrimSongDifficulty, float> */ __um(BaseGemScoreValue);                     // 0x0098   (0x0050)  
};

/// Class /Script/PilgrimCoreRuntime.PilgrimGameDeveloperSettings
/// Size: 0x0018 (0x000030 - 0x000048)
class UPilgrimGameDeveloperSettings : public UDeveloperSettings
{ 
public:
	FPilgrimSongSettings                               SongOverrides;                                              // 0x0030   (0x0010)  
	bool                                               bEnforceSongEntitlements;                                   // 0x0040   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0041   (0x0007)  MISSED
};

/// Class /Script/PilgrimCoreRuntime.PilgrimGameEvaluator
/// Size: 0x0238 (0x000028 - 0x000260)
class UPilgrimGameEvaluator : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	class UPilgrimSongData*                            CurrentSongData;                                            // 0x0028   (0x0008)  
	class UPilgrimSongMetadata*                        SongMetadata;                                               // 0x0030   (0x0008)  
	class UPilgrimScoreDebugPrinter*                   DebugScoreListener;                                         // 0x0038   (0x0008)  
	SDK_UNDEFINED(8,15220) /* TWeakObjectPtr<AActor*> */ __um(ContextActor);                                       // 0x0040   (0x0008)  
	class UPilgrimGameConfig*                          PilgrimGameConfig;                                          // 0x0048   (0x0008)  
	class UPilgrimScoringModel*                        ScoringModel;                                               // 0x0050   (0x0008)  
	unsigned char                                      UnknownData01_6[0x208];                                     // 0x0058   (0x0208)  MISSED
};

/// Class /Script/PilgrimCoreRuntime.PilgrimGameUserSettings
/// Size: 0x0008 (0x000028 - 0x000030)
class UPilgrimGameUserSettings : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	EPilgrimSongDifficulty                             SongDifficulty;                                             // 0x0028   (0x0001)  
	EPilgrimTrackType                                  SelectedInstrument;                                         // 0x0029   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x002A   (0x0006)  MISSED


	/// Functions
	// Function /Script/PilgrimCoreRuntime.PilgrimGameUserSettings.SetSongDifficulty
	// void SetSongDifficulty(EPilgrimSongDifficulty NewDifficulty);                                                         // [0xa770268] Final|Native|Public  
	// Function /Script/PilgrimCoreRuntime.PilgrimGameUserSettings.SetSelectedInstrument
	// void SetSelectedInstrument(EPilgrimTrackType NewInstrument);                                                          // [0xa7701e8] Final|Native|Public  
	// Function /Script/PilgrimCoreRuntime.PilgrimGameUserSettings.GetSongDifficulty
	// EPilgrimSongDifficulty GetSongDifficulty();                                                                           // [0x3eacdc8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimGameUserSettings.GetSelectedInstrument
	// EPilgrimTrackType GetSelectedInstrument();                                                                            // [0xa76f910] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/PilgrimCoreRuntime.PilgrimGem
/// Size: 0x0088 (0x000290 - 0x000318)
class APilgrimGem : public AActor
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0290   (0x0008)  MISSED
	SDK_UNDEFINED(16,15221) /* FMulticastInlineDelegate */ __um(OnGemSmashFinished);                               // 0x0298   (0x0010)  
	SDK_UNDEFINED(16,15222) /* FMulticastInlineDelegate */ __um(OnGemEnteredSlopWindow);                           // 0x02A8   (0x0010)  
	SDK_UNDEFINED(16,15223) /* FMulticastInlineDelegate */ __um(OnGemExitedSlopWindow);                            // 0x02B8   (0x0010)  
	SDK_UNDEFINED(8,15224) /* TWeakObjectPtr<APilgrimGemSmasher*> */ __um(ParentSmasherPtr);                       // 0x02C8   (0x0008)  
	SDK_UNDEFINED(8,15225) /* TWeakObjectPtr<UPilgrimGame*> */ __um(ParentGamePtr);                                // 0x02D0   (0x0008)  
	class APilgrimTrackSustain*                        RelatedSustain;                                             // 0x02D8   (0x0008)  
	unsigned char                                      UnknownData01_6[0x38];                                      // 0x02E0   (0x0038)  MISSED


	/// Functions
	// Function /Script/PilgrimCoreRuntime.PilgrimGem.UpdateGemInput
	// void UpdateGemInput();                                                                                                // [0xa772100] Final|Native|Public  
	// Function /Script/PilgrimCoreRuntime.PilgrimGem.OnPilgrimGemEvent__DelegateSignature
	// void OnPilgrimGemEvent__DelegateSignature(class APilgrimGem* Gem);                                                    // [0x18a39e4] MulticastDelegate|Public|Delegate 
	// Function /Script/PilgrimCoreRuntime.PilgrimGem.OnLaneSet
	// void OnLaneSet(FTrackItemInfo& Gem);                                                                                  // [0xa771fec] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/PilgrimCoreRuntime.PilgrimGem.OnGemSmashed
	// void OnGemSmashed();                                                                                                  // [0x2f99b74] Native|Event|Public|BlueprintEvent 
	// Function /Script/PilgrimCoreRuntime.PilgrimGem.OnGemPassed
	// void OnGemPassed();                                                                                                   // [0x21dc214] Native|Event|Public|BlueprintEvent 
	// Function /Script/PilgrimCoreRuntime.PilgrimGem.OnGemInputUpdated
	// void OnGemInputUpdated(FKey BoundKey);                                                                                // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/PilgrimCoreRuntime.PilgrimGem.IsOverdriveGem
	// bool IsOverdriveGem();                                                                                                // [0x9a8af24] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimGem.GetLane
	// EPilgrimTrackLane GetLane();                                                                                          // [0x90896e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimGem.FinishGemSmash
	// void FinishGemSmash();                                                                                                // [0xa770f7c] Final|Native|Public|BlueprintCallable 
	// Function /Script/PilgrimCoreRuntime.PilgrimGem.AllowHitByInput
	// bool AllowHitByInput(bool bIsPressInput, EPilgrimTrackLane Lane);                                                     // [0xa770d9c] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/PilgrimCoreRuntime.PilgrimGemAnalyzer
/// Size: 0x0138 (0x0000A0 - 0x0001D8)
class UPilgrimGemAnalyzer : public UPlayspaceComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x00A0   (0x0008)  MISSED
	SDK_UNDEFINED(16,15226) /* FMulticastInlineDelegate */ __um(OnGameplayEventStarted);                           // 0x00A8   (0x0010)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x00B8   (0x0008)  MISSED
	SDK_UNDEFINED(80,15227) /* TMap<FPilgrimDifficultyTrackTypePair, FPilgrimGemDensityDataArray> */ __um(SongSectionGemDensityDataMap); // 0x00C0   (0x0050)  
	SDK_UNDEFINED(80,15228) /* TMap<FPilgrimDifficultyTrackTypePair, FPilgrimGemDensityDataArray> */ __um(GameplaySectionGemDensityDataMap); // 0x0110   (0x0050)  
	unsigned char                                      UnknownData02_5[0x50];                                      // 0x0160   (0x0050)  MISSED
	FScalableFloat                                     MinimumEmptyBarsForBreak;                                   // 0x01B0   (0x0028)  


	/// Functions
	// Function /Script/PilgrimCoreRuntime.PilgrimGemAnalyzer.GetSongData
	// class UPilgrimSongData* GetSongData();                                                                                // [0xa771bc0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimGemAnalyzer.GetPilgrimSongData
	// class UPilgrimSongData* GetPilgrimSongData(class UObject* WorldContextObject);                                        // [0xa771b2c] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/PilgrimCoreRuntime.PilgrimGemAnalyzer.GetPilgrimGemAnalyzer
	// class UPilgrimGemAnalyzer* GetPilgrimGemAnalyzer(class UObject* WorldContextObject);                                  // [0xa771aac] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/PilgrimCoreRuntime.PilgrimGemAnalyzer.GetGemDensityDataForSongSection
	// FPilgrimGemDensityData GetGemDensityDataForSongSection(EPilgrimSongDifficulty Difficulty, EPilgrimTrackType TrackType, int32_t SectionIndexToFind); // [0xa7718c8] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/PilgrimCoreRuntime.PilgrimGemAnalyzer.GetGemDensityDataForGameplaySection
	// FPilgrimGemDensityData GetGemDensityDataForGameplaySection(EPilgrimSongDifficulty Difficulty, EPilgrimTrackType TrackType, int32_t SectionIndexToFind); // [0xa7717ac] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/PilgrimCoreRuntime.PilgrimGemAnalyzer.GetGemDensityDataForAllSongSections
	// void GetGemDensityDataForAllSongSections(EPilgrimSongDifficulty Difficulty, EPilgrimTrackType TrackType, TArray<FPilgrimGemDensityData>& OutGemDensityData); // [0xa7715cc] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/PilgrimCoreRuntime.PilgrimGemAnalyzer.GetGemDensityDataForAllGameplaySections
	// void GetGemDensityDataForAllGameplaySections(EPilgrimSongDifficulty Difficulty, EPilgrimTrackType TrackType, TArray<FPilgrimGemDensityData>& OutGemDensityData); // [0xa7713ec] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/PilgrimCoreRuntime.PilgrimGemAnalyzer.GetGemBreaks
	// void GetGemBreaks(EPilgrimTrackType TrackType, EPilgrimSongDifficulty Difficulty, TArray<FPilgrimGemBreak>& OutGemBreaks); // [0xa77120c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/PilgrimCoreRuntime.PilgrimGemAnalyzer.GetGemBreakForTrackDifficultyMs
	// bool GetGemBreakForTrackDifficultyMs(EPilgrimTrackType Track, EPilgrimSongDifficulty Difficulty, float SongMs, FPilgrimGemBreak& FoundBreak, FPilgrimGemBreak& NextBreak); // [0xa771050] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimGemBreak
/// Size: 0x0024 (0x000000 - 0x000024)
struct FPilgrimGemBreak
{ 
	int32_t                                            ID;                                                         // 0x0000   (0x0004)  
	bool                                               bIsValidGemBreak;                                           // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0005   (0x0003)  MISSED
	float                                              StartBreakAtBar;                                            // 0x0008   (0x0004)  
	float                                              StartBreakAtMs;                                             // 0x000C   (0x0004)  
	float                                              BreakBarDuration;                                           // 0x0010   (0x0004)  
	float                                              BreakMsDuration;                                            // 0x0014   (0x0004)  
	float                                              EndBreakAtBar;                                              // 0x0018   (0x0004)  
	float                                              EndBreakAtMs;                                               // 0x001C   (0x0004)  
	bool                                               bIsStartingBreak;                                           // 0x0020   (0x0001)  
	bool                                               bIsEndingBreak;                                             // 0x0021   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x0022   (0x0002)  MISSED
};

/// Class /Script/PilgrimCoreRuntime.PilgrimGemBreakListener
/// Size: 0x0098 (0x000028 - 0x0000C0)
class UPilgrimGemBreakListener : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x38];                                      // 0x0000   (0x0038)  MISSED
	class AActor*                                      ForActor;                                                   // 0x0038   (0x0008)  
	EPilgrimSongDifficulty                             Difficulty;                                                 // 0x0040   (0x0001)  
	EPilgrimTrackType                                  TrackType;                                                  // 0x0041   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x0042   (0x0002)  MISSED
	FPilgrimGemBreak                                   InBreak;                                                    // 0x0044   (0x0024)  
	bool                                               bIsLocalPlayer;                                             // 0x0068   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0069   (0x0003)  MISSED
	FPilgrimGemBreak                                   LastPendingGemBreak;                                        // 0x006C   (0x0024)  
	float                                              LastProcessedSongMs;                                        // 0x0090   (0x0004)  
	SDK_UNDEFINED(8,15229) /* TWeakObjectPtr<UPilgrimSongData*> */ __um(SongDataWeak);                             // 0x0094   (0x0008)  
	bool                                               bInitalized;                                                // 0x009C   (0x0001)  
	unsigned char                                      UnknownData03_6[0x23];                                      // 0x009D   (0x0023)  MISSED
};

/// Class /Script/PilgrimCoreRuntime.PilgrimGemSmasher
/// Size: 0x0018 (0x000290 - 0x0002A8)
class APilgrimGemSmasher : public AActor
{ 
public:
	class USplineComponent*                            GemSplinePath;                                              // 0x0290   (0x0008)  
	float                                              SplineStartInputKey;                                        // 0x0298   (0x0004)  
	float                                              SplineOriginInputKey;                                       // 0x029C   (0x0004)  
	float                                              SplineEndInputKey;                                          // 0x02A0   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x02A4   (0x0004)  MISSED


	/// Functions
	// Function /Script/PilgrimCoreRuntime.PilgrimGemSmasher.OverdriveFailedDuringSustainHold
	// void OverdriveFailedDuringSustainHold();                                                                              // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/PilgrimCoreRuntime.PilgrimGemSmasher.OnInputUpdated
	// void OnInputUpdated(FKey BoundKey);                                                                                   // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/PilgrimCoreRuntime.PilgrimGemSmasher.OnInputReleased
	// void OnInputReleased();                                                                                               // [0x2f99b74] Native|Event|Public|BlueprintEvent 
	// Function /Script/PilgrimCoreRuntime.PilgrimGemSmasher.OnInputPressed
	// void OnInputPressed();                                                                                                // [0x21dc214] Native|Event|Public|BlueprintEvent 
	// Function /Script/PilgrimCoreRuntime.PilgrimGemSmasher.EndSustainHoldEffect
	// void EndSustainHoldEffect();                                                                                          // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/PilgrimCoreRuntime.PilgrimGemSmasher.BeginSustainHoldEffect
	// void BeginSustainHoldEffect(bool bIsOverdrive);                                                                       // [0x18a39e4] Event|Public|BlueprintEvent 
};

/// Class /Script/PilgrimCoreRuntime.PilgrimGemTrackItemMgr
/// Size: 0x00B8 (0x0000D8 - 0x000190)
class UPilgrimGemTrackItemMgr : public UPilgrimTrackItemMgr
{ 
public:
	SDK_UNDEFINED(80,15230) /* TMap<FPilgrimTrackItemKey, APilgrimGem*> */ __um(ActiveGemsMap);                    // 0x00D8   (0x0050)  
	TArray<class APilgrimGem*>                         ActiveGems;                                                 // 0x0128   (0x0010)  
	SDK_UNDEFINED(80,15231) /* TSet<APilgrimGem*> */   __um(GemsInSlopWindow);                                     // 0x0138   (0x0050)  
	class UPilgrimSustainTrackItemMgr*                 SustainTrackItemMgr;                                        // 0x0188   (0x0008)  


	/// Functions
	// Function /Script/PilgrimCoreRuntime.PilgrimGemTrackItemMgr.OnGemSmashFinished
	// void OnGemSmashFinished(class APilgrimGem* Gem);                                                                      // [0xa771f6c] Final|Native|Private 
};

/// Class /Script/PilgrimCoreRuntime.PilgrimInputConfig
/// Size: 0x00B8 (0x000030 - 0x0000E8)
class UPilgrimInputConfig : public UPrimaryDataAsset
{ 
public:
	SDK_UNDEFINED(80,15232) /* TMap<UInputAction*, EPilgrimTrackLane> */ __um(InputActionToPilgrimLanePress);      // 0x0030   (0x0050)  
	SDK_UNDEFINED(80,15233) /* TMap<UInputAction*, EPilgrimTrackLane> */ __um(InputActionToPilgrimLaneRelease);    // 0x0080   (0x0050)  
	class UInputAction*                                OverdriveInputAction;                                       // 0x00D0   (0x0008)  
	class UInputAction*                                Overdrive5LaneInputAction;                                  // 0x00D8   (0x0008)  
	class UInputAction*                                GuitarStrumInputAction;                                     // 0x00E0   (0x0008)  
};

/// Class /Script/PilgrimCoreRuntime.PilgrimLeaderboardLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UPilgrimLeaderboardLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/PilgrimCoreRuntime.PilgrimLeaderboardLibrary.SoloLeaderboardTypeFromInstrument
	// EPilgrimLeaderboardType SoloLeaderboardTypeFromInstrument(EPilgrimTrackType Instrument);                              // [0xa772080] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/PilgrimCoreRuntime.PilgrimLeaderboardLibrary.LeaderboardTypeToString
	// FString LeaderboardTypeToString(EPilgrimLeaderboardType LeaderboardType);                                             // [0xa771ee4] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/PilgrimCoreRuntime.PilgrimLeaderboardLibrary.LeaderboardTypeFromString
	// EPilgrimLeaderboardType LeaderboardTypeFromString(FString LeaderboardString);                                         // [0xa771d88] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/PilgrimCoreRuntime.PilgrimLeaderboardLibrary.IsSoloLeaderboard
	// bool IsSoloLeaderboard(EPilgrimLeaderboardType LeaderboardType);                                                      // [0xa771d04] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/PilgrimCoreRuntime.PilgrimLeaderboardLibrary.IsBandLeaderboard
	// bool IsBandLeaderboard(EPilgrimLeaderboardType LeaderboardType);                                                      // [0xa771c80] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/PilgrimCoreRuntime.PilgrimLeaderboardLibrary.InstrumentFromSoloLeaderboardType
	// EPilgrimTrackType InstrumentFromSoloLeaderboardType(EPilgrimLeaderboardType LeaderboardType);                         // [0xa771be4] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/PilgrimCoreRuntime.PilgrimLeaderboardLibrary.GetInstrumentFromGameplayTag
	// EPilgrimTrackType GetInstrumentFromGameplayTag(FGameplayTag& InstrumentGametag);                                      // [0xa7719e4] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/PilgrimCoreRuntime.PilgrimLeaderboardLibrary.GetGameplayTagFromInstrument
	// FGameplayTag GetGameplayTagFromInstrument(EPilgrimTrackType Instrument);                                              // [0xa770fa8] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/PilgrimCoreRuntime.PilgrimLeaderboardLibrary.BandSizeFromLeaderboardType
	// int32_t BandSizeFromLeaderboardType(EPilgrimLeaderboardType LeaderboardType);                                         // [0xa770efc] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/PilgrimCoreRuntime.PilgrimLeaderboardLibrary.BandLeaderboardTypeFromSize
	// EPilgrimLeaderboardType BandLeaderboardTypeFromSize(int32_t Size);                                                    // [0xa770e80] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/PilgrimCoreRuntime.PilgrimLeaderboardManager
/// Size: 0x0458 (0x0000A0 - 0x0004F8)
class UPilgrimLeaderboardManager : public UGameStateComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x60];                                      // 0x00A0   (0x0060)  MISSED
	SDK_UNDEFINED(80,15234) /* TMap<uint32_t, UPilgrimRequestFriendScoreWrapper*> */ __um(RequestCacheWrapperMap); // 0x0100   (0x0050)  
	unsigned char                                      UnknownData01_6[0x3A8];                                     // 0x0150   (0x03A8)  MISSED
};

/// Class /Script/PilgrimCoreRuntime.PilgrimLeaderboardPlayerComponent
/// Size: 0x0120 (0x0000A0 - 0x0001C0)
class UPilgrimLeaderboardPlayerComponent : public UControllerComponent
{ 
public:
	SDK_UNDEFINED(16,15235) /* FMulticastInlineDelegate */ __um(OnFriendsSurpassed);                               // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,15236) /* FMulticastInlineDelegate */ __um(OnBandFriendLeaderboardOptionChanged);             // 0x00B0   (0x0010)  
	bool                                               bEnableBandFriendLeaderboardOption : 1;                     // 0x00C0:0 (0x0001)  
	unsigned char                                      UnknownData00_4[0xE7];                                      // 0x00C1   (0x00E7)  MISSED
	float                                              FriendPopupTimeSeconds;                                     // 0x01A8   (0x0004)  
	unsigned char                                      UnknownData01_6[0x14];                                      // 0x01AC   (0x0014)  MISSED


	/// Functions
	// Function /Script/PilgrimCoreRuntime.PilgrimLeaderboardPlayerComponent.SetFriendFeedCache
	// void SetFriendFeedCache(FPilgrimPlayerFeedResult& FeedResult);                                                        // [0xa7775ac] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PilgrimCoreRuntime.PilgrimLeaderboardPlayerComponent.SetCurrentSetlistInfo
	// void SetCurrentSetlistInfo(FName SongShortName, EPilgrimTrackType Instrument);                                        // [0xa7774e4] Native|Public|BlueprintCallable 
	// Function /Script/PilgrimCoreRuntime.PilgrimLeaderboardPlayerComponent.ServerRequestSpotlightCompetitions
	// void ServerRequestSpotlightCompetitions(FPilgrimSpotlightCompetitionParams Params, int32_t RequestID);                // [0xa7772bc] Net|NetReliableNative|Event|Protected|NetServer 
	// Function /Script/PilgrimCoreRuntime.PilgrimLeaderboardPlayerComponent.ServerCachePlayerFriendsHistory
	// void ServerCachePlayerFriendsHistory(FPilgrimPlayerHistoryParams HistoryParams, TArray<FUniqueNetIdRepl> FriendAccountIds, int32_t RequestID); // [0xa776f84] Net|NetReliableNative|Event|Protected|NetServer 
	// Function /Script/PilgrimCoreRuntime.PilgrimLeaderboardPlayerComponent.OnRep_ChangedBandFriendLeaderboardOption
	// void OnRep_ChangedBandFriendLeaderboardOption();                                                                      // [0xa776a70] Final|Native|Protected 
	// Function /Script/PilgrimCoreRuntime.PilgrimLeaderboardPlayerComponent.OnFriendsSurpassed__DelegateSignature
	// void OnFriendsSurpassed__DelegateSignature(FPilgrimPlayerFeedResultEntry HighestFriendEntry, int32_t TotalFriendsSurpassed); // [0x18a39e4] MulticastDelegate|Public|Delegate 
	// Function /Script/PilgrimCoreRuntime.PilgrimLeaderboardPlayerComponent.OnBandFriendLeaderboardOptionChanged__DelegateSignature
	// void OnBandFriendLeaderboardOptionChanged__DelegateSignature(bool bOptionEnabled);                                    // [0x18a39e4] MulticastDelegate|Public|Delegate 
	// Function /Script/PilgrimCoreRuntime.PilgrimLeaderboardPlayerComponent.IsBandFriendLeaderboardEnabled
	// bool IsBandFriendLeaderboardEnabled();                                                                                // [0xa776a54] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimLeaderboardPlayerComponent.GetSpotlightCompetitions
	// void GetSpotlightCompetitions(FPilgrimGetSpotlightParams& SpotlightParams, TArray<FPilgrimSpotlightCompetition>& OutCompetitions); // [0xa77694c] Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimLeaderboardPlayerComponent.GetPostMatchFriendRankAndDelta
	// void GetPostMatchFriendRankAndDelta(int32_t FinalScore, int32_t& OutRank, int32_t& OutDelta);                         // [0xa776800] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/PilgrimCoreRuntime.PilgrimLeaderboardPlayerComponent.ClientRequestSpotlightCompetitionsComplete
	// void ClientRequestSpotlightCompetitionsComplete(FPilgrimSpotlightCompetitionParams Params, TArray<FPilgrimSpotlightCompetition> SpotlightCompetitions, int32_t RequestID); // [0xa7764ec] Net|NetReliableNative|Event|Protected|NetClient 
	// Function /Script/PilgrimCoreRuntime.PilgrimLeaderboardPlayerComponent.ClientCachePlayerFriendsHistoryComplete
	// void ClientCachePlayerFriendsHistoryComplete(FPilgrimPlayerHistoryParams HistoryParams, TArray<FPilgrimPlayerHistoryResult> Results, int32_t RequestID); // [0xa7761b4] Net|NetReliableNative|Event|Protected|NetClient 
	// Function /Script/PilgrimCoreRuntime.PilgrimLeaderboardPlayerComponent.CheckPlayerScoreForFriendSurpasser
	// void CheckPlayerScoreForFriendSurpasser(int32_t CurrentScore);                                                        // [0x8b1dfa0] Native|Public|BlueprintCallable 
};

/// Class /Script/PilgrimCoreRuntime.PilgrimMediaStreamer
/// Size: 0x0048 (0x0000A0 - 0x0000E8)
class UPilgrimMediaStreamer : public UActorComponent
{ 
public:
	class UStemConfiguration*                          BusStemConfiguration;                                       // 0x00A0   (0x0008)  
	class UPilgrimSongMetadata*                        Song;                                                       // 0x00A8   (0x0008)  
	class UFortBaseStreamingVideo*                     FortBaseStreaming;                                          // 0x00B0   (0x0008)  
	class UStemmedMediaStreamAsset*                    StemmedMediaStreamAsset;                                    // 0x00B8   (0x0008)  
	class UMidiFile*                                   MidiFile;                                                   // 0x00C0   (0x0008)  
	SDK_UNDEFINED(16,15237) /* FMulticastInlineDelegate */ __um(OnStreamerPrepared);                               // 0x00C8   (0x0010)  
	EPilgrimStreamerStatus                             StreamingStatus;                                            // 0x00D8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x00D9   (0x0007)  MISSED
	class USkeleton*                                   LipSyncSkeleton;                                            // 0x00E0   (0x0008)  


	/// Functions
	// Function /Script/PilgrimCoreRuntime.PilgrimMediaStreamer.Stop
	// void Stop();                                                                                                          // [0xa777650] Final|Native|Public|BlueprintCallable 
	// Function /Script/PilgrimCoreRuntime.PilgrimMediaStreamer.PrepareSong
	// void PrepareSong(class UPilgrimSongMetadata* InSong);                                                                 // [0xa776f04] Final|Native|Public|BlueprintCallable 
	// Function /Script/PilgrimCoreRuntime.PilgrimMediaStreamer.PlaySong
	// void PlaySong();                                                                                                      // [0xa776ef0] Final|Native|Public|BlueprintCallable 
	// Function /Script/PilgrimCoreRuntime.PilgrimMediaStreamer.OnVideoSuccess
	// void OnVideoSuccess();                                                                                                // [0xa776edc] Final|Native|Private 
	// Function /Script/PilgrimCoreRuntime.PilgrimMediaStreamer.OnVideoOpenTimeout
	// void OnVideoOpenTimeout();                                                                                            // [0xa776d5c] Final|Native|Private 
	// Function /Script/PilgrimCoreRuntime.PilgrimMediaStreamer.OnVideoOpenFailed
	// void OnVideoOpenFailed(FString FailedUrl);                                                                            // [0xa776bf0] Final|Native|Private 
	// Function /Script/PilgrimCoreRuntime.PilgrimMediaStreamer.OnVideoOpened
	// void OnVideoOpened(FString OpenedUrl);                                                                                // [0xa776d70] Final|Native|Private 
	// Function /Script/PilgrimCoreRuntime.PilgrimMediaStreamer.OnVideoError
	// void OnVideoError(EBaseMediaTerminalErrorReason Reason);                                                              // [0xa776b70] Final|Native|Private 
	// Function /Script/PilgrimCoreRuntime.PilgrimMediaStreamer.OnStreamerPreparedEvent__DelegateSignature
	// void OnStreamerPreparedEvent__DelegateSignature();                                                                    // [0x18a39e4] MulticastDelegate|Public|Delegate 
	// Function /Script/PilgrimCoreRuntime.PilgrimMediaStreamer.OnSongDataDownloaded
	// void OnSongDataDownloaded(class UCatalogData* CatalogData, bool bSuccess);                                            // [0xa776aa8] Final|Native|Private 
};

/// Class /Script/PilgrimCoreRuntime.PilgrimMidiEventRouter
/// Size: 0x03E0 (0x000028 - 0x000408)
class UPilgrimMidiEventRouter : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x408];                                     // 0x0000   (0x0408)  MISSED
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimGameProgress
/// Size: 0x006C (0x000000 - 0x00006C)
struct FPilgrimGameProgress
{ 
	int32_t                                            NumHits;                                                    // 0x0000   (0x0004)  
	int32_t                                            NumMisses;                                                  // 0x0004   (0x0004)  
	int32_t                                            NumPasses;                                                  // 0x0008   (0x0004)  
	bool                                               bHasFullCombo;                                              // 0x000C   (0x0001)  
	bool                                               bHasPerfectCombo;                                           // 0x000D   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x000E   (0x0002)  MISSED
	int32_t                                            CurrentTick;                                                // 0x0010   (0x0004)  
	int32_t                                            NoteStreak;                                                 // 0x0014   (0x0004)  
	float                                              CurrentScore;                                               // 0x0018   (0x0004)  
	float                                              CurrentModifierBonus;                                       // 0x001C   (0x0004)  
	int32_t                                            CurrentStar;                                                // 0x0020   (0x0004)  
	float                                              NextStarProgress;                                           // 0x0024   (0x0004)  
	int32_t                                            StreakScoreMultiplier;                                      // 0x0028   (0x0004)  
	int32_t                                            NotesPastLastMultiplier;                                    // 0x002C   (0x0004)  
	int32_t                                            NotesToNextMultiplier;                                      // 0x0030   (0x0004)  
	float                                              CurrentHealth;                                              // 0x0034   (0x0004)  
	bool                                               IsOverdriveActive;                                          // 0x0038   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0039   (0x0003)  MISSED
	float                                              CurrentOverdrive;                                           // 0x003C   (0x0004)  
	int32_t                                            CurrentOverdriveSectionNum;                                 // 0x0040   (0x0004)  
	float                                              BandScoreContribution;                                      // 0x0044   (0x0004)  
	float                                              BandModifierBonusContribution;                              // 0x0048   (0x0004)  
	EOverdriveScoringState                             OverdriveScoringState;                                      // 0x004C   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x004D   (0x0003)  MISSED
	float                                              MaxScore;                                                   // 0x0050   (0x0004)  
	bool                                               bIsAtMaxStreak;                                             // 0x0054   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x0055   (0x0003)  MISSED
	float                                              CurrentSustainScore;                                        // 0x0058   (0x0004)  
	float                                              CurrentChordScore;                                          // 0x005C   (0x0004)  
	float                                              OverdriveTime;                                              // 0x0060   (0x0004)  
	int32_t                                            NumPerfects;                                                // 0x0064   (0x0004)  
	unsigned char                                      UnknownData04_6[0x4];                                       // 0x0068   (0x0004)  MISSED
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimMusicBattlePlayerState
/// Size: 0x00B8 (0x000000 - 0x0000B8)
struct FPilgrimMusicBattlePlayerState
{ 
	class AFortPlayerStateAthena*                      PlayerState;                                                // 0x0000   (0x0008)  
	char                                               Team;                                                       // 0x0008   (0x0001)  
	EPilgrimTrackType                                  TrackType;                                                  // 0x0009   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x000A   (0x0006)  MISSED
	FGameplayTagContainer                              InstrumentTags;                                             // 0x0010   (0x0020)  
	TArray<FPilgrimGameProgress>                       ScoreUpdateHistory;                                         // 0x0030   (0x0010)  
	int32_t                                            LastPlayableIndexProcessed;                                 // 0x0040   (0x0004)  
	int32_t                                            LastPlayableIndexReceived;                                  // 0x0044   (0x0004)  
	FPilgrimGameProgress                               PilgrimGameProgress;                                        // 0x0048   (0x006C)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x00B4   (0x0004)  MISSED
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimBandState
/// Size: 0x002C (0x000000 - 0x00002C)
struct FPilgrimBandState
{ 
	float                                              BandHealth;                                                 // 0x0000   (0x0004)  
	float                                              BandScore;                                                  // 0x0004   (0x0004)  
	float                                              BandModifierBonus;                                          // 0x0008   (0x0004)  
	float                                              CurrentScoreFromOverdrive;                                  // 0x000C   (0x0004)  
	float                                              TotalScoreFromOverdrive;                                    // 0x0010   (0x0004)  
	int32_t                                            BandStar;                                                   // 0x0014   (0x0004)  
	float                                              NextBandStarProgress;                                       // 0x0018   (0x0004)  
	float                                              BandVarietyBonus;                                           // 0x001C   (0x0004)  
	float                                              BaseBandScore;                                              // 0x0020   (0x0004)  
	int32_t                                            BandMultiplier;                                             // 0x0024   (0x0004)  
	bool                                               bAllPlayersHaveMaxStreak;                                   // 0x0028   (0x0001)  
	bool                                               bAllPlayersHaveOverdriveReady;                              // 0x0029   (0x0001)  
	bool                                               bAllPlayersHaveOverdriveActive;                             // 0x002A   (0x0001)  
	bool                                               bAnyPlayersHaveOverdriveActive;                             // 0x002B   (0x0001)  
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimMusicBattleData
/// Size: 0x0048 (0x000000 - 0x000048)
struct FPilgrimMusicBattleData
{ 
	TArray<FPilgrimMusicBattlePlayerState>             MusicBattleStates;                                          // 0x0000   (0x0010)  
	int32_t                                            LastPlayableIndexProcessed;                                 // 0x0010   (0x0004)  
	int32_t                                            LastPlayableIndexReceived;                                  // 0x0014   (0x0004)  
	FPilgrimBandState                                  BandState;                                                  // 0x0018   (0x002C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0044   (0x0004)  MISSED
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimSinglePlayerBattleHealth
/// Size: 0x0008 (0x000000 - 0x000008)
struct FPilgrimSinglePlayerBattleHealth
{ 
	float                                              MaxHp;                                                      // 0x0000   (0x0004)  
	float                                              CurrentHp;                                                  // 0x0004   (0x0004)  
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimSinglePlayerBattleData
/// Size: 0x0010 (0x000000 - 0x000010)
struct FPilgrimSinglePlayerBattleData
{ 
	TArray<FPilgrimSinglePlayerBattleHealth>           PlayerHealths;                                              // 0x0000   (0x0010)  
};

/// Struct /Script/PilgrimCoreRuntime.MusicBattleSinglePlayerOptions
/// Size: 0x0008 (0x000000 - 0x000008)
struct FMusicBattleSinglePlayerOptions
{ 
	bool                                               bOpponentFiresBack;                                         // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              OpponentGemSuccessRate;                                     // 0x0004   (0x0004)  
};

/// Class /Script/PilgrimCoreRuntime.PilgrimMusicBattleInstance
/// Size: 0x0550 (0x000290 - 0x0007E0)
class APilgrimMusicBattleInstance : public AActor
{ 
public:
	SDK_UNDEFINED(16,15238) /* FMulticastInlineDelegate */ __um(OnMusicBattleFinished);                            // 0x0290   (0x0010)  
	char                                               Team;                                                       // 0x02A0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x02A1   (0x0007)  MISSED
	FPilgrimMusicBattleData                            MusicBattleData;                                            // 0x02A8   (0x0048)  
	FName                                              SongToPlayShortName;                                        // 0x02F0   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x02F4   (0x0004)  MISSED
	class UPilgrimSongMetadata*                        SongToPlay;                                                 // 0x02F8   (0x0008)  
	EPilgrimSongDifficulty                             SongDifficultyToPlay;                                       // 0x0300   (0x0001)  
	bool                                               bClientHasReceivedSongToPlay;                               // 0x0301   (0x0001)  
	unsigned char                                      UnknownData02_5[0x6];                                       // 0x0302   (0x0006)  MISSED
	FPilgrimSinglePlayerBattleData                     SinglePlayerBattleData;                                     // 0x0308   (0x0010)  
	int32_t                                            LocalPlayerIndex;                                           // 0x0318   (0x0004)  
	unsigned char                                      UnknownData03_5[0x4];                                       // 0x031C   (0x0004)  MISSED
	TArray<class AFortPlayerStateAthena*>              MusicBattlePlayers;                                         // 0x0320   (0x0010)  
	FMusicBattleSinglePlayerOptions                    SinglePlayerBattleOptions;                                  // 0x0330   (0x0008)  
	class UPilgrimGameConfig*                          PilgrimGameConfig;                                          // 0x0338   (0x0008)  
	EMusicBattleType                                   MusicBattleType;                                            // 0x0340   (0x0001)  
	unsigned char                                      UnknownData04_5[0x7];                                       // 0x0341   (0x0007)  MISSED
	class UAudioComponent*                             LocalMetasoundPlayer;                                       // 0x0348   (0x0008)  
	class UAudioComponent*                             LocalMetasoundMixer;                                        // 0x0350   (0x0008)  
	SDK_UNDEFINED(16,15239) /* TArray<FString> */      __um(DisableScoreCeilingForSongs);                          // 0x0358   (0x0010)  
	int32_t                                            SrvFIThrMs;                                                 // 0x0368   (0x0004)  
	unsigned char                                      UnknownData05_5[0x6C];                                      // 0x036C   (0x006C)  MISSED
	class UHarmonixAudioAnalyzerResultsProvider*       FFTAnalyzerResultsProvider;                                 // 0x03D8   (0x0008)  
	SDK_UNDEFINED(80,15240) /* TMap<UPilgrimPlayerControllerComponent*, int32_t> */ __um(CurrentPlayerToIndexMap); // 0x03E0   (0x0050)  
	class UPilgrimSongData*                            SongData;                                                   // 0x0430   (0x0008)  
	unsigned char                                      UnknownData06_5[0x50];                                      // 0x0438   (0x0050)  MISSED
	SDK_UNDEFINED(80,15241) /* TMap<AFortPlayerStateAthena*, UServerPilgrimGame*> */ __um(ServerPilgrimGameMap);   // 0x0488   (0x0050)  
	unsigned char                                      UnknownData07_5[0x1A8];                                     // 0x04D8   (0x01A8)  MISSED
	TArray<class UPilgrimGemBreakListener*>            GemBreakListeners;                                          // 0x0680   (0x0010)  
	unsigned char                                      UnknownData08_5[0xF8];                                      // 0x0690   (0x00F8)  MISSED
	SDK_UNDEFINED(80,15242) /* TSet<UPilgrimPlayerControllerComponent*> */ __um(PlayersWhoOwnCurrentSong);         // 0x0788   (0x0050)  
	unsigned char                                      UnknownData09_6[0x8];                                       // 0x07D8   (0x0008)  MISSED


	/// Functions
	// Function /Script/PilgrimCoreRuntime.PilgrimMusicBattleInstance.UpdateVisibilityOfUI
	// void UpdateVisibilityOfUI();                                                                                          // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/PilgrimCoreRuntime.PilgrimMusicBattleInstance.UpdateScore
	// void UpdateScore();                                                                                                   // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/PilgrimCoreRuntime.PilgrimMusicBattleInstance.UpdateLocalPlayerScore
	// void UpdateLocalPlayerScore(FPilgrimGameProgress& LocalPlayerGameProgress);                                           // [0xa779e1c] Final|Native|Protected|HasOutParms|BlueprintCallable 
	// Function /Script/PilgrimCoreRuntime.PilgrimMusicBattleInstance.SubtractFromBandScore
	// void SubtractFromBandScore(float Score);                                                                              // [0xa779d94] Final|Native|Public|BlueprintCallable 
	// Function /Script/PilgrimCoreRuntime.PilgrimMusicBattleInstance.ShouldUseTouchUIForLocalPlayer
	// bool ShouldUseTouchUIForLocalPlayer();                                                                                // [0xa779d20] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimMusicBattleInstance.SetupSinglePlayerBattle
	// void SetupSinglePlayerBattle();                                                                                       // [0xa779d0c] Final|Native|Protected|BlueprintCallable 
	// Function /Script/PilgrimCoreRuntime.PilgrimMusicBattleInstance.SetMusicBattleType
	// void SetMusicBattleType(EMusicBattleType NewMusicBattleType);                                                         // [0xa779c90] Final|Native|Public  
	// Function /Script/PilgrimCoreRuntime.PilgrimMusicBattleInstance.ServerUserFinishedDisconnecting
	// void ServerUserFinishedDisconnecting();                                                                               // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/PilgrimCoreRuntime.PilgrimMusicBattleInstance.ServerOnTimedInputReceived
	// void ServerOnTimedInputReceived(class UPilgrimPlayerControllerComponent* PlayerControllerComponent, FPilgrimTimedInput& TimedInput); // [0xa779bb4] Final|Native|Protected|HasOutParms 
	// Function /Script/PilgrimCoreRuntime.PilgrimMusicBattleInstance.ServerOnTeamQuickplayScoreChanged
	// void ServerOnTeamQuickplayScoreChanged(class UPilgrimPlayerControllerComponent* PlayerControllerComponent, FPilgrimGameProgress& NextScoreForCurrentPlayer, float LastInputTimeMs); // [0xa7799f0] Final|Native|Protected|HasOutParms 
	// Function /Script/PilgrimCoreRuntime.PilgrimMusicBattleInstance.ServerOnSongMidiFinishedLoading
	// void ServerOnSongMidiFinishedLoading();                                                                               // [0xa7799dc] Final|Native|Private 
	// Function /Script/PilgrimCoreRuntime.PilgrimMusicBattleInstance.ServerOnClientUpdateReceived
	// void ServerOnClientUpdateReceived(class UPilgrimPlayerControllerComponent* PlayerControllerComponent, EMusicBattleClientUpdate ClientUpdate); // [0xa779918] Final|Native|Protected 
	// Function /Script/PilgrimCoreRuntime.PilgrimMusicBattleInstance.ServerFinishDisconnect
	// void ServerFinishDisconnect();                                                                                        // [0xa7798cc] Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate 
	// Function /Script/PilgrimCoreRuntime.PilgrimMusicBattleInstance.ServerAllPlayersHaveFinishedSong
	// void ServerAllPlayersHaveFinishedSong();                                                                              // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/PilgrimCoreRuntime.PilgrimMusicBattleInstance.PlayerDisconnected
	// void PlayerDisconnected(class UPilgrimPlayerControllerComponent* ControllerComponent);                                // [0xa77984c] Final|Native|Public|BlueprintCallable 
	// Function /Script/PilgrimCoreRuntime.PilgrimMusicBattleInstance.OnTrackHiddenChanged
	// void OnTrackHiddenChanged(bool bHideTrack);                                                                           // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/PilgrimCoreRuntime.PilgrimMusicBattleInstance.OnStartedPlayingSong
	// void OnStartedPlayingSong(class UPilgrimSongMetadata* Song);                                                          // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/PilgrimCoreRuntime.PilgrimMusicBattleInstance.OnSongLoaded
	// void OnSongLoaded();                                                                                                  // [0xa779838] Final|Native|Protected 
	// Function /Script/PilgrimCoreRuntime.PilgrimMusicBattleInstance.OnRep_SongToPlay
	// void OnRep_SongToPlay();                                                                                              // [0xa779824] Final|Native|Private 
	// Function /Script/PilgrimCoreRuntime.PilgrimMusicBattleInstance.OnRep_MusicBattleData
	// void OnRep_MusicBattleData(FPilgrimMusicBattleData& PreviousMusicBattleData);                                         // [0xa779788] Final|Native|Protected|HasOutParms 
	// Function /Script/PilgrimCoreRuntime.PilgrimMusicBattleInstance.OnPlayerReachedZeroHp
	// void OnPlayerReachedZeroHp(int32_t PlayerId);                                                                         // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/PilgrimCoreRuntime.PilgrimMusicBattleInstance.OnMusicBattleFinished__DelegateSignature
	// void OnMusicBattleFinished__DelegateSignature(EMusicBattleEndReason EndReason);                                       // [0x18a39e4] MulticastDelegate|Public|Delegate 
	// Function /Script/PilgrimCoreRuntime.PilgrimMusicBattleInstance.OnClientReceivedSongToPlay
	// void OnClientReceivedSongToPlay(class UPilgrimSongMetadata* Song);                                                    // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/PilgrimCoreRuntime.PilgrimMusicBattleInstance.NetMulticast_DoMultiplayerDamageEffect
	// void NetMulticast_DoMultiplayerDamageEffect(int32_t DamagingPlayerId, int32_t DamagedPlayerId);                       // [0xa7796c4] Net|Native|Event|NetMulticast|Protected|BlueprintCallable 
	// Function /Script/PilgrimCoreRuntime.PilgrimMusicBattleInstance.NetMulticast_DoBeamClash
	// void NetMulticast_DoBeamClash();                                                                                      // [0x2f99b74] Net|Native|Event|NetMulticast|Protected|BlueprintCallable 
	// Function /Script/PilgrimCoreRuntime.PilgrimMusicBattleInstance.NetMulticast_CheatSetPerformanceData
	// void NetMulticast_CheatSetPerformanceData(FString PerformanceArgument);                                               // [0xa779560] Net|NetReliableNative|Event|NetMulticast|Public|BlueprintCallable 
	// Function /Script/PilgrimCoreRuntime.PilgrimMusicBattleInstance.NetMulticast_CheatSeekToTime
	// void NetMulticast_CheatSeekToTime(int32_t Milliseconds);                                                              // [0x87ac920] Net|NetReliableNative|Event|NetMulticast|Public|BlueprintCallable 
	// Function /Script/PilgrimCoreRuntime.PilgrimMusicBattleInstance.NetMulticast_CheatEndSong
	// void NetMulticast_CheatEndSong();                                                                                     // [0x673c1d4] Net|NetReliableNative|Event|NetMulticast|Public|BlueprintCallable 
	// Function /Script/PilgrimCoreRuntime.PilgrimMusicBattleInstance.IsTwoPlayerBattleWithBeams
	// bool IsTwoPlayerBattleWithBeams();                                                                                    // [0xa779534] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimMusicBattleInstance.IsSinglePlayerBattleAgainstPrimitiveAI
	// bool IsSinglePlayerBattleAgainstPrimitiveAI();                                                                        // [0xa779514] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimMusicBattleInstance.IsRestartAllowed
	// bool IsRestartAllowed();                                                                                              // [0xa7794f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimMusicBattleInstance.IsPlayerInBattleParticipants
	// bool IsPlayerInBattleParticipants(class AFortPlayerStateAthena* PlayerState);                                         // [0xa779464] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimMusicBattleInstance.IsLocalPlayerRoaming
	// bool IsLocalPlayerRoaming();                                                                                          // [0xa779440] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimMusicBattleInstance.IsLocalPlayerInBattleParticipants
	// bool IsLocalPlayerInBattleParticipants();                                                                             // [0xa77941c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimMusicBattleInstance.IsHardStopped
	// bool IsHardStopped();                                                                                                 // [0xa7793f8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimMusicBattleInstance.IsHardStopAllowed
	// bool IsHardStopAllowed();                                                                                             // [0xa7793d4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimMusicBattleInstance.HandleNewFFTResults
	// void HandleNewFFTResults(FName OutputName, FMetaSoundOutput& Output);                                                 // [0xa779298] Final|Native|Private|HasOutParms|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimMusicBattleInstance.GetUnplayedTrackTypesInCurrentSong
	// TSet<EPilgrimTrackType> GetUnplayedTrackTypesInCurrentSong();                                                         // [0xa779224] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimMusicBattleInstance.GetTrackTypeForPlayer
	// EPilgrimTrackType GetTrackTypeForPlayer(class AFortPlayerStateAthena* Player);                                        // [0xa779190] Native|Event|Public|BlueprintEvent|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimMusicBattleInstance.GetTeam
	// char GetTeam();                                                                                                       // [0xa779178] Final|Native|Public|BlueprintCallable 
	// Function /Script/PilgrimCoreRuntime.PilgrimMusicBattleInstance.GetStreakMultiplier
	// float GetStreakMultiplier(FPilgrimGameProgress& LocalPlayerGameProgress);                                             // [0xa7790d0] Final|Native|Protected|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimMusicBattleInstance.GetStartingInstrumentForTrackInCurrentSong
	// ESparksInstrumentType GetStartingInstrumentForTrackInCurrentSong(EPilgrimTrackType TrackType);                        // [0xa779044] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimMusicBattleInstance.GetSongPlayMethod
	// EPilgrimSongPlayMethod GetSongPlayMethod();                                                                           // [0xa779020] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimMusicBattleInstance.GetSongDifficultyForPlayer
	// EPilgrimSongDifficulty GetSongDifficultyForPlayer(class AFortPlayerStateAthena* Player);                              // [0xa778f8c] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimMusicBattleInstance.GetScoreDensityForPlayer
	// float GetScoreDensityForPlayer(class APlayerState* PlayerState);                                                      // [0xa778efc] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/PilgrimCoreRuntime.PilgrimMusicBattleInstance.GetPlayerFromIndex
	// class AFortPlayerStateAthena* GetPlayerFromIndex(int32_t PlayerIndex);                                                // [0xa778e70] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimMusicBattleInstance.GetPlayedTrackTypesInCurrentSong
	// TSet<EPilgrimTrackType> GetPlayedTrackTypesInCurrentSong();                                                           // [0xa778dfc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimMusicBattleInstance.GetNextSongToPlay
	// class UPilgrimSongMetadata* GetNextSongToPlay();                                                                      // [0xa778dd4] Native|Event|Public|BlueprintEvent|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimMusicBattleInstance.GetMusicClock
	// class UMusicClockComponent* GetMusicClock();                                                                          // [0xa778db0] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimMusicBattleInstance.GetMusicBattleData
	// FPilgrimMusicBattleData GetMusicBattleData();                                                                         // [0xa778d94] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimMusicBattleInstance.GetLocalPilgrimGame
	// class UPilgrimGame* GetLocalPilgrimGame();                                                                            // [0x18a39e4] Event|Public|BlueprintEvent|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimMusicBattleInstance.GetEventRouter
	// class UGameplayEventRouterComponent* GetEventRouter();                                                                // [0xa778d70] Final|Native|Public|BlueprintCallable 
	// Function /Script/PilgrimCoreRuntime.PilgrimMusicBattleInstance.GetDifficultyAndTrackType
	// void GetDifficultyAndTrackType(EPilgrimSongDifficulty& OutSongDifficulty, EPilgrimTrackType& OutSongTrackType);       // [0xa778c98] Final|Native|Protected|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimMusicBattleInstance.GetCurrentLocalPlayer
	// class AFortPlayerStateAthena* GetCurrentLocalPlayer();                                                                // [0xa778c74] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimMusicBattleInstance.GetConfig
	// class UPilgrimGameConfig* GetConfig();                                                                                // [0x8e1ffec] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimMusicBattleInstance.FireLocalPlayerBeam
	// void FireLocalPlayerBeam(EMusicBattleProjectileType ProjectileType);                                                  // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/PilgrimCoreRuntime.PilgrimMusicBattleInstance.DoMultiplayerDamage
	// void DoMultiplayerDamage(int32_t DamagingPlayerId, int32_t DamagedPlayerId, FPilgrimGameProgress& GameUpdateThatDidDamage); // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/PilgrimCoreRuntime.PilgrimMusicBattleInstance.DoEndGameCheat
	// void DoEndGameCheat(bool bIsWin);                                                                                     // [0xa778bc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/PilgrimCoreRuntime.PilgrimMusicBattleInstance.Debug_IsTrackHidden
	// bool Debug_IsTrackHidden();                                                                                           // [0x3219f08] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimMusicBattleInstance.ConnectFFTAnalysis
	// void ConnectFFTAnalysis(class UAudioComponent* AudioComponentWithAnalyzer);                                           // [0xa778b40] Final|Native|Public|BlueprintCallable 
	// Function /Script/PilgrimCoreRuntime.PilgrimMusicBattleInstance.Client_DoMultiplayerDamageEffect
	// void Client_DoMultiplayerDamageEffect(int32_t DamagingPlayerId, int32_t DamagedPlayerId);                             // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/PilgrimCoreRuntime.PilgrimMusicBattleInstance.Client_DoMultiplayerBeamClash
	// void Client_DoMultiplayerBeamClash();                                                                                 // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/PilgrimCoreRuntime.PilgrimMusicBattleInstance.BroadcastMBIEventStarted
	// void BroadcastMBIEventStarted();                                                                                      // [0xa778ad0] Final|Native|Public|BlueprintCallable 
	// Function /Script/PilgrimCoreRuntime.PilgrimMusicBattleInstance.BroadcastMBIEventFinished
	// void BroadcastMBIEventFinished();                                                                                     // [0xa778abc] Final|Native|Public|BlueprintCallable 
	// Function /Script/PilgrimCoreRuntime.PilgrimMusicBattleInstance.AddToBandScore
	// void AddToBandScore(float Score);                                                                                     // [0xa778a34] Final|Native|Public|BlueprintCallable 
	// Function /Script/PilgrimCoreRuntime.PilgrimMusicBattleInstance.AddMusicBattlePlayers
	// void AddMusicBattlePlayers(TArray<AFortPlayerStateAthena*>& NewPlayers);                                              // [0xa778998] Final|Native|Public|HasOutParms 
};

/// Class /Script/PilgrimCoreRuntime.PilgrimNowBar
/// Size: 0x0058 (0x000290 - 0x0002E8)
class APilgrimNowBar : public AActor
{ 
public:
	class USplineComponent*                            BeatMarkerSplinePath;                                       // 0x0290   (0x0008)  
	SDK_UNDEFINED(80,15243) /* TMap<EPilgrimTrackLane, AActor*> */ __um(LaneToSmasherMap);                         // 0x0298   (0x0050)  


	/// Functions
	// Function /Script/PilgrimCoreRuntime.PilgrimNowBar.SetGemSmasher
	// void SetGemSmasher(EPilgrimTrackLane Lane, class UChildActorComponent* Smasher);                                      // [0xa77c5b4] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/PilgrimCoreRuntime.PilgrimObjectiveProcessorBase
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UPilgrimObjectiveProcessorBase : public UFortObjectiveProcessor
{ 
public:
};

/// Class /Script/PilgrimCoreRuntime.PilgrimObjectiveProcessor_AccumulateStars
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UPilgrimObjectiveProcessor_AccumulateStars : public UPilgrimObjectiveProcessorBase
{ 
public:
};

/// Class /Script/PilgrimCoreRuntime.PilgrimObjectiveProcessor_Note
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UPilgrimObjectiveProcessor_Note : public UPilgrimObjectiveProcessorBase
{ 
public:
};

/// Class /Script/PilgrimCoreRuntime.PilgrimObjectiveProcessor_ScoreEvent
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UPilgrimObjectiveProcessor_ScoreEvent : public UPilgrimObjectiveProcessorBase
{ 
public:
};

/// Class /Script/PilgrimCoreRuntime.PilgrimObjectiveProcessor_SetlistComplete
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UPilgrimObjectiveProcessor_SetlistComplete : public UPilgrimObjectiveProcessorBase
{ 
public:
};

/// Class /Script/PilgrimCoreRuntime.PilgrimObjectiveProcessor_SongCompleted
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UPilgrimObjectiveProcessor_SongCompleted : public UPilgrimObjectiveProcessorBase
{ 
public:
};

/// Class /Script/PilgrimCoreRuntime.PilgrimObjectiveProcessor_SongStarted
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UPilgrimObjectiveProcessor_SongStarted : public UPilgrimObjectiveProcessorBase
{ 
public:
};

/// Class /Script/PilgrimCoreRuntime.PilgrimPartitionInitializer
/// Size: 0x0040 (0x000070 - 0x0000B0)
class UPilgrimPartitionInitializer : public UFortClientSettingRecordPartitionInitializer
{ 
public:
	SDK_UNDEFINED(32,15244) /* TWeakObjectPtr<UClass*> */ __um(PilgrimPresetSelectorClass);                        // 0x0070   (0x0020)  
	SDK_UNDEFINED(32,15245) /* TWeakObjectPtr<UPilgrimPresetConfiguration*> */ __um(PilgrimPresetConfiguration);   // 0x0090   (0x0020)  
};

/// Class /Script/PilgrimCoreRuntime.PilgrimPerformanceTrackerComponent
/// Size: 0x00A0 (0x0000A0 - 0x000140)
class UPilgrimPerformanceTrackerComponent : public UControllerComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x00A0   (0x0008)  MISSED
	SDK_UNDEFINED(80,15246) /* TMap<EPilgrimTrackLane, FPilgrimPerformanceTrackerData> */ __um(SongPerformanceData); // 0x00A8   (0x0050)  
	class UPilgrimSongMetadata*                        SongMetadata;                                               // 0x00F8   (0x0008)  
	class APilgrimTrack*                               MainTrack;                                                  // 0x0100   (0x0008)  
	class UPilgrimGame*                                PilgrimGame;                                                // 0x0108   (0x0008)  
	FGameplayEventListenerHandle                       OverdriveActiveEventHandle;                                 // 0x0110   (0x001C)  
	int32_t                                            MaxStreak;                                                  // 0x012C   (0x0004)  
	int32_t                                            CurrentStreak;                                              // 0x0130   (0x0004)  
	float                                              TimeInOverdriveMs;                                          // 0x0134   (0x0004)  
	bool                                               InOverdrive;                                                // 0x0138   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0139   (0x0007)  MISSED


	/// Functions
	// Function /Script/PilgrimCoreRuntime.PilgrimPerformanceTrackerComponent.HandleOverdriveActiveChangedEvent
	// void HandleOverdriveActiveChangedEvent(FPilgrimEvent_Scoring_OverdriveActiveChanged& Payload);                        // [0xa77bfdc] Final|Native|Protected|HasOutParms 
	// Function /Script/PilgrimCoreRuntime.PilgrimPerformanceTrackerComponent.HandleOnSongEnded
	// void HandleOnSongEnded();                                                                                             // [0xa77bfc8] Final|Native|Protected 
	// Function /Script/PilgrimCoreRuntime.PilgrimPerformanceTrackerComponent.GetTotalDeviation
	// float GetTotalDeviation(ECalibratedMusicTimebase Timebase);                                                           // [0xa77bd14] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimPerformanceTrackerComponent.GetSampleDeviation
	// float GetSampleDeviation(TArray<float>& Samples, bool IsPopulation);                                                  // [0xa77bb00] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimPerformanceTrackerComponent.GetSampleAverage
	// float GetSampleAverage(TArray<float>& Samples);                                                                       // [0xa77ba24] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimPerformanceTrackerComponent.GetResultData
	// FPilgrimEvent_Scoring_PerformanceDataResult GetResultData(ECalibratedMusicTimebase Timebase);                         // [0xa77b900] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimPerformanceTrackerComponent.GetLaneOffsets
	// TArray<float> GetLaneOffsets(EPilgrimTrackLane Lane, ECalibratedMusicTimebase Timebase);                              // [0xa77b788] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimPerformanceTrackerComponent.GetAverage
	// float GetAverage(ECalibratedMusicTimebase Timebase);                                                                  // [0xa77b6d4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/PilgrimCoreRuntime.PilgrimPerformanceTrackerSaveData
/// Size: 0x0050 (0x000028 - 0x000078)
class UPilgrimPerformanceTrackerSaveData : public USaveGame
{ 
public:
	SDK_UNDEFINED(80,15247) /* TMap<EPilgrimTrackLane, FPilgrimPerformanceTrackerData> */ __um(SongPerformanceData); // 0x0028   (0x0050)  
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimInputActionBrushConfig
/// Size: 0x00D0 (0x000000 - 0x0000D0)
struct FPilgrimInputActionBrushConfig
{ 
	class UInputAction*                                BoundInputAction;                                           // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0008   (0x0008)  MISSED
	FSlateBrush                                        KeyBrush;                                                   // 0x0010   (0x00C0)  
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimTouchBrushesMappingConfig
/// Size: 0x0010 (0x000000 - 0x000010)
struct FPilgrimTouchBrushesMappingConfig
{ 
	TArray<FPilgrimInputActionBrushConfig>             Mappings;                                                   // 0x0000   (0x0010)  
};

/// Class /Script/PilgrimCoreRuntime.PilgrimPlayerControllerComponent
/// Size: 0x0228 (0x0000A0 - 0x0002C8)
class UPilgrimPlayerControllerComponent : public UControllerComponent
{ 
public:
	SDK_UNDEFINED(16,15248) /* FMulticastInlineDelegate */ __um(OnServerTimedInputReceived);                       // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,15249) /* FMulticastInlineDelegate */ __um(OnServerSyncHeartbeatMessageReceived);             // 0x00B0   (0x0010)  
	SDK_UNDEFINED(16,15250) /* FMulticastInlineDelegate */ __um(OnActivateInputPreset);                            // 0x00C0   (0x0010)  
	SDK_UNDEFINED(16,15251) /* FMulticastInlineDelegate */ __um(OnDesiredInputPresetChanged);                      // 0x00D0   (0x0010)  
	SDK_UNDEFINED(16,15252) /* FMulticastInlineDelegate */ __um(OnInputSettingsChanged);                           // 0x00E0   (0x0010)  
	SDK_UNDEFINED(16,15253) /* FMulticastInlineDelegate */ __um(OnMusicBattleClientUpdateReceived);                // 0x00F0   (0x0010)  
	SDK_UNDEFINED(16,15254) /* FMulticastInlineDelegate */ __um(OnStateMachineMessageReceived);                    // 0x0100   (0x0010)  
	class UDataTable*                                  DefaultUnbindsDataTable;                                    // 0x0110   (0x0008)  
	class UInputAction*                                CycleInputsInputAction;                                     // 0x0118   (0x0008)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0120   (0x0008)  MISSED
	class UInputAction*                                CycleLanesInputAction;                                      // 0x0128   (0x0008)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0130   (0x0008)  MISSED
	class UInputAction*                                EmotePickerInputAction;                                     // 0x0138   (0x0008)  
	SDK_UNDEFINED(80,15255) /* TMap<char, UFortInputMappingContext*> */ __um(FallbackKeyboardLaneInputMappingConfigs); // 0x0140   (0x0050)  
	SDK_UNDEFINED(80,15256) /* TMap<char, UFortInputMappingContext*> */ __um(FallbackControllerLaneInputMappingConfigs); // 0x0190   (0x0050)  
	class UFortInputMappingContext*                    KeyboardAsPlasticGuitarBeatmatchIMC;                        // 0x01E0   (0x0008)  
	class UFortInputMappingContext*                    PlasticGuitarBeatmatchIMC;                                  // 0x01E8   (0x0008)  
	SDK_UNDEFINED(80,15257) /* TMap<char, FPilgrimLaneInputMappingConfig> */ __um(LaneInputMappingConfigs);        // 0x01F0   (0x0050)  
	FPilgrimTouchBrushesMappingConfig                  TouchBrushesConfig;                                         // 0x0240   (0x0010)  
	char                                               SelectedNumInputLanes;                                      // 0x0250   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x0251   (0x0007)  MISSED
	class UFortInputMappingContext*                    SelectedPCBeatmatchIMC;                                     // 0x0258   (0x0008)  
	class UFortInputMappingContext*                    SelectedConsoleBeatmatchIMC;                                // 0x0260   (0x0008)  
	unsigned char                                      UnknownData03_5[0x50];                                      // 0x0268   (0x0050)  MISSED
	class UPilgrimGameUserSettings*                    PilgrimGameUserSettings;                                    // 0x02B8   (0x0008)  
	class UPilgrimPresetConfiguration*                 PilgrimPresetConfiguration;                                 // 0x02C0   (0x0008)  


	/// Functions
	// Function /Script/PilgrimCoreRuntime.PilgrimPlayerControllerComponent.Solo_SendRequestToReplayPreviousSong
	// void Solo_SendRequestToReplayPreviousSong();                                                                          // [0xa77c758] Final|Native|Public|BlueprintCallable 
	// Function /Script/PilgrimCoreRuntime.PilgrimPlayerControllerComponent.Solo_SendRequestToPlayNextSong
	// void Solo_SendRequestToPlayNextSong();                                                                                // [0xa77c744] Final|Native|Public|BlueprintCallable 
	// Function /Script/PilgrimCoreRuntime.PilgrimPlayerControllerComponent.Solo_SendRequestToLeaveStage
	// void Solo_SendRequestToLeaveStage();                                                                                  // [0xa77c730] Final|Native|Public|BlueprintCallable 
	// Function /Script/PilgrimCoreRuntime.PilgrimPlayerControllerComponent.SetNumInputLanes
	// void SetNumInputLanes(char NumLanes);                                                                                 // [0xa77c6b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/PilgrimCoreRuntime.PilgrimPlayerControllerComponent.SetDesiredInputMappingContext
	// void SetDesiredInputMappingContext(class UFortInputMappingContext* NewContext, EHardwareDevicePrimaryType DeviceType, bool bShouldUpdateSettings); // [0xa77c4b8] Final|Native|Public|BlueprintCallable 
	// Function /Script/PilgrimCoreRuntime.PilgrimPlayerControllerComponent.ServerSetPlasticInstrumentsPluggedIn
	// void ServerSetPlasticInstrumentsPluggedIn(bool bIsPlasticPluggedIn);                                                  // [0xa77c43c] Final|Native|Public  
	// Function /Script/PilgrimCoreRuntime.PilgrimPlayerControllerComponent.ServerSendTimedInput
	// void ServerSendTimedInput(FPilgrimTimedInput TimedInput);                                                             // [0xa77c2b8] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/PilgrimCoreRuntime.PilgrimPlayerControllerComponent.ServerSendSyncHeartbeatMessage
	// void ServerSendSyncHeartbeatMessage();                                                                                // [0x18fda34] Net|Native|Event|Protected|NetServer 
	// Function /Script/PilgrimCoreRuntime.PilgrimPlayerControllerComponent.ServerHandleUpdateMusicBattle
	// void ServerHandleUpdateMusicBattle(EMusicBattleClientUpdate MusicBattleUpdate);                                       // [0xa77c21c] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/PilgrimCoreRuntime.PilgrimPlayerControllerComponent.ServerHandleStateMachineRequest
	// void ServerHandleStateMachineRequest(EPilgrimStateMachineMessage StateMachineMessage);                                // [0xa406074] Net|NetReliableNative|Event|Protected|NetServer 
	// Function /Script/PilgrimCoreRuntime.PilgrimPlayerControllerComponent.SendUpdateToMusicBattle
	// void SendUpdateToMusicBattle(EMusicBattleClientUpdate MusicBattleUpdate);                                             // [0xa77c19c] Final|Native|Public|BlueprintCallable 
	// Function /Script/PilgrimCoreRuntime.PilgrimPlayerControllerComponent.SendRequestToStopAndSkipPostGame
	// void SendRequestToStopAndSkipPostGame();                                                                              // [0xa77c188] Final|Native|Public|BlueprintCallable 
	// Function /Script/PilgrimCoreRuntime.PilgrimPlayerControllerComponent.SendRequestToRestartSong
	// void SendRequestToRestartSong();                                                                                      // [0xa77c174] Final|Native|Public|BlueprintCallable 
	// Function /Script/PilgrimCoreRuntime.PilgrimPlayerControllerComponent.OnServerTimedInputReceived__DelegateSignature
	// void OnServerTimedInputReceived__DelegateSignature(class UPilgrimPlayerControllerComponent* PlayerControllerComponent, FPilgrimTimedInput& TimedInput); // [0x18a39e4] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/PilgrimCoreRuntime.PilgrimPlayerControllerComponent.OnServerSyncHeartbeatMessageReceived__DelegateSignature
	// void OnServerSyncHeartbeatMessageReceived__DelegateSignature(class UPilgrimPlayerControllerComponent* PlayerControllerComponent); // [0x18a39e4] MulticastDelegate|Public|Delegate 
	// Function /Script/PilgrimCoreRuntime.PilgrimPlayerControllerComponent.OnPlayerSentStateMachineMessage__DelegateSignature
	// void OnPlayerSentStateMachineMessage__DelegateSignature(class UPilgrimPlayerControllerComponent* PlayerControllerComponent, EPilgrimStateMachineMessage StateMachineMessage); // [0x18a39e4] MulticastDelegate|Public|Delegate 
	// Function /Script/PilgrimCoreRuntime.PilgrimPlayerControllerComponent.OnPilgrimGameStart
	// void OnPilgrimGameStart(class UPilgrimGame* PilgrimGame);                                                             // [0x93a9408] Native|Event|Public|BlueprintEvent 
	// Function /Script/PilgrimCoreRuntime.PilgrimPlayerControllerComponent.OnPilgrimGameEnd
	// void OnPilgrimGameEnd(class UPilgrimGame* PilgrimGame);                                                               // [0xa77c0f0] Native|Event|Public|BlueprintEvent 
	// Function /Script/PilgrimCoreRuntime.PilgrimPlayerControllerComponent.OnMusicBattleClientUpdateReceived__DelegateSignature
	// void OnMusicBattleClientUpdateReceived__DelegateSignature(class UPilgrimPlayerControllerComponent* PlayerControllerComponent, EMusicBattleClientUpdate MusicBattleUpdate); // [0x18a39e4] MulticastDelegate|Public|Delegate 
	// Function /Script/PilgrimCoreRuntime.PilgrimPlayerControllerComponent.OnInputSettingsChanged__DelegateSignature
	// void OnInputSettingsChanged__DelegateSignature();                                                                     // [0x18a39e4] MulticastDelegate|Public|Delegate 
	// Function /Script/PilgrimCoreRuntime.PilgrimPlayerControllerComponent.OnEmotePicker
	// void OnEmotePicker();                                                                                                 // [0xa77c0dc] Final|Native|Public|BlueprintCallable 
	// Function /Script/PilgrimCoreRuntime.PilgrimPlayerControllerComponent.Multiplayer_SendRequestToLeaveStage
	// void Multiplayer_SendRequestToLeaveStage();                                                                           // [0xa77c0c8] Final|Native|Public|BlueprintCallable 
	// Function /Script/PilgrimCoreRuntime.PilgrimPlayerControllerComponent.LoadInputConfigurationFromPartition
	// void LoadInputConfigurationFromPartition();                                                                           // [0xa77c0b4] Final|Native|Public  
	// Function /Script/PilgrimCoreRuntime.PilgrimPlayerControllerComponent.IsUsingGamepad
	// bool IsUsingGamepad();                                                                                                // [0xa77c090] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimPlayerControllerComponent.IsLocallyControlled
	// bool IsLocallyControlled();                                                                                           // [0xa77c06c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimPlayerControllerComponent.InputPresetEvent__DelegateSignature
	// void InputPresetEvent__DelegateSignature(class AFortPlayerController* FortPlayerController, class UFortInputMappingContext* InputMappingContext); // [0x18a39e4] MulticastDelegate|Public|Delegate 
	// Function /Script/PilgrimCoreRuntime.PilgrimPlayerControllerComponent.GetTouchBrushForInputAction
	// bool GetTouchBrushForInputAction(FSlateBrush& OutBrush, class UInputAction* InputAction);                             // [0xa77bda4] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimPlayerControllerComponent.GetSelectedPreset
	// class UFortInputMappingContext* GetSelectedPreset();                                                                  // [0xa77bcf0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimPlayerControllerComponent.GetSelectedPCBeamatchInputMappingContext
	// class UFortInputMappingContext* GetSelectedPCBeamatchInputMappingContext();                                           // [0xa77bcd8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimPlayerControllerComponent.GetSelectedConsoleBeamatchInputMappingContext
	// class UFortInputMappingContext* GetSelectedConsoleBeamatchInputMappingContext();                                      // [0x8107c40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimPlayerControllerComponent.GetPilgrimGameUserSettings
	// class UPilgrimGameUserSettings* GetPilgrimGameUserSettings();                                                         // [0xa77b8dc] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/PilgrimCoreRuntime.PilgrimPlayerControllerComponent.GetPilgrimClientSettingRecordPartition
	// class UPilgrimClientSettingRecordPartition* GetPilgrimClientSettingRecordPartition();                                 // [0xa77b8b8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimPlayerControllerComponent.GetNumRelevantInputPresets
	// int32_t GetNumRelevantInputPresets();                                                                                 // [0xa77b894] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimPlayerControllerComponent.GetLastSelectedPreset
	// class UFortInputMappingContext* GetLastSelectedPreset();                                                              // [0xa77b870] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimPlayerControllerComponent.GetHoldSecondsToSwitchNumLanes
	// float GetHoldSecondsToSwitchNumLanes();                                                                               // [0x8b1bfc4] Final|Native|Protected|BlueprintCallable|BlueprintPure 
	// Function /Script/PilgrimCoreRuntime.PilgrimPlayerControllerComponent.GetCurrentPresetIndex
	// int32_t GetCurrentPresetIndex();                                                                                      // [0xa77b764] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimPlayerControllerComponent.FindFirstPresetMatchingCurrentKeybinds
	// class UFortInputMappingContext* FindFirstPresetMatchingCurrentKeybinds();                                             // [0xa77b6b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimPlayerControllerComponent.DeactivateInputPreset
	// void DeactivateInputPreset();                                                                                         // [0xa77b69c] Final|Native|Public|BlueprintCallable 
	// Function /Script/PilgrimCoreRuntime.PilgrimPlayerControllerComponent.CycleSelectedPreset
	// void CycleSelectedPreset();                                                                                           // [0xa77b688] Final|Native|Public|BlueprintCallable 
	// Function /Script/PilgrimCoreRuntime.PilgrimPlayerControllerComponent.CycleSelectedNumInputLanes
	// void CycleSelectedNumInputLanes();                                                                                    // [0xa77b674] Final|Native|Public|BlueprintCallable 
	// Function /Script/PilgrimCoreRuntime.PilgrimPlayerControllerComponent.AreSelectedInputMappingContextsActive
	// bool AreSelectedInputMappingContextsActive();                                                                         // [0xa77b650] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimPlayerControllerComponent.ActivateSelectedInputMappingContexts
	// void ActivateSelectedInputMappingContexts();                                                                          // [0xa77b63c] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/PilgrimCoreRuntime.PilgrimPlayspace
/// Size: 0x0040 (0x000790 - 0x0007D0)
class APilgrimPlayspace : public ASparksMusicPlayspace
{ 
public:
	TArray<class APilgrimMusicBattleInstance*>         PilgrimMusicBattleInstances;                                // 0x0790   (0x0010)  
	class UNetworkedMusicClockManager*                 MusicClockManager;                                          // 0x07A0   (0x0008)  
	class UPilgrimPlayspaceComponent_SongPreloader*    SongPreloader;                                              // 0x07A8   (0x0008)  
	class UPilgrimMediaStreamer*                       MediaStreamer;                                              // 0x07B0   (0x0008)  
	class UPilgrimGemAnalyzer*                         GemAnalyzer;                                                // 0x07B8   (0x0008)  
	class UPilgrimPlayspaceComponent_LipSyncAssetManager* LipSyncManager;                                          // 0x07C0   (0x0008)  
	class UPilgrimGameConfig*                          PilgrimGameConfig;                                          // 0x07C8   (0x0008)  


	/// Functions
	// Function /Script/PilgrimCoreRuntime.PilgrimPlayspace.TryGetPilgrimGameForTeam
	// class UPilgrimGame* TryGetPilgrimGameForTeam(int32_t TeamIndex);                                                      // [0xa77eb2c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimPlayspace.TryGetPilgrimGameForPlayer
	// class UPilgrimGame* TryGetPilgrimGameForPlayer(class AController* Controller);                                        // [0xa77ea34] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimPlayspace.TryGetMusicBattleInstanceForTeam
	// class APilgrimMusicBattleInstance* TryGetMusicBattleInstanceForTeam(int32_t Team);                                    // [0xa77e9a8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimPlayspace.HasAnotherSongToPlay
	// bool HasAnotherSongToPlay();                                                                                          // [0xa77e754] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimPlayspace.GetStandinPlayerStates
	// TArray<AFortPlayerStateAthena*> GetStandinPlayerStates();                                                             // [0xa77e6e8] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimPlayspace.GetStandinPlayerPawns
	// TArray<AFortPlayerPawnAthena*> GetStandinPlayerPawns();                                                               // [0xa77e6a8] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimPlayspace.GetPilgrimGameForTeam
	// class UPilgrimGame* GetPilgrimGameForTeam(int32_t TeamIndex);                                                         // [0xa77e428] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimPlayspace.GetNetworkedMusicClockManager
	// class UNetworkedMusicClockManager* GetNetworkedMusicClockManager(class UObject* WorldContextObject);                  // [0xa77e3a8] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/PilgrimCoreRuntime.PilgrimPlayspace.GetMusicClock
	// class UMusicClockComponent* GetMusicClock(class UObject* WorldContextObject);                                         // [0xa77e328] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/PilgrimCoreRuntime.PilgrimPlayspace.GetMusicBattleInstanceForTeam
	// class APilgrimMusicBattleInstance* GetMusicBattleInstanceForTeam(int32_t Team);                                       // [0xa77e29c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimPlayspace.GetMusicBattleInstanceForPlayer
	// class APilgrimMusicBattleInstance* GetMusicBattleInstanceForPlayer(class AController* Controller);                    // [0xa77e20c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimPlayspace.GetConfig
	// class UPilgrimGameConfig* GetConfig();                                                                                // [0xa77de14] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimPlayspace.GetAllMusicBattleInstances
	// TArray<APilgrimMusicBattleInstance*> GetAllMusicBattleInstances();                                                    // [0xa77ddf8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimPlayspace.ClearMusicBattleInstances
	// void ClearMusicBattleInstances();                                                                                     // [0xa77dc0c] Final|Native|Public|BlueprintCallable 
	// Function /Script/PilgrimCoreRuntime.PilgrimPlayspace.BroadcastCameraDirectorIntermissionEvent
	// void BroadcastCameraDirectorIntermissionEvent(FGameplayTagContainer TagsToSend);                                      // [0xa77daac] Native|Public|BlueprintCallable|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimPlayspace.BroadcastCameraDirectorDynamicEvent
	// void BroadcastCameraDirectorDynamicEvent(FGameplayTagContainer TagsToSend, class AActor* Target, float ShotTimeLength, bool bWaitForTransition); // [0xa77d6b0] Native|Public|BlueprintCallable|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimPlayspace.AddMusicBattleInstance
	// void AddMusicBattleInstance(class APilgrimMusicBattleInstance* MusicBattleInstance);                                  // [0xa77d630] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/PilgrimCoreRuntime.PilgrimPlayspaceComponent_LipSyncAssetManager
/// Size: 0x0008 (0x0000B0 - 0x0000B8)
class UPilgrimPlayspaceComponent_LipSyncAssetManager : public UPlayspaceComponent_LipSyncAssetManager
{ 
public:
	class UAnimSequence*                               CachedLipsyncAnimSequence;                                  // 0x00B0   (0x0008)  
};

/// Class /Script/PilgrimCoreRuntime.PilgrimPremadeSetlist
/// Size: 0x0090 (0x000030 - 0x0000C0)
class UPilgrimPremadeSetlist : public UDataAsset
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0030   (0x0008)  MISSED
	SDK_UNDEFINED(24,15258) /* FText */                __um(SetlistTitle);                                         // 0x0038   (0x0018)  
	SDK_UNDEFINED(24,15259) /* FText */                __um(Description);                                          // 0x0050   (0x0018)  
	TArray<FName>                                      SongShortNameList;                                          // 0x0068   (0x0010)  
	FGameplayTag                                       SetlistTag;                                                 // 0x0078   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x007C   (0x0004)  MISSED
	FGameplayTagContainer                              AdditionalTags;                                             // 0x0080   (0x0020)  
	SDK_UNDEFINED(32,15260) /* TWeakObjectPtr<UTexture2D*> */ __um(SetlistArt);                                    // 0x00A0   (0x0020)  
};

/// Class /Script/PilgrimCoreRuntime.PilgrimPresetConfiguration
/// Size: 0x0070 (0x000030 - 0x0000A0)
class UPilgrimPresetConfiguration : public UDataAsset
{ 
public:
	class UFortInputMappingContext*                    GlobalInputMappingContext;                                  // 0x0030   (0x0008)  
	class UFortInputMappingContext*                    CheatInputMappingContext;                                   // 0x0038   (0x0008)  
	class UFortInputMappingContext*                    GreenRoomInputMappingContext;                               // 0x0040   (0x0008)  
	class UFortInputMappingContext*                    GreenRoomAltInputMappingContext;                            // 0x0048   (0x0008)  
	SDK_UNDEFINED(80,15261) /* TMap<char, FPilgrimLaneInputMappingConfig> */ __um(LaneInputMappingConfigs);        // 0x0050   (0x0050)  


	/// Functions
	// Function /Script/PilgrimCoreRuntime.PilgrimPresetConfiguration.GetDeviceInputMappingContexts
	// TArray<UFortInputMappingContext*> GetDeviceInputMappingContexts(int32_t NumLanes, EHardwareDevicePrimaryType DeviceType); // [0xa77de2c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/PilgrimCoreRuntime.PilgrimPresetSelectorBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UPilgrimPresetSelectorBase : public UObject
{ 
public:
};

/// Class /Script/PilgrimCoreRuntime.PilgrimQuestDefinitionComponent_TextFormat
/// Size: 0x0000 (0x000078 - 0x000078)
class UPilgrimQuestDefinitionComponent_TextFormat : public UFortQuestDefinitionComponent_TextFormat
{ 
public:
};

/// Class /Script/PilgrimCoreRuntime.PilgrimQuestLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UPilgrimQuestLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/PilgrimCoreRuntime.PilgrimQuestLibrary.QuestPassesFilter
	// bool QuestPassesFilter(TScriptInterface<Class> QuestInterface, FPilgrimQuestFilter& QuestFilter);                     // [0xa77e7fc] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PilgrimCoreRuntime.PilgrimQuestLibrary.GetQuestDisplayInfo
	// FPilgrimQuestDisplayInfo GetQuestDisplayInfo(class UObject* WorldContextObject, TScriptInterface<Class> Quest);       // [0xa77e4b4] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/PilgrimCoreRuntime.PilgrimQuestLibrary.GetFilteredQuests
	// void GetFilteredQuests(TArray<TScriptInterface<Class>>& OutQuests, class APlayerState* Player, FPilgrimQuestFilter& Filter); // [0xa77e030] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/PilgrimCoreRuntime.PilgrimRandomSetlist
/// Size: 0x0068 (0x0000A0 - 0x000108)
class UPilgrimRandomSetlist : public UPlayspaceComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x00A0   (0x0008)  MISSED
	int32_t                                            NumSongsToPopulate;                                         // 0x00A8   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x00AC   (0x0004)  MISSED
	FGameplayTagQuery                                  SongFilterQuery;                                            // 0x00B0   (0x0048)  
	TArray<class UPilgrimSongMetadata*>                SongList;                                                   // 0x00F8   (0x0010)  


	/// Functions
	// Function /Script/PilgrimCoreRuntime.PilgrimRandomSetlist.PopulateRandomSongs
	// void PopulateRandomSongs(class UObject* WorldContextObject);                                                          // [0xa77e77c] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
};

/// Class /Script/PilgrimCoreRuntime.PilgrimRenderTargetComponent
/// Size: 0x0020 (0x0000A0 - 0x0000C0)
class UPilgrimRenderTargetComponent : public UControllerComponent
{ 
public:
	class UTextureRenderTarget2D*                      RenderTarget;                                               // 0x00A0   (0x0008)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x00A8   (0x0018)  MISSED


	/// Functions
	// Function /Script/PilgrimCoreRuntime.PilgrimRenderTargetComponent.GetUVScaleOffset
	// FVector4f GetUVScaleOffset();                                                                                         // [0xa77e72c] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimRenderTargetComponent.GetRenderTarget
	// class UTextureRenderTarget2D* GetRenderTarget();                                                                      // [0xa77e664] Final|Native|Public|BlueprintCallable 
	// Function /Script/PilgrimCoreRuntime.PilgrimRenderTargetComponent.GetLeftTopRightBottom
	// FVector4f GetLeftTopRightBottom();                                                                                    // [0xa77e1f0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimRenderTargetComponent.CropTargetAndGetProjectionMatrix
	// FMatrix CropTargetAndGetProjectionMatrix(FVector4f& InLeftTopRightBottom, float FOV);                                 // [0xa77dc20] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/PilgrimCoreRuntime.PilgrimRequestFriendScoreWrapper
/// Size: 0x00F0 (0x000028 - 0x000118)
class UPilgrimRequestFriendScoreWrapper : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x118];                                     // 0x0000   (0x0118)  MISSED
};

/// Class /Script/PilgrimCoreRuntime.PilgrimScoreDebugPrinter
/// Size: 0x0008 (0x000028 - 0x000030)
class UPilgrimScoreDebugPrinter : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x0000   (0x0030)  MISSED
};

/// Class /Script/PilgrimCoreRuntime.PilgrimScoringModel
/// Size: 0x0430 (0x000028 - 0x000458)
class UPilgrimScoringModel : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x30];                                      // 0x0000   (0x0030)  MISSED
	FPilgrimGameProgress                               GameProgress;                                               // 0x0030   (0x006C)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x009C   (0x0004)  MISSED
	FPilgrimGameConfigSettings                         GameConfigSettings;                                         // 0x00A0   (0x02F0)  
	unsigned char                                      UnknownData02_5[0x18];                                      // 0x0390   (0x0018)  MISSED
	SDK_UNDEFINED(8,15262) /* TWeakObjectPtr<AActor*> */ __um(ContextActor);                                       // 0x03A8   (0x0008)  
	unsigned char                                      UnknownData03_6[0xA8];                                      // 0x03B0   (0x00A8)  MISSED


	/// Functions
	// Function /Script/PilgrimCoreRuntime.PilgrimScoringModel.GetScoreRequiredForStar
	// int32_t GetScoreRequiredForStar(int32_t Stars);                                                                       // [0xa78030c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimScoringModel.ComputeSustainScorePerBeat
	// float ComputeSustainScorePerBeat(EPilgrimScoringMode ScoringMode);                                                    // [0xa77fcac] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimScoringModel.ComputeStreakMultiplier
	// float ComputeStreakMultiplier(EPilgrimScoringMode ScoringMode);                                                       // [0xa77fc1c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimScoringModel.ComputeOverdriveMultiplier
	// float ComputeOverdriveMultiplier(EPilgrimScoringMode ScoringMode);                                                    // [0xa77fb8c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimScoringModel.ComputeMaxScore
	// float ComputeMaxScore(TArray<FTrackItemInfo>& Gems, class UPilgrimSongData* SongData);                                // [0xa77f9e4] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/PilgrimCoreRuntime.PilgrimScoringModel.ComputeGemBaseScoreValue
	// float ComputeGemBaseScoreValue(EPilgrimScoringMode ScoringMode);                                                      // [0xa77f954] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimScoringModel.ComputeAccuracyMultiplier
	// float ComputeAccuracyMultiplier(EPilgrimScoringMode ScoringMode, FPilgrimGemHitAccuracy& Accuracy);                   // [0xa77f864] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/PilgrimCoreRuntime.PilgrimScoringModifier
/// Size: 0x0000 (0x000030 - 0x000030)
class UPilgrimScoringModifier : public UPrimaryDataAsset
{ 
public:


	/// Functions
	// Function /Script/PilgrimCoreRuntime.PilgrimScoringModifier.Apply
	// float Apply(float InputValue);                                                                                        // [0x18a39e4] Event|Public|BlueprintEvent 
};

/// Class /Script/PilgrimCoreRuntime.PilgrimSetlistInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UPilgrimSetlistInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/PilgrimCoreRuntime.PilgrimSetlistInterface.RemoveUnavailableSongs
	// void RemoveUnavailableSongs(class UObject* WorldContextObject, FPlayspaceUser& ExcludedUser);                         // [0xa780ed8] RequiredAPI|Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/PilgrimCoreRuntime.PilgrimSetlistInterface.GetSongList
	// TArray<UPilgrimSongMetadata*> GetSongList(class UObject* WorldContextObject);                                         // [0xa780740] RequiredAPI|Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimSetlistInterface.GetSongAtIndex
	// class UPilgrimSongMetadata* GetSongAtIndex(class UObject* WorldContextObject, int32_t Index);                         // [0xa780470] RequiredAPI|Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimSetlistInterface.GetSetlistDuration
	// FTimespan GetSetlistDuration(class UObject* WorldContextObject);                                                      // [0xa7803b8] RequiredAPI|Native|Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimSetlistInterface.GetNumSongs
	// int32_t GetNumSongs(class UObject* WorldContextObject);                                                               // [0xa78001c] RequiredAPI|Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
};

/// Class /Script/PilgrimCoreRuntime.PilgrimSettings
/// Size: 0x0008 (0x000030 - 0x000038)
class UPilgrimSettings : public UDeveloperSettings
{ 
public:
	int32_t                                            NumGemPoolItems;                                            // 0x0030   (0x0004)  
	int32_t                                            NumBeatMarkerPoolItems;                                     // 0x0034   (0x0004)  
};

/// Class /Script/PilgrimCoreRuntime.PilgrimSongCatalog
/// Size: 0x00B0 (0x0000A0 - 0x000150)
class UPilgrimSongCatalog : public UGameStateComponent
{ 
public:
	SDK_UNDEFINED(80,15263) /* TMap<FName, UPilgrimSongMetadata*> */ __um(SongsByShortName);                       // 0x00A0   (0x0050)  
	SDK_UNDEFINED(80,15264) /* TMap<FString, UPilgrimSongMetadata*> */ __um(SongsByShortMcpTemplateId);            // 0x00F0   (0x0050)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0140   (0x0010)  MISSED


	/// Functions
	// Function /Script/PilgrimCoreRuntime.PilgrimSongCatalog.PlayerHasSongEntitlement
	// bool PlayerHasSongEntitlement(class AFortPlayerController* Player, class UPilgrimSongMetadata* Song);                 // [0xa780da4] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/PilgrimCoreRuntime.PilgrimSongCatalog.OnCMSCatalogRetrieved
	// void OnCMSCatalogRetrieved(bool bSuccess);                                                                            // [0xa780d10] Final|Native|Private 
	// Function /Script/PilgrimCoreRuntime.PilgrimSongCatalog.IsSongShared
	// bool IsSongShared(class AFortPlayerController* Player, FName SongShortName);                                          // [0xa780b2c] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimSongCatalog.GetSortedSongList
	// TArray<UPilgrimSongMetadata*> GetSortedSongList(EPilgrimSongSortMethod SortMethod, EPilgrimSongSortDirection SortDirection, FGameplayTagQuery& TagQuery); // [0xa7807e8] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimSongCatalog.GetSongByShortName
	// class UPilgrimSongMetadata* GetSongByShortName(FName ShortName);                                                      // [0xa7806b4] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimSongCatalog.GetSongByMcpTemplateId
	// class UPilgrimSongMetadata* GetSongByMcpTemplateId(FString McpTemplateId);                                            // [0xa780538] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimSongCatalog.GetRandomSongList
	// TArray<UPilgrimSongMetadata*> GetRandomSongList(int32_t NumSongs, FGameplayTagQuery& TagQuery);                       // [0xa780164] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimSongCatalog.GetPilgrimSongCatalog
	// class UPilgrimSongCatalog* GetPilgrimSongCatalog(class UObject* WorldContextObject);                                  // [0xa7800b0] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Struct /Script/PilgrimCoreRuntime.TrackItemInfo
/// Size: 0x0030 (0x000000 - 0x000030)
struct FTrackItemInfo
{ 
	int32_t                                            StartTick;                                                  // 0x0000   (0x0004)  
	int32_t                                            EndTick;                                                    // 0x0004   (0x0004)  
	int32_t                                            NumScorables;                                               // 0x0008   (0x0004)  
	float                                              Ms;                                                         // 0x000C   (0x0004)  
	int32_t                                            DurationMs;                                                 // 0x0010   (0x0004)  
	int32_t                                            DurationTicks;                                              // 0x0014   (0x0004)  
	EPilgrimTrackType                                  Track;                                                      // 0x0018   (0x0001)  
	EPilgrimTrackLane                                  Lane;                                                       // 0x0019   (0x0001)  
	EBeatMarkerType                                    BeatType;                                                   // 0x001A   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x001B   (0x0001)  MISSED
	int32_t                                            TrackItemIndex;                                             // 0x001C   (0x0004)  
	bool                                               IsOverdriveGem;                                             // 0x0020   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0021   (0x0003)  MISSED
	int32_t                                            OverdriveSectionNum;                                        // 0x0024   (0x0004)  
	bool                                               IsEndOfOverdriveSection;                                    // 0x0028   (0x0001)  
	bool                                               bAllowHitOnPress;                                           // 0x0029   (0x0001)  
	bool                                               bAllowHitOnRelease;                                         // 0x002A   (0x0001)  
	bool                                               bIsSustain;                                                 // 0x002B   (0x0001)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Class /Script/PilgrimCoreRuntime.PilgrimSongData
/// Size: 0x00B8 (0x0000D0 - 0x000188)
class UPilgrimSongData : public UParsedMidiEventData
{ 
public:
	unsigned char                                      UnknownData00_3[0x50];                                      // 0x00D0   (0x0050)  MISSED
	SDK_UNDEFINED(80,15265) /* TMap<EPilgrimSongDifficulty, FRBTrackInfo> */ __um(TracksPerDifficulty);            // 0x0120   (0x0050)  
	TArray<FTrackItemInfo>                             BeatMarkers;                                                // 0x0170   (0x0010)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0180   (0x0008)  MISSED
};

/// Class /Script/PilgrimCoreRuntime.PilgrimSongMetadata
/// Size: 0x01A0 (0x000030 - 0x0001D0)
class UPilgrimSongMetadata : public UPrimaryDataAsset
{ 
public:
	unsigned char                                      UnknownData00_3[0x20];                                      // 0x0030   (0x0020)  MISSED
	FName                                              ShortName;                                                  // 0x0050   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0054   (0x0004)  MISSED
	SDK_UNDEFINED(24,15266) /* FText */                __um(Title);                                                // 0x0058   (0x0018)  
	SDK_UNDEFINED(24,15267) /* FText */                __um(Artist);                                               // 0x0070   (0x0018)  
	FGameplayTagContainer                              AdditionalTags;                                             // 0x0088   (0x0020)  
	TArray<ESparksGenre>                               Genre;                                                      // 0x00A8   (0x0010)  
	int32_t                                            Year;                                                       // 0x00B8   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x00BC   (0x0004)  MISSED
	SDK_UNDEFINED(80,15268) /* TMap<EPilgrimTrackType, int32_t> */ __um(IntensityPerInstrument);                   // 0x00C0   (0x0050)  
	SDK_UNDEFINED(32,15269) /* TWeakObjectPtr<UTexture2D*> */ __um(AlbumArt);                                      // 0x0110   (0x0020)  
	EMusicKey                                          Key;                                                        // 0x0130   (0x0001)  
	EMusicKeyMode                                      Mode;                                                       // 0x0131   (0x0001)  
	unsigned char                                      UnknownData03_5[0x6];                                       // 0x0132   (0x0006)  MISSED
	SDK_UNDEFINED(16,15270) /* FString */              __um(StreamingVUID);                                        // 0x0138   (0x0010)  
	SDK_UNDEFINED(16,15271) /* FString */              __um(PreviewVUID);                                          // 0x0148   (0x0010)  
	FTimespan                                          duration;                                                   // 0x0158   (0x0008)  
	ESparksInstrumentType                              DrumStartingIntrument;                                      // 0x0160   (0x0001)  
	ESparksInstrumentType                              BassStartingIntrument;                                      // 0x0161   (0x0001)  
	ESparksInstrumentType                              GuitarStartingIntrument;                                    // 0x0162   (0x0001)  
	ESparksInstrumentType                              VocalsStartingIntrument;                                    // 0x0163   (0x0001)  
	unsigned char                                      UnknownData04_5[0x4];                                       // 0x0164   (0x0004)  MISSED
	class UCatalogData*                                SparksCatalogData;                                          // 0x0168   (0x0008)  
	SDK_UNDEFINED(32,15272) /* TWeakObjectPtr<UStemmedMusicAsset*> */ __um(StemmedMusicAsset);                     // 0x0170   (0x0020)  
	SDK_UNDEFINED(32,15273) /* TWeakObjectPtr<UAnimSequence*> */ __um(LipSyncAnimAsset);                           // 0x0190   (0x0020)  
	SDK_UNDEFINED(32,15274) /* TWeakObjectPtr<UStemmedMusicAsset*> */ __um(StemmedMusicAssetRuntime);              // 0x01B0   (0x0020)  


	/// Functions
	// Function /Script/PilgrimCoreRuntime.PilgrimSongMetadata.GetYear
	// int32_t GetYear();                                                                                                    // [0xa780b0c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimSongMetadata.GetTitle
	// FText GetTitle();                                                                                                     // [0xa780ac8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimSongMetadata.GetStreamingVUID
	// FString GetStreamingVUID();                                                                                           // [0xa780a94] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimSongMetadata.GetStemmedMusicAsset
	// TWeakObjectPtr<UStemmedMusicAsset*> GetStemmedMusicAsset();                                                           // [0xa780a5c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimSongMetadata.GetStartingInstrumentType
	// ESparksInstrumentType GetStartingInstrumentType(EPilgrimTrackType TrackType);                                         // [0xa7809d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimSongMetadata.GetSparksCatalogData
	// class UCatalogData* GetSparksCatalogData(class UObject* WorldContext);                                                // [0xa780948] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimSongMetadata.GetShortName
	// FName GetShortName();                                                                                                 // [0xa780444] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimSongMetadata.GetRawIntensity
	// int32_t GetRawIntensity(EPilgrimTrackType Instrument);                                                                // [0xa780280] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimSongMetadata.GetPreviewVUID
	// FString GetPreviewVUID();                                                                                             // [0xa780130] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimSongMetadata.GetMusicMode
	// EMusicKeyMode GetMusicMode();                                                                                         // [0x660df28] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimSongMetadata.GetMusicKey
	// EMusicKey GetMusicKey();                                                                                              // [0x9c05ffc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimSongMetadata.GetMappedIntensity
	// int32_t GetMappedIntensity(EPilgrimTrackType Instrument, int32_t Min, int32_t Max);                                   // [0xa77ff24] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimSongMetadata.GetLipSyncAnimAsset
	// TWeakObjectPtr<UAnimSequence*> GetLipSyncAnimAsset();                                                                 // [0xa77fef0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimSongMetadata.GetIntensityPerInstrument
	// TMap<EPilgrimTrackType, int32_t> GetIntensityPerInstrument();                                                         // [0xa77fe60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimSongMetadata.GetDuration
	// FTimespan GetDuration();                                                                                              // [0xa77fe38] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimSongMetadata.GetArtist
	// FText GetArtist();                                                                                                    // [0xa77fdf4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimSongMetadata.GetAlbumArtUrl
	// FString GetAlbumArtUrl();                                                                                             // [0xa77fdb4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimSongMetadata.GetAlbumArt
	// TWeakObjectPtr<UTexture2D*> GetAlbumArt();                                                                            // [0xa77fd70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimSongMetadata.GetAdditionalTags
	// FGameplayTagContainer GetAdditionalTags();                                                                            // [0xa77fd3c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/PilgrimCoreRuntime.PilgrimPlayspaceComponent_SongPreloader
/// Size: 0x0098 (0x0000A0 - 0x000138)
class UPilgrimPlayspaceComponent_SongPreloader : public UPlayspaceComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x18];                                      // 0x00A0   (0x0018)  MISSED
	FName                                              SongToLoad;                                                 // 0x00B8   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x00BC   (0x0004)  MISSED
	class UPilgrimSongMetadata*                        SongMetadata;                                               // 0x00C0   (0x0008)  
	SDK_UNDEFINED(80,15275) /* TMap<FUniqueNetIdRepl, bool> */ __um(PlayersFinishedLoading);                       // 0x00C8   (0x0050)  
	bool                                               bServerFinishedLoading;                                     // 0x0118   (0x0001)  
	bool                                               bBroadcastedLoadingFinished;                                // 0x0119   (0x0001)  
	unsigned char                                      UnknownData02_5[0x16];                                      // 0x011A   (0x0016)  MISSED
	FTimerHandle                                       LoadTimeoutTimerHandle;                                     // 0x0130   (0x0008)  


	/// Functions
	// Function /Script/PilgrimCoreRuntime.PilgrimPlayspaceComponent_SongPreloader.OnStreamerPrepared
	// void OnStreamerPrepared();                                                                                            // [0xa780d90] Final|Native|Private 
	// Function /Script/PilgrimCoreRuntime.PilgrimPlayspaceComponent_SongPreloader.NetMulticast_LoadSong
	// void NetMulticast_LoadSong(FName Song);                                                                               // [0xa780c8c] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/PilgrimCoreRuntime.PilgrimPlayspaceComponent_SongPreloader.NetMulticast_HandleAllLoadingFinished
	// void NetMulticast_HandleAllLoadingFinished();                                                                         // [0x8f9b82c] Final|Net|NetReliableNative|Event|NetMulticast|Private 
};

/// Class /Script/PilgrimCoreRuntime.PilgrimControllerComponent_SongPreloader
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UPilgrimControllerComponent_SongPreloader : public UControllerComponent
{ 
public:


	/// Functions
	// Function /Script/PilgrimCoreRuntime.PilgrimControllerComponent_SongPreloader.ServerKickPlayerForNetworkIssues
	// void ServerKickPlayerForNetworkIssues(FText Reason);                                                                  // [0xa781080] Net|NetReliableNative|Event|Public|NetServer 
	// Function /Script/PilgrimCoreRuntime.PilgrimControllerComponent_SongPreloader.ServerFinishedLoadingSong
	// void ServerFinishedLoadingSong(FName Song);                                                                           // [0xa780ffc] Net|NetReliableNative|Event|Public|NetServer 
};

/// Class /Script/PilgrimCoreRuntime.PilgrimSustainTrackItemMgr
/// Size: 0x0060 (0x0000D8 - 0x000138)
class UPilgrimSustainTrackItemMgr : public UPilgrimTrackItemMgr
{ 
public:
	TArray<class APilgrimTrackSustain*>                ActiveSustains;                                             // 0x00D8   (0x0010)  
	SDK_UNDEFINED(80,15276) /* TMap<FPilgrimTrackItemKey, APilgrimTrackSustain*> */ __um(ActiveSustainsMap);       // 0x00E8   (0x0050)  
};

/// Class /Script/PilgrimCoreRuntime.PilgrimTouchButtonBase
/// Size: 0x0040 (0x0002E8 - 0x000328)
class UPilgrimTouchButtonBase : public UCommonUserWidget
{ 
public:
	class UInputAction*                                PressAction;                                                // 0x02E8   (0x0008)  
	EWidgetTouchKbmControllerTransitionType            WidgetTransitionType;                                       // 0x02F0   (0x0001)  
	bool                                               DeactivateInputActionIfDragOutsideHitbox;                   // 0x02F1   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x02F2   (0x0002)  MISSED
	FLinearColor                                       PressedColor;                                               // 0x02F4   (0x0010)  
	FLinearColor                                       ReleasedColor;                                              // 0x0304   (0x0010)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0314   (0x0004)  MISSED
	class UImage*                                      Image_Icon;                                                 // 0x0318   (0x0008)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x0320   (0x0008)  MISSED


	/// Functions
	// Function /Script/PilgrimCoreRuntime.PilgrimTouchButtonBase.HandleInputMethodChanged
	// void HandleInputMethodChanged(ECommonInputType CurrentInputType);                                                     // [0xa782728] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/PilgrimCoreRuntime.PilgrimTrack
/// Size: 0x0120 (0x000290 - 0x0003B0)
class APilgrimTrack : public AActor
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0290   (0x0008)  MISSED
	class UChildActorComponent*                        NowBarChildActor;                                           // 0x0298   (0x0008)  
	class USceneComponent*                             TopOfTrack;                                                 // 0x02A0   (0x0008)  
	class UClass*                                      PilgrimGemClass;                                            // 0x02A8   (0x0008)  
	class UClass*                                      BeatMarkerClass;                                            // 0x02B0   (0x0008)  
	class UClass*                                      SustainClass;                                               // 0x02B8   (0x0008)  
	class USceneComponent*                             SceneRoot;                                                  // 0x02C0   (0x0008)  
	class UPilgrimTrackCaptureComponent*               TrackCaptureComponent2D;                                    // 0x02C8   (0x0008)  
	class UMaterialInterface*                          PilgrimTrackAlphaMaterial;                                  // 0x02D0   (0x0008)  
	class UMaterialParameterCollection*                PilgrimTrackMaterialParameterCollection;                    // 0x02D8   (0x0008)  
	class UMaterialParameterCollectionInstance*        PilgrimTrackMaterialParameterCollectionInstance;            // 0x02E0   (0x0008)  
	SDK_UNDEFINED(32,15277) /* TWeakObjectPtr<UPilgrimGame*> */ __um(ParentGame);                                  // 0x02E8   (0x0020)  
	class USplineComponent*                            BeatMarkerSpline;                                           // 0x0308   (0x0008)  
	SDK_UNDEFINED(8,15278) /* TWeakObjectPtr<APilgrimNowBar*> */ __um(CachedNowBar);                               // 0x0310   (0x0008)  
	class UPilgrimGemTrackItemMgr*                     GemMgr;                                                     // 0x0318   (0x0008)  
	class UPilgrimSustainTrackItemMgr*                 SustainMgr;                                                 // 0x0320   (0x0008)  
	class UPilgrimBeatMarkerTrackItemMgr*              BeatMarkerMgr;                                              // 0x0328   (0x0008)  
	SDK_UNDEFINED(80,15279) /* TMap<EPilgrimTrackLane, TWeakObjectPtr<APilgrimGemSmasher*>> */ __um(SmasherMap);   // 0x0330   (0x0050)  
	unsigned char                                      UnknownData01_6[0x30];                                      // 0x0380   (0x0030)  MISSED


	/// Functions
	// Function /Script/PilgrimCoreRuntime.PilgrimTrack.UpdateBeatmarkerVisibility
	// void UpdateBeatmarkerVisibility(bool bNewIsVisible);                                                                  // [0xa782ce8] Final|Native|Public|BlueprintCallable 
	// Function /Script/PilgrimCoreRuntime.PilgrimTrack.OnGemSmashed
	// void OnGemSmashed(EPilgrimTrackLane Lane, FPilgrimGemHitAccuracy& Accuracy, bool bIsOverdrive);                       // [0x18a39e4] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/PilgrimCoreRuntime.PilgrimTrack.OnGameEnded
	// void OnGameEnded();                                                                                                   // [0x2f99b74] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/PilgrimCoreRuntime.PilgrimTrack.HideAllItems
	// void HideAllItems();                                                                                                  // [0xa7827a8] Final|Native|Public|BlueprintCallable 
	// Function /Script/PilgrimCoreRuntime.PilgrimTrack.AddActorItemToScene
	// void AddActorItemToScene(class AActor* Item);                                                                         // [0x8f5427c] Native|Event|Public|BlueprintEvent 
};

/// Class /Script/PilgrimCoreRuntime.PilgrimTrackCaptureComponent
/// Size: 0x0010 (0x000AE0 - 0x000AF0)
class UPilgrimTrackCaptureComponent : public USceneCaptureComponent2D
{ 
public:
	class AActor*                                      ViewOwner;                                                  // 0x0AE0   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0AE8   (0x0008)  MISSED


	/// Functions
	// Function /Script/PilgrimCoreRuntime.PilgrimTrackCaptureComponent.SetViewOwnerActor
	// void SetViewOwnerActor(class AActor* InViewOwner);                                                                    // [0xa782c5c] Final|Native|Public|BlueprintCallable 
	// Function /Script/PilgrimCoreRuntime.PilgrimTrackCaptureComponent.IncludeActor
	// void IncludeActor(class AActor* TrackActor, bool bIncludeFromChildActors);                                            // [0xa782804] Final|Native|Public|BlueprintCallable 
	// Function /Script/PilgrimCoreRuntime.PilgrimTrackCaptureComponent.GetViewOwnerActor
	// class AActor* GetViewOwnerActor();                                                                                    // [0xa78264c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/PilgrimCoreRuntime.PilgrimTrackItemInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UPilgrimTrackItemInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/PilgrimCoreRuntime.PilgrimTrackItemInterface.OnGameEnded
	// void OnGameEnded();                                                                                                   // [0x18a39e4] Event|Public|BlueprintEvent 
};

/// Class /Script/PilgrimCoreRuntime.PilgrimTrackSustain
/// Size: 0x0058 (0x000290 - 0x0002E8)
class APilgrimTrackSustain : public AActor
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0290   (0x0008)  MISSED
	float                                              InputKeyStartOfSustain;                                     // 0x0298   (0x0004)  
	float                                              InputKeyEndOfSustain;                                       // 0x029C   (0x0004)  
	SDK_UNDEFINED(8,15280) /* TWeakObjectPtr<UPilgrimGame*> */ __um(ParentGamePtr);                                // 0x02A0   (0x0008)  
	SDK_UNDEFINED(8,15281) /* TWeakObjectPtr<APilgrimGemSmasher*> */ __um(ParentSmasherPtr);                       // 0x02A8   (0x0008)  
	unsigned char                                      UnknownData01_6[0x38];                                      // 0x02B0   (0x0038)  MISSED


	/// Functions
	// Function /Script/PilgrimCoreRuntime.PilgrimTrackSustain.UpdateSplineInputKeys
	// void UpdateSplineInputKeys(float NewKeyStart, float NewKeyEnd);                                                       // [0xa782d78] Final|Native|Public|BlueprintCallable 
	// Function /Script/PilgrimCoreRuntime.PilgrimTrackSustain.PlaceSustainAlongSpline
	// void PlaceSustainAlongSpline();                                                                                       // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/PilgrimCoreRuntime.PilgrimTrackSustain.OnSustainKeyRelease
	// void OnSustainKeyRelease();                                                                                           // [0x2f99b74] Native|Event|Public|BlueprintEvent 
	// Function /Script/PilgrimCoreRuntime.PilgrimTrackSustain.OnSustainKeyDownSuccess
	// void OnSustainKeyDownSuccess();                                                                                       // [0x21dc214] Native|Event|Public|BlueprintEvent 
	// Function /Script/PilgrimCoreRuntime.PilgrimTrackSustain.OnSustainInit
	// void OnSustainInit();                                                                                                 // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/PilgrimCoreRuntime.PilgrimTrackSustain.OnSustainFail
	// void OnSustainFail();                                                                                                 // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/PilgrimCoreRuntime.PilgrimTrackSustain.OnIsOverdriveChanged
	// void OnIsOverdriveChanged();                                                                                          // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/PilgrimCoreRuntime.PilgrimTrackSustain.OnAttachToSmasher
	// void OnAttachToSmasher(class APilgrimGemSmasher* Smasher);                                                            // [0xa782adc] Final|Native|Public|BlueprintCallable 
	// Function /Script/PilgrimCoreRuntime.PilgrimTrackSustain.IsInActiveOverdriveSection
	// bool IsInActiveOverdriveSection();                                                                                    // [0x945cf00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimTrackSustain.GetTrackItemInfo
	// FTrackItemInfo GetTrackItemInfo();                                                                                    // [0xa782618] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreRuntime.PilgrimTrackSustain.GetSplinePathIfRelevant
	// class USplineComponent* GetSplinePathIfRelevant();                                                                    // [0xa7825ec] Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/PilgrimCoreRuntime.PilgrimVerbProcessor_DeployOverdrive
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UPilgrimVerbProcessor_DeployOverdrive : public UPilgrimObjectiveProcessorBase
{ 
public:
};

/// Class /Script/PilgrimCoreRuntime.PilgrimWaitForEventRouterAction
/// Size: 0x0020 (0x000030 - 0x000050)
class UPilgrimWaitForEventRouterAction : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,15282) /* FMulticastInlineDelegate */ __um(OnEventRouterAvailable);                           // 0x0030   (0x0010)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0040   (0x0010)  MISSED


	/// Functions
	// Function /Script/PilgrimCoreRuntime.PilgrimWaitForEventRouterAction.PilgrimWaitForEventRouter
	// class UPilgrimWaitForEventRouterAction* PilgrimWaitForEventRouter(class AActor* ContextActor);                        // [0xa782bdc] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PilgrimCoreRuntime.PilgrimWaitForEventRouterAction.PilgrimEventRouterAvailableDelegate__DelegateSignature
	// void PilgrimEventRouterAvailableDelegate__DelegateSignature(class UGameplayEventRouterComponent* EventRouter);        // [0x18a39e4] MulticastDelegate|Public|Delegate 
	// Function /Script/PilgrimCoreRuntime.PilgrimWaitForEventRouterAction.HandleContextActorEndPlay
	// void HandleContextActorEndPlay(class AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason);                       // [0xa782664] Final|Native|Private 
};

/// Class /Script/PilgrimCoreRuntime.ServerPilgrimGame
/// Size: 0x0038 (0x000028 - 0x000060)
class UServerPilgrimGame : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	class UPilgrimGameEvaluator*                       GameEvaluator;                                              // 0x0028   (0x0008)  
	class UPilgrimScoringModel*                        ScoringModel;                                               // 0x0030   (0x0008)  
	class UPilgrimSongData*                            SongData;                                                   // 0x0038   (0x0008)  
	class UPilgrimSongMetadata*                        SongBeingPlayed;                                            // 0x0040   (0x0008)  
	SDK_UNDEFINED(8,15283) /* TWeakObjectPtr<AActor*> */ __um(ContextActor);                                       // 0x0048   (0x0008)  
	class UPilgrimGameConfig*                          PilgrimGameConfig;                                          // 0x0050   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0058   (0x0008)  MISSED


	/// Functions
	// Function /Script/PilgrimCoreRuntime.ServerPilgrimGame.GetScoringDensity
	// float GetScoringDensity();                                                                                            // [0x6987a9c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/PilgrimCoreRuntime.FortClientPilot_QuickSmokeSparks
/// Size: 0x0010 (0x000310 - 0x000320)
class UFortClientPilot_QuickSmokeSparks : public UFortClientPilot_GameplayBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0310   (0x0010)  MISSED
};

/// Class /Script/PilgrimCoreRuntime.PilgrimGameScoreInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UPilgrimGameScoreInterface : public UInterface
{ 
public:
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimTimedInput
/// Size: 0x000C (0x000000 - 0x00000C)
struct FPilgrimTimedInput
{ 
	EPilgrimTimedInputType                             InputType;                                                  // 0x0000   (0x0001)  
	bool                                               bIsPress;                                                   // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0002   (0x0002)  MISSED
	float                                              ExperiencedTick;                                            // 0x0004   (0x0004)  
	EPilgrimTrackLane                                  TrackLane;                                                  // 0x0008   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0009   (0x0003)  MISSED
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimLeaderboardRequestParams
/// Size: 0x0070 (0x000000 - 0x000070)
struct FPilgrimLeaderboardRequestParams
{ 
	FName                                              SongShortName;                                              // 0x0000   (0x0004)  
	EPilgrimLeaderboardType                            LeaderboardType;                                            // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0005   (0x0003)  MISSED
	FUniqueNetIdRepl                                   RequestingPlayerAccountId;                                  // 0x0008   (0x0030)  
	bool                                               bFriendsOnly;                                               // 0x0038   (0x0001)  
	bool                                               bCenteredOnRequestingPlayer;                                // 0x0039   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x003A   (0x0002)  MISSED
	int32_t                                            Page;                                                       // 0x003C   (0x0004)  
	int32_t                                            ControllerId;                                               // 0x0040   (0x0004)  
	bool                                               bIsSpotlightCompetition;                                    // 0x0044   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0045   (0x0003)  MISSED
	SDK_UNDEFINED(16,15284) /* FString */              __um(SpotlightGroup);                                       // 0x0048   (0x0010)  
	bool                                               bUseCache;                                                  // 0x0058   (0x0001)  
	unsigned char                                      UnknownData03_6[0x17];                                      // 0x0059   (0x0017)  MISSED
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimLeaderboardScoreData
/// Size: 0x0020 (0x000000 - 0x000020)
struct FPilgrimLeaderboardScoreData
{ 
	int32_t                                            Score;                                                      // 0x0000   (0x0004)  
	int32_t                                            StarsEarned;                                                // 0x0004   (0x0004)  
	float                                              Accuracy;                                                   // 0x0008   (0x0004)  
	bool                                               bFullCombo;                                                 // 0x000C   (0x0001)  
	EPilgrimSongDifficulty                             Difficulty;                                                 // 0x000D   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x000E   (0x0002)  MISSED
	TArray<EPilgrimTrackType>                          InstrumentsPlayed;                                          // 0x0010   (0x0010)  
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimLeaderboardEntryRpl
/// Size: 0x0030 (0x000000 - 0x000030)
struct FPilgrimLeaderboardEntryRpl
{ 
	int32_t                                            Rank;                                                       // 0x0000   (0x0004)  
	float                                              Percentile;                                                 // 0x0004   (0x0004)  
	FPilgrimLeaderboardScoreData                       ScoreData;                                                  // 0x0008   (0x0020)  
	FDateTime                                          DateTime;                                                   // 0x0028   (0x0008)  
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimLeaderboardEntry
/// Size: 0x0058 (0x000030 - 0x000088)
struct FPilgrimLeaderboardEntry : FPilgrimLeaderboardEntryRpl
{ 
	bool                                               bHasLocalPlayer;                                            // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0031   (0x0007)  MISSED
	SDK_UNDEFINED(80,15285) /* TMap<FString, FString> */ __um(PlayerAccountIdToDisplayNameMap);                    // 0x0038   (0x0050)  
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimLeaderboardPage
/// Size: 0x0038 (0x000000 - 0x000038)
struct FPilgrimLeaderboardPage
{ 
	FName                                              SongShortName;                                              // 0x0000   (0x0004)  
	EPilgrimLeaderboardType                            LeaderboardType;                                            // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0005   (0x0003)  MISSED
	int32_t                                            Page;                                                       // 0x0008   (0x0004)  
	int32_t                                            TotalPages;                                                 // 0x000C   (0x0004)  
	TArray<FPilgrimLeaderboardEntry>                   Entries;                                                    // 0x0010   (0x0010)  
	bool                                               bIsSpotlightCompetition;                                    // 0x0020   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0021   (0x0007)  MISSED
	SDK_UNDEFINED(16,15286) /* FString */              __um(SpotlightGroup);                                       // 0x0028   (0x0010)  
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimPersonalBestParams
/// Size: 0x0068 (0x000000 - 0x000068)
struct FPilgrimPersonalBestParams
{ 
	FUniqueNetIdRepl                                   PlayerAccountId;                                            // 0x0000   (0x0030)  
	FName                                              SongShortName;                                              // 0x0030   (0x0004)  
	EPilgrimTrackType                                  InstrumentType;                                             // 0x0034   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0035   (0x0003)  MISSED
	int32_t                                            ControllerId;                                               // 0x0038   (0x0004)  
	int32_t                                            BandSize;                                                   // 0x003C   (0x0004)  
	int32_t                                            SetlistIndex;                                               // 0x0040   (0x0004)  
	bool                                               bUseCache;                                                  // 0x0044   (0x0001)  
	bool                                               bIsSpotlightCompetition;                                    // 0x0045   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x0046   (0x0002)  MISSED
	SDK_UNDEFINED(16,15287) /* FString */              __um(SpotlightGroup);                                       // 0x0048   (0x0010)  
	unsigned char                                      UnknownData02_6[0x10];                                      // 0x0058   (0x0010)  MISSED
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimPersonalBestResult
/// Size: 0x0198 (0x000000 - 0x000198)
struct FPilgrimPersonalBestResult
{ 
	FPilgrimLeaderboardEntry                           BestSolo;                                                   // 0x0000   (0x0088)  
	FPilgrimLeaderboardEntry                           BestBand;                                                   // 0x0088   (0x0088)  
	FPilgrimLeaderboardEntry                           BestSpotlight;                                              // 0x0110   (0x0088)  
};

/// Struct /Script/PilgrimCoreRuntime.SongShortNameMatcher
/// Size: 0x0018 (0x000000 - 0x000018)
struct FSongShortNameMatcher
{ 
	TArray<FName>                                      SongShortNames;                                             // 0x0000   (0x0010)  
	ESongShortNameMatchType                            MatchType;                                                  // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimPlayerFeedParams
/// Size: 0x0098 (0x000000 - 0x000098)
struct FPilgrimPlayerFeedParams
{ 
	EPilgrimPlayerFeedSortType                         SortType;                                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	int32_t                                            ControllerId;                                               // 0x0004   (0x0004)  
	FGameplayTagQuery                                  SongQuery;                                                  // 0x0008   (0x0048)  
	FSongShortNameMatcher                              SongShortNameMatcher;                                       // 0x0050   (0x0018)  
	TArray<EPilgrimLeaderboardType>                    Leaderboards;                                               // 0x0068   (0x0010)  
	TArray<FUniqueNetIdRepl>                           FriendIds;                                                  // 0x0078   (0x0010)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x0088   (0x0010)  MISSED
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimPlayerFeedResultEntry
/// Size: 0x0038 (0x000000 - 0x000038)
struct FPilgrimPlayerFeedResultEntry
{ 
	SDK_UNDEFINED(16,15288) /* FString */              __um(FriendName);                                           // 0x0000   (0x0010)  
	FName                                              SongShortName;                                              // 0x0010   (0x0004)  
	EPilgrimLeaderboardType                            LeaderboardType;                                            // 0x0014   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0015   (0x0003)  MISSED
	TArray<EPilgrimTrackType>                          InstrumentsPlayed;                                          // 0x0018   (0x0010)  
	int32_t                                            PlayerHighscore;                                            // 0x0028   (0x0004)  
	int32_t                                            FriendHighscore;                                            // 0x002C   (0x0004)  
	FDateTime                                          FriendAchievedScoreDate;                                    // 0x0030   (0x0008)  
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimPlayerFeedSongSummary
/// Size: 0x0018 (0x000000 - 0x000018)
struct FPilgrimPlayerFeedSongSummary
{ 
	FName                                              SongShortName;                                              // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	TArray<int32_t>                                    EntryIndexes;                                               // 0x0008   (0x0010)  
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimPlayerFeedResult
/// Size: 0x0020 (0x000000 - 0x000020)
struct FPilgrimPlayerFeedResult
{ 
	TArray<FPilgrimPlayerFeedResultEntry>              Entries;                                                    // 0x0000   (0x0010)  
	TArray<FPilgrimPlayerFeedSongSummary>              SongSummary;                                                // 0x0010   (0x0010)  
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimCheatPerformanceArgument
/// Size: 0x000C (0x000000 - 0x00000C)
struct FPilgrimCheatPerformanceArgument
{ 
	unsigned char                                      UnknownData00_2[0xC];                                       // 0x0000   (0x000C)  MISSED
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimSongMeasurePosition
/// Size: 0x000C (0x000000 - 0x00000C)
struct FPilgrimSongMeasurePosition
{ 
	int32_t                                            Measure;                                                    // 0x0000   (0x0004)  
	int32_t                                            Beat;                                                       // 0x0004   (0x0004)  
	int32_t                                            Tick;                                                       // 0x0008   (0x0004)  
};

/// Struct /Script/PilgrimCoreRuntime.StarPercentageThresholds
/// Size: 0x0010 (0x000000 - 0x000010)
struct FStarPercentageThresholds
{ 
	TArray<float>                                      Thresholds;                                                 // 0x0000   (0x0010)  
};

/// Struct /Script/PilgrimCoreRuntime.PlayerHealthModifiers
/// Size: 0x000C (0x000000 - 0x00000C)
struct FPlayerHealthModifiers
{ 
	float                                              GemHit;                                                     // 0x0000   (0x0004)  
	float                                              GemMiss;                                                    // 0x0004   (0x0004)  
	float                                              GemPass;                                                    // 0x0008   (0x0004)  
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimGameInProgressSustain
/// Size: 0x0048 (0x000000 - 0x000048)
struct FPilgrimGameInProgressSustain
{ 
	unsigned char                                      UnknownData00_2[0x48];                                      // 0x0000   (0x0048)  MISSED
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimPlayerSessionHistory
/// Size: 0x0038 (0x000000 - 0x000038)
struct FPilgrimPlayerSessionHistory
{ 
	SDK_UNDEFINED(16,15289) /* FString */              __um(SessionId);                                            // 0x0000   (0x0010)  
	FDateTime                                          EndTime;                                                    // 0x0010   (0x0008)  
	FPilgrimLeaderboardScoreData                       TrackedStats;                                               // 0x0018   (0x0020)  
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimPlayerHistoryEvent
/// Size: 0x0080 (0x000000 - 0x000080)
struct FPilgrimPlayerHistoryEvent
{ 
	SDK_UNDEFINED(16,15290) /* FString */              __um(GameId);                                               // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,15291) /* FString */              __um(EventId);                                              // 0x0010   (0x0010)  
	SDK_UNDEFINED(16,15292) /* FString */              __um(EventWindowId);                                        // 0x0020   (0x0010)  
	SDK_UNDEFINED(16,15293) /* FString */              __um(TeamId);                                               // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,15294) /* TArray<FString> */      __um(TeamAccountIds);                                       // 0x0040   (0x0010)  
	int32_t                                            PointsEarned;                                               // 0x0050   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0054   (0x0004)  MISSED
	int64_t                                            Rank;                                                       // 0x0058   (0x0008)  
	double                                             Score;                                                      // 0x0060   (0x0008)  
	double                                             Percentile;                                                 // 0x0068   (0x0008)  
	TArray<FPilgrimPlayerSessionHistory>               SessionHistory;                                             // 0x0070   (0x0010)  
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimPlayerHistoryResult
/// Size: 0x0130 (0x000000 - 0x000130)
struct FPilgrimPlayerHistoryResult
{ 
	FUniqueNetIdRepl                                   PlayerAccountId;                                            // 0x0000   (0x0030)  
	TArray<FPilgrimPlayerHistoryEvent>                 Events;                                                     // 0x0030   (0x0010)  
	unsigned char                                      UnknownData00_6[0xF0];                                      // 0x0040   (0x00F0)  MISSED
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimPlayerHistoryParams
/// Size: 0x00A0 (0x000000 - 0x0000A0)
struct FPilgrimPlayerHistoryParams
{ 
	FUniqueNetIdRepl                                   PlayerAccountId;                                            // 0x0000   (0x0030)  
	FGameplayTagQuery                                  SongQuery;                                                  // 0x0030   (0x0048)  
	FSongShortNameMatcher                              SongShortNameMatcher;                                       // 0x0078   (0x0018)  
	EPilgrimTrackType                                  InstrumentType;                                             // 0x0090   (0x0001)  
	EPilgrimPlayerHistoryScoreParam                    ScoreParam;                                                 // 0x0091   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0092   (0x0002)  MISSED
	int32_t                                            ControllerId;                                               // 0x0094   (0x0004)  
	SDK_UNDEFINED(8,15295) /* TWeakObjectPtr<AFortPlayerController*> */ __um(RequestingPlayer);                    // 0x0098   (0x0008)  
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimSpotlightCompetition
/// Size: 0x0070 (0x000000 - 0x000070)
struct FPilgrimSpotlightCompetition
{ 
	SDK_UNDEFINED(16,15296) /* FString */              __um(SpotlightName);                                        // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,15297) /* FString */              __um(SpotlightGroup);                                       // 0x0010   (0x0010)  
	FDateTime                                          BeginTime;                                                  // 0x0020   (0x0008)  
	FDateTime                                          EndTime;                                                    // 0x0028   (0x0008)  
	SDK_UNDEFINED(16,15298) /* TArray<FString> */      __um(SongUIDs);                                             // 0x0030   (0x0010)  
	TArray<FName>                                      SongShortNames;                                             // 0x0040   (0x0010)  
	FGameplayTagContainer                              Constraints;                                                // 0x0050   (0x0020)  
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimSpotlightCompetitionParams
/// Size: 0x0068 (0x000000 - 0x000068)
struct FPilgrimSpotlightCompetitionParams
{ 
	FGameplayTagQuery                                  SongQuery;                                                  // 0x0000   (0x0048)  
	FSongShortNameMatcher                              SongShortNameMatcher;                                       // 0x0048   (0x0018)  
	EPilgrimTrackType                                  InstrumentType;                                             // 0x0060   (0x0001)  
	bool                                               bUseCache;                                                  // 0x0061   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x0062   (0x0006)  MISSED
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimGetSpotlightParams
/// Size: 0x0018 (0x000000 - 0x000018)
struct FPilgrimGetSpotlightParams
{ 
	FName                                              SongShortName;                                              // 0x0000   (0x0004)  
	EPilgrimTrackType                                  InstrumentType;                                             // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0005   (0x0003)  MISSED
	FDateTime                                          StartsBefore;                                               // 0x0008   (0x0008)  
	FDateTime                                          EndsAfter;                                                  // 0x0010   (0x0008)  
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimLaneInputMappingConfig
/// Size: 0x0030 (0x000000 - 0x000030)
struct FPilgrimLaneInputMappingConfig
{ 
	class UFortInputMappingContext*                    DefaultPCBeatmatchInputMappingContext;                      // 0x0000   (0x0008)  
	class UFortInputMappingContext*                    DefaultConsoleBeatmatchInputMappingContext;                 // 0x0008   (0x0008)  
	TArray<class UFortInputMappingContext*>            PCBeatmatchInputMappingContexts;                            // 0x0010   (0x0010)  
	TArray<class UFortInputMappingContext*>            ConsoleBeatmatchInputMappingContexts;                       // 0x0020   (0x0010)  
};

/// Struct /Script/PilgrimCoreRuntime.MinimalSongTimestampData
/// Size: 0x000C (0x000000 - 0x00000C)
struct FMinimalSongTimestampData
{ 
	float                                              ServerWorldTime;                                            // 0x0000   (0x0004)  
	float                                              SecondsIncludingCountIn;                                    // 0x0004   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0008   (0x0004)  MISSED
};

/// Struct /Script/PilgrimCoreRuntime.MusicClockCatchUpUpdated
/// Size: 0x0004 (0x000000 - 0x000004)
struct FMusicClockCatchUpUpdated
{ 
	float                                              DeltaTimestamp;                                             // 0x0000   (0x0004)  
};

/// Struct /Script/PilgrimCoreRuntime.MusicClockCatchUpEnded
/// Size: 0x0001 (0x000000 - 0x000001)
struct FMusicClockCatchUpEnded
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimAnalyticsEvent_ResultsReturn
/// Size: 0x0010 (0x000000 - 0x000010)
struct FPilgrimAnalyticsEvent_ResultsReturn
{ 
	class AFortPlayerController*                       PlayerController;                                           // 0x0000   (0x0008)  
	EPilgrimAnalyticsResultsReturn                     ResultsReturn;                                              // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0009   (0x0007)  MISSED
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimGameBandProgressDelta
/// Size: 0x0024 (0x000000 - 0x000024)
struct FPilgrimGameBandProgressDelta
{ 
	unsigned char                                      UnknownData00_2[0x24];                                      // 0x0000   (0x0024)  MISSED
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_BandState_SetlistVoteWinnerChanged
/// Size: 0x0010 (0x000000 - 0x000010)
struct FPilgrimEvent_BandState_SetlistVoteWinnerChanged
{ 
	class UPilgrimPremadeSetlist*                      NewVoteWinner;                                              // 0x0000   (0x0008)  
	class UPilgrimPremadeSetlist*                      PrevVoteWinner;                                             // 0x0008   (0x0008)  
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_BandState_OverdriveActiveChanged
/// Size: 0x0010 (0x000000 - 0x000010)
struct FPilgrimEvent_BandState_OverdriveActiveChanged
{ 
	bool                                               IsActive;                                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	class AFortPlayerPawn*                             ForPlayer;                                                  // 0x0008   (0x0008)  
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_BandState_OverdriveReadyChanged
/// Size: 0x0010 (0x000000 - 0x000010)
struct FPilgrimEvent_BandState_OverdriveReadyChanged
{ 
	bool                                               IsReady;                                                    // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	class AFortPlayerPawn*                             ForPlayer;                                                  // 0x0008   (0x0008)  
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_BandState_AllOverdriveActiveChanged
/// Size: 0x0001 (0x000000 - 0x000001)
struct FPilgrimEvent_BandState_AllOverdriveActiveChanged
{ 
	bool                                               bAllPlayersHaveActiveOverdrive;                             // 0x0000   (0x0001)  
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_BandState_AllOverdriveReadyChanged
/// Size: 0x0001 (0x000000 - 0x000001)
struct FPilgrimEvent_BandState_AllOverdriveReadyChanged
{ 
	bool                                               bAllPlayersHaveOverdriveReady;                              // 0x0000   (0x0001)  
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_BandState_AllMaxStreakChanged
/// Size: 0x0001 (0x000000 - 0x000001)
struct FPilgrimEvent_BandState_AllMaxStreakChanged
{ 
	bool                                               bAllPlayersHaveMaxStreak;                                   // 0x0000   (0x0001)  
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_BandState_ReadinessChanged
/// Size: 0x0001 (0x000000 - 0x000001)
struct FPilgrimEvent_BandState_ReadinessChanged
{ 
	bool                                               bAreAllPlayersReady;                                        // 0x0000   (0x0001)  
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_BandState_CustomSetlistChanged
/// Size: 0x0008 (0x000000 - 0x000008)
struct FPilgrimEvent_BandState_CustomSetlistChanged
{ 
	SDK_UNDEFINED(8,15299) /* TWeakObjectPtr<UPilgrimCustomSetlist*> */ __um(ChangedSetlist);                      // 0x0000   (0x0008)  
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimTrackTypesStateMembership
/// Size: 0x00A0 (0x000000 - 0x0000A0)
struct FPilgrimTrackTypesStateMembership
{ 
	SDK_UNDEFINED(80,15300) /* TSet<EPilgrimTrackType> */ __um(TrackTypesInState);                                 // 0x0000   (0x0050)  
	SDK_UNDEFINED(80,15301) /* TSet<EPilgrimTrackType> */ __um(TrackTypesNotInState);                              // 0x0050   (0x0050)  
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_BandState_OverdriveActiveTrackTypesChanged
/// Size: 0x00A0 (0x000000 - 0x0000A0)
struct FPilgrimEvent_BandState_OverdriveActiveTrackTypesChanged
{ 
	FPilgrimTrackTypesStateMembership                  Membership;                                                 // 0x0000   (0x00A0)  
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_BandState_OverdriveReadyTrackTypesChanged
/// Size: 0x00A0 (0x000000 - 0x0000A0)
struct FPilgrimEvent_BandState_OverdriveReadyTrackTypesChanged
{ 
	FPilgrimTrackTypesStateMembership                  Membership;                                                 // 0x0000   (0x00A0)  
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_BandState_BandHealthChanged
/// Size: 0x0010 (0x000000 - 0x000010)
struct FPilgrimEvent_BandState_BandHealthChanged
{ 
	float                                              LastBandHealth;                                             // 0x0000   (0x0004)  
	float                                              NewBandHealth;                                              // 0x0004   (0x0004)  
	int32_t                                            LastBandHealthTier;                                         // 0x0008   (0x0004)  
	int32_t                                            NewBandHealthTier;                                          // 0x000C   (0x0004)  
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimTimestampedTargetData
/// Size: 0x0010 (0x000008 - 0x000018)
struct FPilgrimTimestampedTargetData : FGameplayAbilityTargetData
{ 
	FMinimalSongTimestampData                          SongTimestamp;                                              // 0x0008   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimGuitarFretPressedState
/// Size: 0x0002 (0x000000 - 0x000002)
struct FPilgrimGuitarFretPressedState
{ 
	unsigned char                                      UnknownData00_2[0x2];                                       // 0x0000   (0x0002)  MISSED
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvaluatorGuitarState
/// Size: 0x0020 (0x000000 - 0x000020)
struct FPilgrimEvaluatorGuitarState
{ 
	unsigned char                                      UnknownData00_2[0x20];                                      // 0x0000   (0x0020)  MISSED
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvaluatorState
/// Size: 0x01A8 (0x000000 - 0x0001A8)
struct FPilgrimEvaluatorState
{ 
	unsigned char                                      UnknownData00_2[0x1A8];                                     // 0x0000   (0x01A8)  MISSED
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_PilgrimGame_PlayingSong
/// Size: 0x0008 (0x000000 - 0x000008)
struct FPilgrimEvent_PilgrimGame_PlayingSong
{ 
	class UPilgrimGame*                                PilgrimGame;                                                // 0x0000   (0x0008)  
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_PilgrimGame_SongStopped
/// Size: 0x0008 (0x000000 - 0x000008)
struct FPilgrimEvent_PilgrimGame_SongStopped
{ 
	class UPilgrimGame*                                PilgrimGame;                                                // 0x0000   (0x0008)  
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_PilgrimGame_TrackFadeEnded
/// Size: 0x0008 (0x000000 - 0x000008)
struct FPilgrimEvent_PilgrimGame_TrackFadeEnded
{ 
	class UPilgrimGame*                                PilgrimGame;                                                // 0x0000   (0x0008)  
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimDifficultyTrackTypePair
/// Size: 0x0002 (0x000000 - 0x000002)
struct FPilgrimDifficultyTrackTypePair
{ 
	EPilgrimSongDifficulty                             Difficulty;                                                 // 0x0000   (0x0001)  
	EPilgrimTrackType                                  TrackType;                                                  // 0x0001   (0x0001)  
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimGemDensityDataArray
/// Size: 0x0010 (0x000000 - 0x000010)
struct FPilgrimGemDensityDataArray
{ 
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0000   (0x0010)  MISSED
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimGemDensityData
/// Size: 0x0010 (0x000000 - 0x000010)
struct FPilgrimGemDensityData
{ 
	int32_t                                            SectionIndex;                                               // 0x0000   (0x0004)  
	int32_t                                            NumGems;                                                    // 0x0004   (0x0004)  
	FTimespan                                          SustainDurationTotal;                                       // 0x0008   (0x0008)  
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimGemBreaks
/// Size: 0x0010 (0x000000 - 0x000010)
struct FPilgrimGemBreaks
{ 
	TArray<FPilgrimGemBreak>                           Breaks;                                                     // 0x0000   (0x0010)  
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_GemBreak_Base
/// Size: 0x0048 (0x000000 - 0x000048)
struct FPilgrimEvent_GemBreak_Base
{ 
	FPilgrimGemBreak                                   Break;                                                      // 0x0000   (0x0024)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0024   (0x0004)  MISSED
	class UPilgrimGemBreakListener*                    Listener;                                                   // 0x0028   (0x0008)  
	class AActor*                                      ForActor;                                                   // 0x0030   (0x0008)  
	bool                                               bIsLocalPlayer;                                             // 0x0038   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0039   (0x0003)  MISSED
	float                                              CurrentSongMS;                                              // 0x003C   (0x0004)  
	float                                              CurrentSongBar;                                             // 0x0040   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0044   (0x0004)  MISSED
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_GemBreak_Started
/// Size: 0x0000 (0x000048 - 0x000048)
struct FPilgrimEvent_GemBreak_Started : FPilgrimEvent_GemBreak_Base
{ 
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_GemBreak_Ended
/// Size: 0x0000 (0x000048 - 0x000048)
struct FPilgrimEvent_GemBreak_Ended : FPilgrimEvent_GemBreak_Base
{ 
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_GemBreak_Pending
/// Size: 0x0000 (0x000048 - 0x000048)
struct FPilgrimEvent_GemBreak_Pending : FPilgrimEvent_GemBreak_Base
{ 
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimGemHitAccuracy
/// Size: 0x0030 (0x000000 - 0x000030)
struct FPilgrimGemHitAccuracy
{ 
	float                                              AccuracyMs;                                                 // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	FPilgrimAccuracyTier                               AccuracyTier;                                               // 0x0008   (0x0020)  
	int32_t                                            TierIndex;                                                  // 0x0028   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimInputKeyBinding
/// Size: 0x0020 (0x000000 - 0x000020)
struct FPilgrimInputKeyBinding
{ 
	FKey                                               KeyBinding;                                                 // 0x0000   (0x0018)  
	FName                                              InputAction;                                                // 0x0018   (0x0004)  
	bool                                               bSendToServer;                                              // 0x001C   (0x0001)  
	bool                                               bSendToClient;                                              // 0x001D   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x001E   (0x0002)  MISSED
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimInputPresetData
/// Size: 0x0030 (0x000008 - 0x000038)
struct FPilgrimInputPresetData : FTableRowBase
{ 
	SDK_UNDEFINED(24,15302) /* FText */                __um(PresetDescription);                                    // 0x0008   (0x0018)  
	TArray<FPilgrimInputKeyBinding>                    LaneBindings;                                               // 0x0020   (0x0010)  
	bool                                               bIsGameplayBinding;                                         // 0x0030   (0x0001)  
	bool                                               bIsMouseKeyboardBinding;                                    // 0x0031   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x0032   (0x0006)  MISSED
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimDefaultUnbindingData
/// Size: 0x0008 (0x000008 - 0x000010)
struct FPilgrimDefaultUnbindingData : FTableRowBase
{ 
	bool                                               bDoUnbindPressed;                                           // 0x0008   (0x0001)  
	bool                                               bDoUnbindReleased;                                          // 0x0009   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x000A   (0x0006)  MISSED
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimGemInputSettings
/// Size: 0x0008 (0x000000 - 0x000008)
struct FPilgrimGemInputSettings
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_ToggleDebugCalibrationWidget
/// Size: 0x0001 (0x000000 - 0x000001)
struct FPilgrimEvent_ToggleDebugCalibrationWidget
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_TrackLayoutPresetChanged
/// Size: 0x0010 (0x000000 - 0x000010)
struct FPilgrimEvent_TrackLayoutPresetChanged
{ 
	SDK_UNDEFINED(16,15303) /* FString */              __um(PresetName);                                           // 0x0000   (0x0010)  
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_KeybindPresetChanged
/// Size: 0x0018 (0x000000 - 0x000018)
struct FPilgrimEvent_KeybindPresetChanged
{ 
	SDK_UNDEFINED(16,15304) /* FString */              __um(Name);                                                 // 0x0000   (0x0010)  
	class UInputMappingContext*                        InputMappingContext;                                        // 0x0010   (0x0008)  
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_KeybindPresetActivated
/// Size: 0x0010 (0x000000 - 0x000010)
struct FPilgrimEvent_KeybindPresetActivated
{ 
	class UInputMappingContext*                        InputMappingContextGamepad;                                 // 0x0000   (0x0008)  
	class UInputMappingContext*                        InputMappingContextKeyboard;                                // 0x0008   (0x0008)  
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_CameraPresetChanged
/// Size: 0x0010 (0x000000 - 0x000010)
struct FPilgrimEvent_CameraPresetChanged
{ 
	SDK_UNDEFINED(16,15305) /* FString */              __um(Name);                                                 // 0x0000   (0x0010)  
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_InputReceived
/// Size: 0x0010 (0x000000 - 0x000010)
struct FPilgrimEvent_InputReceived
{ 
	SDK_UNDEFINED(8,15306) /* TWeakObjectPtr<AFortPlayerControllerGameplay*> */ __um(UserController);              // 0x0000   (0x0008)  
	FName                                              InputAction;                                                // 0x0008   (0x0004)  
	bool                                               bPressEvent;                                                // 0x000C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x000D   (0x0003)  MISSED
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_InputOffsetCalculated
/// Size: 0x003C (0x000000 - 0x00003C)
struct FPilgrimEvent_InputOffsetCalculated
{ 
	EPilgrimTrackLane                                  Lane;                                                       // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              Offset;                                                     // 0x0004   (0x0004)  
	int32_t                                            TrackerGemIndex;                                            // 0x0008   (0x0004)  
	FTrackItemInfo                                     GemInfo;                                                    // 0x000C   (0x0030)  
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimPlayerHistoryCacheEntry
/// Size: 0x01E8 (0x000000 - 0x0001E8)
struct FPilgrimPlayerHistoryCacheEntry
{ 
	unsigned char                                      UnknownData00_2[0x1E8];                                     // 0x0000   (0x01E8)  MISSED
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEventCacheDownload
/// Size: 0x0240 (0x000000 - 0x000240)
struct FPilgrimEventCacheDownload
{ 
	unsigned char                                      UnknownData00_2[0x240];                                     // 0x0000   (0x0240)  MISSED
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimSpotlightChallengeCache
/// Size: 0x0108 (0x000000 - 0x000108)
struct FPilgrimSpotlightChallengeCache
{ 
	unsigned char                                      UnknownData00_2[0x108];                                     // 0x0000   (0x0108)  MISSED
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimLeaderboardPageCache
/// Size: 0x0048 (0x000000 - 0x000048)
struct FPilgrimLeaderboardPageCache
{ 
	unsigned char                                      UnknownData00_2[0x48];                                      // 0x0000   (0x0048)  MISSED
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimLeaderboardCache
/// Size: 0x0060 (0x000000 - 0x000060)
struct FPilgrimLeaderboardCache
{ 
	unsigned char                                      UnknownData00_2[0x60];                                      // 0x0000   (0x0060)  MISSED
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimPersonalBestResultRpl
/// Size: 0x0090 (0x000000 - 0x000090)
struct FPilgrimPersonalBestResultRpl
{ 
	FPilgrimLeaderboardEntryRpl                        BestSolo;                                                   // 0x0000   (0x0030)  
	FPilgrimLeaderboardEntryRpl                        BestBand;                                                   // 0x0030   (0x0030)  
	FPilgrimLeaderboardEntryRpl                        BestSpotlight;                                              // 0x0060   (0x0030)  
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimPersonalBestHistoryRpl
/// Size: 0x0128 (0x000000 - 0x000128)
struct FPilgrimPersonalBestHistoryRpl
{ 
	bool                                               bSoloReachedNewHighscore;                                   // 0x0000   (0x0001)  
	bool                                               bBandReachedNewHighscore;                                   // 0x0001   (0x0001)  
	bool                                               bSpotlightReachedNewHighscore;                              // 0x0002   (0x0001)  
	unsigned char                                      UnknownData00_5[0x5];                                       // 0x0003   (0x0005)  MISSED
	FPilgrimPersonalBestResultRpl                      LoadedScore;                                                // 0x0008   (0x0090)  
	FPilgrimPersonalBestResultRpl                      NewScore;                                                   // 0x0098   (0x0090)  
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimPlayerHistoryCacheParams
/// Size: 0x0060 (0x000000 - 0x000060)
struct FPilgrimPlayerHistoryCacheParams
{ 
	FUniqueNetIdRepl                                   PlayerAccountId;                                            // 0x0000   (0x0030)  
	SDK_UNDEFINED(16,15307) /* FString */              __um(GameId);                                               // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,15308) /* FString */              __um(EventId);                                              // 0x0040   (0x0010)  
	SDK_UNDEFINED(16,15309) /* FString */              __um(EventWindowId);                                        // 0x0050   (0x0010)  
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimLeaderboardIdParams
/// Size: 0x0018 (0x000000 - 0x000018)
struct FPilgrimLeaderboardIdParams
{ 
	FName                                              SongShortName;                                              // 0x0000   (0x0004)  
	EPilgrimLeaderboardType                            LeaderboardType;                                            // 0x0004   (0x0001)  
	bool                                               bIsSpotlightCompetition;                                    // 0x0005   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0006   (0x0002)  MISSED
	SDK_UNDEFINED(16,15310) /* FString */              __um(SpotlightGroup);                                       // 0x0008   (0x0010)  
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_Midi_Base
/// Size: 0x0014 (0x000000 - 0x000014)
struct FPilgrimEvent_Midi_Base
{ 
	EPilgrimTrackType                                  TrackType;                                                  // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	int32_t                                            AtMidiTick;                                                 // 0x0004   (0x0004)  
	int32_t                                            EndsAtMidiTick;                                             // 0x0008   (0x0004)  
	SDK_UNDEFINED(8,15311) /* TWeakObjectPtr<UPilgrimGame*> */ __um(PilgrimGameContext);                           // 0x000C   (0x0008)  
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_Midi_NoteBase
/// Size: 0x0004 (0x000014 - 0x000018)
struct FPilgrimEvent_Midi_NoteBase : FPilgrimEvent_Midi_Base
{ 
	int32_t                                            EventNote;                                                  // 0x0014   (0x0004)  
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_Midi_NoteGuitar
/// Size: 0x0000 (0x000018 - 0x000018)
struct FPilgrimEvent_Midi_NoteGuitar : FPilgrimEvent_Midi_NoteBase
{ 
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_Midi_NoteGuitar_Start
/// Size: 0x0000 (0x000018 - 0x000018)
struct FPilgrimEvent_Midi_NoteGuitar_Start : FPilgrimEvent_Midi_NoteGuitar
{ 
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_Midi_NoteGuitar_End
/// Size: 0x0000 (0x000018 - 0x000018)
struct FPilgrimEvent_Midi_NoteGuitar_End : FPilgrimEvent_Midi_NoteGuitar
{ 
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_Midi_NoteBass
/// Size: 0x0000 (0x000018 - 0x000018)
struct FPilgrimEvent_Midi_NoteBass : FPilgrimEvent_Midi_NoteBase
{ 
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_Midi_NoteBass_Start
/// Size: 0x0000 (0x000018 - 0x000018)
struct FPilgrimEvent_Midi_NoteBass_Start : FPilgrimEvent_Midi_NoteBass
{ 
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_Midi_NoteBass_End
/// Size: 0x0000 (0x000018 - 0x000018)
struct FPilgrimEvent_Midi_NoteBass_End : FPilgrimEvent_Midi_NoteBass
{ 
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_Midi_NoteVocals
/// Size: 0x0000 (0x000018 - 0x000018)
struct FPilgrimEvent_Midi_NoteVocals : FPilgrimEvent_Midi_NoteBase
{ 
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_Midi_NoteVocals_Start
/// Size: 0x0000 (0x000018 - 0x000018)
struct FPilgrimEvent_Midi_NoteVocals_Start : FPilgrimEvent_Midi_NoteVocals
{ 
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_Midi_NoteVocals_End
/// Size: 0x0000 (0x000018 - 0x000018)
struct FPilgrimEvent_Midi_NoteVocals_End : FPilgrimEvent_Midi_NoteVocals
{ 
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_Midi_NoteDrum
/// Size: 0x0000 (0x000018 - 0x000018)
struct FPilgrimEvent_Midi_NoteDrum : FPilgrimEvent_Midi_NoteBase
{ 
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_Midi_NoteDrum_Start
/// Size: 0x0000 (0x000018 - 0x000018)
struct FPilgrimEvent_Midi_NoteDrum_Start : FPilgrimEvent_Midi_NoteDrum
{ 
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_Midi_NoteDrum_End
/// Size: 0x0000 (0x000018 - 0x000018)
struct FPilgrimEvent_Midi_NoteDrum_End : FPilgrimEvent_Midi_NoteDrum
{ 
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_Midi_NoteEvents
/// Size: 0x0000 (0x000018 - 0x000018)
struct FPilgrimEvent_Midi_NoteEvents : FPilgrimEvent_Midi_NoteBase
{ 
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_Midi_NoteEvents_Start
/// Size: 0x0000 (0x000018 - 0x000018)
struct FPilgrimEvent_Midi_NoteEvents_Start : FPilgrimEvent_Midi_NoteEvents
{ 
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_Midi_NoteEvents_End
/// Size: 0x0000 (0x000018 - 0x000018)
struct FPilgrimEvent_Midi_NoteEvents_End : FPilgrimEvent_Midi_NoteEvents
{ 
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_Midi_TextBase
/// Size: 0x0024 (0x000014 - 0x000038)
struct FPilgrimEvent_Midi_TextBase : FPilgrimEvent_Midi_Base
{ 
	unsigned char                                      UnknownData00_3[0x4];                                       // 0x0014   (0x0004)  MISSED
	SDK_UNDEFINED(16,15312) /* FString */              __um(EventString);                                          // 0x0018   (0x0010)  
	SDK_UNDEFINED(16,15313) /* TArray<FString> */      __um(EventPayload);                                         // 0x0028   (0x0010)  
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_Midi_TextGuitar
/// Size: 0x0000 (0x000038 - 0x000038)
struct FPilgrimEvent_Midi_TextGuitar : FPilgrimEvent_Midi_TextBase
{ 
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_Midi_TextGuitar_Start
/// Size: 0x0000 (0x000038 - 0x000038)
struct FPilgrimEvent_Midi_TextGuitar_Start : FPilgrimEvent_Midi_TextGuitar
{ 
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_Midi_TextBass
/// Size: 0x0000 (0x000038 - 0x000038)
struct FPilgrimEvent_Midi_TextBass : FPilgrimEvent_Midi_TextBase
{ 
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_Midi_TextBass_Start
/// Size: 0x0000 (0x000038 - 0x000038)
struct FPilgrimEvent_Midi_TextBass_Start : FPilgrimEvent_Midi_TextBass
{ 
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_Midi_TextVocals
/// Size: 0x0000 (0x000038 - 0x000038)
struct FPilgrimEvent_Midi_TextVocals : FPilgrimEvent_Midi_TextBase
{ 
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_Midi_TextVocals_Start
/// Size: 0x0000 (0x000038 - 0x000038)
struct FPilgrimEvent_Midi_TextVocals_Start : FPilgrimEvent_Midi_TextVocals
{ 
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_Midi_TextDrum
/// Size: 0x0000 (0x000038 - 0x000038)
struct FPilgrimEvent_Midi_TextDrum : FPilgrimEvent_Midi_TextBase
{ 
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_Midi_TextDrum_Start
/// Size: 0x0000 (0x000038 - 0x000038)
struct FPilgrimEvent_Midi_TextDrum_Start : FPilgrimEvent_Midi_TextDrum
{ 
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_Midi_TextEvents
/// Size: 0x0000 (0x000038 - 0x000038)
struct FPilgrimEvent_Midi_TextEvents : FPilgrimEvent_Midi_TextBase
{ 
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_Midi_TextEvents_Start
/// Size: 0x0000 (0x000038 - 0x000038)
struct FPilgrimEvent_Midi_TextEvents_Start : FPilgrimEvent_Midi_TextEvents
{ 
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_Midi_StrikeBase
/// Size: 0x0004 (0x000014 - 0x000018)
struct FPilgrimEvent_Midi_StrikeBase : FPilgrimEvent_Midi_Base
{ 
	bool                                               bIsChord;                                                   // 0x0014   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0015   (0x0003)  MISSED
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_Midi_StrikeGuitar
/// Size: 0x0000 (0x000018 - 0x000018)
struct FPilgrimEvent_Midi_StrikeGuitar : FPilgrimEvent_Midi_StrikeBase
{ 
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_Midi_StrikeGuitar_Start
/// Size: 0x0000 (0x000018 - 0x000018)
struct FPilgrimEvent_Midi_StrikeGuitar_Start : FPilgrimEvent_Midi_StrikeGuitar
{ 
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_Midi_StrikeGuitar_End
/// Size: 0x0000 (0x000018 - 0x000018)
struct FPilgrimEvent_Midi_StrikeGuitar_End : FPilgrimEvent_Midi_StrikeGuitar
{ 
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_Midi_StrikeBass
/// Size: 0x0000 (0x000018 - 0x000018)
struct FPilgrimEvent_Midi_StrikeBass : FPilgrimEvent_Midi_StrikeBase
{ 
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_Midi_StrikeBass_Start
/// Size: 0x0000 (0x000018 - 0x000018)
struct FPilgrimEvent_Midi_StrikeBass_Start : FPilgrimEvent_Midi_StrikeBass
{ 
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_Midi_StrikeBass_End
/// Size: 0x0000 (0x000018 - 0x000018)
struct FPilgrimEvent_Midi_StrikeBass_End : FPilgrimEvent_Midi_StrikeBass
{ 
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_Midi_StrikeVocals
/// Size: 0x0000 (0x000018 - 0x000018)
struct FPilgrimEvent_Midi_StrikeVocals : FPilgrimEvent_Midi_StrikeBase
{ 
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_Midi_StrikeVocals_Start
/// Size: 0x0000 (0x000018 - 0x000018)
struct FPilgrimEvent_Midi_StrikeVocals_Start : FPilgrimEvent_Midi_StrikeVocals
{ 
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_Midi_StrikeVocals_End
/// Size: 0x0000 (0x000018 - 0x000018)
struct FPilgrimEvent_Midi_StrikeVocals_End : FPilgrimEvent_Midi_StrikeVocals
{ 
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_Midi_StrikeDrum
/// Size: 0x0000 (0x000018 - 0x000018)
struct FPilgrimEvent_Midi_StrikeDrum : FPilgrimEvent_Midi_StrikeBase
{ 
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_Midi_StrikeDrum_Start
/// Size: 0x0000 (0x000018 - 0x000018)
struct FPilgrimEvent_Midi_StrikeDrum_Start : FPilgrimEvent_Midi_StrikeDrum
{ 
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_Midi_StrikeDrum_End
/// Size: 0x0000 (0x000018 - 0x000018)
struct FPilgrimEvent_Midi_StrikeDrum_End : FPilgrimEvent_Midi_StrikeDrum
{ 
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_Midi_StrikeEvents
/// Size: 0x0000 (0x000018 - 0x000018)
struct FPilgrimEvent_Midi_StrikeEvents : FPilgrimEvent_Midi_StrikeBase
{ 
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_Midi_StrikeEvents_Start
/// Size: 0x0000 (0x000018 - 0x000018)
struct FPilgrimEvent_Midi_StrikeEvents_Start : FPilgrimEvent_Midi_StrikeEvents
{ 
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_Midi_StrikeEvents_End
/// Size: 0x0000 (0x000018 - 0x000018)
struct FPilgrimEvent_Midi_StrikeEvents_End : FPilgrimEvent_Midi_StrikeEvents
{ 
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_Midi_NotifyBeginOutro
/// Size: 0x0001 (0x000000 - 0x000001)
struct FPilgrimEvent_Midi_NotifyBeginOutro
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/PilgrimCoreRuntime.DifficultyInfo
/// Size: 0x0010 (0x000000 - 0x000010)
struct FDifficultyInfo
{ 
	TArray<FTrackItemInfo>                             GemsInProgress;                                             // 0x0000   (0x0010)  
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_MBI_EventBase
/// Size: 0x0008 (0x000000 - 0x000008)
struct FPilgrimEvent_MBI_EventBase
{ 
	SDK_UNDEFINED(8,15314) /* TWeakObjectPtr<APilgrimMusicBattleInstance*> */ __um(MusicBattleInstance);           // 0x0000   (0x0008)  
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_MBI_Started
/// Size: 0x0000 (0x000008 - 0x000008)
struct FPilgrimEvent_MBI_Started : FPilgrimEvent_MBI_EventBase
{ 
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_MBI_Finished
/// Size: 0x0000 (0x000008 - 0x000008)
struct FPilgrimEvent_MBI_Finished : FPilgrimEvent_MBI_EventBase
{ 
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_MBI_ServerDecidedSongToPlay
/// Size: 0x0008 (0x000008 - 0x000010)
struct FPilgrimEvent_MBI_ServerDecidedSongToPlay : FPilgrimEvent_MBI_EventBase
{ 
	class UPilgrimSongMetadata*                        SongToPlay;                                                 // 0x0008   (0x0008)  
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_MBI_ServerInitializedScoring
/// Size: 0x0000 (0x000008 - 0x000008)
struct FPilgrimEvent_MBI_ServerInitializedScoring : FPilgrimEvent_MBI_EventBase
{ 
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_MBI_ClientGotSongToPlay
/// Size: 0x0008 (0x000008 - 0x000010)
struct FPilgrimEvent_MBI_ClientGotSongToPlay : FPilgrimEvent_MBI_EventBase
{ 
	class UPilgrimSongMetadata*                        SongToPlay;                                                 // 0x0008   (0x0008)  
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_MBI_ClientUpdateLipSyncData
/// Size: 0x0008 (0x000000 - 0x000008)
struct FPilgrimEvent_MBI_ClientUpdateLipSyncData
{ 
	class UAnimSequence*                               AnimSequence;                                               // 0x0000   (0x0008)  
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_MBI_CVarEnableTraversalChanged
/// Size: 0x0001 (0x000000 - 0x000001)
struct FPilgrimEvent_MBI_CVarEnableTraversalChanged
{ 
	bool                                               EnabledTraversal;                                           // 0x0000   (0x0001)  
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_MBI_SongLoaded
/// Size: 0x0010 (0x000008 - 0x000018)
struct FPilgrimEvent_MBI_SongLoaded : FPilgrimEvent_MBI_EventBase
{ 
	class UPilgrimSongMetadata*                        LoadedSong;                                                 // 0x0008   (0x0008)  
	EPilgrimSongPlayMethod                             PlayMethod;                                                 // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimGameInProgressOverdrive
/// Size: 0x0010 (0x000000 - 0x000010)
struct FPilgrimGameInProgressOverdrive
{ 
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0000   (0x0010)  MISSED
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimRewindDetails
/// Size: 0x000C (0x000000 - 0x00000C)
struct FPilgrimRewindDetails
{ 
	unsigned char                                      UnknownData00_2[0xC];                                       // 0x0000   (0x000C)  MISSED
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimGamePlayerProgressDelta
/// Size: 0x0054 (0x000000 - 0x000054)
struct FPilgrimGamePlayerProgressDelta
{ 
	unsigned char                                      UnknownData00_2[0x54];                                      // 0x0000   (0x0054)  MISSED
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimObjectiveFilterBase
/// Size: 0x0108 (0x0000A0 - 0x0001A8)
struct FPilgrimObjectiveFilterBase : FObjectiveFilter
{ 
	FObjectiveSubjectTags                              SongID;                                                     // 0x00A0   (0x0048)  
	FObjectiveSubjectTags                              InstrumentId;                                               // 0x00E8   (0x0048)  
	FObjectiveSubjectTags                              BandInstrumentIds;                                          // 0x0130   (0x0048)  
	FSongShortNameMatcher                              SongShortName;                                              // 0x0178   (0x0018)  
	FInt32Range                                        RequiredBandMembers;                                        // 0x0190   (0x0010)  
	EPilgrimSongDifficulty                             RequiredDifficulty;                                         // 0x01A0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x01A1   (0x0007)  MISSED
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimObjectiveFilter_AccumulateStars
/// Size: 0x0008 (0x0001A8 - 0x0001B0)
struct FPilgrimObjectiveFilter_AccumulateStars : FPilgrimObjectiveFilterBase
{ 
	EPilgrimAccumulateStarsMessageType                 VerbType;                                                   // 0x01A8   (0x0001)  
	char                                               StarType;                                                   // 0x01A9   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x01AA   (0x0006)  MISSED
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimObjectiveFilter_Note
/// Size: 0x0030 (0x0001A8 - 0x0001D8)
struct FPilgrimObjectiveFilter_Note : FPilgrimObjectiveFilterBase
{ 
	bool                                               DidHit;                                                     // 0x01A8   (0x0001)  
	bool                                               DidPass;                                                    // 0x01A9   (0x0001)  
	bool                                               DidMiss;                                                    // 0x01AA   (0x0001)  
	bool                                               IsChord;                                                    // 0x01AB   (0x0001)  
	FInt32Range                                        RequiredStreak;                                             // 0x01AC   (0x0010)  
	FInt32Range                                        RequiredMultiplier;                                         // 0x01BC   (0x0010)  
	EPilgrimNoteEventMessageIncrementType              IncrementType;                                              // 0x01CC   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x01CD   (0x0003)  MISSED
	int32_t                                            IncrementValue;                                             // 0x01D0   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x01D4   (0x0004)  MISSED
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimObjectiveFilter_ScoreEvent
/// Size: 0x0090 (0x0001A8 - 0x000238)
struct FPilgrimObjectiveFilter_ScoreEvent : FPilgrimObjectiveFilterBase
{ 
	FInt32Range                                        RequiredScore;                                              // 0x01A8   (0x0010)  
	FInt32Range                                        RequiredStars;                                              // 0x01B8   (0x0010)  
	FInt32Range                                        RequiredCurrentScore;                                       // 0x01C8   (0x0010)  
	FInt32Range                                        RequiredCurrentStars;                                       // 0x01D8   (0x0010)  
	FInt32Range                                        RequiredCurrentSustainScore;                                // 0x01E8   (0x0010)  
	FInt32Range                                        RequiredDeltaSustainScore;                                  // 0x01F8   (0x0010)  
	FInt32Range                                        RequiredCurrentChordScore;                                  // 0x0208   (0x0010)  
	FInt32Range                                        RequiredDeltaChordScore;                                    // 0x0218   (0x0010)  
	bool                                               RequireSustain;                                             // 0x0228   (0x0001)  
	bool                                               RequireChord;                                               // 0x0229   (0x0001)  
	bool                                               RequireOverdrive;                                           // 0x022A   (0x0001)  
	EPilgrimScoreEventMessageType                      ScoreType;                                                  // 0x022B   (0x0001)  
	EPilgrimScoreEventMessageIncrementType             IncrementType;                                              // 0x022C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x022D   (0x0003)  MISSED
	int32_t                                            IncrementValue;                                             // 0x0230   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0234   (0x0004)  MISSED
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimObjectiveFilter_SetlistComplete
/// Size: 0x0050 (0x0001A8 - 0x0001F8)
struct FPilgrimObjectiveFilter_SetlistComplete : FPilgrimObjectiveFilterBase
{ 
	FFloatRange                                        RequiredSoloScore;                                          // 0x01A8   (0x0010)  
	FInt32Range                                        RequiredSoloStars;                                          // 0x01B8   (0x0010)  
	FFloatRange                                        RequiredBandScore;                                          // 0x01C8   (0x0010)  
	FInt32Range                                        RequiredBandStars;                                          // 0x01D8   (0x0010)  
	FInt32Range                                        RequiredNumSongs;                                           // 0x01E8   (0x0010)  
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimObjectiveFilter_SongCompleted
/// Size: 0x0080 (0x0001A8 - 0x000228)
struct FPilgrimObjectiveFilter_SongCompleted : FPilgrimObjectiveFilterBase
{ 
	FFloatRange                                        RequiredSoloScore;                                          // 0x01A8   (0x0010)  
	FInt32Range                                        RequiredSoloStars;                                          // 0x01B8   (0x0010)  
	bool                                               bRequiredGoldSoloStars;                                     // 0x01C8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x01C9   (0x0003)  MISSED
	FFloatRange                                        RequiredBandScore;                                          // 0x01CC   (0x0010)  
	FInt32Range                                        RequiredBandStars;                                          // 0x01DC   (0x0010)  
	bool                                               bRequiredGoldBandStars;                                     // 0x01EC   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x01ED   (0x0003)  MISSED
	FFloatRange                                        RequiredNoteAccuracy;                                       // 0x01F0   (0x0010)  
	EComboType                                         RequiredComboType;                                          // 0x0200   (0x0001)  
	bool                                               bUseRequiredComboType;                                      // 0x0201   (0x0001)  
	unsigned char                                      UnknownData02_5[0x2];                                       // 0x0202   (0x0002)  MISSED
	FFloatRange                                        RequiredOverdriveTime;                                      // 0x0204   (0x0010)  
	FFloatRange                                        RequiredPercentPerfect;                                     // 0x0214   (0x0010)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x0224   (0x0004)  MISSED
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimObjectiveFilter_SongStarted
/// Size: 0x0000 (0x0001A8 - 0x0001A8)
struct FPilgrimObjectiveFilter_SongStarted : FPilgrimObjectiveFilterBase
{ 
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimPerformanceTrackerTriggerData
/// Size: 0x001C (0x000000 - 0x00001C)
struct FPilgrimPerformanceTrackerTriggerData
{ 
	unsigned char                                      UnknownData00_2[0x1C];                                      // 0x0000   (0x001C)  MISSED
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimPerformanceTrackerSampleData
/// Size: 0x0018 (0x000000 - 0x000018)
struct FPilgrimPerformanceTrackerSampleData
{ 
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x0000   (0x0018)  MISSED
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimPerformanceTrackerData
/// Size: 0x0120 (0x000000 - 0x000120)
struct FPilgrimPerformanceTrackerData
{ 
	unsigned char                                      UnknownData00_2[0x120];                                     // 0x0000   (0x0120)  MISSED
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimDuelInfo
/// Size: 0x0040 (0x000000 - 0x000040)
struct FPilgrimDuelInfo
{ 
	FGameplayTag                                       EventMessage;                                               // 0x0000   (0x0004)  
	SDK_UNDEFINED(8,15315) /* TWeakObjectPtr<AFortPlayerPawn*> */ __um(Pawn);                                      // 0x0004   (0x0008)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	FVector                                            OriginalLocation;                                           // 0x0010   (0x0018)  
	FRotator                                           OriginalRotation;                                           // 0x0028   (0x0018)  
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEventMessageData
/// Size: 0x0088 (0x000000 - 0x000088)
struct FPilgrimEventMessageData
{ 
	FGameplayTag                                       EventMessage;                                               // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	FPilgrimDuelInfo                                   Challenger;                                                 // 0x0008   (0x0040)  
	FPilgrimDuelInfo                                   Challenged;                                                 // 0x0048   (0x0040)  
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimPresetIndices
/// Size: 0x0008 (0x000000 - 0x000008)
struct FPilgrimPresetIndices
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_PlayerState_DifficultyChanged
/// Size: 0x0010 (0x000000 - 0x000010)
struct FPilgrimEvent_PlayerState_DifficultyChanged
{ 
	class AFortPlayerPawn*                             ForPlayer;                                                  // 0x0000   (0x0008)  
	EPilgrimSongDifficulty                             NewSongDifficulty;                                          // 0x0008   (0x0001)  
	EPilgrimSongDifficulty                             PrevSongDifficulty;                                         // 0x0009   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x000A   (0x0006)  MISSED
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_PlayerState_InstrumentChanged
/// Size: 0x0010 (0x000000 - 0x000010)
struct FPilgrimEvent_PlayerState_InstrumentChanged
{ 
	class AFortPlayerPawn*                             ForPlayer;                                                  // 0x0000   (0x0008)  
	EPilgrimTrackType                                  NewInstrumentChoice;                                        // 0x0008   (0x0001)  
	EPilgrimTrackType                                  PrevInstrumentChoice;                                       // 0x0009   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x000A   (0x0006)  MISSED
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_PlayerState_SongVoteChanged
/// Size: 0x0018 (0x000000 - 0x000018)
struct FPilgrimEvent_PlayerState_SongVoteChanged
{ 
	class AFortPlayerPawn*                             ForPlayer;                                                  // 0x0000   (0x0008)  
	class UPilgrimSongMetadata*                        NewSongVote;                                                // 0x0008   (0x0008)  
	class UPilgrimSongMetadata*                        PrevSongVote;                                               // 0x0010   (0x0008)  
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_PlayerState_SetlistVoteChanged
/// Size: 0x0018 (0x000000 - 0x000018)
struct FPilgrimEvent_PlayerState_SetlistVoteChanged
{ 
	class AFortPlayerPawn*                             ForPlayer;                                                  // 0x0000   (0x0008)  
	class UPilgrimPremadeSetlist*                      NewSetlistVote;                                             // 0x0008   (0x0008)  
	class UPilgrimPremadeSetlist*                      PrevSetlistVote;                                            // 0x0010   (0x0008)  
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_PlayerState_ReadinessChanged
/// Size: 0x0010 (0x000000 - 0x000010)
struct FPilgrimEvent_PlayerState_ReadinessChanged
{ 
	class AFortPlayerPawn*                             ForPlayer;                                                  // 0x0000   (0x0008)  
	bool                                               bIsReady;                                                   // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0009   (0x0007)  MISSED
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_PlayerState_HighscoreChanged
/// Size: 0x0128 (0x000000 - 0x000128)
struct FPilgrimEvent_PlayerState_HighscoreChanged
{ 
	class AFortPlayerPawn*                             ForPlayer;                                                  // 0x0000   (0x0008)  
	FPilgrimPersonalBestResultRpl                      NewHighscore;                                               // 0x0008   (0x0090)  
	FPilgrimPersonalBestResultRpl                      PrevHighscore;                                              // 0x0098   (0x0090)  
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_PlayerState_NewHighscore
/// Size: 0x0010 (0x000000 - 0x000010)
struct FPilgrimEvent_PlayerState_NewHighscore
{ 
	class AFortPlayerPawn*                             ForPlayer;                                                  // 0x0000   (0x0008)  
	int32_t                                            Score;                                                      // 0x0008   (0x0004)  
	EPilgrimPersonalBestType                           BestType;                                                   // 0x000C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x000D   (0x0003)  MISSED
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimQuestFilter
/// Size: 0x00B0 (0x000000 - 0x0000B0)
struct FPilgrimQuestFilter
{ 
	FGameplayTagQuery                                  QuestTagQuery;                                              // 0x0000   (0x0048)  
	FGameplayTagQuery                                  QuestObjectiveFilterQuery;                                  // 0x0048   (0x0048)  
	FSongShortNameMatcher                              QuestObjectiveFilterMatcher;                                // 0x0090   (0x0018)  
	bool                                               bShowCompletedQuests;                                       // 0x00A8   (0x0001)  
	bool                                               bShowUpdatedQuests;                                         // 0x00A9   (0x0001)  
	bool                                               bShowUnchangedQuests;                                       // 0x00AA   (0x0001)  
	unsigned char                                      UnknownData00_6[0x5];                                       // 0x00AB   (0x0005)  MISSED
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimQuestDisplayInfo
/// Size: 0x0090 (0x000000 - 0x000090)
struct FPilgrimQuestDisplayInfo
{ 
	SDK_UNDEFINED(24,15316) /* FText */                __um(Name);                                                 // 0x0000   (0x0018)  
	SDK_UNDEFINED(24,15317) /* FText */                __um(Description);                                          // 0x0018   (0x0018)  
	SDK_UNDEFINED(24,15318) /* FText */                __um(ShortDescription);                                     // 0x0030   (0x0018)  
	SDK_UNDEFINED(24,15319) /* FText */                __um(CompletionText);                                       // 0x0048   (0x0018)  
	FFortRewardInfo                                    RewardInfo;                                                 // 0x0060   (0x0030)  
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_Scoring_StreakChanged
/// Size: 0x000C (0x000000 - 0x00000C)
struct FPilgrimEvent_Scoring_StreakChanged
{ 
	int32_t                                            CurrentStreak;                                              // 0x0000   (0x0004)  
	int32_t                                            PreviousStreak;                                             // 0x0004   (0x0004)  
	int32_t                                            MaxStreak;                                                  // 0x0008   (0x0004)  
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_Scoring_StarChanged
/// Size: 0x000C (0x000000 - 0x00000C)
struct FPilgrimEvent_Scoring_StarChanged
{ 
	int32_t                                            CurrentStar;                                                // 0x0000   (0x0004)  
	int32_t                                            PreviousStar;                                               // 0x0004   (0x0004)  
	int32_t                                            MaxStar;                                                    // 0x0008   (0x0004)  
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_Scoring_MaxStreakStateChanged
/// Size: 0x0010 (0x000000 - 0x000010)
struct FPilgrimEvent_Scoring_MaxStreakStateChanged
{ 
	class AFortPlayerPawn*                             ForPlayer;                                                  // 0x0000   (0x0008)  
	int32_t                                            PlayerIndex;                                                // 0x0008   (0x0004)  
	bool                                               bIsAtMaxStreak;                                             // 0x000C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x000D   (0x0003)  MISSED
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_Scoring_OverdriveReady
/// Size: 0x0001 (0x000000 - 0x000001)
struct FPilgrimEvent_Scoring_OverdriveReady
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_Scoring_OverdriveActiveChanged
/// Size: 0x0010 (0x000000 - 0x000010)
struct FPilgrimEvent_Scoring_OverdriveActiveChanged
{ 
	bool                                               IsActive;                                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	class APlayerState*                                DeployingPlayer;                                            // 0x0008   (0x0008)  
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_Scoring_FinishedOverdriveSection
/// Size: 0x0001 (0x000000 - 0x000001)
struct FPilgrimEvent_Scoring_FinishedOverdriveSection
{ 
	bool                                               bIsSuccess;                                                 // 0x0000   (0x0001)  
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_Scoring_PerformanceDataResult
/// Size: 0x00A0 (0x000000 - 0x0000A0)
struct FPilgrimEvent_Scoring_PerformanceDataResult
{ 
	class AFortPlayerPawn*                             ForPlayer;                                                  // 0x0000   (0x0008)  
	double                                             TotalOffset;                                                // 0x0008   (0x0008)  
	int32_t                                            TotalSamples;                                               // 0x0010   (0x0004)  
	int32_t                                            TotalGems;                                                  // 0x0014   (0x0004)  
	int32_t                                            TotalHits;                                                  // 0x0018   (0x0004)  
	int32_t                                            TotalMisses;                                                // 0x001C   (0x0004)  
	int32_t                                            TotalPasses;                                                // 0x0020   (0x0004)  
	int32_t                                            TotalNotes;                                                 // 0x0024   (0x0004)  
	float                                              MaxValue;                                                   // 0x0028   (0x0004)  
	float                                              MinValue;                                                   // 0x002C   (0x0004)  
	float                                              StandardDeviation;                                          // 0x0030   (0x0004)  
	float                                              AverageOffset;                                              // 0x0034   (0x0004)  
	int32_t                                            MaxStreak;                                                  // 0x0038   (0x0004)  
	float                                              TimeInOverdriveMs;                                          // 0x003C   (0x0004)  
	SDK_UNDEFINED(80,15320) /* TMap<int32_t, int32_t> */ __um(HistogramSamples);                                   // 0x0040   (0x0050)  
	TArray<int32_t>                                    AccuracyTierCounts;                                         // 0x0090   (0x0010)  
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_Scoring_FullComboLost
/// Size: 0x0010 (0x000000 - 0x000010)
struct FPilgrimEvent_Scoring_FullComboLost
{ 
	class AFortPlayerState*                            ForPlayer;                                                  // 0x0000   (0x0008)  
	int32_t                                            PlayerIndex;                                                // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_Scoring_PerfectComboLost
/// Size: 0x0010 (0x000000 - 0x000010)
struct FPilgrimEvent_Scoring_PerfectComboLost
{ 
	class AFortPlayerState*                            ForPlayer;                                                  // 0x0000   (0x0008)  
	int32_t                                            PlayerIndex;                                                // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_Scoring_ScoreChanged
/// Size: 0x0020 (0x000000 - 0x000020)
struct FPilgrimEvent_Scoring_ScoreChanged
{ 
	class AFortPlayerPawn*                             ForPlayer;                                                  // 0x0000   (0x0008)  
	int32_t                                            PlayerIndex;                                                // 0x0008   (0x0004)  
	float                                              SoloDelta;                                                  // 0x000C   (0x0004)  
	float                                              BandDelta;                                                  // 0x0010   (0x0004)  
	float                                              SoloScore;                                                  // 0x0014   (0x0004)  
	float                                              BandScore;                                                  // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_Scoring_AutoplayActiveChanged
/// Size: 0x0001 (0x000000 - 0x000001)
struct FPilgrimEvent_Scoring_AutoplayActiveChanged
{ 
	bool                                               bIsAutoplayActive;                                          // 0x0000   (0x0001)  
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_Scoring_GemScored
/// Size: 0x0070 (0x000000 - 0x000070)
struct FPilgrimEvent_Scoring_GemScored
{ 
	class AFortPlayerState*                            ForPlayer;                                                  // 0x0000   (0x0008)  
	FPilgrimGemHitAccuracy                             Accuracy;                                                   // 0x0008   (0x0030)  
	FTrackItemInfo                                     Gem;                                                        // 0x0038   (0x0030)  
	float                                              BaseScore;                                                  // 0x0068   (0x0004)  
	float                                              BonusScore;                                                 // 0x006C   (0x0004)  
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_LocalPlayerMiss
/// Size: 0x0010 (0x000000 - 0x000010)
struct FPilgrimEvent_LocalPlayerMiss
{ 
	class AFortPlayerState*                            ForPlayer;                                                  // 0x0000   (0x0008)  
	EPilgrimTrackType                                  CurrentTrackType;                                           // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0009   (0x0007)  MISSED
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_Scoring_OnMistake
/// Size: 0x0010 (0x000000 - 0x000010)
struct FPilgrimEvent_Scoring_OnMistake
{ 
	EScoringMistakeType                                MistakeType;                                                // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	class AFortPlayerState*                            Player;                                                     // 0x0008   (0x0008)  
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_ScoringModifierAdded
/// Size: 0x0020 (0x000000 - 0x000020)
struct FPilgrimEvent_ScoringModifierAdded
{ 
	class UPilgrimScoringModifier*                     ScoringModifier;                                            // 0x0000   (0x0008)  
	TArray<class UPilgrimScoringModifier*>             ScoringModifiers;                                           // 0x0008   (0x0010)  
	EPilgrimScoringTarget                              Target;                                                     // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0019   (0x0007)  MISSED
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_ScoringModifierRemoved
/// Size: 0x0020 (0x000000 - 0x000020)
struct FPilgrimEvent_ScoringModifierRemoved
{ 
	class UPilgrimScoringModifier*                     ScoringModifier;                                            // 0x0000   (0x0008)  
	TArray<class UPilgrimScoringModifier*>             RemainingScoringModifiers;                                  // 0x0008   (0x0010)  
	EPilgrimScoringTarget                              Target;                                                     // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0019   (0x0007)  MISSED
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_PilgrimSettings_TrackBackgroundOpacityChanged
/// Size: 0x0001 (0x000000 - 0x000001)
struct FPilgrimEvent_PilgrimSettings_TrackBackgroundOpacityChanged
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_PilgrimSettings_UseAlternative5LaneTouchLayoutChanged
/// Size: 0x0001 (0x000000 - 0x000001)
struct FPilgrimEvent_PilgrimSettings_UseAlternative5LaneTouchLayoutChanged
{ 
	bool                                               bUseAlternative5LaneTouchLayout;                            // 0x0000   (0x0001)  
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_PilgrimSettings_OverdriveClearsGemsChanged
/// Size: 0x0001 (0x000000 - 0x000001)
struct FPilgrimEvent_PilgrimSettings_OverdriveClearsGemsChanged
{ 
	bool                                               bOverdriveClearsGems;                                       // 0x0000   (0x0001)  
};

/// Struct /Script/PilgrimCoreRuntime.RBTrackInfo
/// Size: 0x0050 (0x000000 - 0x000050)
struct FRBTrackInfo
{ 
	unsigned char                                      UnknownData00_2[0x50];                                      // 0x0000   (0x0050)  MISSED
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_SongLoading_Started
/// Size: 0x0004 (0x000000 - 0x000004)
struct FPilgrimEvent_SongLoading_Started
{ 
	FName                                              Song;                                                       // 0x0000   (0x0004)  
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimEvent_SongLoading_EveryoneFinished
/// Size: 0x0004 (0x000000 - 0x000004)
struct FPilgrimEvent_SongLoading_EveryoneFinished
{ 
	FName                                              Song;                                                       // 0x0000   (0x0004)  
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimSongPlaylistEntry
/// Size: 0x0010 (0x000000 - 0x000010)
struct FPilgrimSongPlaylistEntry
{ 
	class UPilgrimSongMetadata*                        Song;                                                       // 0x0000   (0x0008)  
	EPilgrimSongDifficulty                             SongDifficulty;                                             // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0009   (0x0007)  MISSED
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimSongTime
/// Size: 0x0018 (0x000000 - 0x000018)
struct FPilgrimSongTime
{ 
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x0000   (0x0018)  MISSED
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimCoreToggleRenderTargetEvent
/// Size: 0x0001 (0x000000 - 0x000001)
struct FPilgrimCoreToggleRenderTargetEvent
{ 
	bool                                               bToggleRenderTargetOn;                                      // 0x0000   (0x0001)  
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimTrackItemKey
/// Size: 0x0008 (0x000000 - 0x000008)
struct FPilgrimTrackItemKey
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/PilgrimCoreRuntime.TrackSpawnParams
/// Size: 0x00B0 (0x000000 - 0x0000B0)
struct FTrackSpawnParams
{ 
	unsigned char                                      UnknownData00_2[0xB0];                                      // 0x0000   (0x00B0)  MISSED
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimVerbMessageBase
/// Size: 0x00B8 (0x000078 - 0x000130)
struct FPilgrimVerbMessageBase : FVerbMessage
{ 
	FName                                              SongShortName;                                              // 0x0078   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x007C   (0x0004)  MISSED
	FSubjectTagsPair                                   SongID;                                                     // 0x0080   (0x0038)  
	FSubjectTagsPair                                   InstrumentId;                                               // 0x00B8   (0x0038)  
	FSubjectTagsPair                                   BandInstrumentIds;                                          // 0x00F0   (0x0038)  
	char                                               NumBandMembers;                                             // 0x0128   (0x0001)  
	EPilgrimSongDifficulty                             Difficulty;                                                 // 0x0129   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x012A   (0x0006)  MISSED
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimVerbMessage_AccumulateStars
/// Size: 0x0008 (0x000130 - 0x000138)
struct FPilgrimVerbMessage_AccumulateStars : FPilgrimVerbMessageBase
{ 
	char                                               TotalStars;                                                 // 0x0130   (0x0001)  
	char                                               DeltaStars;                                                 // 0x0131   (0x0001)  
	bool                                               bIsBandStar;                                                // 0x0132   (0x0001)  
	unsigned char                                      UnknownData00_6[0x5];                                       // 0x0133   (0x0005)  MISSED
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimVerbMessage_DeployOverdrive
/// Size: 0x0000 (0x000130 - 0x000130)
struct FPilgrimVerbMessage_DeployOverdrive : FPilgrimVerbMessageBase
{ 
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimVerbMessage_Note
/// Size: 0x0010 (0x000130 - 0x000140)
struct FPilgrimVerbMessage_Note : FPilgrimVerbMessageBase
{ 
	bool                                               DidHit;                                                     // 0x0130   (0x0001)  
	bool                                               DidPass;                                                    // 0x0131   (0x0001)  
	bool                                               DidMiss;                                                    // 0x0132   (0x0001)  
	bool                                               IsChord;                                                    // 0x0133   (0x0001)  
	int32_t                                            NoteStreak;                                                 // 0x0134   (0x0004)  
	int32_t                                            Multiplier;                                                 // 0x0138   (0x0004)  
	float                                              TimeSinceLastNoteMS;                                        // 0x013C   (0x0004)  
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimVerbMessage_ScoreEvent
/// Size: 0x0028 (0x000130 - 0x000158)
struct FPilgrimVerbMessage_ScoreEvent : FPilgrimVerbMessageBase
{ 
	int32_t                                            CurrentScore;                                               // 0x0130   (0x0004)  
	int32_t                                            DeltaScore;                                                 // 0x0134   (0x0004)  
	int32_t                                            CurrentStars;                                               // 0x0138   (0x0004)  
	int32_t                                            DeltaStars;                                                 // 0x013C   (0x0004)  
	float                                              CurrentChordScore;                                          // 0x0140   (0x0004)  
	float                                              DeltaChordScore;                                            // 0x0144   (0x0004)  
	float                                              CurrentSustainScore;                                        // 0x0148   (0x0004)  
	float                                              DeltaSustainScore;                                          // 0x014C   (0x0004)  
	bool                                               bIsInOverdrive;                                             // 0x0150   (0x0001)  
	bool                                               bIsBandScore;                                               // 0x0151   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x0152   (0x0006)  MISSED
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimVerbMessage_SetlistComplete
/// Size: 0x0018 (0x000130 - 0x000148)
struct FPilgrimVerbMessage_SetlistComplete : FPilgrimVerbMessageBase
{ 
	float                                              SoloScore;                                                  // 0x0130   (0x0004)  
	float                                              BandScore;                                                  // 0x0134   (0x0004)  
	int32_t                                            SoloStars;                                                  // 0x0138   (0x0004)  
	int32_t                                            BandStars;                                                  // 0x013C   (0x0004)  
	int32_t                                            NumSongs;                                                   // 0x0140   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0144   (0x0004)  MISSED
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimVerbMessage_SongCompleted
/// Size: 0x0028 (0x000130 - 0x000158)
struct FPilgrimVerbMessage_SongCompleted : FPilgrimVerbMessageBase
{ 
	float                                              SoloScore;                                                  // 0x0130   (0x0004)  
	float                                              BandScore;                                                  // 0x0134   (0x0004)  
	int32_t                                            SoloStars;                                                  // 0x0138   (0x0004)  
	int32_t                                            BandStars;                                                  // 0x013C   (0x0004)  
	int32_t                                            NumPlayers;                                                 // 0x0140   (0x0004)  
	float                                              NoteAccuracy;                                               // 0x0144   (0x0004)  
	float                                              OverdriveTime;                                              // 0x0148   (0x0004)  
	EComboType                                         ComboType;                                                  // 0x014C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x014D   (0x0003)  MISSED
	float                                              PercentPerfect;                                             // 0x0150   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0154   (0x0004)  MISSED
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimVerbMessage_SongStarted
/// Size: 0x0000 (0x000130 - 0x000130)
struct FPilgrimVerbMessage_SongStarted : FPilgrimVerbMessageBase
{ 
};

/// Struct /Script/PilgrimCoreRuntime.PilgrimVerbFilter_DeployOverdrive
/// Size: 0x0000 (0x0001A8 - 0x0001A8)
struct FPilgrimVerbFilter_DeployOverdrive : FPilgrimObjectiveFilterBase
{ 
};

