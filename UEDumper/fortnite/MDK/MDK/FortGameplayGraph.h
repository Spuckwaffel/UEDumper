
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: GameplayGraph

/// Class /Script/FortGameplayGraph.FortConnectivityGraph
/// Size: 0x0000 (0x000130 - 0x000130)
class UFortConnectivityGraph : public UGraph
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
};

/// Class /Script/FortGameplayGraph.FortConnectivityGraphIsland
/// Size: 0x0050 (0x000100 - 0x000150)
class UFortConnectivityGraphIsland : public UGraphIsland
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
	CMember(TSet<FGraphVertexHandle>)                  SupportNodes                                                OFFSET(get<T>, {0x100, 80, 0, 0})
};

/// Class /Script/FortGameplayGraph.FortConnectivityGraphVertex
/// Size: 0x0020 (0x0000F0 - 0x000110)
class UFortConnectivityGraphVertex : public UGraphVertex
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
	DMember(bool)                                      bIsIndependentlySupported                                   OFFSET(get<bool>, {0x108, 1, 0, 0})
};

/// Struct /Script/FortGameplayGraph.SerializableConnectivityGraphVertex
/// Size: 0x0001 (0x000000 - 0x000001)
class FSerializableConnectivityGraphVertex : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
	DMember(bool)                                      bIsIndependentlySupported                                   OFFSET(get<bool>, {0x0, 1, 0, 0})
};

/// Struct /Script/FortGameplayGraph.SerializableConnectivityGraph_v2
/// Size: 0x0050 (0x000078 - 0x0000C8)
class FSerializableConnectivityGraph_v2 : public FSerializableGraph
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	CMember(TMap<FGraphVertexHandle, FSerializableConnectivityGraphVertex>) ConnectivityVertexData                 OFFSET(get<T>, {0x78, 80, 0, 0})
};

