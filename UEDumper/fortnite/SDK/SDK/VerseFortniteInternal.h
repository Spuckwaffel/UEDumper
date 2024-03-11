
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: EntityActor
/// dependency: EntityCore
/// dependency: FortniteGame
/// dependency: ModularGameplay

/// Enum /Script/VerseFortniteInternal.EPlayerSettingStateInternal
/// Size: 0x04
enum class EPlayerSettingStateInternal : uint8_t
{
	EPlayerSettingStateInternal__PlayerUseDefault                                    = 0,
	EPlayerSettingStateInternal__PlayerIsAllowed                                     = 1,
	EPlayerSettingStateInternal__PlayerIsDisallowed                                  = 2,
	EPlayerSettingStateInternal__EPlayerSettingStateInternal_MAX                     = 3
};

/// Class /Script/VerseFortniteInternal.BuildingActorEntityInteropComponent
/// Size: 0x0008 (0x000058 - 0x000060)
class UBuildingActorEntityInteropComponent : public UEntityComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0058   (0x0008)  MISSED
};

/// Class /Script/VerseFortniteInternal.VerseFortniteMovementComponentBase
/// Size: 0x0000 (0x000088 - 0x000088)
class UVerseFortniteMovementComponentBase : public UEntityActorComponent
{ 
public:
};

/// Class /Script/VerseFortniteInternal.FortControllerStateHandlerComponent
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UFortControllerStateHandlerComponent : public UControllerComponent
{ 
public:


	/// Functions
	// Function /Script/VerseFortniteInternal.FortControllerStateHandlerComponent.NotifyOfStateChange
	// void NotifyOfStateChange(FString& State, bool Active);                                                                // [0xa159418] Final|Native|Public|HasOutParms 
};

/// Class /Script/VerseFortniteInternal.FortAthenaMutator_BuildingSettings
/// Size: 0x0018 (0x000338 - 0x000350)
class AFortAthenaMutator_BuildingSettings : public AFortAthenaMutator
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0338   (0x0018)  MISSED
};

/// Class /Script/VerseFortniteInternal.FortBuildingSettingsComponentBase
/// Size: 0x0010 (0x000078 - 0x000088)
class UFortBuildingSettingsComponentBase : public UEntityEnableableComponent
{ 
public:
	class AFortAthenaMutator_BuildingSettings*         Mutator;                                                    // 0x0078   (0x0008)  
	SDK_UNDEFINED(1,9338) /* TEnumAsByte<EPlayerSettingStateInternal> */ __um(Building);                           // 0x0080   (0x0001)  
	SDK_UNDEFINED(1,9339) /* TEnumAsByte<EPlayerSettingStateInternal> */ __um(BuildingOnWater);                    // 0x0081   (0x0001)  
	SDK_UNDEFINED(1,9340) /* TEnumAsByte<EPlayerSettingStateInternal> */ __um(Editing);                            // 0x0082   (0x0001)  
	SDK_UNDEFINED(1,9341) /* TEnumAsByte<EPlayerSettingStateInternal> */ __um(EditingHostile);                     // 0x0083   (0x0001)  
	SDK_UNDEFINED(1,9342) /* TEnumAsByte<EPlayerSettingStateInternal> */ __um(TrapPlacement);                      // 0x0084   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0085   (0x0003)  MISSED


	/// Functions
	// Function /Script/VerseFortniteInternal.FortBuildingSettingsComponentBase.OnRep_Settings
	// void OnRep_Settings();                                                                                                // [0xa15961c] Final|Native|Private 
};

/// Class /Script/VerseFortniteInternal.FortPlayspaceComponentHelper
/// Size: 0x0008 (0x000028 - 0x000030)
class UFortPlayspaceComponentHelper : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x0000   (0x0030)  MISSED


	/// Functions
	// Function /Script/VerseFortniteInternal.FortPlayspaceComponentHelper.HandlePlayerPawnPossessed
	// void HandlePlayerPawnPossessed(class APawn* Pawn);                                                                    // [0xa159398] Final|Native|Public  
	// Function /Script/VerseFortniteInternal.FortPlayspaceComponentHelper.HandlePlayerDied
	// void HandlePlayerDied(class AFortPlayerPawnAthena* FortPlayerPawnAthena);                                             // [0xa159318] Final|Native|Public  
};

/// Class /Script/VerseFortniteInternal.VerseFortniteEntitySubsystem
/// Size: 0x0010 (0x000030 - 0x000040)
class UVerseFortniteEntitySubsystem : public UWorldSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0030   (0x0010)  MISSED
};

