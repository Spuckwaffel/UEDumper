
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: GameplayTags
/// dependency: NetCore

/// Class /Script/GameplayStateMachine.GameplayState
/// Size: 0x0050 (0x000028 - 0x000078)
class UGameplayState : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	FGameplayTag                                       StateId;                                                    // 0x0028   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x002C   (0x0004)  MISSED
	FGameplayTagContainer                              StateRuntimeTags;                                           // 0x0030   (0x0020)  
	bool                                               bEvaluateTransition;                                        // 0x0050   (0x0001)  
	bool                                               bReplicates;                                                // 0x0051   (0x0001)  
	bool                                               bStateBegun;                                                // 0x0052   (0x0001)  
	bool                                               bStateEnded;                                                // 0x0053   (0x0001)  
	float                                              InitializationServerTime;                                   // 0x0054   (0x0004)  
	float                                              BeginStateDelay;                                            // 0x0058   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x005C   (0x0004)  MISSED
	class UGameplayStateMachine*                       CachedGameplayStateMachine;                                 // 0x0060   (0x0008)  
	class UGameplayStateMachineManager*                CachedStateMachineManager;                                  // 0x0068   (0x0008)  
	class UGameplayState*                              Hack_StateToDelayProcess;                                   // 0x0070   (0x0008)  


	/// Functions
	// Function /Script/GameplayStateMachine.GameplayState.UpdateStateEventServer
	// void UpdateStateEventServer(float DeltaTime);                                                                         // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/GameplayStateMachine.GameplayState.UpdateStateEventClient
	// void UpdateStateEventClient(float DeltaTime);                                                                         // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/GameplayStateMachine.GameplayState.UpdateStateEvent
	// void UpdateStateEvent(float DeltaTime);                                                                               // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/GameplayStateMachine.GameplayState.RemoveStateRuntimeTag
	// void RemoveStateRuntimeTag(FGameplayTag& RemovedTag);                                                                 // [0xa7ea864] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameplayStateMachine.GameplayState.MarkStateToEvaluateTransitions
	// void MarkStateToEvaluateTransitions();                                                                                // [0xa7ea83c] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayStateMachine.GameplayState.InitializeStateEventServer
	// void InitializeStateEventServer(FGameplayTag& PrevStateId);                                                           // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/GameplayStateMachine.GameplayState.InitializeStateEventClient
	// void InitializeStateEventClient(FGameplayTag& PrevStateId);                                                           // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/GameplayStateMachine.GameplayState.InitializeStateEvent
	// void InitializeStateEvent(FGameplayTag& PrevStateId);                                                                 // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/GameplayStateMachine.GameplayState.HasStateRuntimeTag
	// bool HasStateRuntimeTag(FGameplayTag& QueryTag);                                                                      // [0xa7ea768] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameplayStateMachine.GameplayState.HasAuthority
	// bool HasAuthority();                                                                                                  // [0xa7ea744] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayStateMachine.GameplayState.GetStateRuntimeTags
	// FGameplayTagContainer GetStateRuntimeTags();                                                                          // [0x983b4b8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayStateMachine.GameplayState.GetStateId
	// FGameplayTag GetStateId();                                                                                            // [0x3ee14d8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayStateMachine.GameplayState.GetOwningActor
	// class AActor* GetOwningActor();                                                                                       // [0xa7ea720] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayStateMachine.GameplayState.GetGameplayStateMachine
	// class UGameplayStateMachine* GetGameplayStateMachine();                                                               // [0x78d671c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayStateMachine.GameplayState.EndStateEventServer
	// void EndStateEventServer(FGameplayTag& NextStateId);                                                                  // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/GameplayStateMachine.GameplayState.EndStateEventClient
	// void EndStateEventClient(FGameplayTag& NextStateId);                                                                  // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/GameplayStateMachine.GameplayState.EndStateEvent
	// void EndStateEvent(FGameplayTag& NextStateId);                                                                        // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/GameplayStateMachine.GameplayState.BeginStateEventServer
	// void BeginStateEventServer(FGameplayTag& PrevStateId);                                                                // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/GameplayStateMachine.GameplayState.BeginStateEventClient
	// void BeginStateEventClient(FGameplayTag& PrevStateId);                                                                // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/GameplayStateMachine.GameplayState.BeginStateEvent
	// void BeginStateEvent(FGameplayTag& PrevStateId);                                                                      // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/GameplayStateMachine.GameplayState.AddStateRuntimeTag
	// void AddStateRuntimeTag(FGameplayTag& AddedTag);                                                                      // [0xa7ea630] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/GameplayStateMachine.ActiveGameplayStateData
