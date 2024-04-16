
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine

/// Class /Script/ZoneGraph.ZoneGraphData
/// Size: 0x0130 (0x000290 - 0x0003C0)
class AZoneGraphData : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 960;

public:
	DMember(bool)                                      bEnableDrawing                                              OFFSET(get<bool>, {0x291, 1, 0, 0})
	CMember(class UZoneGraphRenderingComponent*)       RenderingComp                                               OFFSET(get<T>, {0x298, 8, 0, 0})
	SMember(FZoneGraphStorage)                         ZoneStorage                                                 OFFSET(getStruct<T>, {0x2A0, 240, 0, 0})
	DMember(uint32_t)                                  CombinedShapeHash                                           OFFSET(get<uint32_t>, {0x3B8, 4, 0, 0})
};

/// Class /Script/ZoneGraph.ZoneGraphRenderingComponent
/// Size: 0x0010 (0x000500 - 0x000510)
class UZoneGraphRenderingComponent : public UPrimitiveComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1296;

public:
};

/// Class /Script/ZoneGraph.ZoneGraphSettings
/// Size: 0x01E8 (0x000030 - 0x000218)
class UZoneGraphSettings : public UDeveloperSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 536;

public:
	CMember(TArray<FZoneLaneProfile>)                  LaneProfiles                                                OFFSET(get<T>, {0x30, 16, 0, 0})
	SMember(FZoneGraphTagInfo)                         Tags                                                        OFFSET(getStruct<T>, {0x40, 384, 0, 0})
	SMember(FZoneGraphTagMask)                         VisualizedTags                                              OFFSET(getStruct<T>, {0x1C0, 4, 0, 0})
	DMember(float)                                     ShapeMaxDrawDistance                                        OFFSET(get<float>, {0x1C4, 4, 0, 0})
	SMember(FZoneGraphBuildSettings)                   BuildSettings                                               OFFSET(getStruct<T>, {0x1C8, 72, 0, 0})
	DMember(bool)                                      bBuildZoneGraphWhileEditing                                 OFFSET(get<bool>, {0x210, 1, 0, 0})
};

/// Class /Script/ZoneGraph.ZoneGraphSubsystem
/// Size: 0x0050 (0x000040 - 0x000090)
class UZoneGraphSubsystem : public UTickableWorldSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	CMember(TArray<FRegisteredZoneGraphData>)          RegisteredZoneGraphData                                     OFFSET(get<T>, {0x68, 16, 0, 0})
};

/// Class /Script/ZoneGraph.ZoneShape
/// Size: 0x0008 (0x000290 - 0x000298)
class AZoneShape : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 664;

public:
	CMember(class UZoneShapeComponent*)                ShapeComponent                                              OFFSET(get<T>, {0x290, 8, 0, 0})
};

/// Class /Script/ZoneGraph.ZoneShapeComponent
/// Size: 0x0060 (0x000500 - 0x000560)
class UZoneShapeComponent : public UPrimitiveComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1376;

