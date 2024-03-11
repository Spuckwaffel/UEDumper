
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine
/// dependency: GameplayTags
/// dependency: InputCore
/// dependency: Slate

/// Enum /Script/EnhancedInput.EPlayerMappableKeySlot
/// Size: 0x09
enum class EPlayerMappableKeySlot : uint8_t
{
	EPlayerMappableKeySlot__First                                                    = 0,
	EPlayerMappableKeySlot__Second                                                   = 1,
	EPlayerMappableKeySlot__Third                                                    = 2,
	EPlayerMappableKeySlot__Fourth                                                   = 3,
	EPlayerMappableKeySlot__Fifth                                                    = 4,
	EPlayerMappableKeySlot__Sixth                                                    = 5,
	EPlayerMappableKeySlot__Seventh                                                  = 6,
	EPlayerMappableKeySlot__Unspecified                                              = 7,
	EPlayerMappableKeySlot__Max                                                      = 8
};

/// Enum /Script/EnhancedInput.EInputActionValueType
/// Size: 0x05
enum class EInputActionValueType : uint8_t
{
	EInputActionValueType__Boolean                                                   = 0,
	EInputActionValueType__Axis1D                                                    = 1,
	EInputActionValueType__Axis2D                                                    = 2,
	EInputActionValueType__Axis3D                                                    = 3,
	EInputActionValueType__EInputActionValueType_MAX                                 = 4
};

/// Enum /Script/EnhancedInput.EMappingQueryResult
/// Size: 0x06
enum class EMappingQueryResult : uint8_t
{
	EMappingQueryResult__Error_EnhancedInputNotEnabled                               = 0,
	EMappingQueryResult__Error_InputContextNotInActiveContexts                       = 1,
	EMappingQueryResult__Error_InvalidAction                                         = 2,
	EMappingQueryResult__NotMappable                                                 = 3,
	EMappingQueryResult__MappingAvailable                                            = 4,
	EMappingQueryResult__EMappingQueryResult_MAX                                     = 5
};

/// Enum /Script/EnhancedInput.EMappingQueryIssue
/// Size: 0x08
enum class EMappingQueryIssue : uint8_t
{
	EMappingQueryIssue__NoIssue                                                      = 0,
	EMappingQueryIssue__ReservedByAction                                             = 1,
	EMappingQueryIssue__HidesExistingMapping                                         = 2,
	EMappingQueryIssue__HiddenByExistingMapping                                      = 4,
	EMappingQueryIssue__CollisionWithMappingInSameContext                            = 8,
	EMappingQueryIssue__ForcesTypePromotion                                          = 16,
	EMappingQueryIssue__ForcesTypeDemotion                                           = 32,
	EMappingQueryIssue__EMappingQueryIssue_MAX                                       = 33
};

/// Enum /Script/EnhancedInput.EPlayerMappableKeySettingBehaviors
/// Size: 0x04
enum class EPlayerMappableKeySettingBehaviors : uint8_t
{
	EPlayerMappableKeySettingBehaviors__InheritSettingsFromAction                    = 0,
	EPlayerMappableKeySettingBehaviors__OverrideSettings                             = 1,
	EPlayerMappableKeySettingBehaviors__IgnoreSettings                               = 2,
	EPlayerMappableKeySettingBehaviors__EPlayerMappableKeySettingBehaviors_MAX       = 3
};

/// Enum /Script/EnhancedInput.EInputMappingRebuildType
/// Size: 0x04
enum class EInputMappingRebuildType : uint8_t
{
	EInputMappingRebuildType__None                                                   = 0,
	EInputMappingRebuildType__Rebuild                                                = 1,
	EInputMappingRebuildType__RebuildWithFlush                                       = 2,
	EInputMappingRebuildType__EInputMappingRebuildType_MAX                           = 3
};

/// Enum /Script/EnhancedInput.EInputActionAccumulationBehavior
/// Size: 0x03
enum class EInputActionAccumulationBehavior : uint8_t
{
	EInputActionAccumulationBehavior__TakeHighestAbsoluteValue                       = 0,
	EInputActionAccumulationBehavior__Cumulative                                     = 1,
	EInputActionAccumulationBehavior__EInputActionAccumulationBehavior_MAX           = 2
};

/// Enum /Script/EnhancedInput.ENormalizeInputSmoothingType
/// Size: 0x17
enum class ENormalizeInputSmoothingType : uint8_t
{
	ENormalizeInputSmoothingType__None                                               = 0,
	ENormalizeInputSmoothingType__Lerp                                               = 1,
	ENormalizeInputSmoothingType__Interp_To                                          = 2,
	ENormalizeInputSmoothingType__Interp_Constant_To                                 = 3,
	ENormalizeInputSmoothingType__Interp_Circular_In                                 = 4,
	ENormalizeInputSmoothingType__Interp_Circular_Out                                = 5,
	ENormalizeInputSmoothingType__Interp_Circular_In_Out                             = 6,
	ENormalizeInputSmoothingType__Interp_Ease_In                                     = 7,
	ENormalizeInputSmoothingType__Interp_Ease_Out                                    = 8,
	ENormalizeInputSmoothingType__Interp_Ease_In_Out                                 = 9,
	ENormalizeInputSmoothingType__Interp_Expo_In                                     = 10,
	ENormalizeInputSmoothingType__Interp_Expo_Out                                    = 11,
	ENormalizeInputSmoothingType__Interp_Expo_In_Out                                 = 12,
	ENormalizeInputSmoothingType__Interp_Sin_In                                      = 13,
	ENormalizeInputSmoothingType__Interp_Sin_Out                                     = 14,
	ENormalizeInputSmoothingType__Interp_Sin_In_Out                                  = 15,
	ENormalizeInputSmoothingType__ENormalizeInputSmoothingType_MAX                   = 16
};

/// Enum /Script/EnhancedInput.EDeadZoneType
/// Size: 0x03
enum class EDeadZoneType : uint8_t
{
	EDeadZoneType__Axial                                                             = 0,
	EDeadZoneType__Radial                                                            = 1,
	EDeadZoneType__EDeadZoneType_MAX                                                 = 2
};

/// Enum /Script/EnhancedInput.EFOVScalingType
/// Size: 0x03
enum class EFOVScalingType : uint8_t
{
	EFOVScalingType__Standard                                                        = 0,
	EFOVScalingType__UE4_BackCompat                                                  = 1,
	EFOVScalingType__EFOVScalingType_MAX                                             = 2
};

/// Enum /Script/EnhancedInput.EInputAxisSwizzle
/// Size: 0x06
enum class EInputAxisSwizzle : uint8_t
{
	EInputAxisSwizzle__YXZ                                                           = 0,
	EInputAxisSwizzle__ZYX                                                           = 1,
	EInputAxisSwizzle__XZY                                                           = 2,
	EInputAxisSwizzle__YZX                                                           = 3,
	EInputAxisSwizzle__ZXY                                                           = 4,
	EInputAxisSwizzle__EInputAxisSwizzle_MAX                                         = 5
};

/// Enum /Script/EnhancedInput.ETriggerState
/// Size: 0x04
enum class ETriggerState : uint8_t
{
	ETriggerState__None                                                              = 0,
	ETriggerState__Ongoing                                                           = 1,
	ETriggerState__Triggered                                                         = 2,
	ETriggerState__ETriggerState_MAX                                                 = 3
};

/// Enum /Script/EnhancedInput.ETriggerEvent
/// Size: 0x07
enum class ETriggerEvent : uint8_t
{
	ETriggerEvent__None                                                              = 0,
	ETriggerEvent__Triggered                                                         = 1,
	ETriggerEvent__Started                                                           = 2,
	ETriggerEvent__Ongoing                                                           = 4,
	ETriggerEvent__Canceled                                                          = 8,
	ETriggerEvent__Completed                                                         = 16,
	ETriggerEvent__ETriggerEvent_MAX                                                 = 17
};

/// Enum /Script/EnhancedInput.ETriggerType
/// Size: 0x04
enum class ETriggerType : uint8_t
{
	ETriggerType__Explicit                                                           = 0,
	ETriggerType__Implicit                                                           = 1,
	ETriggerType__Blocker                                                            = 2,
	ETriggerType__ETriggerType_MAX                                                   = 3
};

