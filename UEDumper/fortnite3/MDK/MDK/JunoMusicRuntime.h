
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: GameFeatures
/// dependency: GameplayTags
/// dependency: MetasoundEngine
/// dependency: MetasoundFrontend

/// Class /Script/JunoMusicRuntime.ActiveJunoMusicPlayer
/// Size: 0x0188 (0x000028 - 0x0001B0)
class UActiveJunoMusicPlayer : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 432;

public:
	SMember(FTimerHandle)                              CooldownTimer                                               OFFSET(getStruct<T>, {0x88, 8, 0, 0})
	CMember(TArray<class USoundBase*>)                 LoadedMusicAssets                                           OFFSET(get<T>, {0xA0, 16, 0, 0})
	CMember(TArray<TWeakObjectPtr<UJunoMusicPlaylistDataAsset*>>) JunoMusicElementsToCreate                        OFFSET(get<T>, {0xC0, 16, 0, 0})
	CMember(class UJunoActiveMusicElementController_Base*) PlayingActiveMusicElementController                     OFFSET(get<T>, {0xE0, 8, 0, 0})
	CMember(class UJunoMusicPlaybackConditionsPool*)   PlaybackConditionsPool                                      OFFSET(get<T>, {0xE8, 8, 0, 0})
	CMember(TMap<UJunoMusicPlaylistDataAsset*, FElementControllerArray>) AllActiveMusicElementControllers          OFFSET(get<T>, {0xF0, 80, 0, 0})
	CMember(TArray<class UJunoMusicPlaylistDataAsset*>) JunoMusicPlaylistCollection                                OFFSET(get<T>, {0x140, 16, 0, 0})
	CMember(TMap<FName, UJunoActiveMusicCooldownGroup*>) JunoMusicCooldownGroups                                   OFFSET(get<T>, {0x160, 80, 0, 0})


	/// Functions
	// Function /Script/JunoMusicRuntime.ActiveJunoMusicPlayer.OnDayNightPhaseChangeSignature
	// void OnDayNightPhaseChangeSignature(EFortDayPhase CurrentDayPhaseIn, EFortDayPhase PreviousDayPhaseIn, bool bAtCreationIn); // [0xcc17b08] Final|Native|Public  
	// Function /Script/JunoMusicRuntime.ActiveJunoMusicPlayer.OnActiveMusicPlayerCooldownFinished
	// void OnActiveMusicPlayerCooldownFinished();                                                                              // [0xcc17af0] Final|Native|Public  
	// Function /Script/JunoMusicRuntime.ActiveJunoMusicPlayer.OnActiveMusicElementControllerFinishedPlaying
	// void OnActiveMusicElementControllerFinishedPlaying();                                                                    // [0xcc17adc] Final|Native|Public  
};

/// Class /Script/JunoMusicRuntime.GameFeatureAction_BindJunoMusicManagerToPostWorldInit
/// Size: 0x0010 (0x000028 - 0x000038)
class UGameFeatureAction_BindJunoMusicManagerToPostWorldInit : public UGameFeatureAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Script/JunoMusicRuntime.GameFeatureAction_RegisterJunoMusicDataAggregatorSettings
/// Size: 0x0020 (0x000028 - 0x000048)
class UGameFeatureAction_RegisterJunoMusicDataAggregatorSettings : public UGameFeatureAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(TArray<FSoftObjectPath>)                   JunoMusicDataAggregatorSettings                             OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Class /Script/JunoMusicRuntime.GameFeatureAction_RegisterJunoMusicElementTable
/// Size: 0x0060 (0x000028 - 0x000088)
class UGameFeatureAction_RegisterJunoMusicElementTable : public UGameFeatureAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	CMember(TMap<FSoftObjectPath, FGameplayTagQuery>)  JunoMusicElementDataTables                                  OFFSET(get<T>, {0x28, 80, 0, 0})
};

/// Class /Script/JunoMusicRuntime.GameFeatureAction_RegisterJunoMusicPlayspaceProbes
/// Size: 0x0020 (0x000028 - 0x000048)
class UGameFeatureAction_RegisterJunoMusicPlayspaceProbes : public UGameFeatureAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(TArray<FSoftObjectPath>)                   JunoMusicProbesDataAssets                                   OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Class /Script/JunoMusicRuntime.JunoActiveMusicCue
/// Size: 0x0098 (0x000028 - 0x0000C0)
class UJunoActiveMusicCue : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	CMember(class UAudioComponent*)                    AudioComponent                                              OFFSET(get<T>, {0x58, 8, 0, 0})
	CMember(class USoundBase*)                         LoadedMusic                                                 OFFSET(get<T>, {0x60, 8, 0, 0})
	CMember(class UMetasoundGeneratorHandle*)          MetasoundGeneratorHandle                                    OFFSET(get<T>, {0x78, 8, 0, 0})
};

