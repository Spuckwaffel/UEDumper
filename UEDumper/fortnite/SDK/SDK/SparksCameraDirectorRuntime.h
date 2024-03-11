
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CinematicCamera
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: GameplayTags
/// dependency: LevelSequence
/// dependency: MovieScene
/// dependency: UMG

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

/// Struct /Script/SparksCameraDirectorRuntime.SparksCameraShot
/// Size: 0x0048 (0x000000 - 0x000048)
struct FSparksCameraShot
{ 
	class ULevelSequence*                              Sequence;                                                   // 0x0000   (0x0008)  
	FName                                              MoveToSocketName;                                           // 0x0008   (0x0004)  
	bool                                               bAttachToActor;                                             // 0x000C   (0x0001)  
	bool                                               bUseSocketRotationOnAttach;                                 // 0x000D   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x000E   (0x0002)  MISSED
	float                                              AttachInterpSpeed;                                          // 0x0010   (0x0004)  
	FName                                              LookAtSocketName;                                           // 0x0014   (0x0004)  
	float                                              LookAtInterpSpeed;                                          // 0x0018   (0x0004)  
	float                                              MinTimeSeconds;                                             // 0x001C   (0x0004)  
	float                                              MaxTimeSeconds;                                             // 0x0020   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0024   (0x0004)  MISSED
	FGameplayTagContainer                              Tags;                                                       // 0x0028   (0x0020)  
};

/// Struct /Script/SparksCameraDirectorRuntime.SparksCameraFilter
/// Size: 0x0060 (0x000000 - 0x000060)
struct FSparksCameraFilter
{ 
	FGameplayTagContainer                              Required;                                                   // 0x0000   (0x0020)  
	FGameplayTagContainer                              Preferred;                                                  // 0x0020   (0x0020)  
	FGameplayTagContainer                              Excluded;                                                   // 0x0040   (0x0020)  
};

/// Class /Script/SparksCameraDirectorRuntime.SparksCameraShotPool
/// Size: 0x0098 (0x000030 - 0x0000C8)
class USparksCameraShotPool : public UDataAsset
{ 
public:
	TArray<FSparksCameraShot>                          Shots;                                                      // 0x0030   (0x0010)  
	bool                                               bIgnoreShotTags;                                            // 0x0040   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0041   (0x0007)  MISSED
	FGameplayTagContainer                              PoolTags;                                                   // 0x0048   (0x0020)  
	FSparksCameraFilter                                PoolFilter;                                                 // 0x0068   (0x0060)  
};

/// Class /Script/SparksCameraDirectorRuntime.SparksCameraDebugWidget
/// Size: 0x0000 (0x0002C0 - 0x0002C0)
class USparksCameraDebugWidget : public UUserWidget
{ 
public:


