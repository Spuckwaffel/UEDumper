
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CinematicCamera
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: GameplayTags
/// dependency: LevelSequence
/// dependency: MovieScene
/// dependency: UMG

/// Class /Script/SparksCameraDirectorRuntime.SparksCameraShotPool
/// Size: 0x0098 (0x000030 - 0x0000C8)
class USparksCameraShotPool : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	CMember(TArray<FSparksCameraShot>)                 Shots                                                       OFFSET(get<T>, {0x30, 16, 0, 0})
	DMember(bool)                                      bIgnoreShotTags                                             OFFSET(get<bool>, {0x40, 1, 0, 0})
	SMember(FGameplayTagContainer)                     PoolTags                                                    OFFSET(getStruct<T>, {0x48, 32, 0, 0})
	SMember(FSparksCameraFilter)                       PoolFilter                                                  OFFSET(getStruct<T>, {0x68, 96, 0, 0})
};

/// Class /Script/SparksCameraDirectorRuntime.SparksCameraDebugWidget
/// Size: 0x0000 (0x0002C0 - 0x0002C0)
class USparksCameraDebugWidget : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 704;

public:


	/// Functions
	// Function /Script/SparksCameraDirectorRuntime.SparksCameraDebugWidget.SetEventRouter
	// void SetEventRouter(class UGameplayEventRouterComponent* EventRouter);                                                   // [0x186becc] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/SparksCameraDirectorRuntime.SparksCameraDebugWidget.LogToScreen
	// void LogToScreen(FString Data, ESparksCameraLogType Type);                                                               // [0x186becc] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/SparksCameraDirectorRuntime.SparksCameraDebugWidget.ClearCurrent
	// void ClearCurrent();                                                                                                     // [0x186becc] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/SparksCameraDirectorRuntime.SparksCameraDebugWidget.ClearAll
	// void ClearAll();                                                                                                         // [0x186becc] Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/SparksCameraDirectorRuntime.SparksCameraDirectorComponent
/// Size: 0x01E0 (0x0000A0 - 0x000280)
class USparksCameraDirectorComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 640;