/// Class /Script/JunoMusicRuntime.JunoActiveMusicCooldownGroup
/// Size: 0x0030 (0x000028 - 0x000058)
class UJunoActiveMusicCooldownGroup : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FTimerHandle)                              CooldownTimer                                               OFFSET(getStruct<T>, {0x38, 8, 0, 0})
};

/// Class /Script/JunoMusicRuntime.JunoActiveMusicElement_Base
/// Size: 0x00C8 (0x000028 - 0x0000F0)
class UJunoActiveMusicElement_Base : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	SMember(FJunoMusicPlaylistElement)                 JunoMusicPlaylistElement                                    OFFSET(getStruct<T>, {0x38, 184, 0, 0})


	/// Functions
	// Function /Script/JunoMusicRuntime.JunoActiveMusicElement_Base.OnFinishedPlaying
	// void OnFinishedPlaying();                                                                                                // [0x1745e54] Native|Public        
};

/// Class /Script/JunoMusicRuntime.JunoActiveMusicElement_AudioComponent
/// Size: 0x0038 (0x0000F0 - 0x000128)
class UJunoActiveMusicElement_AudioComponent : public UJunoActiveMusicElement_Base
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
	CMember(class UAudioComponent*)                    AudioComponent                                              OFFSET(get<T>, {0xF0, 8, 0, 0})
	CMember(class USoundBase*)                         Music                                                       OFFSET(get<T>, {0xF8, 8, 0, 0})
	CMember(class UMetasoundGeneratorHandle*)          MetasoundGeneratorHandle                                    OFFSET(get<T>, {0x118, 8, 0, 0})
};

/// Class /Script/JunoMusicRuntime.JunoActiveMusicElementController_Base
/// Size: 0x00E8 (0x000028 - 0x000110)
class UJunoActiveMusicElementController_Base : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
	SMember(FTimerHandle)                              CooldownTimer                                               OFFSET(getStruct<T>, {0x28, 8, 0, 0})
	SMember(FTimerHandle)                              SchedulingTimer                                             OFFSET(getStruct<T>, {0x40, 8, 0, 0})
	SMember(FDelegateProperty)                         OnJunoActiveMusicElementControllerFinishedPlaying           OFFSET(getStruct<T>, {0x58, 12, 0, 0})
	CMember(TEnumAsByte<EJunoActiveMusicElementState>) JunoActiveMusicElementState                                 OFFSET(get<T>, {0x80, 1, 0, 0})
	CMember(class UJunoActiveMusicElement_Base*)       JunoActiveMusicElement                                      OFFSET(get<T>, {0x88, 8, 0, 0})
	CMember(TArray<class UClass*>)                     JunoMusicPlaybackConditions                                 OFFSET(get<T>, {0x90, 16, 0, 0})
	CMember(TArray<FName>)                             CooldownGroups                                              OFFSET(get<T>, {0xC0, 16, 0, 0})
};

/// Class /Script/JunoMusicRuntime.JunoActiveMusicElementController_DayPhaseOffset
/// Size: 0x0000 (0x000110 - 0x000110)
class UJunoActiveMusicElementController_DayPhaseOffset : public UJunoActiveMusicElementController_Base
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
};

/// Class /Script/JunoMusicRuntime.JunoActiveMusicElementController_RandomTimeInDayPhase
/// Size: 0x0000 (0x000110 - 0x000110)
class UJunoActiveMusicElementController_RandomTimeInDayPhase : public UJunoActiveMusicElementController_Base
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
};

/// Class /Script/JunoMusicRuntime.JunoActiveMusicElementController_RandomTimeInDay
/// Size: 0x0010 (0x000110 - 0x000120)
class UJunoActiveMusicElementController_RandomTimeInDay : public UJunoActiveMusicElementController_Base
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
};

