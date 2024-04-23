
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: LearningAgents

/// Class /Script/LearningAgentsTraining.LearningAgentsCompletions
/// Size: 0x0000 (0x000028 - 0x000028)
class ULearningAgentsCompletions : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/LearningAgentsTraining.LearningAgentsCompletions.MakeCompletionOnTimeElapsed
	// ELearningAgentsCompletion MakeCompletionOnTimeElapsed(float Time, float TimeThreshold, ELearningAgentsCompletion CompletionType, FName tag, bool bVisualLoggerEnabled, class ULearningAgentsManagerListener* VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // [0xcf74170] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgentsTraining.LearningAgentsCompletions.MakeCompletionOnLocationOutsideBounds
	// ELearningAgentsCompletion MakeCompletionOnLocationOutsideBounds(FVector Location, FTransform BoundsTransform, FVector BoundsMins, FVector BoundsMaxs, ELearningAgentsCompletion CompletionType, FName tag, bool bVisualLoggerEnabled, class ULearningAgentsManagerListener* VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // [0xcf73954] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgentsTraining.LearningAgentsCompletions.MakeCompletionOnLocationDifferenceBelowThreshold
	// ELearningAgentsCompletion MakeCompletionOnLocationDifferenceBelowThreshold(FVector LocationA, FVector LocationB, float DistanceThreshold, ELearningAgentsCompletion CompletionType, FName tag, bool bVisualLoggerEnabled, class ULearningAgentsManagerListener* VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // [0xcf73250] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgentsTraining.LearningAgentsCompletions.MakeCompletionOnLocationDifferenceAboveThreshold
	// ELearningAgentsCompletion MakeCompletionOnLocationDifferenceAboveThreshold(FVector LocationA, FVector LocationB, float DistanceThreshold, ELearningAgentsCompletion CompletionType, FName tag, bool bVisualLoggerEnabled, class ULearningAgentsManagerListener* VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // [0xcf72b4c] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgentsTraining.LearningAgentsCompletions.MakeCompletionOnEpisodeStepsRecorded
	// ELearningAgentsCompletion MakeCompletionOnEpisodeStepsRecorded(int32_t EpisodeSteps, int32_t MaxEpisodeSteps, ELearningAgentsCompletion CompletionType, FName tag, bool bVisualLoggerEnabled, class ULearningAgentsManagerListener* VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // [0xcf724d0] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgentsTraining.LearningAgentsCompletions.MakeCompletionOnCondition
	// ELearningAgentsCompletion MakeCompletionOnCondition(bool bCondition, ELearningAgentsCompletion CompletionType, FName tag, bool bVisualLoggerEnabled, class ULearningAgentsManagerListener* VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // [0xcf71e9c] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgentsTraining.LearningAgentsCompletions.MakeCompletion
	// ELearningAgentsCompletion MakeCompletion(ELearningAgentsCompletion CompletionType, FName tag, bool bVisualLoggerEnabled, class ULearningAgentsManagerListener* VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // [0xcf718e0] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgentsTraining.LearningAgentsCompletions.IsCompletionTruncation
	// bool IsCompletionTruncation(ELearningAgentsCompletion Completion);                                                       // [0xcf710e0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgentsTraining.LearningAgentsCompletions.IsCompletionTermination
	// bool IsCompletionTermination(ELearningAgentsCompletion Completion);                                                      // [0xcf71064] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgentsTraining.LearningAgentsCompletions.IsCompletionRunning
	// bool IsCompletionRunning(ELearningAgentsCompletion Completion);                                                          // [0xcf70ff0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgentsTraining.LearningAgentsCompletions.IsCompletionCompleted
	// bool IsCompletionCompleted(ELearningAgentsCompletion Completion);                                                        // [0xcf70f70] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgentsTraining.LearningAgentsCompletions.CompletionOr
	// ELearningAgentsCompletion CompletionOr(ELearningAgentsCompletion A, ELearningAgentsCompletion B);                        // [0xcf706dc] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgentsTraining.LearningAgentsCompletions.CompletionNot
	// ELearningAgentsCompletion CompletionNot(ELearningAgentsCompletion A, ELearningAgentsCompletion NotRunningType);          // [0xcf70618] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgentsTraining.LearningAgentsCompletions.CompletionAnd
	// ELearningAgentsCompletion CompletionAnd(ELearningAgentsCompletion A, ELearningAgentsCompletion B);                       // [0xcf70554] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/LearningAgentsTraining.LearningAgentsImitationTrainer
