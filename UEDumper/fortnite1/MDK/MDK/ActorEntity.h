
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: Entity
/// dependency: NetCore

/// Class /Script/ActorEntity.ActorEntityComponent
/// Size: 0x01A0 (0x0000A0 - 0x000240)
class UActorEntityComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 576;

public:
	SMember(FActorEntityMappingArray)                  EntityMappingArray                                          OFFSET(getStruct<T>, {0xA0, 304, 0, 0})
};

/// Class /Script/ActorEntity.ActorEntitySubsystem
/// Size: 0x0068 (0x000030 - 0x000098)
class UActorEntitySubsystem : public UWorldSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
};

/// Class /Script/ActorEntity.PhysicsComponentBridgeHelper
/// Size: 0x0010 (0x000028 - 0x000038)
class UPhysicsComponentBridgeHelper : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:


	/// Functions
	// Function /Script/ActorEntity.PhysicsComponentBridgeHelper.HandleActorComponentHit
	// void HandleActorComponentHit(class UPrimitiveComponent* PrimitiveComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComponent, FVector NormalImpulse, FHitResult& Hit); // [0xae69438] Final|Native|Private|HasOutParms|HasDefaults 
};

/// Struct /Script/ActorEntity.ActorEntityMappingArrayItem
/// Size: 0x0014 (0x00000C - 0x000020)
class FActorEntityMappingArrayItem : public FFastArraySerializerItem
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(class UBaseEntity*)                        Entity                                                      OFFSET(get<T>, {0x10, 8, 0, 0})
	CMember(class UObject*)                            Object                                                      OFFSET(get<T>, {0x18, 8, 0, 0})
};

/// Struct /Script/ActorEntity.ActorEntityMappingArray
/// Size: 0x0028 (0x000108 - 0x000130)
class FActorEntityMappingArray : public FFastArraySerializer
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	CMember(TArray<FActorEntityMappingArrayItem>)      Entities                                                    OFFSET(get<T>, {0x120, 16, 0, 0})
};

/// Struct /Script/ActorEntity.SubEntityInteropRules
/// Size: 0x0018 (0x000000 - 0x000018)
class FSubEntityInteropRules : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FName)                                     ComponentName                                               OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(EConsideredForActorEntityInterop)          Considered                                                  OFFSET(get<T>, {0x4, 4, 0, 0})
	CMember(TArray<TWeakObjectPtr<UClass*>>)           AllowedEntityComponents                                     OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/ActorEntity.ActorEntityInteropRules
/// Size: 0x0058 (0x000000 - 0x000058)
class FActorEntityInteropRules : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(TWeakObjectPtr<UClass*>)                   ActorClass                                                  OFFSET(get<T>, {0x0, 32, 0, 0})
	CMember(EConsideredForActorEntityInterop)          ActorEntityConsidered                                       OFFSET(get<T>, {0x20, 4, 0, 0})
	CMember(TArray<TWeakObjectPtr<UClass*>>)           AllowedEntityComponents                                     OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(EConsideredForActorEntityInterop)          SubEntitiesConsidered                                       OFFSET(get<T>, {0x38, 4, 0, 0})
	CMember(TArray<FSubEntityInteropRules>)            SubEntityRules                                              OFFSET(get<T>, {0x40, 16, 0, 0})
	DMember(bool)                                      bEnableEntityReplication                                    OFFSET(get<bool>, {0x50, 1, 0, 0})
};

/// Enum /Script/ActorEntity.EConsideredForActorEntityInterop
/// Size: 0x04
enum class EConsideredForActorEntityInterop : uint32_t
{
	EConsideredForActorEntityInterop__No                                             = 0,
	EConsideredForActorEntityInterop__Partial                                        = 1,
	EConsideredForActorEntityInterop__Yes                                            = 2,
	EConsideredForActorEntityInterop__EConsideredForActorEntityInterop_MAX           = 3
};

