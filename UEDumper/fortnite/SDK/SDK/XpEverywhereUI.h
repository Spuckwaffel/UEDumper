
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
/// dependency: FortniteUI
/// dependency: GameplayTags
/// dependency: UMG

/// Class /Script/XpEverywhereUI.XpEverywhereAccoladesWidget
/// Size: 0x0088 (0x000328 - 0x0003B0)
class UXpEverywhereAccoladesWidget : public UFortHUDElementWidget
{ 
public:
	unsigned char                                      UnknownData00_3[0x78];                                      // 0x0328   (0x0078)  MISSED
	FFortPrioritizedWidgetData                         PrioritizationData;                                         // 0x03A0   (0x0002)  
	unsigned char                                      UnknownData01_6[0xE];                                       // 0x03A2   (0x000E)  MISSED


	/// Functions
	// Function /Script/XpEverywhereUI.XpEverywhereAccoladesWidget.OpenWidget
	// void OpenWidget(class UFortAccoladeItemDefinition* AccoladeDef, int32_t XpValue, FText& DisplayName, TWeakObjectPtr<UTexture2D*>& AccoladeLargePreviewImageOverride, FText& SimulatedName, FText& SimulatedText, EFortSimulatedXPSize SimulatedXpSize); // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/XpEverywhereUI.XpEverywhereAccoladesWidget.OnStompedByOtherWidget
	// void OnStompedByOtherWidget();                                                                                        // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/XpEverywhereUI.XpEverywhereAccoladesWidget.OnEventAdded
	// void OnEventAdded();                                                                                                  // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/XpEverywhereUI.XpEverywhereAccoladesWidget.HasMoreXPEvents
	// bool HasMoreXPEvents();                                                                                               // [0xaa5b034] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/XpEverywhereUI.XpEverywhereAccoladesWidget.CloseWidget
	// void CloseWidget();                                                                                                   // [0xad072d0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/XpEverywhereUI.XpEverywhereAccoladesWidget.AccoladeTriggered
	// void AccoladeTriggered(int32_t XpValue, FText& SimulatedName, FText& SimulatedText, TWeakObjectPtr<UTexture2D*>& PreviewImage, EFortSimulatedXPSize SimulatedXpSize, EFortAccoladeType AccoladeType, TWeakObjectPtr<USoundCue*>& SoundCue); // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
};

/// Class /Script/XpEverywhereUI.XpEverywhereBar
/// Size: 0x0050 (0x0002E8 - 0x000338)
class UXpEverywhereBar : public UCommonUserWidget
{ 
public:
	bool                                               bXpBarAlwaysActive;                                         // 0x02E8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x02E9   (0x0007)  MISSED
	class UFortSocialAvatarIcon*                       SocialAvatarIcon;                                           // 0x02F0   (0x0008)  
	unsigned char                                      UnknownData01_6[0x40];                                      // 0x02F8   (0x0040)  MISSED


	/// Functions
	// Function /Script/XpEverywhereUI.XpEverywhereBar.OnXpBarUpdated
	// void OnXpBarUpdated(int32_t ShownXP, int32_t ShownLevel, int32_t NewDesiredXP, int32_t NewDesiredLevel, int32_t NewRemainingRestXP); // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/XpEverywhereUI.XpEverywhereBar.OnXpBarInitialized
	// void OnXpBarInitialized(int32_t CurrentXP, int32_t CurrentLevel, int32_t CurrentRemainingRestXP);                     // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/XpEverywhereUI.XpEverywhereBar.GetTotalXpRequiredForLevel
	// int32_t GetTotalXpRequiredForLevel(int32_t InLevel);                                                                  // [0xad07398] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/XpEverywhereUI.XpEverywhereBar.DoneUpdatingXpBar
	// void DoneUpdatingXpBar();                                                                                             // [0xad07370] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/XpEverywhereUI.XpEverywhereLevelUpWidget
/// Size: 0x0008 (0x0002E8 - 0x0002F0)
class UXpEverywhereLevelUpWidget : public UCommonUserWidget
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x02E8   (0x0008)  MISSED


	/// Functions
	// Function /Script/XpEverywhereUI.XpEverywhereLevelUpWidget.OnShowWidget
	// void OnShowWidget(int32_t NewLevel);                                                                                  // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/XpEverywhereUI.XpEverywhereLevelUpWidget.DoneLevelingUp
	// void DoneLevelingUp();                                                                                                // [0xad0732c] Final|Native|Protected|BlueprintCallable 
	// Function /Script/XpEverywhereUI.XpEverywhereLevelUpWidget.DisplayLevelUpRewards
	// void DisplayLevelUpRewards();                                                                                         // [0xad072e4] Final|Native|Protected|BlueprintCallable|Const 
};

