
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/ReplicationGraph.ReplicationGraph
/// Size: 0x0548 (0x000028 - 0x000570)
#pragma pack(push, 0x1)
class alignas(0x10) UReplicationGraph : public UReplicationDriver
{ 
public:
	class UClass*                                      ReplicationConnectionManagerClass;                          // 0x0028   (0x0008)  
	class UNetDriver*                                  NetDriver;                                                  // 0x0030   (0x0008)  
	TArray<class UNetReplicationGraphConnection*>      Connections;                                                // 0x0038   (0x0010)  
	TArray<class UNetReplicationGraphConnection*>      PendingConnections;                                         // 0x0048   (0x0010)  
	unsigned char                                      UnknownData00_5[0x40];                                      // 0x0058   (0x0040)  MISSED
	TArray<class UReplicationGraphNode*>               GlobalGraphNodes;                                           // 0x0098   (0x0010)  
	TArray<class UReplicationGraphNode*>               PrepareForReplicationNodes;                                 // 0x00A8   (0x0010)  
	unsigned char                                      UnknownData01_6[0x4B0];                                     // 0x00B8   (0x04B0)  MISSED
};
#pragma pack(pop)

/// Struct /Script/ReplicationGraph.ConnectionAlwaysRelevantNodePair
/// Size: 0x0010 (0x000000 - 0x000010)
struct FConnectionAlwaysRelevantNodePair
{ 
	class UNetConnection*                              NetConnection;                                              // 0x0000   (0x0008)  
	class UReplicationGraphNode_AlwaysRelevant_ForConnection* Node;                                                // 0x0008   (0x0008)  
};

/// Class /Script/ReplicationGraph.BasicReplicationGraph
/// Size: 0x0030 (0x000570 - 0x0005A0)
class UBasicReplicationGraph : public UReplicationGraph
{ 
public:
	class UReplicationGraphNode_GridSpatialization2D*  GridNode;                                                   // 0x0568   (0x0008)  
	class UReplicationGraphNode_ActorList*             AlwaysRelevantNode;                                         // 0x0570   (0x0008)  
	TArray<FConnectionAlwaysRelevantNodePair>          AlwaysRelevantForConnectionList;                            // 0x0578   (0x0010)  
	TArray<class AActor*>                              ActorsWithoutNetConnection;                                 // 0x0588   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0598   (0x0008)  MISSED
};

/// Class /Script/ReplicationGraph.ReplicationGraphNode
/// Size: 0x0028 (0x000028 - 0x000050)
class UReplicationGraphNode : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	TArray<class UReplicationGraphNode*>               AllChildNodes;                                              // 0x0028   (0x0010)  
	unsigned char                                      UnknownData01_6[0x18];                                      // 0x0038   (0x0018)  MISSED
};

/// Class /Script/ReplicationGraph.ReplicationGraphNode_ActorList
/// Size: 0x0080 (0x000050 - 0x0000D0)
class UReplicationGraphNode_ActorList : public UReplicationGraphNode
{ 
public:
	unsigned char                                      UnknownData00_1[0x80];                                      // 0x0050   (0x0080)  MISSED
};

/// Class /Script/ReplicationGraph.ReplicationGraphNode_ActorListFrequencyBuckets
/// Size: 0x00B8 (0x000050 - 0x000108)
class UReplicationGraphNode_ActorListFrequencyBuckets : public UReplicationGraphNode
{ 
public:
	unsigned char                                      UnknownData00_1[0xB8];                                      // 0x0050   (0x00B8)  MISSED
};

/// Class /Script/ReplicationGraph.ReplicationGraphNode_DynamicSpatialFrequency
/// Size: 0x0030 (0x0000D0 - 0x000100)
class UReplicationGraphNode_DynamicSpatialFrequency : public UReplicationGraphNode_ActorList
{ 
public:
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x00D0   (0x0030)  MISSED
};

/// Class /Script/ReplicationGraph.ReplicationGraphNode_ConnectionDormancyNode
/// Size: 0x0080 (0x0000D0 - 0x000150)
class UReplicationGraphNode_ConnectionDormancyNode : public UReplicationGraphNode_ActorList
{ 
public:
	unsigned char                                      UnknownData00_1[0x80];                                      // 0x00D0   (0x0080)  MISSED
};

/// Class /Script/ReplicationGraph.ReplicationGraphNode_DormancyNode
/// Size: 0x0010 (0x0000D0 - 0x0000E0)
class UReplicationGraphNode_DormancyNode : public UReplicationGraphNode_ActorList
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x00D0   (0x0010)  MISSED
};