public:
	SMember(FZoneLaneProfileRef)                       LaneProfile                                                 OFFSET(getStruct<T>, {0x500, 20, 0, 0})
	DMember(bool)                                      bReverseLaneProfile                                         OFFSET(get<bool>, {0x514, 1, 0, 0})
	CMember(TArray<FZoneLaneProfileRef>)               PerPointLaneProfiles                                        OFFSET(get<T>, {0x518, 16, 0, 0})
	CMember(TArray<FZoneShapePoint>)                   Points                                                      OFFSET(get<T>, {0x528, 16, 0, 0})
	SMember(FZoneShapeType)                            ShapeType                                                   OFFSET(getStruct<T>, {0x538, 1, 0, 0})
	CMember(EZoneShapePolygonRoutingType)              PolygonRoutingType                                          OFFSET(get<T>, {0x539, 1, 0, 0})
	SMember(FZoneGraphTagMask)                         Tags                                                        OFFSET(getStruct<T>, {0x53C, 4, 0, 0})
	CMember(TArray<FZoneShapeConnector>)               ShapeConnectors                                             OFFSET(get<T>, {0x540, 16, 0, 0})
	CMember(TArray<FZoneShapeConnection>)              ConnectedShapes                                             OFFSET(get<T>, {0x550, 16, 0, 0})


	/// Functions
	// Function /Script/ZoneGraph.ZoneShapeComponent.SetTags
	// void SetTags(FZoneGraphTagMask NewTags);                                                                                 // [0xaf2a558] Final|Native|Public|BlueprintCallable 
	// Function /Script/ZoneGraph.ZoneShapeComponent.SetShapeType
	// void SetShapeType(FZoneShapeType Type);                                                                                  // [0x659ad28] Final|Native|Public|BlueprintCallable 
	// Function /Script/ZoneGraph.ZoneShapeComponent.SetReverseLaneProfile
	// bool SetReverseLaneProfile(bool bReverse);                                                                               // [0xaf2a488] Final|Native|Public|BlueprintCallable 
	// Function /Script/ZoneGraph.ZoneShapeComponent.SetPolygonRoutingType
	// void SetPolygonRoutingType(EZoneShapePolygonRoutingType NewType);                                                        // [0xaf2a3c8] Final|Native|Public|BlueprintCallable 
	// Function /Script/ZoneGraph.ZoneShapeComponent.IsLaneProfileReversed
	// bool IsLaneProfileReversed();                                                                                            // [0xaf2a3b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ZoneGraph.ZoneShapeComponent.GetTags
	// FZoneGraphTagMask GetTags();                                                                                             // [0xaf2a398] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ZoneGraph.ZoneShapeComponent.GetShapeType
	// FZoneShapeType GetShapeType();                                                                                           // [0x65909f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/ZoneGraph.ZoneGraphBuilderRegisteredComponent
/// Size: 0x0018 (0x000000 - 0x000018)
class FZoneGraphBuilderRegisteredComponent : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(class UZoneShapeComponent*)                Component                                                   OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(uint32_t)                                  ShapeHash                                                   OFFSET(get<uint32_t>, {0x8, 4, 0, 0})
};

/// Struct /Script/ZoneGraph.ZoneShapeComponentBuildData
/// Size: 0x0018 (0x000000 - 0x000018)
class FZoneShapeComponentBuildData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(int32_t)                                   ZoneIndex                                                   OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	CMember(TArray<FZoneGraphLaneHandle>)              Lanes                                                       OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/ZoneGraph.ZoneGraphLaneHandle
/// Size: 0x0008 (0x000000 - 0x000008)
class FZoneGraphLaneHandle : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(int32_t)                                   Index                                                       OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	SMember(FZoneGraphDataHandle)                      DataHandle                                                  OFFSET(getStruct<T>, {0x4, 4, 0, 0})
};

/// Struct /Script/ZoneGraph.ZoneGraphDataHandle
/// Size: 0x0004 (0x000000 - 0x000004)
class FZoneGraphDataHandle : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(uint16_t)                                  Index                                                       OFFSET(get<uint16_t>, {0x0, 2, 0, 0})
	DMember(uint16_t)                                  Generation                                                  OFFSET(get<uint16_t>, {0x2, 2, 0, 0})
};

/// Struct /Script/ZoneGraph.ZoneGraphBuildData
/// Size: 0x0050 (0x000000 - 0x000050)
class FZoneGraphBuildData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TMap<UZoneShapeComponent*, FZoneShapeComponentBuildData>) ZoneShapeComponentBuildData                  OFFSET(get<T>, {0x0, 80, 0, 0})
};

/// Struct /Script/ZoneGraph.ZoneGraphBuilder
/// Size: 0x0198 (0x000000 - 0x000198)
class FZoneGraphBuilder : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 408;

public:
	CMember(TArray<FZoneGraphBuilderRegisteredComponent>) ShapeComponents                                          OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<int32_t>)                           ShapeComponentsFreeList                                     OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TMap<UZoneShapeComponent*, int32_t>)       ShapeComponentToIndex                                       OFFSET(get<T>, {0x20, 80, 0, 0})
	SMember(FZoneGraphBuildData)                       BuildData                                                   OFFSET(getStruct<T>, {0x70, 80, 0, 0})
};

