
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CommonInput
/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: DynamicUI
/// dependency: Engine
/// dependency: GameplayTags
/// dependency: ModelViewViewModel

/// Class /Script/UIChart.UIStateSettings
/// Size: 0x0018 (0x000030 - 0x000048)
class UUIStateSettings : public UDeveloperSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	DMember(float)                                     StateLoadTimeout                                            OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(float)                                     StateUnloadTimeout                                          OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     WidgetStateComponentLoadTimeout                             OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(float)                                     WidgetStateComponentUnloadTimeout                           OFFSET(get<float>, {0x3C, 4, 0, 0})
	CMember(EWidgetStateComponentUnloadDefaultBehavior) WidgetStateComponentDefaultUnloadBehavior                  OFFSET(get<T>, {0x40, 4, 0, 0})
};

/// Class /Script/UIChart.UIStateComponent
/// Size: 0x0020 (0x000028 - 0x000048)
class UUIStateComponent : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(EStateComponentStatus)                     Status                                                      OFFSET(get<T>, {0x28, 4, 0, 0})
	CMember(class UUIStateComponentConfiguration*)     ComponentConfiguration                                      OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(class UUIState*)                           OwningState                                                 OFFSET(get<T>, {0x38, 8, 0, 0})
	CMember(class UUIStateChartRegion*)                StateChartRegion                                            OFFSET(get<T>, {0x40, 8, 0, 0})
};

/// Class /Script/UIChart.CommonUIContextUpdaterUIStateComponent
/// Size: 0x0000 (0x000048 - 0x000048)
class UCommonUIContextUpdaterUIStateComponent : public UUIStateComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Class /Script/UIChart.UIStateComponentConfiguration
/// Size: 0x0000 (0x000028 - 0x000028)
class UUIStateComponentConfiguration : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/UIChart.CommonUIContextUpdaterUIStateComponentConfiguration
/// Size: 0x0000 (0x000028 - 0x000028)
class UCommonUIContextUpdaterUIStateComponentConfiguration : public UUIStateComponentConfiguration
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/UIChart.ContextSetterUIStateComponent
/// Size: 0x0008 (0x000048 - 0x000050)
class UContextSetterUIStateComponent : public UUIStateComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(class UContextSetterUIStateComponentConfiguration*) Configuration                                      OFFSET(get<T>, {0x48, 8, 0, 0})
};

/// Class /Script/UIChart.ContextSetterUIStateComponentConfiguration
/// Size: 0x0040 (0x000028 - 0x000068)
class UContextSetterUIStateComponentConfiguration : public UUIStateComponentConfiguration
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FContextSetterChanges)                     ActivationChanges                                           OFFSET(getStruct<T>, {0x28, 32, 0, 0})
	SMember(FContextSetterChanges)                     DeactivationChanges                                         OFFSET(getStruct<T>, {0x48, 32, 0, 0})
};

/// Class /Script/UIChart.GlobalViewModelUIStateComponent
/// Size: 0x0060 (0x000048 - 0x0000A8)
class UGlobalViewModelUIStateComponent : public UUIStateComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	CMember(class UGlobalViewModelUIStateComponentConfiguration*) Configuration                                    OFFSET(get<T>, {0x48, 8, 0, 0})
	CMember(TSet<FGameplayTag>)                        ConditionContextKeys                                        OFFSET(get<T>, {0x50, 80, 0, 0})
};

/// Class /Script/UIChart.GlobalViewModelUIStateComponentConfiguration
/// Size: 0x0020 (0x000028 - 0x000048)
class UGlobalViewModelUIStateComponentConfiguration : public UUIStateComponentConfiguration
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(TArray<FMVVMViewModelContext>)             ViewModelContexts                                           OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(TArray<FUIStateChartContextCondition>)     ContextConditions                                           OFFSET(get<T>, {0x38, 16, 0, 0})
};

/// Class /Script/UIChart.StackingUIStateComponent
/// Size: 0x0008 (0x000048 - 0x000050)
class UStackingUIStateComponent : public UUIStateComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(EStateChartResourceScope)                  StackScope                                                  OFFSET(get<T>, {0x48, 4, 0, 0})
	DMember(bool)                                      bAlwaysRemoveStackingBehavior                               OFFSET(get<bool>, {0x4C, 1, 0, 0})
	DMember(bool)                                      bIsOnStack                                                  OFFSET(get<bool>, {0x4D, 1, 0, 0})
};

/// Class /Script/UIChart.InputConfigUIStateComponent
/// Size: 0x0008 (0x000050 - 0x000058)
class UInputConfigUIStateComponent : public UStackingUIStateComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(class UInputConfigUIStateComponentConfiguration*) Configuration                                        OFFSET(get<T>, {0x50, 8, 0, 0})
};

