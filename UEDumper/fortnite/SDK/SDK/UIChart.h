
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CommonInput
/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: DynamicUI
/// dependency: Engine
/// dependency: GameplayTags
/// dependency: ModelViewViewModel

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

/// Class /Script/UIChart.UIStateSettings
/// Size: 0x0018 (0x000030 - 0x000048)
class UUIStateSettings : public UDeveloperSettings
{ 
public:
	float                                              StateLoadTimeout;                                           // 0x0030   (0x0004)  
	float                                              StateUnloadTimeout;                                         // 0x0034   (0x0004)  
	float                                              WidgetStateComponentLoadTimeout;                            // 0x0038   (0x0004)  
	float                                              WidgetStateComponentUnloadTimeout;                          // 0x003C   (0x0004)  
	EWidgetStateComponentUnloadDefaultBehavior         WidgetStateComponentDefaultUnloadBehavior;                  // 0x0040   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0044   (0x0004)  MISSED
};

/// Class /Script/UIChart.UIStateComponent
/// Size: 0x0020 (0x000028 - 0x000048)
class UUIStateComponent : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	EStateComponentStatus                              Status;                                                     // 0x0028   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x002C   (0x0004)  MISSED
	class UUIStateComponentConfiguration*              ComponentConfiguration;                                     // 0x0030   (0x0008)  
	class UUIState*                                    OwningState;                                                // 0x0038   (0x0008)  
	class UUIStateChartRegion*                         StateChartRegion;                                           // 0x0040   (0x0008)  
};

/// Class /Script/UIChart.CommonUIContextUpdaterUIStateComponent
/// Size: 0x0000 (0x000048 - 0x000048)
class UCommonUIContextUpdaterUIStateComponent : public UUIStateComponent
{ 
public:
};

/// Class /Script/UIChart.UIStateComponentConfiguration
/// Size: 0x0000 (0x000028 - 0x000028)
class UUIStateComponentConfiguration : public UObject
{ 
public:
};

/// Class /Script/UIChart.CommonUIContextUpdaterUIStateComponentConfiguration
/// Size: 0x0000 (0x000028 - 0x000028)
class UCommonUIContextUpdaterUIStateComponentConfiguration : public UUIStateComponentConfiguration
{ 
public:
};

/// Class /Script/UIChart.ContextSetterUIStateComponent
/// Size: 0x0008 (0x000048 - 0x000050)
class UContextSetterUIStateComponent : public UUIStateComponent
{ 
public:
	class UContextSetterUIStateComponentConfiguration* Configuration;                                              // 0x0048   (0x0008)  
};

/// Struct /Script/UIChart.ContextSetterSetEntry
/// Size: 0x0018 (0x000000 - 0x000018)
struct FContextSetterSetEntry
{ 
	FGameplayTag                                       Key;                                                        // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	SDK_UNDEFINED(16,13203) /* FString */              __um(Value);                                                // 0x0008   (0x0010)  
};

/// Struct /Script/UIChart.ContextSetterClearEntry
/// Size: 0x0004 (0x000000 - 0x000004)
struct FContextSetterClearEntry
{ 
	FGameplayTag                                       Key;                                                        // 0x0000   (0x0004)  
};

/// Struct /Script/UIChart.ContextSetterChanges
/// Size: 0x0020 (0x000000 - 0x000020)
struct FContextSetterChanges
{ 
	TArray<FContextSetterSetEntry>                     ValuesToSet;                                                // 0x0000   (0x0010)  
	TArray<FContextSetterClearEntry>                   ValuesToClear;                                              // 0x0010   (0x0010)  
};

/// Class /Script/UIChart.ContextSetterUIStateComponentConfiguration
/// Size: 0x0040 (0x000028 - 0x000068)
class UContextSetterUIStateComponentConfiguration : public UUIStateComponentConfiguration
{ 
public:
	FContextSetterChanges                              ActivationChanges;                                          // 0x0028   (0x0020)  
	FContextSetterChanges                              DeactivationChanges;                                        // 0x0048   (0x0020)  
};