/// Enum /Script/EnhancedInput.ETriggerEventsSupported
/// Size: 0x06
enum class ETriggerEventsSupported : uint8_t
{
	ETriggerEventsSupported__None                                                    = 0,
	ETriggerEventsSupported__Instant                                                 = 1,
	ETriggerEventsSupported__Uninterruptible                                         = 2,
	ETriggerEventsSupported__Ongoing                                                 = 4,
	ETriggerEventsSupported__All                                                     = 7,
	ETriggerEventsSupported__ETriggerEventsSupported_MAX                             = 8
};

/// Class /Script/EnhancedInput.EnhancedPlayerMappableKeyProfile
/// Size: 0x0070 (0x000028 - 0x000098)
class UEnhancedPlayerMappableKeyProfile : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	FGameplayTag                                       ProfileIdentifier;                                          // 0x0028   (0x0004)  
	FPlatformUserId                                    OwningUserId;                                               // 0x002C   (0x0004)  
	SDK_UNDEFINED(24,1777) /* FText */                 __um(DisplayName);                                          // 0x0030   (0x0018)  
	SDK_UNDEFINED(80,1778) /* TMap<FName, FKeyMappingRow> */ __um(PlayerMappedKeys);                               // 0x0048   (0x0050)  


	/// Functions
	// Function /Script/EnhancedInput.EnhancedPlayerMappableKeyProfile.ToString
	// FString ToString();                                                                                                   // [0x7254a68] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EnhancedInput.EnhancedPlayerMappableKeyProfile.SetDisplayName
	// void SetDisplayName(FText& NewDisplayName);                                                                           // [0x725430c] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EnhancedInput.EnhancedPlayerMappableKeyProfile.ResetToDefault
	// void ResetToDefault();                                                                                                // [0x6814420] Native|Public|BlueprintCallable 
	// Function /Script/EnhancedInput.EnhancedPlayerMappableKeyProfile.ResetMappingToDefault
	// void ResetMappingToDefault(FName InMappingName);                                                                      // [0x725428c] Final|Native|Public|BlueprintCallable 
	// Function /Script/EnhancedInput.EnhancedPlayerMappableKeyProfile.QueryPlayerMappedKeys
	// int32_t QueryPlayerMappedKeys(FPlayerMappableKeyQueryOptions& Options, TArray<FKey>& OutKeys);                        // [0x7253668] Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EnhancedInput.EnhancedPlayerMappableKeyProfile.K2_FindKeyMapping
	// void K2_FindKeyMapping(FPlayerKeyMapping& OutKeyMapping, FMapPlayerKeyArgs& InArgs);                                  // [0x7251ef0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EnhancedInput.EnhancedPlayerMappableKeyProfile.GetProfileIdentifer
	// FGameplayTag GetProfileIdentifer();                                                                                   // [0x3ee14d8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EnhancedInput.EnhancedPlayerMappableKeyProfile.GetProfileDisplayName
	// FText GetProfileDisplayName();                                                                                        // [0x7250d1c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EnhancedInput.EnhancedPlayerMappableKeyProfile.GetPlayerMappingRows
	// TMap<FName, FKeyMappingRow> GetPlayerMappingRows();                                                                   // [0x7250c8c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EnhancedInput.EnhancedPlayerMappableKeyProfile.GetMappingNamesForKey
	// int32_t GetMappingNamesForKey(FKey& InKey, TArray<FName>& OutMappingNames);                                           // [0x7250a54] Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EnhancedInput.EnhancedPlayerMappableKeyProfile.GetMappedKeysInRow
	// int32_t GetMappedKeysInRow(FName MappingName, TArray<FKey>& OutKeys);                                                 // [0x7250738] Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EnhancedInput.EnhancedPlayerMappableKeyProfile.DumpProfileToLog
	// void DumpProfileToLog();                                                                                              // [0x66f64fc] Native|Public|BlueprintCallable|Const 
	// Function /Script/EnhancedInput.EnhancedPlayerMappableKeyProfile.DoesMappingPassQueryOptions
	// bool DoesMappingPassQueryOptions(FPlayerKeyMapping& PlayerMapping, FPlayerMappableKeyQueryOptions& Options);          // [0x724ff6c] Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/EnhancedInput.EnhancedInputUserSettings
/// Size: 0x00F8 (0x000028 - 0x000120)
class UEnhancedInputUserSettings : public USaveGame
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0028   (0x0008)  MISSED
	SDK_UNDEFINED(16,1779) /* FMulticastInlineDelegate */ __um(OnSettingsChanged);                                 // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,1780) /* FMulticastInlineDelegate */ __um(OnSettingsApplied);                                 // 0x0040   (0x0010)  
	unsigned char                                      UnknownData01_5[0x20];                                      // 0x0050   (0x0020)  MISSED
	FGameplayTag                                       CurrentProfileIdentifier;                                   // 0x0070   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x0074   (0x0004)  MISSED
	SDK_UNDEFINED(80,1781) /* TMap<FGameplayTag, UEnhancedPlayerMappableKeyProfile*> */ __um(SavedKeyProfiles);    // 0x0078   (0x0050)  
	SDK_UNDEFINED(8,1782) /* TWeakObjectPtr<ULocalPlayer*> */ __um(OwningLocalPlayer);                             // 0x00C8   (0x0008)  
	SDK_UNDEFINED(80,1783) /* TSet<UInputMappingContext*> */ __um(RegisteredMappingContexts);                      // 0x00D0   (0x0050)  


	/// Functions
	// Function /Script/EnhancedInput.EnhancedInputUserSettings.UnregisterInputMappingContexts
	// bool UnregisterInputMappingContexts(TSet<UInputMappingContext*>& MappingContexts);                                    // [0x7254edc] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EnhancedInput.EnhancedInputUserSettings.UnregisterInputMappingContext
	// bool UnregisterInputMappingContext(class UInputMappingContext* IMC);                                                  // [0x7254e48] Native|Public|BlueprintCallable 
	// Function /Script/EnhancedInput.EnhancedInputUserSettings.UnMapPlayerKey
	// void UnMapPlayerKey(FMapPlayerKeyArgs& InArgs, FGameplayTagContainer& FailureReason);                                 // [0x7254aac] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EnhancedInput.EnhancedInputUserSettings.SetKeyProfile
	// bool SetKeyProfile(FGameplayTag& InProfileId);                                                                        // [0x72543ac] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EnhancedInput.EnhancedInputUserSettings.SaveSettings
	// void SaveSettings();                                                                                                  // [0x1b102a0] Native|Public|BlueprintCallable 
	// Function /Script/EnhancedInput.EnhancedInputUserSettings.ResetKeyProfileToDefault
	// void ResetKeyProfileToDefault(FGameplayTag& ProfileId, FGameplayTagContainer& FailureReason);                         // [0x7254134] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EnhancedInput.EnhancedInputUserSettings.ResetAllPlayerKeysInRow
	// void ResetAllPlayerKeysInRow(FMapPlayerKeyArgs& InArgs, FGameplayTagContainer& FailureReason);                        // [0x7254008] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EnhancedInput.EnhancedInputUserSettings.RegisterInputMappingContexts
	// bool RegisterInputMappingContexts(TSet<UInputMappingContext*>& MappingContexts);                                      // [0x7253844] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EnhancedInput.EnhancedInputUserSettings.RegisterInputMappingContext
	// bool RegisterInputMappingContext(class UInputMappingContext* IMC);                                                    // [0x72537b0] Native|Public|BlueprintCallable 
	// Function /Script/EnhancedInput.EnhancedInputUserSettings.MapPlayerKey
	// void MapPlayerKey(FMapPlayerKeyArgs& InArgs, FGameplayTagContainer& FailureReason);                                   // [0x72526f0] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EnhancedInput.EnhancedInputUserSettings.MappingContextRegisteredWithSettings__DelegateSignature
	// void MappingContextRegisteredWithSettings__DelegateSignature(class UInputMappingContext* IMC);                        // [0x18a39e4] MulticastDelegate|Public|Delegate 
	// Function /Script/EnhancedInput.EnhancedInputUserSettings.MappableKeyProfileChanged__DelegateSignature
	// void MappableKeyProfileChanged__DelegateSignature(class UEnhancedPlayerMappableKeyProfile* NewProfile);               // [0x18a39e4] MulticastDelegate|Public|Delegate 
	// Function /Script/EnhancedInput.EnhancedInputUserSettings.IsMappingContextRegistered
	// bool IsMappingContextRegistered(class UInputMappingContext* IMC);                                                     // [0x7251bb8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EnhancedInput.EnhancedInputUserSettings.GetKeyProfileWithIdentifier
	// class UEnhancedPlayerMappableKeyProfile* GetKeyProfileWithIdentifier(FGameplayTag& ProfileId);                        // [0x7250588] Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EnhancedInput.EnhancedInputUserSettings.GetCurrentKeyProfileIdentifier
	// FGameplayTag GetCurrentKeyProfileIdentifier();                                                                        // [0x7250510] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EnhancedInput.EnhancedInputUserSettings.GetCurrentKeyProfile
	// class UEnhancedPlayerMappableKeyProfile* GetCurrentKeyProfile();                                                      // [0x72504ec] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EnhancedInput.EnhancedInputUserSettings.FindMappingsInRow
	// TSet<FPlayerKeyMapping> FindMappingsInRow(FName MappingName);                                                         // [0x7250090] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EnhancedInput.EnhancedInputUserSettings.EnhancedInputUserSettingsChanged__DelegateSignature
	// void EnhancedInputUserSettingsChanged__DelegateSignature(class UEnhancedInputUserSettings* Settings);                 // [0x18a39e4] MulticastDelegate|Public|Delegate 
	// Function /Script/EnhancedInput.EnhancedInputUserSettings.EnhancedInputUserSettingsApplied__DelegateSignature
	// void EnhancedInputUserSettingsApplied__DelegateSignature();                                                           // [0x18a39e4] MulticastDelegate|Public|Delegate 
	// Function /Script/EnhancedInput.EnhancedInputUserSettings.CreateNewKeyProfile
	// class UEnhancedPlayerMappableKeyProfile* CreateNewKeyProfile(FPlayerMappableKeyProfileCreationArgs& InArgs);          // [0x724febc] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EnhancedInput.EnhancedInputUserSettings.AsyncSaveSettings
	// void AsyncSaveSettings();                                                                                             // [0x35bd900] Native|Public|BlueprintCallable 
	// Function /Script/EnhancedInput.EnhancedInputUserSettings.ApplySettings
	// void ApplySettings();                                                                                                 // [0x66f64fc] Native|Public|BlueprintCallable 
};

