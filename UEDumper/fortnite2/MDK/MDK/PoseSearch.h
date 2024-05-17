
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: BlendStack
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: StructUtils

/// Class /Script/PoseSearch.MotionMatchingAnimNodeLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UMotionMatchingAnimNodeLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/PoseSearch.MotionMatchingAnimNodeLibrary.SetInterruptMode
	// void SetInterruptMode(FMotionMatchingAnimNodeReference& MotionMatchingNode, EPoseSearchInterruptMode InterruptMode);     // [0x87158fc] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PoseSearch.MotionMatchingAnimNodeLibrary.SetDatabaseToSearch
	// void SetDatabaseToSearch(FMotionMatchingAnimNodeReference& MotionMatchingNode, class UPoseSearchDatabase* Database, EPoseSearchInterruptMode InterruptMode); // [0x87154c8] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PoseSearch.MotionMatchingAnimNodeLibrary.SetDatabasesToSearch
	// void SetDatabasesToSearch(FMotionMatchingAnimNodeReference& MotionMatchingNode, TArray<UPoseSearchDatabase*>& Databases, EPoseSearchInterruptMode InterruptMode); // [0x8715720] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PoseSearch.MotionMatchingAnimNodeLibrary.ResetDatabasesToSearch
	// void ResetDatabasesToSearch(FMotionMatchingAnimNodeReference& MotionMatchingNode, EPoseSearchInterruptMode InterruptMode); // [0x871534c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PoseSearch.MotionMatchingAnimNodeLibrary.GetMotionMatchingSearchResult
	// void GetMotionMatchingSearchResult(FMotionMatchingAnimNodeReference& MotionMatchingNode, FPoseSearchBlueprintResult& Result, bool& bIsResultValid); // [0x871518c] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/PoseSearch.MotionMatchingAnimNodeLibrary.ConvertToMotionMatchingNodePure
	// void ConvertToMotionMatchingNodePure(FAnimNodeReference& Node, FMotionMatchingAnimNodeReference& MotionMatchingNode, bool& Result); // [0x8714fb4] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/PoseSearch.MotionMatchingAnimNodeLibrary.ConvertToMotionMatchingNode
	// FMotionMatchingAnimNodeReference ConvertToMotionMatchingNode(FAnimNodeReference& Node, EAnimNodeReferenceConversionResult& Result); // [0x8714e88] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/PoseSearch.PoseSearchDatabase
/// Size: 0x0148 (0x000030 - 0x000178)
class UPoseSearchDatabase : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 376;

public:
	CMember(class UPoseSearchSchema*)                  Schema                                                      OFFSET(get<T>, {0x30, 8, 0, 0})
	DMember(float)                                     ContinuingPoseCostBias                                      OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(float)                                     BaseCostBias                                                OFFSET(get<float>, {0x3C, 4, 0, 0})
	DMember(float)                                     LoopingCostBias                                             OFFSET(get<float>, {0x40, 4, 0, 0})
	CMember(TArray<FInstancedStruct>)                  AnimationAssets                                             OFFSET(get<T>, {0x48, 16, 0, 0})
	CMember(TArray<FName>)                             Tags                                                        OFFSET(get<T>, {0x58, 16, 0, 0})
	CMember(EPoseSearchMode)                           PoseSearchMode                                              OFFSET(get<T>, {0x68, 4, 0, 0})
	DMember(int32_t)                                   KDTreeQueryNumNeighbors                                     OFFSET(get<int32_t>, {0x6C, 4, 0, 0})
	DMember(int32_t)                                   KDTreeQueryNumNeighborsWithDuplicates                       OFFSET(get<int32_t>, {0x70, 4, 0, 0})
};

/// Class /Script/PoseSearch.PoseSearchFeatureChannel
/// Size: 0x0018 (0x000028 - 0x000040)
class UPoseSearchFeatureChannel : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(int32_t)                                   ChannelDataOffset                                           OFFSET(get<int32_t>, {0x38, 4, 0, 0})
	DMember(int32_t)                                   ChannelCardinality                                          OFFSET(get<int32_t>, {0x3C, 4, 0, 0})
};

/// Class /Script/PoseSearch.PoseSearchFeatureChannel_FilterCrashingLegs
/// Size: 0x0048 (0x000040 - 0x000088)
class UPoseSearchFeatureChannel_FilterCrashingLegs : public UPoseSearchFeatureChannel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FBoneReference)                            LeftThigh                                                   OFFSET(getStruct<T>, {0x40, 12, 0, 0})
	SMember(FBoneReference)                            RightThigh                                                  OFFSET(getStruct<T>, {0x4C, 12, 0, 0})
	SMember(FBoneReference)                            LeftFoot                                                    OFFSET(getStruct<T>, {0x58, 12, 0, 0})
	SMember(FBoneReference)                            RightFoot                                                   OFFSET(getStruct<T>, {0x64, 12, 0, 0})
	SMember(FName)                                     SampleRole                                                  OFFSET(getStruct<T>, {0x70, 4, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x74, 4, 0, 0})
	DMember(int8_t)                                    LeftThighIdx                                                OFFSET(get<int8_t>, {0x78, 1, 0, 0})
	DMember(int8_t)                                    RightThighIdx                                               OFFSET(get<int8_t>, {0x79, 1, 0, 0})
	DMember(int8_t)                                    LeftFootIdx                                                 OFFSET(get<int8_t>, {0x7A, 1, 0, 0})
	DMember(int8_t)                                    RightFootIdx                                                OFFSET(get<int8_t>, {0x7B, 1, 0, 0})
	CMember(EInputQueryPose)                           InputQueryPose                                              OFFSET(get<T>, {0x7C, 1, 0, 0})
	DMember(float)                                     AllowedTolerance                                            OFFSET(get<float>, {0x80, 4, 0, 0})
};