	/// Functions
	// Function /Script/SparksCameraDirectorRuntime.SparksCameraDebugWidget.SetEventRouter
	// void SetEventRouter(class UGameplayEventRouterComponent* EventRouter);                                                // [0x18a39e4] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/SparksCameraDirectorRuntime.SparksCameraDebugWidget.LogToScreen
	// void LogToScreen(FString Data, ESparksCameraLogType Type);                                                            // [0x18a39e4] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/SparksCameraDirectorRuntime.SparksCameraDebugWidget.ClearCurrent
	// void ClearCurrent();                                                                                                  // [0x18a39e4] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/SparksCameraDirectorRuntime.SparksCameraDebugWidget.ClearAll
	// void ClearAll();                                                                                                      // [0x18a39e4] Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Struct /Script/SparksCameraDirectorRuntime.SparksCameraDirectorSequenceEntry
/// Size: 0x0080 (0x000000 - 0x000080)
struct FSparksCameraDirectorSequenceEntry
{ 
	FName                                              GeneratorName;                                              // 0x0000   (0x0004)  
	FName                                              SectionName;                                                // 0x0004   (0x0004)  
	bool                                               bChooseLocalShot;                                           // 0x0008   (0x0001)  
	bool                                               bPreferLocalPlayer;                                         // 0x0009   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x000A   (0x0002)  MISSED
	SDK_UNDEFINED(8,13872) /* TWeakObjectPtr<AActor*> */ __um(PreferredTarget);                                    // 0x000C   (0x0008)  
	float                                              StartTimeMS;                                                // 0x0014   (0x0004)  
	float                                              LengthMS;                                                   // 0x0018   (0x0004)  
	SDK_UNDEFINED(8,13873) /* TWeakObjectPtr<AActor*> */ __um(TargetActor);                                        // 0x001C   (0x0008)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0024   (0x0004)  MISSED
	FSparksCameraShot                                  Shot;                                                       // 0x0028   (0x0048)  
	bool                                               bIsDynamicEntry;                                            // 0x0070   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0071   (0x0003)  MISSED
	SDK_UNDEFINED(8,13874) /* TWeakObjectPtr<AActor*> */ __um(GeneratedTargetActor);                               // 0x0074   (0x0008)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x007C   (0x0004)  MISSED
};

/// Struct /Script/SparksCameraDirectorRuntime.SparksCameraDirectorSequence
/// Size: 0x0028 (0x000000 - 0x000028)
struct FSparksCameraDirectorSequence
{ 
	SDK_UNDEFINED(16,13875) /* FString */              __um(SectionName);                                          // 0x0000   (0x0010)  
	float                                              StartTimeMS;                                                // 0x0010   (0x0004)  
	float                                              LengthMS;                                                   // 0x0014   (0x0004)  
	TArray<FSparksCameraDirectorSequenceEntry>         Entries;                                                    // 0x0018   (0x0010)  
};

/// Struct /Script/SparksCameraDirectorRuntime.SparksCommonDynamicCameraDirectorEvent
/// Size: 0x0038 (0x000000 - 0x000038)
struct FSparksCommonDynamicCameraDirectorEvent
{ 
	bool                                               bWaitForTransition;                                         // 0x0000   (0x0001)  
	bool                                               bForceTransition;                                           // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0002   (0x0002)  MISSED
	float                                              LengthSeconds;                                              // 0x0004   (0x0004)  
	bool                                               bPreferLocalPlayer;                                         // 0x0008   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0009   (0x0003)  MISSED
	SDK_UNDEFINED(8,13876) /* TWeakObjectPtr<AActor*> */ __um(PreferredTarget);                                    // 0x000C   (0x0008)  
	bool                                               bOverwriteActiveDynamicEvent;                               // 0x0014   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0015   (0x0003)  MISSED
	FGameplayTagContainer                              Tags;                                                       // 0x0018   (0x0020)  
};

/// Class /Script/SparksCameraDirectorRuntime.SparksCameraDirectorComponent
/// Size: 0x01E0 (0x0000A0 - 0x000280)
class USparksCameraDirectorComponent : public UActorComponent
{ 
public:
	class USparksCameraDirectorConfig*                 MainConfig;                                                 // 0x00A0   (0x0008)  
	class USparksCameraDirectorConfig*                 QAConfig;                                                   // 0x00A8   (0x0008)  
	class USparksCameraDirectorConfig*                 PerfConfig;                                                 // 0x00B0   (0x0008)  
	TArray<class USparksCameraDirectorConfig*>         CustomConfig;                                               // 0x00B8   (0x0010)  
	class USparksCameraDirectorConfig*                 Config;                                                     // 0x00C8   (0x0008)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x00D0   (0x0008)  MISSED
	float                                              MinShotTimeSeconds;                                         // 0x00D8   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x00DC   (0x0004)  MISSED
	TArray<FSparksCameraDirectorSequence>              Sequences;                                                  // 0x00E0   (0x0010)  
	class USparksPerformanceMap*                       PerformanceMap;                                             // 0x00F0   (0x0008)  
	class USparksCameraDebugWidget*                    DebugWidget;                                                // 0x00F8   (0x0008)  
	FGameplayTagContainer                              IntermissionTags;                                           // 0x0100   (0x0020)  
	class ALevelSequenceActor*                         SequenceActor;                                              // 0x0120   (0x0008)  
	class USparksLevelSequencePlayer*                  SequencePlayer;                                             // 0x0128   (0x0008)  
	bool                                               bCamerasAreActive;                                          // 0x0130   (0x0001)  
	bool                                               bCamerasAreLocked;                                          // 0x0131   (0x0001)  
	unsigned char                                      UnknownData02_5[0x2];                                       // 0x0132   (0x0002)  MISSED
	SDK_UNDEFINED(8,13877) /* TWeakObjectPtr<USparksCameraPluginDataProvider*> */ __um(DataProvider);              // 0x0134   (0x0008)  
	int32_t                                            DebugTargetIndex;                                           // 0x013C   (0x0004)  
	int32_t                                            CurrentSequenceIndex;                                       // 0x0140   (0x0004)  
	int32_t                                            CurrentSequenceEntryIndex;                                  // 0x0144   (0x0004)  
	bool                                               bHasActiveDynamicEvent;                                     // 0x0148   (0x0001)  
	unsigned char                                      UnknownData03_5[0x7];                                       // 0x0149   (0x0007)  MISSED
	FSparksCommonDynamicCameraDirectorEvent            DynamicEvent;                                               // 0x0150   (0x0038)  
	unsigned char                                      UnknownData04_5[0x18];                                      // 0x0188   (0x0018)  MISSED
	FSparksCameraDirectorSequenceEntry                 CurrentPlayingEntry;                                        // 0x01A0   (0x0080)  
	FSparksCameraDirectorSequence                      IntermissionSequence;                                       // 0x0220   (0x0028)  
	int32_t                                            CurrentIntermissionSequenceEntryIndex;                      // 0x0248   (0x0004)  
	unsigned char                                      UnknownData05_5[0x4];                                       // 0x024C   (0x0004)  MISSED
	FGameplayTagContainer                              LastKnownIntermissionTags;                                  // 0x0250   (0x0020)  
	bool                                               bForceCameraViewTargetEnabled;                              // 0x0270   (0x0001)  
	unsigned char                                      UnknownData06_5[0x3];                                       // 0x0271   (0x0003)  MISSED
	int32_t                                            EvalStartIndex;                                             // 0x0274   (0x0004)  
	int32_t                                            EvalEndIndex;                                               // 0x0278   (0x0004)  
	unsigned char                                      UnknownData07_6[0x4];                                       // 0x027C   (0x0004)  MISSED


