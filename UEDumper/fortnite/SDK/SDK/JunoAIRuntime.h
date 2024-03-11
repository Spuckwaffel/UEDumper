
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
/// dependency: FortniteAI
/// dependency: FortniteAIServer
/// dependency: FortniteGame
/// dependency: GameplayAbilities
/// dependency: GameplayTags
/// dependency: GameplayTasks
/// dependency: JunoGameNative
/// dependency: LagerRuntime
/// dependency: ModularGameplay
/// dependency: PlayspaceSystem
/// dependency: StateTreeModule
/// dependency: WorldConditions

/// Enum /Script/JunoAIRuntime.EJunoNPCJobEndReason
/// Size: 0x04
enum class EJunoNPCJobEndReason : uint8_t
{
	EJunoNPCJobEndReason__ManualPlayerUnassignment                                   = 0,
	EJunoNPCJobEndReason__AutoUnassigmentViaFollowerAssignment                       = 1,
	EJunoNPCJobEndReason__AutoUnassignmentViaCampHardRemoval                         = 2,
	EJunoNPCJobEndReason__EJunoNPCJobEndReason_MAX                                   = 3
};

/// Enum /Script/JunoAIRuntime.EJunoNPCFollowEndReason
/// Size: 0x04
enum class EJunoNPCFollowEndReason : uint8_t
{
	EJunoNPCFollowEndReason__ManualPlayerUnassignment                                = 0,
	EJunoNPCFollowEndReason__AutoUnassigmentViaRecruitment                           = 1,
	EJunoNPCFollowEndReason__AutoUnassignmentDueToStaleFollower                      = 2,
	EJunoNPCFollowEndReason__EJunoNPCFollowEndReason_MAX                             = 3
};

/// Enum /Script/JunoAIRuntime.ENPCRewardType
/// Size: 0x03
enum class ENPCRewardType : uint8_t
{
	ENPCRewardType__LootTier                                                         = 0,
	ENPCRewardType__Recipe                                                           = 1,
	ENPCRewardType__ENPCRewardType_MAX                                               = 2
};

/// Enum /Script/JunoAIRuntime.EJunoWorldConditionNPCSlotsLimit
/// Size: 0x04
enum class EJunoWorldConditionNPCSlotsLimit : uint8_t
{
	EJunoWorldConditionNPCSlotsLimit__Unset                                          = 0,
	EJunoWorldConditionNPCSlotsLimit__ReachedMaxCap                                  = 1,
	EJunoWorldConditionNPCSlotsLimit__CanIncrease                                    = 2,
	EJunoWorldConditionNPCSlotsLimit__EJunoWorldConditionNPCSlotsLimit_MAX           = 3
};

/// Enum /Script/JunoAIRuntime.EJunoWorldCondition_AIWorldSettingsExpectedValue
/// Size: 0x04
enum class EJunoWorldCondition_AIWorldSettingsExpectedValue : uint32_t
{
	EJunoWorldCondition_AIWorldSettingsExpectedValue__Any                            = 0,
	EJunoWorldCondition_AIWorldSettingsExpectedValue__On                             = 1,
	EJunoWorldCondition_AIWorldSettingsExpectedValue__Off                            = 2,
	EJunoWorldCondition_AIWorldSettingsExpectedValue__EJunoWorldCondition_MAX        = 3
};

/// Class /Script/JunoAIRuntime.JunoAIBotController
/// Size: 0x0200 (0x001760 - 0x001960)
class AJunoAIBotController : public AFortAthenaAIBotController
{ 
public:
	class UJunoAIInventoryComponent*                   JunoAIInventoryComponent;                                   // 0x1760   (0x0008)  
	TArray<FItemAndCount>                              DefaultItemsToAdd;                                          // 0x1768   (0x0010)  
	unsigned char                                      UnknownData00_5[0x89];                                      // 0x1778   (0x0089)  MISSED
	bool                                               bRequiresPersistentInventory;                               // 0x1801   (0x0001)  
	unsigned char                                      UnknownData01_5[0x6];                                       // 0x1802   (0x0006)  MISSED
	FScalableFloat                                     EnableDurabilityOnInventory;                                // 0x1808   (0x0028)  
	FScalableFloat                                     UseRoleCheckForDurability;                                  // 0x1830   (0x0028)  
	FGameplayTagQuery                                  RequiredRoleForDurability;                                  // 0x1858   (0x0048)  
	bool                                               bUseFocusedActorEyeLocationForFocalPoint;                   // 0x18A0   (0x0001)  
	bool                                               bUseValidItemsPerType;                                      // 0x18A1   (0x0001)  
	unsigned char                                      UnknownData02_5[0x6];                                       // 0x18A2   (0x0006)  MISSED
	FScalableFloat                                     EffectivenessMultiplierForWeaponSelectionOnPickedOrAddedItem; // 0x18A8   (0x0028)  
	SDK_UNDEFINED(80,14381) /* TMap<FGameplayTag, FValidItemSlotConfiguration> */ __um(ValidItemsTablePerType);    // 0x18D0   (0x0050)  
	class UFortItemDefinition*                         AutomaticallyEquippedWeaponOnDurabilityBreak;               // 0x1920   (0x0008)  
	FScalableFloat                                     DurabilityMultiplier;                                       // 0x1928   (0x0028)  
	FGameplayTag                                       TagToApplyWhenAddingFallbackItemForDurabilityBreak;         // 0x1950   (0x0004)  
	unsigned char                                      UnknownData03_6[0xC];                                       // 0x1954   (0x000C)  MISSED
};

/// Class /Script/JunoAIRuntime.JunoAIBotEvaluator_FallbackBehavior
/// Size: 0x0080 (0x0001B0 - 0x000230)
class UJunoAIBotEvaluator_FallbackBehavior : public UFortAthenaAIBotEvaluator_Movement
{ 
public:
	unsigned char                                      UnknownData00_3[0x18];                                      // 0x01B0   (0x0018)  MISSED
	FEQSParametrizedQueryExecutionRequest              EQSRequest;                                                 // 0x01C8   (0x0048)  
	class UClass*                                      NavigationQueryFilterClass;                                 // 0x0210   (0x0008)  
	bool                                               bFallbackToPointWithNoCustomNavigationQueryFilter;          // 0x0218   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0219   (0x0003)  MISSED
	FName                                              BestTargetActorName;                                        // 0x021C   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x0220   (0x0004)  MISSED
	FName                                              EnableKeyName;                                              // 0x0224   (0x0004)  
	unsigned char                                      UnknownData03_6[0x8];                                       // 0x0228   (0x0008)  MISSED
};