/// Class /Script/XpEverywhereUI.XpEverywhereReticleWidget
/// Size: 0x0018 (0x000328 - 0x000340)
class UXpEverywhereReticleWidget : public UFortHUDElementWidget
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0328   (0x0018)  MISSED


	/// Functions
	// Function /Script/XpEverywhereUI.XpEverywhereReticleWidget.UpdateXPSource
	// void UpdateXPSource(FText& NewSourceText);                                                                            // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/XpEverywhereUI.XpEverywhereReticleWidget.UpdateXPAmount
	// void UpdateXPAmount(int32_t NewAmount, class USoundCue* Cue, EFortSimulatedXPSize SimulatedXpSize);                   // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/XpEverywhereUI.XpEverywhereReticleWidget.UpdateRestXP
	// void UpdateRestXP(int32_t RestXpRemaining);                                                                           // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/XpEverywhereUI.XpEverywhereReticleWidget.HandleProfileUpdated
	// void HandleProfileUpdated();                                                                                          // [0xad0754c] Final|Native|Protected 
	// Function /Script/XpEverywhereUI.XpEverywhereReticleWidget.ForwardEvents
	// void ForwardEvents();                                                                                                 // [0xad07384] Final|Native|Protected|BlueprintCallable 
};

/// Struct /Script/XpEverywhereUI.XpEverywhereNotificationWidgetClass
/// Size: 0x0020 (0x000000 - 0x000020)
struct FXpEverywhereNotificationWidgetClass
{ 
	class UClass*                                      NotificationWidgetClass;                                    // 0x0000   (0x0008)  
	int32_t                                            InitialPoolSize;                                            // 0x0008   (0x0004)  
	bool                                               bCanIncreasePoolSizeAtRunTime;                              // 0x000C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x000D   (0x0003)  MISSED
	TArray<class UFortNotificationEntry*>              WidgetPool;                                                 // 0x0010   (0x0010)  
};

/// Class /Script/XpEverywhereUI.XpEverywhereRewardWidget
/// Size: 0x0090 (0x000328 - 0x0003B8)
class UXpEverywhereRewardWidget : public UFortHUDElementWidget
{ 
public:
	unsigned char                                      UnknownData00_3[0x48];                                      // 0x0328   (0x0048)  MISSED
	class UClass*                                      DefaultEntryClass;                                          // 0x0370   (0x0008)  
	bool                                               bHasPrioritizedWidgetFocus;                                 // 0x0378   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0379   (0x0007)  MISSED
	class UFortNotificationEntry*                      ActiveWidget;                                               // 0x0380   (0x0008)  
	TArray<class UFortNotificationEntry*>              WidgetQueue;                                                // 0x0388   (0x0010)  
	class UVerticalBox*                                NotificationUpdatesBox;                                     // 0x0398   (0x0008)  
	TArray<FXpEverywhereNotificationWidgetClass>       NotificationClassPoolData;                                  // 0x03A0   (0x0010)  
	FFortPrioritizedWidgetData                         PrioritizationData;                                         // 0x03B0   (0x0002)  
	unsigned char                                      UnknownData02_6[0x6];                                       // 0x03B2   (0x0006)  MISSED


	/// Functions
	// Function /Script/XpEverywhereUI.XpEverywhereRewardWidget.HandleNotificationUpdateFinished
	// void HandleNotificationUpdateFinished();                                                                              // [0xad07538] Final|Native|Protected 
};

/// Class /Script/XpEverywhereUI.XpEverywhereUIComponent
/// Size: 0x00D8 (0x0000A0 - 0x000178)
class UXpEverywhereUIComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0xA8];                                      // 0x00A0   (0x00A8)  MISSED
	FGameplayTagContainer                              XpEverywhereHiddenElementTags;                              // 0x0148   (0x0020)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x0168   (0x0010)  MISSED


	/// Functions
	// Function /Script/XpEverywhereUI.XpEverywhereUIComponent.HandleControllerComponentAdded
	// void HandleControllerComponentAdded(class AFortPlayerController* OwnerController, class UFortControllerComponent* AttachedComponent); // [0xad07424] Final|Native|Private 
};

