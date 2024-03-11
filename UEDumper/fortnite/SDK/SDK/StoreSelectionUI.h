
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

/// Enum /Script/StoreSelectionUI.EOptionalLabel
/// Size: 0x03
enum class EOptionalLabel : uint8_t
{
	EOptionalLabel__Label_DS                                                         = 0,
	EOptionalLabel__Label_NM                                                         = 1,
	EOptionalLabel__Max                                                              = 2
};

/// Class /Script/StoreSelectionUI.FortStoreSelectionData
/// Size: 0x0050 (0x000530 - 0x000580)
class UFortStoreSelectionData : public UFortGameFeatureData
{ 
public:
	SDK_UNDEFINED(32,15638) /* TWeakObjectPtr<UClass*> */ __um(StoreSelectionScreenClass);                         // 0x0530   (0x0020)  
	SDK_UNDEFINED(24,15639) /* FText */                __um(RegularStoreSelectedText);                             // 0x0550   (0x0018)  
	SDK_UNDEFINED(24,15640) /* FText */                __um(NonRegularStoreSelectedText);                          // 0x0568   (0x0018)  
};

/// Class /Script/StoreSelectionUI.FortStoreSelectionOptionEntry
/// Size: 0x0020 (0x0014E0 - 0x001500)
class UFortStoreSelectionOptionEntry : public UCommonButtonLegacy
{ 
public:
	class UFortLazyImage*                              Image_Icon;                                                 // 0x14E0   (0x0008)  
	class UCommonTextBlock*                            Text_Description;                                           // 0x14E8   (0x0008)  
	class UCommonTextBlock*                            Text_Price;                                                 // 0x14F0   (0x0008)  
	class UCommonRichTextBlock*                        RichText_Label;                                             // 0x14F8   (0x0008)  
};

/// Struct /Script/StoreSelectionUI.ItemData
/// Size: 0x0040 (0x000000 - 0x000040)
struct FItemData
{ 
	SDK_UNDEFINED(32,15641) /* TWeakObjectPtr<UTexture2D*> */ __um(Icon);                                          // 0x0000   (0x0020)  
	SDK_UNDEFINED(24,15642) /* FText */                __um(Name);                                                 // 0x0020   (0x0018)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0038   (0x0008)  MISSED
};

/// Class /Script/StoreSelectionUI.FortStoreSelectionScreen
/// Size: 0x03B8 (0x000538 - 0x0008F0)
class UFortStoreSelectionScreen : public UCommonActivatablePanelLegacy
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0538   (0x0008)  MISSED
	class UCommonButtonGroupLegacy*                    EntryBoxButtonGroup;                                        // 0x0540   (0x0008)  
	class UFortRealMoneyOffer*                         StoreOffer;                                                 // 0x0548   (0x0008)  
	class UCommonLoadGuard*                            StoreOfferLoadGuard;                                        // 0x0550   (0x0008)  
	class UCommonTextBlock*                            Text_Header;                                                // 0x0558   (0x0008)  
	class UDynamicEntryBox*                            DynamicEntryBox_Options;                                    // 0x0560   (0x0008)  
	class UCommonButtonLegacy*                         Button_Continue;                                            // 0x0568   (0x0008)  
	class UCommonButtonLegacy*                         Button_Cancel;                                              // 0x0570   (0x0008)  
	class UCommonRichTextBlock*                        RichText_InitiallySelectedHint;                             // 0x0578   (0x0008)  
	SDK_UNDEFINED(16,15643) /* TScriptInterface<Class> */ __um(PurchaseChoiceOwner);                               // 0x0580   (0x0010)  
	TArray<FItemData>                                  StoreOptions;                                               // 0x0590   (0x0010)  
	SDK_UNDEFINED(32,15644) /* TWeakObjectPtr<UFortMtxOfferData*> */ __um(SoftDisplayAsset);                       // 0x05A0   (0x0020)  
	FItemData                                          ItemData;                                                   // 0x05C0   (0x0300)  
	SDK_UNDEFINED(48,15645) /* FText */                __um(OptionalLabels);                                       // 0x08C0   (0x0030)  
};