/// Class /Script/ReplicationGraph.ReplicationGraphNode_GridCell
/// Size: 0x0050 (0x0000D0 - 0x000120)
class UReplicationGraphNode_GridCell : public UReplicationGraphNode_ActorList
{ 
public:
	unsigned char                                      UnknownData00_3[0x40];                                      // 0x00D0   (0x0040)  MISSED
	class UReplicationGraphNode*                       DynamicNode;                                                // 0x0110   (0x0008)  
	class UReplicationGraphNode_DormancyNode*          DormancyNode;                                               // 0x0118   (0x0008)  
};

/// Class /Script/ReplicationGraph.ReplicationGraphNode_GridSpatialization2D
/// Size: 0x0230 (0x000050 - 0x000280)
class UReplicationGraphNode_GridSpatialization2D : public UReplicationGraphNode
{ 
public:
	unsigned char                                      UnknownData00_1[0x230];                                     // 0x0050   (0x0230)  MISSED
};

/// Class /Script/ReplicationGraph.ReplicationGraphNode_AlwaysRelevant
/// Size: 0x0018 (0x000050 - 0x000068)
class UReplicationGraphNode_AlwaysRelevant : public UReplicationGraphNode
{ 
public:
	class UReplicationGraphNode*                       ChildNode;                                                  // 0x0050   (0x0008)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0058   (0x0010)  MISSED
};

/// Struct /Script/ReplicationGraph.AlwaysRelevantActorInfo
/// Size: 0x0018 (0x000000 - 0x000018)
struct FAlwaysRelevantActorInfo
{ 
	class UNetConnection*                              Connection;                                                 // 0x0000   (0x0008)  
	class AActor*                                      LastViewer;                                                 // 0x0008   (0x0008)  
	class AActor*                                      LastViewTarget;                                             // 0x0010   (0x0008)  
};

/// Class /Script/ReplicationGraph.ReplicationGraphNode_AlwaysRelevant_ForConnection
/// Size: 0x0070 (0x0000D0 - 0x000140)
class UReplicationGraphNode_AlwaysRelevant_ForConnection : public UReplicationGraphNode_ActorList
{ 
public:
	unsigned char                                      UnknownData00_3[0x10];                                      // 0x00D0   (0x0010)  MISSED
	TArray<FAlwaysRelevantActorInfo>                   PastRelevantActors;                                         // 0x00E0   (0x0010)  
	unsigned char                                      UnknownData01_6[0x50];                                      // 0x00F0   (0x0050)  MISSED
};

/// Struct /Script/ReplicationGraph.TearOffActorInfo
/// Size: 0x0018 (0x000000 - 0x000018)
struct FTearOffActorInfo
{ 
	class AActor*                                      Actor;                                                      // 0x0008   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0010   (0x0008)  MISSED
};

/// Class /Script/ReplicationGraph.ReplicationGraphNode_TearOff_ForConnection
/// Size: 0x0020 (0x000050 - 0x000070)
class UReplicationGraphNode_TearOff_ForConnection : public UReplicationGraphNode
{ 
public:
	TArray<FTearOffActorInfo>                          TearOffActors;                                              // 0x0050   (0x0010)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0060   (0x0010)  MISSED
};

/// Struct /Script/ReplicationGraph.LastLocationGatherInfo
/// Size: 0x0038 (0x000000 - 0x000038)
struct FLastLocationGatherInfo
{ 
	class UNetConnection*                              Connection;                                                 // 0x0000   (0x0008)  
	FVector                                            LastLocation;                                               // 0x0008   (0x0018)  
	FVector                                            LastOutOfRangeLocationCheck;                                // 0x0020   (0x0018)  
};

/// Class /Script/ReplicationGraph.NetReplicationGraphConnection
/// Size: 0x0350 (0x000028 - 0x000378)
class UNetReplicationGraphConnection : public UReplicationConnectionDriver
{ 
public:
	class UNetConnection*                              NetConnection;                                              // 0x0028   (0x0008)  
	unsigned char                                      UnknownData00_5[0x144];                                     // 0x0030   (0x0144)  MISSED
	SDK_UNDEFINED(8,2597) /* TWeakObjectPtr<AReplicationGraphDebugActor*> */ __um(DebugActor);                     // 0x0174   (0x0008)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x017C   (0x0004)  MISSED
	TArray<FLastLocationGatherInfo>                    LastGatherLocations;                                        // 0x0180   (0x0010)  
	unsigned char                                      UnknownData02_5[0xB0];                                      // 0x0190   (0x00B0)  MISSED
	TArray<class UReplicationGraphNode*>               ConnectionGraphNodes;                                       // 0x0240   (0x0010)  
	class UReplicationGraphNode_TearOff_ForConnection* TearOffNode;                                                // 0x0250   (0x0008)  
	unsigned char                                      UnknownData03_6[0x120];                                     // 0x0258   (0x0120)  MISSED
};

