
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CommonUI
/// dependency: CommonUILegacy
/// dependency: CoreUObject
/// dependency: FortniteUI
/// dependency: GameFeatures
/// dependency: UMG

/// Enum /Script/SqueegeeUI.EFortContentManagementState
/// Size: 0x04
enum class EFortContentManagementState : uint8_t
{
	EFortContentManagementState__Locked                                              = 0,
	EFortContentManagementState__Unlocked                                            = 1,
	EFortContentManagementState__WaitingForResponse                                  = 2,
	EFortContentManagementState__EFortContentManagementState_MAX                     = 3
};

/// Class /Script/SqueegeeUI.FortContentGateDetailsWidget
/// Size: 0x0008 (0x000308 - 0x000310)
class UFortContentGateDetailsWidget : public UFortSqueegeeWidget
{ 
public:
	class UFortContentGateRatingWidget*                ContentGateRatingWidget;                                    // 0x0308   (0x0008)  


	/// Functions
	// Function /Script/SqueegeeUI.FortContentGateDetailsWidget.OnShowGamemodeDescription
	// void OnShowGamemodeDescription(FString ActivityTitle);                                                                // [0x18a39e4] Event|Protected|BlueprintEvent 
};

/// Class /Script/SqueegeeUI.FortContentGateRatingWidget
/// Size: 0x0000 (0x000308 - 0x000308)
class UFortContentGateRatingWidget : public UFortSqueegeeWidget
{ 
public:


	/// Functions
	// Function /Script/SqueegeeUI.FortContentGateRatingWidget.OnStyleUpdated
	// void OnStyleUpdated(FSqueegeeStyleParams& StyleParams);                                                               // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/SqueegeeUI.FortContentGateRatingWidget.OnLabelUpdated
	// void OnLabelUpdated(bool bLabelEnabled, FText& LabelText, FText& LabelNumber);                                        // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
};

/// Class /Script/SqueegeeUI.FortContentManagementDetails
/// Size: 0x0038 (0x000308 - 0x000340)
class UFortContentManagementDetails : public UFortSqueegeeWidget
{ 
public:
	class UFortContentGateRatingWidget*                ContentGateRatingWidget;                                    // 0x0308   (0x0008)  
	unsigned char                                      UnknownData00_6[0x30];                                      // 0x0310   (0x0030)  MISSED


	/// Functions
	// Function /Script/SqueegeeUI.FortContentManagementDetails.OnShowWeaponData
	// void OnShowWeaponData();                                                                                              // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/SqueegeeUI.FortContentManagementDetails.OnShowActivityData
	// void OnShowActivityData(FText& ActivityDisplayName, FText& ActivityDescription, FString CreatorName, FText& LinkCode, bool IsCreative, FDateTime& UnlockTime, class UFortGameActivity* GameActivity); // [0x18a39e4] Event|Protected|HasOutParms|HasDefaults|BlueprintEvent 
	// Function /Script/SqueegeeUI.FortContentManagementDetails.OnPreviewImageChanged
	// void OnPreviewImageChanged(bool bIsLoading, class UTexture* Texture);                                                 // [0x18a39e4] Event|Protected|BlueprintEvent 
};

/// Class /Script/SqueegeeUI.FortContentManagementButton
/// Size: 0x0030 (0x001490 - 0x0014C0)
class UFortContentManagementButton : public UCommonButtonBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x1490   (0x0030)  MISSED


	/// Functions
	// Function /Script/SqueegeeUI.FortContentManagementButton.OnShowGameActivity
	// void OnShowGameActivity(class UFortGameActivity* NewGameActivity);                                                    // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/SqueegeeUI.FortContentManagementButton.OnShowError
	// void OnShowError(FText& ErrorText);                                                                                   // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/SqueegeeUI.FortContentManagementButton.OnChangeManagementState
	// void OnChangeManagementState(EFortContentManagementState NewState);                                                   // [0x18a39e4] Event|Protected|BlueprintEvent 
};

/// Class /Script/SqueegeeUI.FortContentManagementLabelWidget
/// Size: 0x0008 (0x0002C0 - 0x0002C8)
class UFortContentManagementLabelWidget : public UUserWidget
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x02C0   (0x0008)  MISSED


	/// Functions
	// Function /Script/SqueegeeUI.FortContentManagementLabelWidget.OnSetLabel
	// void OnSetLabel(FText& InText);                                                                                       // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
};

