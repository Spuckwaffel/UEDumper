
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: Abilities
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Game/Packages/DS_Fortnite_Terrain_NoLOD/Blueprints/_WaterMeshBlueprintMaster._WaterMeshBlueprintMaster_C
/// Size: 0x006B (0x000290 - 0x0002FB)
class A_WaterMeshBlueprintMaster_C : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 763;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x290, 8, 0, 0})
	CMember(class UStaticMeshComponent*)               CollisionMesh1                                              OFFSET(get<T>, {0x298, 8, 0, 0})
	CMember(class UStaticMeshComponent*)               CollisionMesh2                                              OFFSET(get<T>, {0x2A0, 8, 0, 0})
	CMember(class UStaticMeshComponent*)               CollisionMesh4                                              OFFSET(get<T>, {0x2A8, 8, 0, 0})
	CMember(class UStaticMeshComponent*)               CollisionMesh3                                              OFFSET(get<T>, {0x2B0, 8, 0, 0})
	CMember(class UStaticMeshComponent*)               StaticMesh1                                                 OFFSET(get<T>, {0x2B8, 8, 0, 0})
	DMember(int32_t)                                   Number_of_Collision_Meshes                                  OFFSET(get<int32_t>, {0x2C0, 4, 0, 0})
	DMember(bool)                                      FlipFlow                                                    OFFSET(get<bool>, {0x2C4, 1, 0, 0})
	DMember(bool)                                      NoFlow                                                      OFFSET(get<bool>, {0x2C5, 1, 0, 0})
	CMember(class UMaterialInterface*)                 FlippedMaterial                                             OFFSET(get<T>, {0x2C8, 8, 0, 0})
	DMember(int32_t)                                   Current_Characters_Personal_Water_Counter                   OFFSET(get<int32_t>, {0x2D0, 4, 0, 0})
	DMember(bool)                                      Enable_Player_Water_Interactions                            OFFSET(get<bool>, {0x2D4, 1, 0, 0})
	DMember(bool)                                      Entering_True_Exiting_False                                 OFFSET(get<bool>, {0x2D5, 1, 0, 0})
	CMember(class APlayerPawn_Generic_Parent_C*)       ExternalActor                                               OFFSET(get<T>, {0x2D8, 8, 0, 0})
	CMember(class UStaticMeshComponent*)               Internal_Mesh                                               OFFSET(get<T>, {0x2E0, 8, 0, 0})
	DMember(bool)                                      Continue                                                    OFFSET(get<bool>, {0x2E8, 1, 0, 0})
	DMember(double)                                    Minimum_time_between_splashes                               OFFSET(get<double>, {0x2F0, 8, 0, 0})
	DMember(bool)                                      ShowTestMesh                                                OFFSET(get<bool>, {0x2F8, 1, 0, 0})
	DMember(bool)                                      HasExecutedConstuctionScript                                OFFSET(get<bool>, {0x2F9, 1, 0, 0})
	DMember(bool)                                      Is_Deep_Water_Asset_                                        OFFSET(get<bool>, {0x2FA, 1, 0, 0})


	/// Functions
	// Function /Game/Packages/DS_Fortnite_Terrain_NoLOD/Blueprints/_WaterMeshBlueprintMaster._WaterMeshBlueprintMaster_C.Construction
	// void Construction();                                                                                                     // [0x20c3f9c] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Packages/DS_Fortnite_Terrain_NoLOD/Blueprints/_WaterMeshBlueprintMaster._WaterMeshBlueprintMaster_C.Handle Water Penetration Components And Arrays
	// void Handle Water Penetration Components And Arrays(bool In T Out F, class AActor* Touching Actor, class UStaticMeshComponent* Touching Volume); // [0x20c3f9c] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Packages/DS_Fortnite_Terrain_NoLOD/Blueprints/_WaterMeshBlueprintMaster._WaterMeshBlueprintMaster_C.Find Placement on water mesh surfaces
	// void Find Placement on water mesh surfaces(FTransform& Traced Transform, FVector& VelocityVector, bool& Trace Hit);      // [0x20c3f9c] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Packages/DS_Fortnite_Terrain_NoLOD/Blueprints/_WaterMeshBlueprintMaster._WaterMeshBlueprintMaster_C.SetupMeshCollisionVolumes
	// void SetupMeshCollisionVolumes(class UStaticMeshComponent* StaticMeshComponent, int32_t Target Int);                     // [0x20c3f9c] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Packages/DS_Fortnite_Terrain_NoLOD/Blueprints/_WaterMeshBlueprintMaster._WaterMeshBlueprintMaster_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x20c3f9c] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Packages/DS_Fortnite_Terrain_NoLOD/Blueprints/_WaterMeshBlueprintMaster._WaterMeshBlueprintMaster_C.BndEvt__CollisionMesh2_K2Node_ComponentBoundEvent_220_ComponentEndOverlapSignature__DelegateSignature
	// void BndEvt__CollisionMesh2_K2Node_ComponentBoundEvent_220_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // [0x20c3f9c] BlueprintEvent       
	// Function /Game/Packages/DS_Fortnite_Terrain_NoLOD/Blueprints/_WaterMeshBlueprintMaster._WaterMeshBlueprintMaster_C.BndEvt__CollisionMesh3_K2Node_ComponentBoundEvent_211_ComponentEndOverlapSignature__DelegateSignature
	// void BndEvt__CollisionMesh3_K2Node_ComponentBoundEvent_211_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // [0x20c3f9c] BlueprintEvent       
	// Function /Game/Packages/DS_Fortnite_Terrain_NoLOD/Blueprints/_WaterMeshBlueprintMaster._WaterMeshBlueprintMaster_C.BndEvt__CollisionMesh_K2Node_ComponentBoundEvent_66_ComponentBeginOverlapSignature__DelegateSignature
	// void BndEvt__CollisionMesh_K2Node_ComponentBoundEvent_66_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x20c3f9c] HasOutParms|BlueprintEvent 
	// Function /Game/Packages/DS_Fortnite_Terrain_NoLOD/Blueprints/_WaterMeshBlueprintMaster._WaterMeshBlueprintMaster_C.BndEvt__CollisionMesh4_K2Node_ComponentBoundEvent_203_ComponentEndOverlapSignature__DelegateSignature
	// void BndEvt__CollisionMesh4_K2Node_ComponentBoundEvent_203_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // [0x20c3f9c] BlueprintEvent       
	// Function /Game/Packages/DS_Fortnite_Terrain_NoLOD/Blueprints/_WaterMeshBlueprintMaster._WaterMeshBlueprintMaster_C.BndEvt__CollisionMesh2_K2Node_ComponentBoundEvent_196_ComponentBeginOverlapSignature__DelegateSignature
	// void BndEvt__CollisionMesh2_K2Node_ComponentBoundEvent_196_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x20c3f9c] HasOutParms|BlueprintEvent 
	// Function /Game/Packages/DS_Fortnite_Terrain_NoLOD/Blueprints/_WaterMeshBlueprintMaster._WaterMeshBlueprintMaster_C.BndEvt__CollisionMesh3_K2Node_ComponentBoundEvent_190_ComponentBeginOverlapSignature__DelegateSignature
	// void BndEvt__CollisionMesh3_K2Node_ComponentBoundEvent_190_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x20c3f9c] HasOutParms|BlueprintEvent 
	// Function /Game/Packages/DS_Fortnite_Terrain_NoLOD/Blueprints/_WaterMeshBlueprintMaster._WaterMeshBlueprintMaster_C.BndEvt__CollisionMesh4_K2Node_ComponentBoundEvent_185_ComponentBeginOverlapSignature__DelegateSignature
	// void BndEvt__CollisionMesh4_K2Node_ComponentBoundEvent_185_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x20c3f9c] HasOutParms|BlueprintEvent 
	// Function /Game/Packages/DS_Fortnite_Terrain_NoLOD/Blueprints/_WaterMeshBlueprintMaster._WaterMeshBlueprintMaster_C.BndEvt__CollisionMesh_K2Node_ComponentBoundEvent_69_ComponentEndOverlapSignature__DelegateSignature
	// void BndEvt__CollisionMesh_K2Node_ComponentBoundEvent_69_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // [0x20c3f9c] BlueprintEvent       
	// Function /Game/Packages/DS_Fortnite_Terrain_NoLOD/Blueprints/_WaterMeshBlueprintMaster._WaterMeshBlueprintMaster_C.Construct
	// void Construct();                                                                                                        // [0x20c3f9c] BlueprintCallable|BlueprintEvent 
	// Function /Game/Packages/DS_Fortnite_Terrain_NoLOD/Blueprints/_WaterMeshBlueprintMaster._WaterMeshBlueprintMaster_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x20c3f9c] Event|Protected|BlueprintEvent 
	// Function /Game/Packages/DS_Fortnite_Terrain_NoLOD/Blueprints/_WaterMeshBlueprintMaster._WaterMeshBlueprintMaster_C.ExecuteUbergraph__WaterMeshBlueprintMaster
	// void ExecuteUbergraph__WaterMeshBlueprintMaster(int32_t EntryPoint);                                                     // [0x20c3f9c] Final|HasDefaults    
};

/// Struct /Game/Packages/DS_Fortnite_Terrain_NoLOD/Blueprints/WaterMeshAssetsToReplace.WaterMeshAssetsToReplace
/// Size: 0x0014 (0x000000 - 0x000014)
class FWaterMeshAssetsToReplace : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	CMember(class UStaticMesh*)                        StaticMesh_4_B162F6034281E7ABCD4DD1A24FFB5843               OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class UClass*)                             Blueprint_8_FAC48F2D497ED83408C598897E74E513                OFFSET(get<T>, {0x8, 8, 0, 0})
	DMember(int32_t)                                   WaterMaterialID_11_1F00A5914214393D3251C4918ACFBCD2         OFFSET(get<int32_t>, {0x10, 4, 0, 0})
};

