
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: DynamicUI
/// dependency: Engine

/// Class /Script/DynamicAthenaHUD.DynamicAthenaHUDDirector
/// Size: 0x0028 (0x0002B0 - 0x0002D8)
class ADynamicAthenaHUDDirector : public ADynamicUIDirectorBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 728;

public:
	CMember(class UDynamicUIScene*)                    VehicleHUDScene                                             OFFSET(get<T>, {0x2B0, 8, 0, 0})
	CMember(class UDynamicUIScene*)                    CreativeQuickbarScene                                       OFFSET(get<T>, {0x2B8, 8, 0, 0})
	CMember(class UDynamicUIScene*)                    PlayerMessagesScene                                         OFFSET(get<T>, {0x2C0, 8, 0, 0})
	CMember(class UDynamicUIScene*)                    TournamentScene                                             OFFSET(get<T>, {0x2C8, 8, 0, 0})
	CMember(class UDynamicUIScene*)                    ArenaTournamentScene                                        OFFSET(get<T>, {0x2D0, 8, 0, 0})


	/// Functions
	// Function /Script/DynamicAthenaHUD.DynamicAthenaHUDDirector.HandleHiringNpc
	// void HandleHiringNpc();                                                                                                  // [0xbd27f78] Final|Native|Private 
	// Function /Script/DynamicAthenaHUD.DynamicAthenaHUDDirector.HandleExitingVehicle
	// void HandleExitingVehicle();                                                                                             // [0xbd27f64] Final|Native|Private 
	// Function /Script/DynamicAthenaHUD.DynamicAthenaHUDDirector.HandleEnteringVehicle
	// void HandleEnteringVehicle();                                                                                            // [0xbd27f50] Final|Native|Private 
	// Function /Script/DynamicAthenaHUD.DynamicAthenaHUDDirector.HandleCreativeQuickbarEquippedChanged
	// void HandleCreativeQuickbarEquippedChanged(bool bIsQuickbarEquipped);                                                    // [0xbd27ed0] Final|Native|Private 
};

