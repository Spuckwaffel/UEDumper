
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: GameFeatures
/// dependency: GameplayTags
/// dependency: MetasoundEngine
/// dependency: MetasoundFrontend

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

/// Class /Script/JunoMusicRuntime.ActiveJunoMusicPlayer
/// Size: 0x0188 (0x000028 - 0x0001B0)
class UActiveJunoMusicPlayer : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x88];                                      // 0x0000   (0x0088)  MISSED
	FTimerHandle                                       CooldownTimer;                                              // 0x0088   (0x0008)  
	unsigned char                                      UnknownData01_5[0x10];                                      // 0x0090   (0x0010)  MISSED
	TArray<class USoundBase*>                          LoadedMusicAssets;                                          // 0x00A0   (0x0010)  
	unsigned char                                      UnknownData02_5[0x10];                                      // 0x00B0   (0x0010)  MISSED
	SDK_UNDEFINED(16,14471) /* TArray<TWeakObjectPtr<UJunoMusicPlaylistDataAsset*>> */ __um(JunoMusicElementsToCreate); // 0x00C0   (0x0010)  
	unsigned char                                      UnknownData03_5[0x10];                                      // 0x00D0   (0x0010)  MISSED
	class UJunoActiveMusicElementController_Base*      PlayingActiveMusicElementController;                        // 0x00E0   (0x0008)  
	class UJunoMusicPlaybackConditionsPool*            PlaybackConditionsPool;                                     // 0x00E8   (0x0008)  
	SDK_UNDEFINED(80,14472) /* TMap<UJunoMusicPlaylistDataAsset*, FElementControllerArray> */ __um(AllActiveMusicElementControllers); // 0x00F0   (0x0050)  
	TArray<class UJunoMusicPlaylistDataAsset*>         JunoMusicPlaylistCollection;                                // 0x0140   (0x0010)  
	unsigned char                                      UnknownData04_5[0x10];                                      // 0x0150   (0x0010)  MISSED
	SDK_UNDEFINED(80,14473) /* TMap<FName, UJunoActiveMusicCooldownGroup*> */ __um(JunoMusicCooldownGroups);       // 0x0160   (0x0050)  


	/// Functions
	// Function /Script/JunoMusicRuntime.ActiveJunoMusicPlayer.OnDayNightPhaseChangeSignature
	// void OnDayNightPhaseChangeSignature(EFortDayPhase CurrentDayPhaseIn, EFortDayPhase PreviousDayPhaseIn, bool bAtCreationIn); // [0xb4f3074] Final|Native|Public  
	// Function /Script/JunoMusicRuntime.ActiveJunoMusicPlayer.OnActiveMusicPlayerCooldownFinished
	// void OnActiveMusicPlayerCooldownFinished();                                                                           // [0xb4f305c] Final|Native|Public  
	// Function /Script/JunoMusicRuntime.ActiveJunoMusicPlayer.OnActiveMusicElementControllerFinishedPlaying
	// void OnActiveMusicElementControllerFinishedPlaying();                                                                 // [0xb4f3048] Final|Native|Public  
};

/// Class /Script/JunoMusicRuntime.GameFeatureAction_BindJunoMusicManagerToPostWorldInit
/// Size: 0x0010 (0x000028 - 0x000038)
class UGameFeatureAction_BindJunoMusicManagerToPostWorldInit : public UGameFeatureAction
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0028   (0x0010)  MISSED
};

/// Class /Script/JunoMusicRuntime.GameFeatureAction_RegisterJunoMusicDataAggregatorSettings
/// Size: 0x0020 (0x000028 - 0x000048)
class UGameFeatureAction_RegisterJunoMusicDataAggregatorSettings : public UGameFeatureAction
{ 
public:
	TArray<FSoftObjectPath>                            JunoMusicDataAggregatorSettings;                            // 0x0028   (0x0010)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0038   (0x0010)  MISSED
};

/// Class /Script/JunoMusicRuntime.GameFeatureAction_RegisterJunoMusicElementTable
/// Size: 0x0020 (0x000028 - 0x000048)
class UGameFeatureAction_RegisterJunoMusicElementTable : public UGameFeatureAction
{ 
public:
	TArray<FSoftObjectPath>                            JunoMusicElementDataTables;                                 // 0x0028   (0x0010)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0038   (0x0010)  MISSED
};

