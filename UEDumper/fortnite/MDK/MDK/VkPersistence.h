
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject

/// Class /Script/VkPersistence.VkPersistence
/// Size: 0x00A8 (0x000028 - 0x0000D0)
class UVkPersistence : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
};

/// Class /Script/VkPersistence.VkPersistenceManager
/// Size: 0x01A0 (0x000028 - 0x0001C8)
class UVkPersistenceManager : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 456;

public:
};

/// Struct /Script/VkPersistence.VkPersistenceVersion
/// Size: 0x0018 (0x000000 - 0x000018)
class FVkPersistenceVersion : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(int32_t)                                   Version                                                     OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	SMember(FString)                                   Name                                                        OFFSET(getStruct<T>, {0x8, 16, 0, 0})
};

