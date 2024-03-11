
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/VerseParameterCollections.VerseParameterCollection
/// Size: 0x0050 (0x000028 - 0x000078)
class UVerseParameterCollection : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x78];                                      // 0x0000   (0x0078)  MISSED
};

/// Struct /Script/VerseParameterCollections.VerseParameterCollectionSubsystemEntry
/// Size: 0x0018 (0x000000 - 0x000018)
struct FVerseParameterCollectionSubsystemEntry
{ 
	class AVerseParameterCollectionReplication*        ReplicationActor;                                           // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0008   (0x0010)  MISSED
};

/// Class /Script/VerseParameterCollections.VerseParameterCollectionsSubsystem
/// Size: 0x0010 (0x000030 - 0x000040)
class UVerseParameterCollectionsSubsystem : public UWorldSubsystem
{ 
public:
	TArray<FVerseParameterCollectionSubsystemEntry>    ParameterCollections;                                       // 0x0030   (0x0010)  
};

/// Class /Script/VerseParameterCollections.VerseParameterCollectionReplication
/// Size: 0x0008 (0x000290 - 0x000298)
class AVerseParameterCollectionReplication : public AActor
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0290   (0x0008)  MISSED
};