/// Class /Script/JunoMusicRuntime.GameFeatureAction_RegisterJunoMusicPlayspaceProbes
/// Size: 0x0020 (0x000028 - 0x000048)
class UGameFeatureAction_RegisterJunoMusicPlayspaceProbes : public UGameFeatureAction
{ 
public:
	TArray<FSoftObjectPath>                            JunoMusicProbesDataAssets;                                  // 0x0028   (0x0010)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0038   (0x0010)  MISSED
};

/// Class /Script/JunoMusicRuntime.JunoActiveMusicCue
/// Size: 0x0098 (0x000028 - 0x0000C0)
class UJunoActiveMusicCue : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x58];                                      // 0x0000   (0x0058)  MISSED
	class UAudioComponent*                             AudioComponent;                                             // 0x0058   (0x0008)  
	class USoundBase*                                  LoadedMusic;                                                // 0x0060   (0x0008)  
	unsigned char                                      UnknownData01_5[0x10];                                      // 0x0068   (0x0010)  MISSED
	class UMetasoundGeneratorHandle*                   MetasoundGeneratorHandle;                                   // 0x0078   (0x0008)  
	unsigned char                                      UnknownData02_6[0x40];                                      // 0x0080   (0x0040)  MISSED
};

/// Class /Script/JunoMusicRuntime.JunoActiveMusicCooldownGroup
/// Size: 0x0030 (0x000028 - 0x000058)
class UJunoActiveMusicCooldownGroup : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x38];                                      // 0x0000   (0x0038)  MISSED
	FTimerHandle                                       CooldownTimer;                                              // 0x0038   (0x0008)  
	unsigned char                                      UnknownData01_6[0x18];                                      // 0x0040   (0x0018)  MISSED
};

/// Struct /Script/JunoMusicRuntime.JunoMusicPlaylistElement
/// Size: 0x00B8 (0x000000 - 0x0000B8)
struct FJunoMusicPlaylistElement
{ 
	FSoftObjectPath                                    Music;                                                      // 0x0000   (0x0018)  
	FVector2D                                          FadeInOutValues;                                            // 0x0018   (0x0010)  
	SDK_UNDEFINED(1,14474) /* TEnumAsByte<EMusicScheduleMode> */ __um(MusicScheduleMode);                          // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0029   (0x0007)  MISSED
	FVector2D                                          RangeInSeconds;                                             // 0x0030   (0x0010)  
	EFortDayPhase                                      DayPhase;                                                   // 0x0040   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0041   (0x0007)  MISSED
	FVector2D                                          RangeInGameHours;                                           // 0x0048   (0x0010)  
	bool                                               bUpdateAtTickRate;                                          // 0x0058   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x0059   (0x0007)  MISSED
	FVector2D                                          UpdatePeriodRange;                                          // 0x0060   (0x0010)  
	TArray<class UClass*>                              CustomPlaybackConditions;                                   // 0x0070   (0x0010)  
	bool                                               bFlipPlaybackConditions;                                    // 0x0080   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x0081   (0x0003)  MISSED
	float                                              PlaybackProbabilityPercent;                                 // 0x0084   (0x0004)  
	float                                              PlaybackPriority;                                           // 0x0088   (0x0004)  
	bool                                               bInterruptible;                                             // 0x008C   (0x0001)  
	unsigned char                                      UnknownData04_5[0x3];                                       // 0x008D   (0x0003)  MISSED
	FVector2D                                          PlaybackCooldownInSeconds;                                  // 0x0090   (0x0010)  
	bool                                               bResetCooldownOnFalseConditions;                            // 0x00A0   (0x0001)  
	unsigned char                                      UnknownData05_5[0x7];                                       // 0x00A1   (0x0007)  MISSED
	TArray<FName>                                      CooldownGroupNames;                                         // 0x00A8   (0x0010)  
};

/// Class /Script/JunoMusicRuntime.JunoActiveMusicElement_Base
/// Size: 0x00C8 (0x000028 - 0x0000F0)
class UJunoActiveMusicElement_Base : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x38];                                      // 0x0000   (0x0038)  MISSED
	FJunoMusicPlaylistElement                          JunoMusicPlaylistElement;                                   // 0x0038   (0x00B8)  


	/// Functions
	// Function /Script/JunoMusicRuntime.JunoActiveMusicElement_Base.OnFinishedPlaying
	// void OnFinishedPlaying();                                                                                             // [0x17b4428] Native|Public        
};

