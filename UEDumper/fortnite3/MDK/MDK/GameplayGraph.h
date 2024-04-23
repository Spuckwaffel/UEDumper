
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject

/// Class /Script/GameplayGraph.GraphElement
/// Size: 0x0020 (0x000028 - 0x000048)
class UGraphElement : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(EGraphElementType)                         ElementType                                                 OFFSET(get<T>, {0x28, 4, 0, 0})
	SMember(FGraphUniqueIndex)                         UniqueIndex                                                 OFFSET(getStruct<T>, {0x2C, 20, 0, 0})
	CMember(TWeakObjectPtr<UGraph*>)                   ParentGraph                                                 OFFSET(get<T>, {0x40, 8, 0, 0})
};

/// Class /Script/GameplayGraph.Graph
/// Size: 0x00D8 (0x000028 - 0x000100)
class UGraph : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	CMember(TMap<FGraphVertexHandle, UGraphVertex*>)   Vertices                                                    OFFSET(get<T>, {0x58, 80, 0, 0})
	CMember(TMap<FGraphIslandHandle, UGraphIsland*>)   Islands                                                     OFFSET(get<T>, {0xA8, 80, 0, 0})
};

/// Class /Script/GameplayGraph.GraphIsland
/// Size: 0x00B8 (0x000048 - 0x000100)
class UGraphIsland : public UGraphElement
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	CMember(TSet<FGraphVertexHandle>)                  Vertices                                                    OFFSET(get<T>, {0xA8, 80, 0, 0})
	CMember(EGraphIslandOperations)                    AllowedOperations                                           OFFSET(get<T>, {0xF8, 4, 0, 0})
};

/// Class /Script/GameplayGraph.GraphVertex
/// Size: 0x00A8 (0x000048 - 0x0000F0)
class UGraphVertex : public UGraphElement
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	CMember(TSet<FGraphVertexHandle>)                  Edges                                                       OFFSET(get<T>, {0x78, 80, 0, 0})
	SMember(FGraphIslandHandle)                        ParentIsland                                                OFFSET(getStruct<T>, {0xC8, 40, 0, 0})
};

/// Struct /Script/GameplayGraph.GraphProperties
/// Size: 0x0001 (0x000000 - 0x000001)
class FGraphProperties : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
	DMember(bool)                                      bGenerateIslands                                            OFFSET(get<bool>, {0x0, 1, 0, 0})
};

/// Struct /Script/GameplayGraph.SerializedEdgeData
/// Size: 0x0050 (0x000000 - 0x000050)
class FSerializedEdgeData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FGraphVertexHandle)                        Node1                                                       OFFSET(getStruct<T>, {0x0, 40, 0, 0})
	SMember(FGraphVertexHandle)                        Node2                                                       OFFSET(getStruct<T>, {0x28, 40, 0, 0})
};

/// Struct /Script/GameplayGraph.GraphHandle
/// Size: 0x0028 (0x000000 - 0x000028)
class FGraphHandle : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FGraphUniqueIndex)                         UniqueIndex                                                 OFFSET(getStruct<T>, {0x8, 20, 0, 0})
	CMember(TWeakObjectPtr<UGraph*>)                   WeakGraph                                                   OFFSET(get<T>, {0x1C, 8, 0, 0})
};

/// Struct /Script/GameplayGraph.GraphUniqueIndex
/// Size: 0x0014 (0x000000 - 0x000014)
class FGraphUniqueIndex : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	SMember(FGuid)                                     UniqueIndex                                                 OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	DMember(bool)                                      bIsTemporary                                                OFFSET(get<bool>, {0x10, 1, 0, 0})
};

/// Struct /Script/GameplayGraph.GraphVertexHandle
/// Size: 0x0000 (0x000028 - 0x000028)
class FGraphVertexHandle : public FGraphHandle
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Struct /Script/GameplayGraph.SerializedIslandData
/// Size: 0x0010 (0x000000 - 0x000010)
class FSerializedIslandData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FGraphVertexHandle>)                Vertices                                                    OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/GameplayGraph.SerializableGraph
/// Size: 0x0078 (0x000000 - 0x000078)
class FSerializableGraph : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	SMember(FGraphProperties)                          Properties                                                  OFFSET(getStruct<T>, {0x0, 1, 0, 0})
	CMember(TArray<FGraphVertexHandle>)                Vertices                                                    OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(TArray<FSerializedEdgeData>)               Edges                                                       OFFSET(get<T>, {0x18, 16, 0, 0})
	CMember(TMap<FGraphIslandHandle, FSerializedIslandData>) Islands                                               OFFSET(get<T>, {0x28, 80, 0, 0})
};

/// Struct /Script/GameplayGraph.GraphIslandHandle
/// Size: 0x0000 (0x000028 - 0x000028)
class FGraphIslandHandle : public FGraphHandle
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Enum /Script/GameplayGraph.EGraphElementType
/// Size: 0x05
enum class EGraphElementType : uint32_t
{
	EGraphElementType__Node                                                          = 0,
	EGraphElementType__Edge                                                          = 1,
	EGraphElementType__Island                                                        = 2,
	EGraphElementType__Unknown                                                       = 3,
	EGraphElementType__EGraphElementType_MAX                                         = 4
};

/// Enum /Script/GameplayGraph.EGraphIslandOperations
/// Size: 0x07
enum class EGraphIslandOperations : uint32_t
{
	EGraphIslandOperations__None                                                     = 0,
	EGraphIslandOperations__Add                                                      = 1,
	EGraphIslandOperations__Split                                                    = 2,
	EGraphIslandOperations__Merge                                                    = 4,
	EGraphIslandOperations__Destroy                                                  = 8,
	EGraphIslandOperations__All                                                      = 15,
	EGraphIslandOperations__EGraphIslandOperations_MAX                               = 16
};