/// Class /Script/UIChart.InputConfigUIStateComponentConfiguration
/// Size: 0x0008 (0x000028 - 0x000030)
class UInputConfigUIStateComponentConfiguration : public UUIStateComponentConfiguration
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(ECommonInputMode)                          InputMode                                                   OFFSET(get<T>, {0x28, 1, 0, 0})
	CMember(EMouseCaptureMode)                         MouseCaptureMode                                            OFFSET(get<T>, {0x29, 1, 0, 0})
	DMember(bool)                                      bHideCursorDuringCapture                                    OFFSET(get<bool>, {0x2A, 1, 0, 0})
	DMember(bool)                                      bIgnoreLookInput                                            OFFSET(get<bool>, {0x2B, 1, 0, 0})
	DMember(bool)                                      bIgnoreMovementInput                                        OFFSET(get<bool>, {0x2C, 1, 0, 0})
	DMember(bool)                                      bFlushPlayerInputWhenActivating                             OFFSET(get<bool>, {0x2D, 1, 0, 0})
	DMember(bool)                                      bFlushPlayerInputWhenDeactivating                           OFFSET(get<bool>, {0x2E, 1, 0, 0})
};

/// Class /Script/UIChart.SceneUIStateComponent
/// Size: 0x0068 (0x000048 - 0x0000B0)
class USceneUIStateComponent : public UUIStateComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	CMember(class USceneUIStateComponentConfiguration*) Configuration                                              OFFSET(get<T>, {0x48, 8, 0, 0})
	CMember(TSet<FGameplayTag>)                        ConditionContextKeys                                        OFFSET(get<T>, {0x50, 80, 0, 0})
};

/// Class /Script/UIChart.SceneUIStateComponentConfiguration
/// Size: 0x0018 (0x000028 - 0x000040)
class USceneUIStateComponentConfiguration : public UUIStateComponentConfiguration
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(class UDynamicUIScene*)                    Scene                                                       OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(TArray<FUIStateChartContextCondition>)     ContextConditions                                           OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Class /Script/UIChart.SplitScreenUIStateComponentBase
/// Size: 0x0068 (0x000048 - 0x0000B0)
class USplitScreenUIStateComponentBase : public UUIStateComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	CMember(class USplitScreenUIStateComponentBaseConfiguration*) BaseConfiguration                                OFFSET(get<T>, {0x48, 8, 0, 0})
	CMember(TMap<ULocalPlayer*, int32_t>)              ChildStateCharts                                            OFFSET(get<T>, {0x50, 80, 0, 0})
	CMember(TArray<int32_t>)                           DeactivatingStateCharts                                     OFFSET(get<T>, {0xA0, 16, 0, 0})
};

/// Class /Script/UIChart.SplitScreenUIStateComponentBaseConfiguration
/// Size: 0x0058 (0x000028 - 0x000080)
class USplitScreenUIStateComponentBaseConfiguration : public UUIStateComponentConfiguration
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(class UUIStateChart*)                      PlayerStateChart                                            OFFSET(get<T>, {0x28, 8, 0, 0})
	DMember(bool)                                      bIgnoreTransitionParametersOnActivation                     OFFSET(get<bool>, {0x30, 1, 0, 0})
	CMember(EUIStateTransitionUrgency)                 UrgencyOnPlayerAdd                                          OFFSET(get<T>, {0x31, 1, 0, 0})
	SMember(FGameplayTagContainer)                     AnimationHintsOnPlayerAdd                                   OFFSET(getStruct<T>, {0x38, 32, 0, 0})
	DMember(bool)                                      bIgnoreTransitionParametersOnDeactivation                   OFFSET(get<bool>, {0x58, 1, 0, 0})
	CMember(EUIStateTransitionUrgency)                 UrgencyOnPlayerRemove                                       OFFSET(get<T>, {0x59, 1, 0, 0})
	SMember(FGameplayTagContainer)                     AnimationHintsOnPlayerRemove                                OFFSET(getStruct<T>, {0x60, 32, 0, 0})
};

/// Class /Script/UIChart.StackingUIStateComponentSharedData
/// Size: 0x0050 (0x000028 - 0x000078)
class UStackingUIStateComponentSharedData : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	CMember(TMap<UClass*, FUIStateComponentInstanceStack>) InstanceStacks                                          OFFSET(get<T>, {0x28, 80, 0, 0})
};

