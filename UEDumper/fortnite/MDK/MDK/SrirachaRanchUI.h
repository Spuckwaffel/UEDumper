
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CommonUI
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteUI
/// dependency: Paper2D
/// dependency: SlateCore
/// dependency: SrirachaRanch
/// dependency: UMG

/// Class /Script/SrirachaRanchUI.RadioMenuDataAsset
/// Size: 0x0010 (0x000030 - 0x000040)
class URadioMenuDataAsset : public UPrimaryDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(TArray<FRadioMenuActionData>)              Actions                                                     OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Class /Script/SrirachaRanchUI.FortMobileActionButtonBehavior_ToggleRadio
/// Size: 0x0010 (0x000138 - 0x000148)
class UFortMobileActionButtonBehavior_ToggleRadio : public UFortMobileActionButtonBehavior
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 328;

public:
	CMember(class UPaperSprite*)                       ToggleRadioOffSprite                                        OFFSET(get<T>, {0x138, 8, 0, 0})


	/// Functions
	// Function /Script/SrirachaRanchUI.FortMobileActionButtonBehavior_ToggleRadio.HandleRadioStopped
	// void HandleRadioStopped(class UStreamingRadioPlayerComponent* Radio, FAthenaRadioStation Source);                        // [0xa300dd8] Final|Native|Private 
	// Function /Script/SrirachaRanchUI.FortMobileActionButtonBehavior_ToggleRadio.HandleRadioPlaying
	// void HandleRadioPlaying(class UStreamingRadioPlayerComponent* Radio, FAthenaRadioStation Source);                        // [0xa300c40] Final|Native|Private 
};

/// Class /Script/SrirachaRanchUI.RadioMenuPicker
/// Size: 0x0078 (0x000400 - 0x000478)
class URadioMenuPicker : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1144;

public:
	SMember(FPrimaryContentSetup)                      PrimaryContentSetup                                         OFFSET(getStruct<T>, {0x408, 3, 0, 0})
	CMember(class UCommonTextBlock*)                   Text_RadioActionName                                        OFFSET(get<T>, {0x410, 8, 0, 0})
	CMember(class UFortPickerOverlay*)                 PickerOverlay_RadioMenu                                     OFFSET(get<T>, {0x418, 8, 0, 0})
	CMember(class URadioMenuDataAsset*)                RadioActionsData                                            OFFSET(get<T>, {0x420, 8, 0, 0})
};

/// Class /Script/SrirachaRanchUI.RadioPlayerWidgetBase
/// Size: 0x0088 (0x000400 - 0x000488)
class URadioPlayerWidgetBase : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1160;

