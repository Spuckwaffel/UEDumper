
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine

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

/// Struct /Script/ZoneGraph.ZoneGraphTagMask
/// Size: 0x0004 (0x000000 - 0x000004)
struct FZoneGraphTagMask
{ 
	uint32_t                                           Mask;                                                       // 0x0000   (0x0004)  
};

/// Struct /Script/ZoneGraph.ZoneData
/// Size: 0x0050 (0x000000 - 0x000050)
struct FZoneData
{ 
	int32_t                                            BoundaryPointsBegin;                                        // 0x0000   (0x0004)  
	int32_t                                            BoundaryPointsEnd;                                          // 0x0004   (0x0004)  
	int32_t                                            LanesBegin;                                                 // 0x0008   (0x0004)  
	int32_t                                            LanesEnd;                                                   // 0x000C   (0x0004)  
	FBox                                               Bounds;                                                     // 0x0010   (0x0038)  
	FZoneGraphTagMask                                  Tags;                                                       // 0x0048   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x004C   (0x0004)  MISSED
};

/// Struct /Script/ZoneGraph.ZoneLaneData
/// Size: 0x0020 (0x000000 - 0x000020)
struct FZoneLaneData
{ 
	float                                              Width;                                                      // 0x0000   (0x0004)  
	FZoneGraphTagMask                                  Tags;                                                       // 0x0004   (0x0004)  
	int32_t                                            PointsBegin;                                                // 0x0008   (0x0004)  
	int32_t                                            PointsEnd;                                                  // 0x000C   (0x0004)  
	int32_t                                            LinksBegin;                                                 // 0x0010   (0x0004)  
	int32_t                                            LinksEnd;                                                   // 0x0014   (0x0004)  
	int32_t                                            ZoneIndex;                                                  // 0x0018   (0x0004)  
	uint16_t                                           StartEntryId;                                               // 0x001C   (0x0002)  
	uint16_t                                           EndEntryId;                                                 // 0x001E   (0x0002)  
};

/// Struct /Script/ZoneGraph.ZoneLaneLinkData
/// Size: 0x0008 (0x000000 - 0x000008)
struct FZoneLaneLinkData
{ 
	int32_t                                            DestLaneIndex;                                              // 0x0000   (0x0004)  
	EZoneLaneLinkType                                  Type;                                                       // 0x0004   (0x0001)  
	char                                               Flags;                                                      // 0x0005   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0006   (0x0002)  MISSED
};

/// Struct /Script/ZoneGraph.ZoneGraphBVNode
/// Size: 0x0010 (0x000000 - 0x000010)
struct FZoneGraphBVNode
{ 
	uint16_t                                           MinX;                                                       // 0x0000   (0x0002)  
	uint16_t                                           MinY;                                                       // 0x0002   (0x0002)  
	uint16_t                                           MinZ;                                                       // 0x0004   (0x0002)  
	uint16_t                                           MaxX;                                                       // 0x0006   (0x0002)  
	uint16_t                                           MaxY;                                                       // 0x0008   (0x0002)  
	uint16_t                                           MaxZ;                                                       // 0x000A   (0x0002)  
	int32_t                                            Index;                                                      // 0x000C   (0x0004)  
};

/// Struct /Script/ZoneGraph.ZoneGraphBVTree
/// Size: 0x0030 (0x000000 - 0x000030)
struct FZoneGraphBVTree
{ 
	FVector                                            Origin;                                                     // 0x0000   (0x0018)  
	float                                              QuantizationScale;                                          // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x001C   (0x0004)  MISSED
	TArray<FZoneGraphBVNode>                           Nodes;                                                      // 0x0020   (0x0010)  
};