/// Struct /Script/JunoAIRuntime.JunoAIFTUERuntimeConfiguration
/// Size: 0x0088 (0x000000 - 0x000088)
struct FJunoAIFTUERuntimeConfiguration
{ 
	FScalableFloat                                     MaxDistanceFromCampToTeleport;                              // 0x0000   (0x0028)  
	FScalableFloat                                     MinDistanceFromPlayersToTeleport;                           // 0x0028   (0x0028)  
	FScalableFloat                                     TeleportToCampDelay;                                        // 0x0050   (0x0028)  
	class UEnvQuery*                                   TeleportToPlayerQueryTemplate;                              // 0x0078   (0x0008)  
	SDK_UNDEFINED(1,14382) /* TEnumAsByte<EEnvQueryRunMode> */ __um(TeleportToPlayerRunMode);                      // 0x0080   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0081   (0x0007)  MISSED
};

/// Class /Script/JunoAIRuntime.JunoAIBotEvaluator_FTUENPC
/// Size: 0x00C0 (0x0000A8 - 0x000168)
class UJunoAIBotEvaluator_FTUENPC : public UFortAthenaAIBotEvaluator
{ 
public:
	unsigned char                                      UnknownData00_3[0x24];                                      // 0x00A8   (0x0024)  MISSED
	FName                                              TeleportDestinationKeyName;                                 // 0x00CC   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x00D0   (0x0004)  MISSED
	FName                                              ShouldTeleportKeyName;                                      // 0x00D4   (0x0004)  
	unsigned char                                      UnknownData02_5[0x8];                                       // 0x00D8   (0x0008)  MISSED
	FJunoAIFTUERuntimeConfiguration                    FTUERuntimeConfiguration;                                   // 0x00E0   (0x0088)  
};

/// Class /Script/JunoAIRuntime.JunoAIBotEvaluator_HardRemovalStart
/// Size: 0x0088 (0x0001B0 - 0x000238)
class UJunoAIBotEvaluator_HardRemovalStart : public UFortAthenaAIBotEvaluator_Movement
{ 
public:
	unsigned char                                      UnknownData00_3[0x18];                                      // 0x01B0   (0x0018)  MISSED
	FEQSParametrizedQueryExecutionRequest              EQSRequest;                                                 // 0x01C8   (0x0048)  
	FScalableFloat                                     RequestHardRemovalOnSuccess;                                // 0x0210   (0x0028)  
};

/// Class /Script/JunoAIRuntime.JunoAIBotEvaluator_OffhandWeapon
/// Size: 0x0068 (0x0000A8 - 0x000110)
class UJunoAIBotEvaluator_OffhandWeapon : public UFortAthenaAIBotEvaluator
{ 
public:
	unsigned char                                      UnknownData00_3[0x18];                                      // 0x00A8   (0x0018)  MISSED
	FGameplayTag                                       TorchWeaponTag;                                             // 0x00C0   (0x0004)  
	FGameplayTag                                       MinTemperatureStateToAlwaysEquipTorch;                      // 0x00C4   (0x0004)  
	FGameplayTag                                       TemperatureStateUsedToDecideSpecialTimeTorchUsage;          // 0x00C8   (0x0004)  
	float                                              MaxDeltaFromHotTemperatureToEquipTorch;                     // 0x00CC   (0x0004)  
	TArray<FName>                                      ExecutionStatusesToCheckedToHolsterKeyNames;                // 0x00D0   (0x0010)  
	unsigned char                                      UnknownData01_5[0x10];                                      // 0x00E0   (0x0010)  MISSED
	TArray<FName>                                      BoolsToCheckToHolsterKeyNames;                              // 0x00F0   (0x0010)  
	unsigned char                                      UnknownData02_6[0x10];                                      // 0x0100   (0x0010)  MISSED
};

/// Class /Script/JunoAIRuntime.JunoAIBotEvaluator_UnderThunderBehavior
/// Size: 0x0110 (0x0001B0 - 0x0002C0)
class UJunoAIBotEvaluator_UnderThunderBehavior : public UFortAthenaAIBotEvaluator_Movement
{ 
public:
	unsigned char                                      UnknownData00_3[0x30];                                      // 0x01B0   (0x0030)  MISSED
	FScalableFloat                                     IsEnabled;                                                  // 0x01E0   (0x0028)  
	FScalableFloat                                     UseTagForShelterCheck;                                      // 0x0208   (0x0028)  
	FGameplayTag                                       TagToCheckForSheltered;                                     // 0x0230   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0234   (0x0004)  MISSED
	SDK_UNDEFINED(16,14383) /* TArray<TEnumAsByte<EObjectTypeQuery>> */ __um(ShelterQueryTypes);                   // 0x0238   (0x0010)  
	FScalableFloat                                     MaxShelterDistance;                                         // 0x0248   (0x0028)  
	FScalableFloat                                     MinDistanceFromShelterLocationToKeepItValid;                // 0x0270   (0x0028)  
	FGameplayTagContainer                              ShelterCollidingActorRequiresAnyTag;                        // 0x0298   (0x0020)  
	FGameplayTag                                       TagToApplyForShelteredNPC;                                  // 0x02B8   (0x0004)  
	FGameplayTag                                       TagToApplyForNonShelteredNPC;                               // 0x02BC   (0x0004)  
};

/// Struct /Script/JunoAIRuntime.JunoAIUnstuckFailsafeConfiguration
/// Size: 0x00E8 (0x000000 - 0x0000E8)
struct FJunoAIUnstuckFailsafeConfiguration
{ 
	FScalableFloat                                     MinimumTimeUnderLandscape;                                  // 0x0000   (0x0028)  
	FScalableFloat                                     MinZThresholdForLandscapeTeleport;                          // 0x0028   (0x0028)  
	FScalableFloat                                     TeleportToLandscapeDelay;                                   // 0x0050   (0x0028)  
	class UEnvQuery*                                   TeleportToLandscapeQueryTemplate;                           // 0x0078   (0x0008)  
	SDK_UNDEFINED(1,14384) /* TEnumAsByte<EEnvQueryRunMode> */ __um(TeleportToLandscapeRunMode);                   // 0x0080   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0081   (0x0007)  MISSED
	FScalableFloat                                     MinimumTimeFalling;                                         // 0x0088   (0x0028)  
	FScalableFloat                                     TeleportToNavmeshDelay;                                     // 0x00B0   (0x0028)  
	class UEnvQuery*                                   TeleportToNavmeshQueryTemplate;                             // 0x00D8   (0x0008)  
	SDK_UNDEFINED(1,14385) /* TEnumAsByte<EEnvQueryRunMode> */ __um(TeleportToNavmeshRunMode);                     // 0x00E0   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x00E1   (0x0007)  MISSED
};