/// Class /Script/UIChart.UIStateConfiguration
/// Size: 0x0088 (0x000028 - 0x0000B0)
class UUIStateConfiguration : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	SMember(FString)                                   Name                                                        OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	SMember(FGameplayTagContainer)                     StateTags                                                   OFFSET(getStruct<T>, {0x38, 32, 0, 0})
	DMember(int32_t)                                   ID                                                          OFFSET(get<int32_t>, {0x58, 4, 0, 0})
	CMember(TArray<class UUIStateConfiguration*>)      Children                                                    OFFSET(get<T>, {0x60, 16, 0, 0})
	CMember(TArray<class UUIStateConfiguration*>)      ParallelRegions                                             OFFSET(get<T>, {0x70, 16, 0, 0})
	CMember(TArray<class UUIStateComponentConfiguration*>) Components                                              OFFSET(get<T>, {0x80, 16, 0, 0})
	DMember(float)                                     MinimumUnloadTime                                           OFFSET(get<float>, {0x90, 4, 0, 0})
	CMember(EUIStateAutomationType)                    AutomationType                                              OFFSET(get<T>, {0x94, 1, 0, 0})
	CMember(TArray<FUIStateAutomationRule>)            AutomationRules                                             OFFSET(get<T>, {0x98, 16, 0, 0})
	DMember(bool)                                      bSupportsBacktracking                                       OFFSET(get<bool>, {0xA8, 1, 0, 0})
	DMember(bool)                                      bOverrideIncomingBacktracks                                 OFFSET(get<bool>, {0xA9, 1, 0, 0})
};

/// Class /Script/UIChart.UIState
/// Size: 0x00C0 (0x000028 - 0x0000E8)
class UUIState : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
	CMember(TArray<class UUIState*>)                   Children                                                    OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(TArray<class UUIStateChartRegion*>)        ParallelRegions                                             OFFSET(get<T>, {0x38, 16, 0, 0})
	CMember(TArray<class UUIStateComponent*>)          Components                                                  OFFSET(get<T>, {0x48, 16, 0, 0})
	CMember(class UUIStateConfiguration*)              Configuration                                               OFFSET(get<T>, {0x58, 8, 0, 0})
	CMember(TArray<class UUIStateChartTransition*>)    OutgoingTransitions                                         OFFSET(get<T>, {0x60, 16, 0, 0})
	DMember(float)                                     SecondsUntilTimeout                                         OFFSET(get<float>, {0x70, 4, 0, 0})
	CMember(class UUIState*)                           Parent                                                      OFFSET(get<T>, {0x78, 8, 0, 0})
	CMember(class UUIStateChartRegion*)                StateChartRegion                                            OFFSET(get<T>, {0x80, 8, 0, 0})
	CMember(EStateComponentStatus)                     Status                                                      OFFSET(get<T>, {0x88, 4, 0, 0})
	CMember(TSet<FGameplayTag>)                        ContinualAutomationContextKeys                              OFFSET(get<T>, {0x90, 80, 0, 0})
};

/// Class /Script/UIChart.UIStateChart
/// Size: 0x0018 (0x000030 - 0x000048)
class UUIStateChart : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(class UUIStateConfiguration*)              RootState                                                   OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(TArray<FUIStateTransitionData>)            Transitions                                                 OFFSET(get<T>, {0x38, 16, 0, 0})
};