/// Class /Script/UIChart.GlobalViewModelUIStateComponent
/// Size: 0x0060 (0x000048 - 0x0000A8)
class UGlobalViewModelUIStateComponent : public UUIStateComponent
{ 
public:
	class UGlobalViewModelUIStateComponentConfiguration* Configuration;                                            // 0x0048   (0x0008)  
	SDK_UNDEFINED(80,13204) /* TSet<FGameplayTag> */   __um(ConditionContextKeys);                                 // 0x0050   (0x0050)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x00A0   (0x0008)  MISSED
};

/// Struct /Script/UIChart.UIStateChartContextCondition
/// Size: 0x0018 (0x000000 - 0x000018)
struct FUIStateChartContextCondition
{ 
	FGameplayTag                                       Key;                                                        // 0x0000   (0x0004)  
	EUIStateChartContextConditionType                  ConditionType;                                              // 0x0004   (0x0004)  
	SDK_UNDEFINED(16,13205) /* FString */              __um(ComparisonConstant);                                   // 0x0008   (0x0010)  
};

/// Class /Script/UIChart.GlobalViewModelUIStateComponentConfiguration
/// Size: 0x0020 (0x000028 - 0x000048)
class UGlobalViewModelUIStateComponentConfiguration : public UUIStateComponentConfiguration
{ 
public:
	TArray<FMVVMViewModelContext>                      ViewModelContexts;                                          // 0x0028   (0x0010)  
	TArray<FUIStateChartContextCondition>              ContextConditions;                                          // 0x0038   (0x0010)  
};

/// Class /Script/UIChart.StackingUIStateComponent
/// Size: 0x0008 (0x000048 - 0x000050)
class UStackingUIStateComponent : public UUIStateComponent
{ 
public:
	EStateChartResourceScope                           StackScope;                                                 // 0x0048   (0x0004)  
	bool                                               bAlwaysRemoveStackingBehavior;                              // 0x004C   (0x0001)  
	bool                                               bIsOnStack;                                                 // 0x004D   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x004E   (0x0002)  MISSED
};

/// Class /Script/UIChart.InputConfigUIStateComponent
/// Size: 0x0008 (0x000050 - 0x000058)
class UInputConfigUIStateComponent : public UStackingUIStateComponent
{ 
public:
	class UInputConfigUIStateComponentConfiguration*   Configuration;                                              // 0x0050   (0x0008)  
};

/// Class /Script/UIChart.InputConfigUIStateComponentConfiguration
/// Size: 0x0008 (0x000028 - 0x000030)
class UInputConfigUIStateComponentConfiguration : public UUIStateComponentConfiguration
{ 
public:
	ECommonInputMode                                   InputMode;                                                  // 0x0028   (0x0001)  
	EMouseCaptureMode                                  MouseCaptureMode;                                           // 0x0029   (0x0001)  
	bool                                               bHideCursorDuringCapture;                                   // 0x002A   (0x0001)  
	bool                                               bIgnoreLookInput;                                           // 0x002B   (0x0001)  
	bool                                               bIgnoreMovementInput;                                       // 0x002C   (0x0001)  
	bool                                               bFlushPlayerInputWhenActivating;                            // 0x002D   (0x0001)  
	bool                                               bFlushPlayerInputWhenDeactivating;                          // 0x002E   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x002F   (0x0001)  MISSED
};

/// Class /Script/UIChart.SceneUIStateComponent
/// Size: 0x0068 (0x000048 - 0x0000B0)
class USceneUIStateComponent : public UUIStateComponent
{ 
public:
	class USceneUIStateComponentConfiguration*         Configuration;                                              // 0x0048   (0x0008)  
	SDK_UNDEFINED(80,13206) /* TSet<FGameplayTag> */   __um(ConditionContextKeys);                                 // 0x0050   (0x0050)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x00A0   (0x0010)  MISSED
};

