
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: CosmeticsFrameworkLoadouts
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: FortniteUI
/// dependency: ModelViewViewModel

/// Class /Script/VehiclesFrontend.DelMarItemDetailsVM
/// Size: 0x0000 (0x000370 - 0x000370)
class UDelMarItemDetailsVM : public UAthenaItemDetailsVM
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 880;

public:
};

/// Class /Script/VehiclesFrontend.DelMarItemVM
/// Size: 0x0000 (0x000110 - 0x000110)
class UDelMarItemVM : public UAthenaItemVM
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
};

/// Class /Script/VehiclesFrontend.DelMarLockerCategoryConfig
/// Size: 0x0018 (0x000180 - 0x000198)
class UDelMarLockerCategoryConfig : public UAthenaLockerCategoryConfig
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 408;

public:
	CMember(class UCosmeticLoadoutSchema*)             VehicleLoadoutSchema                                        OFFSET(get<T>, {0x180, 8, 0, 0})
	CMember(TArray<FPrimaryAssetType>)                 AllowedAssetTypes                                           OFFSET(get<T>, {0x188, 16, 0, 0})
};

/// Class /Script/VehiclesFrontend.DelMarLockerCategoryVM
/// Size: 0x0000 (0x000228 - 0x000228)
class UDelMarLockerCategoryVM : public UAthenaLockerCategoryVM
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 552;

public:
};

