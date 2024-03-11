
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: JsonUtilities
/// dependency: McpProfileSys

/// Enum /Script/GameSubCatalog.EAppStore
/// Size: 0x13
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
	EAppStore__PlayStation5Store                                                     = 11,
	EAppStore__MAX                                                                   = 12
};

/// Enum /Script/GameSubCatalog.EStoreCurrencyType
/// Size: 0x05
enum class EStoreCurrencyType : uint8_t
{
	EStoreCurrencyType__RealMoney                                                    = 0,
	EStoreCurrencyType__MtxCurrency                                                  = 1,
	EStoreCurrencyType__GameItem                                                     = 2,
	EStoreCurrencyType__Other                                                        = 3,
	EStoreCurrencyType__MAX                                                          = 4
};

/// Enum /Script/GameSubCatalog.ECatalogSaleType
/// Size: 0x07
enum class ECatalogSaleType : uint8_t
{
	ECatalogSaleType__NotOnSale                                                      = 0,
	ECatalogSaleType__UndecoratedNewPrice                                            = 1,
	ECatalogSaleType__AmountOff                                                      = 2,
	ECatalogSaleType__PercentOff                                                     = 3,
	ECatalogSaleType__PercentOn                                                      = 4,
	ECatalogSaleType__Strikethrough                                                  = 5,
	ECatalogSaleType__MAX                                                            = 6
};

/// Enum /Script/GameSubCatalog.ECheckoutType
/// Size: 0x04
enum class ECheckoutType : uint8_t
{
	ECheckoutType__None                                                              = 0,
	ECheckoutType__ReceiptRequested                                                  = 1,
	ECheckoutType__Receiptless                                                       = 2,
	ECheckoutType__MAX                                                               = 3
};

/// Enum /Script/GameSubCatalog.ERedeemRealMoneyPurchaseRefreshType
/// Size: 0x05
enum class ERedeemRealMoneyPurchaseRefreshType : uint8_t
{
	ERedeemRealMoneyPurchaseRefreshType__Default                                     = 0,
	ERedeemRealMoneyPurchaseRefreshType__ForceCurrent                                = 1,
	ERedeemRealMoneyPurchaseRefreshType__ForceAll                                    = 2,
	ERedeemRealMoneyPurchaseRefreshType__UpdateOfflineAuth                           = 3,
	ERedeemRealMoneyPurchaseRefreshType__MAX                                         = 4
};

/// Enum /Script/GameSubCatalog.EAutoRenewState
/// Size: 0x05
enum class EAutoRenewState : uint8_t
{
	EAutoRenewState__None                                                            = 0,
	EAutoRenewState__AutoRenewEnabled                                                = 1,
	EAutoRenewState__AutoRenewDisabled                                               = 2,
	EAutoRenewState__NotAutoRenewable                                                = 3,
	EAutoRenewState__MAX                                                             = 4
};

/// Enum /Script/GameSubCatalog.EVerifierModeOverride
/// Size: 0x07
enum class EVerifierModeOverride : uint8_t
{
	EVerifierModeOverride__DefaultToConfig                                           = 1,
	EVerifierModeOverride__ReceiptOnly                                               = 2,
	EVerifierModeOverride__OccurrenceOnly                                            = 3,
	EVerifierModeOverride__ReceiptPrimary                                            = 4,
	EVerifierModeOverride__OccurrencePrimary                                         = 5,
	EVerifierModeOverride__OccurrenceOnlyRemoveReceipts                              = 6,
	EVerifierModeOverride__MAX                                                       = 7
};

/// Enum /Script/GameSubCatalog.ECatalogOfferType
/// Size: 0x03
enum class ECatalogOfferType : uint8_t
{
	ECatalogOfferType__StaticPrice                                                   = 0,
	ECatalogOfferType__DynamicBundle                                                 = 1,
	ECatalogOfferType__ECatalogOfferType_MAX                                         = 2
};

/// Enum /Script/GameSubCatalog.ECatalogRequirementType
/// Size: 0x05
enum class ECatalogRequirementType : uint8_t
{
	ECatalogRequirementType__RequireFulfillment                                      = 0,
	ECatalogRequirementType__DenyOnFulfillment                                       = 1,
	ECatalogRequirementType__RequireItemOwnership                                    = 2,
	ECatalogRequirementType__DenyOnItemOwnership                                     = 3,
	ECatalogRequirementType__ECatalogRequirementType_MAX                             = 4
};