/// Struct /Script/EnhancedInput.BlueprintEnhancedInputActionBinding
/// Size: 0x0010 (0x000000 - 0x000010)
struct FBlueprintEnhancedInputActionBinding
{ 
	class UInputAction*                                InputAction;                                                // 0x0000   (0x0008)  
	ETriggerEvent                                      TriggerEvent;                                               // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0009   (0x0003)  MISSED
	FName                                              FunctionNameToBind;                                         // 0x000C   (0x0004)  
};

/// Class /Script/EnhancedInput.EnhancedInputActionDelegateBinding
/// Size: 0x0010 (0x000028 - 0x000038)
class UEnhancedInputActionDelegateBinding : public UInputDelegateBinding
{ 
public:
	TArray<FBlueprintEnhancedInputActionBinding>       InputActionDelegateBindings;                                // 0x0028   (0x0010)  
};

/// Class /Script/EnhancedInput.EnhancedInputActionValueBinding
/// Size: 0x0010 (0x000028 - 0x000038)
class UEnhancedInputActionValueBinding : public UInputDelegateBinding
{ 
public:
	TArray<FBlueprintEnhancedInputActionBinding>       InputActionValueBindings;                                   // 0x0028   (0x0010)  
};

/// Class /Script/EnhancedInput.EnhancedInputComponent
/// Size: 0x0038 (0x000128 - 0x000160)
class UEnhancedInputComponent : public UInputComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x38];                                      // 0x0128   (0x0038)  MISSED


	/// Functions
	// Function /Script/EnhancedInput.EnhancedInputComponent.GetBoundActionValue
	// FInputActionValue GetBoundActionValue(class UInputAction* Action);                                                    // [0x7250210] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/EnhancedInput.DefaultContextSetting
/// Size: 0x0028 (0x000000 - 0x000028)
struct FDefaultContextSetting
{ 
	SDK_UNDEFINED(32,1784) /* TWeakObjectPtr<UInputMappingContext*> */ __um(InputMappingContext);                  // 0x0000   (0x0020)  
	int32_t                                            Priority;                                                   // 0x0020   (0x0004)  
	bool                                               bAddImmediately;                                            // 0x0024   (0x0001)  
	bool                                               bRegisterWithUserSettings;                                  // 0x0025   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0026   (0x0002)  MISSED
};

/// Class /Script/EnhancedInput.EnhancedInputDeveloperSettings
/// Size: 0x0098 (0x000030 - 0x0000C8)
class UEnhancedInputDeveloperSettings : public UDeveloperSettingsBackedByCVars
{ 
public:
	TArray<FDefaultContextSetting>                     DefaultMappingContexts;                                     // 0x0030   (0x0010)  
	TArray<FDefaultContextSetting>                     DefaultWorldSubsystemMappingContexts;                       // 0x0040   (0x0010)  
	FPerPlatformSettings                               PlatformSettings;                                           // 0x0050   (0x0010)  
	SDK_UNDEFINED(32,1785) /* TWeakObjectPtr<UClass*> */ __um(UserSettingsClass);                                  // 0x0060   (0x0020)  
	SDK_UNDEFINED(32,1786) /* TWeakObjectPtr<UClass*> */ __um(DefaultPlayerMappableKeyProfileClass);               // 0x0080   (0x0020)  
	SDK_UNDEFINED(32,1787) /* TWeakObjectPtr<UClass*> */ __um(DefaultWorldInputClass);                             // 0x00A0   (0x0020)  
	bool                                               bSendTriggeredEventsWhenInputIsFlushed : 1;                 // 0x00C0:0 (0x0001)  
	bool                                               bEnableUserSettings : 1;                                    // 0x00C0:1 (0x0001)  
	bool                                               bEnableDefaultMappingContexts : 1;                          // 0x00C0:2 (0x0001)  
	bool                                               bShouldOnlyTriggerLastActionInChord : 1;                    // 0x00C0:3 (0x0001)  
	bool                                               bLogOnDeprecatedConfigUsed : 1;                             // 0x00C0:4 (0x0001)  
	bool                                               bEnableWorldSubsystem : 1;                                  // 0x00C0:5 (0x0001)  
	bool                                               bShouldLogAllWorldSubsystemInputs : 1;                      // 0x00C0:6 (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x00C1   (0x0007)  MISSED
};

