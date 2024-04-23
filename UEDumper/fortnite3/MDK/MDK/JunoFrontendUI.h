
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
/// dependency: JunoCoreUI
/// dependency: ModelViewViewModel

/// Class /Script/JunoFrontendUI.JunoFrontendExperienceFlow
/// Size: 0x00E0 (0x000028 - 0x000108)
class UJunoFrontendExperienceFlow : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:
	CMember(TWeakObjectPtr<UClass*>)                   VideoPlayerClass                                            OFFSET(get<T>, {0x60, 32, 0, 0})
	CMember(TArray<FString>)                           FlowStepArray                                               OFFSET(get<T>, {0x80, 16, 0, 0})
	DMember(bool)                                      bEnableTrailer                                              OFFSET(get<bool>, {0x90, 1, 0, 0})
	SMember(FString)                                   CinematicTrailerVUID                                        OFFSET(getStruct<T>, {0x98, 16, 0, 0})
	SMember(FName)                                     CinematicTrailerString                                      OFFSET(getStruct<T>, {0xA8, 4, 0, 0})
	CMember(TMap<FString, FString>)                    CinematicTrailerRating                                      OFFSET(get<T>, {0xB0, 80, 0, 0})


	/// Functions
	// Function /Script/JunoFrontendUI.JunoFrontendExperienceFlow.HandleTrailerTerminalError
	// void HandleTrailerTerminalError(EBaseMediaTerminalErrorReason Reason);                                                   // [0xccd1c18] Final|Native|Private 
	// Function /Script/JunoFrontendUI.JunoFrontendExperienceFlow.HandleFinishTrailerStep
	// void HandleFinishTrailerStep();                                                                                          // [0xccd1c04] Final|Native|Private 
};

/// Class /Script/JunoFrontendUI.JunoMatchmakingUtilityExtension
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoMatchmakingUtilityExtension : public UMatchmakingUtilityExtensionBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/JunoFrontendUI.JunoMatchmakingWidgetExtension
/// Size: 0x0020 (0x000028 - 0x000048)
class UJunoMatchmakingWidgetExtension : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(class UClass*)                             GameSelectionOverride                                       OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(class UClass*)                             CustomHeadingWidget                                         OFFSET(get<T>, {0x38, 8, 0, 0})
	DMember(bool)                                      bDisplayGameSelectionOnContentStack                         OFFSET(get<bool>, {0x40, 1, 0, 0})
};

/// Class /Script/JunoFrontendUI.JunoTabGroupButtonViewModel
/// Size: 0x0000 (0x000090 - 0x000090)
class UJunoTabGroupButtonViewModel : public UUIKitTabGroupButtonViewModel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
};

/// Class /Script/JunoFrontendUI.JunoWorldManagementViewModel
/// Size: 0x00E0 (0x000068 - 0x000148)
class UJunoWorldManagementViewModel : public UMVVMViewModelBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 328;

public:
	DMember(bool)                                      bAllowWorldCreation                                         OFFSET(get<bool>, {0x68, 1, 0, 0})
	DMember(int32_t)                                   MaxWorldSlots                                               OFFSET(get<int32_t>, {0x6C, 4, 0, 0})
	DMember(bool)                                      bAllowWorldUGCCreation                                      OFFSET(get<bool>, {0x70, 1, 0, 0})
	DMember(bool)                                      bShowDefaultWorldName                                       OFFSET(get<bool>, {0x71, 1, 0, 0})
	DMember(bool)                                      bIsModeratorModeEnabled                                     OFFSET(get<bool>, {0x72, 1, 0, 0})
	DMember(bool)                                      bWorldLoadingSuccess                                        OFFSET(get<bool>, {0x73, 1, 0, 0})
	DMember(bool)                                      bIsInCabinMode                                              OFFSET(get<bool>, {0x74, 1, 0, 0})
	CMember(TArray<class UJunoWorldDataViewModel*>)    OwnerWorlds                                                 OFFSET(get<T>, {0x78, 16, 0, 0})
	CMember(TArray<class UJunoWorldDataViewModel*>)    SharedWorlds                                                OFFSET(get<T>, {0x88, 16, 0, 0})
	CMember(TArray<class UJunoWorldDataViewModel*>)    WorldSlots                                                  OFFSET(get<T>, {0x98, 16, 0, 0})
	CMember(class UJunoWorldDataViewModel*)            SelectedWorld                                               OFFSET(get<T>, {0xA8, 8, 0, 0})
	CMember(class UJunoWorldDataViewModel*)            EmptyWorld                                                  OFFSET(get<T>, {0xB0, 8, 0, 0})
	DMember(float)                                     DataRefreshFrequency                                        OFFSET(get<float>, {0xD0, 4, 0, 0})
	CMember(class UDataTable*)                         SettingDataTable                                            OFFSET(get<T>, {0x128, 8, 0, 0})
	CMember(TArray<class UJunoWorldImageObject*>)      WorldImageList                                              OFFSET(get<T>, {0x130, 16, 0, 0})
	CMember(class UJunoWorldDataViewModel*)            InitWorldManagementVM                                       OFFSET(get<T>, {0x140, 8, 0, 0})


	/// Functions
	// Function /Script/JunoFrontendUI.JunoWorldManagementViewModel.StartMatchmakingInModeratorMode
	// void StartMatchmakingInModeratorMode(FString InWorldId);                                                                 // [0xccd1dc4] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoFrontendUI.JunoWorldManagementViewModel.RemoveSelectedWorldFromList
	// void RemoveSelectedWorldFromList();                                                                                      // [0xccd1db0] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoFrontendUI.JunoWorldManagementViewModel.InitWorldData
	// class UJunoWorldDataViewModel* InitWorldData(TWeakObjectPtr<UDataTable*>& InSettingDataTable, TWeakObjectPtr<UDataTable*>& InWorldImageDataTable); // [0xccd1c94] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoFrontendUI.JunoWorldManagementViewModel.GetIsCreateFlowSelected
	// bool GetIsCreateFlowSelected();                                                                                          // [0xccd1bbc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoFrontendUI.JunoWorldManagementViewModel.FetchWorldData
	// void FetchWorldData();                                                                                                   // [0xccd1ba8] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoFrontendUI.JunoWorldManagementViewModel.EnableDataRefresh
	// void EnableDataRefresh();                                                                                                // [0xccd1b94] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoFrontendUI.JunoWorldManagementViewModel.DisableDataRefresh
	// void DisableDataRefresh();                                                                                               // [0xccd1b80] Final|Native|Public|BlueprintCallable 
};

/// Enum /Script/JunoFrontendUI.EOptionalJunoFrontendExperienceFlowSteps
/// Size: 0x02
enum class EOptionalJunoFrontendExperienceFlowSteps : uint8_t
{
	EOptionalJunoFrontendExperienceFlowSteps__TryShowCinematicTrailer                = 0,
	EOptionalJunoFrontendExperienceFlowSteps__EOptionalJunoFrontendExperienceFlowSteps_MAX = 1
};