/// Class /Script/JunoAIRuntime.JunoAIBotEvaluator_UnstuckFailsafe
/// Size: 0x0110 (0x0000A8 - 0x0001B8)
class UJunoAIBotEvaluator_UnstuckFailsafe : public UFortAthenaAIBotEvaluator
{ 
public:
	unsigned char                                      UnknownData00_3[0x18];                                      // 0x00A8   (0x0018)  MISSED
	FName                                              TeleportDestinationKeyName;                                 // 0x00C0   (0x0004)  
	FName                                              ShouldTeleportKeyName;                                      // 0x00C4   (0x0004)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x00C8   (0x0008)  MISSED
	FJunoAIUnstuckFailsafeConfiguration                Configuration;                                              // 0x00D0   (0x00E8)  
};

/// Class /Script/JunoAIRuntime.JunoAICampPawnComponent
/// Size: 0x0280 (0x0000A8 - 0x000328)
class UJunoAICampPawnComponent : public UFortPawnComponent
{ 
public:
	SDK_UNDEFINED(16,14386) /* FMulticastInlineDelegate */ __um(OnJunoAICampPawnComponentChangedSoftRemovedReason); // 0x00A8   (0x0010)  
	unsigned char                                      UnknownData00_5[0xF0];                                      // 0x00B8   (0x00F0)  MISSED
	TArray<class UClass*>                              PreFTUESkillSetClasses;                                     // 0x01A8   (0x0010)  
	unsigned char                                      UnknownData01_5[0x50];                                      // 0x01B8   (0x0050)  MISSED
	SDK_UNDEFINED(80,14387) /* TMap<FGameplayTag, FText> */ __um(AIRoleToDisplayText);                             // 0x0208   (0x0050)  
	TArray<class UClass*>                              FTUESkillSetClasses;                                        // 0x0258   (0x0010)  
	FGameplayTagContainer                              FTUETagsToAdd;                                              // 0x0268   (0x0020)  
	FScalableFloat                                     FTUEOverrideTileGenerationRadius;                           // 0x0288   (0x0028)  
	FScalableFloat                                     FTUEOverrideTileRemovalRadius;                              // 0x02B0   (0x0028)  
	FScalableFloat                                     TimeToGoInHardRemovalStartStateBeforeHardRemovalInRealSeconds; // 0x02D8   (0x0028)  
	FScalableFloat                                     TimeForVisitorsToGoInHardRemovalStartStateBeforeHardRemovalInRealSeconds; // 0x0300   (0x0028)  


	/// Functions
	// Function /Script/JunoAIRuntime.JunoAICampPawnComponent.GetSoftRemovedReasons
	// FGameplayTagContainer GetSoftRemovedReasons();                                                                        // [0xb39ef90] Final|Native|Private|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoAIRuntime.JunoAICampPawnComponent.GetAIRoleDisplayText
	// FText GetAIRoleDisplayText();                                                                                         // [0xb39ef5c] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoAIRuntime.JunoAICampPawnComponent.GetAIRole
	// FGameplayTag GetAIRole();                                                                                             // [0x6661a0c] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoAIRuntime.JunoAICampPawnComponent.ConvertAIRoleToDisplayText
	// FText ConvertAIRoleToDisplayText(FGameplayTag& AIRole);                                                               // [0xb39ee7c] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/JunoAIRuntime.JunoAIInventoryComponent
/// Size: 0x0010 (0x000318 - 0x000328)
class UJunoAIInventoryComponent : public UJunoInventoryComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0318   (0x0010)  MISSED
};

/// Class /Script/JunoAIRuntime.JunoAIMerchantComponent
/// Size: 0x0050 (0x0000A8 - 0x0000F8)
class UJunoAIMerchantComponent : public UFortPawnComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x50];                                      // 0x00A8   (0x0050)  MISSED
};

/// Class /Script/JunoAIRuntime.JunoAIRuntimeAnalytics
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoAIRuntimeAnalytics : public UObject
{ 
public:
};

/// Class /Script/JunoAIRuntime.JunoBTTask_FTUENPC
/// Size: 0x0008 (0x0000E8 - 0x0000F0)
class UJunoBTTask_FTUENPC : public UFortBTTask_ExecuteGameplayAbility
{ 
public:
	FName                                              FTUENPCStatusKeyName;                                       // 0x00E8   (0x0004)  
	FName                                              ShouldTeleportKeyName;                                      // 0x00EC   (0x0004)  
};

/// Class /Script/JunoAIRuntime.JunoBTTask_ReactToVerb
/// Size: 0x0008 (0x000080 - 0x000088)
class UJunoBTTask_ReactToVerb : public UFortAthenaBTTask_ReactToVerb
{ 
public:
	FName                                              MoodReactionTagKeyName;                                     // 0x0080   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0084   (0x0004)  MISSED
};