/// Class /Script/PoseSearch.PoseSearchFeatureChannel_GroupBase
/// Size: 0x0008 (0x000040 - 0x000048)
class UPoseSearchFeatureChannel_GroupBase : public UPoseSearchFeatureChannel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FName)                                     SampleRole                                                  OFFSET(getStruct<T>, {0x40, 4, 0, 0})
};

/// Class /Script/PoseSearch.PoseSearchFeatureChannel_Group
/// Size: 0x0010 (0x000048 - 0x000058)
class UPoseSearchFeatureChannel_Group : public UPoseSearchFeatureChannel_GroupBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(TArray<class UPoseSearchFeatureChannel*>)  SubChannels                                                 OFFSET(get<T>, {0x48, 16, 0, 0})
};

/// Class /Script/PoseSearch.PoseSearchFeatureChannel_Heading
/// Size: 0x0038 (0x000040 - 0x000078)
class UPoseSearchFeatureChannel_Heading : public UPoseSearchFeatureChannel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	SMember(FBoneReference)                            bone                                                        OFFSET(getStruct<T>, {0x40, 12, 0, 0})
	SMember(FName)                                     SampleRole                                                  OFFSET(getStruct<T>, {0x4C, 4, 0, 0})
	SMember(FBoneReference)                            OriginBone                                                  OFFSET(getStruct<T>, {0x50, 12, 0, 0})
	SMember(FName)                                     OriginRole                                                  OFFSET(getStruct<T>, {0x5C, 4, 0, 0})
	DMember(int32_t)                                   SamplingAttributeId                                         OFFSET(get<int32_t>, {0x60, 4, 0, 0})
	DMember(float)                                     SampleTimeOffset                                            OFFSET(get<float>, {0x64, 4, 0, 0})
	DMember(float)                                     OriginTimeOffset                                            OFFSET(get<float>, {0x68, 4, 0, 0})
	CMember(EHeadingAxis)                              HeadingAxis                                                 OFFSET(get<T>, {0x6C, 1, 0, 0})
	DMember(int8_t)                                    SchemaBoneIdx                                               OFFSET(get<int8_t>, {0x6D, 1, 0, 0})
	DMember(int8_t)                                    SchemaOriginBoneIdx                                         OFFSET(get<int8_t>, {0x6E, 1, 0, 0})
	CMember(EInputQueryPose)                           InputQueryPose                                              OFFSET(get<T>, {0x6F, 1, 0, 0})
	CMember(EComponentStrippingVector)                 ComponentStripping                                          OFFSET(get<T>, {0x70, 1, 0, 0})
	CMember(EPermutationTimeType)                      PermutationTimeType                                         OFFSET(get<T>, {0x71, 1, 0, 0})


	/// Functions
	// Function /Script/PoseSearch.PoseSearchFeatureChannel_Heading.BP_GetWorldRotation
	// FQuat BP_GetWorldRotation(class UAnimInstance* AnimInstance);                                                            // [0x228deb8] Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
};

/// Class /Script/PoseSearch.PoseSearchFeatureChannel_Padding
/// Size: 0x0008 (0x000040 - 0x000048)
class UPoseSearchFeatureChannel_Padding : public UPoseSearchFeatureChannel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	DMember(int32_t)                                   PaddingSize                                                 OFFSET(get<int32_t>, {0x40, 4, 0, 0})
};

/// Class /Script/PoseSearch.PoseSearchFeatureChannel_PermutationTime
/// Size: 0x0000 (0x000040 - 0x000040)
class UPoseSearchFeatureChannel_PermutationTime : public UPoseSearchFeatureChannel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Script/PoseSearch.PoseSearchFeatureChannel_Phase
/// Size: 0x0018 (0x000040 - 0x000058)
class UPoseSearchFeatureChannel_Phase : public UPoseSearchFeatureChannel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FBoneReference)                            bone                                                        OFFSET(getStruct<T>, {0x40, 12, 0, 0})
	SMember(FName)                                     SampleRole                                                  OFFSET(getStruct<T>, {0x4C, 4, 0, 0})
	DMember(int8_t)                                    SchemaBoneIdx                                               OFFSET(get<int8_t>, {0x50, 1, 0, 0})
	CMember(EInputQueryPose)                           InputQueryPose                                              OFFSET(get<T>, {0x51, 1, 0, 0})
};

/// Class /Script/PoseSearch.PoseSearchFeatureChannel_Pose
/// Size: 0x0038 (0x000048 - 0x000080)
class UPoseSearchFeatureChannel_Pose : public UPoseSearchFeatureChannel_GroupBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(TArray<FPoseSearchBone>)                   SampledBones                                                OFFSET(get<T>, {0x48, 16, 0, 0})
	CMember(TArray<int8_t>)                            SchemaBoneIdx                                               OFFSET(get<T>, {0x58, 16, 0, 0})
	CMember(EInputQueryPose)                           InputQueryPose                                              OFFSET(get<T>, {0x68, 1, 0, 0})
	DMember(bool)                                      bUseCharacterSpaceVelocities                                OFFSET(get<bool>, {0x69, 1, 0, 0})
	CMember(TArray<class UPoseSearchFeatureChannel*>)  SubChannels                                                 OFFSET(get<T>, {0x70, 16, 0, 0})
};