	/// Functions
	// Function /Script/SparksCameraDirectorRuntime.SparksCameraDirectorComponent.StartIntermissionCameras
	// void StartIntermissionCameras(float ForceLengthMS, bool bForceReloadNewSequence, bool bForceShotChange);              // [0xa4f3e98] Final|Native|Public  
	// Function /Script/SparksCameraDirectorRuntime.SparksCameraDirectorComponent.Reset
	// void Reset(bool bForceShotChange);                                                                                    // [0xa4f32e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SparksCameraDirectorRuntime.SparksCameraDirectorComponent.ReplaceWithNonCloseupShot
	// void ReplaceWithNonCloseupShot(FSparksCameraDirectorSequenceEntry& OldEntry);                                         // [0xa4f31d8] Final|Native|Protected|HasOutParms 
	// Function /Script/SparksCameraDirectorRuntime.SparksCameraDirectorComponent.PlayShot
	// float PlayShot(FSparksCameraDirectorSequenceEntry& Entry);                                                            // [0xa4f30b8] Final|Native|Protected|HasOutParms 
	// Function /Script/SparksCameraDirectorRuntime.SparksCameraDirectorComponent.PlaySequenceEntry
	// void PlaySequenceEntry(FSparksCameraDirectorSequenceEntry& Entry, float MsOffset, bool bIntermission, class AActor* ForceTarget); // [0xa4f2d08] Final|Native|Protected|HasOutParms 
	// Function /Script/SparksCameraDirectorRuntime.SparksCameraDirectorComponent.PlayNextShot
	// void PlayNextShot();                                                                                                  // [0xa4f2cf4] Final|Native|Protected 
	// Function /Script/SparksCameraDirectorRuntime.SparksCameraDirectorComponent.OnShotFinished
	// void OnShotFinished();                                                                                                // [0xa4f2ce0] Final|Native|Protected 
	// Function /Script/SparksCameraDirectorRuntime.SparksCameraDirectorComponent.LogToScreen
	// void LogToScreen(FString Data, ESparksCameraLogType Type, float TimeSeconds);                                         // [0xa4f2a4c] Final|Native|Protected 
	// Function /Script/SparksCameraDirectorRuntime.SparksCameraDirectorComponent.InsertSequence
	// void InsertSequence(FSparksCameraDirectorSequence& Sequence);                                                         // [0xa4f2800] Final|Native|Protected|HasOutParms|BlueprintCallable 
	// Function /Script/SparksCameraDirectorRuntime.SparksCameraDirectorComponent.InsertPerformanceMap
	// void InsertPerformanceMap(class USparksPerformanceMap* Map);                                                          // [0xa4f2780] Final|Native|Public|BlueprintCallable 
	// Function /Script/SparksCameraDirectorRuntime.SparksCameraDirectorComponent.InitDynamicCameras
	// void InitDynamicCameras();                                                                                            // [0xa4f276c] Final|Native|Protected 
	// Function /Script/SparksCameraDirectorRuntime.SparksCameraDirectorComponent.HandleIntermissionTagsEvent
	// void HandleIntermissionTagsEvent(FSparksCommonIntermissionCameraDirectorEvent& Payload);                              // [0xa4f2444] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SparksCameraDirectorRuntime.SparksCameraDirectorComponent.HandleForceIntermissionEvent
	// void HandleForceIntermissionEvent(FSparksCommonForceIntermissionCameraDirectorEvent& Payload);                        // [0xa4f238c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SparksCameraDirectorRuntime.SparksCameraDirectorComponent.HandleDirectorDynamicEvent
	// void HandleDirectorDynamicEvent(FSparksCommonDynamicCameraDirectorEvent& Payload);                                    // [0xa4f22b4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SparksCameraDirectorRuntime.SparksCameraDirectorComponent.GetCameraActive
	// bool GetCameraActive();                                                                                               // [0x9c05ffc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksCameraDirectorRuntime.SparksCameraDirectorComponent.FindCurrentShot
	// bool FindCurrentShot(int32_t& SequenceIndex, int32_t& EntryIndex);                                                    // [0xa4f0ac4] Final|Native|Protected|HasOutParms 
	// Function /Script/SparksCameraDirectorRuntime.SparksCameraDirectorComponent.DebugLockSpecificCameraShot
	// void DebugLockSpecificCameraShot(FSparksCameraShot Shot, bool bLockToFirstFrame, class AActor* Target);               // [0xa4f06d0] Net|NetReliableNative|Event|NetMulticast|Protected|BlueprintCallable 
	// Function /Script/SparksCameraDirectorRuntime.SparksCameraDirectorComponent.ActivateCameraControl
	// void ActivateCameraControl(bool bActive);                                                                             // [0xa4f000c] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/SparksCameraDirectorRuntime.SparksCameraPoolWrapper
/// Size: 0x0010 (0x000000 - 0x000010)
struct FSparksCameraPoolWrapper
{ 
	class UClass*                                      ShotSelectionRule;                                          // 0x0000   (0x0008)  
	class USparksCameraShotPool*                       Pool;                                                       // 0x0008   (0x0008)  
};

/// Struct /Script/SparksCameraDirectorRuntime.SparksCameraSectionWrapper
/// Size: 0x00A8 (0x000000 - 0x0000A8)
struct FSparksCameraSectionWrapper
{ 
	FName                                              Name;                                                       // 0x0000   (0x0004)  
	int32_t                                            Priority;                                                   // 0x0004   (0x0004)  
	float                                              MaxGeneratedShotTimeSeconds;                                // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	class UClass*                                      PoolSelectionRule;                                          // 0x0010   (0x0008)  
	FSparksCameraPoolWrapper                           IntroPool;                                                  // 0x0018   (0x0010)  
	TArray<FSparksCameraPoolWrapper>                   Pools;                                                      // 0x0028   (0x0010)  
	FSparksCameraPoolWrapper                           ExitPool;                                                   // 0x0038   (0x0010)  
	FSparksCameraFilter                                SectionFilter;                                              // 0x0048   (0x0060)  
};

/// Class /Script/SparksCameraDirectorRuntime.SparksCameraDirectorConfig
/// Size: 0x0148 (0x000030 - 0x000178)
class USparksCameraDirectorConfig : public UDataAsset
{ 
public:
	float                                              MaxIntermissionShotTimeSeconds;                             // 0x0030   (0x0004)  
	float                                              MaxGeneratedShotTimeSeconds;                                // 0x0034   (0x0004)  
	float                                              MinTimeBetweenSameShotSeconds;                              // 0x0038   (0x0004)  
	float                                              MaxRetriesToFindShot;                                       // 0x003C   (0x0004)  
	FSparksCameraSectionWrapper                        DefaultSequenceGenerator;                                   // 0x0040   (0x00A8)  
	class USparksCameraDirectorSequenceGenerator*      RuntimeDefaultSequenceGenerator;                            // 0x00E8   (0x0008)  
	TArray<FSparksCameraSectionWrapper>                SequenceGenerators;                                         // 0x00F0   (0x0010)  
	TArray<class USparksCameraDirectorSequenceGenerator*> RuntimeSequenceGenerators;                               // 0x0100   (0x0010)  
	SDK_UNDEFINED(8,13878) /* TWeakObjectPtr<USparksCameraPluginDataProvider*> */ __um(DataProvider);              // 0x0110   (0x0008)  
	class UClass*                                      DebugWidgetClass;                                           // 0x0118   (0x0008)  
	SDK_UNDEFINED(80,13879) /* TMap<ULevelSequence*, FSparksCameraShotUses> */ __um(ShotTimestamps);               // 0x0120   (0x0050)  
	bool                                               bInitialized;                                               // 0x0170   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0171   (0x0007)  MISSED


