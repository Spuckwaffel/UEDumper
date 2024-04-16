
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: JunoUI
/// dependency: ModelViewViewModel
/// dependency: ModularGameplay

/// Class /Script/JunoControlUnitUI.JunoPowerManagerComponentVM
/// Size: 0x0040 (0x000068 - 0x0000A8)
class UJunoPowerManagerComponentVM : public UMVVMViewModelBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	CMember(class UFortWorldItem*)                     CurrentPowerItem                                            OFFSET(get<T>, {0x68, 8, 0, 0})
	DMember(float)                                     CurrentPowerCapacity                                        OFFSET(get<float>, {0x70, 4, 0, 0})
	DMember(float)                                     MaxPowerCapacity                                            OFFSET(get<float>, {0x74, 4, 0, 0})
	DMember(float)                                     CurrentPowerCapacityPercent                                 OFFSET(get<float>, {0x78, 4, 0, 0})
	DMember(float)                                     CurrentPowerItemDurability                                  OFFSET(get<float>, {0x7C, 4, 0, 0})
	DMember(float)                                     MaxPowerItemDurability                                      OFFSET(get<float>, {0x80, 4, 0, 0})
	DMember(int32_t)                                   RemainingPowerItemsCount                                    OFFSET(get<int32_t>, {0x84, 4, 0, 0})
	DMember(int32_t)                                   MaxPowerItemsCount                                          OFFSET(get<int32_t>, {0x88, 4, 0, 0})
	DMember(int32_t)                                   AttachedPowerCentersCount                                   OFFSET(get<int32_t>, {0x8C, 4, 0, 0})
	DMember(float)                                     RefreshTime                                                 OFFSET(get<float>, {0x90, 4, 0, 0})
	DMember(bool)                                      PowerSystemEnabled                                          OFFSET(get<bool>, {0x94, 1, 0, 0})


	/// Functions
	// Function /Script/JunoControlUnitUI.JunoPowerManagerComponentVM.UpdateFromPowerManagerComponent
	// void UpdateFromPowerManagerComponent(class UJunoPowerManagerComponent* InPowerManagerComponent);                         // [0xc8a385c] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoControlUnitUI.JunoPowerManagerComponentVM.UpdateFromJunoPhysicsToyActor
	// void UpdateFromJunoPhysicsToyActor(class AJunoPhysicsToyActor* InJunoPhysicsToyActor);                                   // [0xc8a3770] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/JunoControlUnitUI.JunoDynamicUIDirectorVCUComponent
/// Size: 0x0000 (0x0000B0 - 0x0000B0)
class UJunoDynamicUIDirectorVCUComponent : public UJunoDynamicUIDirectorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
};

