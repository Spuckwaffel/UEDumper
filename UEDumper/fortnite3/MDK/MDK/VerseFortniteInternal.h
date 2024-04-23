
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: EntityActor
/// dependency: EntityCore
/// dependency: FortniteGame
/// dependency: ModularGameplay

/// Class /Script/VerseFortniteInternal.BuildingActorEntityInteropComponent
/// Size: 0x0008 (0x000058 - 0x000060)
class UBuildingActorEntityInteropComponent : public UEntityComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
};

/// Class /Script/VerseFortniteInternal.VerseFortniteMovementComponentBase
/// Size: 0x0000 (0x000088 - 0x000088)
class UVerseFortniteMovementComponentBase : public UEntityActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
};

/// Class /Script/VerseFortniteInternal.FortControllerStateHandlerComponent
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UFortControllerStateHandlerComponent : public UControllerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:


	/// Functions
	// Function /Script/VerseFortniteInternal.FortControllerStateHandlerComponent.NotifyOfStateChange
	// void NotifyOfStateChange(FString& State, bool Active);                                                                   // [0xb2840dc] Final|Native|Public|HasOutParms 
};

/// Class /Script/VerseFortniteInternal.FortAthenaMutator_BuildingSettings
/// Size: 0x0018 (0x000338 - 0x000350)
class AFortAthenaMutator_BuildingSettings : public AFortAthenaMutator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 848;

public:
};

/// Class /Script/VerseFortniteInternal.FortBuildingSettingsComponentBase
/// Size: 0x0010 (0x000078 - 0x000088)
class UFortBuildingSettingsComponentBase : public UEntityEnableableComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	CMember(class AFortAthenaMutator_BuildingSettings*) Mutator                                                    OFFSET(get<T>, {0x78, 8, 0, 0})
	CMember(TEnumAsByte<EPlayerSettingStateInternal>)  Building                                                    OFFSET(get<T>, {0x80, 1, 0, 0})
	CMember(TEnumAsByte<EPlayerSettingStateInternal>)  BuildingOnWater                                             OFFSET(get<T>, {0x81, 1, 0, 0})
	CMember(TEnumAsByte<EPlayerSettingStateInternal>)  Editing                                                     OFFSET(get<T>, {0x82, 1, 0, 0})
	CMember(TEnumAsByte<EPlayerSettingStateInternal>)  EditingHostile                                              OFFSET(get<T>, {0x83, 1, 0, 0})
	CMember(TEnumAsByte<EPlayerSettingStateInternal>)  TrapPlacement                                               OFFSET(get<T>, {0x84, 1, 0, 0})


	/// Functions
	// Function /Script/VerseFortniteInternal.FortBuildingSettingsComponentBase.OnRep_Settings
	// void OnRep_Settings();                                                                                                   // [0xb28483c] Final|Native|Private 
};

/// Class /Script/VerseFortniteInternal.FortPlayspaceComponentHelper
/// Size: 0x0008 (0x000028 - 0x000030)
class UFortPlayspaceComponentHelper : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:


	/// Functions
	// Function /Script/VerseFortniteInternal.FortPlayspaceComponentHelper.HandlePlayerPawnPossessed
	// void HandlePlayerPawnPossessed(class APawn* Pawn);                                                                       // [0xb28405c] Final|Native|Public  
	// Function /Script/VerseFortniteInternal.FortPlayspaceComponentHelper.HandlePlayerDied
	// void HandlePlayerDied(class AFortPlayerPawnAthena* FortPlayerPawnAthena);                                                // [0xb283fdc] Final|Native|Public  
};

/// Class /Script/VerseFortniteInternal.VerseFortniteEntitySubsystem
/// Size: 0x0010 (0x000030 - 0x000040)
class UVerseFortniteEntitySubsystem : public UWorldSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Enum /Script/VerseFortniteInternal.EPlayerSettingStateInternal
/// Size: 0x04
enum class EPlayerSettingStateInternal : uint8_t
{
	EPlayerSettingStateInternal__PlayerUseDefault                                    = 0,
	EPlayerSettingStateInternal__PlayerIsAllowed                                     = 1,
	EPlayerSettingStateInternal__PlayerIsDisallowed                                  = 2,
	EPlayerSettingStateInternal__EPlayerSettingStateInternal_MAX                     = 3
};

