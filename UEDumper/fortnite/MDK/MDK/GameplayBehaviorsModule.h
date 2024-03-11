
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: AIModule
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: GameplayAbilities
/// dependency: GameplayTags

/// Class /Script/GameplayBehaviorsModule.BTDecorator_GameplayTagQuery
/// Size: 0x0080 (0x000068 - 0x0000E8)
class UBTDecorator_GameplayTagQuery : public UBTDecorator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
	SMember(FBlackboardKeySelector)                    ActorForGameplayTagQuery                                    OFFSET(getStruct<T>, {0x68, 40, 0, 0})
	SMember(FGameplayTagQuery)                         GameplayTagQuery                                            OFFSET(getStruct<T>, {0x90, 72, 0, 0})
	CMember(TArray<FGameplayTag>)                      QueryTags                                                   OFFSET(get<T>, {0xD8, 16, 0, 0})
};

/// Class /Script/GameplayBehaviorsModule.BTTask_StopGameplayBehavior
/// Size: 0x0008 (0x000070 - 0x000078)
class UBTTask_StopGameplayBehavior : public UBTTaskNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	CMember(class UClass*)                             BehaviorToStop                                              OFFSET(get<T>, {0x70, 8, 0, 0})
};

/// Class /Script/GameplayBehaviorsModule.GameplayBehaviorConfig
/// Size: 0x0008 (0x000028 - 0x000030)
class UGameplayBehaviorConfig : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(class UClass*)                             BehaviorClass                                               OFFSET(get<T>, {0x28, 8, 0, 0})
};

/// Class /Script/GameplayBehaviorsModule.GameplayBehaviorConfig_BehaviorTree
/// Size: 0x0028 (0x000030 - 0x000058)
class UGameplayBehaviorConfig_BehaviorTree : public UGameplayBehaviorConfig
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(TWeakObjectPtr<UBehaviorTree*>)            BehaviorTree                                                OFFSET(get<T>, {0x30, 32, 0, 0})
	DMember(bool)                                      bRevertToPreviousBTOnFinish                                 OFFSET(get<bool>, {0x50, 1, 1, 0})
};

/// Class /Script/GameplayBehaviorsModule.GameplayBehavior
/// Size: 0x0060 (0x000028 - 0x000088)
class UGameplayBehavior : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FGameplayTag)                              ActionTag                                                   OFFSET(getStruct<T>, {0x3C, 4, 0, 0})
	CMember(TArray<class AActor*>)                     RelevantActors                                              OFFSET(get<T>, {0x58, 16, 0, 0})
	CMember(class AActor*)                             TransientSmartObjectOwner                                   OFFSET(get<T>, {0x68, 8, 0, 0})
	CMember(class AActor*)                             TransientAvatar                                             OFFSET(get<T>, {0x70, 8, 0, 0})
	CMember(TArray<class UGameplayTask*>)              ActiveTasks                                                 OFFSET(get<T>, {0x78, 16, 0, 0})


	/// Functions
	// Function /Script/GameplayBehaviorsModule.GameplayBehavior.K2_TriggerBehavior
	// void K2_TriggerBehavior(class AActor* Avatar, class UGameplayBehaviorConfig* Config, class AActor* SmartObjectOwner);    // [0x7e5d22c] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayBehaviorsModule.GameplayBehavior.K2_OnTriggeredPawn
	// void K2_OnTriggeredPawn(class APawn* Avatar, class UGameplayBehaviorConfig* Config, class AActor* SmartObjectOwner);     // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/GameplayBehaviorsModule.GameplayBehavior.K2_OnTriggeredCharacter
	// void K2_OnTriggeredCharacter(class ACharacter* Avatar, class UGameplayBehaviorConfig* Config, class AActor* SmartObjectOwner); // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/GameplayBehaviorsModule.GameplayBehavior.K2_OnTriggered
	// void K2_OnTriggered(class AActor* Avatar, class UGameplayBehaviorConfig* Config, class AActor* SmartObjectOwner);        // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/GameplayBehaviorsModule.GameplayBehavior.K2_OnFinishedPawn
	// void K2_OnFinishedPawn(class APawn* Avatar, bool bWasInterrupted);                                                       // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/GameplayBehaviorsModule.GameplayBehavior.K2_OnFinishedCharacter
	// void K2_OnFinishedCharacter(class ACharacter* Avatar, bool bWasInterrupted);                                             // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/GameplayBehaviorsModule.GameplayBehavior.K2_OnFinished
	// void K2_OnFinished(class AActor* Avatar, bool bWasInterrupted);                                                          // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/GameplayBehaviorsModule.GameplayBehavior.K2_GetNextActorIndexInSequence
	// int32_t K2_GetNextActorIndexInSequence(int32_t CurrentIndex);                                                            // [0x7e5d17c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayBehaviorsModule.GameplayBehavior.K2_EndBehavior
	// void K2_EndBehavior(class AActor* Avatar);                                                                               // [0x7e5d0f8] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayBehaviorsModule.GameplayBehavior.K2_AbortBehavior
	// void K2_AbortBehavior(class AActor* Avatar);                                                                             // [0x7e5d074] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/GameplayBehaviorsModule.GameplayBehavior_BehaviorTree
/// Size: 0x0020 (0x000088 - 0x0000A8)
class UGameplayBehavior_BehaviorTree : public UGameplayBehavior
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	CMember(class UBehaviorTree*)                      PreviousBT                                                  OFFSET(get<T>, {0x88, 8, 0, 0})
	CMember(class AAIController*)                      AIController                                                OFFSET(get<T>, {0x90, 8, 0, 0})
	DMember(bool)                                      bSingleRun                                                  OFFSET(get<bool>, {0x98, 1, 0, 0})
};

