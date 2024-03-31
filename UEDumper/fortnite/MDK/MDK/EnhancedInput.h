
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine
/// dependency: GameplayTags
/// dependency: InputCore
/// dependency: Slate

/// Class /Script/EnhancedInput.EnhancedPlayerMappableKeyProfile
/// Size: 0x0070 (0x000028 - 0x000098)
class UEnhancedPlayerMappableKeyProfile : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	SMember(FGameplayTag)                              ProfileIdentifier                                           OFFSET(getStruct<T>, {0x28, 4, 0, 0})
	SMember(FPlatformUserId)                           OwningUserId                                                OFFSET(getStruct<T>, {0x2C, 4, 0, 0})
	SMember(FText)                                     DisplayName                                                 OFFSET(getStruct<T>, {0x30, 24, 0, 0})
	CMember(TMap<FName, FKeyMappingRow>)               PlayerMappedKeys                                            OFFSET(get<T>, {0x48, 80, 0, 0})


	/// Functions
	// Function /Script/EnhancedInput.EnhancedPlayerMappableKeyProfile.ToString
	// FString ToString();                                                                                                      // [0x7537f3c] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EnhancedInput.EnhancedPlayerMappableKeyProfile.SetDisplayName
	// void SetDisplayName(FText& NewDisplayName);                                                                              // [0x75377c8] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EnhancedInput.EnhancedPlayerMappableKeyProfile.ResetToDefault
	// void ResetToDefault();                                                                                                   // [0x685d560] Native|Public|BlueprintCallable 
	// Function /Script/EnhancedInput.EnhancedPlayerMappableKeyProfile.ResetMappingToDefault
	// void ResetMappingToDefault(FName InMappingName);                                                                         // [0x7537708] Final|Native|Public|BlueprintCallable 
	// Function /Script/EnhancedInput.EnhancedPlayerMappableKeyProfile.QueryPlayerMappedKeys
	// int32_t QueryPlayerMappedKeys(FPlayerMappableKeyQueryOptions& Options, TArray<FKey>& OutKeys);                           // [0x7536904] Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EnhancedInput.EnhancedPlayerMappableKeyProfile.K2_FindKeyMapping
	// void K2_FindKeyMapping(FPlayerKeyMapping& OutKeyMapping, FMapPlayerKeyArgs& InArgs);                                     // [0x7534628] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EnhancedInput.EnhancedPlayerMappableKeyProfile.GetProfileIdentifer
	// FGameplayTag GetProfileIdentifer();                                                                                      // [0x6d9ccb0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EnhancedInput.EnhancedPlayerMappableKeyProfile.GetProfileDisplayName
	// FText GetProfileDisplayName();                                                                                           // [0x7533564] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EnhancedInput.EnhancedPlayerMappableKeyProfile.GetPlayerMappingRows
	// TMap<FName, FKeyMappingRow> GetPlayerMappingRows();                                                                      // [0x75334d4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EnhancedInput.EnhancedPlayerMappableKeyProfile.GetMappingNamesForKey
	// int32_t GetMappingNamesForKey(FKey& InKey, TArray<FName>& OutMappingNames);                                              // [0x7533260] Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EnhancedInput.EnhancedPlayerMappableKeyProfile.GetMappedKeysInRow
	// int32_t GetMappedKeysInRow(FName MappingName, TArray<FKey>& OutKeys);                                                    // [0x7532eb4] Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EnhancedInput.EnhancedPlayerMappableKeyProfile.DumpProfileToLog
	// void DumpProfileToLog();                                                                                                 // [0x66d63cc] Native|Public|BlueprintCallable|Const 
	// Function /Script/EnhancedInput.EnhancedPlayerMappableKeyProfile.DoesMappingPassQueryOptions
	// bool DoesMappingPassQueryOptions(FPlayerKeyMapping& PlayerMapping, FPlayerMappableKeyQueryOptions& Options);             // [0x75324fc] Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/EnhancedInput.EnhancedInputUserSettings
/// Size: 0x00F8 (0x000028 - 0x000120)
class UEnhancedInputUserSettings : public USaveGame
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	SMember(FMulticastInlineDelegate)                  OnSettingsChanged                                           OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnSettingsApplied                                           OFFSET(getStruct<T>, {0x40, 16, 0, 0})
	SMember(FGameplayTag)                              CurrentProfileIdentifier                                    OFFSET(getStruct<T>, {0x70, 4, 0, 0})
	CMember(TMap<FGameplayTag, UEnhancedPlayerMappableKeyProfile*>) SavedKeyProfiles                               OFFSET(get<T>, {0x78, 80, 0, 0})
	CMember(TWeakObjectPtr<ULocalPlayer*>)             OwningLocalPlayer                                           OFFSET(get<T>, {0xC8, 8, 0, 0})
	CMember(TSet<UInputMappingContext*>)               RegisteredMappingContexts                                   OFFSET(get<T>, {0xD0, 80, 0, 0})


	/// Functions
	// Function /Script/EnhancedInput.EnhancedInputUserSettings.UnregisterInputMappingContexts
	// bool UnregisterInputMappingContexts(TSet<UInputMappingContext*>& MappingContexts);                                       // [0x7538404] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EnhancedInput.EnhancedInputUserSettings.UnregisterInputMappingContext
	// bool UnregisterInputMappingContext(class UInputMappingContext* IMC);                                                     // [0x753832c] Native|Public|BlueprintCallable 
	// Function /Script/EnhancedInput.EnhancedInputUserSettings.UnMapPlayerKey
	// void UnMapPlayerKey(FMapPlayerKeyArgs& InArgs, FGameplayTagContainer& FailureReason);                                    // [0x7537f80] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EnhancedInput.EnhancedInputUserSettings.SetKeyProfile
	// bool SetKeyProfile(FGameplayTag& InProfileId);                                                                           // [0x7537868] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EnhancedInput.EnhancedInputUserSettings.SaveSettings
	// void SaveSettings();                                                                                                     // [0x269edb4] Native|Public|BlueprintCallable 
	// Function /Script/EnhancedInput.EnhancedInputUserSettings.ResetKeyProfileToDefault
	// void ResetKeyProfileToDefault(FGameplayTag& ProfileId, FGameplayTagContainer& FailureReason);                            // [0x75375b0] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EnhancedInput.EnhancedInputUserSettings.ResetAllPlayerKeysInRow
	// void ResetAllPlayerKeysInRow(FMapPlayerKeyArgs& InArgs, FGameplayTagContainer& FailureReason);                           // [0x7537484] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EnhancedInput.EnhancedInputUserSettings.RegisterInputMappingContexts
	// bool RegisterInputMappingContexts(TSet<UInputMappingContext*>& MappingContexts);                                         // [0x7536b24] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EnhancedInput.EnhancedInputUserSettings.RegisterInputMappingContext
	// bool RegisterInputMappingContext(class UInputMappingContext* IMC);                                                       // [0x7536a4c] Native|Public|BlueprintCallable 
	// Function /Script/EnhancedInput.EnhancedInputUserSettings.MapPlayerKey
	// void MapPlayerKey(FMapPlayerKeyArgs& InArgs, FGameplayTagContainer& FailureReason);                                      // [0x7535048] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EnhancedInput.EnhancedInputUserSettings.MappingContextRegisteredWithSettings__DelegateSignature
	// void MappingContextRegisteredWithSettings__DelegateSignature(class UInputMappingContext* IMC);                           // [0x186becc] MulticastDelegate|Public|Delegate 
	// Function /Script/EnhancedInput.EnhancedInputUserSettings.MappableKeyProfileChanged__DelegateSignature
	// void MappableKeyProfileChanged__DelegateSignature(class UEnhancedPlayerMappableKeyProfile* NewProfile);                  // [0x186becc] MulticastDelegate|Public|Delegate 
	// Function /Script/EnhancedInput.EnhancedInputUserSettings.IsMappingContextRegistered
	// bool IsMappingContextRegistered(class UInputMappingContext* IMC);                                                        // [0x75342ec] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EnhancedInput.EnhancedInputUserSettings.GetKeyProfileWithIdentifier
	// class UEnhancedPlayerMappableKeyProfile* GetKeyProfileWithIdentifier(FGameplayTag& ProfileId);                           // [0x7532ca0] Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EnhancedInput.EnhancedInputUserSettings.GetCurrentKeyProfileIdentifier
	// FGameplayTag GetCurrentKeyProfileIdentifier();                                                                           // [0x7532c28] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EnhancedInput.EnhancedInputUserSettings.GetCurrentKeyProfile
	// class UEnhancedPlayerMappableKeyProfile* GetCurrentKeyProfile();                                                         // [0x7532c04] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EnhancedInput.EnhancedInputUserSettings.FindMappingsInRow
	// TSet<FPlayerKeyMapping> FindMappingsInRow(FName MappingName);                                                            // [0x7532620] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EnhancedInput.EnhancedInputUserSettings.EnhancedInputUserSettingsChanged__DelegateSignature
	// void EnhancedInputUserSettingsChanged__DelegateSignature(class UEnhancedInputUserSettings* Settings);                    // [0x186becc] MulticastDelegate|Public|Delegate 
	// Function /Script/EnhancedInput.EnhancedInputUserSettings.EnhancedInputUserSettingsApplied__DelegateSignature
	// void EnhancedInputUserSettingsApplied__DelegateSignature();                                                              // [0x186becc] MulticastDelegate|Public|Delegate 
	// Function /Script/EnhancedInput.EnhancedInputUserSettings.CreateNewKeyProfile
	// class UEnhancedPlayerMappableKeyProfile* CreateNewKeyProfile(FPlayerMappableKeyProfileCreationArgs& InArgs);             // [0x753244c] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EnhancedInput.EnhancedInputUserSettings.AsyncSaveSettings
	// void AsyncSaveSettings();                                                                                                // [0x1bbc518] Native|Public|BlueprintCallable 
	// Function /Script/EnhancedInput.EnhancedInputUserSettings.ApplySettings
	// void ApplySettings();                                                                                                    // [0x66d63cc] Native|Public|BlueprintCallable 
};