/// Struct /Script/JunoAIRuntime.RandomizedMoodReactionConfig
/// Size: 0x0030 (0x000000 - 0x000030)
struct FRandomizedMoodReactionConfig
{ 
	FScalableFloat                                     Weight;                                                     // 0x0000   (0x0028)  
	FGameplayTag                                       MoodReactionTag;                                            // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Class /Script/JunoAIRuntime.JunoBTTask_RunMoodReaction
/// Size: 0x0010 (0x000070 - 0x000080)
class UJunoBTTask_RunMoodReaction : public UBTTaskNode
{ 
public:
	TArray<FRandomizedMoodReactionConfig>              PossibleMoodReactions;                                      // 0x0070   (0x0010)  
};

/// Class /Script/JunoAIRuntime.FJunoAICampManagementVisitorWorldConditionSchema
/// Size: 0x0000 (0x000040 - 0x000040)
class UFJunoAICampManagementVisitorWorldConditionSchema : public UJunoCampWorldConditionSchema
{ 
public:
};

/// Class /Script/JunoAIRuntime.JunoAICampManagementRewardsWorldConditionSchema
/// Size: 0x0000 (0x000040 - 0x000040)
class UJunoAICampManagementRewardsWorldConditionSchema : public UJunoCampWorldConditionSchema
{ 
public:
};

/// Struct /Script/JunoAIRuntime.JunoAICampManagementVisitorConfigurationRuntime
/// Size: 0x0060 (0x000000 - 0x000060)
struct FJunoAICampManagementVisitorConfigurationRuntime
{ 
	FWorldConditionQueryState                          SelectionPreconditionsQueryState;                           // 0x0030   (0x0030)  
};

/// Struct /Script/JunoAIRuntime.JunoAICampManagementVisitorsConfigurationDigested
/// Size: 0x0018 (0x000000 - 0x000018)
struct FJunoAICampManagementVisitorsConfigurationDigested
{ 
	TArray<FJunoAICampManagementVisitorConfigurationRuntime> PossibleVisitors;                                     // 0x0000   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0010   (0x0008)  MISSED
};

/// Struct /Script/JunoAIRuntime.JunoAICampManagementVisitorsRarityConfiguration
/// Size: 0x0008 (0x000000 - 0x000008)
struct FJunoAICampManagementVisitorsRarityConfiguration
{ 
	FGameplayTag                                       Rarity;                                                     // 0x0000   (0x0004)  
	int32_t                                            PickPercentage;                                             // 0x0004   (0x0004)  
};

/// Struct /Script/JunoAIRuntime.JunoAICampManagementVisitorsPickingConfiguration
/// Size: 0x0018 (0x000008 - 0x000020)
struct FJunoAICampManagementVisitorsPickingConfiguration : FTableRowBase
{ 
	TArray<FJunoAICampManagementVisitorsRarityConfiguration> RaritiesConfiguration;                                // 0x0008   (0x0010)  
	int32_t                                            MaxRecruitableNPCs;                                         // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Struct /Script/JunoAIRuntime.JunoAICampManagementLWMConfiguration
/// Size: 0x03A0 (0x000000 - 0x0003A0)
struct FJunoAICampManagementLWMConfiguration
{ 
	FFortAthenaLivingWorldEvent                        EventTemplate;                                              // 0x0000   (0x01B0)  
	FFortAthenaLivingWorldEventDataActorSpawnDescription SpawnDescriptionTemplate;                                 // 0x01B0   (0x0130)  
	FPointProviderFilterEntry                          FilterEntry;                                                // 0x02E0   (0x0088)  
	SDK_UNDEFINED(32,14388) /* TWeakObjectPtr<UFortAthenaLivingWorldEncounter*> */ __um(Encounter);                // 0x0368   (0x0020)  
	TArray<class UClass*>                              PointProviderClasses;                                       // 0x0388   (0x0010)  
	bool                                               bRegisterReservoir;                                         // 0x0398   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0399   (0x0007)  MISSED
};

/// Struct /Script/JunoAIRuntime.JunoAICampManagementVisitorsConfiguration
/// Size: 0x0030 (0x000000 - 0x000030)
struct FJunoAICampManagementVisitorsConfiguration
{ 
	class UDataTable*                                  PossibleVisitorsDataTable;                                  // 0x0000   (0x0008)  
	FScalableFloat                                     InitialInGameHoursDelay;                                    // 0x0008   (0x0028)  
};

/// Class /Script/JunoAIRuntime.JunoCampAIManagementComponent
/// Size: 0x0728 (0x0000A0 - 0x0007C8)
class UJunoCampAIManagementComponent : public UJunoCampComponentBase
{ 
public:
	unsigned char                                      UnknownData00_3[0x118];                                     // 0x00A0   (0x0118)  MISSED
	SDK_UNDEFINED(16,14389) /* TArray<TScriptInterface<Class>> */ __um(PointProviders);                            // 0x01B8   (0x0010)  
	class UFortAthenaLivingWorldEncounterInstance*     Encounter;                                                  // 0x01C8   (0x0008)  
	FJunoAICampManagementVisitorsConfigurationDigested VisitorsConfigurationDigested;                              // 0x01D0   (0x0018)  
	FJunoAICampManagementVisitorsPickingConfiguration  CachedVisitorsPickingConfigurationAtCurrentAwesomenessLevel; // 0x01E8   (0x0020)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0208   (0x0008)  MISSED
	FJunoAICampManagementLWMConfiguration              LWMConfiguration;                                           // 0x0210   (0x03A0)  
	FJunoAICampManagementVisitorsConfiguration         VisitorsConfiguration;                                      // 0x05B0   (0x0030)  
	SDK_UNDEFINED(80,14390) /* TMap<int32_t, FDataTableRowHandle> */ __um(AwesomenessLevelToVisitorsPickingConfiguration); // 0x05E0   (0x0050)  
	SDK_UNDEFINED(80,14391) /* TMap<int32_t, UDataTable*> */ __um(AwesomenessLevelToNPCRewards);                   // 0x0630   (0x0050)  
	FScalableFloat                                     InitialIngameHoursDelayBeforeFirstRewardRoll;               // 0x0680   (0x0028)  
	FScalableFloat                                     MinimumIngameHoursBetweenRewardRolls;                       // 0x06A8   (0x0028)  
	FScalableFloat                                     PassiveResourceGatheringTime;                               // 0x06D0   (0x0028)  
	FScalableFloat                                     MultiplierForSimulatedGeneration;                           // 0x06F8   (0x0028)  
	FScalableFloat                                     MaximumAllocableSOPerAIForSimulation;                       // 0x0720   (0x0028)  
	FNavAgentSelector                                  SupportedAgents;                                            // 0x0748   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x074C   (0x0004)  MISSED
	FScalableFloat                                     ShouldCheckWCForRemoteRecruitment;                          // 0x0750   (0x0028)  
	FScalableFloat                                     RequireNPCToBeInVisitorsListForRemoteRecruitment;           // 0x0778   (0x0028)  
	FScalableFloat                                     SpawnDelayFromCampSpawn;                                    // 0x07A0   (0x0028)  
};

/// Class /Script/JunoAIRuntime.JunoCaveLivingWorldEventData
/// Size: 0x0058 (0x000150 - 0x0001A8)
class UJunoCaveLivingWorldEventData : public UFortAthenaLivingWorldEventData
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0150   (0x0008)  MISSED
	FScalableFloat                                     CaveRoomDistanceMin;                                        // 0x0158   (0x0028)  
	FScalableFloat                                     CaveRoomDistanceMax;                                        // 0x0180   (0x0028)  
};

/// Class /Script/JunoAIRuntime.JunoAIFTUEEndWorldConditionSchema
/// Size: 0x0000 (0x000038 - 0x000038)
class UJunoAIFTUEEndWorldConditionSchema : public UWorldConditionSchema
{ 
public:
};

/// Struct /Script/JunoAIRuntime.JunoAIGlobalLWMConfiguration
/// Size: 0x0390 (0x000000 - 0x000390)
struct FJunoAIGlobalLWMConfiguration
{ 
	FFortAthenaLivingWorldEvent                        EventTemplate;                                              // 0x0000   (0x01B0)  
	FFortAthenaLivingWorldEventDataActorSpawnDescription SpawnDescriptionTemplate;                                 // 0x01B0   (0x0130)  
	FPointProviderFilterEntry                          FilterEntry;                                                // 0x02E0   (0x0088)  
	SDK_UNDEFINED(32,14392) /* TWeakObjectPtr<UFortAthenaLivingWorldEncounter*> */ __um(Encounter);                // 0x0368   (0x0020)  
	bool                                               bRegisterReservoir;                                         // 0x0388   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0389   (0x0007)  MISSED
};

/// Struct /Script/JunoAIRuntime.JunoAIFollowerLWMConfiguration
/// Size: 0x0010 (0x000390 - 0x0003A0)
struct FJunoAIFollowerLWMConfiguration : FJunoAIGlobalLWMConfiguration
{ 
	TArray<class UClass*>                              PointProviderClasses;                                       // 0x0390   (0x0010)  
};

/// Struct /Script/JunoAIRuntime.JunoAISinglePointProviderEncounterLWMConfiguration
/// Size: 0x0008 (0x000390 - 0x000398)
struct FJunoAISinglePointProviderEncounterLWMConfiguration : FJunoAIGlobalLWMConfiguration
{ 
	class UClass*                                      PointProviderClass;                                         // 0x0390   (0x0008)  
};

/// Struct /Script/JunoAIRuntime.JunoAITemporaryGlobalEncounterLWMConfiguration
/// Size: 0x0000 (0x000398 - 0x000398)
struct FJunoAITemporaryGlobalEncounterLWMConfiguration : FJunoAISinglePointProviderEncounterLWMConfiguration
{ 
};

/// Struct /Script/JunoAIRuntime.JunoAIFTUEConfiguration
/// Size: 0x00E8 (0x000398 - 0x000480)
struct FJunoAIFTUEConfiguration : FJunoAISinglePointProviderEncounterLWMConfiguration
{ 
	FGameplayTagQuery                                  PossibleFTUEDescriptorTagQuery;                             // 0x0398   (0x0048)  
	TArray<class UClass*>                              GEsToAddToFTUENPC;                                          // 0x03E0   (0x0010)  
	FWorldConditionQueryDefinition                     EndConditions;                                              // 0x03F0   (0x0018)  
	FScalableFloat                                     CustomLeashInnerRadius;                                     // 0x0408   (0x0028)  
	FScalableFloat                                     CustomLeashOuterRadius;                                     // 0x0430   (0x0028)  
	FScalableFloat                                     SpawnDelay;                                                 // 0x0458   (0x0028)  
};

/// Struct /Script/JunoAIRuntime.JunoAIFollowerManagedData
/// Size: 0x0098 (0x000000 - 0x000098)
struct FJunoAIFollowerManagedData
{ 
	FUniqueNetIdRepl                                   PlayerId;                                                   // 0x0000   (0x0030)  
	class UFortAthenaLivingWorldEncounterInstance*     Encounter;                                                  // 0x0030   (0x0008)  
	SDK_UNDEFINED(16,14393) /* TArray<TScriptInterface<Class>> */ __um(PointProviders);                            // 0x0038   (0x0010)  
	unsigned char                                      UnknownData00_6[0x50];                                      // 0x0048   (0x0050)  MISSED
};

/// Class /Script/JunoAIRuntime.PlayspaceComponent_Root_JunoAIManagement
/// Size: 0x0E60 (0x0000F8 - 0x000F58)
class UPlayspaceComponent_Root_JunoAIManagement : public UFortPlayspaceComponent
{ 
public:
	FJunoAIFollowerLWMConfiguration                    LWMConfiguration;                                           // 0x00F8   (0x03A0)  
	FJunoAITemporaryGlobalEncounterLWMConfiguration    TemporaryGlobalEncounterLWMConfiguration;                   // 0x0498   (0x0398)  
	FJunoAIFTUEConfiguration                           FTUEConfiguration;                                          // 0x0830   (0x0480)  
	FScalableFloat                                     MaxNoInteractionTimeBeforeSoftRemovalInJunoGameTimeHours;   // 0x0CB0   (0x0028)  
	FScalableFloat                                     TimeBeforeSoftRemovedAIBecomesHardRemovedInJunoGameTimeHours; // 0x0CD8   (0x0028)  
	FScalableFloat                                     TimeToRemoveStaleFollowersFromDisconnectedPlayersInRealHours; // 0x0D00   (0x0028)  
	FScalableFloat                                     SecondsToWaitBeforeRemovingStaleFollowers;                  // 0x0D28   (0x0028)  
	FScalableFloat                                     GlobalRecruitableNPCsCap;                                   // 0x0D50   (0x0028)  
	unsigned char                                      UnknownData00_5[0x20];                                      // 0x0D78   (0x0020)  MISSED
	TArray<FJunoAIFollowerManagedData>                 ManagedFollowers;                                           // 0x0D98   (0x0010)  
	SDK_UNDEFINED(16,14394) /* TScriptInterface<Class> */ __um(TemporaryGlobalEncounterPointProvider);             // 0x0DA8   (0x0010)  
	class UFortAthenaLivingWorldEncounterInstance*     TemporaryGlobalEncounter;                                   // 0x0DB8   (0x0008)  
	SDK_UNDEFINED(16,14395) /* TScriptInterface<Class> */ __um(FTUEEncounterPointProvider);                        // 0x0DC0   (0x0010)  
	class UFortAthenaLivingWorldEncounterInstance*     FTUEEncounter;                                              // 0x0DD0   (0x0008)  
	FWorldConditionQueryState                          FTUEEndQueryState;                                          // 0x0DD8   (0x0030)  
	unsigned char                                      UnknownData01_5[0xB0];                                      // 0x0E08   (0x00B0)  MISSED
	SDK_UNDEFINED(80,14396) /* TMap<FGameplayTag, FJunoAIWorldNPCSpawningData> */ __um(WorldAssignedNPCs);         // 0x0EB8   (0x0050)  
	unsigned char                                      UnknownData02_6[0x50];                                      // 0x0F08   (0x0050)  MISSED


