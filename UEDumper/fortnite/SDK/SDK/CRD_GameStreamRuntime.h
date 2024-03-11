
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: ModularGameplay
/// dependency: PlayspaceSystem

/// Class /Script/CRD_GameStreamRuntime.CreativeGameStreamDeviceComponent
/// Size: 0x0010 (0x0000A0 - 0x0000B0)
class UCreativeGameStreamDeviceComponent : public UActorComponent
{ 
public:
	SDK_UNDEFINED(1,12584) /* FMulticastSparseDelegate */ __um(OnTriggered);                                       // 0x00A0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00A1   (0x0003)  MISSED
	SDK_UNDEFINED(8,12585) /* TWeakObjectPtr<UFortMinigameLogicComponent*> */ __um(MinigameLogicComponent);        // 0x00A4   (0x0008)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x00AC   (0x0004)  MISSED


	/// Functions
	// Function /Script/CRD_GameStreamRuntime.CreativeGameStreamDeviceComponent.RemoveFromEndGameQueue
	// void RemoveFromEndGameQueue();                                                                                        // [0x36203b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CRD_GameStreamRuntime.CreativeGameStreamDeviceComponent.OnMinigameStateChanged
	// void OnMinigameStateChanged(class AFortMinigame* Minigame, EFortMinigameState NewMinigameState);                      // [0x8684d5c] Final|Native|Private 
	// Function /Script/CRD_GameStreamRuntime.CreativeGameStreamDeviceComponent.IsWithinPublishedPlayspace
	// bool IsWithinPublishedPlayspace();                                                                                    // [0x3219f08] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRD_GameStreamRuntime.CreativeGameStreamDeviceComponent.Init
	// void Init(class UFortMinigameLogicComponent* InMinigameLogicComponent);                                               // [0x6414600] Final|Native|Public|BlueprintCallable 
	// Function /Script/CRD_GameStreamRuntime.CreativeGameStreamDeviceComponent.CreativeGameStreamDeviceComponentSignature__DelegateSignature
	// void CreativeGameStreamDeviceComponentSignature__DelegateSignature(class UCreativeGameStreamDeviceComponent* CreativeGameStreamDeviceComponent); // [0x18a39e4] MulticastDelegate|Public|Delegate 
	// Function /Script/CRD_GameStreamRuntime.CreativeGameStreamDeviceComponent.AddToEndGameQueue
	// void AddToEndGameQueue();                                                                                             // [0x36203b0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/CRD_GameStreamRuntime.CreativeGameStreamDeviceCoordinatorComponent
/// Size: 0x0018 (0x0000A0 - 0x0000B8)
class UCreativeGameStreamDeviceCoordinatorComponent : public UPlayspaceComponent
{ 
public:
	SDK_UNDEFINED(16,12586) /* TArray<TWeakObjectPtr<UCreativeGameStreamDeviceComponent*>> */ __um(EndGameCreativeGameStreamDeviceComponentQueue); // 0x00A0   (0x0010)  
	SDK_UNDEFINED(8,12587) /* TWeakObjectPtr<AFortMinigame*> */ __um(Minigame);                                    // 0x00B0   (0x0008)  


	/// Functions
	// Function /Script/CRD_GameStreamRuntime.CreativeGameStreamDeviceCoordinatorComponent.OnMinigameStateChanged
	// void OnMinigameStateChanged(class AFortMinigame* InMinigame, EFortMinigameState NewMinigameState);                    // [0x8684d5c] Final|Native|Private 
};

