
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: FortniteUI
/// dependency: ModelViewViewModel

/// Class /Script/JunoBuildingCosmeticsUI.JunoBuildSetLockerCategoryConfig
/// Size: 0x0000 (0x000180 - 0x000180)
class UJunoBuildSetLockerCategoryConfig : public UAthenaLockerCategoryConfig
{ 
public:
};

/// Class /Script/JunoBuildingCosmeticsUI.JunoPropBundleLockerCategoryConfig
/// Size: 0x0000 (0x000180 - 0x000180)
class UJunoPropBundleLockerCategoryConfig : public UAthenaLockerCategoryConfig
{ 
public:
};

/// Class /Script/JunoBuildingCosmeticsUI.JunoLockerCategoryVM
/// Size: 0x0000 (0x0001B0 - 0x0001B0)
class UJunoLockerCategoryVM : public UAthenaLockerCategoryVM
{ 
public:
};

/// Class /Script/JunoBuildingCosmeticsUI.JunoShopBuildSetVM
/// Size: 0x0000 (0x000110 - 0x000110)
class UJunoShopBuildSetVM : public UAthenaItemVM
{ 
public:
};

/// Struct /Script/JunoBuildingCosmeticsUI.JunoShopBuildPartInfo
/// Size: 0x0020 (0x000000 - 0x000020)
struct FJunoShopBuildPartInfo
{ 
	SDK_UNDEFINED(24,11313) /* FText */                __um(PartName);                                             // 0x0000   (0x0018)  
	int32_t                                            PartQuantity;                                               // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Struct /Script/JunoBuildingCosmeticsUI.JunoShopBuildResourceRequirement
/// Size: 0x0040 (0x000000 - 0x000040)
struct FJunoShopBuildResourceRequirement
{ 
	SDK_UNDEFINED(32,11314) /* TWeakObjectPtr<UTexture2D*> */ __um(ResourceImage);                                 // 0x0000   (0x0020)  
	SDK_UNDEFINED(24,11315) /* FText */                __um(ResourceName);                                         // 0x0020   (0x0018)  
	int32_t                                            ResourceQuantity;                                           // 0x0038   (0x0004)  
	EFortRarity                                        ResourceRarity;                                             // 0x003C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x003D   (0x0003)  MISSED
};

/// Class /Script/JunoBuildingCosmeticsUI.JunoShopBuildSetItemDetailsVM
/// Size: 0x0040 (0x0003C0 - 0x000400)
class UJunoShopBuildSetItemDetailsVM : public UAthenaItemDetailsVM
{ 
public:
	unsigned char                                      UnknownData00_3[0x20];                                      // 0x03B8   (0x0020)  MISSED
	TArray<FJunoShopBuildPartInfo>                     Parts;                                                      // 0x03D8   (0x0010)  
	TArray<FJunoShopBuildResourceRequirement>          ResourceRequirements;                                       // 0x03E8   (0x0010)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x03F8   (0x0008)  MISSED


	/// Functions
	// Function /Script/JunoBuildingCosmeticsUI.JunoShopBuildSetItemDetailsVM.GetTotalPartCount
	// int32_t GetTotalPartCount();                                                                                          // [0xb50078c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoBuildingCosmeticsUI.JunoShopBuildSetItemDetailsVM.GetFormattedPartList
	// TArray<FText> GetFormattedPartList();                                                                                 // [0xb500714] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoBuildingCosmeticsUI.JunoShopBuildSetItemDetailsVM.ForceUpdateItemDetails
	// void ForceUpdateItemDetails();                                                                                        // [0xb500700] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/JunoBuildingCosmeticsUI.JunoShopPropBundleVM
/// Size: 0x0000 (0x000110 - 0x000110)
class UJunoShopPropBundleVM : public UAthenaItemVM
{ 
public:
};

/// Struct /Script/JunoBuildingCosmeticsUI.JunoShopPropInfo
/// Size: 0x0020 (0x000000 - 0x000020)
struct FJunoShopPropInfo
{ 
	SDK_UNDEFINED(24,11316) /* FText */                __um(DisplayName);                                          // 0x0000   (0x0018)  
	bool                                               IsInteractable;                                             // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0019   (0x0007)  MISSED
};

/// Class /Script/JunoBuildingCosmeticsUI.JunoShopPropBundleItemDetailsVM
/// Size: 0x0020 (0x0003C0 - 0x0003E0)
class UJunoShopPropBundleItemDetailsVM : public UAthenaItemDetailsVM
{ 
public:
	TArray<FJunoShopPropInfo>                          Props;                                                      // 0x03B8   (0x0010)  
	TArray<FJunoShopBuildResourceRequirement>          ResourceRequirements;                                       // 0x03C8   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x03D8   (0x0008)  MISSED


	/// Functions
	// Function /Script/JunoBuildingCosmeticsUI.JunoShopPropBundleItemDetailsVM.GetPropNames
	// TArray<FText> GetPropNames();                                                                                         // [0xb500750] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