/// Struct /Script/ZoneGraph.ZoneGraphStorage
/// Size: 0x00F0 (0x000000 - 0x0000F0)
struct FZoneGraphStorage
{ 
	TArray<FZoneData>                                  Zones;                                                      // 0x0000   (0x0010)  
	TArray<FZoneLaneData>                              Lanes;                                                      // 0x0010   (0x0010)  
	TArray<FVector>                                    BoundaryPoints;                                             // 0x0020   (0x0010)  
	TArray<FVector>                                    LanePoints;                                                 // 0x0030   (0x0010)  
	TArray<FVector>                                    LaneUpVectors;                                              // 0x0040   (0x0010)  
	TArray<FVector>                                    LaneTangentVectors;                                         // 0x0050   (0x0010)  
	TArray<float>                                      LanePointProgressions;                                      // 0x0060   (0x0010)  
	TArray<FZoneLaneLinkData>                          LaneLinks;                                                  // 0x0070   (0x0010)  
	FBox                                               Bounds;                                                     // 0x0080   (0x0038)  
	FZoneGraphBVTree                                   ZoneBVTree;                                                 // 0x00B8   (0x0030)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x00E8   (0x0008)  MISSED
};

/// Class /Script/ZoneGraph.ZoneGraphData
/// Size: 0x0130 (0x000290 - 0x0003C0)
class AZoneGraphData : public AActor
{ 
public:
	unsigned char                                      UnknownData00_3[0x1];                                       // 0x0290   (0x0001)  MISSED
	bool                                               bEnableDrawing;                                             // 0x0291   (0x0001)  
	unsigned char                                      UnknownData01_5[0x6];                                       // 0x0292   (0x0006)  MISSED
	class UZoneGraphRenderingComponent*                RenderingComp;                                              // 0x0298   (0x0008)  
	FZoneGraphStorage                                  ZoneStorage;                                                // 0x02A0   (0x00F0)  
	unsigned char                                      UnknownData02_5[0x28];                                      // 0x0390   (0x0028)  MISSED
	uint32_t                                           CombinedShapeHash;                                          // 0x03B8   (0x0004)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x03BC   (0x0004)  MISSED
};

/// Class /Script/ZoneGraph.ZoneGraphRenderingComponent
/// Size: 0x0010 (0x000500 - 0x000510)
class UZoneGraphRenderingComponent : public UPrimitiveComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0500   (0x0010)  MISSED
};

/// Struct /Script/ZoneGraph.ZoneLaneDesc
/// Size: 0x000C (0x000000 - 0x00000C)
struct FZoneLaneDesc
{ 
	float                                              Width;                                                      // 0x0000   (0x0004)  
	EZoneLaneDirection                                 Direction;                                                  // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0005   (0x0003)  MISSED
	FZoneGraphTagMask                                  Tags;                                                       // 0x0008   (0x0004)  
};

/// Struct /Script/ZoneGraph.ZoneLaneProfile
/// Size: 0x0028 (0x000000 - 0x000028)
struct FZoneLaneProfile
{ 
	FName                                              Name;                                                       // 0x0000   (0x0004)  
	FGuid                                              ID;                                                         // 0x0004   (0x0010)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0014   (0x0004)  MISSED
	TArray<FZoneLaneDesc>                              Lanes;                                                      // 0x0018   (0x0010)  
};

/// Struct /Script/ZoneGraph.ZoneGraphTag
/// Size: 0x0001 (0x000000 - 0x000001)
struct FZoneGraphTag
{ 
	char                                               Bit;                                                        // 0x0000   (0x0001)  
};

/// Struct /Script/ZoneGraph.ZoneGraphTagInfo
/// Size: 0x000C (0x000000 - 0x00000C)
struct FZoneGraphTagInfo
{ 
	FName                                              Name;                                                       // 0x0000   (0x0004)  
	FColor                                             Color;                                                      // 0x0004   (0x0004)  
	FZoneGraphTag                                      tag;                                                        // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0009   (0x0003)  MISSED
};