/// Class /Script/UIChart.UIStateChartContext
/// Size: 0x0068 (0x000028 - 0x000090)
class UUIStateChartContext : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	CMember(TMap<FGameplayTag, UUIStateChartContextEntry*>) Store                                                  OFFSET(get<T>, {0x28, 80, 0, 0})


	/// Functions
	// Function /Script/UIChart.UIStateChartContext.BP_SetPlayerValue
	// void BP_SetPlayerValue(class ULocalPlayer* LocalPlayer, FGameplayTag Key, int32_t Value);                                // [0xa2537dc] Final|Native|Public|BlueprintCallable 
	// Function /Script/UIChart.UIStateChartContext.BP_SetPlayerStringValue
	// void BP_SetPlayerStringValue(class ULocalPlayer* LocalPlayer, FGameplayTag Key, FString Value);                          // [0xa253560] Final|Native|Public|BlueprintCallable 
	// Function /Script/UIChart.UIStateChartContext.BP_SetPlayerFloatValue
	// void BP_SetPlayerFloatValue(class ULocalPlayer* LocalPlayer, FGameplayTag Key, float Value);                             // [0xa253314] Final|Native|Public|BlueprintCallable 
	// Function /Script/UIChart.UIStateChartContext.BP_SetPlayerBoolValue
	// void BP_SetPlayerBoolValue(class ULocalPlayer* LocalPlayer, FGameplayTag Key, bool Value);                               // [0xa2530c4] Final|Native|Public|BlueprintCallable 
	// Function /Script/UIChart.UIStateChartContext.BP_SetCommonStringValue
	// void BP_SetCommonStringValue(FGameplayTag Key, FString Value);                                                           // [0xa252e88] Final|Native|Public|BlueprintCallable 
	// Function /Script/UIChart.UIStateChartContext.BP_SetCommonIntValue
	// void BP_SetCommonIntValue(FGameplayTag Key, int32_t Value);                                                              // [0xa252c7c] Final|Native|Public|BlueprintCallable 
	// Function /Script/UIChart.UIStateChartContext.BP_SetCommonFloatValue
	// void BP_SetCommonFloatValue(FGameplayTag Key, float Value);                                                              // [0xa252a6c] Final|Native|Public|BlueprintCallable 
	// Function /Script/UIChart.UIStateChartContext.BP_SetCommonBoolValue
	// void BP_SetCommonBoolValue(FGameplayTag Key, bool Value);                                                                // [0xa252858] Final|Native|Public|BlueprintCallable 
	// Function /Script/UIChart.UIStateChartContext.BP_FindEntry
	// class UUIStateChartContextEntry* BP_FindEntry(FGameplayTag Key);                                                         // [0xa2521cc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UIChart.UIStateChartContext.BP_ClearPlayerValue
	// void BP_ClearPlayerValue(class ULocalPlayer* LocalPlayer, FGameplayTag& Key);                                            // [0xa251950] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UIChart.UIStateChartContext.BP_ClearEntry
	// void BP_ClearEntry(FGameplayTag Key);                                                                                    // [0xa251818] Final|Native|Public|BlueprintCallable 
	// Function /Script/UIChart.UIStateChartContext.BP_ClearCommonValue
	// void BP_ClearCommonValue(FGameplayTag Key);                                                                              // [0xa2516e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UIChart.UIStateChartContext.BP_ApplyPlayerChanges
	// void BP_ApplyPlayerChanges(class ULocalPlayer* LocalPlayer, FUIStateChartContextChangeSet& ContextChanges);              // [0xa2515cc] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UIChart.UIStateChartContext.BP_ApplyCommonChanges
	// void BP_ApplyCommonChanges(FUIStateChartContextChangeSet& ContextChanges);                                               // [0xa2514fc] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/UIChart.UIStateChartContextEntry
/// Size: 0x0080 (0x000028 - 0x0000A8)
class UUIStateChartContextEntry : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	SMember(FString)                                   CommonValue                                                 OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	CMember(TMap<ULocalPlayer*, FUIStateChartContextEntryOverride>) PlayerOverrides                                OFFSET(get<T>, {0x38, 80, 0, 0})


	/// Functions
	// Function /Script/UIChart.UIStateChartContextEntry.IsEmptyForPlayer
	// bool IsEmptyForPlayer(class ULocalPlayer* InLocalPlayer);                                                                // [0xa253d28] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UIChart.UIStateChartContextEntry.GetPlayerValueAsString
	// FString GetPlayerValueAsString(class ULocalPlayer* InLocalPlayer);                                                       // [0xa253c90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UIChart.UIStateChartContextEntry.GetPlayerValueAsInt
	// int32_t GetPlayerValueAsInt(class ULocalPlayer* InLocalPlayer);                                                          // [0xa253c00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UIChart.UIStateChartContextEntry.GetPlayerValueAsFloat
	// float GetPlayerValueAsFloat(class ULocalPlayer* InLocalPlayer);                                                          // [0xa253b70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UIChart.UIStateChartContextEntry.GetPlayerValueAsBool
	// bool GetPlayerValueAsBool(class ULocalPlayer* InLocalPlayer);                                                            // [0xa253ae0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UIChart.UIStateChartContextEntry.GetCommonValueAsString
	// FString GetCommonValueAsString();                                                                                        // [0xa253ac4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UIChart.UIStateChartContextEntry.GetCommonValueAsInt
	// int32_t GetCommonValueAsInt();                                                                                           // [0xa253aa0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UIChart.UIStateChartContextEntry.GetCommonValueAsFloat
	// float GetCommonValueAsFloat();                                                                                           // [0xa253a78] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UIChart.UIStateChartContextEntry.GetCommonValueAsBool
	// bool GetCommonValueAsBool();                                                                                             // [0xa253a24] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/UIChart.UIStateChartManager
