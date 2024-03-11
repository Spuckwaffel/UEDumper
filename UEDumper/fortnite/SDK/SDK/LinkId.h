
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once

/// Enum /Script/LinkId.ELinkCodeUserInputError
/// Size: 0x05
enum class ELinkCodeUserInputError : uint8_t
{
	ELinkCodeUserInputError__InvalidMnemonicCharacter                                = 0,
	ELinkCodeUserInputError__InvalidMnemonicLength                                   = 1,
	ELinkCodeUserInputError__InvalidVersionFormat                                    = 2,
	ELinkCodeUserInputError__NoError                                                 = 3,
	ELinkCodeUserInputError__ELinkCodeUserInputError_MAX                             = 4
};

/// Struct /Script/LinkId.OnlineLinkId
/// Size: 0x0018 (0x000000 - 0x000018)
struct FOnlineLinkId
{ 
	SDK_UNDEFINED(16,2506) /* FString */               __um(Mnemonic);                                             // 0x0000   (0x0010)  
	int32_t                                            Version;                                                    // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
};