	/// Functions
	// Function /Script/JunoAIRuntime.PlayspaceComponent_Root_JunoAIManagement.HandleFTUENPCSpawned
	// void HandleFTUENPCSpawned(class AActor* FTUENPC);                                                                     // [0xb3aff58] Final|Native|Private 
};

/// Class /Script/JunoAIRuntime.JunoAISafetyBubbleComponent
/// Size: 0x00A8 (0x0000A0 - 0x000148)
class UJunoAISafetyBubbleComponent : public UActorComponent
{ 
public:
	TArray<FFortAthenaLivingWorldEventTagDensityRegistration> TagsData;                                            // 0x00A0   (0x0010)  
	FScalableFloat                                     InGameHoursDuration;                                        // 0x00B0   (0x0028)  
	FScalableFloat                                     SafetyBubbleRadius;                                         // 0x00D8   (0x0028)  
	unsigned char                                      UnknownData00_6[0x48];                                      // 0x0100   (0x0048)  MISSED


	/// Functions
	// Function /Script/JunoAIRuntime.JunoAISafetyBubbleComponent.OnTimeOfDayPhaseChanged
	// void OnTimeOfDayPhaseChanged(EFortDayPhase CurrentDayPhase, EFortDayPhase PreviousDayPhase, bool bAtCreation);        // [0xb3affd8] Final|Native|Protected 
};

/// Class /Script/JunoAIRuntime.EnvQueryTest_JunoIsNearBuilding
/// Size: 0x00A0 (0x0001F8 - 0x000298)
class UEnvQueryTest_JunoIsNearBuilding : public UEnvQueryTest
{ 
public:
	FEnvOverlapData                                    OverlapData;                                                // 0x01F8   (0x0030)  
	FAIDataProviderBoolValue                           GenerateOnlyInsideClusterBounds;                            // 0x0228   (0x0038)  
	FAIDataProviderFloatValue                          MinimumBuildingClusterVolume;                               // 0x0260   (0x0038)  
};

/// Class /Script/JunoAIRuntime.EnvQueryTest_JunoIsUnderCeiling
/// Size: 0x0068 (0x0001F8 - 0x000260)
class UEnvQueryTest_JunoIsUnderCeiling : public UEnvQueryTest
{ 
public:
	FEnvOverlapData                                    SweepData;                                                  // 0x01F8   (0x0030)  
	FAIDataProviderFloatValue                          SweepHeight;                                                // 0x0228   (0x0038)  
};

/// Class /Script/JunoAIRuntime.JunoAIBotEvaluator_ReactToVerb
/// Size: 0x0010 (0x0003F0 - 0x000400)
class UJunoAIBotEvaluator_ReactToVerb : public UFortAthenaAIBotEvaluator_ReactToVerb
{ 
public:
	FName                                              MoodReactionTagKeyName;                                     // 0x03F0   (0x0004)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x03F4   (0x000C)  MISSED
};

/// Class /Script/JunoAIRuntime.JunoAICheatManager
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoAICheatManager : public UChildCheatManager
{ 
public:


	/// Functions
	// Function /Script/JunoAIRuntime.JunoAICheatManager.JunoEnableHostileCreatures
	// void JunoEnableHostileCreatures(bool bEnable);                                                                        // [0x63fe5cc] Final|BlueprintAuthorityOnly|Exec|Native|Private 
	// Function /Script/JunoAIRuntime.JunoAICheatManager.JunoEnableFriendlyNPCs
	// void JunoEnableFriendlyNPCs(bool bEnable);                                                                            // [0x63fe5cc] Final|BlueprintAuthorityOnly|Exec|Native|Private 
	// Function /Script/JunoAIRuntime.JunoAICheatManager.JunoEnableFriendlyCreatures
	// void JunoEnableFriendlyCreatures(bool bEnable);                                                                       // [0x63fe5cc] Final|BlueprintAuthorityOnly|Exec|Native|Private 
};

/// Class /Script/JunoAIRuntime.PlayspaceComponent_JunoAISafetyBubble
/// Size: 0x0010 (0x0000F8 - 0x000108)
class UPlayspaceComponent_JunoAISafetyBubble : public UFortPlayspaceComponent
{ 
public:
	class UClass*                                      SafetyBubbleComponent;                                      // 0x00F8   (0x0008)  
	bool                                               bPreventSafetyBubbleInCamp;                                 // 0x0100   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0101   (0x0007)  MISSED
};

/// Struct /Script/JunoAIRuntime.JunoMoveConfig
/// Size: 0x000C (0x000000 - 0x00000C)
struct FJunoMoveConfig
{ 
	unsigned char                                      UnknownData00_2[0xC];                                       // 0x0000   (0x000C)  MISSED
};

/// Class /Script/JunoAIRuntime.AITask_JunoMoveTo
/// Size: 0x0018 (0x000118 - 0x000130)
class UAITask_JunoMoveTo : public UAITask_MoveTo
{ 
public:
	FJunoMoveConfig                                    MoveConfig;                                                 // 0x0118   (0x000C)  
	SDK_UNDEFINED(8,14397) /* TWeakObjectPtr<AActor*> */ __um(BlockedByActor);                                     // 0x0124   (0x0008)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x012C   (0x0004)  MISSED
};

/// Class /Script/JunoAIRuntime.BTTask_JunoMoveTo
/// Size: 0x00B8 (0x0000C0 - 0x000178)
class UBTTask_JunoMoveTo : public UFortAthenaBTTask_MoveTo
{ 
public:
	bool                                               bOnUnreachableGoalFindBlockingBuilding : 1;                 // 0x00C0:0 (0x0001)  
	bool                                               bAssignFoundBlockingBuildingAsTarget : 1;                   // 0x00C0:1 (0x0001)  
	unsigned char                                      UnknownData00_4[0x7];                                       // 0x00C1   (0x0007)  MISSED
	FScalableFloat                                     BlockingBuildingTraceDistance;                              // 0x00C8   (0x0028)  
	FScalableFloat                                     BlockingBuildingTraceCooldown;                              // 0x00F0   (0x0028)  
	FBlackboardKeySelector                             BlockedByBuildingKeySelector;                               // 0x0118   (0x0028)  
	FBlackboardKeySelector                             LastBlockingBuildingTraceTimeKeySelector;                   // 0x0140   (0x0028)  
	SDK_UNDEFINED(1,14398) /* TEnumAsByte<EPathObstacleAction> */ __um(PathObstacleAction);                        // 0x0168   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0169   (0x0003)  MISSED
	bool                                               bApplyCostLimit : 1;                                        // 0x016C:0 (0x0001)  
	unsigned char                                      UnknownData02_4[0x3];                                       // 0x016D   (0x0003)  MISSED
	float                                              PathingCostLimitFactor;                                     // 0x0170   (0x0004)  
	float                                              PathingMinimumCostLimit;                                    // 0x0174   (0x0004)  
};

/// Class /Script/JunoAIRuntime.JunoWorldCondition_AIWorldSettings_State
/// Size: 0x0028 (0x000028 - 0x000050)
class UJunoWorldCondition_AIWorldSettings_State : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x50];                                      // 0x0000   (0x0050)  MISSED
};

