
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: AIModule
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: GameplayBehaviorsModule
/// dependency: GameplayTags
/// dependency: GameplayTasks
/// dependency: SmartObjectsModule

/// Class /Script/GameplayBehaviorSmartObjectsModule.GameplayBehaviorSmartObjectBehaviorDefinition
/// Size: 0x0008 (0x000028 - 0x000030)
class UGameplayBehaviorSmartObjectBehaviorDefinition : public USmartObjectBehaviorDefinition
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(class UGameplayBehaviorConfig*)            GameplayBehaviorConfig                                      OFFSET(get<T>, {0x28, 8, 0, 0})
};

/// Class /Script/GameplayBehaviorSmartObjectsModule.AITask_UseGameplayBehaviorSmartObject
/// Size: 0x0070 (0x000068 - 0x0000D8)
class UAITask_UseGameplayBehaviorSmartObject : public UAITask
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	SMember(FMulticastInlineDelegate)                  OnSucceeded                                                 OFFSET(getStruct<T>, {0x68, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnFailed                                                    OFFSET(getStruct<T>, {0x78, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnMoveToFailed                                              OFFSET(getStruct<T>, {0x88, 16, 0, 0})
	CMember(class UAITask_MoveTo*)                     MoveToTask                                                  OFFSET(get<T>, {0x98, 8, 0, 0})
	CMember(class UGameplayBehavior*)                  GameplayBehavior                                            OFFSET(get<T>, {0xA0, 8, 0, 0})


	/// Functions
	// Function /Script/GameplayBehaviorSmartObjectsModule.AITask_UseGameplayBehaviorSmartObject.UseSmartObjectWithGameplayBehavior
	// class UAITask_UseGameplayBehaviorSmartObject* UseSmartObjectWithGameplayBehavior(class AAIController* Controller, FSmartObjectClaimHandle ClaimHandle, bool bLockAILogic, ESmartObjectClaimPriority ClaimPriority); // [0x8966338] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayBehaviorSmartObjectsModule.AITask_UseGameplayBehaviorSmartObject.UseGameplayBehaviorSmartObject
	// class UAITask_UseGameplayBehaviorSmartObject* UseGameplayBehaviorSmartObject(class AAIController* Controller, class AActor* SmartObjectActor, class USmartObjectComponent* SmartObjectComponent, bool bLockAILogic); // [0x8966080] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayBehaviorSmartObjectsModule.AITask_UseGameplayBehaviorSmartObject.MoveToAndUseSmartObjectWithGameplayBehavior
	// class UAITask_UseGameplayBehaviorSmartObject* MoveToAndUseSmartObjectWithGameplayBehavior(class AAIController* Controller, FSmartObjectClaimHandle ClaimHandle, bool bLockAILogic, ESmartObjectClaimPriority ClaimPriority); // [0x8965f14] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameplayBehaviorSmartObjectsModule.BTTask_FindAndUseGameplayBehaviorSmartObject
/// Size: 0x00B0 (0x000070 - 0x000120)
class UBTTask_FindAndUseGameplayBehaviorSmartObject : public UBTTaskNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	SMember(FGameplayTagQuery)                         ActivityRequirements                                        OFFSET(getStruct<T>, {0x70, 72, 0, 0})
	CMember(ESmartObjectClaimPriority)                 ClaimPriority                                               OFFSET(get<T>, {0xB8, 1, 0, 0})
	SMember(FEQSParametrizedQueryExecutionRequest)     EQSRequest                                                  OFFSET(getStruct<T>, {0xC0, 72, 0, 0})
	DMember(float)                                     Radius                                                      OFFSET(get<float>, {0x108, 4, 0, 0})
};

/// Class /Script/GameplayBehaviorSmartObjectsModule.GameplayBehaviorSmartObjectsBlueprintFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UGameplayBehaviorSmartObjectsBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/GameplayBehaviorSmartObjectsModule.GameplayBehaviorSmartObjectsBlueprintFunctionLibrary.UseGameplayBehaviorSmartObject
	// bool UseGameplayBehaviorSmartObject(class AActor* Avatar, class AActor* SmartObject);                                    // [0x896620c] Final|Native|Static|Public|BlueprintCallable 
};

