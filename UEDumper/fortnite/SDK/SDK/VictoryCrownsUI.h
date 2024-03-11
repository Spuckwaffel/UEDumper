
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CommonUI
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: FortniteUI
/// dependency: ModularGameplay
/// dependency: UMG

/// Class /Script/VictoryCrownsUI.FortUIManagerComponent_VictoryCrowns
/// Size: 0x00B0 (0x0000A8 - 0x000158)
class UFortUIManagerComponent_VictoryCrowns : public UFortControllerComponent
{ 
public:
	class UClass*                                      VictoryCrownsIndicatorClass;                                // 0x00A8   (0x0008)  
	FUserWidgetPool                                    IndicatorPool;                                              // 0x00B0   (0x0088)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x0138   (0x0020)  MISSED


	/// Functions
	// Function /Script/VictoryCrownsUI.FortUIManagerComponent_VictoryCrowns.RebuildBearerIndicators
	// void RebuildBearerIndicators(TArray<AFortPlayerStateAthena*>& CrownBearerList);                                       // [0xab1dab4] Final|Native|Protected|HasOutParms 
};

/// Class /Script/VictoryCrownsUI.VictoryCrownsBearerInfoBase
/// Size: 0x0010 (0x0002E8 - 0x0002F8)
class UVictoryCrownsBearerInfoBase : public UCommonUserWidget
{ 
public:
	SDK_UNDEFINED(8,15736) /* TWeakObjectPtr<AFortPlayerStateAthena*> */ __um(WeakPSA);                            // 0x02E8   (0x0008)  
	class UCommonTextBlock*                            Text_PlayerName;                                            // 0x02F0   (0x0008)  


	/// Functions
	// Function /Script/VictoryCrownsUI.VictoryCrownsBearerInfoBase.SetPlayerState
	// void SetPlayerState(class AFortPlayerStateAthena* InPlayerState);                                                     // [0xab1dc00] Final|Native|Public|BlueprintCallable 
	// Function /Script/VictoryCrownsUI.VictoryCrownsBearerInfoBase.OnSetPlayerState
	// void OnSetPlayerState(class AFortPlayerStateAthena* PSA);                                                             // [0x18a39e4] Event|Protected|BlueprintEvent 
};

/// Class /Script/VictoryCrownsUI.VictoryCrownsIndicator
/// Size: 0x0028 (0x0003D0 - 0x0003F8)
class UVictoryCrownsIndicator : public UFortActorIndicatorWidget
{ 
public:
	unsigned char                                      UnknownData00_1[0x28];                                      // 0x03D0   (0x0028)  MISSED


	/// Functions
	// Function /Script/VictoryCrownsUI.VictoryCrownsIndicator.OnScreenClampChanged
	// void OnScreenClampChanged(bool bIsClamped);                                                                           // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/VictoryCrownsUI.VictoryCrownsIndicator.OnDistanceChanged
	// void OnDistanceChanged(int32_t Distance);                                                                             // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/VictoryCrownsUI.VictoryCrownsIndicator.GetIndicatedPlayerStateAthena
	// class AFortPlayerStateAthena* GetIndicatedPlayerStateAthena();                                                        // [0xab1d9d8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/VictoryCrownsUI.VictoryCrownsPlacementOverlay
/// Size: 0x0000 (0x000348 - 0x000348)
class UVictoryCrownsPlacementOverlay : public UPostGamePlacementOverlay
{ 
public:
};

/// Class /Script/VictoryCrownsUI.VictoryCrownsPlayerInfoWidget
/// Size: 0x0010 (0x000328 - 0x000338)
class UVictoryCrownsPlayerInfoWidget : public UFortHUDElementWidget
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0328   (0x0010)  MISSED


	/// Functions
	// Function /Script/VictoryCrownsUI.VictoryCrownsPlayerInfoWidget.OnPlayerVictoryCrownStatusChanged
	// void OnPlayerVictoryCrownStatusChanged(bool bHasCrown);                                                               // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/VictoryCrownsUI.VictoryCrownsPlayerInfoWidget.HandleCrownBearerListChanged
	// void HandleCrownBearerListChanged(TArray<AFortPlayerStateAthena*>& CrownBearerList);                                  // [0xab1d9fc] Final|Native|Protected|HasOutParms 
};

/// Class /Script/VictoryCrownsUI.VictoryCrownsPreGameWidget
/// Size: 0x0050 (0x000400 - 0x000450)
class UVictoryCrownsPreGameWidget : public UCommonActivatableWidget
{ 
public:
	class UDynamicEntryBox*                            EntryBox_BearerList;                                        // 0x0400   (0x0008)  
	class UCommonActionWidget*                         TipActionWidget;                                            // 0x0408   (0x0008)  
	FDataTableRowHandle                                CloseObjectInputAction;                                     // 0x0410   (0x0010)  
	unsigned char                                      UnknownData00_6[0x30];                                      // 0x0420   (0x0030)  MISSED


	/// Functions
	// Function /Script/VictoryCrownsUI.VictoryCrownsPreGameWidget.UnregisterCloseButtonInput
	// void UnregisterCloseButtonInput();                                                                                    // [0xab1dc80] Final|Native|Private 
	// Function /Script/VictoryCrownsUI.VictoryCrownsPreGameWidget.StartFadeOut
	// void StartFadeOut();                                                                                                  // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/VictoryCrownsUI.VictoryCrownsPreGameWidget.RegisterCloseButtonInput
	// void RegisterCloseButtonInput();                                                                                      // [0xab1dbec] Final|Native|Private 
	// Function /Script/VictoryCrownsUI.VictoryCrownsPreGameWidget.RebuildBearerList
	// void RebuildBearerList(TArray<AFortPlayerStateAthena*>& CrownBearerList);                                             // [0xab1db50] Final|Native|Private|HasOutParms 
	// Function /Script/VictoryCrownsUI.VictoryCrownsPreGameWidget.OnInputMethodChanged
	// void OnInputMethodChanged(ECommonInputType CurrentInput);                                                             // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/VictoryCrownsUI.VictoryCrownsPreGameWidget.OnCloseActionsComplete
	// void OnCloseActionsComplete();                                                                                        // [0xab1da98] Final|Native|Protected|BlueprintCallable 
	// Function /Script/VictoryCrownsUI.VictoryCrownsPreGameWidget.OnButtonCloseProgress
	// void OnButtonCloseProgress(float Progress);                                                                           // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/VictoryCrownsUI.VictoryCrownsPreGameWidget.OnButtonClose
	// void OnButtonClose();                                                                                                 // [0x18a39e4] Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /Script/VictoryCrownsUI.VictoryCrownsPreGameWidget.FadeOutTimerFinished
	// void FadeOutTimerFinished();                                                                                          // [0xab1d9c4] Final|Native|Private 
};