/// Class /Script/JunoMusicRuntime.JunoActiveMusicElement_AudioComponent
/// Size: 0x0038 (0x0000F0 - 0x000128)
class UJunoActiveMusicElement_AudioComponent : public UJunoActiveMusicElement_Base
{ 
public:
	class UAudioComponent*                             AudioComponent;                                             // 0x00F0   (0x0008)  
	class USoundBase*                                  Music;                                                      // 0x00F8   (0x0008)  
	unsigned char                                      UnknownData00_5[0x18];                                      // 0x0100   (0x0018)  MISSED
	class UMetasoundGeneratorHandle*                   MetasoundGeneratorHandle;                                   // 0x0118   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0120   (0x0008)  MISSED
};

/// Class /Script/JunoMusicRuntime.JunoActiveMusicElementController_Base
/// Size: 0x00E8 (0x000028 - 0x000110)
class UJunoActiveMusicElementController_Base : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	FTimerHandle                                       CooldownTimer;                                              // 0x0028   (0x0008)  
	unsigned char                                      UnknownData01_5[0x10];                                      // 0x0030   (0x0010)  MISSED
	FTimerHandle                                       SchedulingTimer;                                            // 0x0040   (0x0008)  
	unsigned char                                      UnknownData02_5[0x10];                                      // 0x0048   (0x0010)  MISSED
	SDK_UNDEFINED(12,14475) /* FDelegateProperty */    __um(OnJunoActiveMusicElementControllerFinishedPlaying);    // 0x0058   (0x000C)  
	unsigned char                                      UnknownData03_5[0x1C];                                      // 0x0064   (0x001C)  MISSED
	SDK_UNDEFINED(1,14476) /* TEnumAsByte<EJunoActiveMusicElementState> */ __um(JunoActiveMusicElementState);      // 0x0080   (0x0001)  
	unsigned char                                      UnknownData04_5[0x7];                                       // 0x0081   (0x0007)  MISSED
	class UJunoActiveMusicElement_Base*                JunoActiveMusicElement;                                     // 0x0088   (0x0008)  
	TArray<class UClass*>                              JunoMusicPlaybackConditions;                                // 0x0090   (0x0010)  
	unsigned char                                      UnknownData05_5[0x20];                                      // 0x00A0   (0x0020)  MISSED
	TArray<FName>                                      CooldownGroups;                                             // 0x00C0   (0x0010)  
	unsigned char                                      UnknownData06_6[0x40];                                      // 0x00D0   (0x0040)  MISSED
};

/// Class /Script/JunoMusicRuntime.JunoActiveMusicElementController_DayPhaseOffset
/// Size: 0x0000 (0x000110 - 0x000110)
class UJunoActiveMusicElementController_DayPhaseOffset : public UJunoActiveMusicElementController_Base
{ 
public:
};

/// Class /Script/JunoMusicRuntime.JunoActiveMusicElementController_RandomTimeInDayPhase
/// Size: 0x0000 (0x000110 - 0x000110)
class UJunoActiveMusicElementController_RandomTimeInDayPhase : public UJunoActiveMusicElementController_Base
{ 
public:
};

/// Class /Script/JunoMusicRuntime.JunoActiveMusicElementController_RandomTimeInDay
/// Size: 0x0010 (0x000110 - 0x000120)
class UJunoActiveMusicElementController_RandomTimeInDay : public UJunoActiveMusicElementController_Base
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0110   (0x0010)  MISSED
};

/// Class /Script/JunoMusicRuntime.JunoActiveMusicElementController_CustomBPCondition
/// Size: 0x0030 (0x000110 - 0x000140)
class UJunoActiveMusicElementController_CustomBPCondition : public UJunoActiveMusicElementController_Base
{ 
public:
	FTimerHandle                                       UpdateTimerHandle;                                          // 0x0110   (0x0008)  
	unsigned char                                      UnknownData00_5[0x20];                                      // 0x0118   (0x0020)  MISSED
	FRandomStream                                      RandomStream;                                               // 0x0138   (0x0008)  
};

