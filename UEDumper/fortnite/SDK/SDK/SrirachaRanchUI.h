
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
/// dependency: FortniteUI
/// dependency: Paper2D
/// dependency: SlateCore
/// dependency: SrirachaRanch
/// dependency: UMG

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

/// Struct /Script/SrirachaRanchUI.RadioMenuActionData
/// Size: 0x00F0 (0x000000 - 0x0000F0)
struct FRadioMenuActionData
{ 
	ERadioMenuAction                                   ActionType;                                                 // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0xF];                                       // 0x0001   (0x000F)  MISSED
	FSlateBrush                                        ActionBrush;                                                // 0x0010   (0x00C0)  
	SDK_UNDEFINED(24,15637) /* FText */                __um(ActionText);                                           // 0x00D0   (0x0018)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x00E8   (0x0008)  MISSED
};

/// Class /Script/SrirachaRanchUI.RadioMenuDataAsset
/// Size: 0x0010 (0x000030 - 0x000040)
class URadioMenuDataAsset : public UPrimaryDataAsset
{ 
public:
	TArray<FRadioMenuActionData>                       Actions;                                                    // 0x0030   (0x0010)  
};

/// Class /Script/SrirachaRanchUI.FortMobileActionButtonBehavior_ToggleRadio
/// Size: 0x0010 (0x000138 - 0x000148)
class UFortMobileActionButtonBehavior_ToggleRadio : public UFortMobileActionButtonBehavior
{ 
public:
	class UPaperSprite*                                ToggleRadioOffSprite;                                       // 0x0138   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0140   (0x0008)  MISSED


	/// Functions
	// Function /Script/SrirachaRanchUI.FortMobileActionButtonBehavior_ToggleRadio.HandleRadioStopped
	// void HandleRadioStopped(class UStreamingRadioPlayerComponent* Radio, FAthenaRadioStation Source);                     // [0xa300dd8] Final|Native|Private 
	// Function /Script/SrirachaRanchUI.FortMobileActionButtonBehavior_ToggleRadio.HandleRadioPlaying
	// void HandleRadioPlaying(class UStreamingRadioPlayerComponent* Radio, FAthenaRadioStation Source);                     // [0xa300c40] Final|Native|Private 
};

/// Class /Script/SrirachaRanchUI.RadioMenuPicker
/// Size: 0x0078 (0x000400 - 0x000478)
class URadioMenuPicker : public UCommonActivatableWidget
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0400   (0x0008)  MISSED
	FPrimaryContentSetup                               PrimaryContentSetup;                                        // 0x0408   (0x0003)  
	unsigned char                                      UnknownData01_5[0x5];                                       // 0x040B   (0x0005)  MISSED
	class UCommonTextBlock*                            Text_RadioActionName;                                       // 0x0410   (0x0008)  
	class UFortPickerOverlay*                          PickerOverlay_RadioMenu;                                    // 0x0418   (0x0008)  
	class URadioMenuDataAsset*                         RadioActionsData;                                           // 0x0420   (0x0008)  
	unsigned char                                      UnknownData02_6[0x50];                                      // 0x0428   (0x0050)  MISSED
};

/// Class /Script/SrirachaRanchUI.RadioPlayerWidgetBase
/// Size: 0x0088 (0x000400 - 0x000488)
class URadioPlayerWidgetBase : public UCommonActivatableWidget
{ 
public:
	unsigned char                                      UnknownData00_3[0x40];                                      // 0x0400   (0x0040)  MISSED
	FFortPrioritizedWidgetData                         PriorityData;                                               // 0x0440   (0x0002)  
	unsigned char                                      UnknownData01_5[0x6];                                       // 0x0442   (0x0006)  MISSED
	FDataTableRowHandle                                PressedObjectInputAction;                                   // 0x0448   (0x0010)  
	unsigned char                                      UnknownData02_5[0x8];                                       // 0x0458   (0x0008)  MISSED
	class UClass*                                      RadioMenuPickerClass;                                       // 0x0460   (0x0008)  
	class UCommonActivatableWidget*                    RadioMenuPickerWidget;                                      // 0x0468   (0x0008)  
	class UOverlay*                                    Overlay_Keybind;                                            // 0x0470   (0x0008)  
	class UCommonActionWidget*                         ToggleActionWidget;                                         // 0x0478   (0x0008)  
	class UStreamingRadioPlayerComponent*              LastValidComp;                                              // 0x0480   (0x0008)  


	/// Functions
	// Function /Script/SrirachaRanchUI.RadioPlayerWidgetBase.SetControllable
	// void SetControllable(bool bCanControl);                                                                               // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/SrirachaRanchUI.RadioPlayerWidgetBase.OnSourcePlaying
	// void OnSourcePlaying(class UStreamingRadioPlayerComponent* Radio, FAthenaRadioStation Source);                        // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/SrirachaRanchUI.RadioPlayerWidgetBase.OnSourceFinished
	// void OnSourceFinished(class UStreamingRadioPlayerComponent* Radio, FAthenaRadioStation Source);                       // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/SrirachaRanchUI.RadioPlayerWidgetBase.OnRadioStopped
	// void OnRadioStopped(class UStreamingRadioPlayerComponent* Radio, FAthenaRadioStation LastSource);                     // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/SrirachaRanchUI.RadioPlayerWidgetBase.OnMetadataChanged
	// void OnMetadataChanged(FFortMediaInBandMetadata MediaMetadata);                                                       // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/SrirachaRanchUI.RadioPlayerWidgetBase.OnLoadingNewSource
	// void OnLoadingNewSource(class UStreamingRadioPlayerComponent* Radio, FAthenaRadioStation Source);                     // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/SrirachaRanchUI.RadioPlayerWidgetBase.OnFailedToOpenSource
	// void OnFailedToOpenSource(class UStreamingRadioPlayerComponent* Radio, FAthenaRadioStation Source);                   // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/SrirachaRanchUI.RadioPlayerWidgetBase.OnControllerGainedNewFortPawn
	// void OnControllerGainedNewFortPawn(class AFortPawn* FortPawn);                                                        // [0xa301228] Final|Native|Protected 
	// Function /Script/SrirachaRanchUI.RadioPlayerWidgetBase.NativeExitedVehicle
	// void NativeExitedVehicle();                                                                                           // [0xa301214] Final|Native|Protected 
	// Function /Script/SrirachaRanchUI.RadioPlayerWidgetBase.NativeEnteredVehicle
	// void NativeEnteredVehicle();                                                                                          // [0xa301200] Final|Native|Protected 
	// Function /Script/SrirachaRanchUI.RadioPlayerWidgetBase.NativeChangedSeatVehicle
	// void NativeChangedSeatVehicle(int32_t SeatIndex);                                                                     // [0xa301180] Final|Native|Protected 
	// Function /Script/SrirachaRanchUI.RadioPlayerWidgetBase.IsMetadataEmpty
	// bool IsMetadataEmpty(FFortMediaInBandMetadata& MediaMetadata);                                                        // [0xa301088] Final|Native|Protected|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/SrirachaRanchUI.RadioPlayerWidgetBase.HaveToChangeSongInfo
	// bool HaveToChangeSongInfo(FFortMediaInBandMetadata& MediaMetadata);                                                   // [0xa300f70] Final|Native|Protected|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/SrirachaRanchUI.RadioPlayerWidgetBase.GetRadioStatusOnScreenTime
	// float GetRadioStatusOnScreenTime();                                                                                   // [0xa300c10] Final|Native|Protected|BlueprintCallable|BlueprintPure 
};

