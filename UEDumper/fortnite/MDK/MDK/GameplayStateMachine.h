
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: GameplayTags
/// dependency: NetCore

/// Class /Script/GameplayStateMachine.GameplayState
/// Size: 0x0050 (0x000028 - 0x000078)
class UGameplayState : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	SMember(FGameplayTag)                              StateId                                                     OFFSET(getStruct<T>, {0x28, 4, 0, 0})
	SMember(FGameplayTagContainer)                     StateRuntimeTags                                            OFFSET(getStruct<T>, {0x30, 32, 0, 0})
	DMember(bool)                                      bEvaluateTransition                                         OFFSET(get<bool>, {0x50, 1, 0, 0})
	DMember(bool)                                      bReplicates                                                 OFFSET(get<bool>, {0x51, 1, 0, 0})
	DMember(bool)                                      bStateBegun                                                 OFFSET(get<bool>, {0x52, 1, 0, 0})
	DMember(bool)                                      bStateEnded                                                 OFFSET(get<bool>, {0x53, 1, 0, 0})
	DMember(float)                                     InitializationServerTime                                    OFFSET(get<float>, {0x54, 4, 0, 0})
	DMember(float)                                     BeginStateDelay                                             OFFSET(get<float>, {0x58, 4, 0, 0})
	CMember(class UGameplayStateMachine*)              CachedGameplayStateMachine                                  OFFSET(get<T>, {0x60, 8, 0, 0})
	CMember(class UGameplayStateMachineManager*)       CachedStateMachineManager                                   OFFSET(get<T>, {0x68, 8, 0, 0})
	CMember(class UGameplayState*)                     Hack_StateToDelayProcess                                    OFFSET(get<T>, {0x70, 8, 0, 0})


	/// Functions
	// Function /Script/GameplayStateMachine.GameplayState.UpdateStateEventServer
	// void UpdateStateEventServer(float DeltaTime);                                                                            // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/GameplayStateMachine.GameplayState.UpdateStateEventClient
	// void UpdateStateEventClient(float DeltaTime);                                                                            // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/GameplayStateMachine.GameplayState.UpdateStateEvent
	// void UpdateStateEvent(float DeltaTime);                                                                                  // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/GameplayStateMachine.GameplayState.RemoveStateRuntimeTag
	// void RemoveStateRuntimeTag(FGameplayTag& RemovedTag);                                                                    // [0xa7ea864] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameplayStateMachine.GameplayState.MarkStateToEvaluateTransitions
	// void MarkStateToEvaluateTransitions();                                                                                   // [0xa7ea83c] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayStateMachine.GameplayState.InitializeStateEventServer
	// void InitializeStateEventServer(FGameplayTag& PrevStateId);                                                              // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/GameplayStateMachine.GameplayState.InitializeStateEventClient
	// void InitializeStateEventClient(FGameplayTag& PrevStateId);                                                              // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/GameplayStateMachine.GameplayState.InitializeStateEvent
	// void InitializeStateEvent(FGameplayTag& PrevStateId);                                                                    // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/GameplayStateMachine.GameplayState.HasStateRuntimeTag
	// bool HasStateRuntimeTag(FGameplayTag& QueryTag);                                                                         // [0xa7ea768] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameplayStateMachine.GameplayState.HasAuthority
	// bool HasAuthority();                                                                                                     // [0xa7ea744] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayStateMachine.GameplayState.GetStateRuntimeTags
	// FGameplayTagContainer GetStateRuntimeTags();                                                                             // [0x983b4b8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayStateMachine.GameplayState.GetStateId
	// FGameplayTag GetStateId();                                                                                               // [0x3ee14d8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayStateMachine.GameplayState.GetOwningActor
	// class AActor* GetOwningActor();                                                                                          // [0xa7ea720] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayStateMachine.GameplayState.GetGameplayStateMachine
	// class UGameplayStateMachine* GetGameplayStateMachine();                                                                  // [0x78d671c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayStateMachine.GameplayState.EndStateEventServer
	// void EndStateEventServer(FGameplayTag& NextStateId);                                                                     // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/GameplayStateMachine.GameplayState.EndStateEventClient
	// void EndStateEventClient(FGameplayTag& NextStateId);                                                                     // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/GameplayStateMachine.GameplayState.EndStateEvent
	// void EndStateEvent(FGameplayTag& NextStateId);                                                                           // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/GameplayStateMachine.GameplayState.BeginStateEventServer
	// void BeginStateEventServer(FGameplayTag& PrevStateId);                                                                   // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/GameplayStateMachine.GameplayState.BeginStateEventClient
	// void BeginStateEventClient(FGameplayTag& PrevStateId);                                                                   // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/GameplayStateMachine.GameplayState.BeginStateEvent
	// void BeginStateEvent(FGameplayTag& PrevStateId);                                                                         // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/GameplayStateMachine.GameplayState.AddStateRuntimeTag
	// void AddStateRuntimeTag(FGameplayTag& AddedTag);                                                                         // [0xa7ea630] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/GameplayStateMachine.GameplayStateMachine
