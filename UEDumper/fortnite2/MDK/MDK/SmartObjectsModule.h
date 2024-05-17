
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: AIModule
/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine
/// dependency: GameplayTags
/// dependency: NavigationSystem
/// dependency: PropertyBindingUtils
/// dependency: StructUtils
/// dependency: TargetingSystem
/// dependency: WorldConditions

/// Class /Script/SmartObjectsModule.EnvQueryGenerator_SmartObjects
/// Size: 0x0100 (0x000050 - 0x000150)
class UEnvQueryGenerator_SmartObjects : public UEnvQueryGenerator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
	CMember(class UClass*)                             QueryOriginContext                                          OFFSET(get<T>, {0x50, 8, 0, 0})
	SMember(FSmartObjectRequestFilter)                 SmartObjectRequestFilter                                    OFFSET(getStruct<T>, {0x60, 208, 0, 0})
	SMember(FVector)                                   QueryBoxExtent                                              OFFSET(getStruct<T>, {0x130, 24, 0, 0})
	DMember(bool)                                      bOnlyClaimable                                              OFFSET(get<bool>, {0x148, 1, 0, 0})
};

/// Class /Script/SmartObjectsModule.EnvQueryItemType_SmartObject
/// Size: 0x0000 (0x000030 - 0x000030)
class UEnvQueryItemType_SmartObject : public UEnvQueryItemType_VectorBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/SmartObjectsModule.SmartObjectSettings
/// Size: 0x0018 (0x000030 - 0x000048)
class USmartObjectSettings : public UDeveloperSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(ESmartObjectTagFilteringPolicy)            DefaultUserTagsFilteringPolicy                              OFFSET(get<T>, {0x30, 1, 0, 0})
	CMember(ESmartObjectTagMergingPolicy)              DefaultActivityTagsMergingPolicy                            OFFSET(get<T>, {0x31, 1, 0, 0})
	CMember(class UClass*)                             DefaultWorldConditionSchemaClass                            OFFSET(get<T>, {0x38, 8, 0, 0})
	DMember(bool)                                      bShouldExcludePreConditionsOnDedicatedClient                OFFSET(get<bool>, {0x40, 1, 0, 0})
};

/// Class /Script/SmartObjectsModule.BlackboardKeyType_SOClaimHandle
/// Size: 0x0020 (0x000030 - 0x000050)
class UBlackboardKeyType_SOClaimHandle : public UBlackboardKeyType
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FSmartObjectClaimHandle)                   Handle                                                      OFFSET(getStruct<T>, {0x30, 32, 0, 0})
};

/// Class /Script/SmartObjectsModule.GenericSmartObject
/// Size: 0x0008 (0x000290 - 0x000298)
class AGenericSmartObject : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 664;

public:
	CMember(class USmartObjectComponent*)              SOComponent                                                 OFFSET(get<T>, {0x290, 8, 0, 0})
};

/// Class /Script/SmartObjectsModule.SmartObjectBlueprintFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class USmartObjectBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/SmartObjectsModule.SmartObjectBlueprintFunctionLibrary.SmartObjectClaimHandle_Invalid
	// FSmartObjectClaimHandle SmartObjectClaimHandle_Invalid();                                                                // [0x7fbbdc4] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SmartObjectsModule.SmartObjectBlueprintFunctionLibrary.SetValueAsSOClaimHandle
	// void SetValueAsSOClaimHandle(class UBlackboardComponent* BlackboardComponent, FName& KeyName, FSmartObjectClaimHandle Value); // [0x7fbbc48] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SmartObjectsModule.SmartObjectBlueprintFunctionLibrary.SetSmartObjectEnabled
	// bool SetSmartObjectEnabled(class AActor* SmartObjectActor, bool bEnabled);                                               // [0x7fbb938] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SmartObjectsModule.SmartObjectBlueprintFunctionLibrary.SetMultipleSmartObjectsEnabled
	// bool SetMultipleSmartObjectsEnabled(TArray<AActor*>& SmartObjectActors, bool bEnabled);                                  // [0x7fbb6e8] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SmartObjectsModule.SmartObjectBlueprintFunctionLibrary.SetBlackboardValueAsSOClaimHandle
	// void SetBlackboardValueAsSOClaimHandle(class UBTNode* NodeOwner, FBlackboardKeySelector& Key, FSmartObjectClaimHandle& Value); // [0x7fbacf0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SmartObjectsModule.SmartObjectBlueprintFunctionLibrary.RemoveSmartObject
	// bool RemoveSmartObject(class AActor* SmartObjectActor);                                                                  // [0x7fba944] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SmartObjectsModule.SmartObjectBlueprintFunctionLibrary.RemoveMultipleSmartObjects
	// bool RemoveMultipleSmartObjects(TArray<AActor*>& SmartObjectActors);                                                     // [0x7fba868] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SmartObjectsModule.SmartObjectBlueprintFunctionLibrary.NotEqual_SmartObjectSlotHandleSmartObjectSlotHandle
	// bool NotEqual_SmartObjectSlotHandleSmartObjectSlotHandle(FSmartObjectSlotHandle& A, FSmartObjectSlotHandle& B);          // [0x7fba6bc] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/SmartObjectsModule.SmartObjectBlueprintFunctionLibrary.NotEqual_SmartObjectHandleSmartObjectHandle
	// bool NotEqual_SmartObjectHandleSmartObjectHandle(FSmartObjectHandle& A, FSmartObjectHandle& B);                          // [0x7fba5d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/SmartObjectsModule.SmartObjectBlueprintFunctionLibrary.MarkSmartObjectSlotAsOccupied
	// class USmartObjectBehaviorDefinition* MarkSmartObjectSlotAsOccupied(class UObject* WorldContextObject, FSmartObjectClaimHandle ClaimHandle, class UClass* DefinitionClass); // [0x7fba478] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SmartObjectsModule.SmartObjectBlueprintFunctionLibrary.MarkSmartObjectSlotAsFree
	// bool MarkSmartObjectSlotAsFree(class UObject* WorldContextObject, FSmartObjectClaimHandle ClaimHandle);                  // [0x7fba370] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SmartObjectsModule.SmartObjectBlueprintFunctionLibrary.MarkSmartObjectSlotAsClaimed
	// FSmartObjectClaimHandle MarkSmartObjectSlotAsClaimed(class UObject* WorldContextObject, FSmartObjectSlotHandle SlotHandle, class AActor* UserActor, ESmartObjectClaimPriority ClaimPriority); // [0x7fba214] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SmartObjectsModule.SmartObjectBlueprintFunctionLibrary.IsValidSmartObjectSlotHandle
	// bool IsValidSmartObjectSlotHandle(FSmartObjectSlotHandle& Handle);                                                       // [0x7fba160] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/SmartObjectsModule.SmartObjectBlueprintFunctionLibrary.IsValidSmartObjectHandle
	// bool IsValidSmartObjectHandle(FSmartObjectHandle& Handle);                                                               // [0x7fba0cc] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/SmartObjectsModule.SmartObjectBlueprintFunctionLibrary.IsValidSmartObjectClaimHandle
	// bool IsValidSmartObjectClaimHandle(FSmartObjectClaimHandle Handle);                                                      // [0x7fba02c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SmartObjectsModule.SmartObjectBlueprintFunctionLibrary.GetValueAsSOClaimHandle
	// FSmartObjectClaimHandle GetValueAsSOClaimHandle(class UBlackboardComponent* BlackboardComponent, FName& KeyName);        // [0x7fb9c80] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SmartObjectsModule.SmartObjectBlueprintFunctionLibrary.GetBlackboardValueAsSOClaimHandle
	// FSmartObjectClaimHandle GetBlackboardValueAsSOClaimHandle(class UBTNode* NodeOwner, FBlackboardKeySelector& Key);        // [0x7fb872c] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/SmartObjectsModule.SmartObjectBlueprintFunctionLibrary.FindSmartObjectsInTargetingRequest
	// bool FindSmartObjectsInTargetingRequest(class UObject* WorldContextObject, FSmartObjectRequestFilter& Filter, FTargetingRequestHandle TargetingHandle, TArray<FSmartObjectRequestResult>& OutResults, class AActor* UserActor); // [0x7fb732c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SmartObjectsModule.SmartObjectBlueprintFunctionLibrary.FindSmartObjectsInList
	// bool FindSmartObjectsInList(class UObject* WorldContextObject, FSmartObjectRequestFilter& Filter, TArray<AActor*>& ActorList, TArray<FSmartObjectRequestResult>& OutResults, class AActor* UserActor); // [0x7fb6a00] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SmartObjectsModule.SmartObjectBlueprintFunctionLibrary.FindSmartObjectsInComponent
	// bool FindSmartObjectsInComponent(FSmartObjectRequestFilter& Filter, class USmartObjectComponent* SmartObjectComponent, TArray<FSmartObjectRequestResult>& OutResults, class AActor* UserActor); // [0x7fb60dc] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SmartObjectsModule.SmartObjectBlueprintFunctionLibrary.FindSmartObjectsInActor
	// bool FindSmartObjectsInActor(FSmartObjectRequestFilter& Filter, class AActor* SearchActor, TArray<FSmartObjectRequestResult>& OutResults, class AActor* UserActor); // [0x7fb57b8] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SmartObjectsModule.SmartObjectBlueprintFunctionLibrary.Equal_SmartObjectSlotHandleSmartObjectSlotHandle
	// bool Equal_SmartObjectSlotHandleSmartObjectSlotHandle(FSmartObjectSlotHandle& A, FSmartObjectSlotHandle& B);             // [0x7fb4c7c] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/SmartObjectsModule.SmartObjectBlueprintFunctionLibrary.Equal_SmartObjectHandleSmartObjectHandle
	// bool Equal_SmartObjectHandleSmartObjectHandle(FSmartObjectHandle& A, FSmartObjectHandle& B);                             // [0x7fb4b90] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/SmartObjectsModule.SmartObjectBlueprintFunctionLibrary.Conv_SmartObjectSlotHandleToString
	// FString Conv_SmartObjectSlotHandleToString(FSmartObjectSlotHandle& Handle);                                              // [0x7fb4ad8] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/SmartObjectsModule.SmartObjectBlueprintFunctionLibrary.Conv_SmartObjectRequestResultToString
	// FString Conv_SmartObjectRequestResultToString(FSmartObjectRequestResult& Result);                                        // [0x7fb4a2c] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/SmartObjectsModule.SmartObjectBlueprintFunctionLibrary.Conv_SmartObjectHandleToString
	// FString Conv_SmartObjectHandleToString(FSmartObjectHandle& Handle);                                                      // [0x7fb4984] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/SmartObjectsModule.SmartObjectBlueprintFunctionLibrary.Conv_SmartObjectDefinitionToString
	// FString Conv_SmartObjectDefinitionToString(class USmartObjectDefinition* Definition);                                    // [0x7fb48f0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SmartObjectsModule.SmartObjectBlueprintFunctionLibrary.Conv_SmartObjectClaimHandleToString
	// FString Conv_SmartObjectClaimHandleToString(FSmartObjectClaimHandle& Result);                                            // [0x7fb4840] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/SmartObjectsModule.SmartObjectBlueprintFunctionLibrary.AddSmartObject
	// bool AddSmartObject(class AActor* SmartObjectActor);                                                                     // [0x7fb4548] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SmartObjectsModule.SmartObjectBlueprintFunctionLibrary.AddOrRemoveSmartObject
	// bool AddOrRemoveSmartObject(class AActor* SmartObject, bool bEnabled);                                                   // [0x7fb4454] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SmartObjectsModule.SmartObjectBlueprintFunctionLibrary.AddOrRemoveMultipleSmartObjects
	// bool AddOrRemoveMultipleSmartObjects(TArray<AActor*>& SmartObjectActors, bool bAdd);                                     // [0x7fb42e8] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SmartObjectsModule.SmartObjectBlueprintFunctionLibrary.AddMultipleSmartObjects
	// bool AddMultipleSmartObjects(TArray<AActor*>& SmartObjectActors);                                                        // [0x7fb420c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/SmartObjectsModule.SmartObjectCollection
