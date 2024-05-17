
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
/// Size: 0x0000 (0x000178 - 0x000178)
class UJunoBuildSetLockerCategoryConfig : public UAthenaLockerCategoryConfig
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 376;

public:
};

/// Class /Script/JunoBuildingCosmeticsUI.JunoPropBundleLockerCategoryConfig
/// Size: 0x0000 (0x000178 - 0x000178)
class UJunoPropBundleLockerCategoryConfig : public UAthenaLockerCategoryConfig
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 376;

public:
};

/// Class /Script/JunoBuildingCosmeticsUI.JunoCollectiblesLockerCategoryVM
/// Size: 0x0000 (0x000228 - 0x000228)
class UJunoCollectiblesLockerCategoryVM : public UAthenaLockerCategoryVM
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 552;

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
/// Size: 0x0040 (0x000370 - 0x0003B0)
class UJunoShopBuildSetItemDetailsVM : public UAthenaItemDetailsVM
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 944;

public:
	CMember(TArray<FJunoShopBuildPartInfo>)            Parts                                                       OFFSET(get<T>, {0x390, 16, 0, 0})
	CMember(TArray<FJunoShopBuildResourceRequirement>) ResourceRequirements                                        OFFSET(get<T>, {0x3A0, 16, 0, 0})


	/// Functions
	// Function /Script/JunoBuildingCosmeticsUI.JunoShopBuildSetItemDetailsVM.GetTotalPartCount
	// int32_t GetTotalPartCount();                                                                                             // [0xcd605f8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoBuildingCosmeticsUI.JunoShopBuildSetItemDetailsVM.GetFormattedPartList
	// TArray<FText> GetFormattedPartList();                                                                                    // [0xcd60580] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoBuildingCosmeticsUI.JunoShopBuildSetItemDetailsVM.ForceUpdateItemDetails
	// void ForceUpdateItemDetails();                                                                                           // [0xcd6056c] Final|Native|Public|BlueprintCallable 
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
/// Size: 0x0020 (0x000370 - 0x000390)
class UJunoShopPropBundleItemDetailsVM : public UAthenaItemDetailsVM
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 912;

public:
	CMember(TArray<FJunoShopPropInfo>)                 Props                                                       OFFSET(get<T>, {0x370, 16, 0, 0})
	CMember(TArray<FJunoShopBuildResourceRequirement>) ResourceRequirements                                        OFFSET(get<T>, {0x380, 16, 0, 0})


	/// Functions
	// Function /Script/JunoBuildingCosmeticsUI.JunoShopPropBundleItemDetailsVM.GetPropNames
	// TArray<FText> GetPropNames();                                                                                            // [0xcd605bc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/JunoBuildingCosmeticsUI.JunoShopBuildPartInfo
/// Size: 0x0018 (0x000000 - 0x000018)
class FJunoShopBuildPartInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FText)                                     PartName                                                    OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	DMember(int32_t)                                   PartQuantity                                                OFFSET(get<int32_t>, {0x10, 4, 0, 0})
};

/// Struct /Script/JunoBuildingCosmeticsUI.JunoShopPropInfo
/// Size: 0x0018 (0x000000 - 0x000018)
class FJunoShopPropInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FText)                                     DisplayName                                                 OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	DMember(bool)                                      IsInteractable                                              OFFSET(get<bool>, {0x10, 1, 0, 0})
};

/// Struct /Script/JunoBuildingCosmeticsUI.JunoShopBuildResourceRequirement
/// Size: 0x0038 (0x000000 - 0x000038)
class FJunoShopBuildResourceRequirement : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TWeakObjectPtr<UTexture2D*>)               ResourceImage                                               OFFSET(get<T>, {0x0, 32, 0, 0})
	SMember(FText)                                     ResourceName                                                OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	DMember(int32_t)                                   ResourceQuantity                                            OFFSET(get<int32_t>, {0x30, 4, 0, 0})
	CMember(EFortRarity)                               ResourceRarity                                              OFFSET(get<T>, {0x34, 1, 0, 0})
};

