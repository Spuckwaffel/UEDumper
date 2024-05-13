
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType

/// Struct /Script/LinkId.OnlineLinkId
/// Size: 0x0018 (0x000000 - 0x000018)
class FOnlineLinkId : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FString)                                   Mnemonic                                                    OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	DMember(int32_t)                                   Version                                                     OFFSET(get<int32_t>, {0x10, 4, 0, 0})
};

/// Enum /Script/LinkId.ELinkCodeUserInputError
/// Size: 0x04
enum class ELinkCodeUserInputError : uint8_t
{
	ELinkCodeUserInputError__InvalidMnemonicCharacter                                = 0,
	ELinkCodeUserInputError__InvalidMnemonicLength                                   = 1,
	ELinkCodeUserInputError__InvalidVersionFormat                                    = 2,
	ELinkCodeUserInputError__NoError                                                 = 3
};