/// Size: 0x00B0 (0x000290 - 0x000340)
class ASmartObjectCollection : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 832;

public:
	SMember(FBox)                                      Bounds                                                      OFFSET(getStruct<T>, {0x290, 56, 0, 0})
	CMember(TArray<FSmartObjectCollectionEntry>)       CollectionEntries                                           OFFSET(get<T>, {0x2C8, 16, 0, 0})
	CMember(TMap<FSmartObjectHandle, FSoftObjectPath>) RegisteredIdToObjectMap                                     OFFSET(get<T>, {0x2D8, 80, 0, 0})
	CMember(TArray<class USmartObjectDefinition*>)     Definitions                                                 OFFSET(get<T>, {0x328, 16, 0, 0})
};

/// Class /Script/SmartObjectsModule.SmartObjectComponent
/// Size: 0x0080 (0x000220 - 0x0002A0)
class USmartObjectComponent : public USceneComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 672;

public:
	SMember(FMulticastInlineDelegate)                  OnSmartObjectEvent                                          OFFSET(getStruct<T>, {0x220, 16, 0, 0})
	SMember(FSmartObjectDefinitionReference)           DefinitionRef                                               OFFSET(getStruct<T>, {0x248, 40, 0, 0})
	SMember(FSmartObjectHandle)                        RegisteredHandle                                            OFFSET(getStruct<T>, {0x270, 8, 0, 0})
	DMember(bool)                                      bCanBePartOfCollection                                      OFFSET(get<bool>, {0x288, 1, 0, 0})
	CMember(class USmartObjectDefinition*)             CachedDefinitionAssetVariation                              OFFSET(get<T>, {0x290, 8, 0, 0})


	/// Functions
	// Function /Script/SmartObjectsModule.SmartObjectComponent.SetSmartObjectEnabledForReason
	// bool SetSmartObjectEnabledForReason(FGameplayTag ReasonTag, bool bEnabled);                                              // [0x7fbbac4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SmartObjectsModule.SmartObjectComponent.SetSmartObjectEnabled
	// bool SetSmartObjectEnabled(bool bEnable);                                                                                // [0x7fbba2c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SmartObjectsModule.SmartObjectComponent.SetDefinition
	// void SetDefinition(class USmartObjectDefinition* DefinitionAsset);                                                       // [0x7fbb4a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SmartObjectsModule.SmartObjectComponent.ReceiveOnEvent
	// void ReceiveOnEvent(FSmartObjectEventData& EventData, class AActor* Interactor);                                         // [0x228deb8] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/SmartObjectsModule.SmartObjectComponent.IsSmartObjectEnabledForReason
	// bool IsSmartObjectEnabledForReason(FGameplayTag ReasonTag);                                                              // [0x7fb9f0c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SmartObjectsModule.SmartObjectComponent.IsSmartObjectEnabled
	// bool IsSmartObjectEnabled();                                                                                             // [0x7fb9ee8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SmartObjectsModule.SmartObjectComponent.IsBoundToSimulation
	// bool IsBoundToSimulation();                                                                                              // [0x7fb9d78] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SmartObjectsModule.SmartObjectComponent.GetDefinition
	// class USmartObjectDefinition* GetDefinition();                                                                           // [0x7fb8ed4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SmartObjectsModule.SmartObjectContainerRenderingComponent
/// Size: 0x0000 (0x000500 - 0x000500)
class USmartObjectContainerRenderingComponent : public UPrimitiveComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1280;

public:
};

/// Class /Script/SmartObjectsModule.SmartObjectDebugRenderingComponent
/// Size: 0x0000 (0x000550 - 0x000550)
class USmartObjectDebugRenderingComponent : public UDebugDrawComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1360;

public:
};

