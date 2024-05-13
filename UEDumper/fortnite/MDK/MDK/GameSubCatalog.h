
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: JsonUtilities
/// dependency: McpProfileSys

/// Class /Script/GameSubCatalog.McpCatalogItemsForRandomPlayer
/// Size: 0x0028 (0x000028 - 0x000050)
class UMcpCatalogItemsForRandomPlayer : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	DMember(uint32_t)                                  Percentage                                                  OFFSET(get<uint32_t>, {0x28, 4, 0, 0})
	SMember(FString)                                   Salt                                                        OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	CMember(TArray<FString>)                           CatalogItems                                                OFFSET(get<T>, {0x40, 16, 0, 0})
};

/// Class /Script/GameSubCatalog.McpVerifierModeSelector
/// Size: 0x0020 (0x000028 - 0x000048)
class UMcpVerifierModeSelector : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	DMember(uint32_t)                                  RangeStart                                                  OFFSET(get<uint32_t>, {0x28, 4, 0, 0})
	DMember(uint32_t)                                  RangeEnd                                                    OFFSET(get<uint32_t>, {0x2C, 4, 0, 0})
	SMember(FString)                                   Salt                                                        OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	CMember(EVerifierModeOverride)                     VerifierModeOverride                                        OFFSET(get<T>, {0x40, 1, 0, 0})
	DMember(int32_t)                                   ReceiptRefactorVersionOverride                              OFFSET(get<int32_t>, {0x44, 4, 0, 0})
};

/// Struct /Script/GameSubCatalog.CatalogItemSalePrice
/// Size: 0x0018 (0x000000 - 0x000018)
class FCatalogItemSalePrice : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(int32_t)                                   SalePrice                                                   OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	CMember(TEnumAsByte<ECatalogSaleType>)             SaleType                                                    OFFSET(get<T>, {0x4, 1, 0, 0})
	SMember(FDateTime)                                 StartTime                                                   OFFSET(getStruct<T>, {0x8, 8, 0, 0})
	SMember(FDateTime)                                 EndTime                                                     OFFSET(getStruct<T>, {0x10, 8, 0, 0})
};

/// Struct /Script/GameSubCatalog.CatalogItemPrice
/// Size: 0x0048 (0x000000 - 0x000048)
class FCatalogItemPrice : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(TEnumAsByte<EStoreCurrencyType>)           CurrencyType                                                OFFSET(get<T>, {0x0, 1, 0, 0})
	SMember(FString)                                   CurrencySubType                                             OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	DMember(int32_t)                                   RegularPrice                                                OFFSET(get<int32_t>, {0x18, 4, 0, 0})
	DMember(int32_t)                                   FinalPrice                                                  OFFSET(get<int32_t>, {0x1C, 4, 0, 0})
	SMember(FText)                                     PriceTextOverride                                           OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	CMember(TEnumAsByte<ECatalogSaleType>)             SaleType                                                    OFFSET(get<T>, {0x30, 1, 0, 0})
	SMember(FDateTime)                                 SaleExpiration                                              OFFSET(getStruct<T>, {0x38, 8, 0, 0})
	CMember(EAppStore)                                 AppStoreId                                                  OFFSET(get<T>, {0x40, 1, 0, 0})
};

/// Struct /Script/GameSubCatalog.AppStoreCheckoutConfig
/// Size: 0x0002 (0x000000 - 0x000002)
class FAppStoreCheckoutConfig : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 2;

public:
	CMember(EAppStore)                                 AppStore                                                    OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(ECheckoutType)                             CheckoutType                                                OFFSET(get<T>, {0x1, 1, 0, 0})
};

