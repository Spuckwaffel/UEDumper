
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame

/// Class /Script/AISpawner.AISpawnerPreviewerComponent
/// Size: 0x0010 (0x000270 - 0x000280)
class UAISpawnerPreviewerComponent : public UChildActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 640;

public:
	CMember(class UClass*)                             PlayerMannequinClass                                        OFFSET(get<T>, {0x270, 8, 0, 0})
	CMember(class UClass*)                             DefaultCustomAnimationBPClass                               OFFSET(get<T>, {0x278, 8, 0, 0})


	/// Functions
	// Function /Script/AISpawner.AISpawnerPreviewerComponent.SetCIDForPreview
	// void SetCIDForPreview(class UAthenaCharacterItemDefinition* InCID);                                                      // [0xc66abf4] Final|Native|Protected|BlueprintCallable 
	// Function /Script/AISpawner.AISpawnerPreviewerComponent.SetActorForPreview
	// void SetActorForPreview(class UClass* InActorClass);                                                                     // [0xc66aa64] Final|Native|Protected|BlueprintCallable 
	// Function /Script/AISpawner.AISpawnerPreviewerComponent.ClearCIDPreview
	// void ClearCIDPreview();                                                                                                  // [0xc66aa50] Final|Native|Protected|BlueprintCallable 
	// Function /Script/AISpawner.AISpawnerPreviewerComponent.ClearActorPreview
	// void ClearActorPreview();                                                                                                // [0xc66aa50] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/AISpawner.FortAthenaMutator_AISpawner
/// Size: 0x0008 (0x000488 - 0x000490)
class AFortAthenaMutator_AISpawner : public AFortAthenaMutator_GameModeBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1168;

public:
};

