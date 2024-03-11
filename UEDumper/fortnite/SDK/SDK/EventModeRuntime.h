
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
/// dependency: ModularGameplay

/// Enum /Script/EventModeRuntime.EFortEventModeEmoteToPlay
/// Size: 0x06
enum class EFortEventModeEmoteToPlay : uint8_t
{
	EFortEventModeEmoteToPlay__Emote1                                                = 0,
	EFortEventModeEmoteToPlay__Emote2                                                = 1,
	EFortEventModeEmoteToPlay__Emote3                                                = 2,
	EFortEventModeEmoteToPlay__RandomEmote                                           = 3,
	EFortEventModeEmoteToPlay__QuickEmotes                                           = 4,
	EFortEventModeEmoteToPlay__EFortEventModeEmoteToPlay_MAX                         = 5
};

/// Struct /Script/EventModeRuntime.EventModeFocusActor
/// Size: 0x0048 (0x000000 - 0x000048)
struct FEventModeFocusActor
{ 
	SDK_UNDEFINED(32,12422) /* TWeakObjectPtr<AActor*> */ __um(Target);                                            // 0x0000   (0x0020)  
	float                                              Distance;                                                   // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0024   (0x0004)  MISSED
	FVector                                            Offset;                                                     // 0x0028   (0x0018)  
	float                                              FOV;                                                        // 0x0040   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0044   (0x0004)  MISSED
};

/// Struct /Script/EventModeRuntime.EventModeWidgetCachedData
/// Size: 0x000C (0x000000 - 0x00000C)
struct FEventModeWidgetCachedData
{ 
	EUIExtensionSlot                                   Slot;                                                       // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	SDK_UNDEFINED(8,12423) /* TWeakObjectPtr<UUserWidget*> */ __um(Widget);                                        // 0x0004   (0x0008)  
};

/// Class /Script/EventModeRuntime.FortGameFrameworkComponent_EventMode
/// Size: 0x0170 (0x0000A0 - 0x000210)
class UFortGameFrameworkComponent_EventMode : public UGameFrameworkComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x60];                                      // 0x00A0   (0x0060)  MISSED
	SDK_UNDEFINED(32,12424) /* TWeakObjectPtr<UFortWeaponItemDefinition*> */ __um(ActivatorAsset);                 // 0x0100   (0x0020)  
	TArray<FUIExtension>                               UIExtensions;                                               // 0x0120   (0x0010)  
	SDK_UNDEFINED(80,12425) /* TMap<FGameplayTag, TWeakObjectPtr<UClass*>> */ __um(TaggedUIExtensions);            // 0x0130   (0x0050)  
	TArray<FEventModeFocusActor>                       FocusActors;                                                // 0x0180   (0x0010)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0190   (0x0008)  MISSED
	class UInputComponent*                             InputComponent;                                             // 0x0198   (0x0008)  
	TArray<FEventModeWidgetCachedData>                 CachedWidgetData;                                           // 0x01A0   (0x0010)  
	SDK_UNDEFINED(32,12426) /* TWeakObjectPtr<AActor*> */ __um(CurrentlyFocusedActor);                             // 0x01B0   (0x0020)  
	unsigned char                                      UnknownData02_6[0x40];                                      // 0x01D0   (0x0040)  MISSED


	/// Functions
	// Function /Script/EventModeRuntime.FortGameFrameworkComponent_EventMode.OnPlayerPawnPossessed
	// void OnPlayerPawnPossessed(class APawn* PossessedPawn);                                                               // [0x6414600] Final|Native|Private 
	// Function /Script/EventModeRuntime.FortGameFrameworkComponent_EventMode.OnExitVehicle
	// void OnExitVehicle();                                                                                                 // [0xa90ca38] Final|Native|Private 
	// Function /Script/EventModeRuntime.FortGameFrameworkComponent_EventMode.OnEnterVehicle
	// void OnEnterVehicle();                                                                                                // [0xa90ca24] Final|Native|Private 
	// Function /Script/EventModeRuntime.FortGameFrameworkComponent_EventMode.GetIsFocusing
	// bool GetIsFocusing();                                                                                                 // [0x3a0c464] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EventModeRuntime.FortGameFrameworkComponent_EventMode.GetIsFocusAvailable
	// bool GetIsFocusAvailable();                                                                                           // [0x3803870] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EventModeRuntime.FortGameFrameworkComponent_EventMode.GetIsEventModeActive
	// bool GetIsEventModeActive();                                                                                          // [0x36dd778] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/EventModeRuntime.FortWeapon_EventMode
/// Size: 0x0000 (0x001550 - 0x001550)
class AFortWeapon_EventMode : public AFortWeapon
{ 
public:
};