	/// Functions
	// Function /Script/SparksCameraDirectorRuntime.SparksCameraDirectorConfig.ShouldUseShot
	// bool ShouldUseShot(class ULevelSequence* Shot, float AtTimestamp);                                                    // [0xa4f36b8] Final|Native|Public|BlueprintCallable 
	// Function /Script/SparksCameraDirectorRuntime.SparksCameraDirectorConfig.ResetCache
	// void ResetCache();                                                                                                    // [0xa4f3360] Final|Native|Public|BlueprintCallable 
	// Function /Script/SparksCameraDirectorRuntime.SparksCameraDirectorConfig.MarkShotTime
	// void MarkShotTime(class ULevelSequence* Shot, float AtTimestamp);                                                     // [0xa4f2c1c] Final|Native|Public|BlueprintCallable 
	// Function /Script/SparksCameraDirectorRuntime.SparksCameraDirectorConfig.Init
	// void Init();                                                                                                          // [0xa4f24fc] Final|Native|Public  
	// Function /Script/SparksCameraDirectorRuntime.SparksCameraDirectorConfig.GenerateSequence
	// bool GenerateSequence(FSparksPerformanceMapSection& Section, FSparksCameraDirectorSequence& OutSequence);             // [0xa4f1434] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/SparksCameraDirectorRuntime.SparksCameraDirectorConfig.GenerateEntry
	// bool GenerateEntry(FSparksPerformanceMapSection& Section, FSparksCameraDirectorSequenceEntry& OutEntry);              // [0xa4f0bc0] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/SparksCameraDirectorRuntime.SparksCameraDirectorConfig.FindBestGenerator
	// class USparksCameraDirectorSequenceGenerator* FindBestGenerator(FSparksPerformanceMapSection& Section);               // [0xa4f0a10] Final|Native|Protected|HasOutParms|BlueprintCallable 
};

/// Class /Script/SparksCameraDirectorRuntime.SparksCameraPluginDataProvider
/// Size: 0x0010 (0x0000A0 - 0x0000B0)
class USparksCameraPluginDataProvider : public UActorComponent
{ 
public:
	TArray<FSparksCameraShot>                          StaticShots;                                                // 0x00A0   (0x0010)  