public:
	CMember(class USparksCameraDirectorConfig*)        MainConfig                                                  OFFSET(get<T>, {0xA0, 8, 0, 0})
	CMember(class USparksCameraDirectorConfig*)        QAConfig                                                    OFFSET(get<T>, {0xA8, 8, 0, 0})
	CMember(class USparksCameraDirectorConfig*)        PerfConfig                                                  OFFSET(get<T>, {0xB0, 8, 0, 0})
	CMember(TArray<class USparksCameraDirectorConfig*>) CustomConfig                                               OFFSET(get<T>, {0xB8, 16, 0, 0})
	CMember(class USparksCameraDirectorConfig*)        Config                                                      OFFSET(get<T>, {0xC8, 8, 0, 0})
	DMember(float)                                     MinShotTimeSeconds                                          OFFSET(get<float>, {0xD8, 4, 0, 0})
	CMember(TArray<FSparksCameraDirectorSequence>)     Sequences                                                   OFFSET(get<T>, {0xE0, 16, 0, 0})
	CMember(class USparksPerformanceMap*)              PerformanceMap                                              OFFSET(get<T>, {0xF0, 8, 0, 0})
	CMember(class USparksCameraDebugWidget*)           DebugWidget                                                 OFFSET(get<T>, {0xF8, 8, 0, 0})
	SMember(FGameplayTagContainer)                     IntermissionTags                                            OFFSET(getStruct<T>, {0x100, 32, 0, 0})
	CMember(class ALevelSequenceActor*)                SequenceActor                                               OFFSET(get<T>, {0x120, 8, 0, 0})
	CMember(class USparksLevelSequencePlayer*)         SequencePlayer                                              OFFSET(get<T>, {0x128, 8, 0, 0})
	DMember(bool)                                      bCamerasAreActive                                           OFFSET(get<bool>, {0x130, 1, 0, 0})
	DMember(bool)                                      bCamerasAreLocked                                           OFFSET(get<bool>, {0x131, 1, 0, 0})
	CMember(TWeakObjectPtr<USparksCameraPluginDataProvider*>) DataProvider                                         OFFSET(get<T>, {0x134, 8, 0, 0})
	DMember(int32_t)                                   DebugTargetIndex                                            OFFSET(get<int32_t>, {0x13C, 4, 0, 0})
	DMember(int32_t)                                   CurrentSequenceIndex                                        OFFSET(get<int32_t>, {0x140, 4, 0, 0})
	DMember(int32_t)                                   CurrentSequenceEntryIndex                                   OFFSET(get<int32_t>, {0x144, 4, 0, 0})
	DMember(bool)                                      bHasActiveDynamicEvent                                      OFFSET(get<bool>, {0x148, 1, 0, 0})
	SMember(FSparksCommonDynamicCameraDirectorEvent)   DynamicEvent                                                OFFSET(getStruct<T>, {0x150, 56, 0, 0})
	SMember(FSparksCameraDirectorSequenceEntry)        CurrentPlayingEntry                                         OFFSET(getStruct<T>, {0x1A0, 128, 0, 0})
	SMember(FSparksCameraDirectorSequence)             IntermissionSequence                                        OFFSET(getStruct<T>, {0x220, 40, 0, 0})
	DMember(int32_t)                                   CurrentIntermissionSequenceEntryIndex                       OFFSET(get<int32_t>, {0x248, 4, 0, 0})
	SMember(FGameplayTagContainer)                     LastKnownIntermissionTags                                   OFFSET(getStruct<T>, {0x250, 32, 0, 0})
	DMember(bool)                                      bForceCameraViewTargetEnabled                               OFFSET(get<bool>, {0x270, 1, 0, 0})
	DMember(int32_t)                                   EvalStartIndex                                              OFFSET(get<int32_t>, {0x274, 4, 0, 0})
	DMember(int32_t)                                   EvalEndIndex                                                OFFSET(get<int32_t>, {0x278, 4, 0, 0})


	/// Functions
	// Function /Script/SparksCameraDirectorRuntime.SparksCameraDirectorComponent.StartIntermissionCameras
	// void StartIntermissionCameras(float ForceLengthMS, bool bForceReloadNewSequence, bool bForceShotChange);                 // [0xb2696a4] Final|Native|Public  
	// Function /Script/SparksCameraDirectorRuntime.SparksCameraDirectorComponent.Reset
	// void Reset(bool bForceShotChange);                                                                                       // [0xb268b8c] Final|Native|Public|BlueprintCallable 
	// Function /Script/SparksCameraDirectorRuntime.SparksCameraDirectorComponent.ReplaceWithNonCloseupShot
	// void ReplaceWithNonCloseupShot(FSparksCameraDirectorSequenceEntry& OldEntry);                                            // [0xb268a84] Final|Native|Protected|HasOutParms 
	// Function /Script/SparksCameraDirectorRuntime.SparksCameraDirectorComponent.PlayShot
	// float PlayShot(FSparksCameraDirectorSequenceEntry& Entry);                                                               // [0xb268964] Final|Native|Protected|HasOutParms 
	// Function /Script/SparksCameraDirectorRuntime.SparksCameraDirectorComponent.PlaySequenceEntry
	// void PlaySequenceEntry(FSparksCameraDirectorSequenceEntry& Entry, float MsOffset, bool bIntermission, class AActor* ForceTarget); // [0xb2685b0] Final|Native|Protected|HasOutParms 
	// Function /Script/SparksCameraDirectorRuntime.SparksCameraDirectorComponent.PlayNextShot
	// void PlayNextShot();                                                                                                     // [0xb26859c] Final|Native|Protected 
	// Function /Script/SparksCameraDirectorRuntime.SparksCameraDirectorComponent.OnShotFinished
	// void OnShotFinished();                                                                                                   // [0xb268588] Final|Native|Protected 
	// Function /Script/SparksCameraDirectorRuntime.SparksCameraDirectorComponent.LogToScreen
	// void LogToScreen(FString Data, ESparksCameraLogType Type, float TimeSeconds);                                            // [0xb267d0c] Final|Native|Protected 
	// Function /Script/SparksCameraDirectorRuntime.SparksCameraDirectorComponent.InsertSequence
	// void InsertSequence(FSparksCameraDirectorSequence& Sequence);                                                            // [0xb267a08] Final|Native|Protected|HasOutParms|BlueprintCallable 
	// Function /Script/SparksCameraDirectorRuntime.SparksCameraDirectorComponent.InsertPerformanceMap
	// void InsertPerformanceMap(class USparksPerformanceMap* Map);                                                             // [0xb267948] Final|Native|Public|BlueprintCallable 
	// Function /Script/SparksCameraDirectorRuntime.SparksCameraDirectorComponent.InitDynamicCameras
	// void InitDynamicCameras();                                                                                               // [0xb267934] Final|Native|Protected 
	// Function /Script/SparksCameraDirectorRuntime.SparksCameraDirectorComponent.HandleIntermissionTagsEvent
	// void HandleIntermissionTagsEvent(FSparksCommonIntermissionCameraDirectorEvent& Payload);                                 // [0xb267600] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SparksCameraDirectorRuntime.SparksCameraDirectorComponent.HandleForceIntermissionEvent
	// void HandleForceIntermissionEvent(FSparksCommonForceIntermissionCameraDirectorEvent& Payload);                           // [0xb267548] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SparksCameraDirectorRuntime.SparksCameraDirectorComponent.HandleDirectorDynamicEvent
	// void HandleDirectorDynamicEvent(FSparksCommonDynamicCameraDirectorEvent& Payload);                                       // [0xb267470] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SparksCameraDirectorRuntime.SparksCameraDirectorComponent.GetCameraActive
	// bool GetCameraActive();                                                                                                  // [0xa734e18] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksCameraDirectorRuntime.SparksCameraDirectorComponent.FindCurrentShot
	// bool FindCurrentShot(int32_t& SequenceIndex, int32_t& EntryIndex);                                                       // [0xb265078] Final|Native|Protected|HasOutParms 
	// Function /Script/SparksCameraDirectorRuntime.SparksCameraDirectorComponent.DebugLockSpecificCameraShot
	// void DebugLockSpecificCameraShot(FSparksCameraShot Shot, bool bLockToFirstFrame, class AActor* Target);                  // [0xb264da0] Net|NetReliableNative|Event|NetMulticast|Protected|BlueprintCallable 
	// Function /Script/SparksCameraDirectorRuntime.SparksCameraDirectorComponent.ActivateCameraControl
	// void ActivateCameraControl(bool bActive);                                                                                // [0xb264664] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/SparksCameraDirectorRuntime.SparksCameraDirectorConfig