/// Class /Script/UIChart.SceneUIStateComponentConfiguration
/// Size: 0x0018 (0x000028 - 0x000040)
class USceneUIStateComponentConfiguration : public UUIStateComponentConfiguration
{ 
public:
	class UDynamicUIScene*                             Scene;                                                      // 0x0028   (0x0008)  
	TArray<FUIStateChartContextCondition>              ContextConditions;                                          // 0x0030   (0x0010)  
};

/// Class /Script/UIChart.SplitScreenUIStateComponentBase
/// Size: 0x0068 (0x000048 - 0x0000B0)
class USplitScreenUIStateComponentBase : public UUIStateComponent
{ 
public:
	class USplitScreenUIStateComponentBaseConfiguration* BaseConfiguration;                                        // 0x0048   (0x0008)  
	SDK_UNDEFINED(80,13207) /* TMap<ULocalPlayer*, int32_t> */ __um(ChildStateCharts);                             // 0x0050   (0x0050)  
	TArray<int32_t>                                    DeactivatingStateCharts;                                    // 0x00A0   (0x0010)  
};

/// Class /Script/UIChart.SplitScreenUIStateComponentBaseConfiguration
/// Size: 0x0058 (0x000028 - 0x000080)
class USplitScreenUIStateComponentBaseConfiguration : public UUIStateComponentConfiguration
{ 
public:
	class UUIStateChart*                               PlayerStateChart;                                           // 0x0028   (0x0008)  
	bool                                               bIgnoreTransitionParametersOnActivation;                    // 0x0030   (0x0001)  
	EUIStateTransitionUrgency                          UrgencyOnPlayerAdd;                                         // 0x0031   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x0032   (0x0006)  MISSED
	FGameplayTagContainer                              AnimationHintsOnPlayerAdd;                                  // 0x0038   (0x0020)  
	bool                                               bIgnoreTransitionParametersOnDeactivation;                  // 0x0058   (0x0001)  
	EUIStateTransitionUrgency                          UrgencyOnPlayerRemove;                                      // 0x0059   (0x0001)  
	unsigned char                                      UnknownData01_5[0x6];                                       // 0x005A   (0x0006)  MISSED
	FGameplayTagContainer                              AnimationHintsOnPlayerRemove;                               // 0x0060   (0x0020)  
};

/// Class /Script/UIChart.StackingUIStateComponentSharedData
/// Size: 0x0050 (0x000028 - 0x000078)
class UStackingUIStateComponentSharedData : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	SDK_UNDEFINED(80,13208) /* TMap<UClass*, FUIStateComponentInstanceStack> */ __um(InstanceStacks);              // 0x0028   (0x0050)  
};

/// Struct /Script/UIChart.UIStateConfigurationChildReference
/// Size: 0x0004 (0x000000 - 0x000004)
struct FUIStateConfigurationChildReference
{ 
	int32_t                                            ChildStateId;                                               // 0x0000   (0x0004)  
};

/// Struct /Script/UIChart.UIStateAutomationRule
/// Size: 0x0018 (0x000000 - 0x000018)
struct FUIStateAutomationRule
{ 
	TArray<FUIStateChartContextCondition>              ContextConditions;                                          // 0x0000   (0x0010)  
	FUIStateConfigurationChildReference                ChildStateReference;                                        // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Class /Script/UIChart.UIStateConfiguration
/// Size: 0x0088 (0x000028 - 0x0000B0)
class UUIStateConfiguration : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	SDK_UNDEFINED(16,13209) /* FString */              __um(Name);                                                 // 0x0028   (0x0010)  
	FGameplayTagContainer                              StateTags;                                                  // 0x0038   (0x0020)  
	int32_t                                            ID;                                                         // 0x0058   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x005C   (0x0004)  MISSED
	TArray<class UUIStateConfiguration*>               Children;                                                   // 0x0060   (0x0010)  
	TArray<class UUIStateConfiguration*>               ParallelRegions;                                            // 0x0070   (0x0010)  
	TArray<class UUIStateComponentConfiguration*>      Components;                                                 // 0x0080   (0x0010)  
	float                                              MinimumUnloadTime;                                          // 0x0090   (0x0004)  
	EUIStateAutomationType                             AutomationType;                                             // 0x0094   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0095   (0x0003)  MISSED
	TArray<FUIStateAutomationRule>                     AutomationRules;                                            // 0x0098   (0x0010)  
	bool                                               bSupportsBacktracking;                                      // 0x00A8   (0x0001)  
	bool                                               bOverrideIncomingBacktracks;                                // 0x00A9   (0x0001)  
	unsigned char                                      UnknownData03_6[0x6];                                       // 0x00AA   (0x0006)  MISSED
};

