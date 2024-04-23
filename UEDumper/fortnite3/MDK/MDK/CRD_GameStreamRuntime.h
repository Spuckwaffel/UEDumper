
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: ModularGameplay
/// dependency: PlayspaceSystem

/// Class /Script/CRD_GameStreamRuntime.CreativeGameStreamDeviceComponent
/// Size: 0x0010 (0x0000A0 - 0x0000B0)
class UCreativeGameStreamDeviceComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	SMember(FMulticastSparseDelegate)                  OnTriggered                                                 OFFSET(getStruct<T>, {0xA0, 1, 0, 0})
	CMember(TWeakObjectPtr<UFortMinigameLogicComponent*>) MinigameLogicComponent                                   OFFSET(get<T>, {0xA4, 8, 0, 0})


	/// Functions
	// Function /Script/CRD_GameStreamRuntime.CreativeGameStreamDeviceComponent.RemoveFromEndGameQueue
	// void RemoveFromEndGameQueue();                                                                                           // [0x35e6228] Final|Native|Public|BlueprintCallable 
	// Function /Script/CRD_GameStreamRuntime.CreativeGameStreamDeviceComponent.OnMinigameStateChanged
	// void OnMinigameStateChanged(class AFortMinigame* Minigame, EFortMinigameState NewMinigameState);                         // [0x8f3d3cc] Final|Native|Private 
	// Function /Script/CRD_GameStreamRuntime.CreativeGameStreamDeviceComponent.IsWithinPublishedPlayspace
	// bool IsWithinPublishedPlayspace();                                                                                       // [0x3128b98] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRD_GameStreamRuntime.CreativeGameStreamDeviceComponent.Init
	// void Init(class UFortMinigameLogicComponent* InMinigameLogicComponent);                                                  // [0x64c3a10] Final|Native|Public|BlueprintCallable 
	// Function /Script/CRD_GameStreamRuntime.CreativeGameStreamDeviceComponent.CreativeGameStreamDeviceComponentSignature__DelegateSignature
	// void CreativeGameStreamDeviceComponentSignature__DelegateSignature(class UCreativeGameStreamDeviceComponent* CreativeGameStreamDeviceComponent); // [0x1340978] MulticastDelegate|Public|Delegate 
	// Function /Script/CRD_GameStreamRuntime.CreativeGameStreamDeviceComponent.AddToEndGameQueue
	// void AddToEndGameQueue();                                                                                                // [0x35e6228] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/CRD_GameStreamRuntime.CreativeGameStreamDeviceCoordinatorComponent
/// Size: 0x0018 (0x0000A0 - 0x0000B8)
class UCreativeGameStreamDeviceCoordinatorComponent : public UPlayspaceComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	CMember(TArray<TWeakObjectPtr<UCreativeGameStreamDeviceComponent*>>) EndGameCreativeGameStreamDeviceComponentQueue OFFSET(get<T>, {0xA0, 16, 0, 0})
	CMember(TWeakObjectPtr<AFortMinigame*>)            Minigame                                                    OFFSET(get<T>, {0xB0, 8, 0, 0})


	/// Functions
	// Function /Script/CRD_GameStreamRuntime.CreativeGameStreamDeviceCoordinatorComponent.OnMinigameStateChanged
	// void OnMinigameStateChanged(class AFortMinigame* InMinigame, EFortMinigameState NewMinigameState);                       // [0x8f3d3cc] Final|Native|Private 
};