/// Class /Script/EnhancedInput.EnhancedInputActionDelegateBinding
/// Size: 0x0010 (0x000028 - 0x000038)
class UEnhancedInputActionDelegateBinding : public UInputDelegateBinding
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<FBlueprintEnhancedInputActionBinding>) InputActionDelegateBindings                              OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Class /Script/EnhancedInput.EnhancedInputActionValueBinding
/// Size: 0x0010 (0x000028 - 0x000038)
class UEnhancedInputActionValueBinding : public UInputDelegateBinding
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<FBlueprintEnhancedInputActionBinding>) InputActionValueBindings                                 OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Class /Script/EnhancedInput.EnhancedInputComponent
/// Size: 0x0038 (0x000128 - 0x000160)
class UEnhancedInputComponent : public UInputComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:


	/// Functions
	// Function /Script/EnhancedInput.EnhancedInputComponent.GetBoundActionValue
	// FInputActionValue GetBoundActionValue(class UInputAction* Action);                                                       // [0x7532828] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/EnhancedInput.EnhancedInputDeveloperSettings
/// Size: 0x0098 (0x000030 - 0x0000C8)
class UEnhancedInputDeveloperSettings : public UDeveloperSettingsBackedByCVars
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	CMember(TArray<FDefaultContextSetting>)            DefaultMappingContexts                                      OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TArray<FDefaultContextSetting>)            DefaultWorldSubsystemMappingContexts                        OFFSET(get<T>, {0x40, 16, 0, 0})
	SMember(FPerPlatformSettings)                      PlatformSettings                                            OFFSET(getStruct<T>, {0x50, 16, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   UserSettingsClass                                           OFFSET(get<T>, {0x60, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   DefaultPlayerMappableKeyProfileClass                        OFFSET(get<T>, {0x80, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   DefaultWorldInputClass                                      OFFSET(get<T>, {0xA0, 32, 0, 0})
	DMember(bool)                                      bSendTriggeredEventsWhenInputIsFlushed                      OFFSET(get<bool>, {0xC0, 1, 1, 0})
	DMember(bool)                                      bEnableUserSettings                                         OFFSET(get<bool>, {0xC0, 1, 1, 1})
	DMember(bool)                                      bEnableDefaultMappingContexts                               OFFSET(get<bool>, {0xC0, 1, 1, 2})
	DMember(bool)                                      bShouldOnlyTriggerLastActionInChord                         OFFSET(get<bool>, {0xC0, 1, 1, 3})
	DMember(bool)                                      bLogOnDeprecatedConfigUsed                                  OFFSET(get<bool>, {0xC0, 1, 1, 4})
	DMember(bool)                                      bEnableWorldSubsystem                                       OFFSET(get<bool>, {0xC0, 1, 1, 5})
	DMember(bool)                                      bShouldLogAllWorldSubsystemInputs                           OFFSET(get<bool>, {0xC0, 1, 1, 6})
};

/// Class /Script/EnhancedInput.EnhancedInputLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UEnhancedInputLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/EnhancedInput.EnhancedInputLibrary.RequestRebuildControlMappingsUsingContext
	// void RequestRebuildControlMappingsUsingContext(class UInputMappingContext* Context, bool bForceImmediately);             // [0x7537344] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/EnhancedInput.EnhancedInputLibrary.MakeInputActionValueOfType
	// FInputActionValue MakeInputActionValueOfType(double X, double Y, double Z, EInputActionValueType ValueType);             // [0x7534c3c] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/EnhancedInput.EnhancedInputLibrary.MakeInputActionValue
	// FInputActionValue MakeInputActionValue(double X, double Y, double Z, FInputActionValue& MatchValueType);                 // [0x75349e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/EnhancedInput.EnhancedInputLibrary.IsActionKeyMappingPlayerMappable
	// bool IsActionKeyMappingPlayerMappable(FEnhancedActionKeyMapping& ActionKeyMapping);                                      // [0x7534178] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/EnhancedInput.EnhancedInputLibrary.GetThirdPlayerMappableKeySlot
	// FPlayerMappableKeySlot GetThirdPlayerMappableKeySlot();                                                                  // [0x7533598] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/EnhancedInput.EnhancedInputLibrary.GetSecondPlayerMappableKeySlot
	// FPlayerMappableKeySlot GetSecondPlayerMappableKeySlot();                                                                 // [0x7533580] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/EnhancedInput.EnhancedInputLibrary.GetPlayerMappableKeySettings
	// class UPlayerMappableKeySettings* GetPlayerMappableKeySettings(FEnhancedActionKeyMapping& ActionKeyMapping);             // [0x75333e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/EnhancedInput.EnhancedInputLibrary.GetMappingName
	// FName GetMappingName(FEnhancedActionKeyMapping& ActionKeyMapping);                                                       // [0x7533198] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/EnhancedInput.EnhancedInputLibrary.GetFourthPlayerMappableKeySlot
	// FPlayerMappableKeySlot GetFourthPlayerMappableKeySlot();                                                                 // [0x7532c88] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/EnhancedInput.EnhancedInputLibrary.GetFirstPlayerMappableKeySlot
	// FPlayerMappableKeySlot GetFirstPlayerMappableKeySlot();                                                                  // [0x7532c70] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/EnhancedInput.EnhancedInputLibrary.GetBoundActionValue
	// FInputActionValue GetBoundActionValue(class AActor* Actor, class UInputAction* Action);                                  // [0x7532908] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/EnhancedInput.EnhancedInputLibrary.Conv_InputActionValueToString
	// FString Conv_InputActionValueToString(FInputActionValue ActionValue);                                                    // [0x7532348] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/EnhancedInput.EnhancedInputLibrary.Conv_InputActionValueToBool
	// bool Conv_InputActionValueToBool(FInputActionValue InValue);                                                             // [0x7532248] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/EnhancedInput.EnhancedInputLibrary.Conv_InputActionValueToAxis3D
	// FVector Conv_InputActionValueToAxis3D(FInputActionValue ActionValue);                                                    // [0x7532168] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/EnhancedInput.EnhancedInputLibrary.Conv_InputActionValueToAxis2D
	// FVector2D Conv_InputActionValueToAxis2D(FInputActionValue InValue);                                                      // [0x7532094] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/EnhancedInput.EnhancedInputLibrary.Conv_InputActionValueToAxis1D
	// double Conv_InputActionValueToAxis1D(FInputActionValue InValue);                                                         // [0x7531fb4] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/EnhancedInput.EnhancedInputLibrary.BreakInputActionValue
	// void BreakInputActionValue(FInputActionValue InActionValue, double& X, double& Y, double& Z, EInputActionValueType& Type); // [0x7531d64] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
};

/// Class /Script/EnhancedInput.EnhancedInputPlatformData
/// Size: 0x0050 (0x000028 - 0x000078)
class UEnhancedInputPlatformData : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	CMember(TMap<UInputMappingContext*, UInputMappingContext*>) MappingContextRedirects                            OFFSET(get<T>, {0x28, 80, 0, 0})


	/// Functions
	// Function /Script/EnhancedInput.EnhancedInputPlatformData.GetContextRedirect
	// class UInputMappingContext* GetContextRedirect(class UInputMappingContext* InContext);                                   // [0x7532b34] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/EnhancedInput.EnhancedInputPlatformSettings
/// Size: 0x0028 (0x000040 - 0x000068)
class UEnhancedInputPlatformSettings : public UPlatformSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	CMember(TArray<TWeakObjectPtr<UClass*>>)           InputData                                                   OFFSET(get<T>, {0x40, 16, 0, 0})
	CMember(TArray<class UClass*>)                     InputDataClasses                                            OFFSET(get<T>, {0x50, 16, 0, 0})
	DMember(bool)                                      bShouldLogMappingContextRedirects                           OFFSET(get<bool>, {0x60, 1, 0, 0})
};

/// Class /Script/EnhancedInput.EnhancedInputSubsystemInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UEnhancedInputSubsystemInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/EnhancedInput.EnhancedInputSubsystemInterface.UpdateValueOfContinuousInputInjectionForPlayerMapping
	// void UpdateValueOfContinuousInputInjectionForPlayerMapping(FName MappingName, FInputActionValue RawValue);               // [0x7538858] Native|Public|BlueprintCallable 
	// Function /Script/EnhancedInput.EnhancedInputSubsystemInterface.UpdateValueOfContinuousInputInjectionForAction
	// void UpdateValueOfContinuousInputInjectionForAction(class UInputAction* Action, FInputActionValue RawValue);             // [0x75386e8] Native|Public|BlueprintCallable 
	// Function /Script/EnhancedInput.EnhancedInputSubsystemInterface.StopContinuousInputInjectionForPlayerMapping
	// void StopContinuousInputInjectionForPlayerMapping(FName MappingName);                                                    // [0x7537e78] Native|Public|BlueprintCallable 
	// Function /Script/EnhancedInput.EnhancedInputSubsystemInterface.StopContinuousInputInjectionForAction
	// void StopContinuousInputInjectionForAction(class UInputAction* Action);                                                  // [0x7537db4] Native|Public|BlueprintCallable 
	// Function /Script/EnhancedInput.EnhancedInputSubsystemInterface.StartContinuousInputInjectionForPlayerMapping
	// void StartContinuousInputInjectionForPlayerMapping(FName MappingName, FInputActionValue RawValue, TArray<UInputModifier*>& Modifiers, TArray<UInputTrigger*>& Triggers); // [0x7537b7c] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EnhancedInput.EnhancedInputSubsystemInterface.StartContinuousInputInjectionForAction
	// void StartContinuousInputInjectionForAction(class UInputAction* Action, FInputActionValue RawValue, TArray<UInputModifier*>& Modifiers, TArray<UInputTrigger*>& Triggers); // [0x7537944] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EnhancedInput.EnhancedInputSubsystemInterface.RequestRebuildControlMappings
	// void RequestRebuildControlMappings(FModifyContextOptions& Options, EInputMappingRebuildType RebuildType);                // [0x75371b8] BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EnhancedInput.EnhancedInputSubsystemInterface.RemovePlayerMappableConfig
	// void RemovePlayerMappableConfig(class UPlayerMappableInputConfig* Config, FModifyContextOptions& Options);               // [0x75370a0] BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EnhancedInput.EnhancedInputSubsystemInterface.RemoveMappingContext
	// void RemoveMappingContext(class UInputMappingContext* MappingContext, FModifyContextOptions& Options);                   // [0x7536f88] BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EnhancedInput.EnhancedInputSubsystemInterface.RemoveAllPlayerMappedKeysForMapping
	// int32_t RemoveAllPlayerMappedKeysForMapping(FName MappingName, FModifyContextOptions& Options);                          // [0x7536e60] BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EnhancedInput.EnhancedInputSubsystemInterface.RemoveAllPlayerMappedKeys
	// void RemoveAllPlayerMappedKeys(FModifyContextOptions& Options);                                                          // [0x7536dc8] BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EnhancedInput.EnhancedInputSubsystemInterface.QueryMapKeyInContextSet
	// EMappingQueryResult QueryMapKeyInContextSet(TArray<UInputMappingContext*>& PrioritizedActiveContexts, class UInputMappingContext* InputContext, class UInputAction* Action, FKey Key, TArray<FMappingQueryIssue>& OutIssues, EMappingQueryIssue BlockingIssues); // [0x7535ec8] BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EnhancedInput.EnhancedInputSubsystemInterface.QueryMapKeyInActiveContextSet
	// EMappingQueryResult QueryMapKeyInActiveContextSet(class UInputMappingContext* InputContext, class UInputAction* Action, FKey Key, TArray<FMappingQueryIssue>& OutIssues, EMappingQueryIssue BlockingIssues); // [0x7535600] BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EnhancedInput.EnhancedInputSubsystemInterface.QueryKeysMappedToAction
	// TArray<FKey> QueryKeysMappedToAction(class UInputAction* Action);                                                        // [0x7535514] BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EnhancedInput.EnhancedInputSubsystemInterface.OnUserSettingsChanged
	// void OnUserSettingsChanged(class UEnhancedInputUserSettings* Settings);                                                  // [0x7535450] Native|Protected     
	// Function /Script/EnhancedInput.EnhancedInputSubsystemInterface.OnUserKeyProfileChanged
	// void OnUserKeyProfileChanged(class UEnhancedPlayerMappableKeyProfile* InNewProfile);                                     // [0x753538c] Native|Protected     
	// Function /Script/EnhancedInput.EnhancedInputSubsystemInterface.K2_RemovePlayerMappedKeyInSlot
	// int32_t K2_RemovePlayerMappedKeyInSlot(FName MappingName, FPlayerMappableKeySlot& KeySlot, FModifyContextOptions& Options); // [0x7534880] BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EnhancedInput.EnhancedInputSubsystemInterface.K2_GetPlayerMappedKeyInSlot
	// FKey K2_GetPlayerMappedKeyInSlot(FName MappingName, FPlayerMappableKeySlot& KeySlot);                                    // [0x753474c] BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EnhancedInput.EnhancedInputSubsystemInterface.K2_AddPlayerMappedKeyInSlot
	// int32_t K2_AddPlayerMappedKeyInSlot(FName MappingName, FKey NewKey, FPlayerMappableKeySlot& KeySlot, FModifyContextOptions& Options); // [0x7534408] BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EnhancedInput.EnhancedInputSubsystemInterface.InjectInputVectorForPlayerMapping
	// void InjectInputVectorForPlayerMapping(FName MappingName, FVector Value, TArray<UInputModifier*>& Modifiers, TArray<UInputTrigger*>& Triggers); // [0x7533f58] Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/EnhancedInput.EnhancedInputSubsystemInterface.InjectInputVectorForAction
	// void InjectInputVectorForAction(class UInputAction* Action, FVector Value, TArray<UInputModifier*>& Modifiers, TArray<UInputTrigger*>& Triggers); // [0x7533d38] Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/EnhancedInput.EnhancedInputSubsystemInterface.InjectInputForPlayerMapping
	// void InjectInputForPlayerMapping(FName MappingName, FInputActionValue RawValue, TArray<UInputModifier*>& Modifiers, TArray<UInputTrigger*>& Triggers); // [0x7533b00] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EnhancedInput.EnhancedInputSubsystemInterface.InjectInputForAction
	// void InjectInputForAction(class UInputAction* Action, FInputActionValue RawValue, TArray<UInputModifier*>& Modifiers, TArray<UInputTrigger*>& Triggers); // [0x75338c8] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EnhancedInput.EnhancedInputSubsystemInterface.HasMappingContext
	// bool HasMappingContext(class UInputMappingContext* MappingContext, int32_t& OutFoundPriority);                           // [0x753376c] BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EnhancedInput.EnhancedInputSubsystemInterface.GetUserSettings
	// class UEnhancedInputUserSettings* GetUserSettings();                                                                     // [0x6810580] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EnhancedInput.EnhancedInputSubsystemInterface.GetAllPlayerMappedKeys
	// TArray<FKey> GetAllPlayerMappedKeys(FName MappingName);                                                                  // [0x753273c] BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EnhancedInput.EnhancedInputSubsystemInterface.GetAllPlayerMappableActionKeyMappings
	// TArray<FEnhancedActionKeyMapping> GetAllPlayerMappableActionKeyMappings();                                               // [0x75326fc] BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EnhancedInput.EnhancedInputSubsystemInterface.ClearAllMappings
	// void ClearAllMappings();                                                                                                 // [0x7531f9c] BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/EnhancedInput.EnhancedInputSubsystemInterface.AddPlayerMappableConfig
	// void AddPlayerMappableConfig(class UPlayerMappableInputConfig* Config, FModifyContextOptions& Options);                  // [0x7531c4c] BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EnhancedInput.EnhancedInputSubsystemInterface.AddMappingContext
	// void AddMappingContext(class UInputMappingContext* MappingContext, int32_t Priority, FModifyContextOptions& Options);    // [0x7531ac8] BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/EnhancedInput.EnhancedInputLocalPlayerSubsystem
/// Size: 0x01B8 (0x000030 - 0x0001E8)
class UEnhancedInputLocalPlayerSubsystem : public ULocalPlayerSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 488;

public:
	SMember(FMulticastInlineDelegate)                  ControlMappingsRebuiltDelegate                              OFFSET(getStruct<T>, {0x180, 16, 0, 0})
	CMember(class UEnhancedInputUserSettings*)         UserSettings                                                OFFSET(get<T>, {0x190, 8, 0, 0})
	CMember(TMap<UInputAction*, FInjectedInput>)       ContinuouslyInjectedInputs                                  OFFSET(get<T>, {0x198, 80, 0, 0})


	/// Functions
	// Function /Script/EnhancedInput.EnhancedInputLocalPlayerSubsystem.OnControlMappingsRebuilt__DelegateSignature
	// void OnControlMappingsRebuilt__DelegateSignature();                                                                      // [0x186becc] MulticastDelegate|Public|Delegate 
};

/// Class /Script/EnhancedInput.EnhancedInputWorldSubsystem
/// Size: 0x01C8 (0x000030 - 0x0001F8)
class UEnhancedInputWorldSubsystem : public UWorldSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 504;

public:
	CMember(class UEnhancedPlayerInput*)               PlayerInput                                                 OFFSET(get<T>, {0x180, 8, 0, 0})
	CMember(TArray<TWeakObjectPtr<UInputComponent*>>)  CurrentInputStack                                           OFFSET(get<T>, {0x198, 16, 0, 0})
	CMember(TMap<UInputAction*, FInjectedInput>)       ContinuouslyInjectedInputs                                  OFFSET(get<T>, {0x1A8, 80, 0, 0})


	/// Functions
	// Function /Script/EnhancedInput.EnhancedInputWorldSubsystem.RemoveActorInputComponent
	// bool RemoveActorInputComponent(class AActor* Actor);                                                                     // [0x7536c0c] Final|Native|Public|BlueprintCallable 
	// Function /Script/EnhancedInput.EnhancedInputWorldSubsystem.AddActorInputComponent
	// void AddActorInputComponent(class AActor* Actor);                                                                        // [0x7531748] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/EnhancedInput.EnhancedPlayerInput
/// Size: 0x0350 (0x000498 - 0x0007E8)
class UEnhancedPlayerInput : public UPlayerInput
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2024;

public:
	CMember(TMap<UInputAction*, FKeyConsumptionOptions>) KeyConsumptionData                                        OFFSET(get<T>, {0x498, 80, 0, 0})
	CMember(TMap<UInputMappingContext*, int32_t>)      AppliedInputContexts                                        OFFSET(get<T>, {0x4E8, 80, 0, 0})
	CMember(TArray<FEnhancedActionKeyMapping>)         EnhancedActionMappings                                      OFFSET(get<T>, {0x538, 16, 0, 0})
	CMember(TMap<UInputAction*, FInputActionInstance>) ActionInstanceData                                          OFFSET(get<T>, {0x598, 80, 0, 0})
	CMember(TMap<FKey, FVector>)                       KeysPressedThisTick                                         OFFSET(get<T>, {0x688, 80, 0, 0})
	CMember(TMap<UInputAction*, FInjectedInputArray>)  InputsInjectedThisTick                                      OFFSET(get<T>, {0x6D8, 80, 0, 0})
	CMember(TSet<UInputAction*>)                       LastInjectedActions                                         OFFSET(get<T>, {0x728, 80, 0, 0})
};

/// Class /Script/EnhancedInput.InputAction
/// Size: 0x0050 (0x000030 - 0x000080)
class UInputAction : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FText)                                     ActionDescription                                           OFFSET(getStruct<T>, {0x30, 24, 0, 0})
	DMember(bool)                                      bTriggerWhenPaused                                          OFFSET(get<bool>, {0x48, 1, 0, 0})
	DMember(bool)                                      bConsumeInput                                               OFFSET(get<bool>, {0x49, 1, 0, 0})
	DMember(bool)                                      bConsumesActionAndAxisMappings                              OFFSET(get<bool>, {0x4A, 1, 0, 0})
	DMember(bool)                                      bReserveAllMappings                                         OFFSET(get<bool>, {0x4B, 1, 0, 0})
	DMember(int32_t)                                   TriggerEventsThatConsumeLegacyKeys                          OFFSET(get<int32_t>, {0x4C, 4, 0, 0})
	CMember(EInputActionValueType)                     ValueType                                                   OFFSET(get<T>, {0x50, 1, 0, 0})
	CMember(EInputActionAccumulationBehavior)          AccumulationBehavior                                        OFFSET(get<T>, {0x51, 1, 0, 0})
	CMember(TArray<class UInputTrigger*>)              Triggers                                                    OFFSET(get<T>, {0x58, 16, 0, 0})
	CMember(TArray<class UInputModifier*>)             Modifiers                                                   OFFSET(get<T>, {0x68, 16, 0, 0})
	CMember(class UPlayerMappableKeySettings*)         PlayerMappableKeySettings                                   OFFSET(get<T>, {0x78, 8, 0, 0})
};