/// Struct /Script/ZoneGraph.ZoneGraphTagFilter
/// Size: 0x000C (0x000000 - 0x00000C)
struct FZoneGraphTagFilter
{ 
	FZoneGraphTagMask                                  AnyTags;                                                    // 0x0000   (0x0004)  
	FZoneGraphTagMask                                  AllTags;                                                    // 0x0004   (0x0004)  
	FZoneGraphTagMask                                  NotTags;                                                    // 0x0008   (0x0004)  
};

/// Struct /Script/ZoneGraph.ZoneGraphTessellationSettings
/// Size: 0x0010 (0x000000 - 0x000010)
struct FZoneGraphTessellationSettings
{ 
	FZoneGraphTagFilter                                LaneFilter;                                                 // 0x0000   (0x000C)  
	float                                              TessellationTolerance;                                      // 0x000C   (0x0004)  
};

/// Struct /Script/ZoneGraph.ZoneLaneProfileRef
/// Size: 0x0014 (0x000000 - 0x000014)
struct FZoneLaneProfileRef
{ 
	FName                                              Name;                                                       // 0x0000   (0x0004)  
	FGuid                                              ID;                                                         // 0x0004   (0x0010)  
};

/// Struct /Script/ZoneGraph.ZoneGraphLaneRoutingRule
/// Size: 0x0058 (0x000000 - 0x000058)
struct FZoneGraphLaneRoutingRule
{ 
	bool                                               bEnabled;                                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	SDK_UNDEFINED(16,14510) /* FString */              __um(Comment);                                              // 0x0008   (0x0010)  
	FZoneGraphTagFilter                                ZoneTagFilter;                                              // 0x0018   (0x000C)  
	FZoneLaneProfileRef                                SourceLaneProfile;                                          // 0x0024   (0x0014)  
	FZoneLaneProfileRef                                DestinationLaneProfile;                                     // 0x0038   (0x0014)  
	EZoneGraphLaneRoutingCountRule                     SourceOutgoingConnections;                                  // 0x004C   (0x0001)  
	EZoneGraphLaneRoutingCountRule                     DestinationIncomingConnections;                             // 0x004D   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x004E   (0x0002)  MISSED
	int32_t                                            ConnectionRestrictions;                                     // 0x0050   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0054   (0x0004)  MISSED
};

/// Struct /Script/ZoneGraph.ZoneGraphBuildSettings
/// Size: 0x0048 (0x000000 - 0x000048)
struct FZoneGraphBuildSettings
{ 
	float                                              CommonTessellationTolerance;                                // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	TArray<FZoneGraphTessellationSettings>             SpecificTessellationTolerances;                             // 0x0008   (0x0010)  
	float                                              LaneConnectionAngle;                                        // 0x0018   (0x0004)  
	FZoneGraphTagMask                                  LaneConnectionMask;                                         // 0x001C   (0x0004)  
	float                                              TurnThresholdAngle;                                         // 0x0020   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0024   (0x0004)  MISSED
	TArray<FZoneGraphLaneRoutingRule>                  PolygonRoutingRules;                                        // 0x0028   (0x0010)  
	float                                              ConnectionSnapDistance;                                     // 0x0038   (0x0004)  
	float                                              ConnectionSnapAngle;                                        // 0x003C   (0x0004)  
	float                                              DragEndpointAutoConnectRange;                               // 0x0040   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0044   (0x0004)  MISSED
};

/// Class /Script/ZoneGraph.ZoneGraphSettings
/// Size: 0x01E8 (0x000030 - 0x000218)
class UZoneGraphSettings : public UDeveloperSettings
{ 
public:
	TArray<FZoneLaneProfile>                           LaneProfiles;                                               // 0x0030   (0x0010)  
	FZoneGraphTagInfo                                  Tags;                                                       // 0x0040   (0x0180)  
	FZoneGraphTagMask                                  VisualizedTags;                                             // 0x01C0   (0x0004)  
	float                                              ShapeMaxDrawDistance;                                       // 0x01C4   (0x0004)  
	FZoneGraphBuildSettings                            BuildSettings;                                              // 0x01C8   (0x0048)  
	bool                                               bBuildZoneGraphWhileEditing;                                // 0x0210   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0211   (0x0007)  MISSED
};