	/// Functions
	// Function /Script/SparksCameraDirectorRuntime.SparksCameraPluginDataProvider.GetValidTimestamp
	// bool GetValidTimestamp(float DesiredTimestampMS, float& OutTimestampMSHigh, float& OutTimestampMSLow);                // [0xa4f2190] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SparksCameraDirectorRuntime.SparksCameraPluginDataProvider.GetTargetRelevantTags
	// bool GetTargetRelevantTags(class AActor* Target, FSparksCameraFilter& TagsOut);                                       // [0xa4f2078] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SparksCameraDirectorRuntime.SparksCameraPluginDataProvider.GetTargetForCloseup
	// class AActor* GetTargetForCloseup(float ShotTimeMS, FGameplayTagContainer& TagsOut, bool bPreferLocal);               // [0xa4f1ee8] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SparksCameraDirectorRuntime.SparksCameraPluginDataProvider.GetStaticShotCount
	// int32_t GetStaticShotCount();                                                                                         // [0xa4f1bf8] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksCameraDirectorRuntime.SparksCameraPluginDataProvider.GetStaticShot
	// bool GetStaticShot(int32_t Index, FSparksCameraShot& OutShot);                                                        // [0xa4f1acc] Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksCameraDirectorRuntime.SparksCameraPluginDataProvider.GetMatchingCameraTarget
	// class AActor* GetMatchingCameraTarget(FGameplayTagContainer& Tags, float ShotTimeMS, bool bPreferLocal);              // [0xa4f179c] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SparksCameraDirectorRuntime.SparksCameraPluginDataProvider.GetCurrentMSTimeInCameraEvent
	// float GetCurrentMSTimeInCameraEvent();                                                                                // [0x688dab4] Native|Public|BlueprintCallable 
	// Function /Script/SparksCameraDirectorRuntime.SparksCameraPluginDataProvider.GetAllTargets
	// TArray<AActor*> GetAllTargets();                                                                                      // [0xa4f173c] Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/SparksCameraDirectorRuntime.SparksCameraShotSelectRuleBase
/// Size: 0x0028 (0x000028 - 0x000050)
class USparksCameraShotSelectRuleBase : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	bool                                               bIsInitialized;                                             // 0x0028   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0029   (0x0007)  MISSED
	class USparksCameraShotPool*                       Pool;                                                       // 0x0030   (0x0008)  
	TArray<int32_t>                                    ShotIndexes;                                                // 0x0038   (0x0010)  
	int32_t                                            Index;                                                      // 0x0048   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x004C   (0x0004)  MISSED


	/// Functions
	// Function /Script/SparksCameraDirectorRuntime.SparksCameraShotSelectRuleBase.Reset
	// bool Reset();                                                                                                         // [0x1aaf4c4] Native|Event|Public|BlueprintEvent 
	// Function /Script/SparksCameraDirectorRuntime.SparksCameraShotSelectRuleBase.Init
	// bool Init(class USparksCameraShotPool* InPool);                                                                       // [0x96f6b80] Native|Event|Public|BlueprintEvent 
	// Function /Script/SparksCameraDirectorRuntime.SparksCameraShotSelectRuleBase.GetShotCount
	// int32_t GetShotCount();                                                                                               // [0xa4f1ab4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksCameraDirectorRuntime.SparksCameraShotSelectRuleBase.ChooseShot
	// bool ChooseShot(FSparksPerformanceMapSection& Section, FSparksCameraDirectorSequenceEntry& OutShot);                  // [0xa4f053c] Native|Event|Public|HasOutParms|BlueprintEvent 
};

/// Class /Script/SparksCameraDirectorRuntime.SparksCameraPoolSelectRuleBase
/// Size: 0x00E8 (0x000028 - 0x000110)
class USparksCameraPoolSelectRuleBase : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	bool                                               bIsInitialized;                                             // 0x0028   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0029   (0x0007)  MISSED
	FSparksCameraSectionWrapper                        Wrapper;                                                    // 0x0030   (0x00A8)  
	TArray<int32_t>                                    PoolIndexes;                                                // 0x00D8   (0x0010)  
	TArray<class USparksCameraShotSelectRuleBase*>     PoolRules;                                                  // 0x00E8   (0x0010)  
	class USparksCameraShotSelectRuleBase*             IntroPoolRule;                                              // 0x00F8   (0x0008)  
	class USparksCameraShotSelectRuleBase*             ExitPoolRule;                                               // 0x0100   (0x0008)  
	int32_t                                            Index;                                                      // 0x0108   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x010C   (0x0004)  MISSED


