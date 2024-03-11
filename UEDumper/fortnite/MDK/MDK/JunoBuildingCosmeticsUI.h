
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

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
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 384;

public:
};

/// Class /Script/JunoBuildingCosmeticsUI.JunoPropBundleLockerCategoryConfig
/// Size: 0x0000 (0x000180 - 0x000180)
class UJunoPropBundleLockerCategoryConfig : public UAthenaLockerCategoryConfig
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 384;

public:
};

/// Class /Script/JunoBuildingCosmeticsUI.JunoLockerCategoryVM
/// Size: 0x0000 (0x0001B0 - 0x0001B0)
class UJunoLockerCategoryVM : public UAthenaLockerCategoryVM
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 432;

public:
};

/// Class /Script/JunoBuildingCosmeticsUI.JunoShopBuildSetVM
/// Size: 0x0000 (0x000110 - 0x000110)
class UJunoShopBuildSetVM : public UAthenaItemVM
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
};

/// Class /Script/JunoBuildingCosmeticsUI.JunoShopBuildSetItemDetailsVM
/// Size: 0x0040 (0x0003C0 - 0x000400)
class UJunoShopBuildSetItemDetailsVM : public UAthenaItemDetailsVM
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1024;

public:
	CMember(TArray<FJunoShopBuildPartInfo>)            Parts                                                       OFFSET(get<T>, {0x3D8, 16, 0, 0})
	CMember(TArray<FJunoShopBuildResourceRequirement>) ResourceRequirements                                        OFFSET(get<T>, {0x3E8, 16, 0, 0})


	/// Functions
	// Function /Script/JunoBuildingCosmeticsUI.JunoShopBuildSetItemDetailsVM.GetTotalPartCount
	// int32_t GetTotalPartCount();                                                                                             // [0xb50078c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoBuildingCosmeticsUI.JunoShopBuildSetItemDetailsVM.GetFormattedPartList
	// TArray<FText> GetFormattedPartList();                                                                                    // [0xb500714] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoBuildingCosmeticsUI.JunoShopBuildSetItemDetailsVM.ForceUpdateItemDetails
	// void ForceUpdateItemDetails();                                                                                           // [0xb500700] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/JunoBuildingCosmeticsUI.JunoShopPropBundleVM
/// Size: 0x0000 (0x000110 - 0x000110)
class UJunoShopPropBundleVM : public UAthenaItemVM
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
};

/// Class /Script/JunoBuildingCosmeticsUI.JunoShopPropBundleItemDetailsVM
/// Size: 0x0020 (0x0003C0 - 0x0003E0)
class UJunoShopPropBundleItemDetailsVM : public UAthenaItemDetailsVM
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 992;

public:
	CMember(TArray<FJunoShopPropInfo>)                 Props                                                       OFFSET(get<T>, {0x3B8, 16, 0, 0})
	CMember(TArray<FJunoShopBuildResourceRequirement>) ResourceRequirements                                        OFFSET(get<T>, {0x3C8, 16, 0, 0})


	/// Functions
	// Function /Script/JunoBuildingCosmeticsUI.JunoShopPropBundleItemDetailsVM.GetPropNames
	// TArray<FText> GetPropNames();                                                                                            // [0xb500750] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/JunoBuildingCosmeticsUI.JunoShopBuildPartInfo
/// Size: 0x0020 (0x000000 - 0x000020)
class FJunoShopBuildPartInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FText)                                     PartName                                                    OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	DMember(int32_t)                                   PartQuantity                                                OFFSET(get<int32_t>, {0x18, 4, 0, 0})
};

/// Struct /Script/JunoBuildingCosmeticsUI.JunoShopPropInfo
/// Size: 0x0020 (0x000000 - 0x000020)
class FJunoShopPropInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FText)                                     DisplayName                                                 OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	DMember(bool)                                      IsInteractable                                              OFFSET(get<bool>, {0x18, 1, 0, 0})
};

/// Struct /Script/JunoBuildingCosmeticsUI.JunoShopBuildResourceRequirement
/// Size: 0x0040 (0x000000 - 0x000040)
class FJunoShopBuildResourceRequirement : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(TWeakObjectPtr<UTexture2D*>)               ResourceImage                                               OFFSET(get<T>, {0x0, 32, 0, 0})
	SMember(FText)                                     ResourceName                                                OFFSET(getStruct<T>, {0x20, 24, 0, 0})
	DMember(int32_t)                                   ResourceQuantity                                            OFFSET(get<int32_t>, {0x38, 4, 0, 0})
	CMember(EFortRarity)                               ResourceRarity                                              OFFSET(get<T>, {0x3C, 1, 0, 0})
};