/// Size: 0x00C8 (0x000030 - 0x0000F8)
class UUIStateChartManager : public UGameInstanceSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
	CMember(TMap<ULocalPlayer*, UUIStateChartManagerPlayer*>) PlayerEntries                                        OFFSET(get<T>, {0x38, 80, 0, 0})
	CMember(TArray<class UUIStateChartManagerPlayer*>) RemovedPlayerEntries                                        OFFSET(get<T>, {0x88, 16, 0, 0})
	CMember(class UUIStateChartContext*)               Context                                                     OFFSET(get<T>, {0x98, 8, 0, 0})
	CMember(class UUIStateChartResourceCollection*)    GlobalResources                                             OFFSET(get<T>, {0xA0, 8, 0, 0})


	/// Functions
	// Function /Script/UIChart.UIStateChartManager.GetContext
	// class UUIStateChartContext* GetContext();                                                                                // [0x3b55e70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UIChart.UIStateChartManager.GetChartContext
	// class UUIStateChartContext* GetChartContext();                                                                           // [0x3b55e70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UIChart.UIStateChartManager.BP_RemoveStateChart
	// bool BP_RemoveStateChart(int32_t Key, FGameplayTagContainer& AnimationHints, FUIStateChartContextChangeSet& ContextChanges, EUIStateTransitionUrgency Urgency); // [0xa2525d4] Final|Native|Protected|HasOutParms|BlueprintCallable 
	// Function /Script/UIChart.UIStateChartManager.BP_ReactivateStateChart
	// void BP_ReactivateStateChart(int32_t Key, FGameplayTagContainer& AnimationHints, FGameplayTag StateTag, EUIStateTransitionUrgency Urgency); // [0xa252304] Final|Native|Protected|HasOutParms|BlueprintCallable 
	// Function /Script/UIChart.UIStateChartManager.BP_DispatchTransitionEvent
	// bool BP_DispatchTransitionEvent(FGameplayTag TransitionTag, class ULocalPlayer* StateChartOwner, FGameplayTagContainer& AnimationHints, FUIStateChartContextChangeSet& ContextChanges, EUIStateTransitionUrgency Urgency, bool bBacktrack); // [0xa251cdc] Final|Native|Protected|HasOutParms|BlueprintCallable 
	// Function /Script/UIChart.UIStateChartManager.BP_DeactivateStateChart
	// bool BP_DeactivateStateChart(int32_t Key, FGameplayTagContainer& AnimationHints, FUIStateChartContextChangeSet& ContextChanges, EUIStateTransitionUrgency Urgency); // [0xa251a5c] Final|Native|Protected|HasOutParms|BlueprintCallable 
	// Function /Script/UIChart.UIStateChartManager.BP_AddStateChart
	// int32_t BP_AddStateChart(class UUIStateChart* StateChartAsset, class ULocalPlayer* OwningLocalPlayer, FGameplayTagContainer& AnimationHints, FGameplayTag InitialStateTag, EUIStateTransitionUrgency Urgency); // [0xa2511ec] Final|Native|Protected|HasOutParms|BlueprintCallable 
};

/// Class /Script/UIChart.UIStateChartManagerEntry
/// Size: 0x0018 (0x000028 - 0x000040)
class UUIStateChartManagerEntry : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(class UUIStateChartRegion*)                MainRegion                                                  OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(class UUIStateChartManagerPlayer*)         ManagerPlayer                                               OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(class UUIStateChartResourceCollection*)    StateChartResources                                         OFFSET(get<T>, {0x38, 8, 0, 0})
};

/// Class /Script/UIChart.UIStateChartManagerPlayer
/// Size: 0x00D0 (0x000028 - 0x0000F8)
class UUIStateChartManagerPlayer : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
	CMember(TMap<int32_t, UUIStateChartManagerEntry*>) ActiveChartEntries                                          OFFSET(get<T>, {0x28, 80, 0, 0})
	CMember(TMap<int32_t, UUIStateChartManagerEntry*>) InactiveChartEntries                                        OFFSET(get<T>, {0x78, 80, 0, 0})
	CMember(TArray<FUIStateChartManagerChartDeactivationRequest>) DeactivationRequests                             OFFSET(get<T>, {0xC8, 16, 0, 0})
	CMember(class UUIStateChartManager*)               Manager                                                     OFFSET(get<T>, {0xE8, 8, 0, 0})
	CMember(class UUIStateChartResourceCollection*)    PlayerResources                                             OFFSET(get<T>, {0xF0, 8, 0, 0})
};

/// Class /Script/UIChart.UIStateBacktrackStep
/// Size: 0x0078 (0x000028 - 0x0000A0)
class UUIStateBacktrackStep : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	SMember(FGameplayTag)                              TransitionTag                                               OFFSET(getStruct<T>, {0x28, 4, 0, 0})
	CMember(class UUIState*)                           ReturnState                                                 OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(class UUIState*)                           AvailableState                                              OFFSET(get<T>, {0x38, 8, 0, 0})
	SMember(FUIStateChartContextChangeSet)             ReverseContextChanges                                       OFFSET(getStruct<T>, {0x40, 80, 0, 0})
	CMember(TArray<class UUIStateBacktrackStep*>)      AvailablePaths                                              OFFSET(get<T>, {0x90, 16, 0, 0})
};