/// Class /Script/SmartObjectsModule.SmartObjectBehaviorDefinition
/// Size: 0x0000 (0x000028 - 0x000028)
class USmartObjectBehaviorDefinition : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/SmartObjectsModule.SmartObjectDefinition
/// Size: 0x0110 (0x000030 - 0x000140)
class USmartObjectDefinition : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
	SMember(FInstancedPropertyBag)                     Parameters                                                  OFFSET(getStruct<T>, {0x40, 16, 0, 0})
	SMember(FGuid)                                     ParametersID                                                OFFSET(getStruct<T>, {0x50, 16, 0, 0})
	SMember(FGuid)                                     RootID                                                      OFFSET(getStruct<T>, {0x60, 16, 0, 0})
	CMember(TArray<FSmartObjectDefinitionPropertyBinding>) PropertyBindings                                        OFFSET(get<T>, {0x70, 16, 0, 0})
	CMember(TArray<FSmartObjectSlotDefinition>)        Slots                                                       OFFSET(get<T>, {0x80, 16, 0, 0})
	CMember(TArray<class USmartObjectBehaviorDefinition*>) DefaultBehaviorDefinitions                              OFFSET(get<T>, {0x90, 16, 0, 0})
	SMember(FGameplayTagQuery)                         UserTagFilter                                               OFFSET(getStruct<T>, {0xA0, 72, 0, 0})
	SMember(FWorldConditionQueryDefinition)            Preconditions                                               OFFSET(getStruct<T>, {0xE8, 24, 0, 0})
	SMember(FGameplayTagContainer)                     ActivityTags                                                OFFSET(getStruct<T>, {0x100, 32, 0, 0})
	CMember(TArray<FSmartObjectDefinitionDataProxy>)   DefinitionData                                              OFFSET(get<T>, {0x120, 16, 0, 0})
	CMember(class UClass*)                             WorldConditionSchemaClass                                   OFFSET(get<T>, {0x130, 8, 0, 0})
	CMember(ESmartObjectTagMergingPolicy)              ActivityTagsMergingPolicy                                   OFFSET(get<T>, {0x138, 1, 0, 0})
	CMember(ESmartObjectTagFilteringPolicy)            UserTagsFilteringPolicy                                     OFFSET(get<T>, {0x139, 1, 0, 0})


	/// Functions
	// Function /Script/SmartObjectsModule.SmartObjectDefinition.SetUserTagFilter
	// void SetUserTagFilter(FGameplayTagQuery& InUserTagFilter);                                                               // [0x7fbbb88] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SmartObjectsModule.SmartObjectDefinition.K2_GetSlots
	// TArray<FSmartObjectSlotDefinition> K2_GetSlots();                                                                        // [0x7fba1f8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SmartObjectsModule.SmartObjectDefinition.IsValidSlotIndex
	// bool IsValidSlotIndex(int32_t SlotIndex);                                                                                // [0x7fb9f98] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SmartObjectsModule.SmartObjectDefinition.GetUserTagsFilteringPolicy
	// ESmartObjectTagFilteringPolicy GetUserTagsFilteringPolicy();                                                             // [0x7fb9c68] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SmartObjectsModule.SmartObjectDefinition.GetUserTagFilter
	// FGameplayTagQuery GetUserTagFilter();                                                                                    // [0x7fb9c4c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SmartObjectsModule.SmartObjectDefinition.GetSlotWorldTransform
	// FTransform GetSlotWorldTransform(int32_t SlotIndex, FTransform& OwnerTransform);                                         // [0x7fb97ac] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SmartObjectsModule.SmartObjectDefinition.GetSlotActivityTags
	// void GetSlotActivityTags(int32_t SlotIndex, FGameplayTagContainer& OutActivityTags);                                     // [0x7fb9028] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SmartObjectsModule.SmartObjectDefinition.GetMutableSlot
	// FSmartObjectSlotDefinition GetMutableSlot(int32_t Index);                                                                // [0x7fb8f90] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SmartObjectsModule.SmartObjectDefinition.GetBounds
	// FBox GetBounds();                                                                                                        // [0x7fb8e8c] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SmartObjectsModule.SmartObjectDefinition.GetActivityTags
	// FGameplayTagContainer GetActivityTags();                                                                                 // [0x7fb7c8c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SmartObjectsModule.SmartObjectSpacePartition
/// Size: 0x0000 (0x000028 - 0x000028)
class USmartObjectSpacePartition : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/SmartObjectsModule.SmartObjectHashGrid
/// Size: 0x00A8 (0x000028 - 0x0000D0)
class USmartObjectHashGrid : public USmartObjectSpacePartition
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
};

/// Class /Script/SmartObjectsModule.SmartObjectOctree
/// Size: 0x00C8 (0x000028 - 0x0000F0)
class USmartObjectOctree : public USmartObjectSpacePartition
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
};

/// Class /Script/SmartObjectsModule.SmartObjectPersistentCollection
/// Size: 0x00B8 (0x000290 - 0x000348)
class ASmartObjectPersistentCollection : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 840;

public:
	SMember(FSmartObjectContainer)                     SmartObjectContainer                                        OFFSET(getStruct<T>, {0x290, 176, 0, 0})
};

/// Class /Script/SmartObjectsModule.SmartObjectRenderingComponent
/// Size: 0x0000 (0x000500 - 0x000500)
class USmartObjectRenderingComponent : public UPrimitiveComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1280;

public:
};

/// Class /Script/SmartObjectsModule.SmartObjectSubsystem
/// Size: 0x0168 (0x000030 - 0x000198)
class USmartObjectSubsystem : public UWorldSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 408;

