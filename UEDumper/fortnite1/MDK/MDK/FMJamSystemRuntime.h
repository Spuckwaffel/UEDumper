
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CommonUI
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FMJamCoreRuntime
/// dependency: FortniteGame
/// dependency: GameplayAbilities
/// dependency: GameplayEventRouter
/// dependency: GameplayTags
/// dependency: ModularGameplay
/// dependency: PlayspaceSystem
/// dependency: UMG

/// Class /Script/FMJamSystemRuntime.JamControllerComponent
/// Size: 0x0028 (0x0000A0 - 0x0000C8)
class UJamControllerComponent : public UControllerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	SMember(FGameplayTagContainer)                     AdditionalTags                                              OFFSET(getStruct<T>, {0xA8, 32, 0, 0})


	/// Functions
	// Function /Script/FMJamSystemRuntime.JamControllerComponent.UpdateJamUI
	// void UpdateJamUI();                                                                                                      // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Script/FMJamSystemRuntime.JamControllerComponent.GetControllerOfClass
	// class AController* GetControllerOfClass(class UClass* ControllerType, bool bMatchChildTypes);                            // [0xb454ea0] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/FMJamSystemRuntime.JamControllerComponent_LoopOptions
/// Size: 0x0060 (0x0000A0 - 0x000100)
class UJamControllerComponent_LoopOptions : public UControllerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	SMember(FName)                                     CategoryNameLocker                                          OFFSET(getStruct<T>, {0xA0, 4, 0, 0})
	SMember(FName)                                     CategoryNameAll                                             OFFSET(getStruct<T>, {0xA4, 4, 0, 0})
	SMember(FText)                                     CategoryTitleLocker                                         OFFSET(getStruct<T>, {0xA8, 16, 0, 0})
	SMember(FText)                                     CategoryTitleAll                                            OFFSET(getStruct<T>, {0xB8, 16, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   EmoteWheelOverlay                                           OFFSET(get<T>, {0xC8, 32, 0, 0})


	/// Functions
	// Function /Script/FMJamSystemRuntime.JamControllerComponent_LoopOptions.OnLoadoutChanged
	// void OnLoadoutChanged();                                                                                                 // [0xb455884] Final|Native|Private 
	// Function /Script/FMJamSystemRuntime.JamControllerComponent_LoopOptions.AddJamCategories
	// void AddJamCategories(bool bPostLockerCategory);                                                                         // [0xb454dc8] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/FMJamSystemRuntime.JamControllerComponent_LoopPreloader
/// Size: 0x0058 (0x0000A0 - 0x0000F8)
class UJamControllerComponent_LoopPreloader : public UControllerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
	DMember(bool)                                      bHaveRegisteredForOnLoadoutFilled                           OFFSET(get<bool>, {0xA0, 1, 0, 0})


	/// Functions
	// Function /Script/FMJamSystemRuntime.JamControllerComponent_LoopPreloader.OnSongCatalogRetrieved
	// void OnSongCatalogRetrieved(bool bSuccess);                                                                              // [0xb455c38] Final|Native|Protected 
	// Function /Script/FMJamSystemRuntime.JamControllerComponent_LoopPreloader.OnPawnSet
	// void OnPawnSet(class APlayerState* Player, class APawn* NewPawn, class APawn* OldPawn);                                  // [0xb4558c0] Final|Native|Protected 
	// Function /Script/FMJamSystemRuntime.JamControllerComponent_LoopPreloader.OnLoadoutFilled
	// void OnLoadoutFilled();                                                                                                  // [0xb455898] Final|Native|Protected 
};

/// Class /Script/FMJamSystemRuntime.JamGlobalControlsWidget
/// Size: 0x0008 (0x000408 - 0x000410)
class UJamGlobalControlsWidget : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1040;

public:
	CMember(class UCommonButtonBase*)                  Button_Close                                                OFFSET(get<T>, {0x408, 8, 0, 0})


	/// Functions
	// Function /Script/FMJamSystemRuntime.JamGlobalControlsWidget.Close
	// void Close();                                                                                                            // [0xb454e8c] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/FMJamSystemRuntime.JamOnOffSwitchComponent
/// Size: 0x0110 (0x0000A0 - 0x0001B0)
class UJamOnOffSwitchComponent : public UPlayerStateComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 432;

public:
	SMember(FScalableFloat)                            bEnableJam                                                  OFFSET(getStruct<T>, {0xA0, 40, 0, 0})
	CMember(class UClass*)                             JamBlockerEffect                                            OFFSET(get<T>, {0xC8, 8, 0, 0})
	SMember(FActiveGameplayEffectHandle)               JamBlockerEffectHandle                                      OFFSET(getStruct<T>, {0xD0, 8, 0, 0})
	SMember(FGameplayEventListenerHandle)              GamePhaseUpdatedEventHandle                                 OFFSET(getStruct<T>, {0xD8, 28, 0, 0})
	SMember(FGameplayEventListenerHandle)              GamePhaseStepUpdatedEventHandle                             OFFSET(getStruct<T>, {0xF4, 28, 0, 0})
	SMember(FGlobalMemoryRequestHandle)                GlobalMemoryRequestHandle                                   OFFSET(getStruct<T>, {0x110, 8, 0, 0})


	/// Functions
	// Function /Script/FMJamSystemRuntime.JamOnOffSwitchComponent.ShouldApplyJamOnSplitscreenLogic
	// bool ShouldApplyJamOnSplitscreenLogic(class UObject* WorldContextObject, class APlayerController* ReferenceController);  // [0xb455cfc] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/FMJamSystemRuntime.JamOnOffSwitchComponent.OnPlayerStatePawnSet
	// void OnPlayerStatePawnSet(class APlayerState* Player, class APawn* NewPawn, class APawn* OldPawn);                       // [0xb455a7c] Final|Native|Protected 
	// Function /Script/FMJamSystemRuntime.JamOnOffSwitchComponent.OnMutatorUpdated
	// void OnMutatorUpdated();                                                                                                 // [0xb4558ac] Final|Native|Protected 
};

