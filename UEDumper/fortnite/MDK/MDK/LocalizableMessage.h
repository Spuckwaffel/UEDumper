
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: StructUtils

/// Struct /Script/LocalizableMessage.LocalizableMessageParameterEntry
/// Size: 0x0020 (0x000000 - 0x000020)
class FLocalizableMessageParameterEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FString)                                   Key                                                         OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FInstancedStruct)                          Value                                                       OFFSET(getStruct<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/LocalizableMessage.LocalizableMessage
/// Size: 0x0030 (0x000000 - 0x000030)
class FLocalizableMessage : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FString)                                   Key                                                         OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   DefaultText                                                 OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	CMember(TArray<FLocalizableMessageParameterEntry>) Substitutions                                               OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/LocalizableMessage.LocalizableMessageParameterInt
/// Size: 0x0008 (0x000000 - 0x000008)
class FLocalizableMessageParameterInt : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(int64_t)                                   Value                                                       OFFSET(get<int64_t>, {0x0, 8, 0, 0})
};

/// Struct /Script/LocalizableMessage.LocalizableMessageParameterFloat
/// Size: 0x0008 (0x000000 - 0x000008)
class FLocalizableMessageParameterFloat : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(double)                                    Value                                                       OFFSET(get<double>, {0x0, 8, 0, 0})
};

/// Struct /Script/LocalizableMessage.LocalizableMessageParameterString
/// Size: 0x0010 (0x000000 - 0x000010)
class FLocalizableMessageParameterString : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FString)                                   Value                                                       OFFSET(getStruct<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/LocalizableMessage.LocalizableMessageParameterMessage
/// Size: 0x0030 (0x000000 - 0x000030)
class FLocalizableMessageParameterMessage : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FLocalizableMessage)                       Value                                                       OFFSET(getStruct<T>, {0x0, 48, 0, 0})
};