public:
	SMember(FSoftClassPath)                            SpacePartitionClassName                                     OFFSET(getStruct<T>, {0x30, 24, 0, 0})
	CMember(class UClass*)                             SpacePartitionClass                                         OFFSET(get<T>, {0x48, 8, 0, 0})
	CMember(class USmartObjectSpacePartition*)         SpacePartition                                              OFFSET(get<T>, {0x50, 8, 0, 0})
	CMember(class ASmartObjectSubsystemRenderingActor*) RenderingActor                                             OFFSET(get<T>, {0x58, 8, 0, 0})
	SMember(FSmartObjectContainer)                     SmartObjectContainer                                        OFFSET(getStruct<T>, {0x60, 176, 0, 0})
	CMember(TMap<FSmartObjectHandle, FSmartObjectRuntime>) RuntimeSmartObjects                                     OFFSET(get<T>, {0x120, 80, 0, 0})
	CMember(TArray<class USmartObjectComponent*>)      RegisteredSOComponents                                      OFFSET(get<T>, {0x170, 16, 0, 0})
	CMember(TArray<class USmartObjectComponent*>)      PendingSmartObjectRegistration                              OFFSET(get<T>, {0x180, 16, 0, 0})


	/// Functions
	// Function /Script/SmartObjectsModule.SmartObjectSubsystem.SetSlotEnabled
	// bool SetSlotEnabled(FSmartObjectSlotHandle SlotHandle, bool bEnabled);                                                   // [0x7fbb854] Final|Native|Public|BlueprintCallable 
	// Function /Script/SmartObjectsModule.SmartObjectSubsystem.SetEnabledForReason
	// bool SetEnabledForReason(FSmartObjectHandle Handle, FGameplayTag ReasonTag, bool bEnabled);                              // [0x7fbb5ec] Final|Native|Public|BlueprintCallable 
	// Function /Script/SmartObjectsModule.SmartObjectSubsystem.SetEnabled
	// bool SetEnabled(FSmartObjectHandle Handle, bool bEnabled);                                                               // [0x7fbb520] Final|Native|Public|BlueprintCallable 
	// Function /Script/SmartObjectsModule.SmartObjectSubsystem.RemoveTagFromSlot
	// bool RemoveTagFromSlot(FSmartObjectSlotHandle SlotHandle, FGameplayTag& tag);                                            // [0x7fbab58] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SmartObjectsModule.SmartObjectSubsystem.RemoveTagFromInstance
	// void RemoveTagFromInstance(FSmartObjectHandle Handle, FGameplayTag& tag);                                                // [0x7fba9fc] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SmartObjectsModule.SmartObjectSubsystem.Release
	// bool Release(FSmartObjectClaimHandle& ClaimHandle);                                                                      // [0x7fba7c4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SmartObjectsModule.SmartObjectSubsystem.IsEnabledForReason
	// bool IsEnabledForReason(FSmartObjectHandle Handle, FGameplayTag ReasonTag);                                              // [0x7fb9e24] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SmartObjectsModule.SmartObjectSubsystem.IsEnabled
	// bool IsEnabled(FSmartObjectHandle Handle);                                                                               // [0x7fb9d94] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SmartObjectsModule.SmartObjectSubsystem.GetSmartObjectComponentByRequestResult
	// class USmartObjectComponent* GetSmartObjectComponentByRequestResult(FSmartObjectRequestResult& Result, ETrySpawnActorIfDehydrated TrySpawnActorIfDehydrated); // [0x7fb9ab0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SmartObjectsModule.SmartObjectSubsystem.GetSmartObjectComponent
	// class USmartObjectComponent* GetSmartObjectComponent(FSmartObjectClaimHandle& ClaimHandle, ETrySpawnActorIfDehydrated TrySpawnActorIfDehydrated); // [0x7fb9910] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SmartObjectsModule.SmartObjectSubsystem.GetSlotTransformFromRequestResult
	// bool GetSlotTransformFromRequestResult(FSmartObjectRequestResult& RequestResult, FTransform& OutSlotTransform);          // [0x7fb95ec] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SmartObjectsModule.SmartObjectSubsystem.GetSlotTransform
	// bool GetSlotTransform(FSmartObjectClaimHandle& ClaimHandle, FTransform& OutSlotTransform);                               // [0x7fb9428] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SmartObjectsModule.SmartObjectSubsystem.GetSlotTags
	// FGameplayTagContainer GetSlotTags(FSmartObjectSlotHandle SlotHandle);                                                    // [0x7fb9380] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SmartObjectsModule.SmartObjectSubsystem.GetSlotState
	// ESmartObjectSlotState GetSlotState(FSmartObjectSlotHandle SlotHandle);                                                   // [0x7fb92e4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SmartObjectsModule.SmartObjectSubsystem.GetSlotLocation
	// bool GetSlotLocation(FSmartObjectClaimHandle& ClaimHandle, FVector& OutSlotLocation);                                    // [0x7fb9140] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SmartObjectsModule.SmartObjectSubsystem.GetInstanceTags
	// FGameplayTagContainer GetInstanceTags(FSmartObjectHandle Handle);                                                        // [0x7fb8ef8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SmartObjectsModule.SmartObjectSubsystem.GetBehaviorDefinitionByRequestResult
	// class USmartObjectBehaviorDefinition* GetBehaviorDefinitionByRequestResult(FSmartObjectRequestResult& RequestResult, class UClass* DefinitionClass); // [0x7fb8578] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SmartObjectsModule.SmartObjectSubsystem.GetBehaviorDefinition
	// class USmartObjectBehaviorDefinition* GetBehaviorDefinition(FSmartObjectClaimHandle& ClaimHandle, class UClass* DefinitionClass); // [0x7fb83c0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SmartObjectsModule.SmartObjectSubsystem.GetAllSlots
	// void GetAllSlots(FSmartObjectHandle Handle, TArray<FSmartObjectSlotHandle>& OutSlots);                                   // [0x7fb7ca8] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SmartObjectsModule.SmartObjectSubsystem.FindSmartObjects_BP
	// bool FindSmartObjects_BP(FSmartObjectRequest& Request, TArray<FSmartObjectRequestResult>& OutResults, class AActor* UserActor); // [0x7fb4f5c] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/SmartObjectsModule.SmartObjectSubsystem.FindSmartObjects
	// bool FindSmartObjects(FSmartObjectRequest& Request, TArray<FSmartObjectRequestResult>& OutResults, class AActor* UserActor); // [0x7fb4f5c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SmartObjectsModule.SmartObjectSubsystem.FindSmartObject
	// FSmartObjectRequestResult FindSmartObject(FSmartObjectRequest& Request, class AActor* UserActor);                        // [0x7fb4d84] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SmartObjectsModule.SmartObjectSubsystem.AddTagToSlot
	// void AddTagToSlot(FSmartObjectSlotHandle SlotHandle, FGameplayTag& tag);                                                 // [0x7fb4724] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SmartObjectsModule.SmartObjectSubsystem.AddTagToInstance
	// void AddTagToInstance(FSmartObjectHandle Handle, FGameplayTag& tag);                                                     // [0x7fb4600] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/SmartObjectsModule.SmartObjectSubsystemRenderingComponent
/// Size: 0x0000 (0x000550 - 0x000550)
class USmartObjectSubsystemRenderingComponent : public USmartObjectDebugRenderingComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1360;

public:
};

/// Class /Script/SmartObjectsModule.SmartObjectSubsystemRenderingActor
/// Size: 0x0008 (0x000290 - 0x000298)
class ASmartObjectSubsystemRenderingActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 664;

public:
	CMember(class USmartObjectSubsystemRenderingComponent*) RenderingComponent                                     OFFSET(get<T>, {0x290, 8, 0, 0})
};

/// Class /Script/SmartObjectsModule.SmartObjectTest
/// Size: 0x0008 (0x000028 - 0x000030)
class USmartObjectTest : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(class ASmartObjectTestingActor*)           SmartObjectTestingActor                                     OFFSET(get<T>, {0x28, 8, 0, 0})
};

/// Class /Script/SmartObjectsModule.SmartObjectSimpleQueryTest
/// Size: 0x0120 (0x000030 - 0x000150)
class USmartObjectSimpleQueryTest : public USmartObjectTest
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
	SMember(FSmartObjectRequest)                       Request                                                     OFFSET(getStruct<T>, {0x30, 272, 0, 0})
	CMember(TArray<FSmartObjectRequestResult>)         Results                                                     OFFSET(get<T>, {0x140, 16, 0, 0})
};

/// Class /Script/SmartObjectsModule.SmartObjectTestRenderingComponent
/// Size: 0x0000 (0x000550 - 0x000550)
class USmartObjectTestRenderingComponent : public USmartObjectDebugRenderingComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1360;

public:
};

/// Class /Script/SmartObjectsModule.SmartObjectTestingActor
/// Size: 0x0028 (0x000290 - 0x0002B8)
class ASmartObjectTestingActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 696;

public:
	CMember(TArray<class USmartObjectTest*>)           Tests                                                       OFFSET(get<T>, {0x290, 16, 0, 0})
	CMember(class USmartObjectTestRenderingComponent*) RenderingComponent                                          OFFSET(get<T>, {0x2A0, 8, 0, 0})
	CMember(class USmartObjectSubsystem*)              SmartObjectSubsystem                                        OFFSET(get<T>, {0x2A8, 8, 0, 0})
	DMember(bool)                                      bRunTestsEachFrame                                          OFFSET(get<bool>, {0x2B0, 1, 0, 0})


	/// Functions
	// Function /Script/SmartObjectsModule.SmartObjectTestingActor.RunTests
	// void RunTests();                                                                                                         // [0x7fbacdc] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SmartObjectsModule.SmartObjectTestingActor.ResetTests
	// void ResetTests();                                                                                                       // [0x7fbac80] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/SmartObjectsModule.SmartObjectSlotValidationFilter
/// Size: 0x00E8 (0x000028 - 0x000110)
class USmartObjectSlotValidationFilter : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
	SMember(FSmartObjectSlotValidationParams)          EntryParameters                                             OFFSET(getStruct<T>, {0x28, 112, 0, 0})
	DMember(bool)                                      bUseEntryParametersForExit                                  OFFSET(get<bool>, {0x98, 1, 0, 0})
	SMember(FSmartObjectSlotValidationParams)          ExitParameters                                              OFFSET(getStruct<T>, {0xA0, 112, 0, 0})
};