/// Class /Script/ReplicationGraph.ReplicationGraphDebugActor
/// Size: 0x0010 (0x000290 - 0x0002A0)
class AReplicationGraphDebugActor : public AActor
{ 
public:
	class UReplicationGraph*                           ReplicationGraph;                                           // 0x0290   (0x0008)  
	class UNetReplicationGraphConnection*              ConnectionManager;                                          // 0x0298   (0x0008)  


	/// Functions
	// Function /Script/ReplicationGraph.ReplicationGraphDebugActor.ServerStopDebugging
	// void ServerStopDebugging();                                                                                           // [0x1c2b230] Net|NetReliableNative|Event|Public|NetServer 
	// Function /Script/ReplicationGraph.ReplicationGraphDebugActor.ServerStartDebugging
	// void ServerStartDebugging();                                                                                          // [0x792af54] Net|NetReliableNative|Event|Public|NetServer 
	// Function /Script/ReplicationGraph.ReplicationGraphDebugActor.ServerSetPeriodFrameForClass
	// void ServerSetPeriodFrameForClass(class UClass* Class, int32_t PeriodFrame);                                          // [0x792ae8c] Net|NetReliableNative|Event|Public|NetServer 
	// Function /Script/ReplicationGraph.ReplicationGraphDebugActor.ServerSetCullDistanceForClass
	// void ServerSetCullDistanceForClass(class UClass* Class, float CullDistance);                                          // [0x792adc4] Net|NetReliableNative|Event|Public|NetServer 
	// Function /Script/ReplicationGraph.ReplicationGraphDebugActor.ServerSetConditionalActorBreakpoint
	// void ServerSetConditionalActorBreakpoint(class AActor* Actor);                                                        // [0x6ad0820] Net|NetReliableNative|Event|Public|NetServer 
	// Function /Script/ReplicationGraph.ReplicationGraphDebugActor.ServerPrintCullDistances
	// void ServerPrintCullDistances();                                                                                      // [0x21dc214] Net|NetReliableNative|Event|Public|NetServer 
	// Function /Script/ReplicationGraph.ReplicationGraphDebugActor.ServerPrintAllActorInfo
	// void ServerPrintAllActorInfo(FString Str);                                                                            // [0x792ac60] Net|NetReliableNative|Event|Public|NetServer 
	// Function /Script/ReplicationGraph.ReplicationGraphDebugActor.ServerCellInfo
	// void ServerCellInfo();                                                                                                // [0x342c5dc] Net|NetReliableNative|Event|Public|NetServer 
	// Function /Script/ReplicationGraph.ReplicationGraphDebugActor.ClientCellInfo
	// void ClientCellInfo(FVector CellLocation, FVector CellExtent, TArray<AActor*> Actors);                                // [0x792a930] Net|NetReliableNative|Event|Public|HasDefaults|NetClient 
};

/// Struct /Script/ReplicationGraph.ClassReplicationInfo
/// Size: 0x0070 (0x000000 - 0x000070)
struct FClassReplicationInfo
{ 
	float                                              DistancePriorityScale;                                      // 0x0000   (0x0004)  
	float                                              StarvationPriorityScale;                                    // 0x0004   (0x0004)  
	float                                              AccumulatedNetPriorityBias;                                 // 0x0008   (0x0004)  
	uint16_t                                           ReplicationPeriodFrame;                                     // 0x000C   (0x0002)  
	uint16_t                                           FastPath_ReplicationPeriodFrame;                            // 0x000E   (0x0002)  
	uint16_t                                           ActorChannelFrameTimeout;                                   // 0x0010   (0x0002)  
	unsigned char                                      UnknownData00_5[0x52];                                      // 0x0012   (0x0052)  MISSED
	float                                              CullDistance;                                               // 0x0064   (0x0004)  
	float                                              CullDistanceSquared;                                        // 0x0068   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x006C   (0x0004)  MISSED
};

