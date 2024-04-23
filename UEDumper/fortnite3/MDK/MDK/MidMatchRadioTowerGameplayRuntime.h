
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: GameplayAbilities

/// Class /Script/MidMatchRadioTowerGameplayRuntime.RadioTowerTerminal
/// Size: 0x0008 (0x000980 - 0x000988)
class ARadioTowerTerminal : public ABuildingGameplayActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2440;

public:
	DMember(float)                                     MaxInteractHalfAngle                                        OFFSET(get<float>, {0x980, 4, 0, 0})
};

/// Class /Script/MidMatchRadioTowerGameplayRuntime.RemoveFoliageBoxComponent
/// Size: 0x0000 (0x000540 - 0x000540)
class URemoveFoliageBoxComponent : public UBoxComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1344;

public:
};

/// Class /Script/MidMatchRadioTowerGameplayRuntime.BuildingGameplayActorRadioTower
/// Size: 0x0028 (0x000980 - 0x0009A8)
class ABuildingGameplayActorRadioTower : public ABuildingGameplayActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2472;

public:
	SMember(FScalableFloat)                            MarkLinkedRadioTowerTerminal                                OFFSET(getStruct<T>, {0x980, 40, 0, 0})


	/// Functions
	// Function /Script/MidMatchRadioTowerGameplayRuntime.BuildingGameplayActorRadioTower.GetLinkedRadioTowerTerminal
	// class ARadioTowerTerminal* GetLinkedRadioTowerTerminal();                                                                // [0x1340978] Event|Protected|BlueprintEvent|Const 
};

