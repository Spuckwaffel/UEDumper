
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject

/// Class /Script/InventoryRequestInterface.PersistenceInventoryRequestInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UPersistenceInventoryRequestInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Enum /Script/InventoryRequestInterface.EInventoryPersistenceMode
/// Size: 0x05
enum class EInventoryPersistenceMode : uint8_t
{
	EInventoryPersistenceMode__Normal                                                = 0,
	EInventoryPersistenceMode__Deferred                                              = 1,
	EInventoryPersistenceMode__Disabled                                              = 2,
	EInventoryPersistenceMode__ReadOnly                                              = 3,
	EInventoryPersistenceMode__EInventoryPersistenceMode_MAX                         = 4
};

