
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: AIModule
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: GameplayAbilities
/// dependency: GameplayTags

/// Enum /Script/GameplayBehaviorsModule.EGameplayBehaviorInstantiationPolicy
/// Size: 0x04
enum class EGameplayBehaviorInstantiationPolicy : uint8_t
{
	EGameplayBehaviorInstantiationPolicy__Instantiate                                = 0,
	EGameplayBehaviorInstantiationPolicy__ConditionallyInstantiate                   = 1,
	EGameplayBehaviorInstantiationPolicy__DontInstantiate                            = 2,
	EGameplayBehaviorInstantiationPolicy__EGameplayBehaviorInstantiationPolicy_MAX   = 3
};

/// Class /Script/GameplayBehaviorsModule.BTDecorator_GameplayTagQuery
/// Size: 0x0080 (0x000068 - 0x0000E8)
class UBTDecorator_GameplayTagQuery : public UBTDecorator
{ 
public:
	FBlackboardKeySelector                             ActorForGameplayTagQuery;                                   // 0x0068   (0x0028)  
	FGameplayTagQuery                                  GameplayTagQuery;                                           // 0x0090   (0x0048)  
	TArray<FGameplayTag>                               QueryTags;                                                  // 0x00D8   (0x0010)  
};

/// Class /Script/GameplayBehaviorsModule.BTTask_StopGameplayBehavior
/// Size: 0x0008 (0x000070 - 0x000078)
class UBTTask_StopGameplayBehavior : public UBTTaskNode
{ 
public:
	class UClass*                                      BehaviorToStop;                                             // 0x0070   (0x0008)  
};

/// Class /Script/GameplayBehaviorsModule.GameplayBehaviorConfig
/// Size: 0x0008 (0x000028 - 0x000030)
class UGameplayBehaviorConfig : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	class UClass*                                      BehaviorClass;                                              // 0x0028   (0x0008)  
};

/// Class /Script/GameplayBehaviorsModule.GameplayBehaviorConfig_BehaviorTree
/// Size: 0x0028 (0x000030 - 0x000058)
class UGameplayBehaviorConfig_BehaviorTree : public UGameplayBehaviorConfig
{ 
public:
	SDK_UNDEFINED(32,2280) /* TWeakObjectPtr<UBehaviorTree*> */ __um(BehaviorTree);                                // 0x0030   (0x0020)  
	bool                                               bRevertToPreviousBTOnFinish : 1;                            // 0x0050:0 (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0051   (0x0007)  MISSED
};

/// Class /Script/GameplayBehaviorsModule.GameplayBehavior
/// Size: 0x0060 (0x000028 - 0x000088)
class UGameplayBehavior : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x3C];                                      // 0x0000   (0x003C)  MISSED
	FGameplayTag                                       ActionTag;                                                  // 0x003C   (0x0004)  
	unsigned char                                      UnknownData01_5[0x18];                                      // 0x0040   (0x0018)  MISSED
	TArray<class AActor*>                              RelevantActors;                                             // 0x0058   (0x0010)  
	class AActor*                                      TransientSmartObjectOwner;                                  // 0x0068   (0x0008)  
	class AActor*                                      TransientAvatar;                                            // 0x0070   (0x0008)  
	TArray<class UGameplayTask*>                       ActiveTasks;                                                // 0x0078   (0x0010)  


	/// Functions
	// Function /Script/GameplayBehaviorsModule.GameplayBehavior.K2_TriggerBehavior
	// void K2_TriggerBehavior(class AActor* Avatar, class UGameplayBehaviorConfig* Config, class AActor* SmartObjectOwner); // [0x7e5d22c] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayBehaviorsModule.GameplayBehavior.K2_OnTriggeredPawn
	// void K2_OnTriggeredPawn(class APawn* Avatar, class UGameplayBehaviorConfig* Config, class AActor* SmartObjectOwner);  // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/GameplayBehaviorsModule.GameplayBehavior.K2_OnTriggeredCharacter
	// void K2_OnTriggeredCharacter(class ACharacter* Avatar, class UGameplayBehaviorConfig* Config, class AActor* SmartObjectOwner); // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/GameplayBehaviorsModule.GameplayBehavior.K2_OnTriggered
	// void K2_OnTriggered(class AActor* Avatar, class UGameplayBehaviorConfig* Config, class AActor* SmartObjectOwner);     // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/GameplayBehaviorsModule.GameplayBehavior.K2_OnFinishedPawn
	// void K2_OnFinishedPawn(class APawn* Avatar, bool bWasInterrupted);                                                    // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/GameplayBehaviorsModule.GameplayBehavior.K2_OnFinishedCharacter
	// void K2_OnFinishedCharacter(class ACharacter* Avatar, bool bWasInterrupted);                                          // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/GameplayBehaviorsModule.GameplayBehavior.K2_OnFinished
	// void K2_OnFinished(class AActor* Avatar, bool bWasInterrupted);                                                       // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/GameplayBehaviorsModule.GameplayBehavior.K2_GetNextActorIndexInSequence
	// int32_t K2_GetNextActorIndexInSequence(int32_t CurrentIndex);                                                         // [0x7e5d17c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayBehaviorsModule.GameplayBehavior.K2_EndBehavior
	// void K2_EndBehavior(class AActor* Avatar);                                                                            // [0x7e5d0f8] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayBehaviorsModule.GameplayBehavior.K2_AbortBehavior
	// void K2_AbortBehavior(class AActor* Avatar);                                                                          // [0x7e5d074] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/GameplayBehaviorsModule.GameplayBehavior_BehaviorTree