/// Size: 0x0020 (0x000088 - 0x0000A8)
class ULearningAgentsImitationTrainer : public ULearningAgentsManagerListener
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	CMember(class ULearningAgentsInteractor*)          Interactor                                                  OFFSET(get<T>, {0x88, 8, 0, 0})
	CMember(class ULearningAgentsPolicy*)              Policy                                                      OFFSET(get<T>, {0x90, 8, 0, 0})
	DMember(bool)                                      bIsTraining                                                 OFFSET(get<bool>, {0x98, 1, 0, 0})
	DMember(bool)                                      bHasTrainingFailed                                          OFFSET(get<bool>, {0x99, 1, 0, 0})


	/// Functions
	// Function /Script/LearningAgentsTraining.LearningAgentsImitationTrainer.RunTraining
	// void RunTraining(class ULearningAgentsRecording* Recording, FLearningAgentsImitationTrainerSettings& ImitationTrainerSettings, FLearningAgentsImitationTrainerTrainingSettings& ImitationTrainerTrainingSettings, FLearningAgentsTrainerPathSettings& ImitationTrainerPathSettings); // [0xcf79df8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgentsTraining.LearningAgentsImitationTrainer.MakeImitationTrainer
	// class ULearningAgentsImitationTrainer* MakeImitationTrainer(class ULearningAgentsManager* InManager, class ULearningAgentsInteractor* InInteractor, class ULearningAgentsPolicy* InPolicy, class UClass* Class); // [0xcf747f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LearningAgentsTraining.LearningAgentsImitationTrainer.IterateTraining
	// void IterateTraining();                                                                                                  // [0xcf7115c] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgentsTraining.LearningAgentsImitationTrainer.IsTraining
	// bool IsTraining();                                                                                                       // [0xcc51d2c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LearningAgentsTraining.LearningAgentsImitationTrainer.HasTrainingFailed
	// bool HasTrainingFailed();                                                                                                // [0xcf70f58] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LearningAgentsTraining.LearningAgentsImitationTrainer.EndTraining
	// void EndTraining();                                                                                                      // [0xcf707cc] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgentsTraining.LearningAgentsImitationTrainer.BeginTraining
	// void BeginTraining(class ULearningAgentsRecording* Recording, FLearningAgentsImitationTrainerSettings& ImitationTrainerSettings, FLearningAgentsImitationTrainerTrainingSettings& ImitationTrainerTrainingSettings, FLearningAgentsTrainerPathSettings& ImitationTrainerPathSettings); // [0xcf703c4] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/LearningAgentsTraining.LearningAgentsRecorder
/// Size: 0x4638 (0x000088 - 0x0046C0)
class ULearningAgentsRecorder : public ULearningAgentsManagerListener
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 18112;

public:
	CMember(class ULearningAgentsInteractor*)          Interactor                                                  OFFSET(get<T>, {0x88, 8, 0, 0})
	CMember(class ULearningAgentsRecording*)           Recording                                                   OFFSET(get<T>, {0x90, 8, 0, 0})
	DMember(bool)                                      bIsRecording                                                OFFSET(get<bool>, {0x98, 1, 0, 0})


	/// Functions
	// Function /Script/LearningAgentsTraining.LearningAgentsRecorder.SetupRecorder
	// void SetupRecorder(class ULearningAgentsManager* InManager, class ULearningAgentsInteractor* InInteractor, FLearningAgentsRecorderPathSettings& RecorderPathSettings, class ULearningAgentsRecording* RecordingAsset, bool bReinitializeRecording); // [0xcf7a6f8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgentsTraining.LearningAgentsRecorder.MakeRecorder
	// class ULearningAgentsRecorder* MakeRecorder(class ULearningAgentsManager* InManager, class ULearningAgentsInteractor* InInteractor, class UClass* Class, FName Name, FLearningAgentsRecorderPathSettings& RecorderPathSettings, class ULearningAgentsRecording* RecordingAsset, bool bReinitializeRecording); // [0xcf74a24] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgentsTraining.LearningAgentsRecorder.IsRecording
	// bool IsRecording();                                                                                                      // [0xcc51d2c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LearningAgentsTraining.LearningAgentsRecorder.GetRecordingAsset
	// class ULearningAgentsRecording* GetRecordingAsset();                                                                     // [0xcf70f34] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LearningAgentsTraining.LearningAgentsRecorder.EndRecordingAndDiscard
	// void EndRecordingAndDiscard();                                                                                           // [0xcf707b8] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgentsTraining.LearningAgentsRecorder.EndRecording
	// void EndRecording();                                                                                                     // [0xcf707a4] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgentsTraining.LearningAgentsRecorder.BeginRecording
	// void BeginRecording();                                                                                                   // [0xcf703b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgentsTraining.LearningAgentsRecorder.AddExperience
	// void AddExperience();                                                                                                    // [0xcf6fc14] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/LearningAgentsTraining.LearningAgentsRecording
