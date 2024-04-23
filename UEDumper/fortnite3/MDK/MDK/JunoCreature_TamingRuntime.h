
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: DataRegistry
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: GameplayTags
/// dependency: ModularGameplay
/// dependency: WorldConditions

/// Class /Script/JunoCreature_TamingRuntime.JunoAnimalProcessorComponent
/// Size: 0x0078 (0x0000A0 - 0x000118)
class UJunoAnimalProcessorComponent : public UGameFrameworkComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 280;

public:
	CMember(class UJunoAnimalProcessorFriendshipModifierMappings*) DefaultFriendshipModifiers                      OFFSET(get<T>, {0xA0, 8, 0, 0})
	SMember(FDataRegistryType)                         AnimalProcessorConfigRegistryType                           OFFSET(getStruct<T>, {0xA8, 4, 0, 0})
	SMember(FGameplayTagContainer)                     UnassignedCraftingTags                                      OFFSET(getStruct<T>, {0xB0, 32, 0, 0})
	SMember(FGameplayTag)                              AssignedAnimalDescriptorTag                                 OFFSET(getStruct<T>, {0xD0, 4, 0, 0})
	SMember(FGameplayTag)                              AssignedFriendshipStateTag                                  OFFSET(getStruct<T>, {0xD8, 4, 0, 0})
	DMember(float)                                     CurrentCraftingSpeedModifier                                OFFSET(get<float>, {0xDC, 4, 0, 0})
};

/// Class /Script/JunoCreature_TamingRuntime.JunoAnimalProcessorFriendshipModifierMappings
/// Size: 0x0050 (0x000030 - 0x000080)
class UJunoAnimalProcessorFriendshipModifierMappings : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(TMap<FGameplayTag, FDataTableRowHandle>)   FriendshipModifierMap                                       OFFSET(get<T>, {0x30, 80, 0, 0})
};

/// Class /Script/JunoCreature_TamingRuntime.JunoAnimalProcessorWorldConditionSchema
/// Size: 0x0008 (0x000038 - 0x000040)
class UJunoAnimalProcessorWorldConditionSchema : public UWorldConditionSchema
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Script/JunoCreature_TamingRuntime.JunoBarnAssignmentMenuInitData
/// Size: 0x0028 (0x000028 - 0x000050)
class UJunoBarnAssignmentMenuInitData : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(class AActor*)                             BarnActor                                                   OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(class AActor*)                             AnimalActor                                                 OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(EJunoBarnAssignmentMode)                   BarnAssignmentMode                                          OFFSET(get<T>, {0x38, 1, 0, 0})
	SMember(FGameplayTag)                              UniqueAIIdentifier                                          OFFSET(getStruct<T>, {0x3C, 4, 0, 0})
	SMember(FText)                                     ExistingName                                                OFFSET(getStruct<T>, {0x40, 16, 0, 0})
};