/// Class /Script/JunoMusicRuntime.JunoActiveMusicElementController_CustomBPCondition
/// Size: 0x0030 (0x000110 - 0x000140)
class UJunoActiveMusicElementController_CustomBPCondition : public UJunoActiveMusicElementController_Base
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
	SMember(FTimerHandle)                              UpdateTimerHandle                                           OFFSET(getStruct<T>, {0x110, 8, 0, 0})
	SMember(FRandomStream)                             RandomStream                                                OFFSET(getStruct<T>, {0x138, 8, 0, 0})
};

/// Class /Script/JunoMusicRuntime.JunoMusicControllerSubsystem
/// Size: 0x0038 (0x000030 - 0x000068)
class UJunoMusicControllerSubsystem : public UWorldSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	CMember(class UJunoMusicElementController*)        MusicCueController                                          OFFSET(get<T>, {0x58, 8, 0, 0})
	CMember(class UJunoMusicDataAggregator*)           JunoMusicDataAggregator                                     OFFSET(get<T>, {0x60, 8, 0, 0})


	/// Functions
	// Function /Script/JunoMusicRuntime.JunoMusicControllerSubsystem.RemoveMusicState
	// void RemoveMusicState(FGameplayTag& InState);                                                                            // [0xcc17e04] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoMusicRuntime.JunoMusicControllerSubsystem.PushMusicStates
	// void PushMusicStates(FGameplayTagContainer& InStates);                                                                   // [0xcc17ccc] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoMusicRuntime.JunoMusicControllerSubsystem.PushMusicState
	// void PushMusicState(FGameplayTag& InState);                                                                              // [0xcc17c04] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoMusicRuntime.JunoMusicControllerSubsystem.GetCollectedString
	// FString GetCollectedString(FName ParameterName, ESetParamResult& Result);                                                // [0xcc17660] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoMusicRuntime.JunoMusicControllerSubsystem.GetCollectedInt
	// int32_t GetCollectedInt(FName ParameterName, ESetParamResult& Result);                                                   // [0xcc1722c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoMusicRuntime.JunoMusicControllerSubsystem.GetCollectedFloat
	// float GetCollectedFloat(FName ParameterName, ESetParamResult& Result);                                                   // [0xcc16de4] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoMusicRuntime.JunoMusicControllerSubsystem.GetCollectedBool
	// bool GetCollectedBool(FName ParameterName, ESetParamResult& Result);                                                     // [0xcc169c8] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/JunoMusicRuntime.JunoMusicDataCollector
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoMusicDataCollector : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/JunoMusicRuntime.JunoMusicDataCollector.BP_OnUpdate
	// void BP_OnUpdate(float DeltaSeconds, class UMetasoundParameterPack* AggregatedData);                                     // [0x1340978] Event|Public|BlueprintEvent 
	// Function /Script/JunoMusicRuntime.JunoMusicDataCollector.BP_OnUnregistered
	// void BP_OnUnregistered();                                                                                                // [0x1340978] Event|Public|BlueprintEvent 
	// Function /Script/JunoMusicRuntime.JunoMusicDataCollector.BP_OnRegistered
	// void BP_OnRegistered(class UMetasoundParameterPack* AggregatedData);                                                     // [0x1340978] Event|Public|BlueprintEvent 
};

/// Class /Script/JunoMusicRuntime.JunoMusicDataAggregatorConfig
/// Size: 0x0010 (0x000030 - 0x000040)
class UJunoMusicDataAggregatorConfig : public UPrimaryDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FJunoMusicDataAggregatorSettings)          DataAggregatorSettings                                      OFFSET(getStruct<T>, {0x30, 16, 0, 0})
};

/// Class /Script/JunoMusicRuntime.JunoMusicDataAggregator
/// Size: 0x0038 (0x000028 - 0x000060)
class UJunoMusicDataAggregator : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(TArray<class UJunoMusicDataCollector*>)    DataCollectors                                              OFFSET(get<T>, {0x48, 16, 0, 0})
	CMember(class UMetasoundParameterPack*)            AggregatedData                                              OFFSET(get<T>, {0x58, 8, 0, 0})
};