/// Struct /Script/GameSubCatalog.StoreOfferInfo
/// Size: 0x0030 (0x000000 - 0x000030)
class FStoreOfferInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FString)                                   Storefront                                                  OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   StoreId                                                     OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FString)                                   GroupId                                                     OFFSET(getStruct<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/GameSubCatalog.CatalogPurchaseAdditionalData
/// Size: 0x0098 (0x000030 - 0x0000C8)
class FCatalogPurchaseAdditionalData : public FStoreOfferInfo
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	SMember(FString)                                   IslandId                                                    OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	SMember(FString)                                   IslandTitle                                                 OFFSET(getStruct<T>, {0x40, 16, 0, 0})
	SMember(FString)                                   ProductTag                                                  OFFSET(getStruct<T>, {0x50, 16, 0, 0})
	SMember(FString)                                   StoreContext                                                OFFSET(getStruct<T>, {0x60, 16, 0, 0})
	CMember(TMap<FString, FString>)                    CheckoutProperties                                          OFFSET(get<T>, {0x70, 80, 0, 0})
};

/// Struct /Script/GameSubCatalog.AdditionalCheckoutProperty
/// Size: 0x0020 (0x000000 - 0x000020)
class FAdditionalCheckoutProperty : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FString)                                   Key                                                         OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   Value                                                       OFFSET(getStruct<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/GameSubCatalog.CatalogCheckoutOptions
/// Size: 0x0018 (0x000000 - 0x000018)
class FCatalogCheckoutOptions : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(TArray<FAdditionalCheckoutProperty>)       AdditionalCheckoutProperties                                OFFSET(get<T>, {0x0, 16, 0, 0})
	DMember(bool)                                      bSkipCheckingEntitlementCount                               OFFSET(get<bool>, {0x10, 1, 0, 0})
};

/// Struct /Script/GameSubCatalog.CatalogRedeemRealMoneyPurchasesInfo
/// Size: 0x0130 (0x000000 - 0x000130)
class FCatalogRedeemRealMoneyPurchasesInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	CMember(EAppStore)                                 AppStore                                                    OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(TArray<FString>)                           AuthTokens                                                  OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(TArray<FString>)                           ReceiptIds                                                  OFFSET(get<T>, {0x18, 16, 0, 0})
	CMember(ERedeemRealMoneyPurchaseRefreshType)       RefreshType                                                 OFFSET(get<T>, {0x28, 1, 0, 0})
	CMember(EVerifierModeOverride)                     VerifierModeOverride                                        OFFSET(get<T>, {0x29, 1, 0, 0})
	DMember(int32_t)                                   ReceiptRefactorVersionOverride                              OFFSET(get<int32_t>, {0x2C, 4, 0, 0})
	CMember(TArray<FString>)                           CatalogItems                                                OFFSET(get<T>, {0x30, 16, 0, 0})
	SMember(FString)                                   PurchaseCorrelationId                                       OFFSET(getStruct<T>, {0x40, 16, 0, 0})
	SMember(FCatalogPurchaseAdditionalData)            AdditionalData                                              OFFSET(getStruct<T>, {0x50, 200, 0, 0})
};

/// Struct /Script/GameSubCatalog.CatalogReceiptInfo
/// Size: 0x0050 (0x000000 - 0x000050)
class FCatalogReceiptInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(EAppStore)                                 AppStore                                                    OFFSET(get<T>, {0x0, 1, 0, 0})
	SMember(FString)                                   AppStoreId                                                  OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	SMember(FString)                                   ReceiptId                                                   OFFSET(getStruct<T>, {0x18, 16, 0, 0})
	SMember(FString)                                   ReceiptInfo                                                 OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	SMember(FString)                                   PurchaseCorrelationId                                       OFFSET(getStruct<T>, {0x38, 16, 0, 0})
};

/// Struct /Script/GameSubCatalog.CatalogPurchaseInfo
/// Size: 0x0108 (0x000000 - 0x000108)
class FCatalogPurchaseInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:
	SMember(FString)                                   OfferId                                                     OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	DMember(int32_t)                                   PurchaseQuantity                                            OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	CMember(TEnumAsByte<EStoreCurrencyType>)           Currency                                                    OFFSET(get<T>, {0x14, 1, 0, 0})
	SMember(FString)                                   CurrencySubType                                             OFFSET(getStruct<T>, {0x18, 16, 0, 0})
	DMember(int32_t)                                   ExpectedTotalPrice                                          OFFSET(get<int32_t>, {0x28, 4, 0, 0})
	SMember(FString)                                   GameContext                                                 OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	SMember(FCatalogPurchaseAdditionalData)            AdditionalData                                              OFFSET(getStruct<T>, {0x40, 200, 0, 0})
};