/// Class /Script/EnhancedInput.InputDebugKeyDelegateBinding
/// Size: 0x0010 (0x000028 - 0x000038)
class UInputDebugKeyDelegateBinding : public UInputDelegateBinding
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<FBlueprintInputDebugKeyDelegateBinding>) InputDebugKeyDelegateBindings                          OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Class /Script/EnhancedInput.InputMappingContext
/// Size: 0x0028 (0x000030 - 0x000058)
class UInputMappingContext : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(TArray<FEnhancedActionKeyMapping>)         Mappings                                                    OFFSET(get<T>, {0x30, 16, 0, 0})
	SMember(FText)                                     ContextDescription                                          OFFSET(getStruct<T>, {0x40, 24, 0, 0})


	/// Functions
	// Function /Script/EnhancedInput.InputMappingContext.UnmapKey
	// void UnmapKey(class UInputAction* Action, FKey Key);                                                                     // [0x75381b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/EnhancedInput.InputMappingContext.UnmapAllKeysFromAction
	// void UnmapAllKeysFromAction(class UInputAction* Action);                                                                 // [0x75380ac] Final|Native|Public|BlueprintCallable 
	// Function /Script/EnhancedInput.InputMappingContext.UnmapAll
	// void UnmapAll();                                                                                                         // [0x753816c] Final|Native|Public|BlueprintCallable 
	// Function /Script/EnhancedInput.InputMappingContext.UnmapAction
	// void UnmapAction(class UInputAction* Action);                                                                            // [0x75380ac] Final|Native|Public|BlueprintCallable 
	// Function /Script/EnhancedInput.InputMappingContext.MapKey
	// FEnhancedActionKeyMapping MapKey(class UInputAction* Action, FKey ToKey);                                                // [0x7534eb0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/EnhancedInput.InputModifier