/// Class /Script/EnhancedInput.EnhancedInputLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UEnhancedInputLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/EnhancedInput.EnhancedInputLibrary.RequestRebuildControlMappingsUsingContext
	// void RequestRebuildControlMappingsUsingContext(class UInputMappingContext* Context, bool bForceImmediately);          // [0x7253f54] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/EnhancedInput.EnhancedInputLibrary.MakeInputActionValueOfType
	// FInputActionValue MakeInputActionValueOfType(double X, double Y, double Z, EInputActionValueType ValueType);          // [0x72523c4] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/EnhancedInput.EnhancedInputLibrary.MakeInputActionValue
	// FInputActionValue MakeInputActionValue(double X, double Y, double Z, FInputActionValue& MatchValueType);              // [0x7252224] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/EnhancedInput.EnhancedInputLibrary.IsActionKeyMappingPlayerMappable
	// bool IsActionKeyMappingPlayerMappable(FEnhancedActionKeyMapping& ActionKeyMapping);                                   // [0x7251a44] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/EnhancedInput.EnhancedInputLibrary.GetThirdPlayerMappableKeySlot
	// FPlayerMappableKeySlot GetThirdPlayerMappableKeySlot();                                                               // [0x7250d50] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/EnhancedInput.EnhancedInputLibrary.GetSecondPlayerMappableKeySlot
	// FPlayerMappableKeySlot GetSecondPlayerMappableKeySlot();                                                              // [0x7250d38] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/EnhancedInput.EnhancedInputLibrary.GetPlayerMappableKeySettings
	// class UPlayerMappableKeySettings* GetPlayerMappableKeySettings(FEnhancedActionKeyMapping& ActionKeyMapping);          // [0x7250b98] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/EnhancedInput.EnhancedInputLibrary.GetMappingName
	// FName GetMappingName(FEnhancedActionKeyMapping& ActionKeyMapping);                                                    // [0x725098c] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/EnhancedInput.EnhancedInputLibrary.GetFourthPlayerMappableKeySlot
	// FPlayerMappableKeySlot GetFourthPlayerMappableKeySlot();                                                              // [0x7250570] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/EnhancedInput.EnhancedInputLibrary.GetFirstPlayerMappableKeySlot
	// FPlayerMappableKeySlot GetFirstPlayerMappableKeySlot();                                                               // [0x7250558] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/EnhancedInput.EnhancedInputLibrary.GetBoundActionValue
	// FInputActionValue GetBoundActionValue(class AActor* Actor, class UInputAction* Action);                               // [0x72502b0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/EnhancedInput.EnhancedInputLibrary.Conv_InputActionValueToString
	// FString Conv_InputActionValueToString(FInputActionValue ActionValue);                                                 // [0x724fd4c] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/EnhancedInput.EnhancedInputLibrary.Conv_InputActionValueToBool
	// bool Conv_InputActionValueToBool(FInputActionValue InValue);                                                          // [0x724fbdc] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/EnhancedInput.EnhancedInputLibrary.Conv_InputActionValueToAxis3D
	// FVector Conv_InputActionValueToAxis3D(FInputActionValue ActionValue);                                                 // [0x724fa8c] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/EnhancedInput.EnhancedInputLibrary.Conv_InputActionValueToAxis2D
	// FVector2D Conv_InputActionValueToAxis2D(FInputActionValue InValue);                                                   // [0x724f948] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/EnhancedInput.EnhancedInputLibrary.Conv_InputActionValueToAxis1D
	// double Conv_InputActionValueToAxis1D(FInputActionValue InValue);                                                      // [0x724f7fc] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/EnhancedInput.EnhancedInputLibrary.BreakInputActionValue
	// void BreakInputActionValue(FInputActionValue InActionValue, double& X, double& Y, double& Z, EInputActionValueType& Type); // [0x724f450] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
};

/// Class /Script/EnhancedInput.EnhancedInputPlatformData
/// Size: 0x0050 (0x000028 - 0x000078)
class UEnhancedInputPlatformData : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	SDK_UNDEFINED(80,1788) /* TMap<UInputMappingContext*, UInputMappingContext*> */ __um(MappingContextRedirects); // 0x0028   (0x0050)  


	/// Functions
	// Function /Script/EnhancedInput.EnhancedInputPlatformData.GetContextRedirect
	// class UInputMappingContext* GetContextRedirect(class UInputMappingContext* InContext);                                // [0x725045c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/EnhancedInput.EnhancedInputPlatformSettings
/// Size: 0x0028 (0x000040 - 0x000068)
class UEnhancedInputPlatformSettings : public UPlatformSettings
{ 
public:
	SDK_UNDEFINED(16,1789) /* TArray<TWeakObjectPtr<UClass*>> */ __um(InputData);                                  // 0x0040   (0x0010)  
	TArray<class UClass*>                              InputDataClasses;                                           // 0x0050   (0x0010)  
	bool                                               bShouldLogMappingContextRedirects;                          // 0x0060   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0061   (0x0007)  MISSED
};

/// Class /Script/EnhancedInput.EnhancedInputSubsystemInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UEnhancedInputSubsystemInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/EnhancedInput.EnhancedInputSubsystemInterface.UpdateValueOfContinuousInputInjectionForPlayerMapping
	// void UpdateValueOfContinuousInputInjectionForPlayerMapping(FName MappingName, FInputActionValue RawValue);            // [0x72553e8] Native|Public|BlueprintCallable 
	// Function /Script/EnhancedInput.EnhancedInputSubsystemInterface.UpdateValueOfContinuousInputInjectionForAction
	// void UpdateValueOfContinuousInputInjectionForAction(class UInputAction* Action, FInputActionValue RawValue);          // [0x7255248] Native|Public|BlueprintCallable 
	// Function /Script/EnhancedInput.EnhancedInputSubsystemInterface.StopContinuousInputInjectionForPlayerMapping
	// void StopContinuousInputInjectionForPlayerMapping(FName MappingName);                                                 // [0x72549e4] Native|Public|BlueprintCallable 
	// Function /Script/EnhancedInput.EnhancedInputSubsystemInterface.StopContinuousInputInjectionForAction
	// void StopContinuousInputInjectionForAction(class UInputAction* Action);                                               // [0x7254960] Native|Public|BlueprintCallable 
	// Function /Script/EnhancedInput.EnhancedInputSubsystemInterface.StartContinuousInputInjectionForPlayerMapping
	// void StartContinuousInputInjectionForPlayerMapping(FName MappingName, FInputActionValue RawValue, TArray<UInputModifier*>& Modifiers, TArray<UInputTrigger*>& Triggers); // [0x72546f4] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EnhancedInput.EnhancedInputSubsystemInterface.StartContinuousInputInjectionForAction
	// void StartContinuousInputInjectionForAction(class UInputAction* Action, FInputActionValue RawValue, TArray<UInputModifier*>& Modifiers, TArray<UInputTrigger*>& Triggers); // [0x7254488] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EnhancedInput.EnhancedInputSubsystemInterface.RequestRebuildControlMappings
	// void RequestRebuildControlMappings(FModifyContextOptions& Options, EInputMappingRebuildType RebuildType);             // [0x7253dd4] BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EnhancedInput.EnhancedInputSubsystemInterface.RemovePlayerMappableConfig
	// void RemovePlayerMappableConfig(class UPlayerMappableInputConfig* Config, FModifyContextOptions& Options);            // [0x7253cf8] BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EnhancedInput.EnhancedInputSubsystemInterface.RemoveMappingContext
	// void RemoveMappingContext(class UInputMappingContext* MappingContext, FModifyContextOptions& Options);                // [0x7253c1c] BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EnhancedInput.EnhancedInputSubsystemInterface.RemoveAllPlayerMappedKeysForMapping
	// int32_t RemoveAllPlayerMappedKeysForMapping(FName MappingName, FModifyContextOptions& Options);                       // [0x7253b40] BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EnhancedInput.EnhancedInputSubsystemInterface.RemoveAllPlayerMappedKeys
	// void RemoveAllPlayerMappedKeys(FModifyContextOptions& Options);                                                       // [0x7253aa8] BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EnhancedInput.EnhancedInputSubsystemInterface.QueryMapKeyInContextSet
	// EMappingQueryResult QueryMapKeyInContextSet(TArray<UInputMappingContext*>& PrioritizedActiveContexts, class UInputMappingContext* InputContext, class UInputAction* Action, FKey Key, TArray<FMappingQueryIssue>& OutIssues, EMappingQueryIssue BlockingIssues); // [0x725308c] BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EnhancedInput.EnhancedInputSubsystemInterface.QueryMapKeyInActiveContextSet
	// EMappingQueryResult QueryMapKeyInActiveContextSet(class UInputMappingContext* InputContext, class UInputAction* Action, FKey Key, TArray<FMappingQueryIssue>& OutIssues, EMappingQueryIssue BlockingIssues); // [0x7252c68] BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EnhancedInput.EnhancedInputSubsystemInterface.QueryKeysMappedToAction
	// TArray<FKey> QueryKeysMappedToAction(class UInputAction* Action);                                                     // [0x7252bbc] BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EnhancedInput.EnhancedInputSubsystemInterface.OnUserSettingsChanged
	// void OnUserSettingsChanged(class UEnhancedInputUserSettings* Settings);                                               // [0x7252b3c] Native|Protected     
	// Function /Script/EnhancedInput.EnhancedInputSubsystemInterface.OnUserKeyProfileChanged
	// void OnUserKeyProfileChanged(class UEnhancedPlayerMappableKeyProfile* InNewProfile);                                  // [0x7252abc] Native|Protected     
	// Function /Script/EnhancedInput.EnhancedInputSubsystemInterface.K2_RemovePlayerMappedKeyInSlot
	// int32_t K2_RemovePlayerMappedKeyInSlot(FName MappingName, FPlayerMappableKeySlot& KeySlot, FModifyContextOptions& Options); // [0x72520fc] BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EnhancedInput.EnhancedInputSubsystemInterface.K2_GetPlayerMappedKeyInSlot
	// FKey K2_GetPlayerMappedKeyInSlot(FName MappingName, FPlayerMappableKeySlot& KeySlot);                                 // [0x7252014] BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EnhancedInput.EnhancedInputSubsystemInterface.K2_AddPlayerMappedKeyInSlot
	// int32_t K2_AddPlayerMappedKeyInSlot(FName MappingName, FKey NewKey, FPlayerMappableKeySlot& KeySlot, FModifyContextOptions& Options); // [0x7251c94] BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EnhancedInput.EnhancedInputSubsystemInterface.InjectInputVectorForPlayerMapping
	// void InjectInputVectorForPlayerMapping(FName MappingName, FVector Value, TArray<UInputModifier*>& Modifiers, TArray<UInputTrigger*>& Triggers); // [0x72517f4] Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/EnhancedInput.EnhancedInputSubsystemInterface.InjectInputVectorForAction
	// void InjectInputVectorForAction(class UInputAction* Action, FVector Value, TArray<UInputModifier*>& Modifiers, TArray<UInputTrigger*>& Triggers); // [0x72515a0] Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/EnhancedInput.EnhancedInputSubsystemInterface.InjectInputForPlayerMapping
	// void InjectInputForPlayerMapping(FName MappingName, FInputActionValue RawValue, TArray<UInputModifier*>& Modifiers, TArray<UInputTrigger*>& Triggers); // [0x7251334] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EnhancedInput.EnhancedInputSubsystemInterface.InjectInputForAction
	// void InjectInputForAction(class UInputAction* Action, FInputActionValue RawValue, TArray<UInputModifier*>& Modifiers, TArray<UInputTrigger*>& Triggers); // [0x72510c8] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EnhancedInput.EnhancedInputSubsystemInterface.HasMappingContext
	// bool HasMappingContext(class UInputMappingContext* MappingContext, int32_t& OutFoundPriority);                        // [0x7250ff4] BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EnhancedInput.EnhancedInputSubsystemInterface.GetUserSettings
	// class UEnhancedInputUserSettings* GetUserSettings();                                                                  // [0x67ee0fc] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EnhancedInput.EnhancedInputSubsystemInterface.GetAllPlayerMappedKeys
	// TArray<FKey> GetAllPlayerMappedKeys(FName MappingName);                                                               // [0x7250168] BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EnhancedInput.EnhancedInputSubsystemInterface.GetAllPlayerMappableActionKeyMappings
	// TArray<FEnhancedActionKeyMapping> GetAllPlayerMappableActionKeyMappings();                                            // [0x7250128] BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EnhancedInput.EnhancedInputSubsystemInterface.ClearAllMappings
	// void ClearAllMappings();                                                                                              // [0x724f7e4] BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/EnhancedInput.EnhancedInputSubsystemInterface.AddPlayerMappableConfig
	// void AddPlayerMappableConfig(class UPlayerMappableInputConfig* Config, FModifyContextOptions& Options);               // [0x724f374] BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EnhancedInput.EnhancedInputSubsystemInterface.AddMappingContext
	// void AddMappingContext(class UInputMappingContext* MappingContext, int32_t Priority, FModifyContextOptions& Options); // [0x724f264] BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/EnhancedInput.EnhancedInputLocalPlayerSubsystem
