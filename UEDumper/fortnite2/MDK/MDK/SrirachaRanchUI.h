
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CommonUI
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: EpicCMSUIFramework
/// dependency: FortniteGame
/// dependency: FortniteUI
/// dependency: Paper2D
/// dependency: SrirachaRanch
/// dependency: UMG

/// Class /Script/SrirachaRanchUI.RadioStation
/// Size: 0x0030 (0x000028 - 0x000058)
class URadioStation : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FMulticastInlineDelegate)                  OnStationImageIsLoaded                                      OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	CMember(class UEpicCMSImage*)                      StationCMSImage                                             OFFSET(get<T>, {0x38, 8, 0, 0})


	/// Functions
	// Function /Script/SrirachaRanchUI.RadioStation.OnLoadingImageComplete
	// void OnLoadingImageComplete();                                                                                           // [0xb5e7280] Final|Native|Private 
};

/// Class /Script/SrirachaRanchUI.FortMobileActionButtonBehavior_ToggleRadio
/// Size: 0x0010 (0x000130 - 0x000140)
class UFortMobileActionButtonBehavior_ToggleRadio : public UFortMobileActionButtonBehavior
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
	CMember(class UPaperSprite*)                       ToggleRadioOffSprite                                        OFFSET(get<T>, {0x130, 8, 0, 0})


	/// Functions
	// Function /Script/SrirachaRanchUI.FortMobileActionButtonBehavior_ToggleRadio.HandleRadioStopped
	// void HandleRadioStopped(class UStreamingRadioPlayerComponent* Radio, FAthenaRadioStation Source);                        // [0xb5e6e14] Final|Native|Private 
	// Function /Script/SrirachaRanchUI.FortMobileActionButtonBehavior_ToggleRadio.HandleRadioPlaying
	// void HandleRadioPlaying(class UStreamingRadioPlayerComponent* Radio, FAthenaRadioStation Source);                        // [0xb5e6d24] Final|Native|Private 
};

/// Class /Script/SrirachaRanchUI.RadioMenuPicker
/// Size: 0x0048 (0x000408 - 0x000450)
class URadioMenuPicker : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1104;