/// Class /Script/JunoMusicRuntime.JunoMusicDataCollector_Combat
/// Size: 0x0038 (0x000028 - 0x000060)
class UJunoMusicDataCollector_Combat : public UJunoMusicDataCollector
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(TArray<class UFortGameplayDataTrackerComponent*>) RegisteredDataTrackerComponents                      OFFSET(get<T>, {0x28, 16, 0, 0})
	SMember(FGameplayTag)                              NumAggressiveEnemiesTag                                     OFFSET(getStruct<T>, {0x38, 4, 0, 0})
	SMember(FGameplayTag)                              NumAggressiveCreaturesTag                                   OFFSET(getStruct<T>, {0x3C, 4, 0, 0})
	SMember(FGameplayTag)                              NumAggressiveMinifigsTag                                    OFFSET(getStruct<T>, {0x40, 4, 0, 0})
	SMember(FName)                                     IsInCombatParameterName                                     OFFSET(getStruct<T>, {0x44, 4, 0, 0})
	SMember(FName)                                     CombatThreatLevelParameterName                              OFFSET(getStruct<T>, {0x48, 4, 0, 0})
	SMember(FName)                                     MinifigWeightParameterName                                  OFFSET(getStruct<T>, {0x4C, 4, 0, 0})
	SMember(FName)                                     CreatureWeightParameterName                                 OFFSET(getStruct<T>, {0x50, 4, 0, 0})
	DMember(bool)                                      bDebug                                                      OFFSET(get<bool>, {0x58, 1, 0, 0})


	/// Functions
	// Function /Script/JunoMusicRuntime.JunoMusicDataCollector_Combat.SetThreatLevelMultiplier
	// void SetThreatLevelMultiplier(float InThreatLevelMultiplier);                                                            // [0xcc18130] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/JunoMusicRuntime.JunoMusicElementController
/// Size: 0x0158 (0x000028 - 0x000180)
class UJunoMusicElementController : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 384;

public:
	CMember(TMap<UDataTable*, FGameplayTagQuery>)      ElementTables                                               OFFSET(get<T>, {0x38, 80, 0, 0})
	CMember(TMap<FGameplayTag, UJunoActiveMusicCue*>)  ActiveMusicElements                                         OFFSET(get<T>, {0x88, 80, 0, 0})
};

/// Class /Script/JunoMusicRuntime.JunoMusicManager
/// Size: 0x0168 (0x000030 - 0x000198)
class UJunoMusicManager : public UGameInstanceSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 408;

public:
	CMember(TArray<class UJunoMusicPlaylistDataAsset*>) JunoMusicPlaylistCollections                               OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TMap<UWorld*, FJunoWorldMusicSystem>)      WorldMusicSystems                                           OFFSET(get<T>, {0x40, 80, 0, 0})


	/// Functions
	// Function /Script/JunoMusicRuntime.JunoMusicManager.StopWorldMusicSystem
	// void StopWorldMusicSystem(class UWorld* World);                                                                          // [0xcc18230] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoMusicRuntime.JunoMusicManager.StartWorldMusicSystem
	// void StartWorldMusicSystem(class UWorld* World);                                                                         // [0xcc181b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoMusicRuntime.JunoMusicManager.SetSuspendWorldActiveMusicPlayback
	// void SetSuspendWorldActiveMusicPlayback(class UWorld* World, bool bSuspendPlayback, bool bStopCurrentlyPlayingMusic);    // [0xcc18024] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoMusicRuntime.JunoMusicManager.SetSuspendActiveMusicPlayback
	// void SetSuspendActiveMusicPlayback(bool bSuspendPlayback, bool bStopCurrentlyPlayingMusic);                              // [0xcc17f60] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoMusicRuntime.JunoMusicManager.SetActiveJunoMusicManagerData
	// void SetActiveJunoMusicManagerData(FActiveJunoMusicManagerData& ActiveJunoMusicManagerDataIn);                           // [0xcc17ecc] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoMusicRuntime.JunoMusicManager.RemoveJunoMusicPlaylist
	// void RemoveJunoMusicPlaylist(class UJunoMusicPlaylistDataAsset* JunoMusicPlaylist);                                      // [0xcc17d84] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoMusicRuntime.JunoMusicManager.GetCollectedString
	// FString GetCollectedString(class UObject* WorldContextObject, FName ParameterName, ESetParamResult& Result);             // [0xcc17818] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoMusicRuntime.JunoMusicManager.GetCollectedInt
	// int32_t GetCollectedInt(class UObject* WorldContextObject, FName ParameterName, ESetParamResult& Result);                // [0xcc173d4] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoMusicRuntime.JunoMusicManager.GetCollectedFloat
	// float GetCollectedFloat(class UObject* WorldContextObject, FName ParameterName, ESetParamResult& Result);                // [0xcc16f94] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoMusicRuntime.JunoMusicManager.GetCollectedBool
	// bool GetCollectedBool(class UObject* WorldContextObject, FName ParameterName, ESetParamResult& Result);                  // [0xcc16b54] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoMusicRuntime.JunoMusicManager.AddJunoMusicPlaylist
	// void AddJunoMusicPlaylist(class UJunoMusicPlaylistDataAsset* JunoMusicPlaylist);                                         // [0xcc168cc] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/JunoMusicRuntime.JunoMusicPlaybackConditionsPool