/// Struct /Script/JunoAIRuntime.JunoNPCValidItemRow
/// Size: 0x0020 (0x000008 - 0x000028)
struct FJunoNPCValidItemRow : FTableRowBase
{ 
	class UFortItemDefinition*                         ValidItem;                                                  // 0x0008   (0x0008)  
	SDK_UNDEFINED(16,14399) /* FString */              __um(ValidItemPersistentName);                              // 0x0010   (0x0010)  
	bool                                               bCanBeEquippedAsMainWeapon;                                 // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0021   (0x0007)  MISSED
};

/// Struct /Script/JunoAIRuntime.ValidItemSlotConfiguration
/// Size: 0x0010 (0x000000 - 0x000010)
struct FValidItemSlotConfiguration
{ 
	class UDataTable*                                  ValidItemsTable;                                            // 0x0000   (0x0008)  
	FGameplayTag                                       TagToApplyWhenMissingItem;                                  // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
};

/// Struct /Script/JunoAIRuntime.JunoNPCValidItems
/// Size: 0x0070 (0x000000 - 0x000070)
struct FJunoNPCValidItems
{ 
	TArray<class UFortItemDefinition*>                 CachedListOfUnequippableWeapons;                            // 0x0050   (0x0010)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0060   (0x0010)  MISSED
};

