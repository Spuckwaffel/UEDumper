
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject

/// Class /Script/MeshDescription.MeshDescriptionBase
/// Size: 0x02C8 (0x000028 - 0x0002F0)
class UMeshDescriptionBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 752;

public:


	/// Functions
	// Function /Script/MeshDescription.MeshDescriptionBase.SetVertexPosition
	// void SetVertexPosition(FVertexID VertexID, FVector& Position);                                                           // [0x5dc5b44] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MeshDescription.MeshDescriptionBase.SetPolygonVertexInstances
	// void SetPolygonVertexInstances(FPolygonID PolygonID, TArray<FVertexInstanceID>& VertexInstanceIDs);                      // [0x5dc5498] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MeshDescription.MeshDescriptionBase.SetPolygonPolygonGroup
	// void SetPolygonPolygonGroup(FPolygonID PolygonID, FPolygonGroupID PolygonGroupID);                                       // [0x5dc535c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MeshDescription.MeshDescriptionBase.ReversePolygonFacing
	// void ReversePolygonFacing(FPolygonID PolygonID);                                                                         // [0x5dc5264] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MeshDescription.MeshDescriptionBase.ReserveNewVertices
	// void ReserveNewVertices(int32_t NumberOfNewVertices);                                                                    // [0x5dc51a4] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MeshDescription.MeshDescriptionBase.ReserveNewVertexInstances
	// void ReserveNewVertexInstances(int32_t NumberOfNewVertexInstances);                                                      // [0x5dc4e8c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MeshDescription.MeshDescriptionBase.ReserveNewTriangles
	// void ReserveNewTriangles(int32_t NumberOfNewTriangles);                                                                  // [0x5dc50e4] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MeshDescription.MeshDescriptionBase.ReserveNewPolygons
	// void ReserveNewPolygons(int32_t NumberOfNewPolygons);                                                                    // [0x5dc5024] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MeshDescription.MeshDescriptionBase.ReserveNewPolygonGroups
	// void ReserveNewPolygonGroups(int32_t NumberOfNewPolygonGroups);                                                          // [0x5dc4f4c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MeshDescription.MeshDescriptionBase.ReserveNewEdges
	// void ReserveNewEdges(int32_t NumberOfNewEdges);                                                                          // [0x5dc4e8c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MeshDescription.MeshDescriptionBase.IsVertexValid
	// bool IsVertexValid(FVertexID VertexID);                                                                                  // [0x5dc4d7c] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.IsVertexOrphaned
	// bool IsVertexOrphaned(FVertexID VertexID);                                                                               // [0x5dc4c68] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.IsVertexInstanceValid
	// bool IsVertexInstanceValid(FVertexInstanceID VertexInstanceID);                                                          // [0x5dc4b54] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.IsTriangleValid
	// bool IsTriangleValid(FTriangleID TriangleID);                                                                            // [0x5dc4a40] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.IsTrianglePartOfNgon
	// bool IsTrianglePartOfNgon(FTriangleID TriangleID);                                                                       // [0x5dc4970] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.IsPolygonValid
	// bool IsPolygonValid(FPolygonID PolygonID);                                                                               // [0x5dc485c] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.IsPolygonGroupValid
	// bool IsPolygonGroupValid(FPolygonGroupID PolygonGroupID);                                                                // [0x5dc4748] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.IsEmpty
	// bool IsEmpty();                                                                                                          // [0x5dc4720] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.IsEdgeValid
	// bool IsEdgeValid(FEdgeID EdgeID);                                                                                        // [0x5dc460c] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.IsEdgeInternalToPolygon
	// bool IsEdgeInternalToPolygon(FEdgeID EdgeID, FPolygonID PolygonID);                                                      // [0x5dc44bc] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.IsEdgeInternal
	// bool IsEdgeInternal(FEdgeID EdgeID);                                                                                     // [0x5dc43a4] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetVertexVertexInstances
	// void GetVertexVertexInstances(FVertexID VertexID, TArray<FVertexInstanceID>& OutVertexInstanceIDs);                      // [0x5dc3cb0] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetVertexPosition
	// FVector GetVertexPosition(FVertexID VertexID);                                                                           // [0x5dc3bcc] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetVertexPairEdge
	// FEdgeID GetVertexPairEdge(FVertexID VertexID0, FVertexID VertexID1);                                                     // [0x5dc3a84] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetVertexInstanceVertex
	// FVertexID GetVertexInstanceVertex(FVertexInstanceID VertexInstanceID);                                                   // [0x5dc3960] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetVertexInstancePairEdge
	// FEdgeID GetVertexInstancePairEdge(FVertexInstanceID VertexInstanceID0, FVertexInstanceID VertexInstanceID1);             // [0x5dc3818] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetVertexInstanceForTriangleVertex
	// FVertexInstanceID GetVertexInstanceForTriangleVertex(FTriangleID TriangleID, FVertexID VertexID);                        // [0x5dc36d0] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetVertexInstanceForPolygonVertex
	// FVertexInstanceID GetVertexInstanceForPolygonVertex(FPolygonID PolygonID, FVertexID VertexID);                           // [0x5dc3588] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetVertexInstanceCount
	// int32_t GetVertexInstanceCount();                                                                                        // [0x5dc355c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetVertexInstanceConnectedTriangles
	// void GetVertexInstanceConnectedTriangles(FVertexInstanceID VertexInstanceID, TArray<FTriangleID>& OutConnectedTriangleIDs); // [0x5dc2e60] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetVertexInstanceConnectedPolygons
	// void GetVertexInstanceConnectedPolygons(FVertexInstanceID VertexInstanceID, TArray<FPolygonID>& OutConnectedPolygonIDs); // [0x5dc2780] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetVertexCount
	// int32_t GetVertexCount();                                                                                                // [0x5dc2754] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetVertexConnectedTriangles
	// void GetVertexConnectedTriangles(FVertexID VertexID, TArray<FTriangleID>& OutConnectedTriangleIDs);                      // [0x5dc2078] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetVertexConnectedPolygons
	// void GetVertexConnectedPolygons(FVertexID VertexID, TArray<FPolygonID>& OutConnectedPolygonIDs);                         // [0x5dc199c] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetVertexConnectedEdges
	// void GetVertexConnectedEdges(FVertexID VertexID, TArray<FEdgeID>& OutEdgeIDs);                                           // [0x5dc12a4] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetVertexAdjacentVertices
	// void GetVertexAdjacentVertices(FVertexID VertexID, TArray<FVertexID>& OutAdjacentVertexIDs);                             // [0x5dc0bc8] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetTriangleVertices
	// void GetTriangleVertices(FTriangleID TriangleID, TArray<FVertexID>& OutVertexIDs);                                       // [0x5dc051c] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetTriangleVertexInstances
	// void GetTriangleVertexInstances(FTriangleID TriangleID, TArray<FVertexInstanceID>& OutVertexInstanceIDs);                // [0x5dbfe70] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetTriangleVertexInstance
	// FVertexInstanceID GetTriangleVertexInstance(FTriangleID TriangleID, int32_t Index);                                      // [0x5dbfd28] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetTrianglePolygonGroup
	// FPolygonGroupID GetTrianglePolygonGroup(FTriangleID TriangleID);                                                         // [0x5dbfc04] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetTrianglePolygon
	// FPolygonID GetTrianglePolygon(FTriangleID TriangleID);                                                                   // [0x5dbfae0] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetTriangleEdges
	// void GetTriangleEdges(FTriangleID TriangleID, TArray<FEdgeID>& OutEdgeIDs);                                              // [0x5dbf434] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetTriangleCount
	// int32_t GetTriangleCount();                                                                                              // [0x5dbf408] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetTriangleAdjacentTriangles
	// void GetTriangleAdjacentTriangles(FTriangleID TriangleID, TArray<FTriangleID>& OutTriangleIDs);                          // [0x5dbed28] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetPolygonVertices
	// void GetPolygonVertices(FPolygonID PolygonID, TArray<FVertexID>& OutVertexIDs);                                          // [0x5dbe648] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetPolygonVertexInstances
	// void GetPolygonVertexInstances(FPolygonID PolygonID, TArray<FVertexInstanceID>& OutVertexInstanceIDs);                   // [0x5dbdf9c] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetPolygonTriangles
	// void GetPolygonTriangles(FPolygonID PolygonID, TArray<FTriangleID>& OutTriangleIDs);                                     // [0x5dbd8a0] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetPolygonPolygonGroup
	// FPolygonGroupID GetPolygonPolygonGroup(FPolygonID PolygonID);                                                            // [0x5dbd77c] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetPolygonPerimeterEdges
	// void GetPolygonPerimeterEdges(FPolygonID PolygonID, TArray<FEdgeID>& OutEdgeIDs);                                        // [0x5dbd09c] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetPolygonInternalEdges
	// void GetPolygonInternalEdges(FPolygonID PolygonID, TArray<FEdgeID>& OutEdgeIDs);                                         // [0x5dbc9bc] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetPolygonGroupPolygons
	// void GetPolygonGroupPolygons(FPolygonGroupID PolygonGroupID, TArray<FPolygonID>& OutPolygonIDs);                         // [0x5dbc2c4] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetPolygonGroupCount
	// int32_t GetPolygonGroupCount();                                                                                          // [0x5dbc298] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetPolygonCount
	// int32_t GetPolygonCount();                                                                                               // [0x5dbc26c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetPolygonAdjacentPolygons
	// void GetPolygonAdjacentPolygons(FPolygonID PolygonID, TArray<FPolygonID>& OutPolygonIDs);                                // [0x5dbbb8c] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetNumVertexVertexInstances
	// int32_t GetNumVertexVertexInstances(FVertexID VertexID);                                                                 // [0x5dbba6c] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetNumVertexInstanceConnectedTriangles
	// int32_t GetNumVertexInstanceConnectedTriangles(FVertexInstanceID VertexInstanceID);                                      // [0x5dbb94c] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetNumVertexInstanceConnectedPolygons
	// int32_t GetNumVertexInstanceConnectedPolygons(FVertexInstanceID VertexInstanceID);                                       // [0x5dbb838] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetNumVertexConnectedTriangles
	// int32_t GetNumVertexConnectedTriangles(FVertexID VertexID);                                                              // [0x5dbb724] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetNumVertexConnectedPolygons
	// int32_t GetNumVertexConnectedPolygons(FVertexID VertexID);                                                               // [0x5dbb610] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetNumVertexConnectedEdges
	// int32_t GetNumVertexConnectedEdges(FVertexID VertexID);                                                                  // [0x5dbb4f0] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetNumPolygonVertices
	// int32_t GetNumPolygonVertices(FPolygonID PolygonID);                                                                     // [0x5dbb3dc] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetNumPolygonTriangles
	// int32_t GetNumPolygonTriangles(FPolygonID PolygonID);                                                                    // [0x5dbb2bc] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetNumPolygonInternalEdges
	// int32_t GetNumPolygonInternalEdges(FPolygonID PolygonID);                                                                // [0x5dbb198] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetNumPolygonGroupPolygons
	// int32_t GetNumPolygonGroupPolygons(FPolygonGroupID PolygonGroupID);                                                      // [0x5dbb078] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetNumEdgeConnectedTriangles
	// int32_t GetNumEdgeConnectedTriangles(FEdgeID EdgeID);                                                                    // [0x5dbaf58] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetNumEdgeConnectedPolygons
	// int32_t GetNumEdgeConnectedPolygons(FEdgeID EdgeID);                                                                     // [0x5dbae88] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetEdgeVertices
	// void GetEdgeVertices(FEdgeID EdgeID, TArray<FVertexID>& OutVertexIDs);                                                   // [0x5dba7dc] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetEdgeVertex
	// FVertexID GetEdgeVertex(FEdgeID EdgeID, int32_t VertexNumber);                                                           // [0x5dba630] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetEdgeCount
	// int32_t GetEdgeCount();                                                                                                  // [0x5dba604] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetEdgeConnectedTriangles
	// void GetEdgeConnectedTriangles(FEdgeID EdgeID, TArray<FTriangleID>& OutConnectedTriangleIDs);                            // [0x5db9f08] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetEdgeConnectedPolygons
	// void GetEdgeConnectedPolygons(FEdgeID EdgeID, TArray<FPolygonID>& OutConnectedPolygonIDs);                               // [0x5db9828] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.Empty
	// void Empty();                                                                                                            // [0x5db9810] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MeshDescription.MeshDescriptionBase.DeleteVertexInstance
	// void DeleteVertexInstance(FVertexInstanceID VertexInstanceID, TArray<FVertexID>& OrphanedVertices);                      // [0x5db9130] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MeshDescription.MeshDescriptionBase.DeleteVertex
	// void DeleteVertex(FVertexID VertexID);                                                                                   // [0x5db903c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MeshDescription.MeshDescriptionBase.DeleteTriangle
	// void DeleteTriangle(FTriangleID TriangleID, TArray<FEdgeID>& OrphanedEdges, TArray<FVertexInstanceID>& OrphanedVertexInstances, TArray<FPolygonGroupID>& OrphanedPolygonGroupsPtr); // [0x5db8380] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MeshDescription.MeshDescriptionBase.DeletePolygonGroup
	// void DeletePolygonGroup(FPolygonGroupID PolygonGroupID);                                                                 // [0x5db8288] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MeshDescription.MeshDescriptionBase.DeletePolygon
	// void DeletePolygon(FPolygonID PolygonID, TArray<FEdgeID>& OrphanedEdges, TArray<FVertexInstanceID>& OrphanedVertexInstances, TArray<FPolygonGroupID>& OrphanedPolygonGroups); // [0x5db75cc] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MeshDescription.MeshDescriptionBase.DeleteEdge
	// void DeleteEdge(FEdgeID EdgeID, TArray<FVertexID>& OrphanedVertices);                                                    // [0x5db6eec] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MeshDescription.MeshDescriptionBase.CreateVertexWithID
	// void CreateVertexWithID(FVertexID VertexID);                                                                             // [0x5db6df0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MeshDescription.MeshDescriptionBase.CreateVertexInstanceWithID
	// void CreateVertexInstanceWithID(FVertexInstanceID VertexInstanceID, FVertexID VertexID);                                 // [0x5db6cb4] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MeshDescription.MeshDescriptionBase.CreateVertexInstance
	// FVertexInstanceID CreateVertexInstance(FVertexID VertexID);                                                              // [0x5db6ba0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MeshDescription.MeshDescriptionBase.CreateVertex
	// FVertexID CreateVertex();                                                                                                // [0x5db6b70] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MeshDescription.MeshDescriptionBase.CreateTriangleWithID
	// void CreateTriangleWithID(FTriangleID TriangleID, FPolygonGroupID PolygonGroupID, TArray<FVertexInstanceID>& VertexInstanceIDs, TArray<FEdgeID>& NewEdgeIDs); // [0x5db5ed0] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MeshDescription.MeshDescriptionBase.CreateTriangle
	// FTriangleID CreateTriangle(FPolygonGroupID PolygonGroupID, TArray<FVertexInstanceID>& VertexInstanceIDs, TArray<FEdgeID>& NewEdgeIDs); // [0x5db52a0] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MeshDescription.MeshDescriptionBase.CreatePolygonWithID
	// void CreatePolygonWithID(FPolygonID PolygonID, FPolygonGroupID PolygonGroupID, TArray<FVertexInstanceID>& VertexInstanceIDs, TArray<FEdgeID>& NewEdgeIDs); // [0x5db4600] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MeshDescription.MeshDescriptionBase.CreatePolygonGroupWithID
	// void CreatePolygonGroupWithID(FPolygonGroupID PolygonGroupID);                                                           // [0x5db4500] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MeshDescription.MeshDescriptionBase.CreatePolygonGroup
	// FPolygonGroupID CreatePolygonGroup();                                                                                    // [0x5db44d0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MeshDescription.MeshDescriptionBase.CreatePolygon
	// FPolygonID CreatePolygon(FPolygonGroupID PolygonGroupID, TArray<FVertexInstanceID>& VertexInstanceIDs, TArray<FEdgeID>& NewEdgeIDs); // [0x5db38a0] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MeshDescription.MeshDescriptionBase.CreateEdgeWithID
	// void CreateEdgeWithID(FEdgeID EdgeID, FVertexID VertexID0, FVertexID VertexID1);                                         // [0x5db36e8] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MeshDescription.MeshDescriptionBase.CreateEdge
	// FEdgeID CreateEdge(FVertexID VertexID0, FVertexID VertexID1);                                                            // [0x5db35a0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MeshDescription.MeshDescriptionBase.ComputePolygonTriangulation
	// void ComputePolygonTriangulation(FPolygonID PolygonID);                                                                  // [0x5db34a8] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/MeshDescription.MeshDescriptionBaseBulkData
