
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: GameplayTags
/// dependency: MassEntity
/// dependency: MassSignals
/// dependency: MassSpawner
/// dependency: SmartObjectsModule
/// dependency: ZoneGraph
/// dependency: ZoneGraphAnnotations

/// Class /Script/MassSmartObjects.SmartObjectMassBehaviorDefinition
/// Size: 0x0008 (0x000028 - 0x000030)
class USmartObjectMassBehaviorDefinition : public USmartObjectBehaviorDefinition
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(float)                                     UseTime                                                     OFFSET(get<float>, {0x28, 4, 0, 0})
};

/// Class /Script/MassSmartObjects.MassSmartObjectCandidatesFinderProcessor
/// Size: 0x0550 (0x0000C0 - 0x000610)
class UMassSmartObjectCandidatesFinderProcessor : public UMassProcessor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1552;

public:
	DMember(float)                                     SearchExtents                                               OFFSET(get<float>, {0xC0, 4, 0, 0})
};

/// Class /Script/MassSmartObjects.MassSmartObjectTimedBehaviorProcessor
/// Size: 0x02A0 (0x0000C0 - 0x000360)
class UMassSmartObjectTimedBehaviorProcessor : public UMassProcessor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 864;

public:
};

/// Class /Script/MassSmartObjects.MassSmartObjectUserFragmentDeinitializer
/// Size: 0x02A8 (0x0000D8 - 0x000380)
class UMassSmartObjectUserFragmentDeinitializer : public UMassObserverProcessor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 896;

public:
};

/// Class /Script/MassSmartObjects.MassSmartObjectInitializerBase
/// Size: 0x02B8 (0x0000D8 - 0x000390)
class UMassSmartObjectInitializerBase : public UMassObserverProcessor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 912;

public:
};

/// Class /Script/MassSmartObjects.MassSmartObjectDeinitializerBase
/// Size: 0x02B8 (0x0000D8 - 0x000390)
class UMassSmartObjectDeinitializerBase : public UMassObserverProcessor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 912;

public:
};

/// Class /Script/MassSmartObjects.MassActiveSmartObjectInitializer
/// Size: 0x0000 (0x000390 - 0x000390)
class UMassActiveSmartObjectInitializer : public UMassSmartObjectInitializerBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 912;

public:
};

/// Class /Script/MassSmartObjects.MassActiveSmartObjectDeinitializer
/// Size: 0x0000 (0x000390 - 0x000390)
class UMassActiveSmartObjectDeinitializer : public UMassSmartObjectDeinitializerBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 912;

public:
};

/// Class /Script/MassSmartObjects.MassActorInstanceHandleInitializer
/// Size: 0x0000 (0x000390 - 0x000390)
class UMassActorInstanceHandleInitializer : public UMassSmartObjectInitializerBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 912;

public:
};

/// Class /Script/MassSmartObjects.MassActorInstanceHandleDeinitializer
/// Size: 0x0000 (0x000390 - 0x000390)
class UMassActorInstanceHandleDeinitializer : public UMassSmartObjectDeinitializerBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 912;

public:
};

/// Class /Script/MassSmartObjects.MassActiveSmartObjectSignalProcessor
/// Size: 0x0540 (0x000420 - 0x000960)
class UMassActiveSmartObjectSignalProcessor : public UMassSignalProcessorBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2400;

public:
};

/// Class /Script/MassSmartObjects.MassSmartObjectSettings
/// Size: 0x0008 (0x000028 - 0x000030)
class UMassSmartObjectSettings : public UMassModuleSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FZoneGraphTag)                             SmartObjectTag                                              OFFSET(getStruct<T>, {0x28, 1, 0, 0})
	DMember(float)                                     SearchExtents                                               OFFSET(get<float>, {0x2C, 4, 0, 0})
};

/// Class /Script/MassSmartObjects.MassSmartObjectUserTrait
/// Size: 0x0020 (0x000028 - 0x000048)
class UMassSmartObjectUserTrait : public UMassEntityTraitBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FGameplayTagContainer)                     UserTags                                                    OFFSET(getStruct<T>, {0x28, 32, 0, 0})
};