/// Class /Script/UIChart.UIState
/// Size: 0x00C0 (0x000028 - 0x0000E8)
class UUIState : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	TArray<class UUIState*>                            Children;                                                   // 0x0028   (0x0010)  
	TArray<class UUIStateChartRegion*>                 ParallelRegions;                                            // 0x0038   (0x0010)  
	TArray<class UUIStateComponent*>                   Components;                                                 // 0x0048   (0x0010)  
	class UUIStateConfiguration*                       Configuration;                                              // 0x0058   (0x0008)  
	TArray<class UUIStateChartTransition*>             OutgoingTransitions;                                        // 0x0060   (0x0010)  
	float                                              SecondsUntilTimeout;                                        // 0x0070   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0074   (0x0004)  MISSED
	class UUIState*                                    Parent;                                                     // 0x0078   (0x0008)  
	class UUIStateChartRegion*                         StateChartRegion;                                           // 0x0080   (0x0008)  
	EStateComponentStatus                              Status;                                                     // 0x0088   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x008C   (0x0004)  MISSED
	SDK_UNDEFINED(80,13210) /* TSet<FGameplayTag> */   __um(ContinualAutomationContextKeys);                       // 0x0090   (0x0050)  
	unsigned char                                      UnknownData03_6[0x8];                                       // 0x00E0   (0x0008)  MISSED
};

/// Struct /Script/UIChart.UIStateTransitionData
/// Size: 0x000C (0x000000 - 0x00000C)
struct FUIStateTransitionData
{ 
	FGameplayTag                                       TriggerTag;                                                 // 0x0000   (0x0004)  
	int32_t                                            SourceStateId;                                              // 0x0004   (0x0004)  
	int32_t                                            TargetStateId;                                              // 0x0008   (0x0004)  
};

/// Class /Script/UIChart.UIStateChart
/// Size: 0x0018 (0x000030 - 0x000048)
class UUIStateChart : public UDataAsset
{ 
public:
	class UUIStateConfiguration*                       RootState;                                                  // 0x0030   (0x0008)  
	TArray<FUIStateTransitionData>                     Transitions;                                                // 0x0038   (0x0010)  
};