/// Size: 0x0018 (0x000000 - 0x000018)
struct FActiveGameplayStateData
{ 
	class UGameplayState*                              GameplayState;                                              // 0x0000   (0x0008)  
	FGameplayTag                                       PreviousStateId;                                            // 0x0008   (0x0004)  
	float                                              BeginStateDelay;                                            // 0x000C   (0x0004)  
	float                                              InitializationTime;                                         // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/GameplayStateMachine.GameplayStateTransition
/// Size: 0x0028 (0x000000 - 0x000028)
struct FGameplayStateTransition
{ 
	FGameplayTagContainer                              TransitionConditionTags;                                    // 0x0000   (0x0020)  
	FGameplayTag                                       TransitionStateTag;                                         // 0x0020   (0x0004)  
	float                                              BeginStateDelay;                                            // 0x0024   (0x0004)  
};

/// Struct /Script/GameplayStateMachine.GameplayStateSettings
/// Size: 0x0020 (0x000000 - 0x000020)
struct FGameplayStateSettings
{ 
	class UClass*                                      StateClass;                                                 // 0x0000   (0x0008)  
	FGameplayTag                                       StateId;                                                    // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	TArray<FGameplayStateTransition>                   StateTransitions;                                           // 0x0010   (0x0010)  
};

/// Class /Script/GameplayStateMachine.GameplayStateMachine
/// Size: 0x0050 (0x000078 - 0x0000C8)
class UGameplayStateMachine : public UGameplayState
{ 
public:
	unsigned char                                      UnknownData00_3[0x18];                                      // 0x0078   (0x0018)  MISSED
	FGameplayTag                                       StateMachineId;                                             // 0x0090   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0094   (0x0004)  MISSED
	FActiveGameplayStateData                           ActiveGameplayStateData;                                    // 0x0098   (0x0018)  
	TArray<FGameplayStateSettings>                     GameplayStateSettings;                                      // 0x00B0   (0x0010)  
	FGameplayTag                                       InitialGameplayStateId;                                     // 0x00C0   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x00C4   (0x0004)  MISSED


	/// Functions
	// Function /Script/GameplayStateMachine.GameplayStateMachine.SetState
	// void SetState(FGameplayTag& InStateId, float InBeginStateDelay);                                                      // [0xa7ea930] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameplayStateMachine.GameplayStateMachine.OnRep_ActiveGameplayStateData
	// void OnRep_ActiveGameplayStateData();                                                                                 // [0xa7ea850] Final|Native|Private 
	// Function /Script/GameplayStateMachine.GameplayStateMachine.GetStateMachineId
	// FGameplayTag GetStateMachineId();                                                                                     // [0x96f64a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayStateMachine.GameplayStateMachine.GetActiveStateObject
	// class UGameplayState* GetActiveStateObject();                                                                         // [0x3b55e70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayStateMachine.GameplayStateMachine.GetActiveStateId
	// FGameplayTag GetActiveStateId();                                                                                      // [0xa7ea6f8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayStateMachine.GameplayStateMachine.EvaluateStateTransition
	// void EvaluateStateTransition();                                                                                       // [0x681406c] Native|Event|Protected|BlueprintEvent 
};

/// Struct /Script/GameplayStateMachine.GameplayStateMachineItem
/// Size: 0x0014 (0x00000C - 0x000020)
struct FGameplayStateMachineItem : FFastArraySerializerItem
{ 
	unsigned char                                      UnknownData00_3[0x4];                                       // 0x000C   (0x0004)  MISSED
	class UGameplayStateMachine*                       StateMachine;                                               // 0x0010   (0x0008)  
	float                                              BeginStateDelay;                                            // 0x0018   (0x0004)  
	float                                              InitializationTime;                                         // 0x001C   (0x0004)  
};

/// Struct /Script/GameplayStateMachine.GameplayStateMachineArray
/// Size: 0x0018 (0x000108 - 0x000120)
struct FGameplayStateMachineArray : FFastArraySerializer
{ 
	class UGameplayStateMachineManager*                StateMachineManager;                                        // 0x0108   (0x0008)  
	TArray<FGameplayStateMachineItem>                  StateMachineItems;                                          // 0x0110   (0x0010)  
};

/// Class /Script/GameplayStateMachine.GameplayStateMachineManager
/// Size: 0x0120 (0x0000A0 - 0x0001C0)
class UGameplayStateMachineManager : public UActorComponent
{ 
public:
	FGameplayStateMachineArray                         StateMachineList;                                           // 0x00A0   (0x0120)  
};