/// Size: 0x0000 (0x000028 - 0x000028)
class UInputModifier : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/EnhancedInput.InputModifier.ModifyRaw
	// FInputActionValue ModifyRaw(class UEnhancedPlayerInput* PlayerInput, FInputActionValue CurrentValue, float DeltaTime);   // [0x7535174] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/EnhancedInput.InputModifier.GetVisualizationColor
	// FLinearColor GetVisualizationColor(FInputActionValue SampleValue, FInputActionValue FinalValue);                         // [0x75335b0] Native|Event|Public|HasDefaults|BlueprintEvent|Const 
};

/// Class /Script/EnhancedInput.InputModifierSmoothDelta
/// Size: 0x0040 (0x000028 - 0x000068)
class UInputModifierSmoothDelta : public UInputModifier
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	CMember(ENormalizeInputSmoothingType)              SmoothingMethod                                             OFFSET(get<T>, {0x28, 1, 0, 0})
	DMember(float)                                     Speed                                                       OFFSET(get<float>, {0x2C, 4, 0, 0})
	DMember(float)                                     EasingExponent                                              OFFSET(get<float>, {0x30, 4, 0, 0})
};

/// Class /Script/EnhancedInput.InputModifierDeadZone
/// Size: 0x0010 (0x000028 - 0x000038)
class UInputModifierDeadZone : public UInputModifier
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(float)                                     LowerThreshold                                              OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(float)                                     UpperThreshold                                              OFFSET(get<float>, {0x2C, 4, 0, 0})
	CMember(EDeadZoneType)                             Type                                                        OFFSET(get<T>, {0x30, 1, 0, 0})
};