/// Struct /Script/ZoneGraph.RegisteredZoneGraphData
/// Size: 0x0010 (0x000000 - 0x000010)
struct FRegisteredZoneGraphData
{ 
	class AZoneGraphData*                              ZoneGraphData;                                              // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0008   (0x0008)  MISSED
};

/// Class /Script/ZoneGraph.ZoneGraphSubsystem
/// Size: 0x0050 (0x000040 - 0x000090)
class UZoneGraphSubsystem : public UTickableWorldSubsystem
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0040   (0x0028)  MISSED
	TArray<FRegisteredZoneGraphData>                   RegisteredZoneGraphData;                                    // 0x0068   (0x0010)  
	unsigned char                                      UnknownData01_6[0x18];                                      // 0x0078   (0x0018)  MISSED
};

/// Class /Script/ZoneGraph.ZoneShape
/// Size: 0x0008 (0x000290 - 0x000298)
class AZoneShape : public AActor
{ 
public:
	class UZoneShapeComponent*                         ShapeComponent;                                             // 0x0290   (0x0008)  
};

/// Struct /Script/ZoneGraph.ZoneShapePoint
/// Size: 0x0070 (0x000000 - 0x000070)
struct FZoneShapePoint
{ 
	FVector                                            Position;                                                   // 0x0000   (0x0018)  
	FVector                                            InControlPoint;                                             // 0x0018   (0x0018)  
	FVector                                            OutControlPoint;                                            // 0x0030   (0x0018)  
	float                                              TangentLength;                                              // 0x0048   (0x0004)  
	float                                              InnerTurnRadius;                                            // 0x004C   (0x0004)  
	FRotator                                           Rotation;                                                   // 0x0050   (0x0018)  
	FZoneShapePointType                                Type;                                                       // 0x0068   (0x0001)  
	char                                               LaneProfile;                                                // 0x0069   (0x0001)  
	bool                                               bReverseLaneProfile;                                        // 0x006A   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x006B   (0x0001)  MISSED
	int32_t                                            LaneConnectionRestrictions;                                 // 0x006C   (0x0004)  
};

/// Struct /Script/ZoneGraph.ZoneShapeConnector
/// Size: 0x0068 (0x000000 - 0x000068)
struct FZoneShapeConnector
{ 
	FVector                                            Position;                                                   // 0x0000   (0x0018)  
	FVector                                            Normal;                                                     // 0x0018   (0x0018)  
	FVector                                            Up;                                                         // 0x0030   (0x0018)  
	int32_t                                            PointIndex;                                                 // 0x0048   (0x0004)  
	FZoneLaneProfileRef                                LaneProfile;                                                // 0x004C   (0x0014)  
	bool                                               bReverseLaneProfile;                                        // 0x0060   (0x0001)  
	FZoneShapeType                                     ShapeType;                                                  // 0x0061   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x0062   (0x0006)  MISSED
};

/// Struct /Script/ZoneGraph.ZoneShapeConnection
/// Size: 0x000C (0x000000 - 0x00000C)
struct FZoneShapeConnection
{ 
	SDK_UNDEFINED(8,14511) /* TWeakObjectPtr<UZoneShapeComponent*> */ __um(ShapeComponent);                        // 0x0000   (0x0008)  
	int32_t                                            ConnectorIndex;                                             // 0x0008   (0x0004)  
};

