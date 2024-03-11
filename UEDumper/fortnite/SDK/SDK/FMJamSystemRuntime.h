
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CommonUI
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FMJamCoreRuntime
/// dependency: FortniteGame
/// dependency: GameplayAbilities
/// dependency: GameplayEventRouter
/// dependency: GameplayTags
/// dependency: ModularGameplay
/// dependency: PlayspaceSystem
/// dependency: UMG

/// Class /Script/FMJamSystemRuntime.JamControllerComponent
/// Size: 0x0028 (0x0000A0 - 0x0000C8)
class UJamControllerComponent : public UControllerComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x00A0   (0x0008)  MISSED
	FGameplayTagContainer                              AdditionalTags;                                             // 0x00A8   (0x0020)  


	/// Functions
	// Function /Script/FMJamSystemRuntime.JamControllerComponent.UpdateJamUI
	// void UpdateJamUI();                                                                                                   // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/FMJamSystemRuntime.JamControllerComponent.GetControllerOfClass
	// class AController* GetControllerOfClass(class UClass* ControllerType, bool bMatchChildTypes);                         // [0xa515f3c] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/FMJamSystemRuntime.JamControllerComponent_LoopOptions
/// Size: 0x0070 (0x0000A0 - 0x000110)
class UJamControllerComponent_LoopOptions : public UControllerComponent
{ 
public:
	FName                                              CategoryNameLocker;                                         // 0x00A0   (0x0004)  
	FName                                              CategoryNameAll;                                            // 0x00A4   (0x0004)  
	SDK_UNDEFINED(24,13919) /* FText */                __um(CategoryTitleLocker);                                  // 0x00A8   (0x0018)  
	SDK_UNDEFINED(24,13920) /* FText */                __um(CategoryTitleAll);                                     // 0x00C0   (0x0018)  
	SDK_UNDEFINED(32,13921) /* TWeakObjectPtr<UClass*> */ __um(EmoteWheelOverlay);                                 // 0x00D8   (0x0020)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x00F8   (0x0018)  MISSED


	/// Functions
	// Function /Script/FMJamSystemRuntime.JamControllerComponent_LoopOptions.OnLoadoutChanged
	// void OnLoadoutChanged();                                                                                              // [0xa51632c] Final|Native|Private 
	// Function /Script/FMJamSystemRuntime.JamControllerComponent_LoopOptions.AddJamCategories
	// void AddJamCategories(bool bPostLockerCategory);                                                                      // [0xa515ebc] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/FMJamSystemRuntime.JamControllerComponent_LoopPreloader
/// Size: 0x0058 (0x0000A0 - 0x0000F8)
class UJamControllerComponent_LoopPreloader : public UControllerComponent
{ 
public:
	bool                                               bHaveRegisteredForOnLoadoutFilled;                          // 0x00A0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x57];                                      // 0x00A1   (0x0057)  MISSED


	/// Functions
	// Function /Script/FMJamSystemRuntime.JamControllerComponent_LoopPreloader.OnSongCatalogRetrieved
	// void OnSongCatalogRetrieved(bool bSuccess);                                                                           // [0x2b1f148] Final|Native|Protected 
	// Function /Script/FMJamSystemRuntime.JamControllerComponent_LoopPreloader.OnPawnSet
	// void OnPawnSet(class APlayerState* Player, class APawn* NewPawn, class APawn* OldPawn);                               // [0xa516368] Final|Native|Protected 
	// Function /Script/FMJamSystemRuntime.JamControllerComponent_LoopPreloader.OnLoadoutFilled
	// void OnLoadoutFilled();                                                                                               // [0xa516340] Final|Native|Protected 
};

/// Class /Script/FMJamSystemRuntime.JamGlobalControlsWidget
/// Size: 0x0008 (0x000400 - 0x000408)
class UJamGlobalControlsWidget : public UCommonActivatableWidget
{ 
public:
	class UCommonButtonBase*                           Button_Close;                                               // 0x0400   (0x0008)  


