
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
	// ELearningAgentsCompletion MakeCompletionOnTimeElapsed(float Time, float TimeThreshold, ELearningAgentsCompletion CompletionType, FName tag, bool bVisualLoggerEnabled, class ULearningAgentsManagerListener* VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // [0xb79db18] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgentsTraining.LearningAgentsCompletions.MakeCompletionOnLocationOutsideBounds
	// ELearningAgentsCompletion MakeCompletionOnLocationOutsideBounds(FVector Location, FTransform BoundsTransform, FVector BoundsMins, FVector BoundsMaxs, ELearningAgentsCompletion CompletionType, FName tag, bool bVisualLoggerEnabled, class ULearningAgentsManagerListener* VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // [0xb79d094] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgentsTraining.LearningAgentsCompletions.MakeCompletionOnLocationDifferenceBelowThreshold
	// ELearningAgentsCompletion MakeCompletionOnLocationDifferenceBelowThreshold(FVector LocationA, FVector LocationB, float DistanceThreshold, ELearningAgentsCompletion CompletionType, FName tag, bool bVisualLoggerEnabled, class ULearningAgentsManagerListener* VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // [0xb79c7d8] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgentsTraining.LearningAgentsCompletions.MakeCompletionOnLocationDifferenceAboveThreshold
	// ELearningAgentsCompletion MakeCompletionOnLocationDifferenceAboveThreshold(FVector LocationA, FVector LocationB, float DistanceThreshold, ELearningAgentsCompletion CompletionType, FName tag, bool bVisualLoggerEnabled, class ULearningAgentsManagerListener* VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // [0xb79bf1c] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgentsTraining.LearningAgentsCompletions.MakeCompletionOnEpisodeStepsRecorded
	// ELearningAgentsCompletion MakeCompletionOnEpisodeStepsRecorded(int32_t EpisodeSteps, int32_t MaxEpisodeSteps, ELearningAgentsCompletion CompletionType, FName tag, bool bVisualLoggerEnabled, class ULearningAgentsManagerListener* VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // [0xb79bba4] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgentsTraining.LearningAgentsCompletions.MakeCompletionOnCondition
	// ELearningAgentsCompletion MakeCompletionOnCondition(bool bCondition, ELearningAgentsCompletion CompletionType, FName tag, bool bVisualLoggerEnabled, class ULearningAgentsManagerListener* VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // [0xb79b888] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgentsTraining.LearningAgentsCompletions.MakeCompletion
	// ELearningAgentsCompletion MakeCompletion(ELearningAgentsCompletion CompletionType, FName tag, bool bVisualLoggerEnabled, class ULearningAgentsManagerListener* VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // [0xb79b5b4] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgentsTraining.LearningAgentsCompletions.IsCompletionTruncation
	// bool IsCompletionTruncation(ELearningAgentsCompletion Completion);                                                       // [0xb79b320] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgentsTraining.LearningAgentsCompletions.IsCompletionTermination
	// bool IsCompletionTermination(ELearningAgentsCompletion Completion);                                                      // [0xb79b2a4] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgentsTraining.LearningAgentsCompletions.IsCompletionRunning
	// bool IsCompletionRunning(ELearningAgentsCompletion Completion);                                                          // [0xb79b230] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgentsTraining.LearningAgentsCompletions.IsCompletionCompleted
	// bool IsCompletionCompleted(ELearningAgentsCompletion Completion);                                                        // [0xb79b1b0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgentsTraining.LearningAgentsCompletions.CompletionOr
	// ELearningAgentsCompletion CompletionOr(ELearningAgentsCompletion A, ELearningAgentsCompletion B);                        // [0xb79a93c] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgentsTraining.LearningAgentsCompletions.CompletionNot
	// ELearningAgentsCompletion CompletionNot(ELearningAgentsCompletion A, ELearningAgentsCompletion NotRunningType);          // [0xb79a878] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgentsTraining.LearningAgentsCompletions.CompletionAnd
	// ELearningAgentsCompletion CompletionAnd(ELearningAgentsCompletion A, ELearningAgentsCompletion B);                       // [0xb79a7b4] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
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
	// void RunTraining(class ULearningAgentsRecording* Recording, FLearningAgentsImitationTrainerSettings& ImitationTrainerSettings, FLearningAgentsImitationTrainerTrainingSettings& ImitationTrainerTrainingSettings, FLearningAgentsTrainerPathSettings& ImitationTrainerPathSettings); // [0xb7a35b4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgentsTraining.LearningAgentsImitationTrainer.MakeImitationTrainer
	// class ULearningAgentsImitationTrainer* MakeImitationTrainer(class ULearningAgentsManager* InManager, class ULearningAgentsInteractor* InInteractor, class ULearningAgentsPolicy* InPolicy, class UClass* Class); // [0xb79de94] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LearningAgentsTraining.LearningAgentsImitationTrainer.IterateTraining
	// void IterateTraining();                                                                                                  // [0xb79b3b4] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgentsTraining.LearningAgentsImitationTrainer.IsTraining
	// bool IsTraining();                                                                                                       // [0xb79b39c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LearningAgentsTraining.LearningAgentsImitationTrainer.HasTrainingFailed
	// bool HasTrainingFailed();                                                                                                // [0xb79b198] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LearningAgentsTraining.LearningAgentsImitationTrainer.EndTraining
	// void EndTraining();                                                                                                      // [0xb79aa2c] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgentsTraining.LearningAgentsImitationTrainer.BeginTraining
	// void BeginTraining(class ULearningAgentsRecording* Recording, FLearningAgentsImitationTrainerSettings& ImitationTrainerSettings, FLearningAgentsImitationTrainerTrainingSettings& ImitationTrainerTrainingSettings, FLearningAgentsTrainerPathSettings& ImitationTrainerPathSettings); // [0xb79a624] Final|Native|Public|HasOutParms|BlueprintCallable 
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
	// void SetupRecorder(class ULearningAgentsManager* InManager, class ULearningAgentsInteractor* InInteractor, FLearningAgentsRecorderPathSettings& RecorderPathSettings, class ULearningAgentsRecording* RecordingAsset, bool bReinitializeRecording); // [0xb7a3930] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgentsTraining.LearningAgentsRecorder.MakeRecorder
	// class ULearningAgentsRecorder* MakeRecorder(class ULearningAgentsManager* InManager, class ULearningAgentsInteractor* InInteractor, class UClass* Class, FName Name, FLearningAgentsRecorderPathSettings& RecorderPathSettings, class ULearningAgentsRecording* RecordingAsset, bool bReinitializeRecording); // [0xb79e0c8] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgentsTraining.LearningAgentsRecorder.IsRecording
	// bool IsRecording();                                                                                                      // [0xb79b39c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LearningAgentsTraining.LearningAgentsRecorder.GetRecordingAsset
	// class ULearningAgentsRecording* GetRecordingAsset();                                                                     // [0xb79b174] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LearningAgentsTraining.LearningAgentsRecorder.EndRecordingAndDiscard
	// void EndRecordingAndDiscard();                                                                                           // [0xb79aa18] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgentsTraining.LearningAgentsRecorder.EndRecording
	// void EndRecording();                                                                                                     // [0xb79aa04] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgentsTraining.LearningAgentsRecorder.BeginRecording
	// void BeginRecording();                                                                                                   // [0xb79a610] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgentsTraining.LearningAgentsRecorder.AddExperience
	// void AddExperience();                                                                                                    // [0xb79a3e4] Final|Native|Public|BlueprintCallable 
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
	// void SaveRecordingToFile(FFilePath& File);                                                                               // [0xb7a37c4] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/LearningAgentsTraining.LearningAgentsRecording.SaveRecordingToAsset
	// void SaveRecordingToAsset(class ULearningAgentsRecording* RecordingAsset);                                               // [0xb7a3744] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgentsTraining.LearningAgentsRecording.ResetRecording
	// void ResetRecording();                                                                                                   // [0xb7a3588] Final|Native|Public  
	// Function /Script/LearningAgentsTraining.LearningAgentsRecording.LoadRecordingFromFile
	// void LoadRecordingFromFile(FFilePath& File);                                                                             // [0xb79b448] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgentsTraining.LearningAgentsRecording.LoadRecordingFromAsset
	// void LoadRecordingFromAsset(class ULearningAgentsRecording* RecordingAsset);                                             // [0xb79b3c8] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgentsTraining.LearningAgentsRecording.GetRecordStepNum
	// int32_t GetRecordStepNum(int32_t Record);                                                                                // [0xb79b0e8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LearningAgentsTraining.LearningAgentsRecording.GetRecordNum
	// int32_t GetRecordNum();                                                                                                  // [0x69876fc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LearningAgentsTraining.LearningAgentsRecording.GetObservationVector
	// void GetObservationVector(TArray<float>& OutObservationVector, int32_t& OutObservationCompatibilityHash, int32_t Record, int32_t Step); // [0xb79ad94] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgentsTraining.LearningAgentsRecording.GetActionVector
	// void GetActionVector(TArray<float>& OutActionVector, int32_t& OutActionCompatibilityHash, int32_t Record, int32_t Step); // [0xb79aa40] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgentsTraining.LearningAgentsRecording.AppendRecordingToAsset
	// void AppendRecordingToAsset(class ULearningAgentsRecording* RecordingAsset);                                             // [0xb79a590] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgentsTraining.LearningAgentsRecording.AppendRecordingFromFile
	// void AppendRecordingFromFile(FFilePath& File);                                                                           // [0xb79a3f8] Final|Native|Public|HasOutParms|BlueprintCallable 
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
	// float MakeRewardOnLocationDifferenceBelowThreshold(FVector LocationA, FVector LocationB, float DistanceThreshold, float RewardScale, FName tag, bool bVisualLoggerEnabled, class ULearningAgentsManagerListener* VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // [0xb7a2ccc] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgentsTraining.LearningAgentsRewards.MakeRewardOnLocationDifferenceAboveThreshold
	// float MakeRewardOnLocationDifferenceAboveThreshold(FVector LocationA, FVector LocationB, float DistanceThreshold, float RewardScale, FName tag, bool bVisualLoggerEnabled, class ULearningAgentsManagerListener* VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // [0xb7a2410] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgentsTraining.LearningAgentsRewards.MakeRewardOnCondition
	// float MakeRewardOnCondition(bool bCondition, float RewardScale, FName tag, bool bVisualLoggerEnabled, class ULearningAgentsManagerListener* VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // [0xb7a20dc] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgentsTraining.LearningAgentsRewards.MakeRewardFromVelocityAlongSpline
	// float MakeRewardFromVelocityAlongSpline(class USplineComponent* SplineComponent, FVector Location, FVector Velocity, float VelocityScale, float RewardScale, float FiniteDifferenceDelta, FName tag, bool bVisualLoggerEnabled, class ULearningAgentsManagerListener* VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // [0xb7a1428] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgentsTraining.LearningAgentsRewards.MakeRewardFromRotationSimilarityAsQuats
	// float MakeRewardFromRotationSimilarityAsQuats(FQuat RotationA, FQuat RotationB, float RewardScale, FName tag, bool bVisualLoggerEnabled, class ULearningAgentsManagerListener* VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerRotationLocationA, FVector VisualLoggerRotationLocationB, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // [0xb7a0a64] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgentsTraining.LearningAgentsRewards.MakeRewardFromRotationSimilarity
	// float MakeRewardFromRotationSimilarity(FRotator RotationA, FRotator RotationB, float RewardScale, FName tag, bool bVisualLoggerEnabled, class ULearningAgentsManagerListener* VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerRotationLocationA, FVector VisualLoggerRotationLocationB, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // [0xb7a0094] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgentsTraining.LearningAgentsRewards.MakeRewardFromLocationSimilarity
	// float MakeRewardFromLocationSimilarity(FVector LocationA, FVector LocationB, float LocationScale, float RewardScale, FName tag, bool bVisualLoggerEnabled, class ULearningAgentsManagerListener* VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // [0xb79f7b8] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgentsTraining.LearningAgentsRewards.MakeRewardFromDirectionSimilarity
	// float MakeRewardFromDirectionSimilarity(FVector DirectionA, FVector DirectionB, float RewardScale, FName tag, bool bVisualLoggerEnabled, class ULearningAgentsManagerListener* VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerDirectionLocationA, FVector VisualLoggerDirectionLocationB, FVector VisualLoggerLocation, float VisualLoggerArrowLength, FLinearColor VisualLoggerColor); // [0xb79ed1c] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgentsTraining.LearningAgentsRewards.MakeRewardFromAngleSimilarity
	// float MakeRewardFromAngleSimilarity(float AngleA, float AngleB, float RewardScale, FName tag, bool bVisualLoggerEnabled, class ULearningAgentsManagerListener* VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerAngleLocationA, FVector VisualLoggerAngleLocationB, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // [0xb79e814] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/LearningAgentsTraining.LearningAgentsRewards.MakeReward
	// float MakeReward(float RewardValue, float RewardScale, FName tag, bool bVisualLoggerEnabled, class ULearningAgentsManagerListener* VisualLoggerListener, int32_t VisualLoggerAgentId, FVector VisualLoggerLocation, FLinearColor VisualLoggerColor); // [0xb79e504] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
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
	// void SetupTrainer(class ULearningAgentsManager* InManager, class ULearningAgentsInteractor* InInteractor, class ULearningAgentsPolicy* InPolicy, class ULearningAgentsCritic* InCritic, FLearningAgentsTrainerSettings& TrainerSettings); // [0xb7b5924] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgentsTraining.LearningAgentsTrainer.RunTraining
	// void RunTraining(FLearningAgentsTrainerTrainingSettings& TrainerTrainingSettings, FLearningAgentsTrainerGameSettings& TrainerGameSettings, FLearningAgentsTrainerPathSettings& TrainerPathSettings, bool bResetAgentsOnBegin, bool bResetAgentsOnUpdate); // [0xb7b55ec] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgentsTraining.LearningAgentsTrainer.ResetAgentEpisodes
	// void ResetAgentEpisodes(TArray<int32_t>& AgentIds);                                                                      // [0x9864cd8] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/LearningAgentsTraining.LearningAgentsTrainer.ResetAgentEpisode
	// void ResetAgentEpisode(int32_t AgentId);                                                                                 // [0xa927750] Native|Event|Public|BlueprintEvent 
	// Function /Script/LearningAgentsTraining.LearningAgentsTrainer.ProcessExperience
	// void ProcessExperience(bool bResetAgentsOnUpdate);                                                                       // [0xb7b556c] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgentsTraining.LearningAgentsTrainer.MakeTrainer
	// class ULearningAgentsTrainer* MakeTrainer(class ULearningAgentsManager* InManager, class ULearningAgentsInteractor* InInteractor, class ULearningAgentsPolicy* InPolicy, class ULearningAgentsCritic* InCritic, class UClass* Class, FName Name, FLearningAgentsTrainerSettings& TrainerSettings); // [0xb7b5270] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgentsTraining.LearningAgentsTrainer.IsTraining
	// bool IsTraining();                                                                                                       // [0x81ea0ec] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LearningAgentsTraining.LearningAgentsTrainer.HasTrainingFailed
	// bool HasTrainingFailed();                                                                                                // [0xa4f5f20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LearningAgentsTraining.LearningAgentsTrainer.HasReward
	// bool HasReward(int32_t AgentId);                                                                                         // [0xb7b51e4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LearningAgentsTraining.LearningAgentsTrainer.HasCompletion
	// bool HasCompletion(int32_t AgentId);                                                                                     // [0xb7b5158] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LearningAgentsTraining.LearningAgentsTrainer.GetReward
	// float GetReward(int32_t AgentId);                                                                                        // [0xb7b50c8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LearningAgentsTraining.LearningAgentsTrainer.GetEpisodeTime
	// float GetEpisodeTime(int32_t AgentId);                                                                                   // [0xb7b5038] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LearningAgentsTraining.LearningAgentsTrainer.GetEpisodeStepNum
	// int32_t GetEpisodeStepNum(int32_t AgentId);                                                                              // [0xb7b4fac] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LearningAgentsTraining.LearningAgentsTrainer.GetCompletion
	// ELearningAgentsCompletion GetCompletion(int32_t AgentId);                                                                // [0xb7b4f20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LearningAgentsTraining.LearningAgentsTrainer.GatherRewards
	// void GatherRewards();                                                                                                    // [0xb7b4f0c] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgentsTraining.LearningAgentsTrainer.GatherCompletions
	// void GatherCompletions();                                                                                                // [0xb7b4ef8] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgentsTraining.LearningAgentsTrainer.GatherAgentRewards
	// void GatherAgentRewards(TArray<float>& OutRewards, TArray<int32_t>& AgentIds);                                           // [0xb7b4da4] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/LearningAgentsTraining.LearningAgentsTrainer.GatherAgentReward
	// void GatherAgentReward(float& OutReward, int32_t AgentId);                                                               // [0xb7b4c90] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/LearningAgentsTraining.LearningAgentsTrainer.GatherAgentCompletions
	// void GatherAgentCompletions(TArray<ELearningAgentsCompletion>& OutCompletions, TArray<int32_t>& AgentIds);               // [0xb7b4aac] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/LearningAgentsTraining.LearningAgentsTrainer.GatherAgentCompletion
	// void GatherAgentCompletion(ELearningAgentsCompletion& OutCompletion, int32_t AgentId);                                   // [0xb7b4928] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/LearningAgentsTraining.LearningAgentsTrainer.EndTraining
	// void EndTraining();                                                                                                      // [0xb7b4914] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgentsTraining.LearningAgentsTrainer.BeginTraining
	// void BeginTraining(FLearningAgentsTrainerTrainingSettings& TrainerTrainingSettings, FLearningAgentsTrainerGameSettings& TrainerGameSettings, FLearningAgentsTrainerPathSettings& TrainerPathSettings, bool bResetAgentsOnBegin); // [0xb7b46cc] Final|Native|Public|HasOutParms|BlueprintCallable 
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