/// Size: 0x01B8 (0x000030 - 0x0001E8)
class UEnhancedInputLocalPlayerSubsystem : public ULocalPlayerSubsystem
{ 
public:
	unsigned char                                      UnknownData00_3[0x150];                                     // 0x0030   (0x0150)  MISSED
	SDK_UNDEFINED(16,1790) /* FMulticastInlineDelegate */ __um(ControlMappingsRebuiltDelegate);                    // 0x0180   (0x0010)  
	class UEnhancedInputUserSettings*                  UserSettings;                                               // 0x0190   (0x0008)  
	SDK_UNDEFINED(80,1791) /* TMap<UInputAction*, FInjectedInput> */ __um(ContinuouslyInjectedInputs);             // 0x0198   (0x0050)  


	/// Functions
	// Function /Script/EnhancedInput.EnhancedInputLocalPlayerSubsystem.OnControlMappingsRebuilt__DelegateSignature
	// void OnControlMappingsRebuilt__DelegateSignature();                                                                   // [0x18a39e4] MulticastDelegate|Public|Delegate 
};

/// Class /Script/EnhancedInput.EnhancedInputWorldSubsystem
/// Size: 0x01C8 (0x000030 - 0x0001F8)
class UEnhancedInputWorldSubsystem : public UWorldSubsystem
{ 
public:
	unsigned char                                      UnknownData00_3[0x150];                                     // 0x0030   (0x0150)  MISSED
	class UEnhancedPlayerInput*                        PlayerInput;                                                // 0x0180   (0x0008)  
	unsigned char                                      UnknownData01_5[0x10];                                      // 0x0188   (0x0010)  MISSED
	SDK_UNDEFINED(16,1792) /* TArray<TWeakObjectPtr<UInputComponent*>> */ __um(CurrentInputStack);                 // 0x0198   (0x0010)  
	SDK_UNDEFINED(80,1793) /* TMap<UInputAction*, FInjectedInput> */ __um(ContinuouslyInjectedInputs);             // 0x01A8   (0x0050)  


	/// Functions
	// Function /Script/EnhancedInput.EnhancedInputWorldSubsystem.RemoveActorInputComponent
	// bool RemoveActorInputComponent(class AActor* Actor);                                                                  // [0x725392c] Final|Native|Public|BlueprintCallable 
	// Function /Script/EnhancedInput.EnhancedInputWorldSubsystem.AddActorInputComponent
	// void AddActorInputComponent(class AActor* Actor);                                                                     // [0x724ef24] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/EnhancedInput.EnhancedActionKeyMapping
/// Size: 0x0050 (0x000000 - 0x000050)
struct FEnhancedActionKeyMapping
{ 
	TArray<class UInputTrigger*>                       Triggers;                                                   // 0x0000   (0x0010)  
	TArray<class UInputModifier*>                      Modifiers;                                                  // 0x0010   (0x0010)  
	class UInputAction*                                Action;                                                     // 0x0020   (0x0008)  
	FKey                                               Key;                                                        // 0x0028   (0x0018)  
	bool                                               bShouldBeIgnored : 1;                                       // 0x0040:0 (0x0001)  
	EPlayerMappableKeySettingBehaviors                 SettingBehavior;                                            // 0x0041   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x0042   (0x0006)  MISSED
	class UPlayerMappableKeySettings*                  PlayerMappableKeySettings;                                  // 0x0048   (0x0008)  
};

/// Class /Script/EnhancedInput.EnhancedPlayerInput
/// Size: 0x0350 (0x000498 - 0x0007E8)
class UEnhancedPlayerInput : public UPlayerInput
{ 
public:
	SDK_UNDEFINED(80,1794) /* TMap<UInputAction*, FKeyConsumptionOptions> */ __um(KeyConsumptionData);             // 0x0498   (0x0050)  
	SDK_UNDEFINED(80,1795) /* TMap<UInputMappingContext*, int32_t> */ __um(AppliedInputContexts);                  // 0x04E8   (0x0050)  
	TArray<FEnhancedActionKeyMapping>                  EnhancedActionMappings;                                     // 0x0538   (0x0010)  
	unsigned char                                      UnknownData00_5[0x50];                                      // 0x0548   (0x0050)  MISSED
	SDK_UNDEFINED(80,1796) /* TMap<UInputAction*, FInputActionInstance> */ __um(ActionInstanceData);               // 0x0598   (0x0050)  
	unsigned char                                      UnknownData01_5[0xA0];                                      // 0x05E8   (0x00A0)  MISSED
	SDK_UNDEFINED(80,1797) /* TMap<FKey, FVector> */   __um(KeysPressedThisTick);                                  // 0x0688   (0x0050)  
	SDK_UNDEFINED(80,1798) /* TMap<UInputAction*, FInjectedInputArray> */ __um(InputsInjectedThisTick);            // 0x06D8   (0x0050)  
	SDK_UNDEFINED(80,1799) /* TSet<UInputAction*> */   __um(LastInjectedActions);                                  // 0x0728   (0x0050)  
	unsigned char                                      UnknownData02_6[0x70];                                      // 0x0778   (0x0070)  MISSED
};

/// Class /Script/EnhancedInput.InputAction
/// Size: 0x0050 (0x000030 - 0x000080)
class UInputAction : public UDataAsset
{ 
public:
	SDK_UNDEFINED(24,1800) /* FText */                 __um(ActionDescription);                                    // 0x0030   (0x0018)  
	bool                                               bTriggerWhenPaused;                                         // 0x0048   (0x0001)  
	bool                                               bConsumeInput;                                              // 0x0049   (0x0001)  
	bool                                               bConsumesActionAndAxisMappings;                             // 0x004A   (0x0001)  
	bool                                               bReserveAllMappings;                                        // 0x004B   (0x0001)  
	int32_t                                            TriggerEventsThatConsumeLegacyKeys;                         // 0x004C   (0x0004)  
	EInputActionValueType                              ValueType;                                                  // 0x0050   (0x0001)  
	EInputActionAccumulationBehavior                   AccumulationBehavior;                                       // 0x0051   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x0052   (0x0006)  MISSED
	TArray<class UInputTrigger*>                       Triggers;                                                   // 0x0058   (0x0010)  
	TArray<class UInputModifier*>                      Modifiers;                                                  // 0x0068   (0x0010)  
	class UPlayerMappableKeySettings*                  PlayerMappableKeySettings;                                  // 0x0078   (0x0008)  
};

/// Struct /Script/EnhancedInput.BlueprintInputDebugKeyDelegateBinding
/// Size: 0x0030 (0x000000 - 0x000030)
struct FBlueprintInputDebugKeyDelegateBinding
{ 
	FInputChord                                        InputChord;                                                 // 0x0000   (0x0020)  
	SDK_UNDEFINED(1,1801) /* TEnumAsByte<EInputEvent> */ __um(InputKeyEvent);                                      // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0021   (0x0003)  MISSED
	FName                                              FunctionNameToBind;                                         // 0x0024   (0x0004)  
	bool                                               bExecuteWhenPaused;                                         // 0x0028   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0029   (0x0007)  MISSED
};

/// Class /Script/EnhancedInput.InputDebugKeyDelegateBinding
/// Size: 0x0010 (0x000028 - 0x000038)
class UInputDebugKeyDelegateBinding : public UInputDelegateBinding
{ 
public:
	TArray<FBlueprintInputDebugKeyDelegateBinding>     InputDebugKeyDelegateBindings;                              // 0x0028   (0x0010)  
};

/// Class /Script/EnhancedInput.InputMappingContext
/// Size: 0x0028 (0x000030 - 0x000058)
class UInputMappingContext : public UDataAsset
{ 
public:
	TArray<FEnhancedActionKeyMapping>                  Mappings;                                                   // 0x0030   (0x0010)  
	SDK_UNDEFINED(24,1802) /* FText */                 __um(ContextDescription);                                   // 0x0040   (0x0018)  