/// Struct /Script/GameSubCatalog.CatalogPurchaseInfoGift
/// Size: 0x0138 (0x000000 - 0x000138)
class FCatalogPurchaseInfoGift : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 312;

public:
	SMember(FString)                                   OfferId                                                     OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	CMember(TEnumAsByte<EStoreCurrencyType>)           Currency                                                    OFFSET(get<T>, {0x10, 1, 0, 0})
	SMember(FString)                                   CurrencySubType                                             OFFSET(getStruct<T>, {0x18, 16, 0, 0})
	DMember(int32_t)                                   ExpectedTotalPrice                                          OFFSET(get<int32_t>, {0x28, 4, 0, 0})
	SMember(FString)                                   GameContext                                                 OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	CMember(TArray<FString>)                           ReceiverAccountIds                                          OFFSET(get<T>, {0x40, 16, 0, 0})
	SMember(FString)                                   GiftWrapTemplateId                                          OFFSET(getStruct<T>, {0x50, 16, 0, 0})
	SMember(FString)                                   PersonalMessage                                             OFFSET(getStruct<T>, {0x60, 16, 0, 0})
	SMember(FCatalogPurchaseAdditionalData)            AdditionalData                                              OFFSET(getStruct<T>, {0x70, 200, 0, 0})
};

/// Struct /Script/GameSubCatalog.CatalogKeyValue
/// Size: 0x0020 (0x000000 - 0x000020)
class FCatalogKeyValue : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FString)                                   Key                                                         OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   Value                                                       OFFSET(getStruct<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/GameSubCatalog.CatalogMetaAssetInfo
/// Size: 0x0030 (0x000000 - 0x000030)
class FCatalogMetaAssetInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FString)                                   StructName                                                  OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FJsonObjectWrapper)                        Payload                                                     OFFSET(getStruct<T>, {0x10, 32, 0, 0})
};

/// Struct /Script/GameSubCatalog.ItemQuantity
/// Size: 0x0038 (0x000000 - 0x000038)
class FItemQuantity : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FString)                                   TemplateId                                                  OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	DMember(int32_t)                                   Quantity                                                    OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	SMember(FJsonObjectWrapper)                        Attributes                                                  OFFSET(getStruct<T>, {0x18, 32, 0, 0})
};

/// Struct /Script/GameSubCatalog.CatalogDynamicBundleItem
/// Size: 0x0068 (0x000000 - 0x000068)
class FCatalogDynamicBundleItem : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FItemQuantity)                             Item                                                        OFFSET(getStruct<T>, {0x0, 56, 0, 0})
	DMember(bool)                                      bCanOwnMultiple                                             OFFSET(get<bool>, {0x38, 1, 0, 0})
	DMember(int32_t)                                   RegularPrice                                                OFFSET(get<int32_t>, {0x3C, 4, 0, 0})
	DMember(int32_t)                                   DiscountedPrice                                             OFFSET(get<int32_t>, {0x40, 4, 0, 0})
	DMember(int32_t)                                   AlreadyOwnedPriceReduction                                  OFFSET(get<int32_t>, {0x44, 4, 0, 0})
	SMember(FText)                                     Title                                                       OFFSET(getStruct<T>, {0x48, 16, 0, 0})
	SMember(FText)                                     Description                                                 OFFSET(getStruct<T>, {0x58, 16, 0, 0})
};