/// Class /Script/UIChart.UIStateChartRegion
/// Size: 0x00C0 (0x000028 - 0x0000E8)
class UUIStateChartRegion : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
	CMember(class UUIStateChartManagerEntry*)          ManagerEntry                                                OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(class UUIState*)                           RootState                                                   OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(class UUIState*)                           ParentState                                                 OFFSET(get<T>, {0x38, 8, 0, 0})
	CMember(TArray<class UUIStateChartRegion*>)        ParallelRegions                                             OFFSET(get<T>, {0x40, 16, 0, 0})
	CMember(TMap<FGameplayTag, UUIState*>)             TaggedStates                                                OFFSET(get<T>, {0x50, 80, 0, 0})
	CMember(class UUIState*)                           ActiveLeafState                                             OFFSET(get<T>, {0xA0, 8, 0, 0})
	CMember(class UUIStateChartTransitionOperation*)   ActiveTransitionOperation                                   OFFSET(get<T>, {0xA8, 8, 0, 0})
	CMember(class UUIStateChartTransitionOperation*)   QueuedTransitionOperation                                   OFFSET(get<T>, {0xB0, 8, 0, 0})
	CMember(TArray<class UUIStateBacktrackStep*>)      AvailableBacktrackPaths                                     OFFSET(get<T>, {0xB8, 16, 0, 0})
	CMember(class UUIStateBacktrackStep*)              ActiveTransitionBacktrackStep                               OFFSET(get<T>, {0xC8, 8, 0, 0})
	SMember(FString)                                   ChartName                                                   OFFSET(getStruct<T>, {0xD0, 16, 0, 0})
};

/// Class /Script/UIChart.UIStateChartResourceCollection
/// Size: 0x0050 (0x000028 - 0x000078)
class UUIStateChartResourceCollection : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	CMember(TMap<UClass*, UObject*>)                   ResourcesByClass                                            OFFSET(get<T>, {0x28, 80, 0, 0})
};

/// Class /Script/UIChart.UIStateChartTransition
/// Size: 0x0018 (0x000028 - 0x000040)
class UUIStateChartTransition : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(class UUIState*)                           Source                                                      OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(class UUIState*)                           Target                                                      OFFSET(get<T>, {0x30, 8, 0, 0})
};

/// Class /Script/UIChart.UIStateChartTransitionOperation
/// Size: 0x0098 (0x000028 - 0x0000C0)
class UUIStateChartTransitionOperation : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	CMember(class UUIStateChartRegion*)                Region                                                      OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(class UUIState*)                           OriginState                                                 OFFSET(get<T>, {0x38, 8, 0, 0})
	CMember(class UUIState*)                           EndState                                                    OFFSET(get<T>, {0x40, 8, 0, 0})
	CMember(class UUIState*)                           TransitionTargetState                                       OFFSET(get<T>, {0x48, 8, 0, 0})
	CMember(TArray<class UUIState*>)                   KnownStatesToActivate                                       OFFSET(get<T>, {0x58, 16, 0, 0})
	CMember(TArray<class UUIState*>)                   StatesToDeactivate                                          OFFSET(get<T>, {0x68, 16, 0, 0})
	CMember(class UUIStateChartTransitionOperationGroup*) Group                                                    OFFSET(get<T>, {0x78, 8, 0, 0})
	SMember(FUIStateRelay)                             StateRelay                                                  OFFSET(getStruct<T>, {0x80, 40, 0, 0})
	CMember(class UUIState*)                           BacktrackReturnState                                        OFFSET(get<T>, {0xB0, 8, 0, 0})
};

/// Class /Script/UIChart.UIStateChartTransitionOperationGroup
/// Size: 0x0180 (0x000028 - 0x0001A8)
class UUIStateChartTransitionOperationGroup : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 424;