	/// Functions
	// Function /Script/EnhancedInput.InputMappingContext.UnmapKey
	// void UnmapKey(class UInputAction* Action, FKey Key);                                                                  // [0x7254c9c] Final|Native|Public|BlueprintCallable 
	// Function /Script/EnhancedInput.InputMappingContext.UnmapAllKeysFromAction
	// void UnmapAllKeysFromAction(class UInputAction* Action);                                                              // [0x7254bd8] Final|Native|Public|BlueprintCallable 
	// Function /Script/EnhancedInput.InputMappingContext.UnmapAll
	// void UnmapAll();                                                                                                      // [0x7254c58] Final|Native|Public|BlueprintCallable 
	// Function /Script/EnhancedInput.InputMappingContext.UnmapAction
	// void UnmapAction(class UInputAction* Action);                                                                         // [0x7254bd8] Final|Native|Public|BlueprintCallable 
	// Function /Script/EnhancedInput.InputMappingContext.MapKey
	// FEnhancedActionKeyMapping MapKey(class UInputAction* Action, FKey ToKey);                                             // [0x725253c] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/EnhancedInput.InputModifier
/// Size: 0x0000 (0x000028 - 0x000028)
class UInputModifier : public UObject
{ 
public:


	/// Functions
	// Function /Script/EnhancedInput.InputModifier.ModifyRaw
	// FInputActionValue ModifyRaw(class UEnhancedPlayerInput* PlayerInput, FInputActionValue CurrentValue, float DeltaTime); // [0x725281c] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/EnhancedInput.InputModifier.GetVisualizationColor
	// FLinearColor GetVisualizationColor(FInputActionValue SampleValue, FInputActionValue FinalValue);                      // [0x7250d68] Native|Event|Public|HasDefaults|BlueprintEvent|Const 
};

/// Class /Script/EnhancedInput.InputModifierSmoothDelta
/// Size: 0x0040 (0x000028 - 0x000068)
class UInputModifierSmoothDelta : public UInputModifier
{ 
public:
	ENormalizeInputSmoothingType                       SmoothingMethod;                                            // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0029   (0x0003)  MISSED
	float                                              Speed;                                                      // 0x002C   (0x0004)  
	float                                              EasingExponent;                                             // 0x0030   (0x0004)  
	unsigned char                                      UnknownData01_6[0x34];                                      // 0x0034   (0x0034)  MISSED
};

/// Class /Script/EnhancedInput.InputModifierDeadZone
/// Size: 0x0010 (0x000028 - 0x000038)
class UInputModifierDeadZone : public UInputModifier
{ 
public:
	float                                              LowerThreshold;                                             // 0x0028   (0x0004)  
	float                                              UpperThreshold;                                             // 0x002C   (0x0004)  
	EDeadZoneType                                      Type;                                                       // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0031   (0x0007)  MISSED
};

/// Class /Script/EnhancedInput.InputModifierScalar
/// Size: 0x0018 (0x000028 - 0x000040)
class UInputModifierScalar : public UInputModifier
{ 
public:
	FVector                                            Scalar;                                                     // 0x0028   (0x0018)  
};

/// Class /Script/EnhancedInput.InputModifierScaleByDeltaTime
/// Size: 0x0000 (0x000028 - 0x000028)
class UInputModifierScaleByDeltaTime : public UInputModifier
{ 
public:
};

/// Class /Script/EnhancedInput.InputModifierNegate
/// Size: 0x0008 (0x000028 - 0x000030)
class UInputModifierNegate : public UInputModifier
{ 
public:
	bool                                               bX;                                                         // 0x0028   (0x0001)  
	bool                                               bY;                                                         // 0x0029   (0x0001)  
	bool                                               bZ;                                                         // 0x002A   (0x0001)  
	unsigned char                                      UnknownData00_6[0x5];                                       // 0x002B   (0x0005)  MISSED
};

/// Class /Script/EnhancedInput.InputModifierSmooth
/// Size: 0x0030 (0x000028 - 0x000058)
class UInputModifierSmooth : public UInputModifier
{ 
public:
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x0028   (0x0030)  MISSED
};

/// Class /Script/EnhancedInput.InputModifierResponseCurveExponential
/// Size: 0x0018 (0x000028 - 0x000040)
class UInputModifierResponseCurveExponential : public UInputModifier
{ 
public:
	FVector                                            CurveExponent;                                              // 0x0028   (0x0018)  
};

/// Class /Script/EnhancedInput.InputModifierResponseCurveUser
/// Size: 0x0018 (0x000028 - 0x000040)
class UInputModifierResponseCurveUser : public UInputModifier
{ 
public:
	class UCurveFloat*                                 ResponseX;                                                  // 0x0028   (0x0008)  
	class UCurveFloat*                                 ResponseY;                                                  // 0x0030   (0x0008)  
	class UCurveFloat*                                 ResponseZ;                                                  // 0x0038   (0x0008)  
};

/// Class /Script/EnhancedInput.InputModifierFOVScaling
/// Size: 0x0008 (0x000028 - 0x000030)
class UInputModifierFOVScaling : public UInputModifier
{ 
public:
	float                                              FOVScale;                                                   // 0x0028   (0x0004)  
	EFOVScalingType                                    FOVScalingType;                                             // 0x002C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x002D   (0x0003)  MISSED
};

/// Class /Script/EnhancedInput.InputModifierToWorldSpace
/// Size: 0x0000 (0x000028 - 0x000028)
class UInputModifierToWorldSpace : public UInputModifier
{ 
public:
};

/// Class /Script/EnhancedInput.InputModifierSwizzleAxis
/// Size: 0x0008 (0x000028 - 0x000030)
class UInputModifierSwizzleAxis : public UInputModifier
{ 
public:
	EInputAxisSwizzle                                  Order;                                                      // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0029   (0x0007)  MISSED
};

/// Struct /Script/EnhancedInput.InputActionValue
/// Size: 0x0020 (0x000000 - 0x000020)
struct FInputActionValue
{ 
	unsigned char                                      UnknownData00_2[0x20];                                      // 0x0000   (0x0020)  MISSED
};

/// Class /Script/EnhancedInput.InputTrigger
/// Size: 0x0028 (0x000028 - 0x000050)
class UInputTrigger : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	float                                              ActuationThreshold;                                         // 0x0028   (0x0004)  
	bool                                               bShouldAlwaysTick;                                          // 0x002C   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x002D   (0x0003)  MISSED
	FInputActionValue                                  LastValue;                                                  // 0x0030   (0x0020)  