/// Size: 0x0148 (0x000030 - 0x000178)
class USparksCameraDirectorConfig : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 376;

public:
	DMember(float)                                     MaxIntermissionShotTimeSeconds                              OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(float)                                     MaxGeneratedShotTimeSeconds                                 OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     MinTimeBetweenSameShotSeconds                               OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(float)                                     MaxRetriesToFindShot                                        OFFSET(get<float>, {0x3C, 4, 0, 0})
	SMember(FSparksCameraSectionWrapper)               DefaultSequenceGenerator                                    OFFSET(getStruct<T>, {0x40, 168, 0, 0})
	CMember(class USparksCameraDirectorSequenceGenerator*) RuntimeDefaultSequenceGenerator                         OFFSET(get<T>, {0xE8, 8, 0, 0})
	CMember(TArray<FSparksCameraSectionWrapper>)       SequenceGenerators                                          OFFSET(get<T>, {0xF0, 16, 0, 0})
	CMember(TArray<class USparksCameraDirectorSequenceGenerator*>) RuntimeSequenceGenerators                       OFFSET(get<T>, {0x100, 16, 0, 0})
	CMember(TWeakObjectPtr<USparksCameraPluginDataProvider*>) DataProvider                                         OFFSET(get<T>, {0x110, 8, 0, 0})
	CMember(class UClass*)                             DebugWidgetClass                                            OFFSET(get<T>, {0x118, 8, 0, 0})
	CMember(TMap<ULevelSequence*, FSparksCameraShotUses>) ShotTimestamps                                           OFFSET(get<T>, {0x120, 80, 0, 0})
	DMember(bool)                                      bInitialized                                                OFFSET(get<bool>, {0x170, 1, 0, 0})


	/// Functions
	// Function /Script/SparksCameraDirectorRuntime.SparksCameraDirectorConfig.ShouldUseShot
	// bool ShouldUseShot(class ULevelSequence* Shot, float AtTimestamp);                                                       // [0xb268fac] Final|Native|Public|BlueprintCallable 
	// Function /Script/SparksCameraDirectorRuntime.SparksCameraDirectorConfig.ResetCache
	// void ResetCache();                                                                                                       // [0xb268c50] Final|Native|Public|BlueprintCallable 
	// Function /Script/SparksCameraDirectorRuntime.SparksCameraDirectorConfig.MarkShotTime
	// void MarkShotTime(class ULevelSequence* Shot, float AtTimestamp);                                                        // [0xb268448] Final|Native|Public|BlueprintCallable 
	// Function /Script/SparksCameraDirectorRuntime.SparksCameraDirectorConfig.Init
	// void Init();                                                                                                             // [0xb2676b8] Final|Native|Public  
	// Function /Script/SparksCameraDirectorRuntime.SparksCameraDirectorConfig.GenerateSequence
	// bool GenerateSequence(FSparksPerformanceMapSection& Section, FSparksCameraDirectorSequence& OutSequence);                // [0xb265a74] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/SparksCameraDirectorRuntime.SparksCameraDirectorConfig.GenerateEntry
	// bool GenerateEntry(FSparksPerformanceMapSection& Section, FSparksCameraDirectorSequenceEntry& OutEntry);                 // [0xb2651e8] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/SparksCameraDirectorRuntime.SparksCameraDirectorConfig.FindBestGenerator
	// class USparksCameraDirectorSequenceGenerator* FindBestGenerator(FSparksPerformanceMapSection& Section);                  // [0xb264fc4] Final|Native|Protected|HasOutParms|BlueprintCallable 
};

