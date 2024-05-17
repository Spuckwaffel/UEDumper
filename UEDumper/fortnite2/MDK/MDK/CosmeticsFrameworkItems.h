
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: GameplayTags

/// Class /Script/CosmeticsFrameworkItems.CosmeticDataComponent
/// Size: 0x0050 (0x0000A0 - 0x0000F0)
class UCosmeticDataComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	CMember(TMap<FGameplayTag, FInstancedStructContainer>) PropertyContainers                                      OFFSET(get<T>, {0xA0, 80, 0, 0})


	/// Functions
	// Function /Script/CosmeticsFrameworkItems.CosmeticDataComponent.ResetProperties
	// void ResetProperties();                                                                                                  // [0x788aaf4] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/CosmeticsFrameworkItems.CosmeticDataComponent.BP_FindProperty
	// bool BP_FindProperty(FGameplayTag SlotTag, FGameplayTag PropertyTag, FCosmeticPropertyBase& OutProperty);                // [0x788a998] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CosmeticsFrameworkItems.CosmeticDataComponent.BP_AddOrOverrideProperty
	// bool BP_AddOrOverrideProperty(FGameplayTag SlotTag, FCosmeticPropertyBase& Property);                                    // [0x788a88c] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/CosmeticsFrameworkItems.CosmeticPropertyBase
/// Size: 0x0004 (0x000000 - 0x000004)
class FCosmeticPropertyBase : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	SMember(FGameplayTag)                              PropertyTag                                                 OFFSET(getStruct<T>, {0x0, 4, 0, 0})
};

/// Struct /Script/CosmeticsFrameworkItems.CosmeticProperty_Vector
/// Size: 0x001C (0x000004 - 0x000020)
class FCosmeticProperty_Vector : public FCosmeticPropertyBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FVector)                                   Value                                                       OFFSET(getStruct<T>, {0x8, 24, 0, 0})
};

/// Struct /Script/CosmeticsFrameworkItems.CosmeticProperty_TableRow
/// Size: 0x0014 (0x000004 - 0x000018)
class FCosmeticProperty_TableRow : public FCosmeticPropertyBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FDataTableRowHandle)                       TableRow                                                    OFFSET(getStruct<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/CosmeticsFrameworkItems.CosmeticProperty_GameplayTag
/// Size: 0x0004 (0x000004 - 0x000008)
class FCosmeticProperty_GameplayTag : public FCosmeticPropertyBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FGameplayTag)                              GameplayTag                                                 OFFSET(getStruct<T>, {0x4, 4, 0, 0})
};

