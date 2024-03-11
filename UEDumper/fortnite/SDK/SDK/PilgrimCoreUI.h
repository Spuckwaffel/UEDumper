
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
/// dependency: ModelViewViewModel
/// dependency: PilgrimCoreRuntime
/// dependency: UMG

/// Class /Script/PilgrimCoreUI.FortSettingRegistryExtension_Pilgrim
/// Size: 0x0078 (0x000028 - 0x0000A0)
class UFortSettingRegistryExtension_Pilgrim : public UFortGameSettingRegistryExtension
{ 
public:
	unsigned char                                      UnknownData00_3[0x20];                                      // 0x0028   (0x0020)  MISSED
	class UPilgrimPresetSelector*                      PilgrimPresetSelectorInstance;                              // 0x0048   (0x0008)  
	unsigned char                                      UnknownData01_6[0x50];                                      // 0x0050   (0x0050)  MISSED
};

/// Class /Script/PilgrimCoreUI.PilgrimPlayerInfoWidgetBase
/// Size: 0x0000 (0x0002C0 - 0x0002C0)
class UPilgrimPlayerInfoWidgetBase : public UUserWidget
{ 
public:


	/// Functions
	// Function /Script/PilgrimCoreUI.PilgrimPlayerInfoWidgetBase.HookUpVoiceIcon
	// void HookUpVoiceIcon(class UFortVoiceChatStatusIcon* Icon, class AFortPlayerStateAthena* Player);                     // [0xa8183b4] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/PilgrimCoreUI.PilgrimPostGameProgressWidget
/// Size: 0x0000 (0x0002E8 - 0x0002E8)
class UPilgrimPostGameProgressWidget : public UFortSeasonDataWidget
{ 
public:


	/// Functions
	// Function /Script/PilgrimCoreUI.PilgrimPostGameProgressWidget.GetTotalXP
	// int32_t GetTotalXP();                                                                                                 // [0xa81836c] Final|Native|Private|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PilgrimCoreUI.PilgrimPostGameProgressWidget.GetMatchXP
	// int32_t GetMatchXP();                                                                                                 // [0xa818240] Final|Native|Private|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/PilgrimCoreUI.PilgrimPresetSelector
/// Size: 0x0028 (0x000028 - 0x000050)
class UPilgrimPresetSelector : public UPilgrimPresetSelectorBase
{ 
public:
	unsigned char                                      UnknownData00_3[0x10];                                      // 0x0028   (0x0010)  MISSED
	int32_t                                            NumLanes;                                                   // 0x0038   (0x0004)  
	EHardwareDevicePrimaryType                         DeviceType;                                                 // 0x003C   (0x0001)  
	unsigned char                                      UnknownData01_5[0xB];                                       // 0x003D   (0x000B)  MISSED
	class UPilgrimPresetConfiguration*                 PilgrimPresetConfiguration;                                 // 0x0048   (0x0008)  


	/// Functions
	// Function /Script/PilgrimCoreUI.PilgrimPresetSelector.OnPresetSelectionRequested
	// void OnPresetSelectionRequested(class APlayerController* Player);                                                     // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/PilgrimCoreUI.PilgrimPresetSelector.OnPresetSelectionCancelled
	// void OnPresetSelectionCancelled();                                                                                    // [0xa818768] Final|Native|Public|BlueprintCallable 
	// Function /Script/PilgrimCoreUI.PilgrimPresetSelector.OnPresetSelected
	// void OnPresetSelected(int32_t SelectedNumLanes, int32_t SelectedPresetIndex);                                         // [0xa8186a8] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/PilgrimCoreUI.PilgrimPresetSwitcher
/// Size: 0x0028 (0x0002E8 - 0x000310)
class UPilgrimPresetSwitcher : public UCommonUserWidget
{ 
public:
	int32_t                                            NumLanes;                                                   // 0x02E8   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x02EC   (0x0004)  MISSED
	class UFortSettingsRotator*                        Rotator_Preset;                                             // 0x02F0   (0x0008)  
	class UCommonButtonLegacy*                         Button_Decrease_Preset;                                     // 0x02F8   (0x0008)  
	class UCommonButtonLegacy*                         Button_Increase_Preset;                                     // 0x0300   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0308   (0x0008)  MISSED


	/// Functions
	// Function /Script/PilgrimCoreUI.PilgrimPresetSwitcher.InitializeForLanes
	// void InitializeForLanes(int32_t NewNumLanes, TArray<UFortInputMappingContext*>& InputMappingContexts);                // [0xa8184f8] Final|Native|Private|HasOutParms|BlueprintCallable 
	// Function /Script/PilgrimCoreUI.PilgrimPresetSwitcher.GetSelectedItems
	// void GetSelectedItems(int32_t& OutSelectedLaneNum, int32_t& OutSelectedIndex);                                        // [0xa818288] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/PilgrimCoreUI.PilgrimSongSortVM
/// Size: 0x0048 (0x000088 - 0x0000D0)
class UPilgrimSongSortVM : public UFortSortItemVM
{ 
public:
	unsigned char                                      UnknownData00_1[0x48];                                      // 0x0088   (0x0048)  MISSED
};

/// Class /Script/PilgrimCoreUI.PilgrimSongAlphaSortVM
/// Size: 0x0010 (0x0000D0 - 0x0000E0)
class UPilgrimSongAlphaSortVM : public UPilgrimSongSortVM
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x00D0   (0x0010)  MISSED
};

/// Class /Script/PilgrimCoreUI.PilgrimSongFilterItemVM
/// Size: 0x0048 (0x000088 - 0x0000D0)
class UPilgrimSongFilterItemVM : public UFortFilterItemVM
{ 
public:
	unsigned char                                      UnknownData00_1[0x48];                                      // 0x0088   (0x0048)  MISSED
};

/// Class /Script/PilgrimCoreUI.PilgrimSongFilterOwnedVM
/// Size: 0x0000 (0x0000D0 - 0x0000D0)
class UPilgrimSongFilterOwnedVM : public UPilgrimSongFilterItemVM
{ 
public:
};

/// Class /Script/PilgrimCoreUI.PilgrimSongFilterAvailableVM
/// Size: 0x0000 (0x0000D0 - 0x0000D0)
class UPilgrimSongFilterAvailableVM : public UPilgrimSongFilterItemVM
{ 
public:
};

/// Class /Script/PilgrimCoreUI.PilgrimSongSearchTextVM
/// Size: 0x0040 (0x000080 - 0x0000C0)
class UPilgrimSongSearchTextVM : public UFortSortFilterSearchTextVM
{ 
public:
	unsigned char                                      UnknownData00_1[0x40];                                      // 0x0080   (0x0040)  MISSED
};

/// Class /Script/PilgrimCoreUI.PilgrimSongFilterVM
/// Size: 0x0020 (0x000068 - 0x000088)
class UPilgrimSongFilterVM : public UMVVMViewModelBase
{ 
public:
	class UFortSortFilterVM*                           SortFilter;                                                 // 0x0068   (0x0008)  
	TArray<class UPilgrimSongMetadata*>                FilteredItems;                                              // 0x0070   (0x0010)  
	class APlayerController*                           OwningController;                                           // 0x0080   (0x0008)  


	/// Functions
	// Function /Script/PilgrimCoreUI.PilgrimSongFilterVM.Initialize
	// void Initialize(class APlayerController* InOwningController);                                                         // [0xa818478] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/PilgrimCoreUI.PilgrimCoreUIGlobals
/// Size: 0x0000 (0x000028 - 0x000028)
class UPilgrimCoreUIGlobals : public UObject
{ 
public:
};