public:
	CMember(TSet<UUIStateChartTransitionOperation*>)   Operations                                                  OFFSET(get<T>, {0x28, 80, 0, 0})
	CMember(TSet<UUIStateChartTransitionOperation*>)   OperationsReadyForContextUpdate                             OFFSET(get<T>, {0x78, 80, 0, 0})
	CMember(class UUIStateChartContext*)               Context                                                     OFFSET(get<T>, {0xC8, 8, 0, 0})
	CMember(class ULocalPlayer*)                       LocalPlayer                                                 OFFSET(get<T>, {0xD0, 8, 0, 0})
	SMember(FUIStateChartContextChangeSet)             ContextChanges                                              OFFSET(getStruct<T>, {0xD8, 80, 0, 0})
	SMember(FUIStateChartContextChangeSet)             ReverseContextChanges                                       OFFSET(getStruct<T>, {0x128, 80, 0, 0})
	SMember(FUIStateChartTransitionOperationParameters) Parameters                                                 OFFSET(getStruct<T>, {0x178, 40, 0, 0})
	SMember(FGameplayTag)                              TransitionEventTag                                          OFFSET(getStruct<T>, {0x1A0, 4, 0, 0})
};

/// Struct /Script/UIChart.UIStateChartTransitionOperationParameters
/// Size: 0x0028 (0x000000 - 0x000028)
class FUIStateChartTransitionOperationParameters : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FGameplayTagContainer)                     AnimationHints                                              OFFSET(getStruct<T>, {0x0, 32, 0, 0})
	CMember(EUIStateTransitionUrgency)                 Urgency                                                     OFFSET(get<T>, {0x20, 1, 0, 0})
};

/// Struct /Script/UIChart.ContextSetterSetEntry
/// Size: 0x0018 (0x000000 - 0x000018)
class FContextSetterSetEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FGameplayTag)                              Key                                                         OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FString)                                   Value                                                       OFFSET(getStruct<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/UIChart.ContextSetterClearEntry
/// Size: 0x0004 (0x000000 - 0x000004)
class FContextSetterClearEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	SMember(FGameplayTag)                              Key                                                         OFFSET(getStruct<T>, {0x0, 4, 0, 0})
};

/// Struct /Script/UIChart.ContextSetterChanges
/// Size: 0x0020 (0x000000 - 0x000020)
class FContextSetterChanges : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(TArray<FContextSetterSetEntry>)            ValuesToSet                                                 OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FContextSetterClearEntry>)          ValuesToClear                                               OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/UIChart.UIStateComponentInstanceStack
/// Size: 0x0010 (0x000000 - 0x000010)
class FUIStateComponentInstanceStack : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<class UStackingUIStateComponent*>)  InstanceStack                                               OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/UIChart.UIStateConfigurationChildReference
/// Size: 0x0004 (0x000000 - 0x000004)
class FUIStateConfigurationChildReference : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(int32_t)                                   ChildStateId                                                OFFSET(get<int32_t>, {0x0, 4, 0, 0})
};

/// Struct /Script/UIChart.UIStateAutomationRule
/// Size: 0x0018 (0x000000 - 0x000018)
class FUIStateAutomationRule : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(TArray<FUIStateChartContextCondition>)     ContextConditions                                           OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FUIStateConfigurationChildReference)       ChildStateReference                                         OFFSET(getStruct<T>, {0x10, 4, 0, 0})
};

/// Struct /Script/UIChart.UIStateChartContextCondition
/// Size: 0x0018 (0x000000 - 0x000018)
class FUIStateChartContextCondition : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FGameplayTag)                              Key                                                         OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(EUIStateChartContextConditionType)         ConditionType                                               OFFSET(get<T>, {0x4, 4, 0, 0})
	SMember(FString)                                   ComparisonConstant                                          OFFSET(getStruct<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/UIChart.UIStateTransitionData
/// Size: 0x000C (0x000000 - 0x00000C)
class FUIStateTransitionData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	SMember(FGameplayTag)                              TriggerTag                                                  OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   SourceStateId                                               OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   TargetStateId                                               OFFSET(get<int32_t>, {0x8, 4, 0, 0})
};

/// Struct /Script/UIChart.UIStateChartContextChangeSet
/// Size: 0x0050 (0x000000 - 0x000050)
class FUIStateChartContextChangeSet : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TMap<FGameplayTag, FString>)               Changes                                                     OFFSET(get<T>, {0x0, 80, 0, 0})
};

/// Struct /Script/UIChart.UIStateChartContextEntryOverride
/// Size: 0x0028 (0x000000 - 0x000028)
class FUIStateChartContextEntryOverride : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FString)                                   OverrideValue                                               OFFSET(getStruct<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/UIChart.UIStateChartManagerChartDeactivationRequest
/// Size: 0x0088 (0x000000 - 0x000088)
class FUIStateChartManagerChartDeactivationRequest : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
};

/// Struct /Script/UIChart.UIStateRelayBaton
/// Size: 0x0028 (0x000000 - 0x000028)
class FUIStateRelayBaton : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(class UUIStateComponent*)                  OfferingComponent                                           OFFSET(get<T>, {0x10, 8, 0, 0})
	CMember(class UClass*)                             OfferingComponentType                                       OFFSET(get<T>, {0x18, 8, 0, 0})
	CMember(class UUIStateComponentConfiguration*)     OfferingComponentConfiguration                              OFFSET(get<T>, {0x20, 8, 0, 0})
};

