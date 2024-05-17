
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/ReplicationGraph.ReplicationGraph
/// Size: 0x0548 (0x000028 - 0x000570)
class UReplicationGraph : public UReplicationDriver
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1392;

public:
	CMember(class UClass*)                             ReplicationConnectionManagerClass                           OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(class UNetDriver*)                         NetDriver                                                   OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(TArray<class UNetReplicationGraphConnection*>) Connections                                             OFFSET(get<T>, {0x38, 16, 0, 0})
	CMember(TArray<class UNetReplicationGraphConnection*>) PendingConnections                                      OFFSET(get<T>, {0x48, 16, 0, 0})
	CMember(TArray<class UReplicationGraphNode*>)      GlobalGraphNodes                                            OFFSET(get<T>, {0x98, 16, 0, 0})
	CMember(TArray<class UReplicationGraphNode*>)      PrepareForReplicationNodes                                  OFFSET(get<T>, {0xA8, 16, 0, 0})
};

/// Class /Script/ReplicationGraph.BasicReplicationGraph
/// Size: 0x0038 (0x000568 - 0x0005A0)
class UBasicReplicationGraph : public UReplicationGraph
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1440;

public:
	CMember(class UReplicationGraphNode_GridSpatialization2D*) GridNode                                            OFFSET(get<T>, {0x568, 8, 0, 0})
	CMember(class UReplicationGraphNode_ActorList*)    AlwaysRelevantNode                                          OFFSET(get<T>, {0x570, 8, 0, 0})
	CMember(TArray<FConnectionAlwaysRelevantNodePair>) AlwaysRelevantForConnectionList                             OFFSET(get<T>, {0x578, 16, 0, 0})
	CMember(TArray<class AActor*>)                     ActorsWithoutNetConnection                                  OFFSET(get<T>, {0x588, 16, 0, 0})
};

/// Class /Script/ReplicationGraph.ReplicationGraphNode
/// Size: 0x0028 (0x000028 - 0x000050)
class UReplicationGraphNode : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TArray<class UReplicationGraphNode*>)      AllChildNodes                                               OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Class /Script/ReplicationGraph.ReplicationGraphNode_ActorList
/// Size: 0x0080 (0x000050 - 0x0000D0)
class UReplicationGraphNode_ActorList : public UReplicationGraphNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
};

/// Class /Script/ReplicationGraph.ReplicationGraphNode_ActorListFrequencyBuckets
/// Size: 0x00B8 (0x000050 - 0x000108)
class UReplicationGraphNode_ActorListFrequencyBuckets : public UReplicationGraphNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:
};

/// Class /Script/ReplicationGraph.ReplicationGraphNode_DynamicSpatialFrequency
/// Size: 0x0030 (0x0000D0 - 0x000100)
class UReplicationGraphNode_DynamicSpatialFrequency : public UReplicationGraphNode_ActorList
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
};

/// Class /Script/ReplicationGraph.ReplicationGraphNode_ConnectionDormancyNode
/// Size: 0x0080 (0x0000D0 - 0x000150)
class UReplicationGraphNode_ConnectionDormancyNode : public UReplicationGraphNode_ActorList
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
};

/// Class /Script/ReplicationGraph.ReplicationGraphNode_DormancyNode
/// Size: 0x0010 (0x0000D0 - 0x0000E0)
class UReplicationGraphNode_DormancyNode : public UReplicationGraphNode_ActorList
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
};

/// Class /Script/ReplicationGraph.ReplicationGraphNode_GridCell
/// Size: 0x0050 (0x0000D0 - 0x000120)
class UReplicationGraphNode_GridCell : public UReplicationGraphNode_ActorList
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	CMember(class UReplicationGraphNode*)              DynamicNode                                                 OFFSET(get<T>, {0x110, 8, 0, 0})
	CMember(class UReplicationGraphNode_DormancyNode*) DormancyNode                                                OFFSET(get<T>, {0x118, 8, 0, 0})
};

