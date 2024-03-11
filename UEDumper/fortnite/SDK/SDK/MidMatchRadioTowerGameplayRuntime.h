
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: GameplayAbilities

/// Class /Script/MidMatchRadioTowerGameplayRuntime.RadioTowerTerminal
/// Size: 0x0008 (0x000980 - 0x000988)
class ARadioTowerTerminal : public ABuildingGameplayActor
{ 
public:
	float                                              MaxInteractHalfAngle;                                       // 0x0980   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0984   (0x0004)  MISSED
};

/// Class /Script/MidMatchRadioTowerGameplayRuntime.RemoveFoliageBoxComponent
/// Size: 0x0000 (0x000540 - 0x000540)
class URemoveFoliageBoxComponent : public UBoxComponent
{ 
public:
};

/// Class /Script/MidMatchRadioTowerGameplayRuntime.BuildingGameplayActorRadioTower
/// Size: 0x0028 (0x000980 - 0x0009A8)
class ABuildingGameplayActorRadioTower : public ABuildingGameplayActor
{ 
public:
	FScalableFloat                                     MarkLinkedRadioTowerTerminal;                               // 0x0980   (0x0028)  


	/// Functions
	// Function /Script/MidMatchRadioTowerGameplayRuntime.BuildingGameplayActorRadioTower.GetLinkedRadioTowerTerminal
	// class ARadioTowerTerminal* GetLinkedRadioTowerTerminal();                                                             // [0x18a39e4] Event|Protected|BlueprintEvent|Const 
};

