
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/HomerUI.FortHomerComponent
/// Size: 0x0088 (0x0000A0 - 0x000128)
class UFortHomerComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:


	/// Functions
	// Function /Script/HomerUI.FortHomerComponent.HandlePawnEmoteStopped
	// void HandlePawnEmoteStopped(class UFortItemDefinition* MontageItemDef, class AFortPawn* PawnEmoting);                    // [0xa9499bc] Final|Native|Private 
	// Function /Script/HomerUI.FortHomerComponent.HandleLocalPlayerEliminatedPlayer
	// void HandleLocalPlayerEliminatedPlayer(class AFortPlayerStateAthena* Player);                                            // [0xa949940] Final|Native|Private 
};

/// Enum /Script/HomerUI.EHomerClipEventType
/// Size: 0x04
enum class EHomerClipEventType : uint8_t
{
	EHomerClipEventType__Emote                                                       = 0,
	EHomerClipEventType__Elimination                                                 = 1,
	EHomerClipEventType__COUNT                                                       = 2,
	EHomerClipEventType__EHomerClipEventType_MAX                                     = 3
};