/// Class /Script/ReplicationGraph.ReplicationGraphNode_GridSpatialization2D
/// Size: 0x0230 (0x000050 - 0x000280)
class UReplicationGraphNode_GridSpatialization2D : public UReplicationGraphNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 640;

public:
};

/// Class /Script/ReplicationGraph.ReplicationGraphNode_AlwaysRelevant
/// Size: 0x0018 (0x000050 - 0x000068)
class UReplicationGraphNode_AlwaysRelevant : public UReplicationGraphNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	CMember(class UReplicationGraphNode*)              ChildNode                                                   OFFSET(get<T>, {0x50, 8, 0, 0})
};

/// Class /Script/ReplicationGraph.ReplicationGraphNode_AlwaysRelevant_ForConnection
/// Size: 0x0070 (0x0000D0 - 0x000140)
class UReplicationGraphNode_AlwaysRelevant_ForConnection : public UReplicationGraphNode_ActorList
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
	CMember(TArray<FAlwaysRelevantActorInfo>)          PastRelevantActors                                          OFFSET(get<T>, {0xE0, 16, 0, 0})
};

/// Class /Script/ReplicationGraph.ReplicationGraphNode_TearOff_ForConnection
/// Size: 0x0020 (0x000050 - 0x000070)
class UReplicationGraphNode_TearOff_ForConnection : public UReplicationGraphNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	CMember(TArray<FTearOffActorInfo>)                 TearOffActors                                               OFFSET(get<T>, {0x50, 16, 0, 0})
};

/// Class /Script/ReplicationGraph.NetReplicationGraphConnection
/// Size: 0x0350 (0x000028 - 0x000378)
class UNetReplicationGraphConnection : public UReplicationConnectionDriver
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 888;

public:
	CMember(class UNetConnection*)                     NetConnection                                               OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(TWeakObjectPtr<AReplicationGraphDebugActor*>) DebugActor                                               OFFSET(get<T>, {0x174, 8, 0, 0})
	CMember(TArray<FLastLocationGatherInfo>)           LastGatherLocations                                         OFFSET(get<T>, {0x180, 16, 0, 0})
	CMember(TArray<class UReplicationGraphNode*>)      ConnectionGraphNodes                                        OFFSET(get<T>, {0x240, 16, 0, 0})
	CMember(class UReplicationGraphNode_TearOff_ForConnection*) TearOffNode                                        OFFSET(get<T>, {0x250, 8, 0, 0})
};

/// Class /Script/ReplicationGraph.ReplicationGraphDebugActor
/// Size: 0x0010 (0x000290 - 0x0002A0)
class AReplicationGraphDebugActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 672;