/// Class /Script/GameSubCatalog.McpCatalogItemsForRandomPlayer
/// Size: 0x0028 (0x000028 - 0x000050)
class UMcpCatalogItemsForRandomPlayer : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	uint32_t                                           Percentage;                                                 // 0x0028   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x002C   (0x0004)  MISSED
	SDK_UNDEFINED(16,2336) /* FString */               __um(Salt);                                                 // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,2337) /* TArray<FString> */       __um(CatalogItems);                                         // 0x0040   (0x0010)  
};

/// Class /Script/GameSubCatalog.McpVerifierModeSelector
/// Size: 0x0020 (0x000028 - 0x000048)
class UMcpVerifierModeSelector : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	uint32_t                                           RangeStart;                                                 // 0x0028   (0x0004)  
	uint32_t                                           RangeEnd;                                                   // 0x002C   (0x0004)  
	SDK_UNDEFINED(16,2338) /* FString */               __um(Salt);                                                 // 0x0030   (0x0010)  
	EVerifierModeOverride                              VerifierModeOverride;                                       // 0x0040   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0041   (0x0003)  MISSED
	int32_t                                            ReceiptRefactorVersionOverride;                             // 0x0044   (0x0004)  
};

/// Struct /Script/GameSubCatalog.CatalogItemSalePrice
/// Size: 0x0018 (0x000000 - 0x000018)
struct FCatalogItemSalePrice
{ 
	int32_t                                            SalePrice;                                                  // 0x0000   (0x0004)  
	SDK_UNDEFINED(1,2339) /* TEnumAsByte<ECatalogSaleType> */ __um(SaleType);                                      // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0005   (0x0003)  MISSED
	FDateTime                                          StartTime;                                                  // 0x0008   (0x0008)  
	FDateTime                                          EndTime;                                                    // 0x0010   (0x0008)  
};

/// Struct /Script/GameSubCatalog.CatalogItemPrice
/// Size: 0x0050 (0x000000 - 0x000050)
struct FCatalogItemPrice
{ 
	SDK_UNDEFINED(1,2340) /* TEnumAsByte<EStoreCurrencyType> */ __um(CurrencyType);                                // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	SDK_UNDEFINED(16,2341) /* FString */               __um(CurrencySubType);                                      // 0x0008   (0x0010)  
	int32_t                                            RegularPrice;                                               // 0x0018   (0x0004)  
	int32_t                                            FinalPrice;                                                 // 0x001C   (0x0004)  
	SDK_UNDEFINED(24,2342) /* FText */                 __um(PriceTextOverride);                                    // 0x0020   (0x0018)  
	SDK_UNDEFINED(1,2343) /* TEnumAsByte<ECatalogSaleType> */ __um(SaleType);                                      // 0x0038   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0039   (0x0007)  MISSED
	FDateTime                                          SaleExpiration;                                             // 0x0040   (0x0008)  
	EAppStore                                          AppStoreId;                                                 // 0x0048   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x0049   (0x0007)  MISSED
};

/// Struct /Script/GameSubCatalog.AppStoreCheckoutConfig
/// Size: 0x0002 (0x000000 - 0x000002)
struct FAppStoreCheckoutConfig
{ 
	EAppStore                                          AppStore;                                                   // 0x0000   (0x0001)  
	ECheckoutType                                      CheckoutType;                                               // 0x0001   (0x0001)  
};

/// Struct /Script/GameSubCatalog.StoreOfferInfo
/// Size: 0x0030 (0x000000 - 0x000030)
struct FStoreOfferInfo
{ 
	SDK_UNDEFINED(16,2344) /* FString */               __um(Storefront);                                           // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,2345) /* FString */               __um(StoreId);                                              // 0x0010   (0x0010)  
	SDK_UNDEFINED(16,2346) /* FString */               __um(GroupId);                                              // 0x0020   (0x0010)  
};