/// Struct /Script/JunoAIRuntime.JunoAICampManagementNPCRewardRecipe
/// Size: 0x0028 (0x000000 - 0x000028)
struct FJunoAICampManagementNPCRewardRecipe
{ 
	SDK_UNDEFINED(32,14400) /* TWeakObjectPtr<UJunoBuildInstructionsItemDefinition*> */ __um(KnowledgeItemDefinition); // 0x0000   (0x0020)  
	EJunoKnowledgeState                                NewState;                                                   // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0021   (0x0007)  MISSED
};

/// Struct /Script/JunoAIRuntime.JunoAICampManagementNPCReward
/// Size: 0x0040 (0x000008 - 0x000048)
struct FJunoAICampManagementNPCReward : FTableRowBase
{ 
	bool                                               bAlwaysPick;                                                // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0009   (0x0003)  MISSED
	float                                              PickWeight;                                                 // 0x000C   (0x0004)  
	FWorldConditionQueryDefinition                     SelectionPreconditions;                                     // 0x0010   (0x0018)  
	ENPCRewardType                                     RewardType;                                                 // 0x0028   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0029   (0x0003)  MISSED
	int32_t                                            MaximumPickAmount;                                          // 0x002C   (0x0004)  
	FName                                              MaximumPickSaveName;                                        // 0x0030   (0x0004)  
	FName                                              LootTierGroup;                                              // 0x0034   (0x0004)  
	TArray<FJunoAICampManagementNPCRewardRecipe>       Recipes;                                                    // 0x0038   (0x0010)  
};

/// Struct /Script/JunoAIRuntime.JunoAICampManagementVisitorConfiguration
/// Size: 0x0020 (0x000008 - 0x000028)
struct FJunoAICampManagementVisitorConfiguration : FTableRowBase
{ 
	FGameplayTag                                       UniqueAIIdentifier;                                         // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	FWorldConditionQueryDefinition                     SelectionPreconditions;                                     // 0x0010   (0x0018)  
};

/// Struct /Script/JunoAIRuntime.JunoIsVillagerProviderExpiredStateTreeTaskInstanceData
/// Size: 0x0018 (0x000000 - 0x000018)
struct FJunoIsVillagerProviderExpiredStateTreeTaskInstanceData
{ 
	SDK_UNDEFINED(8,14401) /* TWeakObjectPtr<AFortAthenaLivingWorldStaticPointProvider*> */ __um(VillagerProvider); // 0x0000   (0x0008)  
	bool                                               bIsExpired;                                                 // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0009   (0x0007)  MISSED
	class AActor*                                      UserActor;                                                  // 0x0010   (0x0008)  
};

/// Struct /Script/JunoAIRuntime.JunoIsVillagerProviderExpiredStateTreeTask
/// Size: 0x0000 (0x000020 - 0x000020)
struct FJunoIsVillagerProviderExpiredStateTreeTask : FStateTreeTaskCommonBase
{ 
};

/// Struct /Script/JunoAIRuntime.JunoNPCVerbReactionTableRow
/// Size: 0x0008 (0x000078 - 0x000080)
struct FJunoNPCVerbReactionTableRow : FFortNPCVerbReactionTableRow
{ 
	FGameplayTag                                       MoodReactionTag;                                            // 0x0078   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x007C   (0x0004)  MISSED
};

/// Struct /Script/JunoAIRuntime.JunoResetVillagerProviderTimerStateTreeTaskInstanceData
/// Size: 0x0040 (0x000000 - 0x000040)
struct FJunoResetVillagerProviderTimerStateTreeTaskInstanceData
{ 
	SDK_UNDEFINED(8,14402) /* TWeakObjectPtr<AFortAthenaLivingWorldStaticPointProvider*> */ __um(VillagerProvider); // 0x0000   (0x0008)  
	SDK_UNDEFINED(8,14403) /* TWeakObjectPtr<AActor*> */ __um(Villager);                                           // 0x0008   (0x0008)  
	FScalableFloat                                     ResetDuration;                                              // 0x0010   (0x0028)  
	class AActor*                                      UserActor;                                                  // 0x0038   (0x0008)  
};

