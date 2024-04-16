
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CommonUI
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteUI
/// dependency: GameplayTags
/// dependency: UMG

/// Class /Script/XpEverywhereUI.XpEverywhereAccoladesWidget
/// Size: 0x0080 (0x000330 - 0x0003B0)
class UXpEverywhereAccoladesWidget : public UFortHUDElementWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 944;

public:
	SMember(FFortPrioritizedWidgetData)                PrioritizationData                                          OFFSET(getStruct<T>, {0x3A0, 2, 0, 0})


	/// Functions
	// Function /Script/XpEverywhereUI.XpEverywhereAccoladesWidget.OpenWidget
	// void OpenWidget(class UFortAccoladeItemDefinition* AccoladeDef, int32_t XpValue, FText& DisplayName, TWeakObjectPtr<UTexture2D*>& AccoladeLargePreviewImageOverride, FText& SimulatedName, FText& SimulatedText, EFortSimulatedXPSize SimulatedXpSize); // [0x246f7d8] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/XpEverywhereUI.XpEverywhereAccoladesWidget.OnStompedByOtherWidget
	// void OnStompedByOtherWidget();                                                                                           // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Script/XpEverywhereUI.XpEverywhereAccoladesWidget.OnEventAdded
	// void OnEventAdded();                                                                                                     // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Script/XpEverywhereUI.XpEverywhereAccoladesWidget.HasMoreXPEvents
	// bool HasMoreXPEvents();                                                                                                  // [0xbab51cc] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/XpEverywhereUI.XpEverywhereAccoladesWidget.CloseWidget
	// void CloseWidget();                                                                                                      // [0xc5577a4] Final|Native|Protected|BlueprintCallable 
	// Function /Script/XpEverywhereUI.XpEverywhereAccoladesWidget.AccoladeTriggered
	// void AccoladeTriggered(int32_t XpValue, FText& SimulatedName, FText& SimulatedText, TWeakObjectPtr<UTexture2D*>& PreviewImage, EFortSimulatedXPSize SimulatedXpSize, EFortAccoladeType AccoladeType, TWeakObjectPtr<USoundCue*>& SoundCue, EFortAccoladeTierType AccoladeTier); // [0x246f7d8] Event|Protected|HasOutParms|BlueprintEvent 
};

/// Class /Script/XpEverywhereUI.XpEverywhereBar
/// Size: 0x0050 (0x0002F0 - 0x000340)
class UXpEverywhereBar : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 832;

public:
	DMember(bool)                                      bXpBarAlwaysActive                                          OFFSET(get<bool>, {0x2F0, 1, 0, 0})
	CMember(class UFortSocialAvatarIcon*)              SocialAvatarIcon                                            OFFSET(get<T>, {0x2F8, 8, 0, 0})


	/// Functions
	// Function /Script/XpEverywhereUI.XpEverywhereBar.OnXpBarUpdated
	// void OnXpBarUpdated(int32_t ShownXP, int32_t ShownLevel, int32_t NewDesiredXP, int32_t NewDesiredLevel, int32_t NewRemainingRestXP); // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Script/XpEverywhereUI.XpEverywhereBar.OnXpBarInitialized
	// void OnXpBarInitialized(int32_t CurrentXP, int32_t CurrentLevel, int32_t CurrentRemainingRestXP);                        // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Script/XpEverywhereUI.XpEverywhereBar.GetTotalXpRequiredForLevel
	// int32_t GetTotalXpRequiredForLevel(int32_t InLevel);                                                                     // [0xc55786c] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/XpEverywhereUI.XpEverywhereBar.DoneUpdatingXpBar
	// void DoneUpdatingXpBar();                                                                                                // [0xc557844] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/XpEverywhereUI.XpEverywhereLevelUpWidget
/// Size: 0x0008 (0x0002F0 - 0x0002F8)
class UXpEverywhereLevelUpWidget : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 760;

public:


	/// Functions
	// Function /Script/XpEverywhereUI.XpEverywhereLevelUpWidget.OnShowWidget
	// void OnShowWidget(int32_t NewLevel);                                                                                     // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Script/XpEverywhereUI.XpEverywhereLevelUpWidget.DoneLevelingUp
	// void DoneLevelingUp();                                                                                                   // [0xc557800] Final|Native|Protected|BlueprintCallable 
	// Function /Script/XpEverywhereUI.XpEverywhereLevelUpWidget.DisplayLevelUpRewards
	// void DisplayLevelUpRewards();                                                                                            // [0xc5577b8] Final|Native|Protected|BlueprintCallable|Const 
};