/// Size: 0x0010 (0x000030 - 0x000040)
class ULearningAgentsRecording : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(TArray<FLearningAgentsRecord>)             Records                                                     OFFSET(get<T>, {0x30, 16, 0, 0})


	/// Functions
	// Function /Script/LearningAgentsTraining.LearningAgentsRecording.SaveRecordingToFile
	// void SaveRecordingToFile(FFilePath& File);                                                                               // [0xcf7a008] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/LearningAgentsTraining.LearningAgentsRecording.SaveRecordingToAsset
	// void SaveRecordingToAsset(class ULearningAgentsRecording* RecordingAsset);                                               // [0xcf79f88] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgentsTraining.LearningAgentsRecording.ResetRecording
	// void ResetRecording();                                                                                                   // [0xcf79dcc] Final|Native|Public  
	// Function /Script/LearningAgentsTraining.LearningAgentsRecording.LoadRecordingFromFile
	// void LoadRecordingFromFile(FFilePath& File);                                                                             // [0xcf711f0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgentsTraining.LearningAgentsRecording.LoadRecordingFromAsset
	// void LoadRecordingFromAsset(class ULearningAgentsRecording* RecordingAsset);                                             // [0xcf71170] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgentsTraining.LearningAgentsRecording.GetRecordStepNum
	// int32_t GetRecordStepNum(int32_t Record);                                                                                // [0xcf70ea8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LearningAgentsTraining.LearningAgentsRecording.GetRecordNum
	// int32_t GetRecordNum();                                                                                                  // [0x6aee8d8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LearningAgentsTraining.LearningAgentsRecording.GetObservationVector
	// void GetObservationVector(TArray<float>& OutObservationVector, int32_t& OutObservationCompatibilityHash, int32_t Record, int32_t Step); // [0xcf70b44] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgentsTraining.LearningAgentsRecording.GetActionVector
	// void GetActionVector(TArray<float>& OutActionVector, int32_t& OutActionCompatibilityHash, int32_t Record, int32_t Step); // [0xcf707e0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgentsTraining.LearningAgentsRecording.AppendRecordingToAsset
	// void AppendRecordingToAsset(class ULearningAgentsRecording* RecordingAsset);                                             // [0xcf70330] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgentsTraining.LearningAgentsRecording.AppendRecordingFromFile
	// void AppendRecordingFromFile(FFilePath& File);                                                                           // [0xcf6fc28] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/LearningAgentsTraining.LearningAgentsRewards