/// Size: 0x0010 (0x000028 - 0x000038)
class UJunoMusicPlaybackConditionsPool : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<class UJunoMusicPlaybackCondition*>) CachedPlaybackConditions                                   OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Class /Script/JunoMusicRuntime.JunoMusicPlaybackCondition
/// Size: 0x0008 (0x000028 - 0x000030)
class UJunoMusicPlaybackCondition : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:


	/// Functions
	// Function /Script/JunoMusicRuntime.JunoMusicPlaybackCondition.BP_ShouldPlay
	// bool BP_ShouldPlay();                                                                                                    // [0x372a328] Native|Event|Public|BlueprintEvent 
	// Function /Script/JunoMusicRuntime.JunoMusicPlaybackCondition.BP_OnUnregistered
	// void BP_OnUnregistered();                                                                                                // [0x1340978] Event|Public|BlueprintEvent 
	// Function /Script/JunoMusicRuntime.JunoMusicPlaybackCondition.BP_OnRegistered
	// void BP_OnRegistered();                                                                                                  // [0x1340978] Event|Public|BlueprintEvent 
};

/// Class /Script/JunoMusicRuntime.JunoMusicPlaylistDataAsset
/// Size: 0x0078 (0x000030 - 0x0000A8)
class UJunoMusicPlaylistDataAsset : public UPrimaryDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	SMember(FJunoMusicPlaylist)                        JunoMusicPlaylist                                           OFFSET(getStruct<T>, {0x30, 120, 0, 0})
};

/// Class /Script/JunoMusicRuntime.JunoMusicPlayspaceProbe
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoMusicPlayspaceProbe : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/JunoMusicRuntime.JunoMusicPlayspaceProbe.BP_OnUpdate
	// void BP_OnUpdate(float DeltaSeconds);                                                                                    // [0x1340978] Event|Public|BlueprintEvent 
	// Function /Script/JunoMusicRuntime.JunoMusicPlayspaceProbe.BP_OnUnregistered
	// void BP_OnUnregistered();                                                                                                // [0x1340978] Event|Public|BlueprintEvent 
	// Function /Script/JunoMusicRuntime.JunoMusicPlayspaceProbe.BP_OnRegistered
	// void BP_OnRegistered();                                                                                                  // [0x1340978] Event|Public|BlueprintEvent 
};

/// Class /Script/JunoMusicRuntime.JunoMusicPlayspaceProbeSubsystem
/// Size: 0x0038 (0x000030 - 0x000068)
class UJunoMusicPlayspaceProbeSubsystem : public UWorldSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	CMember(TArray<class UJunoMusicPlayspaceProbe*>)   DataProbes                                                  OFFSET(get<T>, {0x58, 16, 0, 0})
};

/// Class /Script/JunoMusicRuntime.JunoMusicPlayspaceProbeDataAsset
/// Size: 0x0010 (0x000030 - 0x000040)
class UJunoMusicPlayspaceProbeDataAsset : public UPrimaryDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FJunoMusicPlayspaceProbeData)              JunoMusicProbes                                             OFFSET(getStruct<T>, {0x30, 16, 0, 0})
};

/// Class /Script/JunoMusicRuntime.JunoMusicPlayspaceProbe_Combat
/// Size: 0x0018 (0x000028 - 0x000040)
class UJunoMusicPlayspaceProbe_Combat : public UJunoMusicPlayspaceProbe
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FName)                                     IsInCombatParameterName                                     OFFSET(getStruct<T>, {0x28, 4, 0, 0})
	SMember(FGameplayTag)                              CombatMusicStateTag                                         OFFSET(getStruct<T>, {0x2C, 4, 0, 0})
};