/// Class /Script/PoseSearch.PoseSearchFeatureChannel_Position
/// Size: 0x0038 (0x000040 - 0x000078)
class UPoseSearchFeatureChannel_Position : public UPoseSearchFeatureChannel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	SMember(FBoneReference)                            bone                                                        OFFSET(getStruct<T>, {0x40, 12, 0, 0})
	SMember(FName)                                     SampleRole                                                  OFFSET(getStruct<T>, {0x4C, 4, 0, 0})
	SMember(FBoneReference)                            OriginBone                                                  OFFSET(getStruct<T>, {0x50, 12, 0, 0})
	SMember(FName)                                     OriginRole                                                  OFFSET(getStruct<T>, {0x5C, 4, 0, 0})
	DMember(int32_t)                                   SamplingAttributeId                                         OFFSET(get<int32_t>, {0x60, 4, 0, 0})
	DMember(float)                                     SampleTimeOffset                                            OFFSET(get<float>, {0x64, 4, 0, 0})
	DMember(float)                                     OriginTimeOffset                                            OFFSET(get<float>, {0x68, 4, 0, 0})
	DMember(int8_t)                                    SchemaBoneIdx                                               OFFSET(get<int8_t>, {0x6C, 1, 0, 0})
	DMember(int8_t)                                    SchemaOriginBoneIdx                                         OFFSET(get<int8_t>, {0x6D, 1, 0, 0})
	CMember(EInputQueryPose)                           InputQueryPose                                              OFFSET(get<T>, {0x6E, 1, 0, 0})
	CMember(EComponentStrippingVector)                 ComponentStripping                                          OFFSET(get<T>, {0x6F, 1, 0, 0})
	CMember(EPermutationTimeType)                      PermutationTimeType                                         OFFSET(get<T>, {0x70, 1, 0, 0})


	/// Functions
	// Function /Script/PoseSearch.PoseSearchFeatureChannel_Position.BP_GetWorldPosition
	// FVector BP_GetWorldPosition(class UAnimInstance* AnimInstance);                                                          // [0x228deb8] Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
};

/// Class /Script/PoseSearch.PoseSearchFeatureChannel_SamplingTime
/// Size: 0x0008 (0x000040 - 0x000048)
class UPoseSearchFeatureChannel_SamplingTime : public UPoseSearchFeatureChannel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x40, 4, 0, 0})
	DMember(float)                                     TimeToMatch                                                 OFFSET(get<float>, {0x44, 4, 0, 0})
};

/// Class /Script/PoseSearch.PoseSearchFeatureChannel_TimeToEvent
/// Size: 0x0010 (0x000040 - 0x000050)
class UPoseSearchFeatureChannel_TimeToEvent : public UPoseSearchFeatureChannel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x40, 4, 0, 0})
	DMember(int32_t)                                   SamplingAttributeId                                         OFFSET(get<int32_t>, {0x44, 4, 0, 0})


	/// Functions
	// Function /Script/PoseSearch.PoseSearchFeatureChannel_TimeToEvent.BP_GetTimeToEvent
	// float BP_GetTimeToEvent(class UAnimInstance* AnimInstance);                                                              // [0x228deb8] Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
};

/// Class /Script/PoseSearch.PoseSearchFeatureChannel_Trajectory
/// Size: 0x0020 (0x000048 - 0x000068)
class UPoseSearchFeatureChannel_Trajectory : public UPoseSearchFeatureChannel_GroupBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	CMember(TArray<FPoseSearchTrajectorySample>)       Samples                                                     OFFSET(get<T>, {0x48, 16, 0, 0})
	CMember(TArray<class UPoseSearchFeatureChannel*>)  SubChannels                                                 OFFSET(get<T>, {0x58, 16, 0, 0})
};

/// Class /Script/PoseSearch.PoseSearchFeatureChannel_Velocity
/// Size: 0x0038 (0x000040 - 0x000078)
class UPoseSearchFeatureChannel_Velocity : public UPoseSearchFeatureChannel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	SMember(FBoneReference)                            bone                                                        OFFSET(getStruct<T>, {0x40, 12, 0, 0})
	SMember(FName)                                     SampleRole                                                  OFFSET(getStruct<T>, {0x4C, 4, 0, 0})
	SMember(FBoneReference)                            OriginBone                                                  OFFSET(getStruct<T>, {0x50, 12, 0, 0})
	SMember(FName)                                     OriginRole                                                  OFFSET(getStruct<T>, {0x5C, 4, 0, 0})
	DMember(int32_t)                                   SamplingAttributeId                                         OFFSET(get<int32_t>, {0x60, 4, 0, 0})
	DMember(float)                                     SampleTimeOffset                                            OFFSET(get<float>, {0x64, 4, 0, 0})
	DMember(float)                                     OriginTimeOffset                                            OFFSET(get<float>, {0x68, 4, 0, 0})
	DMember(int8_t)                                    SchemaBoneIdx                                               OFFSET(get<int8_t>, {0x6C, 1, 0, 0})
	DMember(int8_t)                                    SchemaOriginBoneIdx                                         OFFSET(get<int8_t>, {0x6D, 1, 0, 0})
	CMember(EInputQueryPose)                           InputQueryPose                                              OFFSET(get<T>, {0x6E, 1, 0, 0})
	DMember(bool)                                      bUseCharacterSpaceVelocities                                OFFSET(get<bool>, {0x6F, 1, 0, 0})
	DMember(bool)                                      bNormalize                                                  OFFSET(get<bool>, {0x70, 1, 0, 0})
	CMember(EComponentStrippingVector)                 ComponentStripping                                          OFFSET(get<T>, {0x71, 1, 0, 0})
	CMember(EPermutationTimeType)                      PermutationTimeType                                         OFFSET(get<T>, {0x72, 1, 0, 0})


	/// Functions
	// Function /Script/PoseSearch.PoseSearchFeatureChannel_Velocity.BP_GetWorldVelocity
	// FVector BP_GetWorldVelocity(class UAnimInstance* AnimInstance);                                                          // [0x228deb8] Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
};

