
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CommonUI
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: FortniteUI
/// dependency: ModelViewViewModel
/// dependency: UMG

/// Class /Script/SparksCoreUI.FortSettingRegistryExtension_Sparks
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortSettingRegistryExtension_Sparks : public UFortGameSettingRegistryExtension
{ 
public:
};

/// Class /Script/SparksCoreUI.SparksQuestScreenContainer
/// Size: 0x0018 (0x0002E8 - 0x000300)
class USparksQuestScreenContainer : public UCommonUserWidget
{ 
public:
	FName                                              QuestTabID;                                                 // 0x02E8   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x02EC   (0x0004)  MISSED
	class UAthenaMapScreenContainer*                   AthenaScreenContainer;                                      // 0x02F0   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x02F8   (0x0008)  MISSED


	/// Functions
	// Function /Script/SparksCoreUI.SparksQuestScreenContainer.SetQuestScreenVisible
	// void SetQuestScreenVisible(bool bVisible);                                                                            // [0xa4e5da0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SparksCoreUI.SparksQuestScreenContainer.HandleToggleQuestList
	// void HandleToggleQuestList(bool bMapVisible);                                                                         // [0xa4e5da0] Final|Native|Protected 
	// Function /Script/SparksCoreUI.SparksQuestScreenContainer.HandleMapPanelExitButtonPressed
	// void HandleMapPanelExitButtonPressed();                                                                               // [0xa4e5d8c] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SparksCoreUI.SparksQuestScreenContainer.HandleAthenaScreenDeactivated
	// void HandleAthenaScreenDeactivated();                                                                                 // [0xa4e5d74] Final|Native|Protected 
};

/// Class /Script/SparksCoreUI.SparksSongItemDetailsVM
/// Size: 0x0000 (0x0003C0 - 0x0003C0)
class USparksSongItemDetailsVM : public UAthenaItemDetailsVM
{ 
public:


	/// Functions
	// Function /Script/SparksCoreUI.SparksSongItemDetailsVM.OnSongCatalogRetrieved
	// void OnSongCatalogRetrieved(bool bSuccess);                                                                           // [0xa4e5e20] Final|Native|Private 
};

/// Class /Script/SparksCoreUI.SparksSongItemVM
/// Size: 0x0000 (0x000110 - 0x000110)
class USparksSongItemVM : public UAthenaItemVM
{ 
public:
};

/// Class /Script/SparksCoreUI.SparksSongLockerCategoryConfig
/// Size: 0x0000 (0x000180 - 0x000180)
class USparksSongLockerCategoryConfig : public UAthenaLockerCategoryConfig
{ 
public:
};

/// Class /Script/SparksCoreUI.SparksCoreUIGlobals
/// Size: 0x0000 (0x000028 - 0x000028)
class USparksCoreUIGlobals : public UObject
{ 
public:
};