/// Class /Script/EnhancedInput.InputModifierScalar
/// Size: 0x0018 (0x000028 - 0x000040)
class UInputModifierScalar : public UInputModifier
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FVector)                                   Scalar                                                      OFFSET(getStruct<T>, {0x28, 24, 0, 0})
};

/// Class /Script/EnhancedInput.InputModifierScaleByDeltaTime
/// Size: 0x0000 (0x000028 - 0x000028)
class UInputModifierScaleByDeltaTime : public UInputModifier
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/EnhancedInput.InputModifierNegate
/// Size: 0x0008 (0x000028 - 0x000030)
class UInputModifierNegate : public UInputModifier
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(bool)                                      bX                                                          OFFSET(get<bool>, {0x28, 1, 0, 0})
	DMember(bool)                                      bY                                                          OFFSET(get<bool>, {0x29, 1, 0, 0})
	DMember(bool)                                      bZ                                                          OFFSET(get<bool>, {0x2A, 1, 0, 0})
};

/// Class /Script/EnhancedInput.InputModifierSmooth
/// Size: 0x0030 (0x000028 - 0x000058)
class UInputModifierSmooth : public UInputModifier
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
};

/// Class /Script/EnhancedInput.InputModifierResponseCurveExponential
/// Size: 0x0018 (0x000028 - 0x000040)
class UInputModifierResponseCurveExponential : public UInputModifier
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FVector)                                   CurveExponent                                               OFFSET(getStruct<T>, {0x28, 24, 0, 0})
};