/// Class /Script/SparksCameraDirectorRuntime.SparksCameraPluginDataProvider
/// Size: 0x0010 (0x0000A0 - 0x0000B0)
class USparksCameraPluginDataProvider : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	CMember(TArray<FSparksCameraShot>)                 StaticShots                                                 OFFSET(get<T>, {0xA0, 16, 0, 0})


	/// Functions
	// Function /Script/SparksCameraDirectorRuntime.SparksCameraPluginDataProvider.GetValidTimestamp
	// bool GetValidTimestamp(float DesiredTimestampMS, float& OutTimestampMSHigh, float& OutTimestampMSLow);                   // [0xb267314] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SparksCameraDirectorRuntime.SparksCameraPluginDataProvider.GetTargetRelevantTags
	// bool GetTargetRelevantTags(class AActor* Target, FSparksCameraFilter& TagsOut);                                          // [0xb2671b4] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SparksCameraDirectorRuntime.SparksCameraPluginDataProvider.GetTargetForCloseup
	// class AActor* GetTargetForCloseup(float ShotTimeMS, FGameplayTagContainer& TagsOut, bool bPreferLocal);                  // [0xb266fe4] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SparksCameraDirectorRuntime.SparksCameraPluginDataProvider.GetStaticShotCount
	// int32_t GetStaticShotCount();                                                                                            // [0xb266314] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksCameraDirectorRuntime.SparksCameraPluginDataProvider.GetStaticShot
	// bool GetStaticShot(int32_t Index, FSparksCameraShot& OutShot);                                                           // [0xb26619c] Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksCameraDirectorRuntime.SparksCameraPluginDataProvider.GetMatchingCameraTarget
	// class AActor* GetMatchingCameraTarget(FGameplayTagContainer& Tags, float ShotTimeMS, bool bPreferLocal);                 // [0xb265de8] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SparksCameraDirectorRuntime.SparksCameraPluginDataProvider.GetCurrentMSTimeInCameraEvent
	// float GetCurrentMSTimeInCameraEvent();                                                                                   // [0x68ad6c8] Native|Public|BlueprintCallable 
	// Function /Script/SparksCameraDirectorRuntime.SparksCameraPluginDataProvider.GetAllTargets
	// TArray<AActor*> GetAllTargets();                                                                                         // [0xb265d88] Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/SparksCameraDirectorRuntime.SparksCameraShotSelectRuleBase
/// Size: 0x0028 (0x000028 - 0x000050)
class USparksCameraShotSelectRuleBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	DMember(bool)                                      bIsInitialized                                              OFFSET(get<bool>, {0x28, 1, 0, 0})
	CMember(class USparksCameraShotPool*)              Pool                                                        OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(TArray<int32_t>)                           ShotIndexes                                                 OFFSET(get<T>, {0x38, 16, 0, 0})
	DMember(int32_t)                                   Index                                                       OFFSET(get<int32_t>, {0x48, 4, 0, 0})


	/// Functions
	// Function /Script/SparksCameraDirectorRuntime.SparksCameraShotSelectRuleBase.Reset
	// bool Reset();                                                                                                            // [0x66bfd84] Native|Event|Public|BlueprintEvent 
	// Function /Script/SparksCameraDirectorRuntime.SparksCameraShotSelectRuleBase.Init
	// bool Init(class USparksCameraShotPool* InPool);                                                                          // [0xa111080] Native|Event|Public|BlueprintEvent 
	// Function /Script/SparksCameraDirectorRuntime.SparksCameraShotSelectRuleBase.GetShotCount
	// int32_t GetShotCount();                                                                                                  // [0xb266184] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksCameraDirectorRuntime.SparksCameraShotSelectRuleBase.ChooseShot
	// bool ChooseShot(FSparksPerformanceMapSection& Section, FSparksCameraDirectorSequenceEntry& OutShot);                     // [0xb264c0c] Native|Event|Public|HasOutParms|BlueprintEvent 
};

/// Class /Script/SparksCameraDirectorRuntime.SparksCameraPoolSelectRuleBase
/// Size: 0x00E8 (0x000028 - 0x000110)
class USparksCameraPoolSelectRuleBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
	DMember(bool)                                      bIsInitialized                                              OFFSET(get<bool>, {0x28, 1, 0, 0})
	SMember(FSparksCameraSectionWrapper)               Wrapper                                                     OFFSET(getStruct<T>, {0x30, 168, 0, 0})
	CMember(TArray<int32_t>)                           PoolIndexes                                                 OFFSET(get<T>, {0xD8, 16, 0, 0})
	CMember(TArray<class USparksCameraShotSelectRuleBase*>) PoolRules                                              OFFSET(get<T>, {0xE8, 16, 0, 0})
	CMember(class USparksCameraShotSelectRuleBase*)    IntroPoolRule                                               OFFSET(get<T>, {0xF8, 8, 0, 0})
	CMember(class USparksCameraShotSelectRuleBase*)    ExitPoolRule                                                OFFSET(get<T>, {0x100, 8, 0, 0})
	DMember(int32_t)                                   Index                                                       OFFSET(get<int32_t>, {0x108, 4, 0, 0})


	/// Functions
	// Function /Script/SparksCameraDirectorRuntime.SparksCameraPoolSelectRuleBase.Reset
	// bool Reset();                                                                                                            // [0x66bfd84] Native|Event|Public|BlueprintEvent 
	// Function /Script/SparksCameraDirectorRuntime.SparksCameraPoolSelectRuleBase.Init
	// bool Init(FSparksCameraSectionWrapper& Section);                                                                         // [0xb26787c] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/SparksCameraDirectorRuntime.SparksCameraPoolSelectRuleBase.GetShotCount
	// int32_t GetShotCount();                                                                                                  // [0xb266160] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksCameraDirectorRuntime.SparksCameraPoolSelectRuleBase.GetPoolCount
	// int32_t GetPoolCount();                                                                                                  // [0x896f4d4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksCameraDirectorRuntime.SparksCameraPoolSelectRuleBase.ChooseShot
	// bool ChooseShot(FSparksPerformanceMapSection& Section, FSparksCameraDirectorSequenceEntry& OutShot);                     // [0xb264c0c] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/SparksCameraDirectorRuntime.SparksCameraPoolSelectRuleBase.ChooseIntroShot
	// bool ChooseIntroShot(FSparksPerformanceMapSection& Section, FSparksCameraDirectorSequenceEntry& OutShot);                // [0xb264a78] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/SparksCameraDirectorRuntime.SparksCameraPoolSelectRuleBase.ChooseExitShot
	// bool ChooseExitShot(FSparksPerformanceMapSection& Section, FSparksCameraDirectorSequenceEntry& OutShot);                 // [0xb2648e4] Native|Event|Public|HasOutParms|BlueprintEvent 
};