	/// Functions
	// Function /Script/SparksCameraDirectorRuntime.SparksCameraPoolSelectRuleBase.Reset
	// bool Reset();                                                                                                         // [0x1aaf4c4] Native|Event|Public|BlueprintEvent 
	// Function /Script/SparksCameraDirectorRuntime.SparksCameraPoolSelectRuleBase.Init
	// bool Init(FSparksCameraSectionWrapper& Section);                                                                      // [0xa4f26b4] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/SparksCameraDirectorRuntime.SparksCameraPoolSelectRuleBase.GetShotCount
	// int32_t GetShotCount();                                                                                               // [0xa4f1a90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksCameraDirectorRuntime.SparksCameraPoolSelectRuleBase.GetPoolCount
	// int32_t GetPoolCount();                                                                                               // [0x844c560] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksCameraDirectorRuntime.SparksCameraPoolSelectRuleBase.ChooseShot
	// bool ChooseShot(FSparksPerformanceMapSection& Section, FSparksCameraDirectorSequenceEntry& OutShot);                  // [0xa4f053c] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/SparksCameraDirectorRuntime.SparksCameraPoolSelectRuleBase.ChooseIntroShot
	// bool ChooseIntroShot(FSparksPerformanceMapSection& Section, FSparksCameraDirectorSequenceEntry& OutShot);             // [0xa4f03a8] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/SparksCameraDirectorRuntime.SparksCameraPoolSelectRuleBase.ChooseExitShot
	// bool ChooseExitShot(FSparksPerformanceMapSection& Section, FSparksCameraDirectorSequenceEntry& OutShot);              // [0xa4f0214] Native|Event|Public|HasOutParms|BlueprintEvent 
};

/// Class /Script/SparksCameraDirectorRuntime.SparksShotSelectRuleRandomized
/// Size: 0x0000 (0x000050 - 0x000050)
class USparksShotSelectRuleRandomized : public USparksCameraShotSelectRuleBase
{ 
public:
};

/// Class /Script/SparksCameraDirectorRuntime.SparksShotSelectRuleSequential
/// Size: 0x0000 (0x000050 - 0x000050)
class USparksShotSelectRuleSequential : public USparksCameraShotSelectRuleBase
{ 
public:
};

/// Class /Script/SparksCameraDirectorRuntime.SparksShotSelectRuleScored
/// Size: 0x0000 (0x000050 - 0x000050)
class USparksShotSelectRuleScored : public USparksCameraShotSelectRuleBase
{ 
public:
};

/// Class /Script/SparksCameraDirectorRuntime.SparksPoolSelectRuleRandomized
/// Size: 0x0000 (0x000110 - 0x000110)
class USparksPoolSelectRuleRandomized : public USparksCameraPoolSelectRuleBase
{ 
public:
};

/// Class /Script/SparksCameraDirectorRuntime.SparksPoolSelectRuleSequential
/// Size: 0x0000 (0x000110 - 0x000110)
class USparksPoolSelectRuleSequential : public USparksCameraPoolSelectRuleBase
{ 
public:
};

/// Class /Script/SparksCameraDirectorRuntime.SparksPoolSelectRuleScored
/// Size: 0x0000 (0x000110 - 0x000110)
class USparksPoolSelectRuleScored : public USparksCameraPoolSelectRuleBase
{ 
public:
};

/// Class /Script/SparksCameraDirectorRuntime.SparksCameraDirectorSequenceGenerator
/// Size: 0x00C0 (0x000028 - 0x0000E8)
class USparksCameraDirectorSequenceGenerator : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	bool                                               bIsInitialized;                                             // 0x0028   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0029   (0x0007)  MISSED
	FSparksCameraSectionWrapper                        SectionData;                                                // 0x0030   (0x00A8)  
	class USparksCameraPoolSelectRuleBase*             SelectionRule;                                              // 0x00D8   (0x0008)  
	class USparksCameraDirectorConfig*                 CameraConfig;                                               // 0x00E0   (0x0008)  