/// Size: 0x0000 (0x000028 - 0x000028)
class ULearningAgentsRewards : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/LearningAgentsTraining.LearningAgentsRewards.MakeRewardOnLocationDifferenceBelowThreshold
	// float MakeRewardOnLocationDifferenceBelowThreshold(FVector LocationA, FVector LocationB, float DistanceThreshold, float RewardScale, FName tag, bool bVisualLoggerEnabled, class ULearningAgentsManagerListener* VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // [0xcf796c4] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgentsTraining.LearningAgentsRewards.MakeRewardOnLocationDifferenceAboveThreshold
	// float MakeRewardOnLocationDifferenceAboveThreshold(FVector LocationA, FVector LocationB, float DistanceThreshold, float RewardScale, FName tag, bool bVisualLoggerEnabled, class ULearningAgentsManagerListener* VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // [0xcf78fbc] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgentsTraining.LearningAgentsRewards.MakeRewardOnCondition
	// float MakeRewardOnCondition(bool bCondition, float RewardScale, FName tag, bool bVisualLoggerEnabled, class ULearningAgentsManagerListener* VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // [0xcf7896c] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgentsTraining.LearningAgentsRewards.MakeRewardFromVelocityAlongSpline
	// float MakeRewardFromVelocityAlongSpline(class USplineComponent* SplineComponent, FVector Location, FVector Velocity, float VelocityScale, float RewardScale, float FiniteDifferenceDelta, FName tag, bool bVisualLoggerEnabled, class ULearningAgentsManagerListener* VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // [0xcf77f84] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgentsTraining.LearningAgentsRewards.MakeRewardFromRotationSimilarityAsQuats
	// float MakeRewardFromRotationSimilarityAsQuats(FQuat RotationA, FQuat RotationB, float RewardScale, FName tag, bool bVisualLoggerEnabled, class ULearningAgentsManagerListener* VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerRotationLocationA, FVector VisualLoggerRotationLocationB, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // [0xcf776dc] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgentsTraining.LearningAgentsRewards.MakeRewardFromRotationSimilarity
	// float MakeRewardFromRotationSimilarity(FRotator RotationA, FRotator RotationB, float RewardScale, FName tag, bool bVisualLoggerEnabled, class ULearningAgentsManagerListener* VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerRotationLocationA, FVector VisualLoggerRotationLocationB, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // [0xcf76df4] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgentsTraining.LearningAgentsRewards.MakeRewardFromLocationSimilarity
	// float MakeRewardFromLocationSimilarity(FVector LocationA, FVector LocationB, float LocationScale, float RewardScale, FName tag, bool bVisualLoggerEnabled, class ULearningAgentsManagerListener* VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // [0xcf7671c] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgentsTraining.LearningAgentsRewards.MakeRewardFromDirectionSimilarity
	// float MakeRewardFromDirectionSimilarity(FVector DirectionA, FVector DirectionB, float RewardScale, FName tag, bool bVisualLoggerEnabled, class ULearningAgentsManagerListener* VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerDirectionLocationA, FVector VisualLoggerDirectionLocationB, FVector VisualLoggerLocation, float VisualLoggerArrowLength, FLinearColor VisualLoggerColor); // [0xcf75d4c] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgentsTraining.LearningAgentsRewards.MakeRewardFromAngleSimilarity
	// float MakeRewardFromAngleSimilarity(float AngleA, float AngleB, float RewardScale, FName tag, bool bVisualLoggerEnabled, class ULearningAgentsManagerListener* VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerAngleLocationA, FVector VisualLoggerAngleLocationB, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // [0xcf75534] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgentsTraining.LearningAgentsRewards.MakeReward
	// float MakeReward(float RewardValue, float RewardScale, FName tag, bool bVisualLoggerEnabled, class ULearningAgentsManagerListener* VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // [0xcf74f3c] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
};

/// Class /Script/LearningAgentsTraining.LearningAgentsTrainer
/// Size: 0x0348 (0x000088 - 0x0003D0)
class ULearningAgentsTrainer : public ULearningAgentsManagerListener
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 976;