/// Struct /Script/ZoneGraph.ZoneGraphBVNode
/// Size: 0x0010 (0x000000 - 0x000010)
class FZoneGraphBVNode : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(uint16_t)                                  MinX                                                        OFFSET(get<uint16_t>, {0x0, 2, 0, 0})
	DMember(uint16_t)                                  MinY                                                        OFFSET(get<uint16_t>, {0x2, 2, 0, 0})
	DMember(uint16_t)                                  MinZ                                                        OFFSET(get<uint16_t>, {0x4, 2, 0, 0})
	DMember(uint16_t)                                  MaxX                                                        OFFSET(get<uint16_t>, {0x6, 2, 0, 0})
	DMember(uint16_t)                                  MaxY                                                        OFFSET(get<uint16_t>, {0x8, 2, 0, 0})
	DMember(uint16_t)                                  MaxZ                                                        OFFSET(get<uint16_t>, {0xA, 2, 0, 0})
	DMember(int32_t)                                   Index                                                       OFFSET(get<int32_t>, {0xC, 4, 0, 0})
};

/// Struct /Script/ZoneGraph.ZoneGraphBVTree
/// Size: 0x0030 (0x000000 - 0x000030)
class FZoneGraphBVTree : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FVector)                                   Origin                                                      OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	DMember(float)                                     QuantizationScale                                           OFFSET(get<float>, {0x18, 4, 0, 0})
	CMember(TArray<FZoneGraphBVNode>)                  Nodes                                                       OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/ZoneGraph.RegisteredZoneGraphData
/// Size: 0x0010 (0x000000 - 0x000010)
class FRegisteredZoneGraphData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class AZoneGraphData*)                     ZoneGraphData                                               OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/ZoneGraph.ZoneHandle
/// Size: 0x0004 (0x000000 - 0x000004)
class FZoneHandle : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(uint32_t)                                  Index                                                       OFFSET(get<uint32_t>, {0x0, 4, 0, 0})
};

/// Struct /Script/ZoneGraph.ZoneGraphTag
/// Size: 0x0001 (0x000000 - 0x000001)
class FZoneGraphTag : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
	DMember(char)                                      Bit                                                         OFFSET(get<char>, {0x0, 1, 0, 0})
};

/// Struct /Script/ZoneGraph.ZoneGraphTagMask
/// Size: 0x0004 (0x000000 - 0x000004)
class FZoneGraphTagMask : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(uint32_t)                                  Mask                                                        OFFSET(get<uint32_t>, {0x0, 4, 0, 0})
};

/// Struct /Script/ZoneGraph.ZoneGraphTagFilter
/// Size: 0x000C (0x000000 - 0x00000C)
class FZoneGraphTagFilter : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	SMember(FZoneGraphTagMask)                         AnyTags                                                     OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FZoneGraphTagMask)                         AllTags                                                     OFFSET(getStruct<T>, {0x4, 4, 0, 0})
	SMember(FZoneGraphTagMask)                         NotTags                                                     OFFSET(getStruct<T>, {0x8, 4, 0, 0})
};

/// Struct /Script/ZoneGraph.ZoneGraphTagInfo
/// Size: 0x000C (0x000000 - 0x00000C)
class FZoneGraphTagInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FColor)                                    Color                                                       OFFSET(getStruct<T>, {0x4, 4, 0, 0})
	SMember(FZoneGraphTag)                             tag                                                         OFFSET(getStruct<T>, {0x8, 1, 0, 0})
};

/// Struct /Script/ZoneGraph.ZoneLaneDesc
/// Size: 0x000C (0x000000 - 0x00000C)
class FZoneLaneDesc : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(float)                                     Width                                                       OFFSET(get<float>, {0x0, 4, 0, 0})
	CMember(EZoneLaneDirection)                        Direction                                                   OFFSET(get<T>, {0x4, 1, 0, 0})
	SMember(FZoneGraphTagMask)                         Tags                                                        OFFSET(getStruct<T>, {0x8, 4, 0, 0})
};

/// Struct /Script/ZoneGraph.ZoneLaneProfile
/// Size: 0x0028 (0x000000 - 0x000028)
class FZoneLaneProfile : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FGuid)                                     ID                                                          OFFSET(getStruct<T>, {0x4, 16, 0, 0})
	CMember(TArray<FZoneLaneDesc>)                     Lanes                                                       OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/ZoneGraph.ZoneLaneProfileRef
/// Size: 0x0014 (0x000000 - 0x000014)
class FZoneLaneProfileRef : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FGuid)                                     ID                                                          OFFSET(getStruct<T>, {0x4, 16, 0, 0})
};

