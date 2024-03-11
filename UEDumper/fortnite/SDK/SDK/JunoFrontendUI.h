
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
/// dependency: JunoCoreUI
/// dependency: ModelViewViewModel

/// Enum /Script/JunoFrontendUI.EOptionalJunoFrontendExperienceFlowSteps
/// Size: 0x02
enum class EOptionalJunoFrontendExperienceFlowSteps : uint8_t
{
	EOptionalJunoFrontendExperienceFlowSteps__TryShowCinematicTrailer                = 0,
	EOptionalJunoFrontendExperienceFlowSteps__EOptionalJunoFrontendExperienceFlowSteps_MAX = 1
};

/// Class /Script/JunoFrontendUI.JunoFrontendExperienceFlow
/// Size: 0x00D0 (0x000028 - 0x0000F8)
class UJunoFrontendExperienceFlow : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x48];                                      // 0x0000   (0x0048)  MISSED
	class UFortStreamMediaSource*                      VideoStream_Source;                                         // 0x0048   (0x0008)  
	SDK_UNDEFINED(32,14459) /* TWeakObjectPtr<UClass*> */ __um(VideoPlayerClass);                                  // 0x0050   (0x0020)  
	SDK_UNDEFINED(16,14460) /* TArray<FString> */      __um(FlowStepArray);                                        // 0x0070   (0x0010)  
	bool                                               bEnableTrailer;                                             // 0x0080   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0081   (0x0007)  MISSED
	SDK_UNDEFINED(16,14461) /* FString */              __um(CinematicTrailerVUID);                                 // 0x0088   (0x0010)  
	FName                                              CinematicTrailerString;                                     // 0x0098   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x009C   (0x0004)  MISSED
	SDK_UNDEFINED(80,14462) /* TMap<FString, FString> */ __um(CinematicTrailerRating);                             // 0x00A0   (0x0050)  
	unsigned char                                      UnknownData03_6[0x8];                                       // 0x00F0   (0x0008)  MISSED
};

/// Class /Script/JunoFrontendUI.JunoMatchmakingUtilityExtension
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoMatchmakingUtilityExtension : public UMatchmakingUtilityExtensionBase
{ 
public:
};

/// Class /Script/JunoFrontendUI.JunoMatchmakingWidgetExtension
/// Size: 0x0020 (0x000028 - 0x000048)
class UJunoMatchmakingWidgetExtension : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x30];                                      // 0x0000   (0x0030)  MISSED
	class UClass*                                      GameSelectionOverride;                                      // 0x0030   (0x0008)  
	class UClass*                                      CustomHeadingWidget;                                        // 0x0038   (0x0008)  
	bool                                               bDisplayGameSelectionOnContentStack;                        // 0x0040   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0041   (0x0007)  MISSED
};

/// Class /Script/JunoFrontendUI.JunoTabGroupButtonViewModel
/// Size: 0x0000 (0x000098 - 0x000098)
class UJunoTabGroupButtonViewModel : public UUIKitTabGroupButtonViewModel
{ 
public:
};

/// Class /Script/JunoFrontendUI.JunoWorldManagementViewModel
/// Size: 0x00E0 (0x000068 - 0x000148)
class UJunoWorldManagementViewModel : public UMVVMViewModelBase
{ 
public:
	bool                                               bAllowWorldCreation;                                        // 0x0068   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0069   (0x0003)  MISSED
	int32_t                                            MaxWorldSlots;                                              // 0x006C   (0x0004)  
	bool                                               bIsModeratorModeEnabled;                                    // 0x0070   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0071   (0x0007)  MISSED
	TArray<class UJunoWorldDataViewModel*>             OwnerWorlds;                                                // 0x0078   (0x0010)  
	TArray<class UJunoWorldDataViewModel*>             SharedWorlds;                                               // 0x0088   (0x0010)  
	TArray<class UJunoWorldDataViewModel*>             WorldSlots;                                                 // 0x0098   (0x0010)  
	class UJunoWorldDataViewModel*                     SelectedWorld;                                              // 0x00A8   (0x0008)  
	class UJunoWorldDataViewModel*                     EmptyWorld;                                                 // 0x00B0   (0x0008)  
	unsigned char                                      UnknownData02_5[0x20];                                      // 0x00B8   (0x0020)  MISSED
	float                                              DataRefreshFrequency;                                       // 0x00D8   (0x0004)  
	unsigned char                                      UnknownData03_5[0x54];                                      // 0x00DC   (0x0054)  MISSED
	class UDataTable*                                  SettingDataTable;                                           // 0x0130   (0x0008)  
	TArray<class UJunoWorldImageObject*>               WorldImageList;                                             // 0x0138   (0x0010)  


	/// Functions
	// Function /Script/JunoFrontendUI.JunoWorldManagementViewModel.StartMatchmakingInModeratorMode
	// void StartMatchmakingInModeratorMode(FString InWorldId);                                                              // [0xb50f3b4] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoFrontendUI.JunoWorldManagementViewModel.RemoveSelectedWorldFromList
	// void RemoveSelectedWorldFromList();                                                                                   // [0xb50f3a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoFrontendUI.JunoWorldManagementViewModel.InitWorldData
	// void InitWorldData(TWeakObjectPtr<UDataTable*>& InSettingDataTable, TWeakObjectPtr<UDataTable*>& InWorldImageDataTable); // [0xb50f288] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoFrontendUI.JunoWorldManagementViewModel.GetIsCreateFlowSelected
	// bool GetIsCreateFlowSelected();                                                                                       // [0xb50f240] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoFrontendUI.JunoWorldManagementViewModel.FetchWorldData
	// void FetchWorldData();                                                                                                // [0xb50f22c] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoFrontendUI.JunoWorldManagementViewModel.EnableDataRefresh
	// void EnableDataRefresh();                                                                                             // [0xb50f218] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoFrontendUI.JunoWorldManagementViewModel.DisableDataRefresh
	// void DisableDataRefresh();                                                                                            // [0xb50f204] Final|Native|Public|BlueprintCallable 
};

