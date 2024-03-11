
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CommonUI
/// dependency: CommonUILegacy
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: FortniteUI
/// dependency: GameFeatures
/// dependency: UMG

/// Class /Script/StoreSelectionUI.FortStoreSelectionData
/// Size: 0x0050 (0x000530 - 0x000580)
class UFortStoreSelectionData : public UFortGameFeatureData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1408;

public:
	CMember(TWeakObjectPtr<UClass*>)                   StoreSelectionScreenClass                                   OFFSET(get<T>, {0x530, 32, 0, 0})
	SMember(FText)                                     RegularStoreSelectedText                                    OFFSET(getStruct<T>, {0x550, 24, 0, 0})
	SMember(FText)                                     NonRegularStoreSelectedText                                 OFFSET(getStruct<T>, {0x568, 24, 0, 0})
};

/// Class /Script/StoreSelectionUI.FortStoreSelectionOptionEntry
/// Size: 0x0020 (0x0014E0 - 0x001500)
class UFortStoreSelectionOptionEntry : public UCommonButtonLegacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5376;

public:
	CMember(class UFortLazyImage*)                     Image_Icon                                                  OFFSET(get<T>, {0x14E0, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   Text_Description                                            OFFSET(get<T>, {0x14E8, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   Text_Price                                                  OFFSET(get<T>, {0x14F0, 8, 0, 0})
	CMember(class UCommonRichTextBlock*)               RichText_Label                                              OFFSET(get<T>, {0x14F8, 8, 0, 0})
};

/// Class /Script/StoreSelectionUI.FortStoreSelectionScreen
/// Size: 0x03B8 (0x000538 - 0x0008F0)
class UFortStoreSelectionScreen : public UCommonActivatablePanelLegacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2288;

public:
	CMember(class UCommonButtonGroupLegacy*)           EntryBoxButtonGroup                                         OFFSET(get<T>, {0x540, 8, 0, 0})
	CMember(class UFortRealMoneyOffer*)                StoreOffer                                                  OFFSET(get<T>, {0x548, 8, 0, 0})
	CMember(class UCommonLoadGuard*)                   StoreOfferLoadGuard                                         OFFSET(get<T>, {0x550, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   Text_Header                                                 OFFSET(get<T>, {0x558, 8, 0, 0})
	CMember(class UDynamicEntryBox*)                   DynamicEntryBox_Options                                     OFFSET(get<T>, {0x560, 8, 0, 0})
	CMember(class UCommonButtonLegacy*)                Button_Continue                                             OFFSET(get<T>, {0x568, 8, 0, 0})
	CMember(class UCommonButtonLegacy*)                Button_Cancel                                               OFFSET(get<T>, {0x570, 8, 0, 0})
	CMember(class UCommonRichTextBlock*)               RichText_InitiallySelectedHint                              OFFSET(get<T>, {0x578, 8, 0, 0})
	CMember(TScriptInterface<Class>)                   PurchaseChoiceOwner                                         OFFSET(get<T>, {0x580, 16, 0, 0})
	CMember(TArray<FItemData>)                         StoreOptions                                                OFFSET(get<T>, {0x590, 16, 0, 0})
	CMember(TWeakObjectPtr<UFortMtxOfferData*>)        SoftDisplayAsset                                            OFFSET(get<T>, {0x5A0, 32, 0, 0})
	SMember(FItemData)                                 ItemData                                                    OFFSET(getStruct<T>, {0x5C0, 768, 0, 0})
	SMember(FText)                                     OptionalLabels                                              OFFSET(getStruct<T>, {0x8C0, 48, 0, 0})
};

/// Struct /Script/StoreSelectionUI.ItemData
/// Size: 0x0040 (0x000000 - 0x000040)
class FItemData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(TWeakObjectPtr<UTexture2D*>)               Icon                                                        OFFSET(get<T>, {0x0, 32, 0, 0})
	SMember(FText)                                     Name                                                        OFFSET(getStruct<T>, {0x20, 24, 0, 0})
};

/// Enum /Script/StoreSelectionUI.EOptionalLabel
/// Size: 0x03
enum class EOptionalLabel : uint8_t
{
	EOptionalLabel__Label_DS                                                         = 0,
	EOptionalLabel__Label_NM                                                         = 1,
	EOptionalLabel__Max                                                              = 2
};

