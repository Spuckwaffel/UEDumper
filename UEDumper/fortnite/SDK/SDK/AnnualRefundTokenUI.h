
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
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: FortniteUI
/// dependency: GameFeatures
/// dependency: UMG

/// Enum /Script/AnnualRefundTokenUI.EFortPurchaseHistoryRefundType
/// Size: 0x05
enum class EFortPurchaseHistoryRefundType : uint8_t
{
	EFortPurchaseHistoryRefundType__CancelPurchase                                   = 0,
	EFortPurchaseHistoryRefundType__ReturnTicket                                     = 1,
	EFortPurchaseHistoryRefundType__TokenlessRefund                                  = 2,
	EFortPurchaseHistoryRefundType__NonRefundable                                    = 3,
	EFortPurchaseHistoryRefundType__EFortPurchaseHistoryRefundType_MAX               = 4
};

/// Class /Script/AnnualRefundTokenUI.FortPurchaseHistoryEntryBase
/// Size: 0x0040 (0x001530 - 0x001570)
#pragma pack(push, 0x1)
class alignas(0x10) UFortPurchaseHistoryEntryBase : public UFortHoldableButton
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x1528   (0x0008)  MISSED
	class UClass*                                      ItemCardClass;                                              // 0x1530   (0x0008)  
	float                                              CardWidthOverride;                                          // 0x1538   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x153C   (0x0004)  MISSED
	class UCommonTextBlock*                            Text_Name;                                                  // 0x1540   (0x0008)  
	SDK_UNDEFINED(16,11759) /* TArray<FString> */      __um(LootEntryItemTypesToExclude);                          // 0x1548   (0x0010)  
	SDK_UNDEFINED(16,11760) /* TArray<FString> */      __um(LootEntryItemTypesToCombine);                          // 0x1558   (0x0010)  


	/// Functions
	// Function /Script/AnnualRefundTokenUI.FortPurchaseHistoryEntryBase.UpdateItemList
	// void UpdateItemList(TArray<UFortCosmeticItemCard*>& ItemCards);                                                       // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
};
#pragma pack(pop)

/// Class /Script/AnnualRefundTokenUI.FortPurchaseHistoryEntry
/// Size: 0x0000 (0x001570 - 0x001570)
class UFortPurchaseHistoryEntry : public UFortPurchaseHistoryEntryBase
{ 
public:


	/// Functions
	// Function /Script/AnnualRefundTokenUI.FortPurchaseHistoryEntry.SetupItemCard
	// void SetupItemCard(class UFortCosmeticItemCard* ItemCard, class UFortItem* Item);                                     // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/AnnualRefundTokenUI.FortPurchaseHistoryEntry.SetPurchaseText
	// void SetPurchaseText(FText& PurchaseDateText, FText& RefundDateText, bool bHasBeenRefunded, EFortPurchaseHistoryRefundType RefundType); // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/AnnualRefundTokenUI.FortPurchaseHistoryEntry.OnSetHistory
	// void OnSetHistory(bool bHasBeenRefunded, bool bIsCancelPurchaseEligible, bool bIsTokenlessRefund, bool bPlayerHasTokens, bool bNonRefundable, bool IsPartOfABundle, bool IsNextRefundable, int32_t IndexInBundle, int32_t NumPurchasesInBundle); // [0x18a39e4] Event|Protected|BlueprintEvent 
};

/// Class /Script/AnnualRefundTokenUI.FortPurchaseHistoryBundleEntry
/// Size: 0x0000 (0x001570 - 0x001570)
class UFortPurchaseHistoryBundleEntry : public UFortPurchaseHistoryEntryBase
{ 
public:


	/// Functions
	// Function /Script/AnnualRefundTokenUI.FortPurchaseHistoryBundleEntry.SetExpandButtonText
	// void SetExpandButtonText(int32_t NumPurchases);                                                                       // [0x18a39e4] Event|Public|BlueprintEvent 
};

/// Class /Script/AnnualRefundTokenUI.FortPurchaseHistoryListView
/// Size: 0x0120 (0x000298 - 0x0003B8)
class UFortPurchaseHistoryListView : public UListViewBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x120];                                     // 0x0298   (0x0120)  MISSED
};