/// Class /Script/SmartObjectsModule.SmartObjectUserComponent
/// Size: 0x0008 (0x0000A0 - 0x0000A8)
class USmartObjectUserComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	CMember(class UClass*)                             ValidationFilter                                            OFFSET(get<T>, {0xA0, 8, 0, 0})
};

/// Class /Script/SmartObjectsModule.SmartObjectWorldConditionSchema
/// Size: 0x0028 (0x000038 - 0x000060)
class USmartObjectWorldConditionSchema : public UWorldConditionSchema
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
};

/// Struct /Script/SmartObjectsModule.SmartObjectEventData
/// Size: 0x0030 (0x000000 - 0x000030)
class FSmartObjectEventData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FSmartObjectHandle)                        SmartObjectHandle                                           OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	SMember(FSmartObjectSlotHandle)                    SlotHandle                                                  OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	CMember(ESmartObjectChangeReason)                  Reason                                                      OFFSET(get<T>, {0x18, 1, 0, 0})
	SMember(FGameplayTag)                              tag                                                         OFFSET(getStruct<T>, {0x1C, 4, 0, 0})
};

/// Struct /Script/SmartObjectsModule.SmartObjectSlotHandle
/// Size: 0x0010 (0x000000 - 0x000010)
class FSmartObjectSlotHandle : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/SmartObjectsModule.SmartObjectHandle
/// Size: 0x0008 (0x000000 - 0x000008)
class FSmartObjectHandle : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(uint64_t)                                  ID                                                          OFFSET(get<uint64_t>, {0x0, 8, 0, 0})
};

/// Struct /Script/SmartObjectsModule.SmartObjectClaimHandle
/// Size: 0x0020 (0x000000 - 0x000020)
class FSmartObjectClaimHandle : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FSmartObjectHandle)                        SmartObjectHandle                                           OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	SMember(FSmartObjectSlotHandle)                    SlotHandle                                                  OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	SMember(FSmartObjectUserHandle)                    UserHandle                                                  OFFSET(getStruct<T>, {0x18, 4, 0, 0})
};

/// Struct /Script/SmartObjectsModule.SmartObjectUserHandle
/// Size: 0x0004 (0x000000 - 0x000004)
class FSmartObjectUserHandle : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(uint32_t)                                  ID                                                          OFFSET(get<uint32_t>, {0x0, 4, 0, 0})
};

/// Struct /Script/SmartObjectsModule.SmartObjectSlotEntranceLocationResult
/// Size: 0x0080 (0x000000 - 0x000080)
class FSmartObjectSlotEntranceLocationResult : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FVector)                                   Location                                                    OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FRotator)                                  Rotation                                                    OFFSET(getStruct<T>, {0x18, 24, 0, 0})
	SMember(FGameplayTag)                              tag                                                         OFFSET(getStruct<T>, {0x38, 4, 0, 0})
	SMember(FGameplayTagContainer)                     Tags                                                        OFFSET(getStruct<T>, {0x40, 32, 0, 0})
	SMember(FSmartObjectSlotEntranceHandle)            EntranceHandle                                              OFFSET(getStruct<T>, {0x60, 24, 0, 0})
	DMember(bool)                                      bIsValid                                                    OFFSET(get<bool>, {0x78, 1, 0, 0})
};

/// Struct /Script/SmartObjectsModule.SmartObjectSlotEntranceHandle
/// Size: 0x0018 (0x000000 - 0x000018)
class FSmartObjectSlotEntranceHandle : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FSmartObjectSlotHandle)                    SlotHandle                                                  OFFSET(getStruct<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/SmartObjectsModule.SmartObjectSlotEntranceLocationRequest
/// Size: 0x0058 (0x000000 - 0x000058)
class FSmartObjectSlotEntranceLocationRequest : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(class AActor*)                             UserActor                                                   OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class UClass*)                             ValidationFilter                                            OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(class ANavigationData*)                    NavigationData                                              OFFSET(get<T>, {0x10, 8, 0, 0})
	SMember(FSmartObjectUserCapsuleParams)             UserCapsuleParams                                           OFFSET(getStruct<T>, {0x18, 12, 0, 0})
	SMember(FVector)                                   SearchLocation                                              OFFSET(getStruct<T>, {0x28, 24, 0, 0})
	SMember(FSmartObjectSlotEntrySelectionMethod)      SelectMethod                                                OFFSET(getStruct<T>, {0x40, 1, 0, 0})
	CMember(ESmartObjectSlotNavigationLocationType)    LocationType                                                OFFSET(get<T>, {0x41, 1, 0, 0})
	DMember(bool)                                      bProjectNavigationLocation                                  OFFSET(get<bool>, {0x42, 1, 0, 0})
	DMember(bool)                                      bTraceGroundLocation                                        OFFSET(get<bool>, {0x43, 1, 0, 0})
	DMember(bool)                                      bCheckTransitionTrajectory                                  OFFSET(get<bool>, {0x44, 1, 0, 0})
	DMember(bool)                                      bCheckEntranceLocationOverlap                               OFFSET(get<bool>, {0x45, 1, 0, 0})
	DMember(bool)                                      bCheckSlotLocationOverlap                                   OFFSET(get<bool>, {0x46, 1, 0, 0})
	DMember(bool)                                      bUseSlotLocationAsFallback                                  OFFSET(get<bool>, {0x47, 1, 0, 0})
};

/// Struct /Script/SmartObjectsModule.SmartObjectUserCapsuleParams
/// Size: 0x000C (0x000000 - 0x00000C)
class FSmartObjectUserCapsuleParams : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(float)                                     Radius                                                      OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     Height                                                      OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     StepHeight                                                  OFFSET(get<float>, {0x8, 4, 0, 0})
};

/// Struct /Script/SmartObjectsModule.SmartObjectDefinitionData
/// Size: 0x0008 (0x000000 - 0x000008)
class FSmartObjectDefinitionData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/SmartObjectsModule.SmartObjectSlotAnnotation
/// Size: 0x0000 (0x000008 - 0x000008)
class FSmartObjectSlotAnnotation : public FSmartObjectDefinitionData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/SmartObjectsModule.SmartObjectWorldConditionBase
/// Size: 0x0000 (0x000010 - 0x000010)
class FSmartObjectWorldConditionBase : public FWorldConditionBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/SmartObjectsModule.SmartObjectAnnotation_SlotUserCollision
/// Size: 0x0010 (0x000008 - 0x000018)
class FSmartObjectAnnotation_SlotUserCollision : public FSmartObjectSlotAnnotation
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(bool)                                      bUseUserCapsuleSize                                         OFFSET(get<bool>, {0x8, 1, 0, 0})
	SMember(FSmartObjectUserCapsuleParams)             Capsule                                                     OFFSET(getStruct<T>, {0xC, 12, 0, 0})
};

/// Struct /Script/SmartObjectsModule.SmartObjectSlotEntranceAnnotation
/// Size: 0x0048 (0x000008 - 0x000050)
class FSmartObjectSlotEntranceAnnotation : public FSmartObjectSlotAnnotation
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FVector3f)                                 Offset                                                      OFFSET(getStruct<T>, {0x8, 12, 0, 0})
	SMember(FRotator3f)                                Rotation                                                    OFFSET(getStruct<T>, {0x14, 12, 0, 0})
	SMember(FGameplayTagContainer)                     Tags                                                        OFFSET(getStruct<T>, {0x20, 32, 0, 0})
	DMember(bool)                                      bIsEntry                                                    OFFSET(get<bool>, {0x40, 1, 1, 0})
	DMember(bool)                                      bIsExit                                                     OFFSET(get<bool>, {0x40, 1, 1, 1})
	DMember(bool)                                      bTraceGroundLocation                                        OFFSET(get<bool>, {0x40, 1, 1, 2})
	DMember(bool)                                      bCheckTransitionTrajectory                                  OFFSET(get<bool>, {0x40, 1, 1, 3})
	CMember(ESmartObjectEntrancePriority)              SelectionPriority                                           OFFSET(get<T>, {0x41, 1, 0, 0})
	DMember(float)                                     TrajectoryStartHeightOffset                                 OFFSET(get<float>, {0x44, 4, 0, 0})
	DMember(float)                                     TrajectorySlotHeightOffset                                  OFFSET(get<float>, {0x48, 4, 0, 0})
	DMember(float)                                     TransitionCheckRadius                                       OFFSET(get<float>, {0x4C, 4, 0, 0})
};