/// Struct /Script/GameSubCatalog.CatalogPurchaseAdditionalData
/// Size: 0x0098 (0x000030 - 0x0000C8)
struct FCatalogPurchaseAdditionalData : FStoreOfferInfo
{ 
	SDK_UNDEFINED(16,2347) /* FString */               __um(IslandId);                                             // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,2348) /* FString */               __um(IslandTitle);                                          // 0x0040   (0x0010)  
	SDK_UNDEFINED(16,2349) /* FString */               __um(ProductTag);                                           // 0x0050   (0x0010)  
	SDK_UNDEFINED(16,2350) /* FString */               __um(StoreContext);                                         // 0x0060   (0x0010)  
	SDK_UNDEFINED(80,2351) /* TMap<FString, FString> */ __um(CheckoutProperties);                                  // 0x0070   (0x0050)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x00C0   (0x0008)  MISSED
};

/// Struct /Script/GameSubCatalog.AdditionalCheckoutProperty
/// Size: 0x0020 (0x000000 - 0x000020)
struct FAdditionalCheckoutProperty
{ 
	SDK_UNDEFINED(16,2352) /* FString */               __um(Key);                                                  // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,2353) /* FString */               __um(Value);                                                // 0x0010   (0x0010)  
};

/// Struct /Script/GameSubCatalog.CatalogCheckoutOptions
/// Size: 0x0018 (0x000000 - 0x000018)
struct FCatalogCheckoutOptions
{ 
	TArray<FAdditionalCheckoutProperty>                AdditionalCheckoutProperties;                               // 0x0000   (0x0010)  
	bool                                               bSkipCheckingEntitlementCount;                              // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/GameSubCatalog.CatalogRedeemRealMoneyPurchasesInfo
/// Size: 0x0130 (0x000000 - 0x000130)
struct FCatalogRedeemRealMoneyPurchasesInfo
{ 
	EAppStore                                          AppStore;                                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	SDK_UNDEFINED(16,2354) /* TArray<FString> */       __um(AuthTokens);                                           // 0x0008   (0x0010)  
	SDK_UNDEFINED(16,2355) /* TArray<FString> */       __um(ReceiptIds);                                           // 0x0018   (0x0010)  
	ERedeemRealMoneyPurchaseRefreshType                RefreshType;                                                // 0x0028   (0x0001)  
	EVerifierModeOverride                              VerifierModeOverride;                                       // 0x0029   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x002A   (0x0002)  MISSED
	int32_t                                            ReceiptRefactorVersionOverride;                             // 0x002C   (0x0004)  
	SDK_UNDEFINED(16,2356) /* TArray<FString> */       __um(CatalogItems);                                         // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,2357) /* FString */               __um(PurchaseCorrelationId);                                // 0x0040   (0x0010)  
	FCatalogPurchaseAdditionalData                     AdditionalData;                                             // 0x0050   (0x00C8)  
	unsigned char                                      UnknownData02_6[0x18];                                      // 0x0118   (0x0018)  MISSED
};

/// Struct /Script/GameSubCatalog.CatalogReceiptInfo
/// Size: 0x0050 (0x000000 - 0x000050)
struct FCatalogReceiptInfo
{ 
	EAppStore                                          AppStore;                                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	SDK_UNDEFINED(16,2358) /* FString */               __um(AppStoreId);                                           // 0x0008   (0x0010)  
	SDK_UNDEFINED(16,2359) /* FString */               __um(ReceiptId);                                            // 0x0018   (0x0010)  
	SDK_UNDEFINED(16,2360) /* FString */               __um(ReceiptInfo);                                          // 0x0028   (0x0010)  
	SDK_UNDEFINED(16,2361) /* FString */               __um(PurchaseCorrelationId);                                // 0x0038   (0x0010)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0048   (0x0008)  MISSED
};

/// Struct /Script/GameSubCatalog.CatalogPurchaseInfo
/// Size: 0x0108 (0x000000 - 0x000108)
struct FCatalogPurchaseInfo
{ 
	SDK_UNDEFINED(16,2362) /* FString */               __um(OfferId);                                              // 0x0000   (0x0010)  
	int32_t                                            PurchaseQuantity;                                           // 0x0010   (0x0004)  
	SDK_UNDEFINED(1,2363) /* TEnumAsByte<EStoreCurrencyType> */ __um(Currency);                                    // 0x0014   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0015   (0x0003)  MISSED
	SDK_UNDEFINED(16,2364) /* FString */               __um(CurrencySubType);                                      // 0x0018   (0x0010)  
	int32_t                                            ExpectedTotalPrice;                                         // 0x0028   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x002C   (0x0004)  MISSED
	SDK_UNDEFINED(16,2365) /* FString */               __um(GameContext);                                          // 0x0030   (0x0010)  
	FCatalogPurchaseAdditionalData                     AdditionalData;                                             // 0x0040   (0x00C8)  
};

/// Struct /Script/GameSubCatalog.CatalogPurchaseInfoGift
/// Size: 0x0138 (0x000000 - 0x000138)
struct FCatalogPurchaseInfoGift
{ 
	SDK_UNDEFINED(16,2366) /* FString */               __um(OfferId);                                              // 0x0000   (0x0010)  
	SDK_UNDEFINED(1,2367) /* TEnumAsByte<EStoreCurrencyType> */ __um(Currency);                                    // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0011   (0x0007)  MISSED
	SDK_UNDEFINED(16,2368) /* FString */               __um(CurrencySubType);                                      // 0x0018   (0x0010)  
	int32_t                                            ExpectedTotalPrice;                                         // 0x0028   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x002C   (0x0004)  MISSED
	SDK_UNDEFINED(16,2369) /* FString */               __um(GameContext);                                          // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,2370) /* TArray<FString> */       __um(ReceiverAccountIds);                                   // 0x0040   (0x0010)  
	SDK_UNDEFINED(16,2371) /* FString */               __um(GiftWrapTemplateId);                                   // 0x0050   (0x0010)  
	SDK_UNDEFINED(16,2372) /* FString */               __um(PersonalMessage);                                      // 0x0060   (0x0010)  
	FCatalogPurchaseAdditionalData                     AdditionalData;                                             // 0x0070   (0x00C8)  
};

/// Struct /Script/GameSubCatalog.CatalogKeyValue
/// Size: 0x0020 (0x000000 - 0x000020)
struct FCatalogKeyValue
{ 
	SDK_UNDEFINED(16,2373) /* FString */               __um(Key);                                                  // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,2374) /* FString */               __um(Value);                                                // 0x0010   (0x0010)  
};

/// Struct /Script/GameSubCatalog.CatalogMetaAssetInfo
/// Size: 0x0030 (0x000000 - 0x000030)
struct FCatalogMetaAssetInfo
{ 
	SDK_UNDEFINED(16,2375) /* FString */               __um(StructName);                                           // 0x0000   (0x0010)  
	FJsonObjectWrapper                                 Payload;                                                    // 0x0010   (0x0020)  
};

/// Struct /Script/GameSubCatalog.ItemQuantity
/// Size: 0x0038 (0x000000 - 0x000038)
struct FItemQuantity
{ 
	SDK_UNDEFINED(16,2376) /* FString */               __um(TemplateId);                                           // 0x0000   (0x0010)  
	int32_t                                            Quantity;                                                   // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0014   (0x0004)  MISSED
	FJsonObjectWrapper                                 Attributes;                                                 // 0x0018   (0x0020)  
};

/// Struct /Script/GameSubCatalog.CatalogDynamicBundleItem
/// Size: 0x0078 (0x000000 - 0x000078)
struct FCatalogDynamicBundleItem
{ 
	FItemQuantity                                      Item;                                                       // 0x0000   (0x0038)  
	bool                                               bCanOwnMultiple;                                            // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0039   (0x0003)  MISSED
	int32_t                                            RegularPrice;                                               // 0x003C   (0x0004)  
	int32_t                                            DiscountedPrice;                                            // 0x0040   (0x0004)  
	int32_t                                            AlreadyOwnedPriceReduction;                                 // 0x0044   (0x0004)  
	SDK_UNDEFINED(24,2377) /* FText */                 __um(Title);                                                // 0x0048   (0x0018)  
	SDK_UNDEFINED(24,2378) /* FText */                 __um(Description);                                          // 0x0060   (0x0018)  
};

/// Struct /Script/GameSubCatalog.CatalogDynamicBundle
/// Size: 0x0038 (0x000000 - 0x000038)
struct FCatalogDynamicBundle
{ 
	int32_t                                            DiscountedBasePrice;                                        // 0x0000   (0x0004)  
	int32_t                                            RegularBasePrice;                                           // 0x0004   (0x0004)  
	int32_t                                            FloorPrice;                                                 // 0x0008   (0x0004)  
	SDK_UNDEFINED(1,2379) /* TEnumAsByte<EStoreCurrencyType> */ __um(CurrencyType);                                // 0x000C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x000D   (0x0003)  MISSED
	SDK_UNDEFINED(16,2380) /* FString */               __um(CurrencySubType);                                      // 0x0010   (0x0010)  
	SDK_UNDEFINED(1,2381) /* TEnumAsByte<ECatalogSaleType> */ __um(DisplayType);                                   // 0x0020   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0021   (0x0007)  MISSED
	TArray<FCatalogDynamicBundleItem>                  BundleItems;                                                // 0x0028   (0x0010)  
};

/// Struct /Script/GameSubCatalog.CatalogOfferRequirement
/// Size: 0x0018 (0x000000 - 0x000018)
struct FCatalogOfferRequirement
{ 
	ECatalogRequirementType                            RequirementType;                                            // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	int32_t                                            MinQuantity;                                                // 0x0004   (0x0004)  
	SDK_UNDEFINED(16,2382) /* FString */               __um(RequiredId);                                           // 0x0008   (0x0010)  
};

/// Struct /Script/GameSubCatalog.CatalogGiftInfo
/// Size: 0x0028 (0x000000 - 0x000028)
struct FCatalogGiftInfo
{ 
	bool                                               bIsEnabled;                                                 // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	SDK_UNDEFINED(16,2383) /* FString */               __um(ForcedGiftBoxTemplateId);                              // 0x0008   (0x0010)  
	TArray<FCatalogOfferRequirement>                   PurchaseRequirements;                                       // 0x0018   (0x0010)  
};

/// Struct /Script/GameSubCatalog.CatalogOffer
/// Size: 0x0260 (0x000000 - 0x000260)
struct FCatalogOffer
{ 
	SDK_UNDEFINED(16,2384) /* FString */               __um(OfferId);                                              // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,2385) /* FString */               __um(DevName);                                              // 0x0010   (0x0010)  
	TArray<FCatalogKeyValue>                           MetaInfo;                                                   // 0x0020   (0x0010)  
	ECatalogOfferType                                  OfferType;                                                  // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0031   (0x0007)  MISSED
	TArray<FCatalogItemPrice>                          Prices;                                                     // 0x0038   (0x0010)  
	FCatalogDynamicBundle                              DynamicBundleInfo;                                          // 0x0048   (0x0038)  
	int32_t                                            DailyLimit;                                                 // 0x0080   (0x0004)  
	int32_t                                            WeeklyLimit;                                                // 0x0084   (0x0004)  
	int32_t                                            MonthlyLimit;                                               // 0x0088   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x008C   (0x0004)  MISSED
	SDK_UNDEFINED(16,2386) /* TArray<FString> */       __um(Categories);                                           // 0x0090   (0x0010)  
	SDK_UNDEFINED(16,2387) /* FString */               __um(CatalogGroup);                                         // 0x00A0   (0x0010)  
	int32_t                                            CatalogGroupPriority;                                       // 0x00B0   (0x0004)  
	int32_t                                            SortPriority;                                               // 0x00B4   (0x0004)  
	SDK_UNDEFINED(24,2388) /* FText */                 __um(Title);                                                // 0x00B8   (0x0018)  
	SDK_UNDEFINED(24,2389) /* FText */                 __um(ShortDescription);                                     // 0x00D0   (0x0018)  
	SDK_UNDEFINED(24,2390) /* FText */                 __um(Description);                                          // 0x00E8   (0x0018)  
	SDK_UNDEFINED(192,2391) /* FString */              __um(AppStoreId);                                           // 0x0100   (0x00C0)  
	FCatalogMetaAssetInfo                              MetaAssetInfo;                                              // 0x01C0   (0x0030)  
	SDK_UNDEFINED(16,2392) /* FString */               __um(DisplayAssetPath);                                     // 0x01F0   (0x0010)  
	TArray<FItemQuantity>                              ItemGrants;                                                 // 0x0200   (0x0010)  
	TArray<FCatalogOfferRequirement>                   Requirements;                                               // 0x0210   (0x0010)  
	FCatalogGiftInfo                                   GiftInfo;                                                   // 0x0220   (0x0028)  
	bool                                               Refundable;                                                 // 0x0248   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x0249   (0x0007)  MISSED
	SDK_UNDEFINED(16,2393) /* TArray<FString> */       __um(DenyItemTemplateIds);                                  // 0x0250   (0x0010)  
};

/// Struct /Script/GameSubCatalog.Storefront
/// Size: 0x0020 (0x000000 - 0x000020)
struct FStorefront
{ 
	SDK_UNDEFINED(16,2394) /* FString */               __um(Name);                                                 // 0x0000   (0x0010)  
	TArray<FCatalogOffer>                              CatalogEntries;                                             // 0x0010   (0x0010)  
};

/// Struct /Script/GameSubCatalog.CatalogDownload
/// Size: 0x0020 (0x000000 - 0x000020)
struct FCatalogDownload
{ 
	int32_t                                            RefreshIntervalHrs;                                         // 0x0000   (0x0004)  
	int32_t                                            DailyPurchaseHrs;                                           // 0x0004   (0x0004)  
	FDateTime                                          Expiration;                                                 // 0x0008   (0x0008)  
	TArray<FStorefront>                                Storefronts;                                                // 0x0010   (0x0010)  
};

/// Struct /Script/GameSubCatalog.CatalogPurchaseNotification
/// Size: 0x0020 (0x000000 - 0x000020)
struct FCatalogPurchaseNotification
{ 
	FMcpLootResult                                     LootResult;                                                 // 0x0000   (0x0020)  
};

/// Struct /Script/GameSubCatalog.CatalogRefundNotification
/// Size: 0x0001 (0x000000 - 0x000001)
struct FCatalogRefundNotification
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/GameSubCatalog.McpEntitlementRefreshTimerInfo
/// Size: 0x0018 (0x000000 - 0x000018)
struct FMcpEntitlementRefreshTimerInfo
{ 
	FDateTime                                          NextEntitlementRefresh;                                     // 0x0000   (0x0008)  
	FDateTime                                          MustRefreshAuthBy;                                          // 0x0008   (0x0008)  
	FDateTime                                          LastAuthRefresh;                                            // 0x0010   (0x0008)  
};

/// Struct /Script/GameSubCatalog.McpProcessedConsumables
/// Size: 0x0018 (0x000000 - 0x000018)
struct FMcpProcessedConsumables
{ 
	EAppStore                                          AppStore;                                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	SDK_UNDEFINED(16,2395) /* TArray<FString> */       __um(IDs);                                                  // 0x0008   (0x0010)  
};

/// Struct /Script/GameSubCatalog.McpInAppPurchases
/// Size: 0x00E0 (0x000000 - 0x0000E0)
struct FMcpInAppPurchases
{ 
	SDK_UNDEFINED(16,2396) /* TArray<FString> */       __um(Receipts);                                             // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,2397) /* TArray<FString> */       __um(IgnoredReceipts);                                      // 0x0010   (0x0010)  
	SDK_UNDEFINED(16,2398) /* TArray<FString> */       __um(Fulfillments);                                         // 0x0020   (0x0010)  
	SDK_UNDEFINED(80,2399) /* TMap<FString, int32_t> */ __um(FulfillmentCounts);                                   // 0x0030   (0x0050)  
	SDK_UNDEFINED(80,2400) /* TMap<EAppStore, FMcpEntitlementRefreshTimerInfo> */ __um(RefreshTimers);             // 0x0080   (0x0050)  
	TArray<FMcpProcessedConsumables>                   ProcessedConsumables;                                       // 0x00D0   (0x0010)  
};

/// Struct /Script/GameSubCatalog.KeychainDownload
/// Size: 0x0010 (0x000000 - 0x000010)
struct FKeychainDownload
{ 
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0000   (0x0010)  MISSED
};