/// Class /Script/EnhancedInput.InputModifierResponseCurveUser
/// Size: 0x0018 (0x000028 - 0x000040)
class UInputModifierResponseCurveUser : public UInputModifier
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(class UCurveFloat*)                        ResponseX                                                   OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(class UCurveFloat*)                        ResponseY                                                   OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(class UCurveFloat*)                        ResponseZ                                                   OFFSET(get<T>, {0x38, 8, 0, 0})
};

/// Class /Script/EnhancedInput.InputModifierFOVScaling
/// Size: 0x0008 (0x000028 - 0x000030)
class UInputModifierFOVScaling : public UInputModifier
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(float)                                     FOVScale                                                    OFFSET(get<float>, {0x28, 4, 0, 0})
	CMember(EFOVScalingType)                           FOVScalingType                                              OFFSET(get<T>, {0x2C, 1, 0, 0})
};

/// Class /Script/EnhancedInput.InputModifierToWorldSpace
/// Size: 0x0000 (0x000028 - 0x000028)
class UInputModifierToWorldSpace : public UInputModifier
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/EnhancedInput.InputModifierSwizzleAxis
/// Size: 0x0008 (0x000028 - 0x000030)
class UInputModifierSwizzleAxis : public UInputModifier
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(EInputAxisSwizzle)                         Order                                                       OFFSET(get<T>, {0x28, 1, 0, 0})
};

/// Class /Script/EnhancedInput.InputTrigger
/// Size: 0x0028 (0x000028 - 0x000050)
class UInputTrigger : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	DMember(float)                                     ActuationThreshold                                          OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(bool)                                      bShouldAlwaysTick                                           OFFSET(get<bool>, {0x2C, 1, 0, 0})
	SMember(FInputActionValue)                         LastValue                                                   OFFSET(getStruct<T>, {0x30, 32, 0, 0})


	/// Functions
	// Function /Script/EnhancedInput.InputTrigger.UpdateState
	// ETriggerState UpdateState(class UEnhancedPlayerInput* PlayerInput, FInputActionValue ModifiedValue, float DeltaTime);    // [0x75384ec] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/EnhancedInput.InputTrigger.IsActuated
	// bool IsActuated(FInputActionValue& ForValue);                                                                            // [0x7534230] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EnhancedInput.InputTrigger.GetTriggerType
	// ETriggerType GetTriggerType();                                                                                           // [0x33b4560] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
};

/// Class /Script/EnhancedInput.InputTriggerTimedBase
/// Size: 0x0008 (0x000050 - 0x000058)
class UInputTriggerTimedBase : public UInputTrigger
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	DMember(float)                                     HeldDuration                                                OFFSET(get<float>, {0x50, 4, 0, 0})
	DMember(bool)                                      bAffectedByTimeDilation                                     OFFSET(get<bool>, {0x54, 1, 0, 0})
};

/// Class /Script/EnhancedInput.InputTriggerDown
/// Size: 0x0000 (0x000050 - 0x000050)
class UInputTriggerDown : public UInputTrigger
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Class /Script/EnhancedInput.InputTriggerPressed
/// Size: 0x0000 (0x000050 - 0x000050)
class UInputTriggerPressed : public UInputTrigger
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Class /Script/EnhancedInput.InputTriggerReleased
/// Size: 0x0000 (0x000050 - 0x000050)
class UInputTriggerReleased : public UInputTrigger
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Class /Script/EnhancedInput.InputTriggerHold
/// Size: 0x0010 (0x000058 - 0x000068)
class UInputTriggerHold : public UInputTriggerTimedBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	DMember(float)                                     HoldTimeThreshold                                           OFFSET(get<float>, {0x5C, 4, 0, 0})
	DMember(bool)                                      bIsOneShot                                                  OFFSET(get<bool>, {0x60, 1, 0, 0})
};

/// Class /Script/EnhancedInput.InputTriggerHoldAndRelease
/// Size: 0x0008 (0x000058 - 0x000060)
class UInputTriggerHoldAndRelease : public UInputTriggerTimedBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	DMember(float)                                     HoldTimeThreshold                                           OFFSET(get<float>, {0x58, 4, 0, 0})
};

/// Class /Script/EnhancedInput.InputTriggerTap
/// Size: 0x0008 (0x000058 - 0x000060)
class UInputTriggerTap : public UInputTriggerTimedBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	DMember(float)                                     TapReleaseTimeThreshold                                     OFFSET(get<float>, {0x58, 4, 0, 0})
};

/// Class /Script/EnhancedInput.InputTriggerPulse
/// Size: 0x0010 (0x000058 - 0x000068)
class UInputTriggerPulse : public UInputTriggerTimedBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	DMember(bool)                                      bTriggerOnStart                                             OFFSET(get<bool>, {0x5C, 1, 0, 0})
	DMember(float)                                     Interval                                                    OFFSET(get<float>, {0x60, 4, 0, 0})
	DMember(int32_t)                                   TriggerLimit                                                OFFSET(get<int32_t>, {0x64, 4, 0, 0})
};

/// Class /Script/EnhancedInput.InputTriggerChordAction
/// Size: 0x0008 (0x000050 - 0x000058)
class UInputTriggerChordAction : public UInputTrigger
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(class UInputAction*)                       ChordAction                                                 OFFSET(get<T>, {0x50, 8, 0, 0})
};

/// Class /Script/EnhancedInput.InputTriggerChordBlocker
/// Size: 0x0000 (0x000058 - 0x000058)
class UInputTriggerChordBlocker : public UInputTriggerChordAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
};

/// Class /Script/EnhancedInput.InputTriggerCombo
/// Size: 0x0028 (0x000050 - 0x000078)
class UInputTriggerCombo : public UInputTrigger
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	DMember(int32_t)                                   CurrentComboStepIndex                                       OFFSET(get<int32_t>, {0x50, 4, 0, 0})
	DMember(float)                                     CurrentTimeBetweenComboSteps                                OFFSET(get<float>, {0x54, 4, 0, 0})
	CMember(TArray<FInputComboStepData>)               ComboActions                                                OFFSET(get<T>, {0x58, 16, 0, 0})
	CMember(TArray<FInputCancelAction>)                InputCancelActions                                          OFFSET(get<T>, {0x68, 16, 0, 0})
};