/// Struct /Script/SmartObjectsModule.SmartObjectSlotLinkAnnotation
/// Size: 0x0008 (0x000008 - 0x000010)
class FSmartObjectSlotLinkAnnotation : public FSmartObjectSlotAnnotation
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FGameplayTag)                              tag                                                         OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	SMember(FSmartObjectSlotReference)                 LinkedSlot                                                  OFFSET(getStruct<T>, {0xC, 1, 0, 0})
};

/// Struct /Script/SmartObjectsModule.SmartObjectSlotReference
/// Size: 0x0001 (0x000000 - 0x000001)
class FSmartObjectSlotReference : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
	DMember(char)                                      Index                                                       OFFSET(get<char>, {0x0, 1, 0, 0})
};

/// Struct /Script/SmartObjectsModule.SmartObjectComponentInstanceData
/// Size: 0x0028 (0x000068 - 0x000090)
class FSmartObjectComponentInstanceData : public FActorComponentInstanceData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FSmartObjectDefinitionReference)           SmartObjectDefinitionRef                                    OFFSET(getStruct<T>, {0x68, 40, 0, 0})
};

/// Struct /Script/SmartObjectsModule.SmartObjectDefinitionReference
/// Size: 0x0028 (0x000000 - 0x000028)
class FSmartObjectDefinitionReference : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(class USmartObjectDefinition*)             SmartObjectDefinition                                       OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FInstancedPropertyBag)                     Parameters                                                  OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	CMember(TArray<FGuid>)                             PropertyOverrides                                           OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/SmartObjectsModule.SmartObjectDefinitionDataProxy
/// Size: 0x0010 (0x000000 - 0x000010)
class FSmartObjectDefinitionDataProxy : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FInstancedStruct)                          Data                                                        OFFSET(getStruct<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/SmartObjectsModule.SmartObjectSlotDefinition
/// Size: 0x00E0 (0x000000 - 0x0000E0)
class FSmartObjectSlotDefinition : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	SMember(FVector3f)                                 Offset                                                      OFFSET(getStruct<T>, {0x0, 12, 0, 0})
	SMember(FRotator3f)                                Rotation                                                    OFFSET(getStruct<T>, {0xC, 12, 0, 0})
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x18, 1, 0, 0})
	SMember(FGameplayTagQuery)                         UserTagFilter                                               OFFSET(getStruct<T>, {0x20, 72, 0, 0})
	SMember(FGameplayTagContainer)                     ActivityTags                                                OFFSET(getStruct<T>, {0x68, 32, 0, 0})
	SMember(FGameplayTagContainer)                     RuntimeTags                                                 OFFSET(getStruct<T>, {0x88, 32, 0, 0})
	SMember(FWorldConditionQueryDefinition)            SelectionPreconditions                                      OFFSET(getStruct<T>, {0xA8, 24, 0, 0})
	CMember(TArray<class USmartObjectBehaviorDefinition*>) BehaviorDefinitions                                     OFFSET(get<T>, {0xC0, 16, 0, 0})
	CMember(TArray<FSmartObjectDefinitionDataProxy>)   DefinitionData                                              OFFSET(get<T>, {0xD0, 16, 0, 0})
};

/// Struct /Script/SmartObjectsModule.SmartObjectDefinitionPreviewData
/// Size: 0x0078 (0x000000 - 0x000078)
class FSmartObjectDefinitionPreviewData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	CMember(TWeakObjectPtr<UClass*>)                   ObjectActorClass                                            OFFSET(get<T>, {0x0, 32, 0, 0})
	SMember(FSoftObjectPath)                           ObjectMeshPath                                              OFFSET(getStruct<T>, {0x20, 24, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   UserActorClass                                              OFFSET(get<T>, {0x38, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   UserValidationFilterClass                                   OFFSET(get<T>, {0x58, 32, 0, 0})
};

/// Struct /Script/SmartObjectsModule.SmartObjectDefinitionDataHandle
/// Size: 0x0004 (0x000000 - 0x000004)
class FSmartObjectDefinitionDataHandle : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(uint16_t)                                  SlotIndex                                                   OFFSET(get<uint16_t>, {0x0, 2, 0, 0})
	DMember(uint16_t)                                  DataIndex                                                   OFFSET(get<uint16_t>, {0x2, 2, 0, 0})
};

/// Struct /Script/SmartObjectsModule.SmartObjectDefinitionPropertyBinding
/// Size: 0x0028 (0x000000 - 0x000028)
class FSmartObjectDefinitionPropertyBinding : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FPropertyBindingPath)                      SourcePath                                                  OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FPropertyBindingPath)                      TargetPath                                                  OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FSmartObjectDefinitionDataHandle)          SourceDataHandle                                            OFFSET(getStruct<T>, {0x20, 4, 0, 0})
	SMember(FSmartObjectDefinitionDataHandle)          TargetDataHandle                                            OFFSET(getStruct<T>, {0x24, 4, 0, 0})
};

/// Struct /Script/SmartObjectsModule.SmartObjectSpatialEntryData
/// Size: 0x0001 (0x000000 - 0x000001)
class FSmartObjectSpatialEntryData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/SmartObjectsModule.SmartObjectHashGridEntryData
/// Size: 0x000B (0x000001 - 0x00000C)
class FSmartObjectHashGridEntryData : public FSmartObjectSpatialEntryData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
};

/// Struct /Script/SmartObjectsModule.SmartObjectOctreeEntryData
/// Size: 0x000F (0x000001 - 0x000010)
class FSmartObjectOctreeEntryData : public FSmartObjectSpatialEntryData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/SmartObjectsModule.SmartObjectCollectionEntry
/// Size: 0x00F0 (0x000000 - 0x0000F0)
class FSmartObjectCollectionEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	SMember(FGameplayTagContainer)                     Tags                                                        OFFSET(getStruct<T>, {0x0, 32, 0, 0})
	SMember(FSoftObjectPath)                           Path                                                        OFFSET(getStruct<T>, {0x20, 24, 0, 0})
	SMember(FTransform)                                Transform                                                   OFFSET(getStruct<T>, {0x40, 96, 0, 0})
	SMember(FBox)                                      Bounds                                                      OFFSET(getStruct<T>, {0xA0, 56, 0, 0})
	SMember(FSmartObjectHandle)                        Handle                                                      OFFSET(getStruct<T>, {0xD8, 8, 0, 0})
	DMember(uint32_t)                                  DefinitionIdx                                               OFFSET(get<uint32_t>, {0xE0, 4, 0, 0})
};

/// Struct /Script/SmartObjectsModule.SmartObjectContainer
/// Size: 0x00B0 (0x000000 - 0x0000B0)
class FSmartObjectContainer : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	SMember(FBox)                                      Bounds                                                      OFFSET(getStruct<T>, {0x0, 56, 0, 0})
	CMember(TArray<FSmartObjectCollectionEntry>)       CollectionEntries                                           OFFSET(get<T>, {0x38, 16, 0, 0})
	CMember(TMap<FSmartObjectHandle, FSoftObjectPath>) RegisteredIdToObjectMap                                     OFFSET(get<T>, {0x48, 80, 0, 0})
	CMember(TArray<class USmartObjectDefinition*>)     Definitions                                                 OFFSET(get<T>, {0x98, 16, 0, 0})
	CMember(class UObject*)                            Owner                                                       OFFSET(get<T>, {0xA8, 8, 0, 0})
};