/// Struct /Script/ZoneGraph.ZoneLaneLinkData
/// Size: 0x0008 (0x000000 - 0x000008)
class FZoneLaneLinkData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(int32_t)                                   DestLaneIndex                                               OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	CMember(EZoneLaneLinkType)                         Type                                                        OFFSET(get<T>, {0x4, 1, 0, 0})
	DMember(char)                                      Flags                                                       OFFSET(get<char>, {0x5, 1, 0, 0})
};

/// Struct /Script/ZoneGraph.ZoneLaneData
/// Size: 0x0020 (0x000000 - 0x000020)
class FZoneLaneData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(float)                                     Width                                                       OFFSET(get<float>, {0x0, 4, 0, 0})
	SMember(FZoneGraphTagMask)                         Tags                                                        OFFSET(getStruct<T>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   PointsBegin                                                 OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   PointsEnd                                                   OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	DMember(int32_t)                                   LinksBegin                                                  OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	DMember(int32_t)                                   LinksEnd                                                    OFFSET(get<int32_t>, {0x14, 4, 0, 0})
	DMember(int32_t)                                   ZoneIndex                                                   OFFSET(get<int32_t>, {0x18, 4, 0, 0})
	DMember(uint16_t)                                  StartEntryId                                                OFFSET(get<uint16_t>, {0x1C, 2, 0, 0})
	DMember(uint16_t)                                  EndEntryId                                                  OFFSET(get<uint16_t>, {0x1E, 2, 0, 0})
};

/// Struct /Script/ZoneGraph.ZoneData
/// Size: 0x0050 (0x000000 - 0x000050)
class FZoneData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	DMember(int32_t)                                   BoundaryPointsBegin                                         OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   BoundaryPointsEnd                                           OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   LanesBegin                                                  OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   LanesEnd                                                    OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	SMember(FBox)                                      Bounds                                                      OFFSET(getStruct<T>, {0x10, 56, 0, 0})
	SMember(FZoneGraphTagMask)                         Tags                                                        OFFSET(getStruct<T>, {0x48, 4, 0, 0})
};

/// Struct /Script/ZoneGraph.ZoneGraphLaneLocation
/// Size: 0x0070 (0x000000 - 0x000070)
class FZoneGraphLaneLocation : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FVector)                                   Position                                                    OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FVector)                                   Direction                                                   OFFSET(getStruct<T>, {0x18, 24, 0, 0})
	SMember(FVector)                                   Tangent                                                     OFFSET(getStruct<T>, {0x30, 24, 0, 0})
	SMember(FVector)                                   Up                                                          OFFSET(getStruct<T>, {0x48, 24, 0, 0})
	SMember(FZoneGraphLaneHandle)                      LaneHandle                                                  OFFSET(getStruct<T>, {0x60, 8, 0, 0})
	DMember(int32_t)                                   LaneSegment                                                 OFFSET(get<int32_t>, {0x68, 4, 0, 0})
	DMember(float)                                     DistanceAlongLane                                           OFFSET(get<float>, {0x6C, 4, 0, 0})
};

/// Struct /Script/ZoneGraph.ZoneGraphCompactLaneLocation
/// Size: 0x000C (0x000000 - 0x00000C)
class FZoneGraphCompactLaneLocation : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	SMember(FZoneGraphLaneHandle)                      LaneHandle                                                  OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	DMember(float)                                     DistanceAlongLane                                           OFFSET(get<float>, {0x8, 4, 0, 0})
};

/// Struct /Script/ZoneGraph.ZoneGraphLaneSection
/// Size: 0x0010 (0x000000 - 0x000010)
class FZoneGraphLaneSection : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FZoneGraphLaneHandle)                      LaneHandle                                                  OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	DMember(float)                                     StartDistanceAlongLane                                      OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     EndDistanceAlongLane                                        OFFSET(get<float>, {0xC, 4, 0, 0})
};

/// Struct /Script/ZoneGraph.ZoneGraphLinkedLane
/// Size: 0x000C (0x000000 - 0x00000C)
class FZoneGraphLinkedLane : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	SMember(FZoneGraphLaneHandle)                      DestLane                                                    OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	CMember(EZoneLaneLinkType)                         Type                                                        OFFSET(get<T>, {0x8, 1, 0, 0})
	DMember(char)                                      Flags                                                       OFFSET(get<char>, {0x9, 1, 0, 0})
};