	/// Functions
	// Function /Script/SparksCameraDirectorRuntime.SparksCameraDirectorSequenceGenerator.Reset
	// bool Reset();                                                                                                         // [0x674bfb0] Native|Event|Public|BlueprintEvent 
	// Function /Script/SparksCameraDirectorRuntime.SparksCameraDirectorSequenceGenerator.Init
	// bool Init(FSparksCameraSectionWrapper& InPool, class USparksCameraDirectorConfig* Config);                            // [0xa4f2510] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/SparksCameraDirectorRuntime.SparksCameraDirectorSequenceGenerator.GetFilter
	// FSparksCameraFilter GetFilter();                                                                                      // [0xa4f1780] Final|Native|Public|BlueprintCallable 
	// Function /Script/SparksCameraDirectorRuntime.SparksCameraDirectorSequenceGenerator.GenerateSequence
	// ESparksSectionGeneratorResult GenerateSequence(FSparksPerformanceMapSection& Section, class USparksCameraPluginDataProvider* DataProvider, FSparksCameraDirectorSequence& OutSequence); // [0xa4f1558] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/SparksCameraDirectorRuntime.SparksCameraDirectorSequenceGenerator.GenerateIntroEntry
	// ESparksSectionGeneratorResult GenerateIntroEntry(FSparksPerformanceMapSection& Section, class USparksCameraPluginDataProvider* DataProvider, FSparksCameraDirectorSequenceEntry& OutEntry); // [0xa4f11e8] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/SparksCameraDirectorRuntime.SparksCameraDirectorSequenceGenerator.GenerateExitEntry
	// ESparksSectionGeneratorResult GenerateExitEntry(FSparksPerformanceMapSection& Section, class USparksCameraPluginDataProvider* DataProvider, FSparksCameraDirectorSequenceEntry& OutEntry); // [0xa4f0f9c] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/SparksCameraDirectorRuntime.SparksCameraDirectorSequenceGenerator.GenerateEntry
	// ESparksSectionGeneratorResult GenerateEntry(FSparksPerformanceMapSection& Section, class USparksCameraPluginDataProvider* DataProvider, FSparksCameraDirectorSequenceEntry& OutEntry); // [0xa4f0d50] Native|Event|Public|HasOutParms|BlueprintEvent 
};

/// Class /Script/SparksCameraDirectorRuntime.SparksCamera_BPFL
/// Size: 0x0000 (0x000028 - 0x000028)
class USparksCamera_BPFL : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/SparksCameraDirectorRuntime.SparksCamera_BPFL.ScoreTagsAgainstFilter
	// ESparksFilterResult ScoreTagsAgainstFilter(FSparksCameraFilter& Filter, FGameplayTagContainer& TagsToMatch, float& OutScore); // [0xa4f34b4] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SparksCameraDirectorRuntime.SparksCamera_BPFL.ScoreTagContainers
	// float ScoreTagContainers(FGameplayTagContainer& Tags1, FGameplayTagContainer& Tags2);                                 // [0xa4f3374] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SparksCameraDirectorRuntime.SparksCamera_BPFL.GetTagForMidiEventName
	// FGameplayTag GetTagForMidiEventName(FString EventString);                                                             // [0xa4f1d84] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SparksCameraDirectorRuntime.SparksCamera_BPFL.GetSubTagForMidiEventName
	// FGameplayTag GetSubTagForMidiEventName(FString EventString);                                                          // [0xa4f1c20] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SparksCameraDirectorRuntime.SparksDefaultLevelSequenceInstanceData
/// Size: 0x0080 (0x0000A0 - 0x000120)
class USparksDefaultLevelSequenceInstanceData : public UDefaultLevelSequenceInstanceData
{ 
public:
	class USkeletalMeshComponent*                      MeshToAttachTo;                                             // 0x00A0   (0x0008)  
	unsigned char                                      UnknownData00_6[0x78];                                      // 0x00A8   (0x0078)  MISSED
};

/// Class /Script/SparksCameraDirectorRuntime.SparksLevelSequenceActor
/// Size: 0x0000 (0x000330 - 0x000330)
class ASparksLevelSequenceActor : public ALevelSequenceActor
{ 
public:
};

/// Class /Script/SparksCameraDirectorRuntime.SparksLevelSequencePlayer
/// Size: 0x0020 (0x000588 - 0x0005A8)
class USparksLevelSequencePlayer : public ULevelSequencePlayer
{ 
public:
	class ACineCameraActor*                            SpawnedCamera;                                              // 0x0588   (0x0008)  
	class USkeletalMeshComponent*                      TargetMesh;                                                 // 0x0590   (0x0008)  
	class AActor*                                      SpawnedLookAtTraget;                                        // 0x0598   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x05A0   (0x0008)  MISSED