/// Class /Script/AnnualRefundTokenUI.FortPurchaseHistoryTreeView
/// Size: 0x0038 (0x0003B8 - 0x0003F0)
class UFortPurchaseHistoryTreeView : public UFortPurchaseHistoryListView
{ 
public:
	unsigned char                                      UnknownData00_3[0x10];                                      // 0x03B8   (0x0010)  MISSED
	class UClass*                                      HeaderEntryWidgetClass;                                     // 0x03C8   (0x0008)  
	unsigned char                                      UnknownData01_6[0x20];                                      // 0x03D0   (0x0020)  MISSED
};

/// Class /Script/AnnualRefundTokenUI.FortAnnualRefundTicket
/// Size: 0x0008 (0x0002C0 - 0x0002C8)
class UFortAnnualRefundTicket : public UUserWidget
{ 
public:
	class UCommonTextBlock*                            Text_AvailableDate;                                         // 0x02C0   (0x0008)  


	/// Functions
	// Function /Script/AnnualRefundTokenUI.FortAnnualRefundTicket.OnUpdatePendingState
	// void OnUpdatePendingState(bool bIsPending);                                                                           // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/AnnualRefundTokenUI.FortAnnualRefundTicket.OnUpdateAvailableState
	// void OnUpdateAvailableState(bool bIsAvailable);                                                                       // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/AnnualRefundTokenUI.FortAnnualRefundTicket.OnPlayLockingAnimation
	// void OnPlayLockingAnimation();                                                                                        // [0x18a39e4] Event|Public|BlueprintEvent 
};

/// Class /Script/AnnualRefundTokenUI.FortAnnualRefundTokenData
/// Size: 0x0020 (0x000530 - 0x000550)
class UFortAnnualRefundTokenData : public UFortGameFeatureData
{ 
public:
	SDK_UNDEFINED(32,11761) /* TWeakObjectPtr<UClass*> */ __um(PurchaseHistoryScreenClass);                        // 0x0530   (0x0020)  
};

/// Class /Script/AnnualRefundTokenUI.FortPurchaseHistoryScreen
/// Size: 0x0100 (0x000570 - 0x000670)
class UFortPurchaseHistoryScreen : public UFortActivatablePanel
{ 
public:
	FDataTableRowHandle                                BackAction;                                                 // 0x0570   (0x0010)  
	unsigned char                                      UnknownData00_5[0x18];                                      // 0x0580   (0x0018)  MISSED
	SDK_UNDEFINED(32,11762) /* TWeakObjectPtr<UClass*> */ __um(RefundConfirmationClass);                           // 0x0598   (0x0020)  
	SDK_UNDEFINED(32,11763) /* TWeakObjectPtr<UClass*> */ __um(DirectPurchaseInfoModalClass);                      // 0x05B8   (0x0020)  
	class UCommonAnimatedSwitcher*                     Switcher_MainContent;                                       // 0x05D8   (0x0008)  
	class UFortPurchaseHistoryTreeView*                TreeView_Purchases;                                         // 0x05E0   (0x0008)  
	class UCommonButtonBase*                           Button_CloseTouch;                                          // 0x05E8   (0x0008)  
	class UCommonButtonBase*                           Button_PostApproval;                                        // 0x05F0   (0x0008)  
	class UScrollBox*                                  ScrollBox_ReturnTypeInfo;                                   // 0x05F8   (0x0008)  
	class UCommonTextBlock*                            Text_Desc;                                                  // 0x0600   (0x0008)  
	class UCommonTextBlock*                            Text_RefundCount;                                           // 0x0608   (0x0008)  
	class UCommonTextBlock*                            Text_ResultHeader;                                          // 0x0610   (0x0008)  
	class UCommonTextBlock*                            Text_ResultTitle;                                           // 0x0618   (0x0008)  
	class UCommonTextBlock*                            Text_ResultDesc;                                            // 0x0620   (0x0008)  
	class UFortAnnualRefundTicket*                     RefundTicket_Left;                                          // 0x0628   (0x0008)  
	class UFortAnnualRefundTicket*                     RefundTicket_Center;                                        // 0x0630   (0x0008)  
	class UFortAnnualRefundTicket*                     RefundTicket_Right;                                         // 0x0638   (0x0008)  
	class UWidget*                                     Widget_CancelPurchaseInfo;                                  // 0x0640   (0x0008)  
	class UWidget*                                     Widget_ReturnTicketInfo;                                    // 0x0648   (0x0008)  
	class UWidget*                                     Widget_TokenlessRefundInfo;                                 // 0x0650   (0x0008)  
	class UWidget*                                     Widget_NonRefundableInfo;                                   // 0x0658   (0x0008)  
	class UWidget*                                     Widget_BundledPurchaseInfo;                                 // 0x0660   (0x0008)  
	class UWidget*                                     Widget_BundledPurchaseTokenlessRefundInfo;                  // 0x0668   (0x0008)  


