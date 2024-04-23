
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/EntityLevel.CoreEntityLevel
/// Size: 0x0030 (0x000290 - 0x0002C0)
class ACoreEntityLevel : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 704;

public:
	CMember(TArray<class UObject*>)                    Entities                                                    OFFSET(get<T>, {0x298, 16, 0, 0})
	CMember(class UClass*)                             SavedEntityClass                                            OFFSET(get<T>, {0x2B0, 8, 0, 0})
	CMember(class UClass*)                             SavedEntityComponentClass                                   OFFSET(get<T>, {0x2B8, 8, 0, 0})
};

/// Class /Script/EntityLevel.EntitySceneComponent
/// Size: 0x0010 (0x000500 - 0x000510)
class UEntitySceneComponent : public UPrimitiveComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1296;

public:
	CMember(class ACoreEntityLevel*)                   EntityLevel                                                 OFFSET(get<T>, {0x500, 8, 0, 0})
	DMember(bool)                                      bIgnoreAttachmentUponPaste                                  OFFSET(get<bool>, {0x508, 1, 0, 0})
};

/// Class /Script/EntityLevel.EntityProxyActor
/// Size: 0x0038 (0x000290 - 0x0002C8)
class AEntityProxyActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 712;

public:
	CMember(class UObject*)                            Entity                                                      OFFSET(get<T>, {0x298, 8, 0, 0})
	CMember(class ACoreEntityLevel*)                   EntityLevel                                                 OFFSET(get<T>, {0x2A8, 8, 0, 0})
	CMember(class UObject*)                            TransformComponent                                          OFFSET(get<T>, {0x2B0, 8, 0, 0})
};

/// Class /Script/EntityLevel.EntityProxyActorComponent
/// Size: 0x0010 (0x0000A0 - 0x0000B0)
class UEntityProxyActorComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	CMember(class UObject*)                            Entity                                                      OFFSET(get<T>, {0xA0, 8, 0, 0})
	CMember(class UObject*)                            EntityComponent                                             OFFSET(get<T>, {0xA8, 8, 0, 0})
};

/// Enum /Script/EntityLevel.EEntityProxyFeature
/// Size: 0x17
enum class EEntityProxyFeature : uint16_t
{
	EEntityProxyFeature__Selection                                                   = 1,
	EEntityProxyFeature__PropertyChanges                                             = 4,
	EEntityProxyFeature__Duplication                                                 = 8,
	EEntityProxyFeature__CopyPaste                                                   = 16,
	EEntityProxyFeature__Deletion                                                    = 32,
	EEntityProxyFeature__DetailsPanel                                                = 64,
	EEntityProxyFeature__Outliner                                                    = 128,
	EEntityProxyFeature__SelectionRender                                             = 256,
	EEntityProxyFeature__UndoRedo                                                    = 512,
	EEntityProxyFeature__Gizmo                                                       = 1024,
	EEntityProxyFeature__Groups                                                      = 2048,
	EEntityProxyFeature__Naming                                                      = 4096,
	EEntityProxyFeature__ActorFactory                                                = 8192,
	EEntityProxyFeature__Sync                                                        = 16384,
	EEntityProxyFeature__Transform                                                   = 32768,
	EEntityProxyFeature___Reserved                                                   = 0,
	EEntityProxyFeature__EEntityProxyFeature_MAX                                     = 32769
};