/// Class /Script/JunoCreature_TamingRuntime.JunoControllerComponent_Taming
/// Size: 0x0038 (0x0000A8 - 0x0000E0)
class UJunoControllerComponent_Taming : public UFortControllerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	SMember(FGameplayTag)                              FollowingAnimalAIDescriptorTag                              OFFSET(getStruct<T>, {0xD8, 4, 0, 0})


	/// Functions
	// Function /Script/JunoCreature_TamingRuntime.JunoControllerComponent_Taming.Server_RenameAnimal
	// void Server_RenameAnimal(class AFortPlayerController* TriggeringPlayer, FGameplayTag UniqueAIIdentifier, FText NewName); // [0xccc44f8] RequiredAPI|Net|NetReliableNative|Event|Public|NetServer 
	// Function /Script/JunoCreature_TamingRuntime.JunoControllerComponent_Taming.Server_ReassignAnimalToBarn
	// void Server_ReassignAnimalToBarn(class AFortPlayerController* TriggeringPlayer, class AActor* BarnActor, FGameplayTag UniqueAIIdentifier, FText ExistingName); // [0xccc43a8] RequiredAPI|Net|NetReliableNative|Event|Public|NetServer 
	// Function /Script/JunoCreature_TamingRuntime.JunoControllerComponent_Taming.Server_BarnInteractionStarted
	// void Server_BarnInteractionStarted();                                                                                    // [0x8c58fbc] RequiredAPI|Net|NetReliableNative|Event|Public|NetServer 
	// Function /Script/JunoCreature_TamingRuntime.JunoControllerComponent_Taming.Server_BarnInteractionEnded
	// void Server_BarnInteractionEnded();                                                                                      // [0x8998b60] RequiredAPI|Net|NetReliableNative|Event|Public|NetServer 
	// Function /Script/JunoCreature_TamingRuntime.JunoControllerComponent_Taming.Server_AssignAnimalToBarn
	// void Server_AssignAnimalToBarn(class AFortPlayerController* TriggeringPlayer, class AActor* BarnActor, class AActor* AnimalActor, FText CustomName); // [0xccc4258] RequiredAPI|Net|NetReliableNative|Event|Public|NetServer 
	// Function /Script/JunoCreature_TamingRuntime.JunoControllerComponent_Taming.OnUnconvertFollowingAnimal
	// void OnUnconvertFollowingAnimal(class AFortPawn* UnconvertedPawn, EUnconvertReason UnconvertReason);                     // [0xccc4198] Final|Native|Public  
	// Function /Script/JunoCreature_TamingRuntime.JunoControllerComponent_Taming.OnRep_FollowingAnimalAIDescriptorTag
	// void OnRep_FollowingAnimalAIDescriptorTag();                                                                             // [0xccc4164] Final|Native|Protected 
	// Function /Script/JunoCreature_TamingRuntime.JunoControllerComponent_Taming.OnConvertFollowingAnimal
	// void OnConvertFollowingAnimal(class AFortPawn* ConvertedPawn);                                                           // [0xccc40c4] Final|Native|Public  
	// Function /Script/JunoCreature_TamingRuntime.JunoControllerComponent_Taming.BP_HandleBarnInteractionStarted
	// void BP_HandleBarnInteractionStarted();                                                                                  // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Script/JunoCreature_TamingRuntime.JunoControllerComponent_Taming.BP_HandleBarnInteractionEnded
	// void BP_HandleBarnInteractionEnded();                                                                                    // [0x1340978] Event|Protected|BlueprintEvent 
};

/// Struct /Script/JunoCreature_TamingRuntime.JunoAnimalProcessorConfigTableRow
/// Size: 0x0040 (0x000008 - 0x000048)
class FJunoAnimalProcessorConfigTableRow : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FWorldConditionQueryDefinition)            SelectionPreconditions                                      OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	SMember(FGameplayTagContainer)                     AssociatedCraftingObjectTags                                OFFSET(getStruct<T>, {0x20, 32, 0, 0})
	CMember(class UJunoAnimalProcessorFriendshipModifierMappings*) FriendshipModifiersOverride                     OFFSET(get<T>, {0x40, 8, 0, 0})
};

/// Struct /Script/JunoCreature_TamingRuntime.JunoAnimalProcessorModifierTableRow
/// Size: 0x0008 (0x000008 - 0x000010)
class FJunoAnimalProcessorModifierTableRow : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(float)                                     CraftingSpeedMultiplier                                     OFFSET(get<float>, {0x8, 4, 0, 0})
};

/// Struct /Script/JunoCreature_TamingRuntime.JunoEvent_OpenBarnAssignmentMenuMessage
/// Size: 0x0010 (0x000000 - 0x000010)
class FJunoEvent_OpenBarnAssignmentMenuMessage : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class AActor*)                             DEPRECATED_BarnActor                                        OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class UJunoBarnAssignmentMenuInitData*)    BarnAssignmentMenuInitData                                  OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/JunoCreature_TamingRuntime.JunoWorldConditionAnimalProcessorChecks
/// Size: 0x0050 (0x000010 - 0x000060)
class FJunoWorldConditionAnimalProcessorChecks : public FWorldConditionCommonActorBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FWorldConditionContextDataRef)             ActorRef                                                    OFFSET(getStruct<T>, {0x10, 8, 0, 0})
	SMember(FGameplayTagQuery)                         AssignedAnimalTagQuery                                      OFFSET(getStruct<T>, {0x18, 72, 0, 0})
};

/// Enum /Script/JunoCreature_TamingRuntime.EJunoBarnAssignmentMode
/// Size: 0x03
enum class EJunoBarnAssignmentMode : uint8_t
{
	EJunoBarnAssignmentMode__AssignAndSetName                                        = 0,
	EJunoBarnAssignmentMode__SetNameOnly                                             = 1,
	EJunoBarnAssignmentMode__EJunoBarnAssignmentMode_MAX                             = 2
};