/// Class /Script/UIChart.UIStateChartContext
/// Size: 0x0068 (0x000028 - 0x000090)
class UUIStateChartContext : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	SDK_UNDEFINED(80,13211) /* TMap<FGameplayTag, UUIStateChartContextEntry*> */ __um(Store);                      // 0x0028   (0x0050)  
	unsigned char                                      UnknownData01_6[0x18];                                      // 0x0078   (0x0018)  MISSED


	/// Functions
	// Function /Script/UIChart.UIStateChartContext.BP_SetPlayerValue
	// void BP_SetPlayerValue(class ULocalPlayer* LocalPlayer, FGameplayTag Key, int32_t Value);                             // [0xa2537dc] Final|Native|Public|BlueprintCallable 
	// Function /Script/UIChart.UIStateChartContext.BP_SetPlayerStringValue
	// void BP_SetPlayerStringValue(class ULocalPlayer* LocalPlayer, FGameplayTag Key, FString Value);                       // [0xa253560] Final|Native|Public|BlueprintCallable 
	// Function /Script/UIChart.UIStateChartContext.BP_SetPlayerFloatValue
	// void BP_SetPlayerFloatValue(class ULocalPlayer* LocalPlayer, FGameplayTag Key, float Value);                          // [0xa253314] Final|Native|Public|BlueprintCallable 
	// Function /Script/UIChart.UIStateChartContext.BP_SetPlayerBoolValue
	// void BP_SetPlayerBoolValue(class ULocalPlayer* LocalPlayer, FGameplayTag Key, bool Value);                            // [0xa2530c4] Final|Native|Public|BlueprintCallable 
	// Function /Script/UIChart.UIStateChartContext.BP_SetCommonStringValue
	// void BP_SetCommonStringValue(FGameplayTag Key, FString Value);                                                        // [0xa252e88] Final|Native|Public|BlueprintCallable 
	// Function /Script/UIChart.UIStateChartContext.BP_SetCommonIntValue
	// void BP_SetCommonIntValue(FGameplayTag Key, int32_t Value);                                                           // [0xa252c7c] Final|Native|Public|BlueprintCallable 
	// Function /Script/UIChart.UIStateChartContext.BP_SetCommonFloatValue
	// void BP_SetCommonFloatValue(FGameplayTag Key, float Value);                                                           // [0xa252a6c] Final|Native|Public|BlueprintCallable 
	// Function /Script/UIChart.UIStateChartContext.BP_SetCommonBoolValue
	// void BP_SetCommonBoolValue(FGameplayTag Key, bool Value);                                                             // [0xa252858] Final|Native|Public|BlueprintCallable 
	// Function /Script/UIChart.UIStateChartContext.BP_FindEntry
	// class UUIStateChartContextEntry* BP_FindEntry(FGameplayTag Key);                                                      // [0xa2521cc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UIChart.UIStateChartContext.BP_ClearPlayerValue
	// void BP_ClearPlayerValue(class ULocalPlayer* LocalPlayer, FGameplayTag& Key);                                         // [0xa251950] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UIChart.UIStateChartContext.BP_ClearEntry
	// void BP_ClearEntry(FGameplayTag Key);                                                                                 // [0xa251818] Final|Native|Public|BlueprintCallable 
	// Function /Script/UIChart.UIStateChartContext.BP_ClearCommonValue
	// void BP_ClearCommonValue(FGameplayTag Key);                                                                           // [0xa2516e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UIChart.UIStateChartContext.BP_ApplyPlayerChanges
	// void BP_ApplyPlayerChanges(class ULocalPlayer* LocalPlayer, FUIStateChartContextChangeSet& ContextChanges);           // [0xa2515cc] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UIChart.UIStateChartContext.BP_ApplyCommonChanges
	// void BP_ApplyCommonChanges(FUIStateChartContextChangeSet& ContextChanges);                                            // [0xa2514fc] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/UIChart.UIStateChartContextEntry
