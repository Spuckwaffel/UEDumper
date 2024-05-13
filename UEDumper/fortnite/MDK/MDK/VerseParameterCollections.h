
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/VerseParameterCollections.VerseParameterCollection
/// Size: 0x0050 (0x000028 - 0x000078)
class UVerseParameterCollection : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
};

/// Class /Script/VerseParameterCollections.VerseParameterCollectionsSubsystem
/// Size: 0x0010 (0x000030 - 0x000040)
class UVerseParameterCollectionsSubsystem : public UWorldSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(TArray<FVerseParameterCollectionSubsystemEntry>) ParameterCollections                                  OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Class /Script/VerseParameterCollections.VerseParameterCollectionReplication
/// Size: 0x0008 (0x000290 - 0x000298)
class AVerseParameterCollectionReplication : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 664;

public:
};

/// Struct /Script/VerseParameterCollections.VerseParameterCollectionSubsystemEntry
/// Size: 0x0018 (0x000000 - 0x000018)
class FVerseParameterCollectionSubsystemEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(class AVerseParameterCollectionReplication*) ReplicationActor                                          OFFSET(get<T>, {0x0, 8, 0, 0})
};