public:
	CMember(class ULearningAgentsInteractor*)          Interactor                                                  OFFSET(get<T>, {0x88, 8, 0, 0})
	CMember(class ULearningAgentsPolicy*)              Policy                                                      OFFSET(get<T>, {0x90, 8, 0, 0})
	CMember(class ULearningAgentsCritic*)              Critic                                                      OFFSET(get<T>, {0x98, 8, 0, 0})
	DMember(bool)                                      bIsTraining                                                 OFFSET(get<bool>, {0xA0, 1, 0, 0})
	DMember(bool)                                      bHasTrainingFailed                                          OFFSET(get<bool>, {0xA1, 1, 0, 0})


	/// Functions
	// Function /Script/LearningAgentsTraining.LearningAgentsTrainer.SetupTrainer
	// void SetupTrainer(class ULearningAgentsManager* InManager, class ULearningAgentsInteractor* InInteractor, class ULearningAgentsPolicy* InPolicy, class ULearningAgentsCritic* InCritic, FLearningAgentsTrainerSettings& TrainerSettings); // [0xcfa75e0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgentsTraining.LearningAgentsTrainer.RunTraining
	// void RunTraining(FLearningAgentsTrainerTrainingSettings& TrainerTrainingSettings, FLearningAgentsTrainerGameSettings& TrainerGameSettings, FLearningAgentsTrainerPathSettings& TrainerPathSettings, bool bResetAgentsOnBegin, bool bResetAgentsOnUpdate); // [0xcfa7278] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgentsTraining.LearningAgentsTrainer.ResetAgentEpisodes
	// void ResetAgentEpisodes(TArray<int32_t>& AgentIds);                                                                      // [0xa67b010] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/LearningAgentsTraining.LearningAgentsTrainer.ResetAgentEpisode
	// void ResetAgentEpisode(int32_t AgentId);                                                                                 // [0xcfa71f4] Native|Event|Public|BlueprintEvent 
	// Function /Script/LearningAgentsTraining.LearningAgentsTrainer.ProcessExperience
	// void ProcessExperience(bool bResetAgentsOnUpdate);                                                                       // [0xcfa7174] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgentsTraining.LearningAgentsTrainer.MakeTrainer
	// class ULearningAgentsTrainer* MakeTrainer(class ULearningAgentsManager* InManager, class ULearningAgentsInteractor* InInteractor, class ULearningAgentsPolicy* InPolicy, class ULearningAgentsCritic* InCritic, class UClass* Class, FName Name, FLearningAgentsTrainerSettings& TrainerSettings); // [0xcfa6db0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgentsTraining.LearningAgentsTrainer.IsTraining
	// bool IsTraining();                                                                                                       // [0x89a9d74] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LearningAgentsTraining.LearningAgentsTrainer.HasTrainingFailed
	// bool HasTrainingFailed();                                                                                                // [0xb6eb9f4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LearningAgentsTraining.LearningAgentsTrainer.HasReward
	// bool HasReward(int32_t AgentId);                                                                                         // [0xcfa6d24] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LearningAgentsTraining.LearningAgentsTrainer.HasCompletion
	// bool HasCompletion(int32_t AgentId);                                                                                     // [0xcfa6c98] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LearningAgentsTraining.LearningAgentsTrainer.GetReward
	// float GetReward(int32_t AgentId);                                                                                        // [0xcfa6c08] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LearningAgentsTraining.LearningAgentsTrainer.GetEpisodeTime
	// float GetEpisodeTime(int32_t AgentId);                                                                                   // [0xcfa6b78] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LearningAgentsTraining.LearningAgentsTrainer.GetEpisodeStepNum
	// int32_t GetEpisodeStepNum(int32_t AgentId);                                                                              // [0xcfa6aec] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LearningAgentsTraining.LearningAgentsTrainer.GetCompletion
	// ELearningAgentsCompletion GetCompletion(int32_t AgentId);                                                                // [0xcfa6a60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LearningAgentsTraining.LearningAgentsTrainer.GatherRewards
	// void GatherRewards();                                                                                                    // [0xcfa6a4c] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgentsTraining.LearningAgentsTrainer.GatherCompletions
	// void GatherCompletions();                                                                                                // [0xcfa6a38] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgentsTraining.LearningAgentsTrainer.GatherAgentRewards
	// void GatherAgentRewards(TArray<float>& OutRewards, TArray<int32_t>& AgentIds);                                           // [0xcfa68e4] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/LearningAgentsTraining.LearningAgentsTrainer.GatherAgentReward
	// void GatherAgentReward(float& OutReward, int32_t AgentId);                                                               // [0xcfa67d0] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/LearningAgentsTraining.LearningAgentsTrainer.GatherAgentCompletions
	// void GatherAgentCompletions(TArray<ELearningAgentsCompletion>& OutCompletions, TArray<int32_t>& AgentIds);               // [0xcfa60a4] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/LearningAgentsTraining.LearningAgentsTrainer.GatherAgentCompletion
	// void GatherAgentCompletion(ELearningAgentsCompletion& OutCompletion, int32_t AgentId);                                   // [0xcfa5f14] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/LearningAgentsTraining.LearningAgentsTrainer.EndTraining
	// void EndTraining();                                                                                                      // [0xcfa5f00] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgentsTraining.LearningAgentsTrainer.BeginTraining
	// void BeginTraining(FLearningAgentsTrainerTrainingSettings& TrainerTrainingSettings, FLearningAgentsTrainerGameSettings& TrainerGameSettings, FLearningAgentsTrainerPathSettings& TrainerPathSettings, bool bResetAgentsOnBegin); // [0xcfa5ca0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/LearningAgentsTraining.LearningAgentsImitationTrainerSettings
