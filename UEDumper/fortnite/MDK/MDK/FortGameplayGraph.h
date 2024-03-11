
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: GameplayGraph

/// Class /Script/FortGameplayGraph.FortConnectivityGraph
/// Size: 0x0000 (0x000168 - 0x000168)
class UFortConnectivityGraph : public UGraph
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 360;

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
/// Size: 0x0008 (0x0000F0 - 0x0000F8)
class UFortConnectivityGraphVertex : public UGraphVertex
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
	DMember(bool)                                      bIsIndependentlySupported                                   OFFSET(get<bool>, {0xF0, 1, 0, 0})
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

/// Struct /Script/FortGameplayGraph.SerializableConnectivityGraph
/// Size: 0x0050 (0x0000B8 - 0x000108)
class FSerializableConnectivityGraph : public FSerializableGraph
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:
	CMember(TMap<FGraphVertexHandle, FSerializableConnectivityGraphVertex>) ConnectivityVertexData                 OFFSET(get<T>, {0xB8, 80, 0, 0})
};

