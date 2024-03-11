
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: EntityCore

/// Struct /Script/VerseGameplayTags.VerseGameplayTag
/// Size: 0x0008 (0x000000 - 0x000008)
struct FVerseGameplayTag
{ 
	class UClass*                                      InternalTag;                                                // 0x0000   (0x0008)  
};

/// Struct /Script/VerseGameplayTags.VerseGameplayTagContainer
/// Size: 0x0010 (0x000000 - 0x000010)
struct FVerseGameplayTagContainer
{ 
	TArray<FVerseGameplayTag>                          InternalTags;                                               // 0x0000   (0x0010)  
};

/// Class /Script/VerseGameplayTags.EntityTagContainerComponent
/// Size: 0x0018 (0x000058 - 0x000070)
class UEntityTagContainerComponent : public UEntityComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0058   (0x0008)  MISSED
	FVerseGameplayTagContainer                         InternalTags;                                               // 0x0060   (0x0010)  
};

/// Class /Script/VerseGameplayTags.VerseGameplayTagBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UVerseGameplayTagBase : public UObject
{ 
public:
};

/// Class /Script/VerseGameplayTags.TaggedObjectQueryWorldSubsystemBase
/// Size: 0x0000 (0x000030 - 0x000030)
class UTaggedObjectQueryWorldSubsystemBase : public UWorldSubsystem
{ 
public:
};

/// Class /Script/VerseGameplayTags.TagRegistrationHandler
/// Size: 0x0040 (0x000028 - 0x000068)
class UTagRegistrationHandler : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x68];                                      // 0x0000   (0x0068)  MISSED
};

/// Class /Script/VerseGameplayTags.VerseGameplayTagContainerBase
/// Size: 0x0010 (0x000028 - 0x000038)
class UVerseGameplayTagContainerBase : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x38];                                      // 0x0000   (0x0038)  MISSED
};

/// Class /Script/VerseGameplayTags.VerseGameplayTagAssetInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UVerseGameplayTagAssetInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/VerseGameplayTags.VerseGameplayTagAssetInterface.HasMatchingGameplayTag
	// bool HasMatchingGameplayTag(FVerseGameplayTag TagToCheck);                                                            // [0x777400c] Native|Public|Const  
	// Function /Script/VerseGameplayTags.VerseGameplayTagAssetInterface.HasAnyMatchingGameplayTags
	// bool HasAnyMatchingGameplayTags(FVerseGameplayTagContainer& TagContainer);                                            // [0x7773e90] Native|Public|HasOutParms|Const 
	// Function /Script/VerseGameplayTags.VerseGameplayTagAssetInterface.HasAllMatchingGameplayTags
	// bool HasAllMatchingGameplayTags(FVerseGameplayTagContainer& TagContainer);                                            // [0x7773d14] Native|Public|HasOutParms|Const 
	// Function /Script/VerseGameplayTags.VerseGameplayTagAssetInterface.GetOwnedGameplayTags
	// void GetOwnedGameplayTags(FVerseGameplayTagContainer& TagContainer);                                                  // [0x7773ba8] Native|Public|HasOutParms|Const 
};

/// Class /Script/VerseGameplayTags.VerseTagMarkupComponent
/// Size: 0x0018 (0x0000A0 - 0x0000B8)
class UVerseTagMarkupComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x00A0   (0x0008)  MISSED
	FVerseGameplayTagContainer                         InternalTags;                                               // 0x00A8   (0x0010)  
};

/// Struct /Script/VerseGameplayTags.TaggedObjectFinderEntry
/// Size: 0x0030 (0x000000 - 0x000030)
struct FTaggedObjectFinderEntry
{ 
	FVerseGameplayTagContainer                         RequiredTags;                                               // 0x0000   (0x0010)  
	FVerseGameplayTagContainer                         PreferredTags;                                              // 0x0010   (0x0010)  
	FVerseGameplayTagContainer                         ExclusionTags;                                              // 0x0020   (0x0010)  
};

