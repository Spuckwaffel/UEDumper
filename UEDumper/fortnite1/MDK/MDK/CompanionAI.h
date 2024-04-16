
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: EntityCore
/// dependency: FortniteAI
/// dependency: VerseFortnite

/// Class /Script/CompanionAI.PingComponentBase
/// Size: 0x0018 (0x000070 - 0x000088)
class UPingComponentBase : public UAIComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	CMember(class UFortPawnComponent_AIBotPingCommand*) CachedAIBotPingCommand                                     OFFSET(get<T>, {0x80, 8, 0, 0})


	/// Functions
	// Function /Script/CompanionAI.PingComponentBase.HandleOnNPCUnconvertedEvent
	// void HandleOnNPCUnconvertedEvent(class AFortPawn* UnconvertedFortPawn, EUnconvertReason UnconvertReason);                // [0xb15ae1c] Final|Native|Private 
	// Function /Script/CompanionAI.PingComponentBase.HandleOnNPCConvertedEvent
	// void HandleOnNPCConvertedEvent(class AFortPawn* InstigatorPawn, class AFortPawn* ConvertedPawn);                         // [0xb15ace0] Final|Native|Private 
};