/// Class /Script/SparksCameraDirectorRuntime.SparksShotSelectRuleRandomized
/// Size: 0x0000 (0x000050 - 0x000050)
class USparksShotSelectRuleRandomized : public USparksCameraShotSelectRuleBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Class /Script/SparksCameraDirectorRuntime.SparksShotSelectRuleSequential
/// Size: 0x0000 (0x000050 - 0x000050)
class USparksShotSelectRuleSequential : public USparksCameraShotSelectRuleBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Class /Script/SparksCameraDirectorRuntime.SparksShotSelectRuleScored
/// Size: 0x0000 (0x000050 - 0x000050)
class USparksShotSelectRuleScored : public USparksCameraShotSelectRuleBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Class /Script/SparksCameraDirectorRuntime.SparksPoolSelectRuleRandomized
/// Size: 0x0000 (0x000110 - 0x000110)
class USparksPoolSelectRuleRandomized : public USparksCameraPoolSelectRuleBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
};

/// Class /Script/SparksCameraDirectorRuntime.SparksPoolSelectRuleSequential
/// Size: 0x0000 (0x000110 - 0x000110)
class USparksPoolSelectRuleSequential : public USparksCameraPoolSelectRuleBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
};

/// Class /Script/SparksCameraDirectorRuntime.SparksPoolSelectRuleScored
/// Size: 0x0000 (0x000110 - 0x000110)
class USparksPoolSelectRuleScored : public USparksCameraPoolSelectRuleBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
};

/// Class /Script/SparksCameraDirectorRuntime.SparksCameraDirectorSequenceGenerator
/// Size: 0x00C0 (0x000028 - 0x0000E8)
class USparksCameraDirectorSequenceGenerator : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
	DMember(bool)                                      bIsInitialized                                              OFFSET(get<bool>, {0x28, 1, 0, 0})
	SMember(FSparksCameraSectionWrapper)               SectionData                                                 OFFSET(getStruct<T>, {0x30, 168, 0, 0})
	CMember(class USparksCameraPoolSelectRuleBase*)    SelectionRule                                               OFFSET(get<T>, {0xD8, 8, 0, 0})
	CMember(class USparksCameraDirectorConfig*)        CameraConfig                                                OFFSET(get<T>, {0xE0, 8, 0, 0})


	/// Functions
	// Function /Script/SparksCameraDirectorRuntime.SparksCameraDirectorSequenceGenerator.Reset
	// bool Reset();                                                                                                            // [0x673c1a8] Native|Event|Public|BlueprintEvent 
	// Function /Script/SparksCameraDirectorRuntime.SparksCameraDirectorSequenceGenerator.Init
	// bool Init(FSparksCameraSectionWrapper& InPool, class USparksCameraDirectorConfig* Config);                               // [0xb2676cc] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/SparksCameraDirectorRuntime.SparksCameraDirectorSequenceGenerator.GetFilter
	// FSparksCameraFilter GetFilter();                                                                                         // [0xb265dcc] Final|Native|Public|BlueprintCallable 
	// Function /Script/SparksCameraDirectorRuntime.SparksCameraDirectorSequenceGenerator.GenerateSequence
	// ESparksSectionGeneratorResult GenerateSequence(FSparksPerformanceMapSection& Section, class USparksCameraPluginDataProvider* DataProvider, FSparksCameraDirectorSequence& OutSequence); // [0xb265b98] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/SparksCameraDirectorRuntime.SparksCameraDirectorSequenceGenerator.GenerateIntroEntry
	// ESparksSectionGeneratorResult GenerateIntroEntry(FSparksPerformanceMapSection& Section, class USparksCameraPluginDataProvider* DataProvider, FSparksCameraDirectorSequenceEntry& OutEntry); // [0xb265820] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/SparksCameraDirectorRuntime.SparksCameraDirectorSequenceGenerator.GenerateExitEntry
	// ESparksSectionGeneratorResult GenerateExitEntry(FSparksPerformanceMapSection& Section, class USparksCameraPluginDataProvider* DataProvider, FSparksCameraDirectorSequenceEntry& OutEntry); // [0xb2655cc] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/SparksCameraDirectorRuntime.SparksCameraDirectorSequenceGenerator.GenerateEntry
	// ESparksSectionGeneratorResult GenerateEntry(FSparksPerformanceMapSection& Section, class USparksCameraPluginDataProvider* DataProvider, FSparksCameraDirectorSequenceEntry& OutEntry); // [0xb265378] Native|Event|Public|HasOutParms|BlueprintEvent 
};