public:
	CMember(class UReplicationGraph*)                  ReplicationGraph                                            OFFSET(get<T>, {0x290, 8, 0, 0})
	CMember(class UNetReplicationGraphConnection*)     ConnectionManager                                           OFFSET(get<T>, {0x298, 8, 0, 0})


	/// Functions
	// Function /Script/ReplicationGraph.ReplicationGraphDebugActor.ServerStopDebugging
	// void ServerStopDebugging();                                                                                              // [0x81fff0c] Net|NetReliableNative|Event|Public|NetServer 
	// Function /Script/ReplicationGraph.ReplicationGraphDebugActor.ServerStartDebugging
	// void ServerStartDebugging();                                                                                             // [0x81ffef4] Net|NetReliableNative|Event|Public|NetServer 
	// Function /Script/ReplicationGraph.ReplicationGraphDebugActor.ServerSetPeriodFrameForClass
	// void ServerSetPeriodFrameForClass(class UClass* Class, int32_t PeriodFrame);                                             // [0x81ffe2c] Net|NetReliableNative|Event|Public|NetServer 
	// Function /Script/ReplicationGraph.ReplicationGraphDebugActor.ServerSetCullDistanceForClass
	// void ServerSetCullDistanceForClass(class UClass* Class, float CullDistance);                                             // [0x81ffd64] Net|NetReliableNative|Event|Public|NetServer 
	// Function /Script/ReplicationGraph.ReplicationGraphDebugActor.ServerSetConditionalActorBreakpoint
	// void ServerSetConditionalActorBreakpoint(class AActor* Actor);                                                           // [0x6d91c78] Net|NetReliableNative|Event|Public|NetServer 
	// Function /Script/ReplicationGraph.ReplicationGraphDebugActor.ServerPrintCullDistances
	// void ServerPrintCullDistances();                                                                                         // [0x18c13e4] Net|NetReliableNative|Event|Public|NetServer 
	// Function /Script/ReplicationGraph.ReplicationGraphDebugActor.ServerPrintAllActorInfo
	// void ServerPrintAllActorInfo(FString Str);                                                                               // [0x81ff688] Net|NetReliableNative|Event|Public|NetServer 
	// Function /Script/ReplicationGraph.ReplicationGraphDebugActor.ServerCellInfo
	// void ServerCellInfo();                                                                                                   // [0x3459e2c] Net|NetReliableNative|Event|Public|NetServer 
	// Function /Script/ReplicationGraph.ReplicationGraphDebugActor.ClientCellInfo
	// void ClientCellInfo(FVector CellLocation, FVector CellExtent, TArray<AActor*> Actors);                                   // [0x81ff544] Net|NetReliableNative|Event|Public|HasDefaults|NetClient 
};

/// Struct /Script/ReplicationGraph.ConnectionAlwaysRelevantNodePair
/// Size: 0x0010 (0x000000 - 0x000010)
class FConnectionAlwaysRelevantNodePair : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class UNetConnection*)                     NetConnection                                               OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class UReplicationGraphNode_AlwaysRelevant_ForConnection*) Node                                        OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/ReplicationGraph.AlwaysRelevantActorInfo
/// Size: 0x0018 (0x000000 - 0x000018)
class FAlwaysRelevantActorInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(class UNetConnection*)                     Connection                                                  OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class AActor*)                             LastViewer                                                  OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(class AActor*)                             LastViewTarget                                              OFFSET(get<T>, {0x10, 8, 0, 0})
};

/// Struct /Script/ReplicationGraph.TearOffActorInfo
/// Size: 0x0018 (0x000000 - 0x000018)
class FTearOffActorInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(class AActor*)                             Actor                                                       OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/ReplicationGraph.LastLocationGatherInfo
/// Size: 0x0038 (0x000000 - 0x000038)
class FLastLocationGatherInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(class UNetConnection*)                     Connection                                                  OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FVector)                                   LastLocation                                                OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	SMember(FVector)                                   LastOutOfRangeLocationCheck                                 OFFSET(getStruct<T>, {0x20, 24, 0, 0})
};

/// Struct /Script/ReplicationGraph.ClassReplicationInfo
/// Size: 0x0070 (0x000000 - 0x000070)
class FClassReplicationInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	DMember(float)                                     DistancePriorityScale                                       OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     StarvationPriorityScale                                     OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     AccumulatedNetPriorityBias                                  OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(uint16_t)                                  ReplicationPeriodFrame                                      OFFSET(get<uint16_t>, {0xC, 2, 0, 0})
	DMember(uint16_t)                                  FastPath_ReplicationPeriodFrame                             OFFSET(get<uint16_t>, {0xE, 2, 0, 0})
	DMember(uint16_t)                                  ActorChannelFrameTimeout                                    OFFSET(get<uint16_t>, {0x10, 2, 0, 0})
	DMember(float)                                     CullDistance                                                OFFSET(get<float>, {0x64, 4, 0, 0})
	DMember(float)                                     CullDistanceSquared                                         OFFSET(get<float>, {0x68, 4, 0, 0})
};