/// Size: 0x0080 (0x000028 - 0x0000A8)
class UUIStateChartContextEntry : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	SDK_UNDEFINED(16,13212) /* FString */              __um(CommonValue);                                          // 0x0028   (0x0010)  
	SDK_UNDEFINED(80,13213) /* TMap<ULocalPlayer*, FUIStateChartContextEntryOverride> */ __um(PlayerOverrides);    // 0x0038   (0x0050)  
	unsigned char                                      UnknownData01_6[0x20];                                      // 0x0088   (0x0020)  MISSED


	/// Functions
	// Function /Script/UIChart.UIStateChartContextEntry.IsEmptyForPlayer
	// bool IsEmptyForPlayer(class ULocalPlayer* InLocalPlayer);                                                             // [0xa253d28] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UIChart.UIStateChartContextEntry.GetPlayerValueAsString
	// FString GetPlayerValueAsString(class ULocalPlayer* InLocalPlayer);                                                    // [0xa253c90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UIChart.UIStateChartContextEntry.GetPlayerValueAsInt
	// int32_t GetPlayerValueAsInt(class ULocalPlayer* InLocalPlayer);                                                       // [0xa253c00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UIChart.UIStateChartContextEntry.GetPlayerValueAsFloat
	// float GetPlayerValueAsFloat(class ULocalPlayer* InLocalPlayer);                                                       // [0xa253b70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UIChart.UIStateChartContextEntry.GetPlayerValueAsBool
	// bool GetPlayerValueAsBool(class ULocalPlayer* InLocalPlayer);                                                         // [0xa253ae0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UIChart.UIStateChartContextEntry.GetCommonValueAsString
	// FString GetCommonValueAsString();                                                                                     // [0xa253ac4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UIChart.UIStateChartContextEntry.GetCommonValueAsInt
	// int32_t GetCommonValueAsInt();                                                                                        // [0xa253aa0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UIChart.UIStateChartContextEntry.GetCommonValueAsFloat
	// float GetCommonValueAsFloat();                                                                                        // [0xa253a78] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UIChart.UIStateChartContextEntry.GetCommonValueAsBool
	// bool GetCommonValueAsBool();                                                                                          // [0xa253a24] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/UIChart.UIStateChartManager
/// Size: 0x00C8 (0x000030 - 0x0000F8)
class UUIStateChartManager : public UGameInstanceSubsystem
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0030   (0x0008)  MISSED
	SDK_UNDEFINED(80,13214) /* TMap<ULocalPlayer*, UUIStateChartManagerPlayer*> */ __um(PlayerEntries);            // 0x0038   (0x0050)  
	TArray<class UUIStateChartManagerPlayer*>          RemovedPlayerEntries;                                       // 0x0088   (0x0010)  
	class UUIStateChartContext*                        Context;                                                    // 0x0098   (0x0008)  
	class UUIStateChartResourceCollection*             GlobalResources;                                            // 0x00A0   (0x0008)  
	unsigned char                                      UnknownData01_6[0x50];                                      // 0x00A8   (0x0050)  MISSED


	/// Functions
	// Function /Script/UIChart.UIStateChartManager.GetContext
	// class UUIStateChartContext* GetContext();                                                                             // [0x3b55e70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UIChart.UIStateChartManager.GetChartContext
	// class UUIStateChartContext* GetChartContext();                                                                        // [0x3b55e70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
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
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	class UUIStateChartRegion*                         MainRegion;                                                 // 0x0028   (0x0008)  
	class UUIStateChartManagerPlayer*                  ManagerPlayer;                                              // 0x0030   (0x0008)  
	class UUIStateChartResourceCollection*             StateChartResources;                                        // 0x0038   (0x0008)  
};

/// Struct /Script/UIChart.UIStateChartManagerChartDeactivationRequest
/// Size: 0x0088 (0x000000 - 0x000088)
struct FUIStateChartManagerChartDeactivationRequest
{ 
	unsigned char                                      UnknownData00_2[0x88];                                      // 0x0000   (0x0088)  MISSED
};

/// Class /Script/UIChart.UIStateChartManagerPlayer
/// Size: 0x00D0 (0x000028 - 0x0000F8)
class UUIStateChartManagerPlayer : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	SDK_UNDEFINED(80,13215) /* TMap<int32_t, UUIStateChartManagerEntry*> */ __um(ActiveChartEntries);              // 0x0028   (0x0050)  
	SDK_UNDEFINED(80,13216) /* TMap<int32_t, UUIStateChartManagerEntry*> */ __um(InactiveChartEntries);            // 0x0078   (0x0050)  
	TArray<FUIStateChartManagerChartDeactivationRequest> DeactivationRequests;                                     // 0x00C8   (0x0010)  
	unsigned char                                      UnknownData01_5[0x10];                                      // 0x00D8   (0x0010)  MISSED
	class UUIStateChartManager*                        Manager;                                                    // 0x00E8   (0x0008)  
	class UUIStateChartResourceCollection*             PlayerResources;                                            // 0x00F0   (0x0008)  
};