/// Struct /Script/GameSubCatalog.CatalogDynamicBundle
/// Size: 0x0038 (0x000000 - 0x000038)
class FCatalogDynamicBundle : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(int32_t)                                   DiscountedBasePrice                                         OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   RegularBasePrice                                            OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   FloorPrice                                                  OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	CMember(TEnumAsByte<EStoreCurrencyType>)           CurrencyType                                                OFFSET(get<T>, {0xC, 1, 0, 0})
	SMember(FString)                                   CurrencySubType                                             OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	CMember(TEnumAsByte<ECatalogSaleType>)             DisplayType                                                 OFFSET(get<T>, {0x20, 1, 0, 0})
	CMember(TArray<FCatalogDynamicBundleItem>)         BundleItems                                                 OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Struct /Script/GameSubCatalog.CatalogOfferRequirement
/// Size: 0x0018 (0x000000 - 0x000018)
class FCatalogOfferRequirement : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(ECatalogRequirementType)                   RequirementType                                             OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(int32_t)                                   MinQuantity                                                 OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	SMember(FString)                                   RequiredId                                                  OFFSET(getStruct<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/GameSubCatalog.CatalogGiftInfo
/// Size: 0x0028 (0x000000 - 0x000028)
class FCatalogGiftInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(bool)                                      bIsEnabled                                                  OFFSET(get<bool>, {0x0, 1, 0, 0})
	SMember(FString)                                   ForcedGiftBoxTemplateId                                     OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	CMember(TArray<FCatalogOfferRequirement>)          PurchaseRequirements                                        OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/GameSubCatalog.CatalogOffer
/// Size: 0x0248 (0x000000 - 0x000248)
class FCatalogOffer : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 584;

public:
	SMember(FString)                                   OfferId                                                     OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   DevName                                                     OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	CMember(TArray<FCatalogKeyValue>)                  MetaInfo                                                    OFFSET(get<T>, {0x20, 16, 0, 0})
	CMember(ECatalogOfferType)                         OfferType                                                   OFFSET(get<T>, {0x30, 1, 0, 0})
	CMember(TArray<FCatalogItemPrice>)                 Prices                                                      OFFSET(get<T>, {0x38, 16, 0, 0})
	SMember(FCatalogDynamicBundle)                     DynamicBundleInfo                                           OFFSET(getStruct<T>, {0x48, 56, 0, 0})
	DMember(int32_t)                                   DailyLimit                                                  OFFSET(get<int32_t>, {0x80, 4, 0, 0})
	DMember(int32_t)                                   WeeklyLimit                                                 OFFSET(get<int32_t>, {0x84, 4, 0, 0})
	DMember(int32_t)                                   MonthlyLimit                                                OFFSET(get<int32_t>, {0x88, 4, 0, 0})
	CMember(TArray<FString>)                           Categories                                                  OFFSET(get<T>, {0x90, 16, 0, 0})
	SMember(FString)                                   CatalogGroup                                                OFFSET(getStruct<T>, {0xA0, 16, 0, 0})
	DMember(int32_t)                                   CatalogGroupPriority                                        OFFSET(get<int32_t>, {0xB0, 4, 0, 0})
	DMember(int32_t)                                   SortPriority                                                OFFSET(get<int32_t>, {0xB4, 4, 0, 0})
	SMember(FText)                                     Title                                                       OFFSET(getStruct<T>, {0xB8, 16, 0, 0})
	SMember(FText)                                     ShortDescription                                            OFFSET(getStruct<T>, {0xC8, 16, 0, 0})
	SMember(FText)                                     Description                                                 OFFSET(getStruct<T>, {0xD8, 16, 0, 0})
	SMember(FString)                                   AppStoreId                                                  OFFSET(getStruct<T>, {0xE8, 192, 0, 0})
	SMember(FCatalogMetaAssetInfo)                     MetaAssetInfo                                               OFFSET(getStruct<T>, {0x1A8, 48, 0, 0})
	SMember(FString)                                   DisplayAssetPath                                            OFFSET(getStruct<T>, {0x1D8, 16, 0, 0})
	CMember(TArray<FItemQuantity>)                     ItemGrants                                                  OFFSET(get<T>, {0x1E8, 16, 0, 0})
	CMember(TArray<FCatalogOfferRequirement>)          Requirements                                                OFFSET(get<T>, {0x1F8, 16, 0, 0})
	SMember(FCatalogGiftInfo)                          GiftInfo                                                    OFFSET(getStruct<T>, {0x208, 40, 0, 0})
	DMember(bool)                                      Refundable                                                  OFFSET(get<bool>, {0x230, 1, 0, 0})
	CMember(TArray<FString>)                           DenyItemTemplateIds                                         OFFSET(get<T>, {0x238, 16, 0, 0})
};

