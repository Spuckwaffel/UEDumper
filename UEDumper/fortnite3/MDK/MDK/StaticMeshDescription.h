
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: MeshDescription

/// Class /Script/StaticMeshDescription.StaticMeshDescription
/// Size: 0x0000 (0x0002F0 - 0x0002F0)
class UStaticMeshDescription : public UMeshDescriptionBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 752;

public:


	/// Functions
	// Function /Script/StaticMeshDescription.StaticMeshDescription.SetVertexInstanceUV
	// void SetVertexInstanceUV(FVertexInstanceID VertexInstanceID, FVector2D UV, int32_t UVIndex);                             // [0x5f788cc] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/StaticMeshDescription.StaticMeshDescription.SetPolygonGroupMaterialSlotName
	// void SetPolygonGroupMaterialSlotName(FPolygonGroupID PolygonGroupID, FName& SlotName);                                   // [0x5f787fc] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/StaticMeshDescription.StaticMeshDescription.GetVertexInstanceUV
	// FVector2D GetVertexInstanceUV(FVertexInstanceID VertexInstanceID, int32_t UVIndex);                                      // [0x5f78730] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/StaticMeshDescription.StaticMeshDescription.CreateCube
	// void CreateCube(FVector Center, FVector HalfExtents, FPolygonGroupID PolygonGroup, FPolygonID& PolygonID_PlusX, FPolygonID& PolygonID_MinusX, FPolygonID& PolygonID_PlusY, FPolygonID& PolygonID_MinusY, FPolygonID& PolygonID_PlusZ, FPolygonID& PolygonID_MinusZ); // [0x5f78418] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Struct /Script/StaticMeshDescription.UVMapSettings
/// Size: 0x0070 (0x000000 - 0x000070)
class FUVMapSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FVector)                                   Size                                                        OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FVector2D)                                 UVTile                                                      OFFSET(getStruct<T>, {0x18, 16, 0, 0})
	SMember(FVector)                                   Position                                                    OFFSET(getStruct<T>, {0x28, 24, 0, 0})
	SMember(FRotator)                                  Rotation                                                    OFFSET(getStruct<T>, {0x40, 24, 0, 0})
	SMember(FVector)                                   Scale                                                       OFFSET(getStruct<T>, {0x58, 24, 0, 0})
};