public:
	SMember(FFortPrioritizedWidgetData)                PriorityData                                                OFFSET(getStruct<T>, {0x440, 2, 0, 0})
	SMember(FDataTableRowHandle)                       PressedObjectInputAction                                    OFFSET(getStruct<T>, {0x448, 16, 0, 0})
	CMember(class UClass*)                             RadioMenuPickerClass                                        OFFSET(get<T>, {0x460, 8, 0, 0})
	CMember(class UCommonActivatableWidget*)           RadioMenuPickerWidget                                       OFFSET(get<T>, {0x468, 8, 0, 0})
	CMember(class UOverlay*)                           Overlay_Keybind                                             OFFSET(get<T>, {0x470, 8, 0, 0})
	CMember(class UCommonActionWidget*)                ToggleActionWidget                                          OFFSET(get<T>, {0x478, 8, 0, 0})
	CMember(class UStreamingRadioPlayerComponent*)     LastValidComp                                               OFFSET(get<T>, {0x480, 8, 0, 0})


	/// Functions
	// Function /Script/SrirachaRanchUI.RadioPlayerWidgetBase.SetControllable
	// void SetControllable(bool bCanControl);                                                                                  // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/SrirachaRanchUI.RadioPlayerWidgetBase.OnSourcePlaying
	// void OnSourcePlaying(class UStreamingRadioPlayerComponent* Radio, FAthenaRadioStation Source);                           // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/SrirachaRanchUI.RadioPlayerWidgetBase.OnSourceFinished
	// void OnSourceFinished(class UStreamingRadioPlayerComponent* Radio, FAthenaRadioStation Source);                          // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/SrirachaRanchUI.RadioPlayerWidgetBase.OnRadioStopped
	// void OnRadioStopped(class UStreamingRadioPlayerComponent* Radio, FAthenaRadioStation LastSource);                        // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/SrirachaRanchUI.RadioPlayerWidgetBase.OnMetadataChanged
	// void OnMetadataChanged(FFortMediaInBandMetadata MediaMetadata);                                                          // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/SrirachaRanchUI.RadioPlayerWidgetBase.OnLoadingNewSource
	// void OnLoadingNewSource(class UStreamingRadioPlayerComponent* Radio, FAthenaRadioStation Source);                        // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/SrirachaRanchUI.RadioPlayerWidgetBase.OnFailedToOpenSource
	// void OnFailedToOpenSource(class UStreamingRadioPlayerComponent* Radio, FAthenaRadioStation Source);                      // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/SrirachaRanchUI.RadioPlayerWidgetBase.OnControllerGainedNewFortPawn
	// void OnControllerGainedNewFortPawn(class AFortPawn* FortPawn);                                                           // [0xa301228] Final|Native|Protected 
	// Function /Script/SrirachaRanchUI.RadioPlayerWidgetBase.NativeExitedVehicle
	// void NativeExitedVehicle();                                                                                              // [0xa301214] Final|Native|Protected 
	// Function /Script/SrirachaRanchUI.RadioPlayerWidgetBase.NativeEnteredVehicle
	// void NativeEnteredVehicle();                                                                                             // [0xa301200] Final|Native|Protected 
	// Function /Script/SrirachaRanchUI.RadioPlayerWidgetBase.NativeChangedSeatVehicle
	// void NativeChangedSeatVehicle(int32_t SeatIndex);                                                                        // [0xa301180] Final|Native|Protected 
	// Function /Script/SrirachaRanchUI.RadioPlayerWidgetBase.IsMetadataEmpty
	// bool IsMetadataEmpty(FFortMediaInBandMetadata& MediaMetadata);                                                           // [0xa301088] Final|Native|Protected|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/SrirachaRanchUI.RadioPlayerWidgetBase.HaveToChangeSongInfo
	// bool HaveToChangeSongInfo(FFortMediaInBandMetadata& MediaMetadata);                                                      // [0xa300f70] Final|Native|Protected|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/SrirachaRanchUI.RadioPlayerWidgetBase.GetRadioStatusOnScreenTime
	// float GetRadioStatusOnScreenTime();                                                                                      // [0xa300c10] Final|Native|Protected|BlueprintCallable|BlueprintPure 
};

/// Struct /Script/SrirachaRanchUI.RadioMenuActionData
/// Size: 0x00F0 (0x000000 - 0x0000F0)
class FRadioMenuActionData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	CMember(ERadioMenuAction)                          ActionType                                                  OFFSET(get<T>, {0x0, 1, 0, 0})
	SMember(FSlateBrush)                               ActionBrush                                                 OFFSET(getStruct<T>, {0x10, 192, 0, 0})
	SMember(FText)                                     ActionText                                                  OFFSET(getStruct<T>, {0xD0, 24, 0, 0})
};

/// Enum /Script/SrirachaRanchUI.ERadioMenuAction
/// Size: 0x05
enum class ERadioMenuAction : uint8_t
{
	ERadioMenuAction__ToggleOnOff                                                    = 0,
	ERadioMenuAction__NextStation                                                    = 1,
	ERadioMenuAction__PreviousStation                                                = 2,
	ERadioMenuAction__Count                                                          = 3,
	ERadioMenuAction__ERadioMenuAction_MAX                                           = 4
};

