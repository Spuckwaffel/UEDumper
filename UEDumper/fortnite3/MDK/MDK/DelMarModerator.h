
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: DelMarCore
/// dependency: DynamicUI
/// dependency: Engine
/// dependency: ModularGameplay

/// Class /Script/DelMarModerator.DelMarModeratorModeComponent
/// Size: 0x0018 (0x0000A0 - 0x0000B8)
class UDelMarModeratorModeComponent : public UControllerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	CMember(class UDynamicUIScene*)                    ModeratorScene                                              OFFSET(get<T>, {0xA0, 8, 0, 0})
	CMember(class ADelMarVehicle*)                     CachedVehicle                                               OFFSET(get<T>, {0xB0, 8, 0, 0})


	/// Functions
	// Function /Script/DelMarModerator.DelMarModeratorModeComponent.HandleExitVehicle
	// void HandleExitVehicle();                                                                                                // [0xca623d0] Final|Native|Protected 
	// Function /Script/DelMarModerator.DelMarModeratorModeComponent.HandleEnterVehicle
	// void HandleEnterVehicle();                                                                                               // [0xca623bc] Final|Native|Protected 
};