/// Size: 0x0050 (0x000078 - 0x0000C8)
class UGameplayStateMachine : public UGameplayState
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	SMember(FGameplayTag)                              StateMachineId                                              OFFSET(getStruct<T>, {0x90, 4, 0, 0})
	SMember(FActiveGameplayStateData)                  ActiveGameplayStateData                                     OFFSET(getStruct<T>, {0x98, 24, 0, 0})
	CMember(TArray<FGameplayStateSettings>)            GameplayStateSettings                                       OFFSET(get<T>, {0xB0, 16, 0, 0})
	SMember(FGameplayTag)                              InitialGameplayStateId                                      OFFSET(getStruct<T>, {0xC0, 4, 0, 0})


	/// Functions
	// Function /Script/GameplayStateMachine.GameplayStateMachine.SetState
	// void SetState(FGameplayTag& InStateId, float InBeginStateDelay);                                                         // [0xa7ea930] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameplayStateMachine.GameplayStateMachine.OnRep_ActiveGameplayStateData
	// void OnRep_ActiveGameplayStateData();                                                                                    // [0xa7ea850] Final|Native|Private 
	// Function /Script/GameplayStateMachine.GameplayStateMachine.GetStateMachineId
	// FGameplayTag GetStateMachineId();                                                                                        // [0x96f64a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayStateMachine.GameplayStateMachine.GetActiveStateObject
	// class UGameplayState* GetActiveStateObject();                                                                            // [0x3b55e70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayStateMachine.GameplayStateMachine.GetActiveStateId
	// FGameplayTag GetActiveStateId();                                                                                         // [0xa7ea6f8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayStateMachine.GameplayStateMachine.EvaluateStateTransition
	// void EvaluateStateTransition();                                                                                          // [0x681406c] Native|Event|Protected|BlueprintEvent 
};

/// Class /Script/GameplayStateMachine.GameplayStateMachineManager
/// Size: 0x0120 (0x0000A0 - 0x0001C0)
class UGameplayStateMachineManager : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 448;

public:
	SMember(FGameplayStateMachineArray)                StateMachineList                                            OFFSET(getStruct<T>, {0xA0, 288, 0, 0})
};

/// Struct /Script/GameplayStateMachine.GameplayStateTransition
/// Size: 0x0028 (0x000000 - 0x000028)
class FGameplayStateTransition : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FGameplayTagContainer)                     TransitionConditionTags                                     OFFSET(getStruct<T>, {0x0, 32, 0, 0})
	SMember(FGameplayTag)                              TransitionStateTag                                          OFFSET(getStruct<T>, {0x20, 4, 0, 0})
	DMember(float)                                     BeginStateDelay                                             OFFSET(get<float>, {0x24, 4, 0, 0})
};

/// Struct /Script/GameplayStateMachine.GameplayStateSettings
/// Size: 0x0020 (0x000000 - 0x000020)
class FGameplayStateSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(class UClass*)                             StateClass                                                  OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FGameplayTag)                              StateId                                                     OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	CMember(TArray<FGameplayStateTransition>)          StateTransitions                                            OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/GameplayStateMachine.ActiveGameplayStateData
/// Size: 0x0018 (0x000000 - 0x000018)
class FActiveGameplayStateData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(class UGameplayState*)                     GameplayState                                               OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FGameplayTag)                              PreviousStateId                                             OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	DMember(float)                                     BeginStateDelay                                             OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     InitializationTime                                          OFFSET(get<float>, {0x10, 4, 0, 0})
};

/// Struct /Script/GameplayStateMachine.GameplayStateMachineItem
/// Size: 0x0014 (0x00000C - 0x000020)
class FGameplayStateMachineItem : public FFastArraySerializerItem
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(class UGameplayStateMachine*)              StateMachine                                                OFFSET(get<T>, {0x10, 8, 0, 0})
	DMember(float)                                     BeginStateDelay                                             OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     InitializationTime                                          OFFSET(get<float>, {0x1C, 4, 0, 0})
};

/// Struct /Script/GameplayStateMachine.GameplayStateMachineArray
/// Size: 0x0018 (0x000108 - 0x000120)
class FGameplayStateMachineArray : public FFastArraySerializer
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	CMember(class UGameplayStateMachineManager*)       StateMachineManager                                         OFFSET(get<T>, {0x108, 8, 0, 0})
	CMember(TArray<FGameplayStateMachineItem>)         StateMachineItems                                           OFFSET(get<T>, {0x110, 16, 0, 0})
};

