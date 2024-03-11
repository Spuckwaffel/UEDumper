
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
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
public:
};

/// Class /Script/VehiclesFrontend.DelMarItemVM
/// Size: 0x0000 (0x000110 - 0x000110)
class UDelMarItemVM : public UAthenaItemVM
{ 
public:
};

/// Class /Script/VehiclesFrontend.DelMarLockerCategoryConfig
/// Size: 0x0018 (0x000180 - 0x000198)
class UDelMarLockerCategoryConfig : public UAthenaLockerCategoryConfig
{ 
public:
	class UCosmeticLoadoutSchema*                      VehicleLoadoutSchema;                                       // 0x0180   (0x0008)  
	TArray<FPrimaryAssetType>                          AllowedAssetTypes;                                          // 0x0188   (0x0010)  
};

/// Class /Script/VehiclesFrontend.DelMarLockerCategoryVM
/// Size: 0x0000 (0x0001B0 - 0x0001B0)
class UDelMarLockerCategoryVM : public UAthenaLockerCategoryVM
{ 
public:
};