/// Class /Script/EnhancedInput.PlayerMappableInputConfig
/// Size: 0x0080 (0x000030 - 0x0000B0)
class UPlayerMappableInputConfig : public UPrimaryDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	SMember(FName)                                     ConfigName                                                  OFFSET(getStruct<T>, {0x30, 4, 0, 0})
	SMember(FText)                                     ConfigDisplayName                                           OFFSET(getStruct<T>, {0x38, 24, 0, 0})
	DMember(bool)                                      bIsDeprecated                                               OFFSET(get<bool>, {0x50, 1, 0, 0})
	CMember(class UObject*)                            MetaData                                                    OFFSET(get<T>, {0x58, 8, 0, 0})
	CMember(TMap<UInputMappingContext*, int32_t>)      Contexts                                                    OFFSET(get<T>, {0x60, 80, 0, 0})


	/// Functions
	// Function /Script/EnhancedInput.PlayerMappableInputConfig.ResetToDefault
	// void ResetToDefault();                                                                                                   // [0x3518b8c] Final|Native|Public|BlueprintCallable 
	// Function /Script/EnhancedInput.PlayerMappableInputConfig.IsDeprecated
	// bool IsDeprecated();                                                                                                     // [0x669d560] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EnhancedInput.PlayerMappableInputConfig.GetPlayerMappableKeys
	// TArray<FEnhancedActionKeyMapping> GetPlayerMappableKeys();                                                               // [0x7533498] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EnhancedInput.PlayerMappableInputConfig.GetMetadata
	// class UObject* GetMetadata();                                                                                            // [0x75333c8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EnhancedInput.PlayerMappableInputConfig.GetMappingContexts
	// TMap<UInputMappingContext*, int32_t> GetMappingContexts();                                                               // [0x7533108] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EnhancedInput.PlayerMappableInputConfig.GetMappingByName
	// FEnhancedActionKeyMapping GetMappingByName(FName MappingName);                                                           // [0x7533018] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EnhancedInput.PlayerMappableInputConfig.GetKeysBoundToAction
	// TArray<FEnhancedActionKeyMapping> GetKeysBoundToAction(class UInputAction* InAction);                                    // [0x7532d7c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EnhancedInput.PlayerMappableInputConfig.GetDisplayName
	// FText GetDisplayName();                                                                                                  // [0x7532c54] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EnhancedInput.PlayerMappableInputConfig.GetConfigName
	// FName GetConfigName();                                                                                                   // [0x66bbe48] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/EnhancedInput.PlayerMappableKeySettings
/// Size: 0x0060 (0x000028 - 0x000088)
class UPlayerMappableKeySettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	CMember(class UObject*)                            MetaData                                                    OFFSET(get<T>, {0x28, 8, 0, 0})
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x30, 4, 0, 0})
	SMember(FText)                                     DisplayName                                                 OFFSET(getStruct<T>, {0x38, 24, 0, 0})
	SMember(FText)                                     DisplayCategory                                             OFFSET(getStruct<T>, {0x50, 24, 0, 0})
	SMember(FGameplayTagContainer)                     SupportedKeyProfiles                                        OFFSET(getStruct<T>, {0x68, 32, 0, 0})
};

/// Struct /Script/EnhancedInput.InputActionValue
/// Size: 0x0020 (0x000000 - 0x000020)
class FInputActionValue : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/EnhancedInput.InjectedInput
/// Size: 0x0040 (0x000000 - 0x000040)
class FInjectedInput : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(TArray<class UInputTrigger*>)              Triggers                                                    OFFSET(get<T>, {0x20, 16, 0, 0})
	CMember(TArray<class UInputModifier*>)             Modifiers                                                   OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Struct /Script/EnhancedInput.PlayerMappableKeyProfileCreationArgs
/// Size: 0x0030 (0x000000 - 0x000030)
class FPlayerMappableKeyProfileCreationArgs : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(class UClass*)                             ProfileType                                                 OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FGameplayTag)                              ProfileIdentifier                                           OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	SMember(FPlatformUserId)                           UserId                                                      OFFSET(getStruct<T>, {0xC, 4, 0, 0})
	SMember(FText)                                     DisplayName                                                 OFFSET(getStruct<T>, {0x10, 24, 0, 0})
	DMember(bool)                                      bSetAsCurrentProfile                                        OFFSET(get<bool>, {0x28, 1, 1, 0})
};

/// Struct /Script/EnhancedInput.PlayerKeyMapping
/// Size: 0x0088 (0x000000 - 0x000088)
class FPlayerKeyMapping : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FName)                                     MappingName                                                 OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FText)                                     DisplayName                                                 OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	SMember(FText)                                     DisplayCategory                                             OFFSET(getStruct<T>, {0x20, 24, 0, 0})
	CMember(EPlayerMappableKeySlot)                    Slot                                                        OFFSET(get<T>, {0x38, 1, 0, 0})
	DMember(bool)                                      bIsDirty                                                    OFFSET(get<bool>, {0x39, 1, 1, 0})
	SMember(FKey)                                      DefaultKey                                                  OFFSET(getStruct<T>, {0x40, 24, 0, 0})
	SMember(FKey)                                      CurrentKey                                                  OFFSET(getStruct<T>, {0x58, 24, 0, 0})
	SMember(FHardwareDeviceIdentifier)                 HardwareDeviceId                                            OFFSET(getStruct<T>, {0x70, 16, 0, 0})
	CMember(class UInputAction*)                       AssociatedInputAction                                       OFFSET(get<T>, {0x80, 8, 0, 0})
};

/// Struct /Script/EnhancedInput.MapPlayerKeyArgs
/// Size: 0x0030 (0x000000 - 0x000030)
class FMapPlayerKeyArgs : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FName)                                     MappingName                                                 OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(EPlayerMappableKeySlot)                    Slot                                                        OFFSET(get<T>, {0x4, 1, 0, 0})
	SMember(FKey)                                      NewKey                                                      OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	SMember(FName)                                     HardwareDeviceId                                            OFFSET(getStruct<T>, {0x20, 4, 0, 0})
	SMember(FGameplayTag)                              ProfileId                                                   OFFSET(getStruct<T>, {0x24, 4, 0, 0})
	DMember(bool)                                      bCreateMatchingSlotIfNeeded                                 OFFSET(get<bool>, {0x28, 1, 1, 0})
	DMember(bool)                                      bDeferOnSettingsChangedBroadcast                            OFFSET(get<bool>, {0x28, 1, 1, 1})
};

/// Struct /Script/EnhancedInput.InputActionInstance
/// Size: 0x0060 (0x000000 - 0x000060)
class FInputActionInstance : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(class UInputAction*)                       SourceAction                                                OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(ETriggerEvent)                             TriggerEvent                                                OFFSET(get<T>, {0x13, 1, 0, 0})
	DMember(float)                                     LastTriggeredWorldTime                                      OFFSET(get<float>, {0x14, 4, 0, 0})
	CMember(TArray<class UInputTrigger*>)              Triggers                                                    OFFSET(get<T>, {0x18, 16, 0, 0})
	CMember(TArray<class UInputModifier*>)             Modifiers                                                   OFFSET(get<T>, {0x28, 16, 0, 0})
	DMember(float)                                     ElapsedProcessedTime                                        OFFSET(get<float>, {0x58, 4, 0, 0})
	DMember(float)                                     ElapsedTriggeredTime                                        OFFSET(get<float>, {0x5C, 4, 0, 0})
};

