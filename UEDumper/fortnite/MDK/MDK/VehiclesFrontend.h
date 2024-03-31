
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
/// Size: 0x0000 (0x0003C0 - 0x0003C0)
class UDelMarItemDetailsVM : public UAthenaItemDetailsVM
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 960;

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
/// Size: 0x0018 (0x0001A0 - 0x0001B8)
class UDelMarLockerCategoryConfig : public UAthenaLockerCategoryConfig
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 440;

public:
	CMember(class UCosmeticLoadoutSchema*)             VehicleLoadoutSchema                                        OFFSET(get<T>, {0x1A0, 8, 0, 0})
	CMember(TArray<FPrimaryAssetType>)                 AllowedAssetTypes                                           OFFSET(get<T>, {0x1A8, 16, 0, 0})
};

/// Class /Script/VehiclesFrontend.DelMarLockerCategoryVM
/// Size: 0x0000 (0x000238 - 0x000238)
class UDelMarLockerCategoryVM : public UAthenaLockerCategoryVM
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