/// Struct /Script/UIChart.UIStateChartContextChangeSet
/// Size: 0x0050 (0x000000 - 0x000050)
struct FUIStateChartContextChangeSet
{ 
	SDK_UNDEFINED(80,13217) /* TMap<FGameplayTag, FString> */ __um(Changes);                                       // 0x0000   (0x0050)  
};

/// Class /Script/UIChart.UIStateBacktrackStep
/// Size: 0x0078 (0x000028 - 0x0000A0)
class UUIStateBacktrackStep : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	FGameplayTag                                       TransitionTag;                                              // 0x0028   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x002C   (0x0004)  MISSED
	class UUIState*                                    ReturnState;                                                // 0x0030   (0x0008)  
	class UUIState*                                    AvailableState;                                             // 0x0038   (0x0008)  
	FUIStateChartContextChangeSet                      ReverseContextChanges;                                      // 0x0040   (0x0050)  
	TArray<class UUIStateBacktrackStep*>               AvailablePaths;                                             // 0x0090   (0x0010)  
};

/// Class /Script/UIChart.UIStateChartRegion
/// Size: 0x00C0 (0x000028 - 0x0000E8)
class UUIStateChartRegion : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	class UUIStateChartManagerEntry*                   ManagerEntry;                                               // 0x0028   (0x0008)  
	class UUIState*                                    RootState;                                                  // 0x0030   (0x0008)  
	class UUIState*                                    ParentState;                                                // 0x0038   (0x0008)  
	TArray<class UUIStateChartRegion*>                 ParallelRegions;                                            // 0x0040   (0x0010)  
	SDK_UNDEFINED(80,13218) /* TMap<FGameplayTag, UUIState*> */ __um(TaggedStates);                                // 0x0050   (0x0050)  
	class UUIState*                                    ActiveLeafState;                                            // 0x00A0   (0x0008)  
	class UUIStateChartTransitionOperation*            ActiveTransitionOperation;                                  // 0x00A8   (0x0008)  
	class UUIStateChartTransitionOperation*            QueuedTransitionOperation;                                  // 0x00B0   (0x0008)  
	TArray<class UUIStateBacktrackStep*>               AvailableBacktrackPaths;                                    // 0x00B8   (0x0010)  
	class UUIStateBacktrackStep*                       ActiveTransitionBacktrackStep;                              // 0x00C8   (0x0008)  
	SDK_UNDEFINED(16,13219) /* FString */              __um(ChartName);                                            // 0x00D0   (0x0010)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x00E0   (0x0008)  MISSED
};

/// Class /Script/UIChart.UIStateChartResourceCollection
/// Size: 0x0050 (0x000028 - 0x000078)
class UUIStateChartResourceCollection : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	SDK_UNDEFINED(80,13220) /* TMap<UClass*, UObject*> */ __um(ResourcesByClass);                                  // 0x0028   (0x0050)  
};

/// Class /Script/UIChart.UIStateChartTransition
/// Size: 0x0018 (0x000028 - 0x000040)
class UUIStateChartTransition : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	class UUIState*                                    Source;                                                     // 0x0028   (0x0008)  
	class UUIState*                                    Target;                                                     // 0x0030   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0038   (0x0008)  MISSED
};

/// Struct /Script/UIChart.UIStateRelayBaton
/// Size: 0x0028 (0x000000 - 0x000028)
struct FUIStateRelayBaton
{ 
	class UUIStateComponent*                           OfferingComponent;                                          // 0x0010   (0x0008)  
	class UClass*                                      OfferingComponentType;                                      // 0x0018   (0x0008)  
	class UUIStateComponentConfiguration*              OfferingComponentConfiguration;                             // 0x0020   (0x0008)  
};