	/// Functions
	// Function /Script/EnhancedInput.InputTrigger.UpdateState
	// ETriggerState UpdateState(class UEnhancedPlayerInput* PlayerInput, FInputActionValue ModifiedValue, float DeltaTime); // [0x7254fc4] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/EnhancedInput.InputTrigger.IsActuated
	// bool IsActuated(FInputActionValue& ForValue);                                                                         // [0x7251afc] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EnhancedInput.InputTrigger.GetTriggerType
	// ETriggerType GetTriggerType();                                                                                        // [0x3912dc4] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
};

/// Class /Script/EnhancedInput.InputTriggerTimedBase
/// Size: 0x0008 (0x000050 - 0x000058)
class UInputTriggerTimedBase : public UInputTrigger
{ 
public:
	float                                              HeldDuration;                                               // 0x0050   (0x0004)  
	bool                                               bAffectedByTimeDilation;                                    // 0x0054   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0055   (0x0003)  MISSED
};

/// Class /Script/EnhancedInput.InputTriggerDown
/// Size: 0x0000 (0x000050 - 0x000050)
class UInputTriggerDown : public UInputTrigger
{ 
public:
};

/// Class /Script/EnhancedInput.InputTriggerPressed
/// Size: 0x0000 (0x000050 - 0x000050)
class UInputTriggerPressed : public UInputTrigger
{ 
public:
};

/// Class /Script/EnhancedInput.InputTriggerReleased
/// Size: 0x0000 (0x000050 - 0x000050)
class UInputTriggerReleased : public UInputTrigger
{ 
public:
};

/// Class /Script/EnhancedInput.InputTriggerHold
/// Size: 0x0010 (0x000058 - 0x000068)
class UInputTriggerHold : public UInputTriggerTimedBase
{ 
public:
	unsigned char                                      UnknownData00_3[0x4];                                       // 0x0058   (0x0004)  MISSED
	float                                              HoldTimeThreshold;                                          // 0x005C   (0x0004)  
	bool                                               bIsOneShot;                                                 // 0x0060   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0061   (0x0007)  MISSED
};

/// Class /Script/EnhancedInput.InputTriggerHoldAndRelease
/// Size: 0x0008 (0x000058 - 0x000060)
class UInputTriggerHoldAndRelease : public UInputTriggerTimedBase
{ 
public:
	float                                              HoldTimeThreshold;                                          // 0x0058   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x005C   (0x0004)  MISSED
};

/// Class /Script/EnhancedInput.InputTriggerTap
/// Size: 0x0008 (0x000058 - 0x000060)
class UInputTriggerTap : public UInputTriggerTimedBase
{ 
public:
	float                                              TapReleaseTimeThreshold;                                    // 0x0058   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x005C   (0x0004)  MISSED
};

/// Class /Script/EnhancedInput.InputTriggerPulse
/// Size: 0x0010 (0x000058 - 0x000068)
class UInputTriggerPulse : public UInputTriggerTimedBase
{ 
public:
	unsigned char                                      UnknownData00_3[0x4];                                       // 0x0058   (0x0004)  MISSED
	bool                                               bTriggerOnStart;                                            // 0x005C   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x005D   (0x0003)  MISSED
	float                                              Interval;                                                   // 0x0060   (0x0004)  
	int32_t                                            TriggerLimit;                                               // 0x0064   (0x0004)  
};

/// Class /Script/EnhancedInput.InputTriggerChordAction
/// Size: 0x0008 (0x000050 - 0x000058)
class UInputTriggerChordAction : public UInputTrigger
{ 
public:
	class UInputAction*                                ChordAction;                                                // 0x0050   (0x0008)  
};

/// Class /Script/EnhancedInput.InputTriggerChordBlocker
/// Size: 0x0000 (0x000058 - 0x000058)
class UInputTriggerChordBlocker : public UInputTriggerChordAction
{ 
public:
};

/// Struct /Script/EnhancedInput.InputComboStepData
/// Size: 0x0010 (0x000000 - 0x000010)
struct FInputComboStepData
{ 
	class UInputAction*                                ComboStepAction;                                            // 0x0000   (0x0008)  
	char                                               ComboStepCompletionStates;                                  // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0009   (0x0003)  MISSED
	float                                              TimeToPressKey;                                             // 0x000C   (0x0004)  
};

/// Struct /Script/EnhancedInput.InputCancelAction
/// Size: 0x0010 (0x000000 - 0x000010)
struct FInputCancelAction
{ 
	class UInputAction*                                CancelAction;                                               // 0x0000   (0x0008)  
	char                                               CancellationStates;                                         // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0009   (0x0007)  MISSED
};

/// Class /Script/EnhancedInput.InputTriggerCombo
/// Size: 0x0028 (0x000050 - 0x000078)
class UInputTriggerCombo : public UInputTrigger
{ 
public:
	int32_t                                            CurrentComboStepIndex;                                      // 0x0050   (0x0004)  
	float                                              CurrentTimeBetweenComboSteps;                               // 0x0054   (0x0004)  
	TArray<FInputComboStepData>                        ComboActions;                                               // 0x0058   (0x0010)  
	TArray<FInputCancelAction>                         InputCancelActions;                                         // 0x0068   (0x0010)  
};

/// Class /Script/EnhancedInput.PlayerMappableInputConfig
/// Size: 0x0080 (0x000030 - 0x0000B0)
class UPlayerMappableInputConfig : public UPrimaryDataAsset
{ 
public:
	FName                                              ConfigName;                                                 // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0034   (0x0004)  MISSED
	SDK_UNDEFINED(24,1803) /* FText */                 __um(ConfigDisplayName);                                    // 0x0038   (0x0018)  
	bool                                               bIsDeprecated;                                              // 0x0050   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0051   (0x0007)  MISSED
	class UObject*                                     MetaData;                                                   // 0x0058   (0x0008)  
	SDK_UNDEFINED(80,1804) /* TMap<UInputMappingContext*, int32_t> */ __um(Contexts);                              // 0x0060   (0x0050)  