/// Class /Script/JunoMusicRuntime.JunoMusicControllerSubsystem
/// Size: 0x0040 (0x000030 - 0x000070)
class UJunoMusicControllerSubsystem : public UWorldSubsystem
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0030   (0x0028)  MISSED
	class UJunoMusicElementController*                 MusicCueController;                                         // 0x0058   (0x0008)  
	class UJunoMusicDataAggregator*                    JunoMusicDataAggregator;                                    // 0x0060   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0068   (0x0008)  MISSED


	/// Functions
	// Function /Script/JunoMusicRuntime.JunoMusicControllerSubsystem.RemoveMusicState
	// void RemoveMusicState(FGameplayTag& InState);                                                                         // [0xb4f3370] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoMusicRuntime.JunoMusicControllerSubsystem.PushMusicStates
	// void PushMusicStates(FGameplayTagContainer& InStates);                                                                // [0xb4f3238] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoMusicRuntime.JunoMusicControllerSubsystem.PushMusicState
	// void PushMusicState(FGameplayTag& InState);                                                                           // [0xb4f3170] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoMusicRuntime.JunoMusicControllerSubsystem.GetCollectedString
	// FString GetCollectedString(FName ParameterName, ESetParamResult& Result);                                             // [0xb4f2d40] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoMusicRuntime.JunoMusicControllerSubsystem.GetCollectedInt
	// int32_t GetCollectedInt(FName ParameterName, ESetParamResult& Result);                                                // [0xb4f2a90] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoMusicRuntime.JunoMusicControllerSubsystem.GetCollectedFloat
	// float GetCollectedFloat(FName ParameterName, ESetParamResult& Result);                                                // [0xb4f27c8] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoMusicRuntime.JunoMusicControllerSubsystem.GetCollectedBool
	// bool GetCollectedBool(FName ParameterName, ESetParamResult& Result);                                                  // [0xb4f2530] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/JunoMusicRuntime.JunoMusicDataCollector
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoMusicDataCollector : public UObject
{ 
public:


	/// Functions
	// Function /Script/JunoMusicRuntime.JunoMusicDataCollector.BP_OnUpdate
	// void BP_OnUpdate(float DeltaSeconds, class UMetasoundParameterPack* AggregatedData);                                  // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/JunoMusicRuntime.JunoMusicDataCollector.BP_OnUnregistered
	// void BP_OnUnregistered();                                                                                             // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/JunoMusicRuntime.JunoMusicDataCollector.BP_OnRegistered
	// void BP_OnRegistered(class UMetasoundParameterPack* AggregatedData);                                                  // [0x18a39e4] Event|Public|BlueprintEvent 
};

/// Struct /Script/JunoMusicRuntime.JunoMusicDataAggregatorSettings
/// Size: 0x0010 (0x000000 - 0x000010)
struct FJunoMusicDataAggregatorSettings
{ 
	TArray<class UClass*>                              JunoMusicDataCollectors;                                    // 0x0000   (0x0010)  
};

/// Class /Script/JunoMusicRuntime.JunoMusicDataAggregatorConfig
/// Size: 0x0010 (0x000030 - 0x000040)
class UJunoMusicDataAggregatorConfig : public UPrimaryDataAsset
{ 
public:
	FJunoMusicDataAggregatorSettings                   DataAggregatorSettings;                                     // 0x0030   (0x0010)  
};

/// Class /Script/JunoMusicRuntime.JunoMusicDataAggregator
/// Size: 0x0038 (0x000028 - 0x000060)
class UJunoMusicDataAggregator : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x48];                                      // 0x0000   (0x0048)  MISSED
	TArray<class UJunoMusicDataCollector*>             DataCollectors;                                             // 0x0048   (0x0010)  
	class UMetasoundParameterPack*                     AggregatedData;                                             // 0x0058   (0x0008)  
};

/// Class /Script/JunoMusicRuntime.JunoMusicDataCollector_Combat
/// Size: 0x0028 (0x000028 - 0x000050)
class UJunoMusicDataCollector_Combat : public UJunoMusicDataCollector
{ 
public:
	TArray<class UFortGameplayDataTrackerComponent*>   RegisteredDataTrackerComponents;                            // 0x0028   (0x0010)  
	FGameplayTag                                       NumAggressiveEnemiesTag;                                    // 0x0038   (0x0004)  
	FName                                              IsInCombatParameterName;                                    // 0x003C   (0x0004)  
	FName                                              CombatThreatLevelParameterName;                             // 0x0040   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0044   (0x0004)  MISSED
	bool                                               bDebug;                                                     // 0x0048   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0049   (0x0007)  MISSED