/// Class /Script/JunoMusicRuntime.JunoMusicPlayspaceProbe_Environment
/// Size: 0x0070 (0x000028 - 0x000098)
class UJunoMusicPlayspaceProbe_Environment : public UJunoMusicPlayspaceProbe
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:


	/// Functions
	// Function /Script/JunoMusicRuntime.JunoMusicPlayspaceProbe_Environment.CacheFortPlayerPawn
	// void CacheFortPlayerPawn(class AFortPawn* NewPawn);                                                                      // [0xcc1694c] Final|Native|Private 
};

/// Class /Script/JunoMusicRuntime.GameFeatureAction_AddJunoMusicPlaylist
/// Size: 0x0028 (0x000028 - 0x000050)
class UGameFeatureAction_AddJunoMusicPlaylist : public UGameFeatureAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FSoftObjectPath)                           JunoMusicPlaylist                                           OFFSET(getStruct<T>, {0x28, 24, 0, 0})
};

/// Class /Script/JunoMusicRuntime.GameFeatureAction_SetActiveJunoMusicManagerData
/// Size: 0x0010 (0x000028 - 0x000038)
class UGameFeatureAction_SetActiveJunoMusicManagerData : public UGameFeatureAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FActiveJunoMusicManagerData)               ActiveJunoMusicManagerData                                  OFFSET(getStruct<T>, {0x28, 16, 0, 0})
};

/// Struct /Script/JunoMusicRuntime.ElementControllerArray
/// Size: 0x0010 (0x000000 - 0x000010)
class FElementControllerArray : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<class UJunoActiveMusicElementController_Base*>) ElementControllerArray                          OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/JunoMusicRuntime.JunoMusicDataAggregatorSettings
/// Size: 0x0010 (0x000000 - 0x000010)
class FJunoMusicDataAggregatorSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<class UClass*>)                     JunoMusicDataCollectors                                     OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/JunoMusicRuntime.JunoMusicElementData
/// Size: 0x00E8 (0x000008 - 0x0000F0)
class FJunoMusicElementData : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x8, 1, 0, 0})
	SMember(FGameplayTag)                              ElementName                                                 OFFSET(getStruct<T>, {0xC, 4, 0, 0})
	SMember(FGameplayTagQuery)                         ElementConditions                                           OFFSET(getStruct<T>, {0x10, 72, 0, 0})
	SMember(FGameplayTagQuery)                         StatePushConditions                                         OFFSET(getStruct<T>, {0x58, 72, 0, 0})
	CMember(TArray<FSoftObjectPath>)                   MusicCues                                                   OFFSET(get<T>, {0xA0, 16, 0, 0})
	CMember(EJunoMusicCueSelectionBehavior)            CueSelectionBehavior                                        OFFSET(get<T>, {0xB0, 1, 0, 0})
	SMember(FVector2D)                                 FadeInOutValues                                             OFFSET(getStruct<T>, {0xB8, 16, 0, 0})
	DMember(float)                                     PlaybackPriority                                            OFFSET(get<float>, {0xC8, 4, 0, 0})
	DMember(float)                                     PlaybackProbabilityPercent                                  OFFSET(get<float>, {0xCC, 4, 0, 0})
	DMember(bool)                                      bStopOnInvalidConditions                                    OFFSET(get<bool>, {0xD0, 1, 0, 0})
	SMember(FVector2D)                                 ElementCooldownInSeconds                                    OFFSET(getStruct<T>, {0xD8, 16, 0, 0})
	DMember(bool)                                      bReceiveAggregatedData                                      OFFSET(get<bool>, {0xE8, 1, 0, 0})
};