/// Struct /Script/SmartObjectsModule.SmartObjectSlotStateData
/// Size: 0x0001 (0x000000 - 0x000001)
class FSmartObjectSlotStateData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/SmartObjectsModule.SmartObjectSlotTransform
/// Size: 0x0060 (0x000000 - 0x000060)
class FSmartObjectSlotTransform : public FSmartObjectSlotStateData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FTransform)                                Transform                                                   OFFSET(getStruct<T>, {0x0, 96, 0, 0})
};

/// Struct /Script/SmartObjectsModule.SmartObjectRuntimeSlot
/// Size: 0x00A8 (0x000000 - 0x0000A8)
class FSmartObjectRuntimeSlot : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	SMember(FVector3f)                                 Offset                                                      OFFSET(getStruct<T>, {0x0, 12, 0, 0})
	SMember(FRotator3f)                                Rotation                                                    OFFSET(getStruct<T>, {0xC, 12, 0, 0})
	SMember(FGameplayTagContainer)                     Tags                                                        OFFSET(getStruct<T>, {0x18, 32, 0, 0})
	SMember(FSmartObjectUserHandle)                    User                                                        OFFSET(getStruct<T>, {0x68, 4, 0, 0})
	SMember(FWorldConditionQueryState)                 PreconditionState                                           OFFSET(getStruct<T>, {0x70, 48, 0, 0})
	CMember(ESmartObjectSlotState)                     State                                                       OFFSET(get<T>, {0xA0, 1, 0, 0})
	CMember(ESmartObjectClaimPriority)                 ClaimedPriority                                             OFFSET(get<T>, {0xA1, 1, 0, 0})
	DMember(bool)                                      bSlotEnabled                                                OFFSET(get<bool>, {0xA2, 1, 1, 0})
	DMember(bool)                                      bObjectEnabled                                              OFFSET(get<bool>, {0xA2, 1, 1, 1})
};

/// Struct /Script/SmartObjectsModule.SmartObjectRuntime
/// Size: 0x0130 (0x000000 - 0x000130)
class FSmartObjectRuntime : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	SMember(FWorldConditionQueryState)                 PreconditionState                                           OFFSET(getStruct<T>, {0x0, 48, 0, 0})
	CMember(TArray<FSmartObjectRuntimeSlot>)           Slots                                                       OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(class USmartObjectDefinition*)             Definition                                                  OFFSET(get<T>, {0x40, 8, 0, 0})
	CMember(TWeakObjectPtr<USmartObjectComponent*>)    OwnerComponent                                              OFFSET(get<T>, {0x48, 8, 0, 0})
	SMember(FTransform)                                Transform                                                   OFFSET(getStruct<T>, {0x60, 96, 0, 0})
	SMember(FGameplayTagContainer)                     Tags                                                        OFFSET(getStruct<T>, {0xC0, 32, 0, 0})
	SMember(FSmartObjectHandle)                        RegisteredHandle                                            OFFSET(getStruct<T>, {0x108, 8, 0, 0})
	SMember(FInstancedStruct)                          SpatialEntryData                                            OFFSET(getStruct<T>, {0x110, 16, 0, 0})
	DMember(uint16_t)                                  DisableFlags                                                OFFSET(get<uint16_t>, {0x120, 2, 0, 0})
};

/// Struct /Script/SmartObjectsModule.SmartObjectSlotView
/// Size: 0x0020 (0x000000 - 0x000020)
class FSmartObjectSlotView : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/SmartObjectsModule.SmartObjectRequestFilter
/// Size: 0x00D0 (0x000000 - 0x0000D0)
class FSmartObjectRequestFilter : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	SMember(FGameplayTagContainer)                     UserTags                                                    OFFSET(getStruct<T>, {0x0, 32, 0, 0})
	CMember(ESmartObjectClaimPriority)                 ClaimPriority                                               OFFSET(get<T>, {0x20, 1, 0, 0})
	SMember(FGameplayTagQuery)                         ActivityRequirements                                        OFFSET(getStruct<T>, {0x28, 72, 0, 0})
	CMember(TArray<class UClass*>)                     BehaviorDefinitionClasses                                   OFFSET(get<T>, {0x70, 16, 0, 0})
	DMember(bool)                                      bShouldEvaluateConditions                                   OFFSET(get<bool>, {0x80, 1, 0, 0})
	DMember(bool)                                      bShouldIncludeClaimedSlots                                  OFFSET(get<bool>, {0x81, 1, 0, 0})
	DMember(bool)                                      bShouldIncludeDisabledSlots                                 OFFSET(get<bool>, {0x82, 1, 0, 0})
};

/// Struct /Script/SmartObjectsModule.SmartObjectRequest
/// Size: 0x0110 (0x000000 - 0x000110)
class FSmartObjectRequest : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
	SMember(FBox)                                      QueryBox                                                    OFFSET(getStruct<T>, {0x0, 56, 0, 0})
	SMember(FSmartObjectRequestFilter)                 Filter                                                      OFFSET(getStruct<T>, {0x40, 208, 0, 0})
};

/// Struct /Script/SmartObjectsModule.SmartObjectRequestResult
/// Size: 0x0018 (0x000000 - 0x000018)
class FSmartObjectRequestResult : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FSmartObjectHandle)                        SmartObjectHandle                                           OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	SMember(FSmartObjectSlotHandle)                    SlotHandle                                                  OFFSET(getStruct<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/SmartObjectsModule.SmartObjectSlotIndex
/// Size: 0x0004 (0x000000 - 0x000004)
class FSmartObjectSlotIndex : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(int32_t)                                   Index                                                       OFFSET(get<int32_t>, {0x0, 4, 0, 0})
};

/// Struct /Script/SmartObjectsModule.SmartObjectTraceParams
/// Size: 0x0020 (0x000000 - 0x000020)
class FSmartObjectTraceParams : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(ESmartObjectTraceType)                     Type                                                        OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(TEnumAsByte<ETraceTypeQuery>)              TraceChannel                                                OFFSET(get<T>, {0x1, 1, 0, 0})
	CMember(TArray<TEnumAsByte<EObjectTypeQuery>>)     ObjectTypes                                                 OFFSET(get<T>, {0x8, 16, 0, 0})
	SMember(FCollisionProfileName)                     CollisionProfile                                            OFFSET(getStruct<T>, {0x18, 4, 0, 0})
	DMember(bool)                                      bTraceComplex                                               OFFSET(get<bool>, {0x1C, 1, 0, 0})
};

/// Struct /Script/SmartObjectsModule.SmartObjectSlotValidationParams
/// Size: 0x0070 (0x000000 - 0x000070)
class FSmartObjectSlotValidationParams : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	CMember(class UClass*)                             NavigationFilter                                            OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FVector)                                   SearchExtents                                               OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	SMember(FSmartObjectTraceParams)                   GroundTraceParameters                                       OFFSET(getStruct<T>, {0x20, 32, 0, 0})
	SMember(FSmartObjectTraceParams)                   TransitionTraceParameters                                   OFFSET(getStruct<T>, {0x40, 32, 0, 0})
	DMember(bool)                                      bUseNavigationCapsuleSize                                   OFFSET(get<bool>, {0x60, 1, 0, 0})
	SMember(FSmartObjectUserCapsuleParams)             UserCapsule                                                 OFFSET(getStruct<T>, {0x64, 12, 0, 0})
};

/// Struct /Script/SmartObjectsModule.SmartObjectActorUserData
/// Size: 0x0008 (0x000000 - 0x000008)
class FSmartObjectActorUserData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(TWeakObjectPtr<AActor*>)                   UserActor                                                   OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/SmartObjectsModule.SmartObjectActorOwnerData
/// Size: 0x0020 (0x000000 - 0x000020)
class FSmartObjectActorOwnerData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FActorInstanceHandle)                      Handle                                                      OFFSET(getStruct<T>, {0x0, 32, 0, 0})
};