	/// Functions
	// Function /Script/JunoMusicRuntime.JunoMusicDataCollector_Combat.SetThreatLevelMultiplier
	// void SetThreatLevelMultiplier(float InThreatLevelMultiplier);                                                         // [0xb4f369c] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/JunoMusicRuntime.JunoMusicElementController
/// Size: 0x0100 (0x000028 - 0x000128)
class UJunoMusicElementController : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x38];                                      // 0x0000   (0x0038)  MISSED
	TArray<class UDataTable*>                          ElementTables;                                              // 0x0038   (0x0010)  
	SDK_UNDEFINED(80,14477) /* TMap<FGameplayTag, UJunoActiveMusicCue*> */ __um(ActiveMusicElements);              // 0x0048   (0x0050)  
	unsigned char                                      UnknownData01_6[0x90];                                      // 0x0098   (0x0090)  MISSED
};

/// Class /Script/JunoMusicRuntime.JunoMusicManager
/// Size: 0x0168 (0x000030 - 0x000198)
class UJunoMusicManager : public UGameInstanceSubsystem
{ 
public:
	TArray<class UJunoMusicPlaylistDataAsset*>         JunoMusicPlaylistCollections;                               // 0x0030   (0x0010)  
	SDK_UNDEFINED(80,14478) /* TMap<UWorld*, FJunoWorldMusicSystem> */ __um(WorldMusicSystems);                    // 0x0040   (0x0050)  
	unsigned char                                      UnknownData00_6[0x108];                                     // 0x0090   (0x0108)  MISSED


	/// Functions
	// Function /Script/JunoMusicRuntime.JunoMusicManager.StopWorldMusicSystem
	// void StopWorldMusicSystem(class UWorld* World);                                                                       // [0xb4f379c] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoMusicRuntime.JunoMusicManager.StartWorldMusicSystem
	// void StartWorldMusicSystem(class UWorld* World);                                                                      // [0xb4f371c] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoMusicRuntime.JunoMusicManager.SetSuspendWorldActiveMusicPlayback
	// void SetSuspendWorldActiveMusicPlayback(class UWorld* World, bool bSuspendPlayback, bool bStopCurrentlyPlayingMusic); // [0xb4f3590] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoMusicRuntime.JunoMusicManager.SetSuspendActiveMusicPlayback
	// void SetSuspendActiveMusicPlayback(bool bSuspendPlayback, bool bStopCurrentlyPlayingMusic);                           // [0xb4f34cc] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoMusicRuntime.JunoMusicManager.SetActiveJunoMusicManagerData
	// void SetActiveJunoMusicManagerData(FActiveJunoMusicManagerData& ActiveJunoMusicManagerDataIn);                        // [0xb4f3438] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoMusicRuntime.JunoMusicManager.RemoveJunoMusicPlaylist
	// void RemoveJunoMusicPlaylist(class UJunoMusicPlaylistDataAsset* JunoMusicPlaylist);                                   // [0xb4f32f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoMusicRuntime.JunoMusicManager.GetCollectedString
	// FString GetCollectedString(class UObject* WorldContextObject, FName ParameterName, ESetParamResult& Result);          // [0xb4f2e50] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoMusicRuntime.JunoMusicManager.GetCollectedInt
	// int32_t GetCollectedInt(class UObject* WorldContextObject, FName ParameterName, ESetParamResult& Result);             // [0xb4f2b78] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoMusicRuntime.JunoMusicManager.GetCollectedFloat
	// float GetCollectedFloat(class UObject* WorldContextObject, FName ParameterName, ESetParamResult& Result);             // [0xb4f28bc] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoMusicRuntime.JunoMusicManager.GetCollectedBool
	// bool GetCollectedBool(class UObject* WorldContextObject, FName ParameterName, ESetParamResult& Result);               // [0xb4f25fc] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoMusicRuntime.JunoMusicManager.AddJunoMusicPlaylist
	// void AddJunoMusicPlaylist(class UJunoMusicPlaylistDataAsset* JunoMusicPlaylist);                                      // [0xb4f2434] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/JunoMusicRuntime.JunoMusicPlaybackConditionsPool
/// Size: 0x0010 (0x000028 - 0x000038)
class UJunoMusicPlaybackConditionsPool : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	TArray<class UJunoMusicPlaybackCondition*>         CachedPlaybackConditions;                                   // 0x0028   (0x0010)  
};