public:
	SMember(FPrimaryContentSetup)                      PrimaryContentSetup                                         OFFSET(getStruct<T>, {0x410, 3, 0, 0})
	CMember(class UFortPickerOverlay*)                 PickerOverlay_RadioMenu                                     OFFSET(get<T>, {0x418, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   Text_RadioStationName                                       OFFSET(get<T>, {0x420, 8, 0, 0})
	CMember(TArray<class URadioStation*>)              RadioStations                                               OFFSET(get<T>, {0x428, 16, 0, 0})


	/// Functions
	// Function /Script/SrirachaRanchUI.RadioMenuPicker.OnLoadingStationImageComplete
	// void OnLoadingStationImageComplete(class URadioStation* RadioMenuStation);                                               // [0xb5e7294] Final|Native|Private 
};

/// Class /Script/SrirachaRanchUI.RadioPlayerWidgetBase
/// Size: 0x0088 (0x000408 - 0x000490)
class URadioPlayerWidgetBase : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1168;

public:
	SMember(FFortPrioritizedWidgetData)                PriorityData                                                OFFSET(getStruct<T>, {0x448, 2, 0, 0})
	SMember(FDataTableRowHandle)                       PressedObjectInputAction                                    OFFSET(getStruct<T>, {0x450, 16, 0, 0})
	CMember(class UClass*)                             RadioMenuPickerClass                                        OFFSET(get<T>, {0x468, 8, 0, 0})
	CMember(class UCommonActivatableWidget*)           RadioMenuPickerWidget                                       OFFSET(get<T>, {0x470, 8, 0, 0})
	CMember(class UOverlay*)                           Overlay_Keybind                                             OFFSET(get<T>, {0x478, 8, 0, 0})
	CMember(class UCommonActionWidget*)                ToggleActionWidget                                          OFFSET(get<T>, {0x480, 8, 0, 0})
	CMember(class UStreamingRadioPlayerComponent*)     LastValidComp                                               OFFSET(get<T>, {0x488, 8, 0, 0})


	/// Functions
	// Function /Script/SrirachaRanchUI.RadioPlayerWidgetBase.SetControllable
	// void SetControllable(bool bCanControl);                                                                                  // [0x228deb8] Event|Protected|BlueprintEvent 
	// Function /Script/SrirachaRanchUI.RadioPlayerWidgetBase.OnSourcePlaying
	// void OnSourcePlaying(class UStreamingRadioPlayerComponent* Radio, FAthenaRadioStation Source);                           // [0x228deb8] Event|Protected|BlueprintEvent 
	// Function /Script/SrirachaRanchUI.RadioPlayerWidgetBase.OnSourceFinished
	// void OnSourceFinished(class UStreamingRadioPlayerComponent* Radio, FAthenaRadioStation Source);                          // [0x228deb8] Event|Protected|BlueprintEvent 
	// Function /Script/SrirachaRanchUI.RadioPlayerWidgetBase.OnRadioStopped
	// void OnRadioStopped(class UStreamingRadioPlayerComponent* Radio, FAthenaRadioStation LastSource);                        // [0x228deb8] Event|Protected|BlueprintEvent 
	// Function /Script/SrirachaRanchUI.RadioPlayerWidgetBase.OnMetadataChanged
	// void OnMetadataChanged(FFortMediaInBandMetadata MediaMetadata);                                                          // [0x228deb8] Event|Protected|BlueprintEvent 
	// Function /Script/SrirachaRanchUI.RadioPlayerWidgetBase.OnLoadingNewSource
	// void OnLoadingNewSource(class UStreamingRadioPlayerComponent* Radio, FAthenaRadioStation Source);                        // [0x228deb8] Event|Protected|BlueprintEvent 
	// Function /Script/SrirachaRanchUI.RadioPlayerWidgetBase.OnFailedToOpenSource
	// void OnFailedToOpenSource(class UStreamingRadioPlayerComponent* Radio, FAthenaRadioStation Source);                      // [0x228deb8] Event|Protected|BlueprintEvent 
	// Function /Script/SrirachaRanchUI.RadioPlayerWidgetBase.OnControllerGainedNewFortPawn
	// void OnControllerGainedNewFortPawn(class AFortPawn* FortPawn);                                                           // [0xb5e71bc] Final|Native|Protected 
	// Function /Script/SrirachaRanchUI.RadioPlayerWidgetBase.NativeExitedVehicle
	// void NativeExitedVehicle();                                                                                              // [0xb5e71a8] Final|Native|Protected 
	// Function /Script/SrirachaRanchUI.RadioPlayerWidgetBase.NativeEnteredVehicle
	// void NativeEnteredVehicle();                                                                                             // [0xb5e7194] Final|Native|Protected 
	// Function /Script/SrirachaRanchUI.RadioPlayerWidgetBase.NativeChangedSeatVehicle
	// void NativeChangedSeatVehicle(int32_t SeatIndex);                                                                        // [0xb5e7114] Final|Native|Protected 
	// Function /Script/SrirachaRanchUI.RadioPlayerWidgetBase.IsMetadataEmpty
	// bool IsMetadataEmpty(FFortMediaInBandMetadata& MediaMetadata);                                                           // [0xb5e701c] Final|Native|Protected|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/SrirachaRanchUI.RadioPlayerWidgetBase.HaveToChangeSongInfo
	// bool HaveToChangeSongInfo(FFortMediaInBandMetadata& MediaMetadata);                                                      // [0xb5e6f04] Final|Native|Protected|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/SrirachaRanchUI.RadioPlayerWidgetBase.GetRadioStatusOnScreenTime
	// float GetRadioStatusOnScreenTime();                                                                                      // [0xb5e6cf4] Final|Native|Protected|BlueprintCallable|BlueprintPure 
};