/// Struct /Script/ZoneGraph.ZoneGraphStorage
/// Size: 0x00F0 (0x000000 - 0x0000F0)
class FZoneGraphStorage : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	CMember(TArray<FZoneData>)                         Zones                                                       OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FZoneLaneData>)                     Lanes                                                       OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<FVector>)                           BoundaryPoints                                              OFFSET(get<T>, {0x20, 16, 0, 0})
	CMember(TArray<FVector>)                           LanePoints                                                  OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TArray<FVector>)                           LaneUpVectors                                               OFFSET(get<T>, {0x40, 16, 0, 0})
	CMember(TArray<FVector>)                           LaneTangentVectors                                          OFFSET(get<T>, {0x50, 16, 0, 0})
	CMember(TArray<float>)                             LanePointProgressions                                       OFFSET(get<T>, {0x60, 16, 0, 0})
	CMember(TArray<FZoneLaneLinkData>)                 LaneLinks                                                   OFFSET(get<T>, {0x70, 16, 0, 0})
	SMember(FBox)                                      Bounds                                                      OFFSET(getStruct<T>, {0x80, 56, 0, 0})
	SMember(FZoneGraphBVTree)                          ZoneBVTree                                                  OFFSET(getStruct<T>, {0xB8, 48, 0, 0})
};

/// Struct /Script/ZoneGraph.ZoneShapePoint
/// Size: 0x0070 (0x000000 - 0x000070)
class FZoneShapePoint : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FVector)                                   Position                                                    OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FVector)                                   InControlPoint                                              OFFSET(getStruct<T>, {0x18, 24, 0, 0})
	SMember(FVector)                                   OutControlPoint                                             OFFSET(getStruct<T>, {0x30, 24, 0, 0})
	DMember(float)                                     TangentLength                                               OFFSET(get<float>, {0x48, 4, 0, 0})
	DMember(float)                                     InnerTurnRadius                                             OFFSET(get<float>, {0x4C, 4, 0, 0})
	SMember(FRotator)                                  Rotation                                                    OFFSET(getStruct<T>, {0x50, 24, 0, 0})
	SMember(FZoneShapePointType)                       Type                                                        OFFSET(getStruct<T>, {0x68, 1, 0, 0})
	DMember(char)                                      LaneProfile                                                 OFFSET(get<char>, {0x69, 1, 0, 0})
	DMember(bool)                                      bReverseLaneProfile                                         OFFSET(get<bool>, {0x6A, 1, 0, 0})
	DMember(int32_t)                                   LaneConnectionRestrictions                                  OFFSET(get<int32_t>, {0x6C, 4, 0, 0})
};

/// Struct /Script/ZoneGraph.ZoneShapeConnector
/// Size: 0x0068 (0x000000 - 0x000068)
class FZoneShapeConnector : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FVector)                                   Position                                                    OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FVector)                                   Normal                                                      OFFSET(getStruct<T>, {0x18, 24, 0, 0})
	SMember(FVector)                                   Up                                                          OFFSET(getStruct<T>, {0x30, 24, 0, 0})
	DMember(int32_t)                                   PointIndex                                                  OFFSET(get<int32_t>, {0x48, 4, 0, 0})
	SMember(FZoneLaneProfileRef)                       LaneProfile                                                 OFFSET(getStruct<T>, {0x4C, 20, 0, 0})
	DMember(bool)                                      bReverseLaneProfile                                         OFFSET(get<bool>, {0x60, 1, 0, 0})
	SMember(FZoneShapeType)                            ShapeType                                                   OFFSET(getStruct<T>, {0x61, 1, 0, 0})
};

/// Struct /Script/ZoneGraph.ZoneShapeConnection
/// Size: 0x000C (0x000000 - 0x00000C)
class FZoneShapeConnection : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	CMember(TWeakObjectPtr<UZoneShapeComponent*>)      ShapeComponent                                              OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(int32_t)                                   ConnectorIndex                                              OFFSET(get<int32_t>, {0x8, 4, 0, 0})
};

