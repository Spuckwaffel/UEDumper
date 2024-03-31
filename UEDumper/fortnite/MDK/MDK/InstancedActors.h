
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
/// dependency: MassRepresentation

/// Class /Script/InstancedActors.InstancedActorsData
/// Size: 0x0000 (0x000028 - 0x000028)
class UInstancedActorsData : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/InstancedActors.InstancedActorsManager
/// Size: 0x0000 (0x000290 - 0x000290)
class AInstancedActorsManager : public APartitionActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 656;

public:
};

/// Struct /Script/InstancedActors.InstancedActorsTagSet
/// Size: 0x0028 (0x000000 - 0x000028)
class FInstancedActorsTagSet : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FGameplayTagContainer)                     Tags                                                        OFFSET(getStruct<T>, {0x0, 32, 0, 0})
	DMember(uint32_t)                                  Hash                                                        OFFSET(get<uint32_t>, {0x20, 4, 0, 0})
};

/// Struct /Script/InstancedActors.InstancedActorsVisualizationDesc
/// Size: 0x0010 (0x000000 - 0x000010)
class FInstancedActorsVisualizationDesc : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FISMComponentDescriptor>)           ISMComponentDescriptors                                     OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/InstancedActors.InstancedActorsSoftVisualizationDesc
/// Size: 0x0010 (0x000000 - 0x000010)
class FInstancedActorsSoftVisualizationDesc : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FSoftISMComponentDescriptor>)       ISMComponentDescriptors                                     OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/InstancedActors.InstancedActorsVisualizationInfo
/// Size: 0x0050 (0x000000 - 0x000050)
class FInstancedActorsVisualizationInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FInstancedActorsVisualizationDesc)         VisualizationDesc                                           OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	CMember(TArray<class UInstancedStaticMeshComponent*>) ISMComponents                                            OFFSET(get<T>, {0x10, 16, 0, 0})
	SMember(FStaticMeshInstanceVisualizationDescHandle) MassStaticMeshDescHandle                                   OFFSET(getStruct<T>, {0x20, 2, 0, 0})
};

/// Struct /Script/InstancedActors.InstancedActorsMeshSwitchFragment
/// Size: 0x0001 (0x000001 - 0x000002)
class FInstancedActorsMeshSwitchFragment : public FMassFragment
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 2;

public:
	SMember(FStaticMeshInstanceVisualizationDescHandle) NewStaticMeshDescHandle                                    OFFSET(getStruct<T>, {0x0, 2, 0, 0})
};

/// Struct /Script/InstancedActors.InstancedActorsManagerHandle
/// Size: 0x0004 (0x000000 - 0x000004)
class FInstancedActorsManagerHandle : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(int32_t)                                   ManagerID                                                   OFFSET(get<int32_t>, {0x0, 4, 0, 0})
};

/// Struct /Script/InstancedActors.InstancedActorsModifierVolumeHandle
/// Size: 0x0004 (0x000000 - 0x000004)
class FInstancedActorsModifierVolumeHandle : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(int32_t)                                   ModifierVolumeID                                            OFFSET(get<int32_t>, {0x0, 4, 0, 0})
};