/// Class /Script/XpEverywhereUI.XpEverywhereReticleWidget
/// Size: 0x0018 (0x000330 - 0x000348)
class UXpEverywhereReticleWidget : public UFortHUDElementWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 840;

public:


	/// Functions
	// Function /Script/XpEverywhereUI.XpEverywhereReticleWidget.UpdateXPSource
	// void UpdateXPSource(FText& NewSourceText);                                                                               // [0x246f7d8] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/XpEverywhereUI.XpEverywhereReticleWidget.UpdateXPAmount
	// void UpdateXPAmount(int32_t NewAmount, class USoundCue* Cue, EFortSimulatedXPSize SimulatedXpSize);                      // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Script/XpEverywhereUI.XpEverywhereReticleWidget.UpdateRestXP
	// void UpdateRestXP(int32_t RestXpRemaining);                                                                              // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Script/XpEverywhereUI.XpEverywhereReticleWidget.HandleProfileUpdated
	// void HandleProfileUpdated();                                                                                             // [0xc557ae8] Final|Native|Protected 
	// Function /Script/XpEverywhereUI.XpEverywhereReticleWidget.ForwardEvents
	// void ForwardEvents();                                                                                                    // [0xc557858] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/XpEverywhereUI.XpEverywhereRewardWidget
/// Size: 0x0090 (0x000330 - 0x0003C0)
class UXpEverywhereRewardWidget : public UFortHUDElementWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 960;

public:
	CMember(class UClass*)                             DefaultEntryClass                                           OFFSET(get<T>, {0x378, 8, 0, 0})
	DMember(bool)                                      bHasPrioritizedWidgetFocus                                  OFFSET(get<bool>, {0x380, 1, 0, 0})
	CMember(class UFortNotificationEntry*)             ActiveWidget                                                OFFSET(get<T>, {0x388, 8, 0, 0})
	CMember(TArray<class UFortNotificationEntry*>)     WidgetQueue                                                 OFFSET(get<T>, {0x390, 16, 0, 0})
	CMember(class UVerticalBox*)                       NotificationUpdatesBox                                      OFFSET(get<T>, {0x3A0, 8, 0, 0})
	CMember(TArray<FXpEverywhereNotificationWidgetClass>) NotificationClassPoolData                                OFFSET(get<T>, {0x3A8, 16, 0, 0})
	SMember(FFortPrioritizedWidgetData)                PrioritizationData                                          OFFSET(getStruct<T>, {0x3B8, 2, 0, 0})


	/// Functions
	// Function /Script/XpEverywhereUI.XpEverywhereRewardWidget.HandleNotificationUpdateFinished
	// void HandleNotificationUpdateFinished();                                                                                 // [0xc557ad4] Final|Native|Protected 
};

/// Class /Script/XpEverywhereUI.XpEverywhereUIComponent
/// Size: 0x00D8 (0x0000A0 - 0x000178)
class UXpEverywhereUIComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 376;

public:
	SMember(FGameplayTagContainer)                     XpEverywhereHiddenElementTags                               OFFSET(getStruct<T>, {0x148, 32, 0, 0})


	/// Functions
	// Function /Script/XpEverywhereUI.XpEverywhereUIComponent.HandleControllerComponentAdded
	// void HandleControllerComponentAdded(class AFortPlayerController* OwnerController, class UFortControllerComponent* AttachedComponent); // [0xc557938] Final|Native|Private 
};

/// Struct /Script/XpEverywhereUI.XpEverywhereNotificationWidgetClass
/// Size: 0x0020 (0x000000 - 0x000020)
class FXpEverywhereNotificationWidgetClass : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(class UClass*)                             NotificationWidgetClass                                     OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(int32_t)                                   InitialPoolSize                                             OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(bool)                                      bCanIncreasePoolSizeAtRunTime                               OFFSET(get<bool>, {0xC, 1, 0, 0})
	CMember(TArray<class UFortNotificationEntry*>)     WidgetPool                                                  OFFSET(get<T>, {0x10, 16, 0, 0})
};

