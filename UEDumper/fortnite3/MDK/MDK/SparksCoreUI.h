
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CommonUI
/// dependency: CoreUObject
/// dependency: DynamicUI
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: FortniteUI
/// dependency: ModelViewViewModel
/// dependency: UMG

/// Class /Script/SparksCoreUI.SparksDynamicUIDirector
/// Size: 0x0028 (0x0002B0 - 0x0002D8)
class ASparksDynamicUIDirector : public ADynamicUIDirectorBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 728;

public:


	/// Functions
	// Function /Script/SparksCoreUI.SparksDynamicUIDirector.HandleCursorModeChanging
	// void HandleCursorModeChanging(bool bCursorModeEnabled, FName ActionName);                                                // [0xb6c8e90] Final|Native|Protected 
};

/// Class /Script/SparksCoreUI.SparksQuestScreenContainer
/// Size: 0x0018 (0x0002F0 - 0x000308)
class USparksQuestScreenContainer : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 776;

public:
	SMember(FName)                                     QuestTabID                                                  OFFSET(getStruct<T>, {0x2F0, 4, 0, 0})
	CMember(class UAthenaMapScreenContainer*)          AthenaScreenContainer                                       OFFSET(get<T>, {0x2F8, 8, 0, 0})


	/// Functions
	// Function /Script/SparksCoreUI.SparksQuestScreenContainer.SetQuestScreenVisible
	// void SetQuestScreenVisible(bool bVisible);                                                                               // [0xb6c9024] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SparksCoreUI.SparksQuestScreenContainer.HandleToggleQuestList
	// void HandleToggleQuestList(bool bMapVisible);                                                                            // [0xb6c9024] Final|Native|Protected 
	// Function /Script/SparksCoreUI.SparksQuestScreenContainer.HandleMapPanelExitButtonPressed
	// void HandleMapPanelExitButtonPressed();                                                                                  // [0xb6c9010] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SparksCoreUI.SparksQuestScreenContainer.HandleAthenaScreenDeactivated
	// void HandleAthenaScreenDeactivated();                                                                                    // [0x93157e8] Final|Native|Protected 
};

/// Class /Script/SparksCoreUI.SparksSocialAvatarIcon
/// Size: 0x0000 (0x0003F0 - 0x0003F0)
class USparksSocialAvatarIcon : public UFortSocialAvatarIcon
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1008;

public:


	/// Functions
	// Function /Script/SparksCoreUI.SparksSocialAvatarIcon.BP_SetSocialUserFromPlayerState
	// void BP_SetSocialUserFromPlayerState(class AFortPlayerState* PlayerState);                                               // [0xb6c8dfc] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/SparksCoreUI.SparksSongItemDetailsVM
/// Size: 0x0020 (0x000370 - 0x000390)
class USparksSongItemDetailsVM : public UAthenaItemDetailsVM
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 912;

public:
	CMember(class UTexture2D*)                         CoverArt                                                    OFFSET(get<T>, {0x370, 8, 0, 0})


	/// Functions
	// Function /Script/SparksCoreUI.SparksSongItemDetailsVM.OnSongCatalogRetrieved
	// void OnSongCatalogRetrieved(bool bSuccess);                                                                              // [0xb6c90a4] Final|Native|Private 
};

/// Class /Script/SparksCoreUI.SparksSongItemVM
/// Size: 0x0000 (0x000110 - 0x000110)
class USparksSongItemVM : public UAthenaItemVM
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
};

/// Class /Script/SparksCoreUI.SparksSongLockerCategoryConfig
/// Size: 0x0000 (0x000180 - 0x000180)
class USparksSongLockerCategoryConfig : public UAthenaLockerCategoryConfig
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 384;

public:
};

/// Class /Script/SparksCoreUI.SparksCoreUIGlobals
/// Size: 0x0000 (0x000028 - 0x000028)
class USparksCoreUIGlobals : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

