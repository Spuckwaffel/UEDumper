
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: StructUtils

/// Struct /Script/LocalizableMessage.LocalizableMessageParameterEntry
/// Size: 0x0020 (0x000000 - 0x000020)
struct FLocalizableMessageParameterEntry
{ 
	SDK_UNDEFINED(16,2593) /* FString */               __um(Key);                                                  // 0x0000   (0x0010)  
	FInstancedStruct                                   Value;                                                      // 0x0010   (0x0010)  
};

/// Struct /Script/LocalizableMessage.LocalizableMessage
/// Size: 0x0030 (0x000000 - 0x000030)
struct FLocalizableMessage
{ 
	SDK_UNDEFINED(16,2594) /* FString */               __um(Key);                                                  // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,2595) /* FString */               __um(DefaultText);                                          // 0x0010   (0x0010)  
	TArray<FLocalizableMessageParameterEntry>          Substitutions;                                              // 0x0020   (0x0010)  
};

/// Struct /Script/LocalizableMessage.LocalizableMessageParameterInt
/// Size: 0x0008 (0x000000 - 0x000008)
struct FLocalizableMessageParameterInt
{ 
	int64_t                                            Value;                                                      // 0x0000   (0x0008)  
};

/// Struct /Script/LocalizableMessage.LocalizableMessageParameterFloat
/// Size: 0x0008 (0x000000 - 0x000008)
struct FLocalizableMessageParameterFloat
{ 
	double                                             Value;                                                      // 0x0000   (0x0008)  
};

/// Struct /Script/LocalizableMessage.LocalizableMessageParameterString
/// Size: 0x0010 (0x000000 - 0x000010)
struct FLocalizableMessageParameterString
{ 
	SDK_UNDEFINED(16,2596) /* FString */               __um(Value);                                                // 0x0000   (0x0010)  
};

/// Struct /Script/LocalizableMessage.LocalizableMessageParameterMessage
/// Size: 0x0030 (0x000000 - 0x000030)
struct FLocalizableMessageParameterMessage
{ 
	FLocalizableMessage                                Value;                                                      // 0x0000   (0x0030)  
};