/// Struct /Script/GameSubCatalog.Storefront
/// Size: 0x0020 (0x000000 - 0x000020)
class FStorefront : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FString)                                   Name                                                        OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	CMember(TArray<FCatalogOffer>)                     CatalogEntries                                              OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/GameSubCatalog.CatalogDownload
/// Size: 0x0020 (0x000000 - 0x000020)
class FCatalogDownload : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(int32_t)                                   RefreshIntervalHrs                                          OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   DailyPurchaseHrs                                            OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	SMember(FDateTime)                                 Expiration                                                  OFFSET(getStruct<T>, {0x8, 8, 0, 0})
	CMember(TArray<FStorefront>)                       Storefronts                                                 OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/GameSubCatalog.CatalogPurchaseNotification
/// Size: 0x0020 (0x000000 - 0x000020)
class FCatalogPurchaseNotification : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FMcpLootResult)                            LootResult                                                  OFFSET(getStruct<T>, {0x0, 32, 0, 0})
};

/// Struct /Script/GameSubCatalog.CatalogRefundNotification
/// Size: 0x0001 (0x000000 - 0x000001)
class FCatalogRefundNotification : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/GameSubCatalog.McpEntitlementRefreshTimerInfo
/// Size: 0x0018 (0x000000 - 0x000018)
class FMcpEntitlementRefreshTimerInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FDateTime)                                 NextEntitlementRefresh                                      OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	SMember(FDateTime)                                 MustRefreshAuthBy                                           OFFSET(getStruct<T>, {0x8, 8, 0, 0})
	SMember(FDateTime)                                 LastAuthRefresh                                             OFFSET(getStruct<T>, {0x10, 8, 0, 0})
};

/// Struct /Script/GameSubCatalog.McpProcessedConsumables
/// Size: 0x0018 (0x000000 - 0x000018)
class FMcpProcessedConsumables : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(EAppStore)                                 AppStore                                                    OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(TArray<FString>)                           IDs                                                         OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/GameSubCatalog.McpInAppPurchases
/// Size: 0x00E0 (0x000000 - 0x0000E0)
class FMcpInAppPurchases : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	CMember(TArray<FString>)                           Receipts                                                    OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FString>)                           IgnoredReceipts                                             OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<FString>)                           Fulfillments                                                OFFSET(get<T>, {0x20, 16, 0, 0})
	CMember(TMap<FString, int32_t>)                    FulfillmentCounts                                           OFFSET(get<T>, {0x30, 80, 0, 0})
	CMember(TMap<EAppStore, FMcpEntitlementRefreshTimerInfo>) RefreshTimers                                        OFFSET(get<T>, {0x80, 80, 0, 0})
	CMember(TArray<FMcpProcessedConsumables>)          ProcessedConsumables                                        OFFSET(get<T>, {0xD0, 16, 0, 0})
};

/// Struct /Script/GameSubCatalog.KeychainDownload
/// Size: 0x0010 (0x000000 - 0x000010)
class FKeychainDownload : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Enum /Script/GameSubCatalog.EAppStore
/// Size: 0x12
enum class EAppStore : uint8_t
{
	EAppStore__DebugStore                                                            = 0,
	EAppStore__EpicPurchasingService                                                 = 1,
	EAppStore__IOSAppStore                                                           = 2,
	EAppStore__WeGameStore                                                           = 3,
	EAppStore__GooglePlayAppStore                                                    = 4,
	EAppStore__KindleStore                                                           = 5,
	EAppStore__PlayStation4Store                                                     = 6,
	EAppStore__XboxLiveStore                                                         = 7,
	EAppStore__NintendoEShop                                                         = 8,
	EAppStore__SamsungGalaxyAppStore                                                 = 9,
	EAppStore__MicrosoftStore                                                        = 10,
	EAppStore__PlayStation5Store                                                     = 11
};