/// Class /Script/PoseSearch.PoseSearchHistoryCollectorAnimNodeLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UPoseSearchHistoryCollectorAnimNodeLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/PoseSearch.PoseSearchHistoryCollectorAnimNodeLibrary.SetPoseHistoryNodeTrajectory
	// void SetPoseHistoryNodeTrajectory(FPoseSearchHistoryCollectorAnimNodeReference& PoseSearchHistoryCollectorNode, FPoseSearchQueryTrajectory& Trajectory); // [0x871b4e8] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PoseSearch.PoseSearchHistoryCollectorAnimNodeLibrary.GetPoseHistoryNodeTrajectory
	// void GetPoseHistoryNodeTrajectory(FPoseSearchHistoryCollectorAnimNodeReference& PoseSearchHistoryCollectorNode, FPoseSearchQueryTrajectory& Trajectory); // [0x8719e24] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/PoseSearch.PoseSearchHistoryCollectorAnimNodeLibrary.ConvertToPoseHistoryNodePure
	// void ConvertToPoseHistoryNodePure(FAnimNodeReference& Node, FPoseSearchHistoryCollectorAnimNodeReference& PoseSearchHistoryCollectorNode, bool& Result); // [0x8719c4c] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/PoseSearch.PoseSearchHistoryCollectorAnimNodeLibrary.ConvertToPoseHistoryNode
	// FPoseSearchHistoryCollectorAnimNodeReference ConvertToPoseHistoryNode(FAnimNodeReference& Node, EAnimNodeReferenceConversionResult& Result); // [0x8719b20] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/PoseSearch.PoseSearchMultiSequence
/// Size: 0x0010 (0x000030 - 0x000040)
class UPoseSearchMultiSequence : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(TArray<FPoseSearchMultiSequenceItem>)      Items                                                       OFFSET(get<T>, {0x30, 16, 0, 0})


	/// Functions
	// Function /Script/PoseSearch.PoseSearchMultiSequence.GetSequence
	// class UAnimSequenceBase* GetSequence(FName& Role);                                                                       // [0x8719f3c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/PoseSearch.PoseSearchNormalizationSet
/// Size: 0x0010 (0x000030 - 0x000040)
class UPoseSearchNormalizationSet : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(TArray<class UPoseSearchDatabase*>)        Databases                                                   OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Class /Script/PoseSearch.PoseSearchSchema
/// Size: 0x0050 (0x000030 - 0x000080)
class UPoseSearchSchema : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(class USkeleton*)                          Skeleton                                                    OFFSET(get<T>, {0x30, 8, 0, 0})
	DMember(int32_t)                                   SampleRate                                                  OFFSET(get<int32_t>, {0x38, 4, 0, 0})
	CMember(TArray<FPoseSearchRoledSkeleton>)          Skeletons                                                   OFFSET(get<T>, {0x40, 16, 0, 0})
	CMember(TArray<class UPoseSearchFeatureChannel*>)  Channels                                                    OFFSET(get<T>, {0x50, 16, 0, 0})
	CMember(TArray<class UPoseSearchFeatureChannel*>)  FinalizedChannels                                           OFFSET(get<T>, {0x60, 16, 0, 0})
	CMember(class UMirrorDataTable*)                   MirrorDataTable                                             OFFSET(get<T>, {0x70, 8, 0, 0})
	DMember(int32_t)                                   SchemaCardinality                                           OFFSET(get<int32_t>, {0x78, 4, 0, 0})
	DMember(bool)                                      bAddDataPadding                                             OFFSET(get<bool>, {0x7C, 1, 0, 0})
	DMember(bool)                                      bInjectAdditionalDebugChannels                              OFFSET(get<bool>, {0x7D, 1, 0, 0})
};