/// Size: 0x0000 (0x000028 - 0x000028)
class UMeshDescriptionBaseBulkData : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Struct /Script/MeshDescription.ElementID
/// Size: 0x0004 (0x000000 - 0x000004)
class FElementID : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(int32_t)                                   IDValue                                                     OFFSET(get<int32_t>, {0x0, 4, 0, 0})
};

/// Struct /Script/MeshDescription.VertexID
/// Size: 0x0000 (0x000004 - 0x000004)
class FVertexID : public FElementID
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
};

/// Struct /Script/MeshDescription.VertexInstanceID
/// Size: 0x0000 (0x000004 - 0x000004)
class FVertexInstanceID : public FElementID
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
};

/// Struct /Script/MeshDescription.EdgeID
/// Size: 0x0000 (0x000004 - 0x000004)
class FEdgeID : public FElementID
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
};

/// Struct /Script/MeshDescription.UVID
/// Size: 0x0000 (0x000004 - 0x000004)
class FUVID : public FElementID
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
};

/// Struct /Script/MeshDescription.TriangleID
/// Size: 0x0000 (0x000004 - 0x000004)
class FTriangleID : public FElementID
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
};

/// Struct /Script/MeshDescription.PolygonGroupID
/// Size: 0x0000 (0x000004 - 0x000004)
class FPolygonGroupID : public FElementID
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
};

/// Struct /Script/MeshDescription.PolygonID
/// Size: 0x0000 (0x000004 - 0x000004)
class FPolygonID : public FElementID
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
};

/// Enum /Script/MeshDescription.EComputeNTBsOptions
/// Size: 0x05
enum class EComputeNTBsOptions : uint8_t
{
	EComputeNTBsOptions__None                                                        = 0,
	EComputeNTBsOptions__Normals                                                     = 1,
	EComputeNTBsOptions__Tangents                                                    = 2,
	EComputeNTBsOptions__WeightedNTBs                                                = 4,
	EComputeNTBsOptions__EComputeNTBsOptions_MAX                                     = 5
};