/// Class /Script/SqueegeeUI.FortContentManagementEntryLabelObject
/// Size: 0x0018 (0x000028 - 0x000040)
class UFortContentManagementEntryLabelObject : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x40];                                      // 0x0000   (0x0040)  MISSED
};

/// Class /Script/SqueegeeUI.FortContentManagementEntryDataObject
/// Size: 0x0038 (0x000028 - 0x000060)
class UFortContentManagementEntryDataObject : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x60];                                      // 0x0000   (0x0060)  MISSED
};

/// Class /Script/SqueegeeUI.FortContentManagementListView
/// Size: 0x0010 (0x000BD0 - 0x000BE0)
class UFortContentManagementListView : public UCommonListView
{ 
public:
	class UClass*                                      LabelWidget;                                                // 0x0BD0   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0BD8   (0x0008)  MISSED
};

/// Class /Script/SqueegeeUI.FortContentManagementList
/// Size: 0x0080 (0x000308 - 0x000388)
class UFortContentManagementList : public UFortSqueegeeWidget
{ 
public:
	SDK_UNDEFINED(24,15632) /* FText */                __um(WeaponLabelText);                                      // 0x0308   (0x0018)  
	SDK_UNDEFINED(24,15633) /* FText */                __um(GameModeLabelText);                                    // 0x0320   (0x0018)  
	class UFortContentManagementListView*              ContentManagementListView;                                  // 0x0338   (0x0008)  
	unsigned char                                      UnknownData00_5[0x18];                                      // 0x0340   (0x0018)  MISSED
	TArray<class UFortGameActivity*>                   CachedActivities;                                           // 0x0358   (0x0010)  
	unsigned char                                      UnknownData01_6[0x20];                                      // 0x0368   (0x0020)  MISSED


	/// Functions
	// Function /Script/SqueegeeUI.FortContentManagementList.ResetUnlockList
	// void ResetUnlockList();                                                                                               // [0xaaf234c] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SqueegeeUI.FortContentManagementList.RequestNextUnlockPage
	// void RequestNextUnlockPage();                                                                                         // [0xaaf2338] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SqueegeeUI.FortContentManagementList.OnNextUnlockPageRequestCompleted
	// void OnNextUnlockPageRequestCompleted(bool bSuccess);                                                                 // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/SqueegeeUI.FortContentManagementList.CanRequestNextUnlockPage
	// bool CanRequestNextUnlockPage();                                                                                      // [0xaaf2300] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SqueegeeUI.FortContentManagementScreen
/// Size: 0x0018 (0x000548 - 0x000560)
class UFortContentManagementScreen : public UFortPinScreen
{ 
public:
	class UCommonButtonBase*                           Button_CloseTouch;                                          // 0x0548   (0x0008)  
	class UFortContentManagementList*                  ContentManagementList;                                      // 0x0550   (0x0008)  
	class UFortContentManagementDetails*               ContentManagementDetails;                                   // 0x0558   (0x0008)  


	/// Functions
	// Function /Script/SqueegeeUI.FortContentManagementScreen.ExitScreen
	// void ExitScreen();                                                                                                    // [0xaaf2324] Final|Native|Protected|BlueprintCallable 
};

/// Struct /Script/SqueegeeUI.SqueegeeInjectionData
/// Size: 0x0028 (0x000000 - 0x000028)
struct FSqueegeeInjectionData
{ 
	ESqueegeeWidgetInjection                           WidgetType;                                                 // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	SDK_UNDEFINED(32,15634) /* TWeakObjectPtr<UClass*> */ __um(WidgetClass);                                       // 0x0008   (0x0020)  
};

/// Struct /Script/SqueegeeUI.SqueegeeTextData
/// Size: 0x0020 (0x000000 - 0x000020)
struct FSqueegeeTextData
{ 
	ESqueegeeText                                      TextType;                                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	SDK_UNDEFINED(24,15635) /* FText */                __um(DesiredText);                                          // 0x0008   (0x0018)  
};

/// Class /Script/SqueegeeUI.SqueegeeUIGameFeatureAction
/// Size: 0x0040 (0x000028 - 0x000068)
class USqueegeeUIGameFeatureAction : public UFortUIGameFeatureAction
{ 
public:
	TArray<FSqueegeeInjectionData>                     SqueegeeWidgetInjections;                                   // 0x0028   (0x0010)  
	TArray<FSqueegeeTextData>                          SqueegeTexts;                                               // 0x0038   (0x0010)  
	SDK_UNDEFINED(32,15636) /* TWeakObjectPtr<UClass*> */ __um(SqueegeeIntroModalClass);                           // 0x0048   (0x0020)  
};

