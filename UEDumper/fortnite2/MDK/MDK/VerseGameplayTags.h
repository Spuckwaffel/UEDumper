
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: EntityCore

/// Class /Script/VerseGameplayTags.EntityTagContainerComponent
/// Size: 0x0018 (0x000058 - 0x000070)
class UEntityTagContainerComponent : public UEntityComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FVerseGameplayTagContainer)                InternalTags                                                OFFSET(getStruct<T>, {0x60, 16, 0, 0})
};

/// Class /Script/VerseGameplayTags.VerseGameplayTagBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UVerseGameplayTagBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/VerseGameplayTags.TaggedObjectQueryWorldSubsystemBase
/// Size: 0x0000 (0x000030 - 0x000030)
class UTaggedObjectQueryWorldSubsystemBase : public UWorldSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/VerseGameplayTags.TagRegistrationHandler
/// Size: 0x0040 (0x000028 - 0x000068)
class UTagRegistrationHandler : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
};

/// Class /Script/VerseGameplayTags.VerseGameplayTagContainerBase
/// Size: 0x0010 (0x000028 - 0x000038)
class UVerseGameplayTagContainerBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Script/VerseGameplayTags.VerseGameplayTagAssetInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UVerseGameplayTagAssetInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/VerseGameplayTags.VerseGameplayTagAssetInterface.HasMatchingGameplayTag
	// bool HasMatchingGameplayTag(FVerseGameplayTag TagToCheck);                                                               // [0x7fe8d50] Native|Public|Const  
	// Function /Script/VerseGameplayTags.VerseGameplayTagAssetInterface.HasAnyMatchingGameplayTags
	// bool HasAnyMatchingGameplayTags(FVerseGameplayTagContainer& TagContainer);                                               // [0x7fe8660] Native|Public|HasOutParms|Const 
	// Function /Script/VerseGameplayTags.VerseGameplayTagAssetInterface.HasAllMatchingGameplayTags
	// bool HasAllMatchingGameplayTags(FVerseGameplayTagContainer& TagContainer);                                               // [0x7fe7f70] Native|Public|HasOutParms|Const 
	// Function /Script/VerseGameplayTags.VerseGameplayTagAssetInterface.GetOwnedGameplayTags
	// void GetOwnedGameplayTags(FVerseGameplayTagContainer& TagContainer);                                                     // [0x7fe7888] Native|Public|HasOutParms|Const 
};

/// Class /Script/VerseGameplayTags.VerseTagMarkupComponent
/// Size: 0x0018 (0x0000A0 - 0x0000B8)
class UVerseTagMarkupComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	SMember(FVerseGameplayTagContainer)                InternalTags                                                OFFSET(getStruct<T>, {0xA8, 16, 0, 0})
};

/// Struct /Script/VerseGameplayTags.TaggedObjectFinderEntry
/// Size: 0x0030 (0x000000 - 0x000030)
class FTaggedObjectFinderEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FVerseGameplayTagContainer)                RequiredTags                                                OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FVerseGameplayTagContainer)                PreferredTags                                               OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FVerseGameplayTagContainer)                ExclusionTags                                               OFFSET(getStruct<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/VerseGameplayTags.VerseGameplayTagContainer
/// Size: 0x0010 (0x000000 - 0x000010)
class FVerseGameplayTagContainer : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FVerseGameplayTag>)                 InternalTags                                                OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/VerseGameplayTags.VerseGameplayTag
/// Size: 0x0008 (0x000000 - 0x000008)
class FVerseGameplayTag : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(class UClass*)                             InternalTag                                                 OFFSET(get<T>, {0x0, 8, 0, 0})
};