/// Enum /Script/GameSubCatalog.EStoreCurrencyType
/// Size: 0x04
enum class EStoreCurrencyType : uint8_t
{
	EStoreCurrencyType__RealMoney                                                    = 0,
	EStoreCurrencyType__MtxCurrency                                                  = 1,
	EStoreCurrencyType__GameItem                                                     = 2,
	EStoreCurrencyType__Other                                                        = 3
};

/// Enum /Script/GameSubCatalog.ECatalogSaleType
/// Size: 0x06
enum class ECatalogSaleType : uint8_t
{
	ECatalogSaleType__NotOnSale                                                      = 0,
	ECatalogSaleType__UndecoratedNewPrice                                            = 1,
	ECatalogSaleType__AmountOff                                                      = 2,
	ECatalogSaleType__PercentOff                                                     = 3,
	ECatalogSaleType__PercentOn                                                      = 4,
	ECatalogSaleType__Strikethrough                                                  = 5
};

/// Enum /Script/GameSubCatalog.ECheckoutType
/// Size: 0x03
enum class ECheckoutType : uint8_t
{
	ECheckoutType__None                                                              = 0,
	ECheckoutType__ReceiptRequested                                                  = 1,
	ECheckoutType__Receiptless                                                       = 2
};

/// Enum /Script/GameSubCatalog.ERedeemRealMoneyPurchaseRefreshType
/// Size: 0x04
enum class ERedeemRealMoneyPurchaseRefreshType : uint8_t
{
	ERedeemRealMoneyPurchaseRefreshType__Default                                     = 0,
	ERedeemRealMoneyPurchaseRefreshType__ForceCurrent                                = 1,
	ERedeemRealMoneyPurchaseRefreshType__ForceAll                                    = 2,
	ERedeemRealMoneyPurchaseRefreshType__UpdateOfflineAuth                           = 3
};

/// Enum /Script/GameSubCatalog.EAutoRenewState
/// Size: 0x04
enum class EAutoRenewState : uint8_t
{
	EAutoRenewState__None                                                            = 0,
	EAutoRenewState__AutoRenewEnabled                                                = 1,
	EAutoRenewState__AutoRenewDisabled                                               = 2,
	EAutoRenewState__NotAutoRenewable                                                = 3
};

/// Enum /Script/GameSubCatalog.EVerifierModeOverride
/// Size: 0x06
enum class EVerifierModeOverride : uint8_t
{
	EVerifierModeOverride__DefaultToConfig                                           = 1,
	EVerifierModeOverride__ReceiptOnly                                               = 2,
	EVerifierModeOverride__OccurrenceOnly                                            = 3,
	EVerifierModeOverride__ReceiptPrimary                                            = 4,
	EVerifierModeOverride__OccurrencePrimary                                         = 5,
	EVerifierModeOverride__OccurrenceOnlyRemoveReceipts                              = 6
};

/// Enum /Script/GameSubCatalog.ECatalogOfferType
/// Size: 0x02
enum class ECatalogOfferType : uint8_t
{
	ECatalogOfferType__StaticPrice                                                   = 0,
	ECatalogOfferType__DynamicBundle                                                 = 1
};

/// Enum /Script/GameSubCatalog.ECatalogRequirementType
/// Size: 0x04
enum class ECatalogRequirementType : uint8_t
{
	ECatalogRequirementType__RequireFulfillment                                      = 0,
	ECatalogRequirementType__DenyOnFulfillment                                       = 1,
	ECatalogRequirementType__RequireItemOwnership                                    = 2,
	ECatalogRequirementType__DenyOnItemOwnership                                     = 3
};