/// Class /Script/MassSmartObjects.SmartObjectZoneAnnotations
/// Size: 0x0030 (0x000570 - 0x0005A0)
class USmartObjectZoneAnnotations : public UZoneGraphAnnotationComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1440;

public:
	SMember(FZoneGraphTagFilter)                       AffectedLaneTags                                            OFFSET(getStruct<T>, {0x570, 12, 0, 0})
	CMember(TArray<FSmartObjectAnnotationData>)        SmartObjectAnnotationDataArray                              OFFSET(get<T>, {0x580, 16, 0, 0})
	SMember(FZoneGraphTag)                             BehaviorTag                                                 OFFSET(getStruct<T>, {0x590, 1, 0, 0})
	CMember(class USmartObjectSubsystem*)              SmartObjectSubsystem                                        OFFSET(get<T>, {0x598, 8, 0, 0})
};

/// Struct /Script/MassSmartObjects.MassSmartObjectUserFragment
/// Size: 0x004F (0x000001 - 0x000050)
class FMassSmartObjectUserFragment : public FMassFragment
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FGameplayTagContainer)                     UserTags                                                    OFFSET(getStruct<T>, {0x0, 32, 0, 0})
	SMember(FSmartObjectClaimHandle)                   InteractionHandle                                           OFFSET(getStruct<T>, {0x20, 32, 0, 0})
	CMember(EMassSmartObjectInteractionStatus)         InteractionStatus                                           OFFSET(get<T>, {0x40, 1, 0, 0})
	DMember(double)                                    InteractionCooldownEndTime                                  OFFSET(get<double>, {0x48, 8, 0, 0})
};

/// Struct /Script/MassSmartObjects.MassSmartObjectTimedBehaviorFragment
/// Size: 0x0003 (0x000001 - 0x000004)
class FMassSmartObjectTimedBehaviorFragment : public FMassFragment
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(float)                                     UseTime                                                     OFFSET(get<float>, {0x0, 4, 0, 0})
};

/// Struct /Script/MassSmartObjects.MassInActiveSmartObjectsRangeTag
/// Size: 0x0000 (0x000001 - 0x000001)
class FMassInActiveSmartObjectsRangeTag : public FMassTag
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/MassSmartObjects.SmartObjectRegistrationFragment
/// Size: 0x000F (0x000001 - 0x000010)
class FSmartObjectRegistrationFragment : public FMassFragment
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TWeakObjectPtr<USmartObjectDefinition*>)   Asset                                                       OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FSmartObjectHandle)                        Handle                                                      OFFSET(getStruct<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/MassSmartObjects.SmartObjectCandidateSlot
/// Size: 0x0020 (0x000000 - 0x000020)
class FSmartObjectCandidateSlot : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FSmartObjectRequestResult)                 Result                                                      OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	DMember(float)                                     Cost                                                        OFFSET(get<float>, {0x18, 4, 0, 0})
};

/// Struct /Script/MassSmartObjects.MassSmartObjectRequestID
/// Size: 0x0008 (0x000000 - 0x000008)
class FMassSmartObjectRequestID : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FMassEntityHandle)                         Entity                                                      OFFSET(getStruct<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/MassSmartObjects.MassSmartObjectCandidateSlots
/// Size: 0x0088 (0x000000 - 0x000088)
class FMassSmartObjectCandidateSlots : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	DMember(char)                                      NumSlots                                                    OFFSET(get<char>, {0x80, 1, 0, 0})
};

/// Struct /Script/MassSmartObjects.MassSmartObjectRequestResultFragment
/// Size: 0x008F (0x000001 - 0x000090)
class FMassSmartObjectRequestResultFragment : public FMassFragment
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FMassSmartObjectCandidateSlots)            Candidates                                                  OFFSET(getStruct<T>, {0x0, 136, 0, 0})
	DMember(bool)                                      bProcessed                                                  OFFSET(get<bool>, {0x88, 1, 0, 0})
};

