
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType

/// Struct /Script/VerseGameplayDebug.VerseGameplayStringDebugMessage
/// Size: 0x0018 (0x000000 - 0x000018)
class FVerseGameplayStringDebugMessage : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FString)                                   String                                                      OFFSET(getStruct<T>, {0x8, 16, 0, 0})
};

