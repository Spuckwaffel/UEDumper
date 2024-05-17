
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject

/// Class /Script/CosmeticsFrameworkModifiers.CosmeticModifierInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UCosmeticModifierInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/CosmeticsFrameworkModifiers.CosmeticModifierOwnerInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UCosmeticModifierOwnerInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/CosmeticsFrameworkModifiers.CosmeticModifierProviderInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UCosmeticModifierProviderInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Struct /Script/CosmeticsFrameworkModifiers.SoftModifierClassPtr
/// Size: 0x0020 (0x000000 - 0x000020)
class FSoftModifierClassPtr : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(TWeakObjectPtr<UClass*>)                   SoftClass                                                   OFFSET(get<T>, {0x0, 32, 0, 0})
};