/// Class /Script/PoseSearch.PoseSearchTrajectoryLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UPoseSearchTrajectoryLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/PoseSearch.PoseSearchTrajectoryLibrary.PoseSearchGenerateTrajectory
	// void PoseSearchGenerateTrajectory(class UAnimInstance* InAnimInstance, FPoseSearchTrajectoryData& InTrajectoryData, float InDeltaTime, FPoseSearchQueryTrajectory& InOutTrajectory, float& InOutDesiredControllerYawLastUpdate, FPoseSearchQueryTrajectory& OutTrajectory, float InHistorySamplingInterval, int32_t InTrajectoryHistoryCount, float InPredictionSamplingInterval, int32_t InTrajectoryPredictionCount); // [0x871ade8] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PoseSearch.PoseSearchTrajectoryLibrary.HandleTrajectoryWorldCollisions
	// void HandleTrajectoryWorldCollisions(class UObject* WorldContextObject, class UAnimInstance* AnimInstance, FPoseSearchQueryTrajectory& InTrajectory, bool bApplyGravity, float FloorCollisionsOffset, FPoseSearchQueryTrajectory& OutTrajectory, FPoseSearchTrajectory_WorldCollisionResults& CollisionResult, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, TArray<AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool bIgnoreSelf, float MaxObstacleHeight, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime); // [0x871a2e8] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/PoseSearch.PoseSearchTrajectoryLibrary.GetTrajectorySampleAtTime
	// void GetTrajectorySampleAtTime(FPoseSearchQueryTrajectory& InTrajectory, float Time, FPoseSearchQueryTrajectorySample& OutTrajectorySample, bool bExtrapolate); // [0x8719fd4] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
};

/// Class /Script/PoseSearch.AnimNotifyState_PoseSearchBase
/// Size: 0x0000 (0x000030 - 0x000030)
class UAnimNotifyState_PoseSearchBase : public UAnimNotifyState
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/PoseSearch.AnimNotifyState_PoseSearchExcludeFromDatabase
/// Size: 0x0000 (0x000030 - 0x000030)
class UAnimNotifyState_PoseSearchExcludeFromDatabase : public UAnimNotifyState_PoseSearchBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/PoseSearch.AnimNotifyState_PoseSearchBlockTransition
/// Size: 0x0000 (0x000030 - 0x000030)
class UAnimNotifyState_PoseSearchBlockTransition : public UAnimNotifyState_PoseSearchBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/PoseSearch.AnimNotifyState_PoseSearchModifyCost
/// Size: 0x0008 (0x000030 - 0x000038)
class UAnimNotifyState_PoseSearchModifyCost : public UAnimNotifyState_PoseSearchBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(float)                                     CostAddend                                                  OFFSET(get<float>, {0x30, 4, 0, 0})
};

/// Class /Script/PoseSearch.AnimNotifyState_PoseSearchOverrideContinuingPoseCostBias
/// Size: 0x0008 (0x000030 - 0x000038)
class UAnimNotifyState_PoseSearchOverrideContinuingPoseCostBias : public UAnimNotifyState_PoseSearchBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(float)                                     CostAddend                                                  OFFSET(get<float>, {0x30, 4, 0, 0})
};

/// Class /Script/PoseSearch.AnimNotifyState_PoseSearchSamplingEvent
/// Size: 0x0000 (0x000030 - 0x000030)
class UAnimNotifyState_PoseSearchSamplingEvent : public UAnimNotifyState_PoseSearchBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/PoseSearch.AnimNotifyState_PoseSearchSamplingAttribute
/// Size: 0x0000 (0x000030 - 0x000030)
class UAnimNotifyState_PoseSearchSamplingAttribute : public UAnimNotifyState_PoseSearchSamplingEvent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/PoseSearch.AnimNotifyState_PoseSearchBranchIn
/// Size: 0x0008 (0x000030 - 0x000038)
class UAnimNotifyState_PoseSearchBranchIn : public UAnimNotifyState_PoseSearchBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(class UPoseSearchDatabase*)                Database                                                    OFFSET(get<T>, {0x30, 8, 0, 0})
};

/// Class /Script/PoseSearch.PoseSearchLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UPoseSearchLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/PoseSearch.PoseSearchLibrary.MotionMatchMulti
	// void MotionMatchMulti(TArray<ACharacter*> AnimInstances, TArray<FName> Roles, TArray<UObject*> AssetsToSearch, FName PoseHistoryName, FPoseSearchBlueprintResult& Result, int32_t DebugSessionUniqueIdentifier); // [0x8722f84] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/PoseSearch.PoseSearchLibrary.MotionMatch
	// void MotionMatch(class UAnimInstance* AnimInstance, TArray<UObject*> AssetsToSearch, FName PoseHistoryName, FPoseSearchFutureProperties Future, FPoseSearchBlueprintResult& Result, int32_t DebugSessionUniqueIdentifier); // [0x8722b68] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
};

/// Struct /Script/PoseSearch.MotionMatchingAnimNodeReference
/// Size: 0x0000 (0x000010 - 0x000010)
class FMotionMatchingAnimNodeReference : public FAnimNodeReference
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/PoseSearch.PoseSearchCost
/// Size: 0x0004 (0x000000 - 0x000004)
class FPoseSearchCost : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(float)                                     TotalCost                                                   OFFSET(get<float>, {0x0, 4, 0, 0})
};