/// Struct /Script/JunoMusicRuntime.JunoWorldMusicSystem
/// Size: 0x0018 (0x000000 - 0x000018)
class FJunoWorldMusicSystem : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(class UActiveJunoMusicPlayer*)             ActiveJunoMusicPlayer                                       OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class UJunoMusicDataAggregator*)           JunoMusicDataAggregator                                     OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/JunoMusicRuntime.ActiveJunoMusicManagerData
/// Size: 0x0010 (0x000000 - 0x000010)
class FActiveJunoMusicManagerData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FVector2D)                                 MainCooldownTimeInSeconds                                   OFFSET(getStruct<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/JunoMusicRuntime.JunoMusicPlaylistElement
/// Size: 0x00B8 (0x000000 - 0x0000B8)
class FJunoMusicPlaylistElement : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	SMember(FSoftObjectPath)                           Music                                                       OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FVector2D)                                 FadeInOutValues                                             OFFSET(getStruct<T>, {0x18, 16, 0, 0})
	CMember(TEnumAsByte<EMusicScheduleMode>)           MusicScheduleMode                                           OFFSET(get<T>, {0x28, 1, 0, 0})
	SMember(FVector2D)                                 RangeInSeconds                                              OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	CMember(EFortDayPhase)                             DayPhase                                                    OFFSET(get<T>, {0x40, 1, 0, 0})
	SMember(FVector2D)                                 RangeInGameHours                                            OFFSET(getStruct<T>, {0x48, 16, 0, 0})
	DMember(bool)                                      bUpdateAtTickRate                                           OFFSET(get<bool>, {0x58, 1, 0, 0})
	SMember(FVector2D)                                 UpdatePeriodRange                                           OFFSET(getStruct<T>, {0x60, 16, 0, 0})
	CMember(TArray<class UClass*>)                     CustomPlaybackConditions                                    OFFSET(get<T>, {0x70, 16, 0, 0})
	DMember(bool)                                      bFlipPlaybackConditions                                     OFFSET(get<bool>, {0x80, 1, 0, 0})
	DMember(float)                                     PlaybackProbabilityPercent                                  OFFSET(get<float>, {0x84, 4, 0, 0})
	DMember(float)                                     PlaybackPriority                                            OFFSET(get<float>, {0x88, 4, 0, 0})
	DMember(bool)                                      bInterruptible                                              OFFSET(get<bool>, {0x8C, 1, 0, 0})
	SMember(FVector2D)                                 PlaybackCooldownInSeconds                                   OFFSET(getStruct<T>, {0x90, 16, 0, 0})
	DMember(bool)                                      bResetCooldownOnFalseConditions                             OFFSET(get<bool>, {0xA0, 1, 0, 0})
	CMember(TArray<FName>)                             CooldownGroupNames                                          OFFSET(get<T>, {0xA8, 16, 0, 0})
};

/// Struct /Script/JunoMusicRuntime.JunoMusicPlaylist
/// Size: 0x0078 (0x000000 - 0x000078)
class FJunoMusicPlaylist : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	SMember(FName)                                     PlaylistName                                                OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(TArray<FJunoMusicPlaylistElement>)         MusicPlaylist                                               OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(TMap<FName, FVector2D>)                    CooldownGroups                                              OFFSET(get<T>, {0x18, 80, 0, 0})
	SMember(FJunoMusicDataAggregatorSettings)          DataAggregatorSettings                                      OFFSET(getStruct<T>, {0x68, 16, 0, 0})
};

/// Struct /Script/JunoMusicRuntime.JunoMusicPlayspaceProbeData
/// Size: 0x0010 (0x000000 - 0x000010)
class FJunoMusicPlayspaceProbeData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<class UClass*>)                     JunoMusicPlayspaceProbes                                    OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Enum /Script/JunoMusicRuntime.EJunoActiveMusicElementState
/// Size: 0x05
enum class EJunoActiveMusicElementState : uint8_t
{
	Inactive                                                                         = 0,
	Scheduled                                                                        = 1,
	Active                                                                           = 2,
	CoolingDown                                                                      = 3,
	EJunoActiveMusicElementState_MAX                                                 = 4
};

/// Enum /Script/JunoMusicRuntime.EJunoMusicCueSelectionBehavior
/// Size: 0x05
enum class EJunoMusicCueSelectionBehavior : uint8_t
{
	EJunoMusicCueSelectionBehavior__Sequential                                       = 0,
	EJunoMusicCueSelectionBehavior__Shuffle                                          = 1,
	EJunoMusicCueSelectionBehavior__Random                                           = 2,
	EJunoMusicCueSelectionBehavior__Count                                            = 3,
	EJunoMusicCueSelectionBehavior__EJunoMusicCueSelectionBehavior_MAX               = 4
};

/// Enum /Script/JunoMusicRuntime.EMusicScheduleMode
/// Size: 0x06
enum class EMusicScheduleMode : uint8_t
{
	RelativeToDayPhaseChange                                                         = 0,
	RandomTimeDuringDayPhase                                                         = 1,
	PlayAtSpecificTimesOfDay                                                         = 2,
	OnlyBlueprintPlaybackConditions                                                  = 3,
	Count                                                                            = 4,
	EMusicScheduleMode_MAX                                                           = 5
};