/// Class /Script/ZoneGraph.ZoneShapeComponent
/// Size: 0x0060 (0x000500 - 0x000560)
class UZoneShapeComponent : public UPrimitiveComponent
{ 
public:
	FZoneLaneProfileRef                                LaneProfile;                                                // 0x0500   (0x0014)  
	bool                                               bReverseLaneProfile;                                        // 0x0514   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0515   (0x0003)  MISSED
	TArray<FZoneLaneProfileRef>                        PerPointLaneProfiles;                                       // 0x0518   (0x0010)  
	TArray<FZoneShapePoint>                            Points;                                                     // 0x0528   (0x0010)  
	FZoneShapeType                                     ShapeType;                                                  // 0x0538   (0x0001)  
	EZoneShapePolygonRoutingType                       PolygonRoutingType;                                         // 0x0539   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x053A   (0x0002)  MISSED
	FZoneGraphTagMask                                  Tags;                                                       // 0x053C   (0x0004)  
	TArray<FZoneShapeConnector>                        ShapeConnectors;                                            // 0x0540   (0x0010)  
	TArray<FZoneShapeConnection>                       ConnectedShapes;                                            // 0x0550   (0x0010)  


	/// Functions
	// Function /Script/ZoneGraph.ZoneShapeComponent.SetTags
	// void SetTags(FZoneGraphTagMask NewTags);                                                                              // [0xa0e94c8] Final|Native|Public|BlueprintCallable 
	// Function /Script/ZoneGraph.ZoneShapeComponent.SetShapeType
	// void SetShapeType(FZoneShapeType Type);                                                                               // [0x6668fd4] Final|Native|Public|BlueprintCallable 
	// Function /Script/ZoneGraph.ZoneShapeComponent.SetReverseLaneProfile
	// bool SetReverseLaneProfile(bool bReverse);                                                                            // [0xa0e943c] Final|Native|Public|BlueprintCallable 
	// Function /Script/ZoneGraph.ZoneShapeComponent.SetPolygonRoutingType
	// void SetPolygonRoutingType(EZoneShapePolygonRoutingType NewType);                                                     // [0xa0e93c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ZoneGraph.ZoneShapeComponent.IsLaneProfileReversed
	// bool IsLaneProfileReversed();                                                                                         // [0xa0e93a8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ZoneGraph.ZoneShapeComponent.GetTags
	// FZoneGraphTagMask GetTags();                                                                                          // [0xa0e9390] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ZoneGraph.ZoneShapeComponent.GetShapeType
	// FZoneShapeType GetShapeType();                                                                                        // [0x6661da0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/ZoneGraph.ZoneGraphBuilderRegisteredComponent
/// Size: 0x0018 (0x000000 - 0x000018)
struct FZoneGraphBuilderRegisteredComponent
{ 
	class UZoneShapeComponent*                         Component;                                                  // 0x0000   (0x0008)  
	uint32_t                                           ShapeHash;                                                  // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x000C   (0x000C)  MISSED
};

/// Struct /Script/ZoneGraph.ZoneGraphDataHandle
/// Size: 0x0004 (0x000000 - 0x000004)
struct FZoneGraphDataHandle
{ 
	uint16_t                                           Index;                                                      // 0x0000   (0x0002)  
	uint16_t                                           Generation;                                                 // 0x0002   (0x0002)  
};

/// Struct /Script/ZoneGraph.ZoneGraphLaneHandle
/// Size: 0x0008 (0x000000 - 0x000008)
struct FZoneGraphLaneHandle
{ 
	int32_t                                            Index;                                                      // 0x0000   (0x0004)  
	FZoneGraphDataHandle                               DataHandle;                                                 // 0x0004   (0x0004)  
};

/// Struct /Script/ZoneGraph.ZoneShapeComponentBuildData
/// Size: 0x0018 (0x000000 - 0x000018)
struct FZoneShapeComponentBuildData
{ 
	int32_t                                            ZoneIndex;                                                  // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	TArray<FZoneGraphLaneHandle>                       Lanes;                                                      // 0x0008   (0x0010)  
};

/// Struct /Script/ZoneGraph.ZoneGraphBuildData
/// Size: 0x0050 (0x000000 - 0x000050)
struct FZoneGraphBuildData
{ 
	SDK_UNDEFINED(80,14512) /* TMap<UZoneShapeComponent*, FZoneShapeComponentBuildData> */ __um(ZoneShapeComponentBuildData); // 0x0000   (0x0050)  
};

/// Struct /Script/ZoneGraph.ZoneGraphBuilder
/// Size: 0x0198 (0x000000 - 0x000198)
struct FZoneGraphBuilder
{ 
	TArray<FZoneGraphBuilderRegisteredComponent>       ShapeComponents;                                            // 0x0000   (0x0010)  
	TArray<int32_t>                                    ShapeComponentsFreeList;                                    // 0x0010   (0x0010)  
	SDK_UNDEFINED(80,14513) /* TMap<UZoneShapeComponent*, int32_t> */ __um(ShapeComponentToIndex);                 // 0x0020   (0x0050)  
	FZoneGraphBuildData                                BuildData;                                                  // 0x0070   (0x0050)  
	unsigned char                                      UnknownData00_6[0xD8];                                      // 0x00C0   (0x00D8)  MISSED
};

/// Struct /Script/ZoneGraph.ZoneHandle
/// Size: 0x0004 (0x000000 - 0x000004)
struct FZoneHandle
{ 
	uint32_t                                           Index;                                                      // 0x0000   (0x0004)  
};

/// Struct /Script/ZoneGraph.ZoneGraphLaneLocation
/// Size: 0x0070 (0x000000 - 0x000070)
struct FZoneGraphLaneLocation
{ 
	FVector                                            Position;                                                   // 0x0000   (0x0018)  
	FVector                                            Direction;                                                  // 0x0018   (0x0018)  
	FVector                                            Tangent;                                                    // 0x0030   (0x0018)  
	FVector                                            Up;                                                         // 0x0048   (0x0018)  
	FZoneGraphLaneHandle                               LaneHandle;                                                 // 0x0060   (0x0008)  
	int32_t                                            LaneSegment;                                                // 0x0068   (0x0004)  
	float                                              DistanceAlongLane;                                          // 0x006C   (0x0004)  
};

/// Struct /Script/ZoneGraph.ZoneGraphCompactLaneLocation
/// Size: 0x000C (0x000000 - 0x00000C)
struct FZoneGraphCompactLaneLocation
{ 
	FZoneGraphLaneHandle                               LaneHandle;                                                 // 0x0000   (0x0008)  
	float                                              DistanceAlongLane;                                          // 0x0008   (0x0004)  
};

/// Struct /Script/ZoneGraph.ZoneGraphLaneSection
/// Size: 0x0010 (0x000000 - 0x000010)
struct FZoneGraphLaneSection
{ 
	FZoneGraphLaneHandle                               LaneHandle;                                                 // 0x0000   (0x0008)  
	float                                              StartDistanceAlongLane;                                     // 0x0008   (0x0004)  
	float                                              EndDistanceAlongLane;                                       // 0x000C   (0x0004)  
};

/// Struct /Script/ZoneGraph.ZoneGraphLinkedLane
/// Size: 0x000C (0x000000 - 0x00000C)
struct FZoneGraphLinkedLane
{ 
	FZoneGraphLaneHandle                               DestLane;                                                   // 0x0000   (0x0008)  
	EZoneLaneLinkType                                  Type;                                                       // 0x0008   (0x0001)  
	char                                               Flags;                                                      // 0x0009   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x000A   (0x0002)  MISSED
};

/// Struct /Script/ZoneGraph.ZoneShapeLaneInternalLink
/// Size: 0x000C (0x000000 - 0x00000C)
struct FZoneShapeLaneInternalLink
{ 
	int32_t                                            LaneIndex;                                                  // 0x0000   (0x0004)  
	FZoneLaneLinkData                                  LinkData;                                                   // 0x0004   (0x0008)  
};

