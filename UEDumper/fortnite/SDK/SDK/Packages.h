
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: Abilities
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Game/Packages/DS_Fortnite_Terrain_NoLOD/Blueprints/_WaterMeshBlueprintMaster._WaterMeshBlueprintMaster_C
/// Size: 0x006B (0x000290 - 0x0002FB)
class A_WaterMeshBlueprintMaster_C : public AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0290   (0x0008)  
	class UStaticMeshComponent*                        CollisionMesh1;                                             // 0x0298   (0x0008)  
	class UStaticMeshComponent*                        CollisionMesh2;                                             // 0x02A0   (0x0008)  
	class UStaticMeshComponent*                        CollisionMesh4;                                             // 0x02A8   (0x0008)  
	class UStaticMeshComponent*                        CollisionMesh3;                                             // 0x02B0   (0x0008)  
	class UStaticMeshComponent*                        StaticMesh1;                                                // 0x02B8   (0x0008)  
	int32_t                                            Number_of_Collision_Meshes;                                 // 0x02C0   (0x0004)  
	bool                                               FlipFlow;                                                   // 0x02C4   (0x0001)  
	bool                                               NoFlow;                                                     // 0x02C5   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x02C6   (0x0002)  MISSED
	class UMaterialInterface*                          FlippedMaterial;                                            // 0x02C8   (0x0008)  
	int32_t                                            Current_Characters_Personal_Water_Counter;                  // 0x02D0   (0x0004)  
	bool                                               Enable_Player_Water_Interactions;                           // 0x02D4   (0x0001)  
	bool                                               Entering_True_Exiting_False;                                // 0x02D5   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x02D6   (0x0002)  MISSED
	class APlayerPawn_Generic_Parent_C*                ExternalActor;                                              // 0x02D8   (0x0008)  
	class UStaticMeshComponent*                        Internal_Mesh;                                              // 0x02E0   (0x0008)  
	bool                                               Continue;                                                   // 0x02E8   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x02E9   (0x0007)  MISSED
	double                                             Minimum_time_between_splashes;                              // 0x02F0   (0x0008)  
	bool                                               ShowTestMesh;                                               // 0x02F8   (0x0001)  
	bool                                               HasExecutedConstuctionScript;                               // 0x02F9   (0x0001)  
	bool                                               Is_Deep_Water_Asset_;                                       // 0x02FA   (0x0001)  


	/// Functions
	// Function /Game/Packages/DS_Fortnite_Terrain_NoLOD/Blueprints/_WaterMeshBlueprintMaster._WaterMeshBlueprintMaster_C.Construction
	// void Construction();                                                                                                  // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Packages/DS_Fortnite_Terrain_NoLOD/Blueprints/_WaterMeshBlueprintMaster._WaterMeshBlueprintMaster_C.Handle Water Penetration Components And Arrays
	// void Handle Water Penetration Components And Arrays(bool In T Out F, class AActor* Touching Actor, class UStaticMeshComponent* Touching Volume); // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Packages/DS_Fortnite_Terrain_NoLOD/Blueprints/_WaterMeshBlueprintMaster._WaterMeshBlueprintMaster_C.Find Placement on water mesh surfaces
	// void Find Placement on water mesh surfaces(FTransform& Traced Transform, FVector& VelocityVector, bool& Trace Hit);   // [0x18a39e4] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Packages/DS_Fortnite_Terrain_NoLOD/Blueprints/_WaterMeshBlueprintMaster._WaterMeshBlueprintMaster_C.SetupMeshCollisionVolumes
	// void SetupMeshCollisionVolumes(class UStaticMeshComponent* StaticMeshComponent, int32_t Target Int);                  // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Packages/DS_Fortnite_Terrain_NoLOD/Blueprints/_WaterMeshBlueprintMaster._WaterMeshBlueprintMaster_C.UserConstructionScript
	// void UserConstructionScript();                                                                                        // [0x18a39e4] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Packages/DS_Fortnite_Terrain_NoLOD/Blueprints/_WaterMeshBlueprintMaster._WaterMeshBlueprintMaster_C.BndEvt__CollisionMesh2_K2Node_ComponentBoundEvent_220_ComponentEndOverlapSignature__DelegateSignature
	// void BndEvt__CollisionMesh2_K2Node_ComponentBoundEvent_220_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // [0x18a39e4] BlueprintEvent       
	// Function /Game/Packages/DS_Fortnite_Terrain_NoLOD/Blueprints/_WaterMeshBlueprintMaster._WaterMeshBlueprintMaster_C.BndEvt__CollisionMesh3_K2Node_ComponentBoundEvent_211_ComponentEndOverlapSignature__DelegateSignature
	// void BndEvt__CollisionMesh3_K2Node_ComponentBoundEvent_211_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // [0x18a39e4] BlueprintEvent       
	// Function /Game/Packages/DS_Fortnite_Terrain_NoLOD/Blueprints/_WaterMeshBlueprintMaster._WaterMeshBlueprintMaster_C.BndEvt__CollisionMesh_K2Node_ComponentBoundEvent_66_ComponentBeginOverlapSignature__DelegateSignature
	// void BndEvt__CollisionMesh_K2Node_ComponentBoundEvent_66_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x18a39e4] HasOutParms|BlueprintEvent 
	// Function /Game/Packages/DS_Fortnite_Terrain_NoLOD/Blueprints/_WaterMeshBlueprintMaster._WaterMeshBlueprintMaster_C.BndEvt__CollisionMesh4_K2Node_ComponentBoundEvent_203_ComponentEndOverlapSignature__DelegateSignature
	// void BndEvt__CollisionMesh4_K2Node_ComponentBoundEvent_203_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // [0x18a39e4] BlueprintEvent       
	// Function /Game/Packages/DS_Fortnite_Terrain_NoLOD/Blueprints/_WaterMeshBlueprintMaster._WaterMeshBlueprintMaster_C.BndEvt__CollisionMesh2_K2Node_ComponentBoundEvent_196_ComponentBeginOverlapSignature__DelegateSignature
	// void BndEvt__CollisionMesh2_K2Node_ComponentBoundEvent_196_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x18a39e4] HasOutParms|BlueprintEvent 
	// Function /Game/Packages/DS_Fortnite_Terrain_NoLOD/Blueprints/_WaterMeshBlueprintMaster._WaterMeshBlueprintMaster_C.BndEvt__CollisionMesh3_K2Node_ComponentBoundEvent_190_ComponentBeginOverlapSignature__DelegateSignature
	// void BndEvt__CollisionMesh3_K2Node_ComponentBoundEvent_190_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x18a39e4] HasOutParms|BlueprintEvent 
	// Function /Game/Packages/DS_Fortnite_Terrain_NoLOD/Blueprints/_WaterMeshBlueprintMaster._WaterMeshBlueprintMaster_C.BndEvt__CollisionMesh4_K2Node_ComponentBoundEvent_185_ComponentBeginOverlapSignature__DelegateSignature
	// void BndEvt__CollisionMesh4_K2Node_ComponentBoundEvent_185_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x18a39e4] HasOutParms|BlueprintEvent 
	// Function /Game/Packages/DS_Fortnite_Terrain_NoLOD/Blueprints/_WaterMeshBlueprintMaster._WaterMeshBlueprintMaster_C.BndEvt__CollisionMesh_K2Node_ComponentBoundEvent_69_ComponentEndOverlapSignature__DelegateSignature
	// void BndEvt__CollisionMesh_K2Node_ComponentBoundEvent_69_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // [0x18a39e4] BlueprintEvent       
	// Function /Game/Packages/DS_Fortnite_Terrain_NoLOD/Blueprints/_WaterMeshBlueprintMaster._WaterMeshBlueprintMaster_C.Construct
	// void Construct();                                                                                                     // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Game/Packages/DS_Fortnite_Terrain_NoLOD/Blueprints/_WaterMeshBlueprintMaster._WaterMeshBlueprintMaster_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                              // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Game/Packages/DS_Fortnite_Terrain_NoLOD/Blueprints/_WaterMeshBlueprintMaster._WaterMeshBlueprintMaster_C.ExecuteUbergraph__WaterMeshBlueprintMaster
	// void ExecuteUbergraph__WaterMeshBlueprintMaster(int32_t EntryPoint);                                                  // [0x18a39e4] Final|HasDefaults    
};

/// Struct /Game/Packages/DS_Fortnite_Terrain_NoLOD/Blueprints/WaterMeshAssetsToReplace.WaterMeshAssetsToReplace
/// Size: 0x0014 (0x000000 - 0x000014)
struct FWaterMeshAssetsToReplace
{ 
	class UStaticMesh*                                 StaticMesh_4_B162F6034281E7ABCD4DD1A24FFB5843;              // 0x0000   (0x0008)  
	class UClass*                                      Blueprint_8_FAC48F2D497ED83408C598897E74E513;               // 0x0008   (0x0008)  
	int32_t                                            WaterMaterialID_11_1F00A5914214393D3251C4918ACFBCD2;        // 0x0010   (0x0004)  
};