/// Class /Script/SparksCameraDirectorRuntime.SparksCamera_BPFL
/// Size: 0x0000 (0x000028 - 0x000028)
class USparksCamera_BPFL : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/SparksCameraDirectorRuntime.SparksCamera_BPFL.ScoreTagsAgainstFilter
	// ESparksFilterResult ScoreTagsAgainstFilter(FSparksCameraFilter& Filter, FGameplayTagContainer& TagsToMatch, float& OutScore); // [0xb268da4] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SparksCameraDirectorRuntime.SparksCamera_BPFL.ScoreTagContainers
	// float ScoreTagContainers(FGameplayTagContainer& Tags1, FGameplayTagContainer& Tags2);                                    // [0xb268c64] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SparksCameraDirectorRuntime.SparksCamera_BPFL.GetTagForMidiEventName
	// FGameplayTag GetTagForMidiEventName(FString EventString);                                                                // [0xb266990] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SparksCameraDirectorRuntime.SparksCamera_BPFL.GetSubTagForMidiEventName
	// FGameplayTag GetSubTagForMidiEventName(FString EventString);                                                             // [0xb26633c] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SparksCameraDirectorRuntime.SparksDefaultLevelSequenceInstanceData
/// Size: 0x0080 (0x0000A0 - 0x000120)
class USparksDefaultLevelSequenceInstanceData : public UDefaultLevelSequenceInstanceData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	CMember(class USkeletalMeshComponent*)             MeshToAttachTo                                              OFFSET(get<T>, {0xA0, 8, 0, 0})
};

/// Class /Script/SparksCameraDirectorRuntime.SparksLevelSequenceActor
/// Size: 0x0000 (0x000330 - 0x000330)
class ASparksLevelSequenceActor : public ALevelSequenceActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 816;

public:
};

/// Class /Script/SparksCameraDirectorRuntime.SparksLevelSequencePlayer
/// Size: 0x0020 (0x000588 - 0x0005A8)
class USparksLevelSequencePlayer : public ULevelSequencePlayer
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1448;

public:
	CMember(class ACineCameraActor*)                   SpawnedCamera                                               OFFSET(get<T>, {0x588, 8, 0, 0})
	CMember(class USkeletalMeshComponent*)             TargetMesh                                                  OFFSET(get<T>, {0x590, 8, 0, 0})
	CMember(class AActor*)                             SpawnedLookAtTraget                                         OFFSET(get<T>, {0x598, 8, 0, 0})


	/// Functions
	// Function /Script/SparksCameraDirectorRuntime.SparksLevelSequencePlayer.SparksCreateLevelSequencePlayer
	// class USparksLevelSequencePlayer* SparksCreateLevelSequencePlayer(class UObject* WorldContextObject, class ULevelSequence* LevelSequence, FMovieSceneSequencePlaybackSettings Settings, class ASparksLevelSequenceActor*& OutActor, class USkeletalMeshComponent* TargetActor, FSparksCameraShot& Shot); // [0xb2690fc] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/SparksCameraDirectorRuntime.SparksPerformanceMap
/// Size: 0x0010 (0x000028 - 0x000038)
class USparksPerformanceMap : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<FSparksPerformanceMapSection>)      Timeline                                                    OFFSET(get<T>, {0x28, 16, 0, 0})


	/// Functions
	// Function /Script/SparksCameraDirectorRuntime.SparksPerformanceMap.InsertTimeline
	// int32_t InsertTimeline(class USparksPerformanceMap* Map, int32_t& OutFirstIndex, int32_t& OutLastIndex, bool bOverwrite); // [0xb267ab8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SparksCameraDirectorRuntime.SparksPerformanceMap.GetSectionIndexAtTime
	// int32_t GetSectionIndexAtTime(float TimeMS);                                                                             // [0xb266090] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksCameraDirectorRuntime.SparksPerformanceMap.GetNextSectionIndexAtTime
	// int32_t GetNextSectionIndexAtTime(float TimeMS);                                                                         // [0xb265fb8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksCameraDirectorRuntime.SparksPerformanceMap.FixupSectionTimeLengths
	// void FixupSectionTimeLengths();                                                                                          // [0xb2651d4] Final|Native|Public|BlueprintCallable 
	// Function /Script/SparksCameraDirectorRuntime.SparksPerformanceMap.AddSection
	// void AddSection(float StartMS, FGameplayTag& PrimaryTag, FGameplayTagContainer& SecondaryTags);                          // [0xb264728] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/SparksCameraDirectorRuntime.SparksCameraShot