/// Struct /Script/MassSmartObjects.MassSmartObjectWorldLocationRequestFragment
/// Size: 0x0087 (0x000001 - 0x000088)
class FMassSmartObjectWorldLocationRequestFragment : public FMassFragment
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FVector)                                   SearchOrigin                                                OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FMassEntityHandle)                         RequestingEntity                                            OFFSET(getStruct<T>, {0x18, 8, 0, 0})
	SMember(FGameplayTagContainer)                     UserTags                                                    OFFSET(getStruct<T>, {0x20, 32, 0, 0})
	SMember(FGameplayTagQuery)                         ActivityRequirements                                        OFFSET(getStruct<T>, {0x40, 72, 0, 0})
};

/// Struct /Script/MassSmartObjects.MassSmartObjectLaneLocationRequestFragment
/// Size: 0x007F (0x000001 - 0x000080)
class FMassSmartObjectLaneLocationRequestFragment : public FMassFragment
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FMassEntityHandle)                         RequestingEntity                                            OFFSET(getStruct<T>, {0x10, 8, 0, 0})
	SMember(FGameplayTagContainer)                     UserTags                                                    OFFSET(getStruct<T>, {0x18, 32, 0, 0})
	SMember(FGameplayTagQuery)                         ActivityRequirements                                        OFFSET(getStruct<T>, {0x38, 72, 0, 0})
};

/// Struct /Script/MassSmartObjects.MassSmartObjectCompletedRequestTag
/// Size: 0x0000 (0x000001 - 0x000001)
class FMassSmartObjectCompletedRequestTag : public FMassTag
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/MassSmartObjects.SmartObjectMassEntityUserData
/// Size: 0x0008 (0x000000 - 0x000008)
class FSmartObjectMassEntityUserData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FMassEntityHandle)                         UserEntity                                                  OFFSET(getStruct<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/MassSmartObjects.SmartObjectLaneLocation
/// Size: 0x0010 (0x000000 - 0x000010)
class FSmartObjectLaneLocation : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FSmartObjectHandle)                        ObjectHandle                                                OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	DMember(int32_t)                                   LaneIndex                                                   OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(float)                                     DistanceAlongLane                                           OFFSET(get<float>, {0xC, 4, 0, 0})
};

/// Struct /Script/MassSmartObjects.SmartObjectLaneLocationIndices
/// Size: 0x0010 (0x000000 - 0x000010)
class FSmartObjectLaneLocationIndices : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<int32_t>)                           SmartObjectLaneLocationIndices                              OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/MassSmartObjects.SmartObjectAnnotationData
/// Size: 0x00D0 (0x000000 - 0x0000D0)
class FSmartObjectAnnotationData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	SMember(FZoneGraphDataHandle)                      DataHandle                                                  OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(TArray<int32_t>)                           AffectedLanes                                               OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(TArray<FSmartObjectLaneLocation>)          SmartObjectLaneLocations                                    OFFSET(get<T>, {0x18, 16, 0, 0})
	CMember(TMap<FSmartObjectHandle, int32_t>)         SmartObjectToLaneLocationIndexLookup                        OFFSET(get<T>, {0x28, 80, 0, 0})
	CMember(TMap<int32_t, FSmartObjectLaneLocationIndices>) LaneToLaneLocationIndicesLookup                        OFFSET(get<T>, {0x78, 80, 0, 0})
};

/// Enum /Script/MassSmartObjects.EMassSmartObjectInteractionStatus
/// Size: 0x06
enum class EMassSmartObjectInteractionStatus : uint8_t
{
	EMassSmartObjectInteractionStatus__Unset                                         = 0,
	EMassSmartObjectInteractionStatus__InProgress                                    = 1,
	EMassSmartObjectInteractionStatus__BehaviorCompleted                             = 2,
	EMassSmartObjectInteractionStatus__TaskCompleted                                 = 3,
	EMassSmartObjectInteractionStatus__Aborted                                       = 4,
	EMassSmartObjectInteractionStatus__EMassSmartObjectInteractionStatus_MAX         = 5
};