/// Class /Script/FMJamSystemRuntime.JamPlayerPawnComponent
/// Size: 0x0028 (0x0000A0 - 0x0000C8)
class UJamPlayerPawnComponent : public UPawnComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	SMember(FGameplayTagContainer)                     AdditionalTags                                              OFFSET(getStruct<T>, {0xA8, 32, 0, 0})


	/// Functions
	// Function /Script/FMJamSystemRuntime.JamPlayerPawnComponent.GetPawnOfClass
	// class APawn* GetPawnOfClass(class UClass* PawnType, bool bMatchChildTypes);                                              // [0xb4556fc] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/FMJamSystemRuntime.JamQuestComponent
/// Size: 0x0048 (0x0000A0 - 0x0000E8)
class UJamQuestComponent : public UPlayspaceComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
};

/// Class /Script/FMJamSystemRuntime.JamSystemEmoteBPFL
/// Size: 0x0000 (0x000028 - 0x000028)
class UJamSystemEmoteBPFL : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/FMJamSystemRuntime.JamSystemEmoteBPFL.IsJamDebugDisplayEnabled
	// bool IsJamDebugDisplayEnabled();                                                                                         // [0xb455868] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/FMJamSystemRuntime.JamSystemEmoteBPFL.GetEmoteActionBinding
	// void GetEmoteActionBinding(FString EmoteTemplateID, FEmoteActionBinding& OutCreatedEmote);                               // [0xb45500c] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
};

/// Class /Script/FMJamSystemRuntime.JamVerbProcessor_Jam
/// Size: 0x0000 (0x000098 - 0x000098)
class UJamVerbProcessor_Jam : public UObjectiveProcessor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
};

/// Struct /Script/FMJamSystemRuntime.JamVerbMessage_Jam
/// Size: 0x0010 (0x000078 - 0x000088)
class FJamVerbMessage_Jam : public FVerbMessage
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	DMember(bool)                                      bIsFullBand                                                 OFFSET(get<bool>, {0x78, 1, 0, 0})
	DMember(int32_t)                                   BandSize                                                    OFFSET(get<int32_t>, {0x7C, 4, 0, 0})
	CMember(EFMJamLoopType)                            LoopType                                                    OFFSET(get<T>, {0x80, 1, 0, 0})
};

/// Struct /Script/FMJamSystemRuntime.JamVerbFilter_Jam
/// Size: 0x0018 (0x0000A0 - 0x0000B8)
class FJamVerbFilter_Jam : public FObjectiveFilter
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	DMember(bool)                                      bRequireFullBand                                            OFFSET(get<bool>, {0xA0, 1, 1, 0})
	DMember(bool)                                      bUsebandSize                                                OFFSET(get<bool>, {0xA0, 1, 1, 1})
	SMember(FInt32Range)                               BandSize                                                    OFFSET(getStruct<T>, {0xA4, 16, 0, 0})
	DMember(bool)                                      bUseLoopType                                                OFFSET(get<bool>, {0xB4, 1, 1, 0})
	CMember(EFMJamLoopType)                            LoopType                                                    OFFSET(get<T>, {0xB5, 1, 0, 0})
};