	/// Functions
	// Function /Script/AnnualRefundTokenUI.FortPurchaseHistoryScreen.OnPopulateView
	// void OnPopulateView();                                                                                                // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/AnnualRefundTokenUI.FortPurchaseHistoryScreen.OnNoPurchasesAvailable
	// void OnNoPurchasesAvailable();                                                                                        // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/AnnualRefundTokenUI.FortPurchaseHistoryScreen.OnEndRefundSubmission
	// void OnEndRefundSubmission();                                                                                         // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/AnnualRefundTokenUI.FortPurchaseHistoryScreen.OnBeginRefundSubmission
	// void OnBeginRefundSubmission();                                                                                       // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/AnnualRefundTokenUI.FortPurchaseHistoryScreen.BP_IsShowingPurchases
	// bool BP_IsShowingPurchases();                                                                                         // [0x18a39e4] Event|Protected|BlueprintEvent 
};

/// Class /Script/AnnualRefundTokenUI.FortRefundConfirmation
/// Size: 0x0058 (0x000570 - 0x0005C8)
class UFortRefundConfirmation : public UFortActivatablePanel
{ 
public:
	unsigned char                                      UnknownData00_3[0x10];                                      // 0x0570   (0x0010)  MISSED
	class UCommonTextBlock*                            Text_RefundsRemaining;                                      // 0x0580   (0x0008)  
	class UCommonTextBlock*                            Text_RefundCount;                                           // 0x0588   (0x0008)  
	class UCommonTextBlock*                            Text_AreYouSure;                                            // 0x0590   (0x0008)  
	class UCommonButtonBase*                           Button_Yes;                                                 // 0x0598   (0x0008)  
	class UCommonButtonBase*                           Button_No;                                                  // 0x05A0   (0x0008)  
	class UCommonButtonBase*                           Button_CloseTouch;                                          // 0x05A8   (0x0008)  
	class UFortAnnualRefundTicket*                     RefundTicket_Left;                                          // 0x05B0   (0x0008)  
	class UFortAnnualRefundTicket*                     RefundTicket_Center;                                        // 0x05B8   (0x0008)  
	class UFortAnnualRefundTicket*                     RefundTicket_Right;                                         // 0x05C0   (0x0008)  


	/// Functions
	// Function /Script/AnnualRefundTokenUI.FortRefundConfirmation.BP_UpdateRefundType
	// void BP_UpdateRefundType(EFortPurchaseHistoryRefundType RefundType, bool bBundledRefund);                             // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/AnnualRefundTokenUI.FortRefundConfirmation.BP_UpdateItemsList
	// void BP_UpdateItemsList(TArray<UFortItemDefinition*>& SelectedItemDefs, int32_t TotalMtxPaid);                        // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
};

/// Struct /Script/AnnualRefundTokenUI.PurchaseHistoryBundleEntry
/// Size: 0x0020 (0x000000 - 0x000020)
struct FPurchaseHistoryBundleEntry
{ 
	SDK_UNDEFINED(16,11764) /* FString */              __um(ID);                                                   // 0x0010   (0x0010)  
};