/// Size: 0x0048 (0x000000 - 0x000048)
class FSparksCameraShot : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(class ULevelSequence*)                     Sequence                                                    OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FName)                                     MoveToSocketName                                            OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	DMember(bool)                                      bAttachToActor                                              OFFSET(get<bool>, {0xC, 1, 0, 0})
	DMember(bool)                                      bUseSocketRotationOnAttach                                  OFFSET(get<bool>, {0xD, 1, 0, 0})
	DMember(float)                                     AttachInterpSpeed                                           OFFSET(get<float>, {0x10, 4, 0, 0})
	SMember(FName)                                     LookAtSocketName                                            OFFSET(getStruct<T>, {0x14, 4, 0, 0})
	DMember(float)                                     LookAtInterpSpeed                                           OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     MinTimeSeconds                                              OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(float)                                     MaxTimeSeconds                                              OFFSET(get<float>, {0x20, 4, 0, 0})
	SMember(FGameplayTagContainer)                     Tags                                                        OFFSET(getStruct<T>, {0x28, 32, 0, 0})
};

/// Struct /Script/SparksCameraDirectorRuntime.SparksCameraPoolWrapper
/// Size: 0x0010 (0x000000 - 0x000010)
class FSparksCameraPoolWrapper : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class UClass*)                             ShotSelectionRule                                           OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class USparksCameraShotPool*)              Pool                                                        OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/SparksCameraDirectorRuntime.SparksCameraSectionWrapper
/// Size: 0x00A8 (0x000000 - 0x0000A8)
class FSparksCameraSectionWrapper : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   Priority                                                    OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(float)                                     MaxGeneratedShotTimeSeconds                                 OFFSET(get<float>, {0x8, 4, 0, 0})
	CMember(class UClass*)                             PoolSelectionRule                                           OFFSET(get<T>, {0x10, 8, 0, 0})
	SMember(FSparksCameraPoolWrapper)                  IntroPool                                                   OFFSET(getStruct<T>, {0x18, 16, 0, 0})
	CMember(TArray<FSparksCameraPoolWrapper>)          Pools                                                       OFFSET(get<T>, {0x28, 16, 0, 0})
	SMember(FSparksCameraPoolWrapper)                  ExitPool                                                    OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	SMember(FSparksCameraFilter)                       SectionFilter                                               OFFSET(getStruct<T>, {0x48, 96, 0, 0})
};

/// Struct /Script/SparksCameraDirectorRuntime.SparksCameraFilter
/// Size: 0x0060 (0x000000 - 0x000060)
class FSparksCameraFilter : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FGameplayTagContainer)                     Required                                                    OFFSET(getStruct<T>, {0x0, 32, 0, 0})
	SMember(FGameplayTagContainer)                     Preferred                                                   OFFSET(getStruct<T>, {0x20, 32, 0, 0})
	SMember(FGameplayTagContainer)                     Excluded                                                    OFFSET(getStruct<T>, {0x40, 32, 0, 0})
};

/// Struct /Script/SparksCameraDirectorRuntime.SparksCameraShotUses
/// Size: 0x0010 (0x000000 - 0x000010)
class FSparksCameraShotUses : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<float>)                             TimeStamps                                                  OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/SparksCameraDirectorRuntime.SparksCommonStartCameraDirectorEvent
/// Size: 0x0001 (0x000000 - 0x000001)
class FSparksCommonStartCameraDirectorEvent : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/SparksCameraDirectorRuntime.SparksCommonStopCameraDirectorEvent
/// Size: 0x0001 (0x000000 - 0x000001)
class FSparksCommonStopCameraDirectorEvent : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/SparksCameraDirectorRuntime.SparksCommonForceIntermissionCameraDirectorEvent
/// Size: 0x0020 (0x000000 - 0x000020)
class FSparksCommonForceIntermissionCameraDirectorEvent : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FGameplayTagContainer)                     Tags                                                        OFFSET(getStruct<T>, {0x0, 32, 0, 0})
};

/// Struct /Script/SparksCameraDirectorRuntime.SparksCommonResetCameraDirectorEvent
/// Size: 0x0001 (0x000000 - 0x000001)
class FSparksCommonResetCameraDirectorEvent : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/SparksCameraDirectorRuntime.SparksCommonDynamicCameraDirectorEvent
/// Size: 0x0038 (0x000000 - 0x000038)
class FSparksCommonDynamicCameraDirectorEvent : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(bool)                                      bWaitForTransition                                          OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(bool)                                      bForceTransition                                            OFFSET(get<bool>, {0x1, 1, 0, 0})
	DMember(float)                                     LengthSeconds                                               OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(bool)                                      bPreferLocalPlayer                                          OFFSET(get<bool>, {0x8, 1, 0, 0})
	CMember(TWeakObjectPtr<AActor*>)                   PreferredTarget                                             OFFSET(get<T>, {0xC, 8, 0, 0})
	DMember(bool)                                      bOverwriteActiveDynamicEvent                                OFFSET(get<bool>, {0x14, 1, 0, 0})
	SMember(FGameplayTagContainer)                     Tags                                                        OFFSET(getStruct<T>, {0x18, 32, 0, 0})
};

/// Struct /Script/SparksCameraDirectorRuntime.SparksCommonIntermissionCameraDirectorEvent
/// Size: 0x0020 (0x000000 - 0x000020)
class FSparksCommonIntermissionCameraDirectorEvent : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FGameplayTagContainer)                     Tags                                                        OFFSET(getStruct<T>, {0x0, 32, 0, 0})
};