/// Struct /Script/UIChart.UIStateRelay
/// Size: 0x0028 (0x000000 - 0x000028)
struct FUIStateRelay
{ 
	TArray<FUIStateRelayBaton>                         AvailableBatons;                                            // 0x0000   (0x0010)  
	TArray<FUIStateRelayBaton>                         ClaimedBatons;                                              // 0x0010   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0020   (0x0008)  MISSED
};

/// Class /Script/UIChart.UIStateChartTransitionOperation
/// Size: 0x0098 (0x000028 - 0x0000C0)
class UUIStateChartTransitionOperation : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x30];                                      // 0x0000   (0x0030)  MISSED
	class UUIStateChartRegion*                         Region;                                                     // 0x0030   (0x0008)  
	class UUIState*                                    OriginState;                                                // 0x0038   (0x0008)  
	class UUIState*                                    EndState;                                                   // 0x0040   (0x0008)  
	class UUIState*                                    TransitionTargetState;                                      // 0x0048   (0x0008)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0050   (0x0008)  MISSED
	TArray<class UUIState*>                            KnownStatesToActivate;                                      // 0x0058   (0x0010)  
	TArray<class UUIState*>                            StatesToDeactivate;                                         // 0x0068   (0x0010)  
	class UUIStateChartTransitionOperationGroup*       Group;                                                      // 0x0078   (0x0008)  
	FUIStateRelay                                      StateRelay;                                                 // 0x0080   (0x0028)  
	unsigned char                                      UnknownData02_5[0x8];                                       // 0x00A8   (0x0008)  MISSED
	class UUIState*                                    BacktrackReturnState;                                       // 0x00B0   (0x0008)  
	unsigned char                                      UnknownData03_6[0x8];                                       // 0x00B8   (0x0008)  MISSED
};

/// Struct /Script/UIChart.UIStateChartTransitionOperationParameters
/// Size: 0x0028 (0x000000 - 0x000028)
struct FUIStateChartTransitionOperationParameters
{ 
	FGameplayTagContainer                              AnimationHints;                                             // 0x0000   (0x0020)  
	EUIStateTransitionUrgency                          Urgency;                                                    // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0021   (0x0007)  MISSED
};

/// Class /Script/UIChart.UIStateChartTransitionOperationGroup
/// Size: 0x0180 (0x000028 - 0x0001A8)
class UUIStateChartTransitionOperationGroup : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	SDK_UNDEFINED(80,13221) /* TSet<UUIStateChartTransitionOperation*> */ __um(Operations);                        // 0x0028   (0x0050)  
	SDK_UNDEFINED(80,13222) /* TSet<UUIStateChartTransitionOperation*> */ __um(OperationsReadyForContextUpdate);   // 0x0078   (0x0050)  
	class UUIStateChartContext*                        Context;                                                    // 0x00C8   (0x0008)  
	class ULocalPlayer*                                LocalPlayer;                                                // 0x00D0   (0x0008)  
	FUIStateChartContextChangeSet                      ContextChanges;                                             // 0x00D8   (0x0050)  
	FUIStateChartContextChangeSet                      ReverseContextChanges;                                      // 0x0128   (0x0050)  
	FUIStateChartTransitionOperationParameters         Parameters;                                                 // 0x0178   (0x0028)  
	FGameplayTag                                       TransitionEventTag;                                         // 0x01A0   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x01A4   (0x0004)  MISSED
};

/// Struct /Script/UIChart.UIStateComponentInstanceStack
/// Size: 0x0010 (0x000000 - 0x000010)
struct FUIStateComponentInstanceStack
{ 
	TArray<class UStackingUIStateComponent*>           InstanceStack;                                              // 0x0000   (0x0010)  
};

/// Struct /Script/UIChart.UIStateChartContextEntryOverride
/// Size: 0x0028 (0x000000 - 0x000028)
struct FUIStateChartContextEntryOverride
{ 
	SDK_UNDEFINED(16,13223) /* FString */              __um(OverrideValue);                                        // 0x0000   (0x0010)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x0010   (0x0018)  MISSED
};