/// Struct /Script/PoseSearch.PoseSearchDatabaseAnimationAssetBase
/// Size: 0x0008 (0x000000 - 0x000008)
class FPoseSearchDatabaseAnimationAssetBase : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/PoseSearch.PoseSearchDatabaseSequence
/// Size: 0x0008 (0x000008 - 0x000010)
class FPoseSearchDatabaseSequence : public FPoseSearchDatabaseAnimationAssetBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class UAnimSequence*)                      Sequence                                                    OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/PoseSearch.PoseSearchDatabaseBlendSpace
/// Size: 0x0008 (0x000008 - 0x000010)
class FPoseSearchDatabaseBlendSpace : public FPoseSearchDatabaseAnimationAssetBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class UBlendSpace*)                        BlendSpace                                                  OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/PoseSearch.PoseSearchDatabaseAnimComposite
/// Size: 0x0008 (0x000008 - 0x000010)
class FPoseSearchDatabaseAnimComposite : public FPoseSearchDatabaseAnimationAssetBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class UAnimComposite*)                     AnimComposite                                               OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/PoseSearch.PoseSearchDatabaseAnimMontage
/// Size: 0x0008 (0x000008 - 0x000010)
class FPoseSearchDatabaseAnimMontage : public FPoseSearchDatabaseAnimationAssetBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class UAnimMontage*)                       AnimMontage                                                 OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/PoseSearch.PoseSearchDatabaseMultiSequence
/// Size: 0x0008 (0x000008 - 0x000010)
class FPoseSearchDatabaseMultiSequence : public FPoseSearchDatabaseAnimationAssetBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class UPoseSearchMultiSequence*)           MultiSequence                                               OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/PoseSearch.PoseSearchBone
/// Size: 0x0010 (0x000000 - 0x000010)
class FPoseSearchBone : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FBoneReference)                            Reference                                                   OFFSET(getStruct<T>, {0x0, 12, 0, 0})
	DMember(int32_t)                                   Flags                                                       OFFSET(get<int32_t>, {0xC, 4, 0, 0})
};

/// Struct /Script/PoseSearch.PoseSearchTrajectorySample
/// Size: 0x0008 (0x000000 - 0x000008)
class FPoseSearchTrajectorySample : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(float)                                     Offset                                                      OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   Flags                                                       OFFSET(get<int32_t>, {0x4, 4, 0, 0})
};

/// Struct /Script/PoseSearch.PoseSearchHistoryCollectorAnimNodeReference
/// Size: 0x0000 (0x000010 - 0x000010)
class FPoseSearchHistoryCollectorAnimNodeReference : public FAnimNodeReference
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/PoseSearch.PoseSearchMultiSequenceItem
/// Size: 0x0070 (0x000000 - 0x000070)
class FPoseSearchMultiSequenceItem : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	CMember(class UAnimSequenceBase*)                  Sequence                                                    OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FName)                                     Role                                                        OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	SMember(FTransform)                                Origin                                                      OFFSET(getStruct<T>, {0x10, 96, 0, 0})
};

/// Struct /Script/PoseSearch.PoseSearchBlueprintResult
/// Size: 0x0040 (0x000000 - 0x000040)
class FPoseSearchBlueprintResult : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(class UObject*)                            SelectedAnimation                                           OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(float)                                     SelectedTime                                                OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     WantedPlayRate                                              OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(bool)                                      bLoop                                                       OFFSET(get<bool>, {0x10, 1, 0, 0})
	DMember(bool)                                      bIsMirrored                                                 OFFSET(get<bool>, {0x11, 1, 0, 0})
	SMember(FVector)                                   BlendParameters                                             OFFSET(getStruct<T>, {0x18, 24, 0, 0})
	CMember(TWeakObjectPtr<UPoseSearchDatabase*>)      SelectedDatabase                                            OFFSET(get<T>, {0x30, 8, 0, 0})
	DMember(float)                                     SearchCost                                                  OFFSET(get<float>, {0x38, 4, 0, 0})
};

/// Struct /Script/PoseSearch.PoseSearchRoledSkeleton
/// Size: 0x0038 (0x000000 - 0x000038)
class FPoseSearchRoledSkeleton : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(class USkeleton*)                          Skeleton                                                    OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class UMirrorDataTable*)                   MirrorDataTable                                             OFFSET(get<T>, {0x8, 8, 0, 0})
	SMember(FName)                                     Role                                                        OFFSET(getStruct<T>, {0x10, 4, 0, 0})
	CMember(TArray<FBoneReference>)                    BoneReferences                                              OFFSET(get<T>, {0x18, 16, 0, 0})
	CMember(TArray<uint16_t>)                          BoneIndicesWithParents                                      OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Struct /Script/PoseSearch.PoseSearchTrajectoryData
/// Size: 0x0128 (0x000000 - 0x000128)
class FPoseSearchTrajectoryData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
	DMember(float)                                     RotateTowardsMovementSpeed                                  OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     MaxControllerYawRate                                        OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     BendVelocityTowardsAcceleration                             OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(bool)                                      bUseSpeedRemappingCurve                                     OFFSET(get<bool>, {0xC, 1, 0, 0})
	SMember(FRuntimeFloatCurve)                        SpeedRemappingCurve                                         OFFSET(getStruct<T>, {0x10, 136, 0, 0})
	DMember(bool)                                      bUseAccelerationRemappingCurve                              OFFSET(get<bool>, {0x98, 1, 0, 0})
	SMember(FRuntimeFloatCurve)                        AccelerationRemappingCurve                                  OFFSET(getStruct<T>, {0xA0, 136, 0, 0})
};