	/// Functions
	// Function /Script/FMJamSystemRuntime.JamGlobalControlsWidget.Close
	// void Close();                                                                                                         // [0x3ee1514] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/FMJamSystemRuntime.JamOnOffSwitchComponent
/// Size: 0x0110 (0x0000A0 - 0x0001B0)
class UJamOnOffSwitchComponent : public UPlayerStateComponent
{ 
public:
	FScalableFloat                                     bEnableJam;                                                 // 0x00A0   (0x0028)  
	class UClass*                                      JamBlockerEffect;                                           // 0x00C8   (0x0008)  
	FActiveGameplayEffectHandle                        JamBlockerEffectHandle;                                     // 0x00D0   (0x0008)  
	FGameplayEventListenerHandle                       GamePhaseUpdatedEventHandle;                                // 0x00D8   (0x001C)  
	FGameplayEventListenerHandle                       GamePhaseStepUpdatedEventHandle;                            // 0x00F4   (0x001C)  
	FGlobalMemoryRequestHandle                         GlobalMemoryRequestHandle;                                  // 0x0110   (0x0008)  
	unsigned char                                      UnknownData00_6[0x98];                                      // 0x0118   (0x0098)  MISSED


	/// Functions
	// Function /Script/FMJamSystemRuntime.JamOnOffSwitchComponent.ShouldApplyJamOnSplitscreenLogic
	// bool ShouldApplyJamOnSplitscreenLogic(class UObject* WorldContextObject, class APlayerController* ReferenceController); // [0x3912128] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/FMJamSystemRuntime.JamOnOffSwitchComponent.OnPlayerStatePawnSet
	// void OnPlayerStatePawnSet(class APlayerState* Player, class APawn* NewPawn, class APawn* OldPawn);                    // [0xa516460] Final|Native|Protected 
	// Function /Script/FMJamSystemRuntime.JamOnOffSwitchComponent.OnMutatorUpdated
	// void OnMutatorUpdated();                                                                                              // [0xa516354] Final|Native|Protected 
};

/// Class /Script/FMJamSystemRuntime.JamPlayerPawnComponent
/// Size: 0x0028 (0x0000A0 - 0x0000C8)
class UJamPlayerPawnComponent : public UPawnComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x00A0   (0x0008)  MISSED
	FGameplayTagContainer                              AdditionalTags;                                             // 0x00A8   (0x0020)  


	/// Functions
	// Function /Script/FMJamSystemRuntime.JamPlayerPawnComponent.GetPawnOfClass
	// class APawn* GetPawnOfClass(class UClass* PawnType, bool bMatchChildTypes);                                           // [0xa516224] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/FMJamSystemRuntime.JamQuestComponent
/// Size: 0x0048 (0x0000A0 - 0x0000E8)
class UJamQuestComponent : public UPlayspaceComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x48];                                      // 0x00A0   (0x0048)  MISSED
};

/// Class /Script/FMJamSystemRuntime.JamSystemEmoteBPFL
/// Size: 0x0000 (0x000028 - 0x000028)
class UJamSystemEmoteBPFL : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/FMJamSystemRuntime.JamSystemEmoteBPFL.IsJamDebugDisplayEnabled
	// bool IsJamDebugDisplayEnabled();                                                                                      // [0xa516310] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/FMJamSystemRuntime.JamSystemEmoteBPFL.GetEmoteActionBinding
	// void GetEmoteActionBinding(FString EmoteTemplateID, FEmoteActionBinding& OutCreatedEmote);                            // [0xa516028] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
};

/// Class /Script/FMJamSystemRuntime.JamVerbProcessor_Jam
/// Size: 0x0000 (0x000098 - 0x000098)
class UJamVerbProcessor_Jam : public UObjectiveProcessor
{ 
public:
};

/// Struct /Script/FMJamSystemRuntime.JamVerbMessage_Jam
/// Size: 0x0010 (0x000078 - 0x000088)
struct FJamVerbMessage_Jam : FVerbMessage
{ 
	bool                                               bIsFullBand;                                                // 0x0078   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0079   (0x0003)  MISSED
	int32_t                                            BandSize;                                                   // 0x007C   (0x0004)  
	EFMJamLoopType                                     LoopType;                                                   // 0x0080   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0081   (0x0007)  MISSED
};

/// Struct /Script/FMJamSystemRuntime.JamVerbFilter_Jam
/// Size: 0x0018 (0x0000A0 - 0x0000B8)
struct FJamVerbFilter_Jam : FObjectiveFilter
{ 
	bool                                               bRequireFullBand : 1;                                       // 0x00A0:0 (0x0001)  
	bool                                               bUsebandSize : 1;                                           // 0x00A0:1 (0x0001)  
	unsigned char                                      UnknownData00_4[0x3];                                       // 0x00A1   (0x0003)  MISSED
	FInt32Range                                        BandSize;                                                   // 0x00A4   (0x0010)  
	bool                                               bUseLoopType : 1;                                           // 0x00B4:0 (0x0001)  
	EFMJamLoopType                                     LoopType;                                                   // 0x00B5   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x00B6   (0x0002)  MISSED
};