/// Class /Script/GameplayBehaviorsModule.BlackboardKeyType_GameplayTag
/// Size: 0x0020 (0x000030 - 0x000050)
class UBlackboardKeyType_GameplayTag : public UBlackboardKeyType
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FGameplayTagContainer)                     DefaultValue                                                OFFSET(getStruct<T>, {0x30, 32, 0, 0})
};

/// Class /Script/GameplayBehaviorsModule.GameplayBehaviorConfig_Animation
/// Size: 0x0030 (0x000030 - 0x000060)
class UGameplayBehaviorConfig_Animation : public UGameplayBehaviorConfig
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(TWeakObjectPtr<UAnimMontage*>)             AnimMontage                                                 OFFSET(get<T>, {0x30, 32, 0, 0})
	DMember(float)                                     PlayRate                                                    OFFSET(get<float>, {0x50, 4, 0, 0})
	SMember(FName)                                     StartSectionName                                            OFFSET(getStruct<T>, {0x54, 4, 0, 0})
	DMember(bool)                                      bLoop                                                       OFFSET(get<bool>, {0x58, 1, 1, 0})
};

/// Class /Script/GameplayBehaviorsModule.GameplayBehaviorsBlueprintFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UGameplayBehaviorsBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/GameplayBehaviorsModule.GameplayBehaviorsBlueprintFunctionLibrary.SetValueAsGameplayTagForBlackboardComp
	// void SetValueAsGameplayTagForBlackboardComp(class UBlackboardComponent* BlackboardComp, FName& KeyName, FGameplayTagContainer GameplayTagValue); // [0x7e5d64c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameplayBehaviorsModule.GameplayBehaviorsBlueprintFunctionLibrary.SetBlackboardValueAsGameplayTag
	// void SetBlackboardValueAsGameplayTag(class UBTNode* NodeOwner, FBlackboardKeySelector& Key, FGameplayTagContainer Value); // [0x7e5d444] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameplayBehaviorsModule.GameplayBehaviorsBlueprintFunctionLibrary.GetBlackboardValueAsGameplayTagFromBlackboardComp
	// FGameplayTagContainer GetBlackboardValueAsGameplayTagFromBlackboardComp(class UBlackboardComponent* BlackboardComp, FName& KeyName); // [0x7e5cf8c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameplayBehaviorsModule.GameplayBehaviorsBlueprintFunctionLibrary.GetBlackboardValueAsGameplayTag
	// FGameplayTagContainer GetBlackboardValueAsGameplayTag(class UBTNode* NodeOwner, FBlackboardKeySelector& Key);            // [0x7e5ce70] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayBehaviorsModule.GameplayBehaviorsBlueprintFunctionLibrary.AddGameplayTagFilterToBlackboardKeySelector
	// void AddGameplayTagFilterToBlackboardKeySelector(FBlackboardKeySelector& InSelector, class UObject* Owner, FName PropertyName); // [0x7e5cbfc] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/GameplayBehaviorsModule.GameplayBehaviorSubsystem
/// Size: 0x0050 (0x000030 - 0x000080)
class UGameplayBehaviorSubsystem : public UWorldSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(TMap<AActor*, FAgentGameplayBehaviors>)    AgentGameplayBehaviors                                      OFFSET(get<T>, {0x30, 80, 0, 0})
};

/// Class /Script/GameplayBehaviorsModule.GameplayBehavior_AnimationBased
/// Size: 0x0010 (0x000088 - 0x000098)
class UGameplayBehavior_AnimationBased : public UGameplayBehavior
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	CMember(TArray<FMontagePlaybackData>)              ActivePlayback                                              OFFSET(get<T>, {0x88, 16, 0, 0})


	/// Functions
	// Function /Script/GameplayBehaviorsModule.GameplayBehavior_AnimationBased.OnMontageFinished
	// void OnMontageFinished(class UAnimMontage* Montage, bool bInterrupted, class AActor* InAvatar);                          // [0x7e5d338] Final|Native|Protected 
};

/// Struct /Script/GameplayBehaviorsModule.AgentGameplayBehaviors
/// Size: 0x0010 (0x000000 - 0x000010)
class FAgentGameplayBehaviors : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<class UGameplayBehavior*>)          Behaviors                                                   OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/GameplayBehaviorsModule.MontagePlaybackData
/// Size: 0x0040 (0x000000 - 0x000040)
class FMontagePlaybackData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(class AActor*)                             Avatar                                                      OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class UAnimMontage*)                       AnimMontage                                                 OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(class UAbilitySystemComponent*)            AbilityComponent                                            OFFSET(get<T>, {0x10, 8, 0, 0})
};

/// Enum /Script/GameplayBehaviorsModule.EGameplayBehaviorInstantiationPolicy
/// Size: 0x04
enum class EGameplayBehaviorInstantiationPolicy : uint8_t
{
	EGameplayBehaviorInstantiationPolicy__Instantiate                                = 0,
	EGameplayBehaviorInstantiationPolicy__ConditionallyInstantiate                   = 1,
	EGameplayBehaviorInstantiationPolicy__DontInstantiate                            = 2,
	EGameplayBehaviorInstantiationPolicy__EGameplayBehaviorInstantiationPolicy_MAX   = 3
};