	/// Functions
	// Function /Script/SparksCameraDirectorRuntime.SparksLevelSequencePlayer.SparksCreateLevelSequencePlayer
	// class USparksLevelSequencePlayer* SparksCreateLevelSequencePlayer(class UObject* WorldContextObject, class ULevelSequence* LevelSequence, FMovieSceneSequencePlaybackSettings Settings, class ASparksLevelSequenceActor*& OutActor, class USkeletalMeshComponent* TargetActor, FSparksCameraShot& Shot); // [0xa4f377c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/SparksCameraDirectorRuntime.SparksPerformanceMapSection
/// Size: 0x0090 (0x000000 - 0x000090)
struct FSparksPerformanceMapSection
{ 
	float                                              StartMS;                                                    // 0x0000   (0x0004)  
	float                                              LengthMS;                                                   // 0x0004   (0x0004)  
	FGameplayTag                                       PrimaryTag;                                                 // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	FGameplayTagContainer                              Tags;                                                       // 0x0010   (0x0020)  
	FSparksCameraFilter                                ShotsFilter;                                                // 0x0030   (0x0060)  
};

/// Class /Script/SparksCameraDirectorRuntime.SparksPerformanceMap
/// Size: 0x0010 (0x000028 - 0x000038)
class USparksPerformanceMap : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	TArray<FSparksPerformanceMapSection>               Timeline;                                                   // 0x0028   (0x0010)  


	/// Functions
	// Function /Script/SparksCameraDirectorRuntime.SparksPerformanceMap.InsertTimeline
	// int32_t InsertTimeline(class USparksPerformanceMap* Map, int32_t& OutFirstIndex, int32_t& OutLastIndex, bool bOverwrite); // [0xa4f28b0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SparksCameraDirectorRuntime.SparksPerformanceMap.GetSectionIndexAtTime
	// int32_t GetSectionIndexAtTime(float TimeMS);                                                                          // [0xa4f1a00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksCameraDirectorRuntime.SparksPerformanceMap.GetNextSectionIndexAtTime
	// int32_t GetNextSectionIndexAtTime(float TimeMS);                                                                      // [0xa4f196c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksCameraDirectorRuntime.SparksPerformanceMap.FixupSectionTimeLengths
	// void FixupSectionTimeLengths();                                                                                       // [0xa4f0bac] Final|Native|Public|BlueprintCallable 
	// Function /Script/SparksCameraDirectorRuntime.SparksPerformanceMap.AddSection
	// void AddSection(float StartMS, FGameplayTag& PrimaryTag, FGameplayTagContainer& SecondaryTags);                       // [0xa4f008c] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/SparksCameraDirectorRuntime.SparksCameraShotUses
/// Size: 0x0010 (0x000000 - 0x000010)
struct FSparksCameraShotUses
{ 
	TArray<float>                                      TimeStamps;                                                 // 0x0000   (0x0010)  
};

/// Struct /Script/SparksCameraDirectorRuntime.SparksCommonStartCameraDirectorEvent
/// Size: 0x0001 (0x000000 - 0x000001)
struct FSparksCommonStartCameraDirectorEvent
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/SparksCameraDirectorRuntime.SparksCommonStopCameraDirectorEvent
/// Size: 0x0001 (0x000000 - 0x000001)
struct FSparksCommonStopCameraDirectorEvent
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/SparksCameraDirectorRuntime.SparksCommonForceIntermissionCameraDirectorEvent
/// Size: 0x0020 (0x000000 - 0x000020)
struct FSparksCommonForceIntermissionCameraDirectorEvent
{ 
	FGameplayTagContainer                              Tags;                                                       // 0x0000   (0x0020)  
};

/// Struct /Script/SparksCameraDirectorRuntime.SparksCommonResetCameraDirectorEvent
/// Size: 0x0001 (0x000000 - 0x000001)
struct FSparksCommonResetCameraDirectorEvent
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/SparksCameraDirectorRuntime.SparksCommonIntermissionCameraDirectorEvent
/// Size: 0x0020 (0x000000 - 0x000020)
struct FSparksCommonIntermissionCameraDirectorEvent
{ 
	FGameplayTagContainer                              Tags;                                                       // 0x0000   (0x0020)  
};

/// Struct /Script/SparksCameraDirectorRuntime.SparksCommonCameraDebugLogEvent
/// Size: 0x0018 (0x000000 - 0x000018)
struct FSparksCommonCameraDebugLogEvent
{ 
	SDK_UNDEFINED(16,13880) /* FString */              __um(Data);                                                 // 0x0000   (0x0010)  
	ESparksCameraLogType                               Type;                                                       // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0011   (0x0007)  MISSED
};

