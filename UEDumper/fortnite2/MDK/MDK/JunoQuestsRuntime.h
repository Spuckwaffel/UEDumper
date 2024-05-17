
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: GameplayTags
/// dependency: ModularGameplay

/// Class /Script/JunoQuestsRuntime.JunoQuestCheatManager
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoQuestCheatManager : public UChildCheatManager
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/JunoQuestsRuntime.JunoQuestCheatManager.SetJunoFTUEQuestTrackingEnabled
	// void SetJunoFTUEQuestTrackingEnabled(bool bEnabled, bool bSaveSetting);                                                  // [0xb0821a4] Final|Exec|Native|Public 
};

/// Class /Script/JunoQuestsRuntime.JunoControllerComponent_FTUEQuestTracker
/// Size: 0x0048 (0x0000A8 - 0x0000F0)
class UJunoControllerComponent_FTUEQuestTracker : public UFortControllerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	SMember(FMulticastInlineDelegate)                  OnTrackedFTUEQuestsEnabled                                  OFFSET(getStruct<T>, {0xB8, 16, 0, 0})
	CMember(TArray<TWeakObjectPtr<UFortQuestItem*>>)   TrackedFTUEQuests                                           OFFSET(get<T>, {0xC8, 16, 0, 0})
	CMember(TArray<FFTUEQuestBundleWithRequiredTag>)   FTUEQuestBundles                                            OFFSET(get<T>, {0xD8, 16, 0, 0})


	/// Functions
	// Function /Script/JunoQuestsRuntime.JunoControllerComponent_FTUEQuestTracker.SetTrackingEnabled
	// void SetTrackingEnabled(bool bEnabled, bool bSaveSetting);                                                               // [0xcd85934] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/JunoQuestsRuntime.JunoControllerComponent_FTUEQuestTracker.OnQuestCompleted
	// void OnQuestCompleted(TScriptInterface<Class>& QuestInstance);                                                           // [0xcd858a4] Final|Native|Protected|HasOutParms 
	// Function /Script/JunoQuestsRuntime.JunoControllerComponent_FTUEQuestTracker.OnCurrentQuestsChanged
	// void OnCurrentQuestsChanged();                                                                                           // [0xcd85890] Final|Native|Protected 
	// Function /Script/JunoQuestsRuntime.JunoControllerComponent_FTUEQuestTracker.IsTrackingEnabled
	// bool IsTrackingEnabled();                                                                                                // [0xcd8586c] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/JunoQuestsRuntime.JunoControllerComponent_QuestPersistence
/// Size: 0x0000 (0x0000A8 - 0x0000A8)
class UJunoControllerComponent_QuestPersistence : public UFortControllerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:


	/// Functions
	// Function /Script/JunoQuestsRuntime.JunoControllerComponent_QuestPersistence.ControllerBeginDestroy
	// void ControllerBeginDestroy(class AFortPlayerControllerAthena* FortPCAthena);                                            // [0x660baec] Final|Native|Private 
};

/// Struct /Script/JunoQuestsRuntime.FTUEQuestBundleWithRequiredTag
/// Size: 0x0010 (0x000000 - 0x000010)
class FFTUEQuestBundleWithRequiredTag : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class UFortChallengeBundleItemDefinition*) FTUEQuestBundleDef                                          OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FGameplayTag)                              RequiredTagInPreviousBundleForTracking                      OFFSET(getStruct<T>, {0x8, 4, 0, 0})
};