	/// Functions
	// Function /Script/EnhancedInput.PlayerMappableInputConfig.ResetToDefault
	// void ResetToDefault();                                                                                                // [0x36203b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/EnhancedInput.PlayerMappableInputConfig.IsDeprecated
	// bool IsDeprecated();                                                                                                  // [0x66be1d4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EnhancedInput.PlayerMappableInputConfig.GetPlayerMappableKeys
	// TArray<FEnhancedActionKeyMapping> GetPlayerMappableKeys();                                                            // [0x7250c50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EnhancedInput.PlayerMappableInputConfig.GetMetadata
	// class UObject* GetMetadata();                                                                                         // [0x7250b80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EnhancedInput.PlayerMappableInputConfig.GetMappingContexts
	// TMap<UInputMappingContext*, int32_t> GetMappingContexts();                                                            // [0x72508fc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EnhancedInput.PlayerMappableInputConfig.GetMappingByName
	// FEnhancedActionKeyMapping GetMappingByName(FName MappingName);                                                        // [0x725084c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EnhancedInput.PlayerMappableInputConfig.GetKeysBoundToAction
	// TArray<FEnhancedActionKeyMapping> GetKeysBoundToAction(class UInputAction* InAction);                                 // [0x7250664] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EnhancedInput.PlayerMappableInputConfig.GetDisplayName
	// FText GetDisplayName();                                                                                               // [0x725053c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EnhancedInput.PlayerMappableInputConfig.GetConfigName
	// FName GetConfigName();                                                                                                // [0x66dfad4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/EnhancedInput.PlayerMappableKeySettings
/// Size: 0x0060 (0x000028 - 0x000088)
class UPlayerMappableKeySettings : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	class UObject*                                     MetaData;                                                   // 0x0028   (0x0008)  
	FName                                              Name;                                                       // 0x0030   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0034   (0x0004)  MISSED
	SDK_UNDEFINED(24,1805) /* FText */                 __um(DisplayName);                                          // 0x0038   (0x0018)  
	SDK_UNDEFINED(24,1806) /* FText */                 __um(DisplayCategory);                                      // 0x0050   (0x0018)  
	FGameplayTagContainer                              SupportedKeyProfiles;                                       // 0x0068   (0x0020)  
};

/// Struct /Script/EnhancedInput.InjectedInput
/// Size: 0x0040 (0x000000 - 0x000040)
struct FInjectedInput
{ 
	TArray<class UInputTrigger*>                       Triggers;                                                   // 0x0020   (0x0010)  
	TArray<class UInputModifier*>                      Modifiers;                                                  // 0x0030   (0x0010)  
};

/// Struct /Script/EnhancedInput.PlayerMappableKeyProfileCreationArgs
/// Size: 0x0030 (0x000000 - 0x000030)
struct FPlayerMappableKeyProfileCreationArgs
{ 
	class UClass*                                      ProfileType;                                                // 0x0000   (0x0008)  
	FGameplayTag                                       ProfileIdentifier;                                          // 0x0008   (0x0004)  
	FPlatformUserId                                    UserId;                                                     // 0x000C   (0x0004)  
	SDK_UNDEFINED(24,1807) /* FText */                 __um(DisplayName);                                          // 0x0010   (0x0018)  
	bool                                               bSetAsCurrentProfile : 1;                                   // 0x0028:0 (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0029   (0x0007)  MISSED
};

/// Struct /Script/EnhancedInput.PlayerKeyMapping
/// Size: 0x0088 (0x000000 - 0x000088)
struct FPlayerKeyMapping
{ 
	FName                                              MappingName;                                                // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	SDK_UNDEFINED(24,1808) /* FText */                 __um(DisplayName);                                          // 0x0008   (0x0018)  
	SDK_UNDEFINED(24,1809) /* FText */                 __um(DisplayCategory);                                      // 0x0020   (0x0018)  
	EPlayerMappableKeySlot                             Slot;                                                       // 0x0038   (0x0001)  
	bool                                               bIsDirty : 1;                                               // 0x0039:0 (0x0001)  
	unsigned char                                      UnknownData01_4[0x6];                                       // 0x003A   (0x0006)  MISSED
	FKey                                               DefaultKey;                                                 // 0x0040   (0x0018)  
	FKey                                               CurrentKey;                                                 // 0x0058   (0x0018)  
	FHardwareDeviceIdentifier                          HardwareDeviceId;                                           // 0x0070   (0x0010)  
	class UInputAction*                                AssociatedInputAction;                                      // 0x0080   (0x0008)  
};

/// Struct /Script/EnhancedInput.MapPlayerKeyArgs
/// Size: 0x0030 (0x000000 - 0x000030)
struct FMapPlayerKeyArgs
{ 
	FName                                              MappingName;                                                // 0x0000   (0x0004)  
	EPlayerMappableKeySlot                             Slot;                                                       // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0005   (0x0003)  MISSED
	FKey                                               NewKey;                                                     // 0x0008   (0x0018)  
	FName                                              HardwareDeviceId;                                           // 0x0020   (0x0004)  
	FGameplayTag                                       ProfileId;                                                  // 0x0024   (0x0004)  
	bool                                               bCreateMatchingSlotIfNeeded : 1;                            // 0x0028:0 (0x0001)  
	bool                                               bDeferOnSettingsChangedBroadcast : 1;                       // 0x0028:1 (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0029   (0x0007)  MISSED
};

/// Struct /Script/EnhancedInput.InputActionInstance
/// Size: 0x0060 (0x000000 - 0x000060)
struct FInputActionInstance
{ 
	class UInputAction*                                SourceAction;                                               // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_5[0xB];                                       // 0x0008   (0x000B)  MISSED
	ETriggerEvent                                      TriggerEvent;                                               // 0x0013   (0x0001)  
	float                                              LastTriggeredWorldTime;                                     // 0x0014   (0x0004)  
	TArray<class UInputTrigger*>                       Triggers;                                                   // 0x0018   (0x0010)  
	TArray<class UInputModifier*>                      Modifiers;                                                  // 0x0028   (0x0010)  
	unsigned char                                      UnknownData01_5[0x20];                                      // 0x0038   (0x0020)  MISSED
	float                                              ElapsedProcessedTime;                                       // 0x0058   (0x0004)  
	float                                              ElapsedTriggeredTime;                                       // 0x005C   (0x0004)  
};

/// Struct /Script/EnhancedInput.KeyMappingRow
/// Size: 0x0050 (0x000000 - 0x000050)
struct FKeyMappingRow
{ 
	SDK_UNDEFINED(80,1810) /* TSet<FPlayerKeyMapping> */ __um(Mappings);                                           // 0x0000   (0x0050)  
};

/// Struct /Script/EnhancedInput.PlayerMappableKeyQueryOptions
/// Size: 0x0028 (0x000000 - 0x000028)
struct FPlayerMappableKeyQueryOptions
{ 
	FName                                              MappingName;                                                // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	FKey                                               KeyToMatch;                                                 // 0x0008   (0x0018)  
	EPlayerMappableKeySlot                             SlotToMatch;                                                // 0x0020   (0x0001)  
	bool                                               bMatchBasicKeyTypes : 1;                                    // 0x0021:0 (0x0001)  
	bool                                               bMatchKeyAxisType : 1;                                      // 0x0021:1 (0x0001)  
	EHardwareDevicePrimaryType                         RequiredDeviceType;                                         // 0x0022   (0x0001)  
	unsigned char                                      UnknownData01_5[0x1];                                       // 0x0023   (0x0001)  MISSED
	int32_t                                            RequiredDeviceFlags;                                        // 0x0024   (0x0004)  
};

/// Struct /Script/EnhancedInput.MappingQueryIssue
/// Size: 0x0018 (0x000000 - 0x000018)
struct FMappingQueryIssue
{ 
	EMappingQueryIssue                                 Issue;                                                      // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	class UInputMappingContext*                        BlockingContext;                                            // 0x0008   (0x0008)  
	class UInputAction*                                BlockingAction;                                             // 0x0010   (0x0008)  
};

/// Struct /Script/EnhancedInput.PlayerMappableKeySlot
/// Size: 0x0004 (0x000000 - 0x000004)
struct FPlayerMappableKeySlot
{ 
	int32_t                                            SlotNumber;                                                 // 0x0000   (0x0004)  
};

/// Struct /Script/EnhancedInput.PlayerMappableKeyOptions
/// Size: 0x0040 (0x000000 - 0x000040)
struct FPlayerMappableKeyOptions
{ 
	class UObject*                                     MetaData;                                                   // 0x0000   (0x0008)  
	FName                                              Name;                                                       // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	SDK_UNDEFINED(24,1811) /* FText */                 __um(DisplayName);                                          // 0x0010   (0x0018)  
	SDK_UNDEFINED(24,1812) /* FText */                 __um(DisplayCategory);                                      // 0x0028   (0x0018)  
};

/// Struct /Script/EnhancedInput.ModifyContextOptions
/// Size: 0x0001 (0x000000 - 0x000001)
struct FModifyContextOptions
{ 
	bool                                               bIgnoreAllPressedKeysUntilRelease : 1;                      // 0x0000:0 (0x0001)  
	bool                                               bForceImmediately : 1;                                      // 0x0000:1 (0x0001)  
	bool                                               bNotifyUserSettings : 1;                                    // 0x0000:2 (0x0001)  
};

/// Struct /Script/EnhancedInput.KeyConsumptionOptions
/// Size: 0x0018 (0x000000 - 0x000018)
struct FKeyConsumptionOptions
{ 
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x0000   (0x0018)  MISSED
};

/// Struct /Script/EnhancedInput.InjectedInputArray
/// Size: 0x0010 (0x000000 - 0x000010)
struct FInjectedInputArray
{ 
	TArray<FInjectedInput>                             Injected;                                                   // 0x0000   (0x0010)  
};

