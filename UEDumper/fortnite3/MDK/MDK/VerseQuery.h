
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: Entity
/// dependency: ModularGameplay
/// dependency: PlayspaceSystem

/// Class /Script/VerseQuery.EntityQueryManager
/// Size: 0x0010 (0x000028 - 0x000038)
class UEntityQueryManager : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(class UEntityTypeQueryContainer*)          EntityTypeQueryContainer                                    OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(class UTaggedObjectQueryContainer*)        TagQueryContainer                                           OFFSET(get<T>, {0x30, 8, 0, 0})
};

/// Class /Script/VerseQuery.EntityTypeQueryContainer
/// Size: 0x00A0 (0x000028 - 0x0000C8)
class UEntityTypeQueryContainer : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
};

/// Class /Script/VerseQuery.GlobalEntityQueryManagerComponent
/// Size: 0x0008 (0x0000A0 - 0x0000A8)
class UGlobalEntityQueryManagerComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	CMember(class UEntityQueryManager*)                QueryManager                                                OFFSET(get<T>, {0xA0, 8, 0, 0})
};

/// Class /Script/VerseQuery.EntityLevelPlayspaceAssociationComponent
/// Size: 0x0010 (0x0000A0 - 0x0000B0)
class UEntityLevelPlayspaceAssociationComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	CMember(TWeakObjectPtr<APlayspace*>)               Playspace                                                   OFFSET(get<T>, {0xA0, 8, 0, 0})
	CMember(TWeakObjectPtr<AGameplayVolume*>)          Volume                                                      OFFSET(get<T>, {0xA8, 8, 0, 0})
};

/// Class /Script/VerseQuery.EntityRegistry
/// Size: 0x0000 (0x000030 - 0x000030)
class UEntityRegistry : public UEntityRegistryBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/VerseQuery.PlayspaceComponent_EntityQueryContainer
/// Size: 0x0008 (0x0000A0 - 0x0000A8)
class UPlayspaceComponent_EntityQueryContainer : public UPlayspaceComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	CMember(class UEntityQueryManager*)                QueryManager                                                OFFSET(get<T>, {0xA0, 8, 0, 0})
};

/// Class /Script/VerseQuery.TaggedObjectQueryContainer
/// Size: 0x0050 (0x000028 - 0x000078)
class UTaggedObjectQueryContainer : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
};