/// Size: 0x0004 (0x000000 - 0x000004)
class FLearningAgentsImitationTrainerSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(float)                                     TrainerCommunicationTimeout                                 OFFSET(get<float>, {0x0, 4, 0, 0})
};

/// Struct /Script/LearningAgentsTraining.LearningAgentsImitationTrainerTrainingSettings
/// Size: 0x0028 (0x000000 - 0x000028)
class FLearningAgentsImitationTrainerTrainingSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(int32_t)                                   NumberOfIterations                                          OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(float)                                     LearningRate                                                OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     LearningRateDecay                                           OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     WeightDecay                                                 OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(uint32_t)                                  BatchSize                                                   OFFSET(get<uint32_t>, {0x10, 4, 0, 0})
	DMember(uint32_t)                                  Window                                                      OFFSET(get<uint32_t>, {0x14, 4, 0, 0})
	DMember(float)                                     ActionRegularizationWeight                                  OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     ActionEntropyWeight                                         OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(int32_t)                                   RandomSeed                                                  OFFSET(get<int32_t>, {0x20, 4, 0, 0})
	CMember(ELearningAgentsTrainerDevice)              Device                                                      OFFSET(get<T>, {0x24, 1, 0, 0})
	DMember(bool)                                      bUseTensorboard                                             OFFSET(get<bool>, {0x25, 1, 0, 0})
	DMember(bool)                                      bSaveSnapshots                                              OFFSET(get<bool>, {0x26, 1, 0, 0})
};

/// Struct /Script/LearningAgentsTraining.LearningAgentsRecorderPathSettings
/// Size: 0x0020 (0x000000 - 0x000020)
class FLearningAgentsRecorderPathSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FDirectoryPath)                            IntermediateRelativePath                                    OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   RecordingsSubdirectory                                      OFFSET(getStruct<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/LearningAgentsTraining.LearningAgentsRecord
/// Size: 0x0038 (0x000000 - 0x000038)
class FLearningAgentsRecord : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(int32_t)                                   StepNum                                                     OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   ObservationDimNum                                           OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   ActionDimNum                                                OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   ObservationCompatibilityHash                                OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	DMember(int32_t)                                   ActionCompatibilityHash                                     OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	CMember(TArray<float>)                             ObservationData                                             OFFSET(get<T>, {0x18, 16, 0, 0})
	CMember(TArray<float>)                             ActionData                                                  OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Struct /Script/LearningAgentsTraining.LearningAgentsTrainerSettings
/// Size: 0x0010 (0x000000 - 0x000010)
class FLearningAgentsTrainerSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(int32_t)                                   MaxEpisodeStepNum                                           OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   MaximumRecordedEpisodesPerIteration                         OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   MaximumRecordedStepsPerIteration                            OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(float)                                     TrainerCommunicationTimeout                                 OFFSET(get<float>, {0xC, 4, 0, 0})
};

/// Struct /Script/LearningAgentsTraining.LearningAgentsTrainerGameSettings
/// Size: 0x000C (0x000000 - 0x00000C)
class FLearningAgentsTrainerGameSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(bool)                                      bUseFixedTimeStep                                           OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(float)                                     FixedTimeStepFrequency                                      OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(bool)                                      bSetMaxPhysicsStepToFixedTimeStep                           OFFSET(get<bool>, {0x8, 1, 0, 0})
	DMember(bool)                                      bDisableMaxFPS                                              OFFSET(get<bool>, {0x9, 1, 0, 0})
	DMember(bool)                                      bDisableVSync                                               OFFSET(get<bool>, {0xA, 1, 0, 0})
	DMember(bool)                                      bUseUnlitViewportRendering                                  OFFSET(get<bool>, {0xB, 1, 0, 0})
};

/// Struct /Script/LearningAgentsTraining.LearningAgentsTrainerTrainingSettings
/// Size: 0x0064 (0x000000 - 0x000064)
class FLearningAgentsTrainerTrainingSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 100;

