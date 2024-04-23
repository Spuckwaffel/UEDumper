
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject

/// Class /Script/PurchaseFlow.PurchaseFlowJSBridge
/// Size: 0x0010 (0x000028 - 0x000038)
class UPurchaseFlowJSBridge : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:


	/// Functions
	// Function /Script/PurchaseFlow.PurchaseFlowJSBridge.RequestClose
	// void RequestClose(FString CloseInfo);                                                                                    // [0x879fe14] Final|Native|Public  
	// Function /Script/PurchaseFlow.PurchaseFlowJSBridge.Receipt
	// void Receipt(FPurchaseFlowReceiptParam Receipt);                                                                         // [0x879fcf8] Final|Native|Public  
	// Function /Script/PurchaseFlow.PurchaseFlowJSBridge.LaunchValidatedExternalBrowserUrl
	// bool LaunchValidatedExternalBrowserUrl(FString AllowedBrowserID, FString URL);                                           // [0x879f5cc] Final|Native|Public  
	// Function /Script/PurchaseFlow.PurchaseFlowJSBridge.LaunchExternalBrowserUrl
	// bool LaunchExternalBrowserUrl(FString URL);                                                                              // [0x879eebc] Final|Native|Public  
	// Function /Script/PurchaseFlow.PurchaseFlowJSBridge.GetExternalBrowserPath
	// FString GetExternalBrowserPath(FString BrowserId);                                                                       // [0x879e7bc] Final|Native|Public  
	// Function /Script/PurchaseFlow.PurchaseFlowJSBridge.GetExternalBrowserName
	// FString GetExternalBrowserName(FString BrowserId);                                                                       // [0x879e0bc] Final|Native|Public  
	// Function /Script/PurchaseFlow.PurchaseFlowJSBridge.GetDefaultExternalBrowserID
	// FString GetDefaultExternalBrowserID(FString URL);                                                                        // [0x879d9d0] Final|Native|Public  
};

/// Struct /Script/PurchaseFlow.PurchaseFlowItem
/// Size: 0x0030 (0x000000 - 0x000030)
class FPurchaseFlowItem : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FString)                                   ItemId                                                      OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   EntitlementId                                               OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FString)                                   ValidationInfo                                              OFFSET(getStruct<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/PurchaseFlow.PurchaseFlowOffer
/// Size: 0x0038 (0x000000 - 0x000038)
class FPurchaseFlowOffer : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FString)                                   OfferNamespace                                              OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   OfferId                                                     OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	DMember(int32_t)                                   Quantity                                                    OFFSET(get<int32_t>, {0x20, 4, 0, 0})
	CMember(TArray<FPurchaseFlowItem>)                 Items                                                       OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Struct /Script/PurchaseFlow.PurchaseFlowReceiptParam
/// Size: 0x0030 (0x000000 - 0x000030)
class FPurchaseFlowReceiptParam : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FString)                                   TransactionId                                               OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   TransactionState                                            OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	CMember(TArray<FPurchaseFlowOffer>)                Offers                                                      OFFSET(get<T>, {0x20, 16, 0, 0})
};