/// Struct /Script/JunoAIRuntime.JunoResetVillagerProviderTimerStateTreeTask
/// Size: 0x0000 (0x000020 - 0x000020)
struct FJunoResetVillagerProviderTimerStateTreeTask : FStateTreeTaskCommonBase
{ 
};

/// Struct /Script/JunoAIRuntime.JunoWorldConditionAILocalCampChecks
/// Size: 0x0028 (0x000010 - 0x000038)
struct FJunoWorldConditionAILocalCampChecks : FWorldConditionCommonActorBase
{ 
	FWorldConditionContextDataRef                      ActorRef;                                                   // 0x0010   (0x0008)  
	int32_t                                            RequiredNPCsSlots;                                          // 0x0018   (0x0004)  
	EJunoWorldConditionNPCSlotsLimit                   PotentialSlotCap;                                           // 0x001C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x001D   (0x0003)  MISSED
	float                                              MinimumRemainingNPCSoftRemovalTimeInJunoHours;              // 0x0020   (0x0004)  
	FGameplayTag                                       HasGatheringActorUsableByRole;                              // 0x0024   (0x0004)  
	FWorldConditionContextDataRef                      HasGatheringActorUsableByActorRef;                          // 0x0028   (0x0008)  
	bool                                               bRequireGatheringActorToBeActive;                           // 0x0030   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0031   (0x0007)  MISSED
};

/// Struct /Script/JunoAIRuntime.JunoWorldConditionHitGlobalNPCsCap
/// Size: 0x0008 (0x000010 - 0x000018)
struct FJunoWorldConditionHitGlobalNPCsCap : FWorldConditionCommonBase
{ 
	int32_t                                            RequiredSpaceInGlobalCap;                                   // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/JunoAIRuntime.JunoWorldConditionNearestCampChecks
/// Size: 0x0038 (0x000010 - 0x000048)
struct FJunoWorldConditionNearestCampChecks : FWorldConditionCommonActorBase
{ 
	int32_t                                            RequiredCamps;                                              // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0014   (0x0004)  MISSED
	FScalableFloat                                     MaxDistanceFromCamp;                                        // 0x0018   (0x0028)  
	FWorldConditionContextDataRef                      ActorRef;                                                   // 0x0040   (0x0008)  
};

/// Struct /Script/JunoAIRuntime.JunoWorldConditionNPCCampReward
/// Size: 0x0008 (0x000010 - 0x000018)
struct FJunoWorldConditionNPCCampReward : FWorldConditionCommonActorBase
{ 
	FWorldConditionContextDataRef                      AIRef;                                                      // 0x0010   (0x0008)  
};

/// Struct /Script/JunoAIRuntime.JunoWorldCondition_IsInTemporaryGlobalEncounter
/// Size: 0x0008 (0x000010 - 0x000018)
struct FJunoWorldCondition_IsInTemporaryGlobalEncounter : FWorldConditionCommonBase
{ 
	FGameplayTag                                       NPCGameplayTag;                                             // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/JunoAIRuntime.JunoAIWorldNPCSpawningData
/// Size: 0x0028 (0x000000 - 0x000028)
struct FJunoAIWorldNPCSpawningData
{ 
	SDK_UNDEFINED(8,14404) /* TWeakObjectPtr<UObject*> */ __um(AssignedPointProvider);                             // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_5[0x10];                                      // 0x0008   (0x0010)  MISSED
	SDK_UNDEFINED(8,14405) /* TWeakObjectPtr<UFortAthenaLivingWorldEventData*> */ __um(EventData);                 // 0x0018   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0020   (0x0008)  MISSED
};

/// Struct /Script/JunoAIRuntime.JunoUniqueNPCLivingWorldPointProviderSelector
/// Size: 0x0070 (0x000008 - 0x000078)
struct FJunoUniqueNPCLivingWorldPointProviderSelector : FFortAthenaLivingWorldPointProviderSelector
{ 
	FGameplayTag                                       NPCGameplayTag;                                             // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	FScalableFloat                                     InitialPersistenceDuration;                                 // 0x0010   (0x0028)  
	FScalableFloat                                     RespawnPersistenceDuration;                                 // 0x0038   (0x0028)  
	SDK_UNDEFINED(8,14406) /* TWeakObjectPtr<UFortAthenaLivingWorldEventData*> */ __um(EventData);                 // 0x0060   (0x0008)  
	SDK_UNDEFINED(8,14407) /* TWeakObjectPtr<UPlayspaceComponent_Root_JunoAIManagement*> */ __um(CachedRootJunoAIManagement); // 0x0068   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0070   (0x0008)  MISSED
};

/// Struct /Script/JunoAIRuntime.JunoVillagerSpawnerDataSelector
/// Size: 0x0098 (0x000008 - 0x0000A0)
struct FJunoVillagerSpawnerDataSelector : FFortAthenaLivingWorldSpawnerDataSelector
{ 
	SDK_UNDEFINED(8,14408) /* TWeakObjectPtr<UPlayspaceComponent_JunoAIPersistence*> */ __um(CachedRootAIPersistence); // 0x0008   (0x0008)  
	FGameplayTagQuery                                  SpawnerDataToFilter;                                        // 0x0010   (0x0048)  
	FGameplayTagQuery                                  RoleMustMatchQuery;                                         // 0x0058   (0x0048)  
};

/// Struct /Script/JunoAIRuntime.JunoWorldCondition_AIWorldSettings
/// Size: 0x0010 (0x000010 - 0x000020)
struct FJunoWorldCondition_AIWorldSettings : FWorldConditionCommonBase
{ 
	EJunoWorldCondition_AIWorldSettingsExpectedValue   FriendlyCreatures;                                          // 0x0010   (0x0004)  
	EJunoWorldCondition_AIWorldSettingsExpectedValue   HostileCreatures;                                           // 0x0014   (0x0004)  
	EJunoWorldCondition_AIWorldSettingsExpectedValue   FriendlyNPCs;                                               // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x001C   (0x0004)  MISSED
};