/// Struct /Script/PoseSearch.PoseSearchTrajectory_WorldCollisionResults
/// Size: 0x0008 (0x000000 - 0x000008)
class FPoseSearchTrajectory_WorldCollisionResults : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(float)                                     TimeToLand                                                  OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     LandSpeed                                                   OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Struct /Script/PoseSearch.PoseSearchQueryTrajectorySample
/// Size: 0x0040 (0x000000 - 0x000040)
class FPoseSearchQueryTrajectorySample : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FQuat)                                     Facing                                                      OFFSET(getStruct<T>, {0x0, 32, 0, 0})
	SMember(FVector)                                   Position                                                    OFFSET(getStruct<T>, {0x20, 24, 0, 0})
	DMember(float)                                     AccumulatedSeconds                                          OFFSET(get<float>, {0x38, 4, 0, 0})
};

/// Struct /Script/PoseSearch.PoseSearchQueryTrajectory
/// Size: 0x0010 (0x000000 - 0x000010)
class FPoseSearchQueryTrajectory : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FPoseSearchQueryTrajectorySample>)  Samples                                                     OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/PoseSearch.AnimNode_MotionMatching
/// Size: 0x00E8 (0x0000B0 - 0x000198)
class FAnimNode_MotionMatching : public FAnimNode_BlendStack_Standalone
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 408;

public:
	CMember(class UPoseSearchDatabase*)                Database                                                    OFFSET(get<T>, {0xB0, 8, 0, 0})
	DMember(float)                                     BlendTime                                                   OFFSET(get<float>, {0xB8, 4, 0, 0})
	CMember(class UBlendProfile*)                      BlendProfile                                                OFFSET(get<T>, {0xC0, 8, 0, 0})
	CMember(EAlphaBlendOption)                         BlendOption                                                 OFFSET(get<T>, {0xC8, 1, 0, 0})
	SMember(FFloatInterval)                            PoseJumpThresholdTime                                       OFFSET(getStruct<T>, {0xCC, 8, 0, 0})
	DMember(float)                                     PoseReselectHistory                                         OFFSET(get<float>, {0xD4, 4, 0, 0})
	DMember(float)                                     SearchThrottleTime                                          OFFSET(get<float>, {0xD8, 4, 0, 0})
	SMember(FFloatInterval)                            PlayRate                                                    OFFSET(getStruct<T>, {0xDC, 8, 0, 0})
	DMember(bool)                                      bUseInertialBlend                                           OFFSET(get<bool>, {0xE4, 1, 0, 0})
	DMember(bool)                                      bResetOnBecomingRelevant                                    OFFSET(get<bool>, {0xE5, 1, 0, 0})
	DMember(bool)                                      bShouldSearch                                               OFFSET(get<bool>, {0xE6, 1, 0, 0})
	DMember(bool)                                      bShouldUseCachedChannelData                                 OFFSET(get<bool>, {0xE7, 1, 0, 0})
	CMember(TArray<class UPoseSearchDatabase*>)        DatabasesToSearch                                           OFFSET(get<T>, {0x180, 16, 0, 0})
};

/// Struct /Script/PoseSearch.AnimNode_PoseSearchHistoryCollector_Base
/// Size: 0x0288 (0x000010 - 0x000298)
class FAnimNode_PoseSearchHistoryCollector_Base : public FAnimNode_Base
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 664;

public:
	DMember(int32_t)                                   PoseCount                                                   OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	DMember(float)                                     SamplingInterval                                            OFFSET(get<float>, {0x14, 4, 0, 0})
	CMember(TArray<FBoneReference>)                    CollectedBones                                              OFFSET(get<T>, {0x18, 16, 0, 0})
	DMember(bool)                                      bInitializeWithRefPose                                      OFFSET(get<bool>, {0x28, 1, 0, 0})
	DMember(bool)                                      bResetOnBecomingRelevant                                    OFFSET(get<bool>, {0x29, 1, 0, 0})
	DMember(bool)                                      bStoreScales                                                OFFSET(get<bool>, {0x2A, 1, 0, 0})
	DMember(float)                                     RootBoneRecoveryTime                                        OFFSET(get<float>, {0x2C, 4, 0, 0})
	DMember(bool)                                      bGenerateTrajectory                                         OFFSET(get<bool>, {0x40, 1, 0, 0})
	SMember(FPoseSearchQueryTrajectory)                Trajectory                                                  OFFSET(getStruct<T>, {0x48, 16, 0, 0})
	DMember(float)                                     TrajectorySpeedMultiplier                                   OFFSET(get<float>, {0x58, 4, 0, 0})
	DMember(int32_t)                                   TrajectoryHistoryCount                                      OFFSET(get<int32_t>, {0x5C, 4, 0, 0})
	DMember(int32_t)                                   TrajectoryPredictionCount                                   OFFSET(get<int32_t>, {0x60, 4, 0, 0})
	DMember(float)                                     PredictionSamplingInterval                                  OFFSET(get<float>, {0x64, 4, 0, 0})
	SMember(FPoseSearchTrajectoryData)                 TrajectoryData                                              OFFSET(getStruct<T>, {0x68, 296, 0, 0})
};

/// Struct /Script/PoseSearch.AnimNode_PoseSearchHistoryCollector
/// Size: 0x0010 (0x000298 - 0x0002A8)
class FAnimNode_PoseSearchHistoryCollector : public FAnimNode_PoseSearchHistoryCollector_Base
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 680;

public:
	SMember(FPoseLink)                                 Source                                                      OFFSET(getStruct<T>, {0x298, 16, 0, 0})
};