/// Size: 0x0020 (0x000088 - 0x0000A8)
class UGameplayBehavior_BehaviorTree : public UGameplayBehavior
{ 
public:
	class UBehaviorTree*                               PreviousBT;                                                 // 0x0088   (0x0008)  
	class AAIController*                               AIController;                                               // 0x0090   (0x0008)  
	bool                                               bSingleRun;                                                 // 0x0098   (0x0001)  
	unsigned char                                      UnknownData00_6[0xF];                                       // 0x0099   (0x000F)  MISSED
};

/// Class /Script/GameplayBehaviorsModule.BlackboardKeyType_GameplayTag
/// Size: 0x0020 (0x000030 - 0x000050)
class UBlackboardKeyType_GameplayTag : public UBlackboardKeyType
{ 
public:
	FGameplayTagContainer                              DefaultValue;                                               // 0x0030   (0x0020)  
};

/// Class /Script/GameplayBehaviorsModule.GameplayBehaviorConfig_Animation
/// Size: 0x0030 (0x000030 - 0x000060)
class UGameplayBehaviorConfig_Animation : public UGameplayBehaviorConfig
{ 
public:
	SDK_UNDEFINED(32,2281) /* TWeakObjectPtr<UAnimMontage*> */ __um(AnimMontage);                                  // 0x0030   (0x0020)  
	float                                              PlayRate;                                                   // 0x0050   (0x0004)  
	FName                                              StartSectionName;                                           // 0x0054   (0x0004)  
	bool                                               bLoop : 1;                                                  // 0x0058:0 (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0059   (0x0007)  MISSED
};

/// Class /Script/GameplayBehaviorsModule.GameplayBehaviorsBlueprintFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UGameplayBehaviorsBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/GameplayBehaviorsModule.GameplayBehaviorsBlueprintFunctionLibrary.SetValueAsGameplayTagForBlackboardComp
	// void SetValueAsGameplayTagForBlackboardComp(class UBlackboardComponent* BlackboardComp, FName& KeyName, FGameplayTagContainer GameplayTagValue); // [0x7e5d64c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameplayBehaviorsModule.GameplayBehaviorsBlueprintFunctionLibrary.SetBlackboardValueAsGameplayTag
	// void SetBlackboardValueAsGameplayTag(class UBTNode* NodeOwner, FBlackboardKeySelector& Key, FGameplayTagContainer Value); // [0x7e5d444] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameplayBehaviorsModule.GameplayBehaviorsBlueprintFunctionLibrary.GetBlackboardValueAsGameplayTagFromBlackboardComp
	// FGameplayTagContainer GetBlackboardValueAsGameplayTagFromBlackboardComp(class UBlackboardComponent* BlackboardComp, FName& KeyName); // [0x7e5cf8c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameplayBehaviorsModule.GameplayBehaviorsBlueprintFunctionLibrary.GetBlackboardValueAsGameplayTag
	// FGameplayTagContainer GetBlackboardValueAsGameplayTag(class UBTNode* NodeOwner, FBlackboardKeySelector& Key);         // [0x7e5ce70] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayBehaviorsModule.GameplayBehaviorsBlueprintFunctionLibrary.AddGameplayTagFilterToBlackboardKeySelector
	// void AddGameplayTagFilterToBlackboardKeySelector(FBlackboardKeySelector& InSelector, class UObject* Owner, FName PropertyName); // [0x7e5cbfc] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/GameplayBehaviorsModule.GameplayBehaviorSubsystem
/// Size: 0x0050 (0x000030 - 0x000080)
class UGameplayBehaviorSubsystem : public UWorldSubsystem
{ 
public:
	SDK_UNDEFINED(80,2282) /* TMap<AActor*, FAgentGameplayBehaviors> */ __um(AgentGameplayBehaviors);              // 0x0030   (0x0050)  
};

/// Struct /Script/GameplayBehaviorsModule.MontagePlaybackData
/// Size: 0x0040 (0x000000 - 0x000040)
struct FMontagePlaybackData
{ 
	class AActor*                                      Avatar;                                                     // 0x0000   (0x0008)  
	class UAnimMontage*                                AnimMontage;                                                // 0x0008   (0x0008)  
	class UAbilitySystemComponent*                     AbilityComponent;                                           // 0x0010   (0x0008)  
	unsigned char                                      UnknownData00_6[0x28];                                      // 0x0018   (0x0028)  MISSED
};

/// Class /Script/GameplayBehaviorsModule.GameplayBehavior_AnimationBased
/// Size: 0x0010 (0x000088 - 0x000098)
class UGameplayBehavior_AnimationBased : public UGameplayBehavior
{ 
public:
	TArray<FMontagePlaybackData>                       ActivePlayback;                                             // 0x0088   (0x0010)  


	/// Functions
	// Function /Script/GameplayBehaviorsModule.GameplayBehavior_AnimationBased.OnMontageFinished
	// void OnMontageFinished(class UAnimMontage* Montage, bool bInterrupted, class AActor* InAvatar);                       // [0x7e5d338] Final|Native|Protected 
};

/// Struct /Script/GameplayBehaviorsModule.AgentGameplayBehaviors
/// Size: 0x0010 (0x000000 - 0x000010)
struct FAgentGameplayBehaviors
{ 
	TArray<class UGameplayBehavior*>                   Behaviors;                                                  // 0x0000   (0x0010)  
};

