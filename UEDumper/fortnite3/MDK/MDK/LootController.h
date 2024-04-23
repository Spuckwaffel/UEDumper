
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

/// Class /Script/LootController.FortAthenaMutator_CR_CreativeAllowLootItem
/// Size: 0x0020 (0x000338 - 0x000358)
class AFortAthenaMutator_CR_CreativeAllowLootItem : public AFortAthenaMutator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 856;

public:
	SMember(FGameplayTagContainer)                     ItemGameplayTagsNotAllowed                                  OFFSET(getStruct<T>, {0x338, 32, 0, 0})


	/// Functions
	// Function /Script/LootController.FortAthenaMutator_CR_CreativeAllowLootItem.SetItemGameplayTagsNotAllowed
	// void SetItemGameplayTagsNotAllowed(FGameplayTagContainer& InItemGameplayTagsNotAllowed);                                 // [0xc70ee18] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/LootController.FortAthenaMutator_CR_LootChoice
/// Size: 0x0000 (0x000338 - 0x000338)
class AFortAthenaMutator_CR_LootChoice : public AFortAthenaMutator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 824;

public:


	/// Functions
	// Function /Script/LootController.FortAthenaMutator_CR_LootChoice.GetLootTierDataTable
	// class UDataTable* GetLootTierDataTable();                                                                                // [0x6b68584] Native|Event|Public|BlueprintEvent|Const 
	// Function /Script/LootController.FortAthenaMutator_CR_LootChoice.GetLootSelectionString
	// FString GetLootSelectionString();                                                                                        // [0x6b776d0] Native|Event|Public|BlueprintEvent|Const 
	// Function /Script/LootController.FortAthenaMutator_CR_LootChoice.GetLootPackageTable
	// class UDataTable* GetLootPackageTable();                                                                                 // [0x6b68584] Native|Event|Public|BlueprintEvent|Const 
	// Function /Script/LootController.FortAthenaMutator_CR_LootChoice.GetContextTagsToRemove
	// FGameplayTagContainer GetContextTagsToRemove();                                                                          // [0xc70e670] Native|Event|Public|BlueprintEvent|Const 
	// Function /Script/LootController.FortAthenaMutator_CR_LootChoice.GetContextTagsToAdd
	// FGameplayTagContainer GetContextTagsToAdd();                                                                             // [0xc70e670] Native|Event|Public|BlueprintEvent|Const 
};

/// Class /Script/LootController.LootControllerNativeComponent
/// Size: 0x0020 (0x0000A0 - 0x0000C0)
class ULootControllerNativeComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	CMember(TArray<class AActor*>)                     OutActors                                                   OFFSET(get<T>, {0xA0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnAsyncGetActorsOfClassCompleted                            OFFSET(getStruct<T>, {0xB0, 16, 0, 0})


	/// Functions
	// Function /Script/LootController.LootControllerNativeComponent.PrintDebugString
	// void PrintDebugString(FString DebugString, bool LogWarning);                                                             // [0xc70e70c] Final|Native|Protected|BlueprintCallable 
	// Function /Script/LootController.LootControllerNativeComponent.IsThrottleEnabled
	// bool IsThrottleEnabled();                                                                                                // [0xc70e6f0] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LootController.LootControllerNativeComponent.IsRemoveLootEnabled
	// bool IsRemoveLootEnabled();                                                                                              // [0xc70e6d4] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LootController.LootControllerNativeComponent.AsyncGetActorsOfClass
	// void AsyncGetActorsOfClass(class UObject* WorldContextObject, class UClass* ActorClass);                                 // [0xc70e4a8] Final|Native|Protected|BlueprintCallable 
	// Function /Script/LootController.LootControllerNativeComponent.AddToArray
	// void AddToArray(TArray<FBuildingContainersFoundEntry>& InOutBuildingContainersFoundArray, int32_t InBuildingContainerFoundIndex, FBuildingContainersArrayEntry& InBuildingContainerToAdd); // [0xc70e28c] Final|Native|Protected|HasOutParms|BlueprintCallable 
};

/// Struct /Script/LootController.BuildingContainersArrayEntry
/// Size: 0x00A0 (0x000000 - 0x0000A0)
class FBuildingContainersArrayEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	CMember(class ABuildingContainer*)                 BuildingContainer                                           OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FTransform)                                Transform                                                   OFFSET(getStruct<T>, {0x10, 96, 0, 0})
	SMember(FName)                                     SearchLootTierGroup                                         OFFSET(getStruct<T>, {0x70, 4, 0, 0})
	SMember(FGameplayTagContainer)                     GameplayTags                                                OFFSET(getStruct<T>, {0x78, 32, 0, 0})
};

/// Struct /Script/LootController.BuildingContainersFoundEntry
/// Size: 0x0018 (0x000000 - 0x000018)
class FBuildingContainersFoundEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FGameplayTag)                              GameplayTag                                                 OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(TArray<FBuildingContainersArrayEntry>)     BuildingContainers                                          OFFSET(get<T>, {0x8, 16, 0, 0})
};