/// Struct /Script/PoseSearch.AnimNode_PoseSearchComponentSpaceHistoryCollector
/// Size: 0x0010 (0x000298 - 0x0002A8)
class FAnimNode_PoseSearchComponentSpaceHistoryCollector : public FAnimNode_PoseSearchHistoryCollector_Base
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 680;

public:
	SMember(FComponentSpacePoseLink)                   Source                                                      OFFSET(getStruct<T>, {0x298, 16, 0, 0})
};

/// Struct /Script/PoseSearch.PoseSearchFutureProperties
/// Size: 0x0010 (0x000000 - 0x000010)
class FPoseSearchFutureProperties : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class UObject*)                            Animation                                                   OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(float)                                     AnimationTime                                               OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     IntervalTime                                                OFFSET(get<float>, {0xC, 4, 0, 0})
};

/// Enum /Script/PoseSearch.EPoseSearchMode
/// Size: 0x03
enum class EPoseSearchMode : uint32_t
{
	EPoseSearchMode__BruteForce                                                      = 0,
	EPoseSearchMode__PCAKDTree                                                       = 1,
	EPoseSearchMode__VPTree                                                          = 2
};

/// Enum /Script/PoseSearch.EPoseSearchMirrorOption
/// Size: 0x03
enum class EPoseSearchMirrorOption : uint8_t
{
	EPoseSearchMirrorOption__UnmirroredOnly                                          = 0,
	EPoseSearchMirrorOption__MirroredOnly                                            = 1,
	EPoseSearchMirrorOption__UnmirroredAndMirrored                                   = 2
};

/// Enum /Script/PoseSearch.EComponentStrippingVector
/// Size: 0x03
enum class EComponentStrippingVector : uint8_t
{
	EComponentStrippingVector__None                                                  = 0,
	EComponentStrippingVector__StripXY                                               = 1,
	EComponentStrippingVector__StripZ                                                = 2
};

/// Enum /Script/PoseSearch.EInputQueryPose
/// Size: 0x02
enum class EInputQueryPose : uint8_t
{
	EInputQueryPose__UseCharacterPose                                                = 0,
	EInputQueryPose__UseContinuingPose                                               = 1
};

/// Enum /Script/PoseSearch.EPermutationTimeType
/// Size: 0x03
enum class EPermutationTimeType : uint8_t
{
	EPermutationTimeType__UseSampleTime                                              = 0,
	EPermutationTimeType__UsePermutationTime                                         = 1,
	EPermutationTimeType__UseSampleToPermutationTime                                 = 2
};

/// Enum /Script/PoseSearch.EHeadingAxis
/// Size: 0x04
enum class EHeadingAxis : uint8_t
{
	EHeadingAxis__X                                                                  = 0,
	EHeadingAxis__Y                                                                  = 1,
	EHeadingAxis__Z                                                                  = 2,
	EHeadingAxis__Num                                                                = 3
};

/// Enum /Script/PoseSearch.EPoseSearchBoneFlags
/// Size: 0x04
enum class EPoseSearchBoneFlags : uint8_t
{
	EPoseSearchBoneFlags__Velocity                                                   = 1,
	EPoseSearchBoneFlags__Position                                                   = 2,
	EPoseSearchBoneFlags__Rotation                                                   = 4,
	EPoseSearchBoneFlags__Phase                                                      = 8
};

/// Enum /Script/PoseSearch.EPoseSearchTrajectoryFlags
/// Size: 0x08
enum class EPoseSearchTrajectoryFlags : uint8_t
{
	EPoseSearchTrajectoryFlags__Velocity                                             = 1,
	EPoseSearchTrajectoryFlags__Position                                             = 2,
	EPoseSearchTrajectoryFlags__VelocityDirection                                    = 4,
	EPoseSearchTrajectoryFlags__FacingDirection                                      = 8,
	EPoseSearchTrajectoryFlags__VelocityXY                                           = 16,
	EPoseSearchTrajectoryFlags__PositionXY                                           = 32,
	EPoseSearchTrajectoryFlags__VelocityDirectionXY                                  = 64,
	EPoseSearchTrajectoryFlags__FacingDirectionXY                                    = 128
};

/// Enum /Script/PoseSearch.EPoseSearchDataPreprocessor
/// Size: 0x04
enum class EPoseSearchDataPreprocessor : uint8_t
{
	EPoseSearchDataPreprocessor__None                                                = 0,
	EPoseSearchDataPreprocessor__Normalize                                           = 1,
	EPoseSearchDataPreprocessor__NormalizeOnlyByDeviation                            = 2,
	EPoseSearchDataPreprocessor__NormalizeWithCommonSchema                           = 3
};

/// Enum /Script/PoseSearch.EPoseSearchInterruptMode
/// Size: 0x05
enum class EPoseSearchInterruptMode : uint8_t
{
	EPoseSearchInterruptMode__DoNotInterrupt                                         = 0,
	EPoseSearchInterruptMode__InterruptOnDatabaseChange                              = 1,
	EPoseSearchInterruptMode__InterruptOnDatabaseChangeAndInvalidateContinuingPose   = 2,
	EPoseSearchInterruptMode__ForceInterrupt                                         = 3,
	EPoseSearchInterruptMode__ForceInterruptAndInvalidateContinuingPose              = 4
};