/// Struct /Script/SmartObjectsModule.SmartObjectWorldConditionObjectTagQueryState
/// Size: 0x0008 (0x000000 - 0x000008)
class FSmartObjectWorldConditionObjectTagQueryState : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/SmartObjectsModule.SmartObjectWorldConditionObjectTagQuery
/// Size: 0x0058 (0x000010 - 0x000068)
class FSmartObjectWorldConditionObjectTagQuery : public FSmartObjectWorldConditionBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FGameplayTagQuery)                         TagQuery                                                    OFFSET(getStruct<T>, {0x20, 72, 0, 0})
};

/// Struct /Script/SmartObjectsModule.SmartObjectWorldConditionSlotTagQueryState
/// Size: 0x0018 (0x000000 - 0x000018)
class FSmartObjectWorldConditionSlotTagQueryState : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/SmartObjectsModule.SmartObjectWorldConditionSlotTagQuery
/// Size: 0x0058 (0x000010 - 0x000068)
class FSmartObjectWorldConditionSlotTagQuery : public FSmartObjectWorldConditionBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FGameplayTagQuery)                         TagQuery                                                    OFFSET(getStruct<T>, {0x20, 72, 0, 0})
};

/// Struct /Script/SmartObjectsModule.WorldCondition_SmartObjectActorTagQueryState
/// Size: 0x0008 (0x000000 - 0x000008)
class FWorldCondition_SmartObjectActorTagQueryState : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/SmartObjectsModule.WorldCondition_SmartObjectActorTagQuery
/// Size: 0x0050 (0x000010 - 0x000060)
class FWorldCondition_SmartObjectActorTagQuery : public FSmartObjectWorldConditionBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FGameplayTagQuery)                         TagQuery                                                    OFFSET(getStruct<T>, {0x18, 72, 0, 0})
};

/// Enum /Script/SmartObjectsModule.ESmartObjectChangeReason
/// Size: 0x13
enum class ESmartObjectChangeReason : uint8_t
{
	ESmartObjectChangeReason__None                                                   = 0,
	ESmartObjectChangeReason__OnEvent                                                = 1,
	ESmartObjectChangeReason__OnTagAdded                                             = 2,
	ESmartObjectChangeReason__OnTagRemoved                                           = 3,
	ESmartObjectChangeReason__OnClaimed                                              = 4,
	ESmartObjectChangeReason__OnOccupied                                             = 5,
	ESmartObjectChangeReason__OnReleased                                             = 6,
	ESmartObjectChangeReason__OnSlotEnabled                                          = 7,
	ESmartObjectChangeReason__OnSlotDisabled                                         = 8,
	ESmartObjectChangeReason__OnObjectEnabled                                        = 9,
	ESmartObjectChangeReason__OnObjectDisabled                                       = 10,
	ESmartObjectChangeReason__OnComponentBound                                       = 11,
	ESmartObjectChangeReason__OnComponentUnbound                                     = 12
};

/// Enum /Script/SmartObjectsModule.ESmartObjectEntrancePriority
/// Size: 0x10
enum class ESmartObjectEntrancePriority : uint8_t
{
	ESmartObjectEntrancePriority__Lowest                                             = 0,
	ESmartObjectEntrancePriority__Lower                                              = 1,
	ESmartObjectEntrancePriority__Low                                                = 2,
	ESmartObjectEntrancePriority__BelowNormal                                        = 3,
	ESmartObjectEntrancePriority__Normal                                             = 4,
	ESmartObjectEntrancePriority__AboveNormal                                        = 5,
	ESmartObjectEntrancePriority__High                                               = 6,
	ESmartObjectEntrancePriority__Higher                                             = 7,
	ESmartObjectEntrancePriority__Highest                                            = 8,
	ESmartObjectEntrancePriority__MIN                                                = 0
};

/// Enum /Script/SmartObjectsModule.ESmartObjectSlotShape
/// Size: 0x02
enum class ESmartObjectSlotShape : uint8_t
{
	ESmartObjectSlotShape__Circle                                                    = 0,
	ESmartObjectSlotShape__Rectangle                                                 = 1
};

/// Enum /Script/SmartObjectsModule.ESmartObjectSlotState
/// Size: 0x05
enum class ESmartObjectSlotState : uint8_t
{
	ESmartObjectSlotState__Invalid                                                   = 0,
	ESmartObjectSlotState__Free                                                      = 1,
	ESmartObjectSlotState__Claimed                                                   = 2,
	ESmartObjectSlotState__Occupied                                                  = 3,
	ESmartObjectSlotState__Disabled                                                  = 4
};

/// Enum /Script/SmartObjectsModule.ETrySpawnActorIfDehydrated
/// Size: 0x02
enum class ETrySpawnActorIfDehydrated : uint8_t
{
	ETrySpawnActorIfDehydrated__No                                                   = 0,
	ETrySpawnActorIfDehydrated__Yes                                                  = 1
};

/// Enum /Script/SmartObjectsModule.FSmartObjectSlotEntrySelectionMethod
/// Size: 0x02
enum class FSmartObjectSlotEntrySelectionMethod : uint8_t
{
	FSmartObjectSlotEntrySelectionMethod__First                                      = 0,
	FSmartObjectSlotEntrySelectionMethod__NearestToSearchLocation                    = 1
};

/// Enum /Script/SmartObjectsModule.ESmartObjectCollectionRegistrationResult
/// Size: 0x04
enum class ESmartObjectCollectionRegistrationResult : uint8_t
{
	ESmartObjectCollectionRegistrationResult__Failed_InvalidCollection               = 0,
	ESmartObjectCollectionRegistrationResult__Failed_AlreadyRegistered               = 1,
	ESmartObjectCollectionRegistrationResult__Failed_NotFromPersistentLevel          = 2,
	ESmartObjectCollectionRegistrationResult__Succeeded                              = 3
};

/// Enum /Script/SmartObjectsModule.ESmartObjectTagMergingPolicy
/// Size: 0x02
enum class ESmartObjectTagMergingPolicy : uint8_t
{
	ESmartObjectTagMergingPolicy__Combine                                            = 0,
	ESmartObjectTagMergingPolicy__Override                                           = 1
};

/// Enum /Script/SmartObjectsModule.ESmartObjectTagFilteringPolicy
/// Size: 0x03
enum class ESmartObjectTagFilteringPolicy : uint8_t
{
	ESmartObjectTagFilteringPolicy__NoFilter                                         = 0,
	ESmartObjectTagFilteringPolicy__Combine                                          = 1,
	ESmartObjectTagFilteringPolicy__Override                                         = 2
};

/// Enum /Script/SmartObjectsModule.ESmartObjectSlotNavigationLocationType
/// Size: 0x02
enum class ESmartObjectSlotNavigationLocationType : uint8_t
{
	ESmartObjectSlotNavigationLocationType__Entry                                    = 0,
	ESmartObjectSlotNavigationLocationType__Exit                                     = 1
};

/// Enum /Script/SmartObjectsModule.ESmartObjectClaimPriority
/// Size: 0x07
enum class ESmartObjectClaimPriority : uint8_t
{
	ESmartObjectClaimPriority__None                                                  = 0,
	ESmartObjectClaimPriority__Low                                                   = 1,
	ESmartObjectClaimPriority__BelowNormal                                           = 2,
	ESmartObjectClaimPriority__Normal                                                = 3,
	ESmartObjectClaimPriority__AboveNormal                                           = 4,
	ESmartObjectClaimPriority__High                                                  = 5,
	ESmartObjectClaimPriority__MIN                                                   = 0
};

/// Enum /Script/SmartObjectsModule.ESmartObjectTraceType
/// Size: 0x03
enum class ESmartObjectTraceType : uint8_t
{
	ESmartObjectTraceType__ByChannel                                                 = 0,
	ESmartObjectTraceType__ByProfile                                                 = 1,
	ESmartObjectTraceType__ByObjectTypes                                             = 2
};