/// Class /Script/JunoMusicRuntime.JunoMusicPlaybackCondition
/// Size: 0x0008 (0x000028 - 0x000030)
class UJunoMusicPlaybackCondition : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x0000   (0x0030)  MISSED


	/// Functions
	// Function /Script/JunoMusicRuntime.JunoMusicPlaybackCondition.BP_ShouldPlay
	// bool BP_ShouldPlay();                                                                                                 // [0x3912dc4] Native|Event|Public|BlueprintEvent 
	// Function /Script/JunoMusicRuntime.JunoMusicPlaybackCondition.BP_OnUnregistered
	// void BP_OnUnregistered();                                                                                             // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/JunoMusicRuntime.JunoMusicPlaybackCondition.BP_OnRegistered
	// void BP_OnRegistered();                                                                                               // [0x18a39e4] Event|Public|BlueprintEvent 
};

/// Struct /Script/JunoMusicRuntime.JunoMusicPlaylist
/// Size: 0x0078 (0x000000 - 0x000078)
struct FJunoMusicPlaylist
{ 
	FName                                              PlaylistName;                                               // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	TArray<FJunoMusicPlaylistElement>                  MusicPlaylist;                                              // 0x0008   (0x0010)  
	SDK_UNDEFINED(80,14479) /* TMap<FName, FVector2D> */ __um(CooldownGroups);                                     // 0x0018   (0x0050)  
	FJunoMusicDataAggregatorSettings                   DataAggregatorSettings;                                     // 0x0068   (0x0010)  
};

/// Class /Script/JunoMusicRuntime.JunoMusicPlaylistDataAsset
/// Size: 0x0078 (0x000030 - 0x0000A8)
class UJunoMusicPlaylistDataAsset : public UPrimaryDataAsset
{ 
public:
	FJunoMusicPlaylist                                 JunoMusicPlaylist;                                          // 0x0030   (0x0078)  
};

/// Class /Script/JunoMusicRuntime.JunoMusicPlayspaceProbe
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoMusicPlayspaceProbe : public UObject
{ 
public:


	/// Functions
	// Function /Script/JunoMusicRuntime.JunoMusicPlayspaceProbe.BP_OnUpdate
	// void BP_OnUpdate(float DeltaSeconds);                                                                                 // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/JunoMusicRuntime.JunoMusicPlayspaceProbe.BP_OnUnregistered
	// void BP_OnUnregistered();                                                                                             // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/JunoMusicRuntime.JunoMusicPlayspaceProbe.BP_OnRegistered
	// void BP_OnRegistered();                                                                                               // [0x18a39e4] Event|Public|BlueprintEvent 
};

/// Class /Script/JunoMusicRuntime.JunoMusicPlayspaceProbeSubsystem
/// Size: 0x0038 (0x000030 - 0x000068)
class UJunoMusicPlayspaceProbeSubsystem : public UWorldSubsystem
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0030   (0x0028)  MISSED
	TArray<class UJunoMusicPlayspaceProbe*>            DataProbes;                                                 // 0x0058   (0x0010)  
};

/// Struct /Script/JunoMusicRuntime.JunoMusicPlayspaceProbeData
/// Size: 0x0010 (0x000000 - 0x000010)
struct FJunoMusicPlayspaceProbeData
{ 
	TArray<class UClass*>                              JunoMusicPlayspaceProbes;                                   // 0x0000   (0x0010)  
};

/// Class /Script/JunoMusicRuntime.JunoMusicPlayspaceProbeDataAsset
/// Size: 0x0010 (0x000030 - 0x000040)
class UJunoMusicPlayspaceProbeDataAsset : public UPrimaryDataAsset
{ 
public:
	FJunoMusicPlayspaceProbeData                       JunoMusicProbes;                                            // 0x0030   (0x0010)  
};

/// Class /Script/JunoMusicRuntime.JunoMusicPlayspaceProbe_Combat
/// Size: 0x0010 (0x000028 - 0x000038)
class UJunoMusicPlayspaceProbe_Combat : public UJunoMusicPlayspaceProbe
{ 
public:
	FName                                              IsInCombatParameterName;                                    // 0x0028   (0x0004)  
	FGameplayTag                                       CombatMusicStateTag;                                        // 0x002C   (0x0004)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0030   (0x0008)  MISSED
};