/// Struct /Script/EnhancedInput.KeyMappingRow
/// Size: 0x0050 (0x000000 - 0x000050)
class FKeyMappingRow : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TSet<FPlayerKeyMapping>)                   Mappings                                                    OFFSET(get<T>, {0x0, 80, 0, 0})
};

/// Struct /Script/EnhancedInput.PlayerMappableKeyQueryOptions
/// Size: 0x0028 (0x000000 - 0x000028)
class FPlayerMappableKeyQueryOptions : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FName)                                     MappingName                                                 OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FKey)                                      KeyToMatch                                                  OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	CMember(EPlayerMappableKeySlot)                    SlotToMatch                                                 OFFSET(get<T>, {0x20, 1, 0, 0})
	DMember(bool)                                      bMatchBasicKeyTypes                                         OFFSET(get<bool>, {0x21, 1, 1, 0})
	DMember(bool)                                      bMatchKeyAxisType                                           OFFSET(get<bool>, {0x21, 1, 1, 1})
	CMember(EHardwareDevicePrimaryType)                RequiredDeviceType                                          OFFSET(get<T>, {0x22, 1, 0, 0})
	DMember(int32_t)                                   RequiredDeviceFlags                                         OFFSET(get<int32_t>, {0x24, 4, 0, 0})
};

/// Struct /Script/EnhancedInput.MappingQueryIssue
/// Size: 0x0018 (0x000000 - 0x000018)
class FMappingQueryIssue : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(EMappingQueryIssue)                        Issue                                                       OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(class UInputMappingContext*)               BlockingContext                                             OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(class UInputAction*)                       BlockingAction                                              OFFSET(get<T>, {0x10, 8, 0, 0})
};

/// Struct /Script/EnhancedInput.PlayerMappableKeySlot
/// Size: 0x0004 (0x000000 - 0x000004)
class FPlayerMappableKeySlot : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(int32_t)                                   SlotNumber                                                  OFFSET(get<int32_t>, {0x0, 4, 0, 0})
};

/// Struct /Script/EnhancedInput.PlayerMappableKeyOptions
/// Size: 0x0040 (0x000000 - 0x000040)
class FPlayerMappableKeyOptions : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(class UObject*)                            MetaData                                                    OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	SMember(FText)                                     DisplayName                                                 OFFSET(getStruct<T>, {0x10, 24, 0, 0})
	SMember(FText)                                     DisplayCategory                                             OFFSET(getStruct<T>, {0x28, 24, 0, 0})
};

/// Struct /Script/EnhancedInput.EnhancedActionKeyMapping
/// Size: 0x0050 (0x000000 - 0x000050)
class FEnhancedActionKeyMapping : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TArray<class UInputTrigger*>)              Triggers                                                    OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<class UInputModifier*>)             Modifiers                                                   OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(class UInputAction*)                       Action                                                      OFFSET(get<T>, {0x20, 8, 0, 0})
	SMember(FKey)                                      Key                                                         OFFSET(getStruct<T>, {0x28, 24, 0, 0})
	DMember(bool)                                      bShouldBeIgnored                                            OFFSET(get<bool>, {0x40, 1, 1, 0})
	CMember(EPlayerMappableKeySettingBehaviors)        SettingBehavior                                             OFFSET(get<T>, {0x41, 1, 0, 0})
	CMember(class UPlayerMappableKeySettings*)         PlayerMappableKeySettings                                   OFFSET(get<T>, {0x48, 8, 0, 0})
};

/// Struct /Script/EnhancedInput.BlueprintEnhancedInputActionBinding
/// Size: 0x0010 (0x000000 - 0x000010)
class FBlueprintEnhancedInputActionBinding : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class UInputAction*)                       InputAction                                                 OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(ETriggerEvent)                             TriggerEvent                                                OFFSET(get<T>, {0x8, 1, 0, 0})
	SMember(FName)                                     FunctionNameToBind                                          OFFSET(getStruct<T>, {0xC, 4, 0, 0})
};

/// Struct /Script/EnhancedInput.DefaultContextSetting
/// Size: 0x0028 (0x000000 - 0x000028)
class FDefaultContextSetting : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(TWeakObjectPtr<UInputMappingContext*>)     InputMappingContext                                         OFFSET(get<T>, {0x0, 32, 0, 0})
	DMember(int32_t)                                   Priority                                                    OFFSET(get<int32_t>, {0x20, 4, 0, 0})
	DMember(bool)                                      bAddImmediately                                             OFFSET(get<bool>, {0x24, 1, 0, 0})
	DMember(bool)                                      bRegisterWithUserSettings                                   OFFSET(get<bool>, {0x25, 1, 0, 0})
};

/// Struct /Script/EnhancedInput.ModifyContextOptions
/// Size: 0x0001 (0x000000 - 0x000001)
class FModifyContextOptions : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
	DMember(bool)                                      bIgnoreAllPressedKeysUntilRelease                           OFFSET(get<bool>, {0x0, 1, 1, 0})
	DMember(bool)                                      bForceImmediately                                           OFFSET(get<bool>, {0x0, 1, 1, 1})
	DMember(bool)                                      bNotifyUserSettings                                         OFFSET(get<bool>, {0x0, 1, 1, 2})
};

/// Struct /Script/EnhancedInput.KeyConsumptionOptions
/// Size: 0x0018 (0x000000 - 0x000018)
class FKeyConsumptionOptions : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/EnhancedInput.InjectedInputArray
/// Size: 0x0010 (0x000000 - 0x000010)
class FInjectedInputArray : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FInjectedInput>)                    Injected                                                    OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/EnhancedInput.BlueprintInputDebugKeyDelegateBinding
/// Size: 0x0030 (0x000000 - 0x000030)
class FBlueprintInputDebugKeyDelegateBinding : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FInputChord)                               InputChord                                                  OFFSET(getStruct<T>, {0x0, 32, 0, 0})
	CMember(TEnumAsByte<EInputEvent>)                  InputKeyEvent                                               OFFSET(get<T>, {0x20, 1, 0, 0})
	SMember(FName)                                     FunctionNameToBind                                          OFFSET(getStruct<T>, {0x24, 4, 0, 0})
	DMember(bool)                                      bExecuteWhenPaused                                          OFFSET(get<bool>, {0x28, 1, 0, 0})
};

/// Struct /Script/EnhancedInput.InputComboStepData
/// Size: 0x0010 (0x000000 - 0x000010)
class FInputComboStepData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class UInputAction*)                       ComboStepAction                                             OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(char)                                      ComboStepCompletionStates                                   OFFSET(get<char>, {0x8, 1, 0, 0})
	DMember(float)                                     TimeToPressKey                                              OFFSET(get<float>, {0xC, 4, 0, 0})
};

/// Struct /Script/EnhancedInput.InputCancelAction
/// Size: 0x0010 (0x000000 - 0x000010)
class FInputCancelAction : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class UInputAction*)                       CancelAction                                                OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(char)                                      CancellationStates                                          OFFSET(get<char>, {0x8, 1, 0, 0})
};

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