public:
	DMember(int32_t)                                   NumberOfIterations                                          OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(float)                                     LearningRatePolicy                                          OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     LearningRateCritic                                          OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     LearningRateDecay                                           OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     WeightDecay                                                 OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(int32_t)                                   PolicyBatchSize                                             OFFSET(get<int32_t>, {0x14, 4, 0, 0})
	DMember(int32_t)                                   CriticBatchSize                                             OFFSET(get<int32_t>, {0x18, 4, 0, 0})
	DMember(int32_t)                                   PolicyWindowSize                                            OFFSET(get<int32_t>, {0x1C, 4, 0, 0})
	DMember(int32_t)                                   IterationsPerGather                                         OFFSET(get<int32_t>, {0x20, 4, 0, 0})
	DMember(int32_t)                                   CriticWarmupIterations                                      OFFSET(get<int32_t>, {0x24, 4, 0, 0})
	DMember(float)                                     EpsilonClip                                                 OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(float)                                     ReturnRegularizationWeight                                  OFFSET(get<float>, {0x2C, 4, 0, 0})
	DMember(float)                                     ActionRegularizationWeight                                  OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(float)                                     ActionEntropyWeight                                         OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     GaeLambda                                                   OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(bool)                                      bAdvantageNormalization                                     OFFSET(get<bool>, {0x3C, 1, 0, 0})
	DMember(float)                                     MinimumAdvantage                                            OFFSET(get<float>, {0x40, 4, 0, 0})
	DMember(float)                                     MaximumAdvantage                                            OFFSET(get<float>, {0x44, 4, 0, 0})
	DMember(bool)                                      bUseGradNormMaxClipping                                     OFFSET(get<bool>, {0x48, 1, 0, 0})
	DMember(float)                                     GradNormMax                                                 OFFSET(get<float>, {0x4C, 4, 0, 0})
	DMember(int32_t)                                   NumberOfStepsToTrimAtStartOfEpisode                         OFFSET(get<int32_t>, {0x50, 4, 0, 0})
	DMember(int32_t)                                   NumberOfStepsToTrimAtEndOfEpisode                           OFFSET(get<int32_t>, {0x54, 4, 0, 0})
	DMember(int32_t)                                   RandomSeed                                                  OFFSET(get<int32_t>, {0x58, 4, 0, 0})
	DMember(float)                                     DiscountFactor                                              OFFSET(get<float>, {0x5C, 4, 0, 0})
	CMember(ELearningAgentsTrainerDevice)              Device                                                      OFFSET(get<T>, {0x60, 1, 0, 0})
	DMember(bool)                                      bUseTensorboard                                             OFFSET(get<bool>, {0x61, 1, 0, 0})
	DMember(bool)                                      bSaveSnapshots                                              OFFSET(get<bool>, {0x62, 1, 0, 0})
};

/// Struct /Script/LearningAgentsTraining.LearningAgentsTrainerPathSettings
/// Size: 0x0040 (0x000000 - 0x000040)
class FLearningAgentsTrainerPathSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FDirectoryPath)                            EditorEngineRelativePath                                    OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   NonEditorEngineRelativePath                                 OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FDirectoryPath)                            EditorIntermediateRelativePath                              OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	SMember(FString)                                   NonEditorIntermediateRelativePath                           OFFSET(getStruct<T>, {0x30, 16, 0, 0})
};

/// Enum /Script/LearningAgentsTraining.ELearningAgentsCompletion
/// Size: 0x04
enum class ELearningAgentsCompletion : uint8_t
{
	ELearningAgentsCompletion__Running                                               = 0,
	ELearningAgentsCompletion__Truncation                                            = 1,
	ELearningAgentsCompletion__Termination                                           = 2,
	ELearningAgentsCompletion__ELearningAgentsCompletion_MAX                         = 3
};

/// Enum /Script/LearningAgentsTraining.ELearningAgentsTrainerDevice
/// Size: 0x03
enum class ELearningAgentsTrainerDevice : uint8_t
{
	ELearningAgentsTrainerDevice__CPU                                                = 0,
	ELearningAgentsTrainerDevice__GPU                                                = 1,
	ELearningAgentsTrainerDevice__ELearningAgentsTrainerDevice_MAX                   = 2
};