/// Class /Script/JunoMusicRuntime.JunoMusicPlayspaceProbe_Environment
/// Size: 0x0070 (0x000028 - 0x000098)
class UJunoMusicPlayspaceProbe_Environment : public UJunoMusicPlayspaceProbe
{ 
public:
	unsigned char                                      UnknownData00_1[0x70];                                      // 0x0028   (0x0070)  MISSED


	/// Functions
	// Function /Script/JunoMusicRuntime.JunoMusicPlayspaceProbe_Environment.CacheFortPlayerPawn
	// void CacheFortPlayerPawn(class AFortPawn* NewPawn);                                                                   // [0xb4f24b4] Final|Native|Private 
};

/// Class /Script/JunoMusicRuntime.GameFeatureAction_AddJunoMusicPlaylist
/// Size: 0x0028 (0x000028 - 0x000050)
class UGameFeatureAction_AddJunoMusicPlaylist : public UGameFeatureAction
{ 
public:
	FSoftObjectPath                                    JunoMusicPlaylist;                                          // 0x0028   (0x0018)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0040   (0x0010)  MISSED
};

/// Struct /Script/JunoMusicRuntime.ActiveJunoMusicManagerData
/// Size: 0x0010 (0x000000 - 0x000010)
struct FActiveJunoMusicManagerData
{ 
	FVector2D                                          MainCooldownTimeInSeconds;                                  // 0x0000   (0x0010)  
};

/// Class /Script/JunoMusicRuntime.GameFeatureAction_SetActiveJunoMusicManagerData
/// Size: 0x0010 (0x000028 - 0x000038)
class UGameFeatureAction_SetActiveJunoMusicManagerData : public UGameFeatureAction
{ 
public:
	FActiveJunoMusicManagerData                        ActiveJunoMusicManagerData;                                 // 0x0028   (0x0010)  
};

/// Struct /Script/JunoMusicRuntime.ElementControllerArray
/// Size: 0x0010 (0x000000 - 0x000010)
struct FElementControllerArray
{ 
	TArray<class UJunoActiveMusicElementController_Base*> ElementControllerArray;                                  // 0x0000   (0x0010)  
};

/// Struct /Script/JunoMusicRuntime.JunoMusicElementData
/// Size: 0x00E8 (0x000008 - 0x0000F0)
struct FJunoMusicElementData : FTableRowBase
{ 
	bool                                               bEnabled;                                                   // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0009   (0x0003)  MISSED
	FGameplayTag                                       ElementName;                                                // 0x000C   (0x0004)  
	FGameplayTagQuery                                  ElementConditions;                                          // 0x0010   (0x0048)  
	FGameplayTagQuery                                  StatePushConditions;                                        // 0x0058   (0x0048)  
	TArray<FSoftObjectPath>                            MusicCues;                                                  // 0x00A0   (0x0010)  
	EJunoMusicCueSelectionBehavior                     CueSelectionBehavior;                                       // 0x00B0   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x00B1   (0x0007)  MISSED
	FVector2D                                          FadeInOutValues;                                            // 0x00B8   (0x0010)  
	float                                              PlaybackPriority;                                           // 0x00C8   (0x0004)  
	float                                              PlaybackProbabilityPercent;                                 // 0x00CC   (0x0004)  
	bool                                               bStopOnInvalidConditions;                                   // 0x00D0   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x00D1   (0x0007)  MISSED
	FVector2D                                          ElementCooldownInSeconds;                                   // 0x00D8   (0x0010)  
	bool                                               bReceiveAggregatedData;                                     // 0x00E8   (0x0001)  
	unsigned char                                      UnknownData03_6[0x7];                                       // 0x00E9   (0x0007)  MISSED
};

/// Struct /Script/JunoMusicRuntime.JunoWorldMusicSystem
/// Size: 0x0018 (0x000000 - 0x000018)
struct FJunoWorldMusicSystem
{ 
	class UActiveJunoMusicPlayer*                      ActiveJunoMusicPlayer;                                      // 0x0000   (0x0008)  
	class UJunoMusicDataAggregator*                    JunoMusicDataAggregator;                                    // 0x0008   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0010   (0x0008)  MISSED
};

