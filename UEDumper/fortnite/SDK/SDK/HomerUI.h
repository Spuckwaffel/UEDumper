
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine

/// Enum /Script/HomerUI.EHomerClipEventType
/// Size: 0x04
enum class EHomerClipEventType : uint8_t
{
	EHomerClipEventType__Emote                                                       = 0,
	EHomerClipEventType__Elimination                                                 = 1,
	EHomerClipEventType__COUNT                                                       = 2,
	EHomerClipEventType__EHomerClipEventType_MAX                                     = 3
};

/// Class /Script/HomerUI.FortHomerComponent
/// Size: 0x0088 (0x0000A0 - 0x000128)
class UFortHomerComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x88];                                      // 0x00A0   (0x0088)  MISSED


	/// Functions
	// Function /Script/HomerUI.FortHomerComponent.HandlePawnEmoteStopped
	// void HandlePawnEmoteStopped(class UFortItemDefinition* MontageItemDef, class AFortPawn* PawnEmoting);                 // [0xa9499bc] Final|Native|Private 
	// Function /Script/HomerUI.FortHomerComponent.HandleLocalPlayerEliminatedPlayer
	// void HandleLocalPlayerEliminatedPlayer(class AFortPlayerStateAthena* Player);                                         // [0xa949940] Final|Native|Private 
};