/// Struct /Script/UIChart.UIStateRelay
/// Size: 0x0028 (0x000000 - 0x000028)
class FUIStateRelay : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(TArray<FUIStateRelayBaton>)                AvailableBatons                                             OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FUIStateRelayBaton>)                ClaimedBatons                                               OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Enum /Script/UIChart.EWidgetStateComponentUnloadDefaultBehavior
/// Size: 0x03
enum class EWidgetStateComponentUnloadDefaultBehavior : uint32_t
{
	EWidgetStateComponentUnloadDefaultBehavior__WaitForAnimations                    = 0,
	EWidgetStateComponentUnloadDefaultBehavior__DoNotWaitForAnimations               = 1,
	EWidgetStateComponentUnloadDefaultBehavior__EWidgetStateComponentUnloadDefaultBehavior_MAX = 2
};

/// Enum /Script/UIChart.EUIStateTransitionUrgency
/// Size: 0x03
enum class EUIStateTransitionUrgency : uint8_t
{
	EUIStateTransitionUrgency__Normal                                                = 0,
	EUIStateTransitionUrgency__High                                                  = 1,
	EUIStateTransitionUrgency__EUIStateTransitionUrgency_MAX                         = 2
};

/// Enum /Script/UIChart.EUIStateAutomationType
/// Size: 0x03
enum class EUIStateAutomationType : uint8_t
{
	EUIStateAutomationType__Initial                                                  = 0,
	EUIStateAutomationType__Continual                                                = 1,
	EUIStateAutomationType__EUIStateAutomationType_MAX                               = 2
};

/// Enum /Script/UIChart.EUIStateChartContextConditionType
/// Size: 0x14
enum class EUIStateChartContextConditionType : uint32_t
{
	EUIStateChartContextConditionType__IsEmpty                                       = 0,
	EUIStateChartContextConditionType__IsNotEmpty                                    = 1,
	EUIStateChartContextConditionType__IsEqualTo                                     = 2,
	EUIStateChartContextConditionType__IsNotEqualTo                                  = 3,
	EUIStateChartContextConditionType__IsGreaterThan                                 = 4,
	EUIStateChartContextConditionType__IsGreaterThanOrEqualTo                        = 5,
	EUIStateChartContextConditionType__IsLessThan                                    = 6,
	EUIStateChartContextConditionType__IsLessThanOrEqualTo                           = 7,
	EUIStateChartContextConditionType__IsTrue                                        = 8,
	EUIStateChartContextConditionType__IsNotTrue                                     = 9,
	EUIStateChartContextConditionType__StartsWith                                    = 10,
	EUIStateChartContextConditionType__EndsWith                                      = 11,
	EUIStateChartContextConditionType__Contains                                      = 12,
	EUIStateChartContextConditionType__EUIStateChartContextConditionType_MAX         = 13
};

/// Enum /Script/UIChart.EUIChartRegionTransitionScope
/// Size: 0x03
enum class EUIChartRegionTransitionScope : uint8_t
{
	EUIChartRegionTransitionScope__ThisRegionOnly                                    = 0,
	EUIChartRegionTransitionScope__ThisRegionOrChildRegions                          = 1,
	EUIChartRegionTransitionScope__EUIChartRegionTransitionScope_MAX                 = 2
};

/// Enum /Script/UIChart.EStateComponentStatus
/// Size: 0x09
enum class EStateComponentStatus : uint32_t
{
	EStateComponentStatus__Inactive                                                  = 0,
	EStateComponentStatus__PreparingForLoad                                          = 1,
	EStateComponentStatus__Loading                                                   = 2,
	EStateComponentStatus__DoneLoading                                               = 3,
	EStateComponentStatus__Operational                                               = 4,
	EStateComponentStatus__PreparingForUnload                                        = 5,
	EStateComponentStatus__Unloading                                                 = 6,
	EStateComponentStatus__DoneUnloading                                             = 7,
	EStateComponentStatus__EStateComponentStatus_MAX                                 = 8
};

/// Enum /Script/UIChart.EStateChartResourceScope
/// Size: 0x04
enum class EStateChartResourceScope : uint32_t
{
	EStateChartResourceScope__StateChart                                             = 0,
	EStateChartResourceScope__Player                                                 = 1,
	EStateChartResourceScope__Global                                                 = 2,
	EStateChartResourceScope__EStateChartResourceScope_MAX                           = 3
};