/// Struct /Script/SparksCameraDirectorRuntime.SparksCommonCameraDebugLogEvent
/// Size: 0x0018 (0x000000 - 0x000018)
class FSparksCommonCameraDebugLogEvent : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FString)                                   Data                                                        OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	CMember(ESparksCameraLogType)                      Type                                                        OFFSET(get<T>, {0x10, 1, 0, 0})
};

/// Struct /Script/SparksCameraDirectorRuntime.SparksCameraDirectorSequenceEntry
/// Size: 0x0080 (0x000000 - 0x000080)
class FSparksCameraDirectorSequenceEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FName)                                     GeneratorName                                               OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FName)                                     SectionName                                                 OFFSET(getStruct<T>, {0x4, 4, 0, 0})
	DMember(bool)                                      bChooseLocalShot                                            OFFSET(get<bool>, {0x8, 1, 0, 0})
	DMember(bool)                                      bPreferLocalPlayer                                          OFFSET(get<bool>, {0x9, 1, 0, 0})
	CMember(TWeakObjectPtr<AActor*>)                   PreferredTarget                                             OFFSET(get<T>, {0xC, 8, 0, 0})
	DMember(float)                                     StartTimeMS                                                 OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     LengthMS                                                    OFFSET(get<float>, {0x18, 4, 0, 0})
	CMember(TWeakObjectPtr<AActor*>)                   TargetActor                                                 OFFSET(get<T>, {0x1C, 8, 0, 0})
	SMember(FSparksCameraShot)                         Shot                                                        OFFSET(getStruct<T>, {0x28, 72, 0, 0})
	DMember(bool)                                      bIsDynamicEntry                                             OFFSET(get<bool>, {0x70, 1, 0, 0})
	CMember(TWeakObjectPtr<AActor*>)                   GeneratedTargetActor                                        OFFSET(get<T>, {0x74, 8, 0, 0})
};

/// Struct /Script/SparksCameraDirectorRuntime.SparksCameraDirectorSequence
/// Size: 0x0028 (0x000000 - 0x000028)
class FSparksCameraDirectorSequence : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FString)                                   SectionName                                                 OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	DMember(float)                                     StartTimeMS                                                 OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     LengthMS                                                    OFFSET(get<float>, {0x14, 4, 0, 0})
	CMember(TArray<FSparksCameraDirectorSequenceEntry>) Entries                                                    OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/SparksCameraDirectorRuntime.SparksPerformanceMapSection
/// Size: 0x0090 (0x000000 - 0x000090)
class FSparksPerformanceMapSection : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	DMember(float)                                     StartMS                                                     OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     LengthMS                                                    OFFSET(get<float>, {0x4, 4, 0, 0})
	SMember(FGameplayTag)                              PrimaryTag                                                  OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	SMember(FGameplayTagContainer)                     Tags                                                        OFFSET(getStruct<T>, {0x10, 32, 0, 0})
	SMember(FSparksCameraFilter)                       ShotsFilter                                                 OFFSET(getStruct<T>, {0x30, 96, 0, 0})
};

/// Enum /Script/SparksCameraDirectorRuntime.ESparksCameraConfigType
/// Size: 0x05
enum class ESparksCameraConfigType : uint8_t
{
	ESparksCameraConfigType__Main                                                    = 0,
	ESparksCameraConfigType__QA                                                      = 1,
	ESparksCameraConfigType__Perf                                                    = 2,
	ESparksCameraConfigType__Custom                                                  = 3,
	ESparksCameraConfigType__ESparksCameraConfigType_MAX                             = 4
};

/// Enum /Script/SparksCameraDirectorRuntime.ESparksCameraLogType
/// Size: 0x05
enum class ESparksCameraLogType : uint8_t
{
	ESparksCameraLogType__ShotGenerator                                              = 0,
	ESparksCameraLogType__ShotName                                                   = 1,
	ESparksCameraLogType__SectionName                                                = 2,
	ESparksCameraLogType__Unknown                                                    = 3,
	ESparksCameraLogType__ESparksCameraLogType_MAX                                   = 4
};

/// Enum /Script/SparksCameraDirectorRuntime.ESparksFilterResult
/// Size: 0x04
enum class ESparksFilterResult : uint8_t
{
	ESparksFilterResult__Match                                                       = 0,
	ESparksFilterResult__FailedRequired                                              = 1,
	ESparksFilterResult__FailedExcluded                                              = 2,
	ESparksFilterResult__ESparksFilterResult_MAX                                     = 3
};

/// Enum /Script/SparksCameraDirectorRuntime.ESparksSectionGeneratorResult
/// Size: 0x05
enum class ESparksSectionGeneratorResult : uint8_t
{
	ESparksSectionGeneratorResult__Success                                           = 0,
	ESparksSectionGeneratorResult__SuccessTooShort                                   = 1,
	ESparksSectionGeneratorResult__SuccessTooLong                                    = 2,
	ESparksSectionGeneratorResult__Failed                                            = 3,
	ESparksSectionGeneratorResult__ESparksSectionGeneratorResult_MAX                 = 4
};