/// Struct /Script/ZoneGraph.ZoneGraphTessellationSettings
/// Size: 0x0010 (0x000000 - 0x000010)
class FZoneGraphTessellationSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FZoneGraphTagFilter)                       LaneFilter                                                  OFFSET(getStruct<T>, {0x0, 12, 0, 0})
	DMember(float)                                     TessellationTolerance                                       OFFSET(get<float>, {0xC, 4, 0, 0})
};

/// Struct /Script/ZoneGraph.ZoneGraphLaneRoutingRule
/// Size: 0x0058 (0x000000 - 0x000058)
class FZoneGraphLaneRoutingRule : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x0, 1, 0, 0})
	SMember(FString)                                   Comment                                                     OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	SMember(FZoneGraphTagFilter)                       ZoneTagFilter                                               OFFSET(getStruct<T>, {0x18, 12, 0, 0})
	SMember(FZoneLaneProfileRef)                       SourceLaneProfile                                           OFFSET(getStruct<T>, {0x24, 20, 0, 0})
	SMember(FZoneLaneProfileRef)                       DestinationLaneProfile                                      OFFSET(getStruct<T>, {0x38, 20, 0, 0})
	CMember(EZoneGraphLaneRoutingCountRule)            SourceOutgoingConnections                                   OFFSET(get<T>, {0x4C, 1, 0, 0})
	CMember(EZoneGraphLaneRoutingCountRule)            DestinationIncomingConnections                              OFFSET(get<T>, {0x4D, 1, 0, 0})
	DMember(int32_t)                                   ConnectionRestrictions                                      OFFSET(get<int32_t>, {0x50, 4, 0, 0})
};

/// Struct /Script/ZoneGraph.ZoneGraphBuildSettings
/// Size: 0x0048 (0x000000 - 0x000048)
class FZoneGraphBuildSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	DMember(float)                                     CommonTessellationTolerance                                 OFFSET(get<float>, {0x0, 4, 0, 0})
	CMember(TArray<FZoneGraphTessellationSettings>)    SpecificTessellationTolerances                              OFFSET(get<T>, {0x8, 16, 0, 0})
	DMember(float)                                     LaneConnectionAngle                                         OFFSET(get<float>, {0x18, 4, 0, 0})
	SMember(FZoneGraphTagMask)                         LaneConnectionMask                                          OFFSET(getStruct<T>, {0x1C, 4, 0, 0})
	DMember(float)                                     TurnThresholdAngle                                          OFFSET(get<float>, {0x20, 4, 0, 0})
	CMember(TArray<FZoneGraphLaneRoutingRule>)         PolygonRoutingRules                                         OFFSET(get<T>, {0x28, 16, 0, 0})
	DMember(float)                                     ConnectionSnapDistance                                      OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(float)                                     ConnectionSnapAngle                                         OFFSET(get<float>, {0x3C, 4, 0, 0})
	DMember(float)                                     DragEndpointAutoConnectRange                                OFFSET(get<float>, {0x40, 4, 0, 0})
};

/// Struct /Script/ZoneGraph.ZoneShapeLaneInternalLink
/// Size: 0x000C (0x000000 - 0x00000C)
class FZoneShapeLaneInternalLink : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(int32_t)                                   LaneIndex                                                   OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	SMember(FZoneLaneLinkData)                         LinkData                                                    OFFSET(getStruct<T>, {0x4, 8, 0, 0})
};

/// Enum /Script/ZoneGraph.EZoneGraphTags
/// Size: 0x03
enum class EZoneGraphTags : uint8_t
{
	EZoneGraphTags__MaxTags                                                          = 32,
	EZoneGraphTags__MaxTagIndex                                                      = 31,
	EZoneGraphTags__EZoneGraphTags_MAX                                               = 33
};

/// Enum /Script/ZoneGraph.EZoneLaneTagMaskComparison
/// Size: 0x04
enum class EZoneLaneTagMaskComparison : uint8_t
{
	EZoneLaneTagMaskComparison__Any                                                  = 0,
	EZoneLaneTagMaskComparison__All                                                  = 1,
	EZoneLaneTagMaskComparison__Not                                                  = 2,
	EZoneLaneTagMaskComparison__EZoneLaneTagMaskComparison_MAX                       = 3
};

/// Enum /Script/ZoneGraph.EZoneLaneDirection
/// Size: 0x04
enum class EZoneLaneDirection : uint8_t
{
	EZoneLaneDirection__None                                                         = 0,
	EZoneLaneDirection__Forward                                                      = 1,
	EZoneLaneDirection__Backward                                                     = 2,
	EZoneLaneDirection__EZoneLaneDirection_MAX                                       = 3
};

/// Enum /Script/ZoneGraph.EZoneLaneLinkType
/// Size: 0x06
enum class EZoneLaneLinkType : uint8_t
{
	EZoneLaneLinkType__None                                                          = 0,
	EZoneLaneLinkType__All                                                           = 255,
	EZoneLaneLinkType__Outgoing                                                      = 1,
	EZoneLaneLinkType__Incoming                                                      = 2,
	EZoneLaneLinkType__Adjacent                                                      = 4,
	EZoneLaneLinkType__EZoneLaneLinkType_MAX                                         = 256
};

/// Enum /Script/ZoneGraph.EZoneLaneLinkFlags
/// Size: 0x08
enum class EZoneLaneLinkFlags : uint8_t
{
	EZoneLaneLinkFlags__None                                                         = 0,
	EZoneLaneLinkFlags__All                                                          = 255,
	EZoneLaneLinkFlags__Left                                                         = 1,
	EZoneLaneLinkFlags__Right                                                        = 2,
	EZoneLaneLinkFlags__Splitting                                                    = 4,
	EZoneLaneLinkFlags__Merging                                                      = 8,
	EZoneLaneLinkFlags__OppositeDirection                                            = 16,
	EZoneLaneLinkFlags__EZoneLaneLinkFlags_MAX                                       = 256
};

/// Enum /Script/ZoneGraph.FZoneShapeType
/// Size: 0x03
enum class FZoneShapeType : uint8_t
{
	FZoneShapeType__Spline                                                           = 0,
	FZoneShapeType__Polygon                                                          = 1,
	FZoneShapeType__FZoneShapeType_MAX                                               = 2
};

/// Enum /Script/ZoneGraph.EZoneShapePolygonRoutingType
/// Size: 0x03
enum class EZoneShapePolygonRoutingType : uint8_t
{
	EZoneShapePolygonRoutingType__Bezier                                             = 0,
	EZoneShapePolygonRoutingType__Arcs                                               = 1,
	EZoneShapePolygonRoutingType__EZoneShapePolygonRoutingType_MAX                   = 2
};

/// Enum /Script/ZoneGraph.EZoneShapeLaneConnectionRestrictions
/// Size: 0x06
enum class EZoneShapeLaneConnectionRestrictions : uint8_t
{
	EZoneShapeLaneConnectionRestrictions__None                                       = 0,
	EZoneShapeLaneConnectionRestrictions__NoLeftTurn                                 = 1,
	EZoneShapeLaneConnectionRestrictions__NoRightTurn                                = 2,
	EZoneShapeLaneConnectionRestrictions__OneLanePerDestination                      = 4,
	EZoneShapeLaneConnectionRestrictions__MergeLanesToOneDestinationLane             = 8,
	EZoneShapeLaneConnectionRestrictions__EZoneShapeLaneConnectionRestrictions_MAX   = 9
};

/// Enum /Script/ZoneGraph.FZoneShapePointType
/// Size: 0x05
enum class FZoneShapePointType : uint8_t
{
	FZoneShapePointType__Sharp                                                       = 0,
	FZoneShapePointType__Bezier                                                      = 1,
	FZoneShapePointType__AutoBezier                                                  = 2,
	FZoneShapePointType__LaneProfile                                                 = 3,
	FZoneShapePointType__FZoneShapePointType_MAX                                     = 4
};

/// Enum /Script/ZoneGraph.EZoneGraphLaneRoutingCountRule
/// Size: 0x04
enum class EZoneGraphLaneRoutingCountRule : uint8_t
{
	EZoneGraphLaneRoutingCountRule__Any                                              = 0,
	EZoneGraphLaneRoutingCountRule__One                                              = 1,
	EZoneGraphLaneRoutingCountRule__Many                                             = 2,
	EZoneGraphLaneRoutingCountRule__EZoneGraphLaneRoutingCountRule_MAX               = 3
};

