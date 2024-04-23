
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame

/// Class /Game/BP_ProjectileTrajectory.BP_ProjectileTrajectory_C
/// Size: 0x0052 (0x0002B8 - 0x00030A)
class ABP_ProjectileTrajectory_C : public AFortProjectileTrajectory
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 778;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x2B8, 8, 0, 0})
	CMember(class UStaticMeshComponent*)               InvalidTarget                                               OFFSET(get<T>, {0x2C0, 8, 0, 0})
	CMember(class UStaticMeshComponent*)               Target                                                      OFFSET(get<T>, {0x2C8, 8, 0, 0})
	DMember(int32_t)                                   MaxMeshCount                                                OFFSET(get<int32_t>, {0x2D0, 4, 0, 0})
	CMember(class UMaterialInstanceDynamic*)           SplineMID                                                   OFFSET(get<T>, {0x2D8, 8, 0, 0})
	DMember(double)                                    SplineFadeDistance                                          OFFSET(get<double>, {0x2E0, 8, 0, 0})
	DMember(double)                                    SplineFadeStartDistance                                     OFFSET(get<double>, {0x2E8, 8, 0, 0})
	CMember(class UObject*)                            TrajectoryOwner                                             OFFSET(get<T>, {0x2F0, 8, 0, 0})
	DMember(bool)                                      ShouldUpdate                                                OFFSET(get<bool>, {0x2F8, 1, 0, 0})
	CMember(class UMaterialInstanceDynamic*)           InvalidSplineMID                                            OFFSET(get<T>, {0x300, 8, 0, 0})
	DMember(bool)                                      bIsTrajectoryValid                                          OFFSET(get<bool>, {0x308, 1, 0, 0})
	DMember(bool)                                      bWaitFirstTrajectoryValid                                   OFFSET(get<bool>, {0x309, 1, 0, 0})


	/// Functions
	// Function /Game/BP_ProjectileTrajectory.BP_ProjectileTrajectory_C.SetProjectileBudgetMesh
	// void SetProjectileBudgetMesh(class USkeletalMeshComponentBudgeted* ProjectileBudgetMesh);                                // [0x1340978] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BP_ProjectileTrajectory.BP_ProjectileTrajectory_C.SetShouldUpdateFromOwner
	// void SetShouldUpdateFromOwner(bool ShouldUpdate, class UObject* Owner);                                                  // [0x1340978] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BP_ProjectileTrajectory.BP_ProjectileTrajectory_C.UpdateFromTrajectoryOwner
	// void UpdateFromTrajectoryOwner();                                                                                        // [0x1340978] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BP_ProjectileTrajectory.BP_ProjectileTrajectory_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x1340978] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BP_ProjectileTrajectory.BP_ProjectileTrajectory_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Game/BP_ProjectileTrajectory.BP_ProjectileTrajectory_C.ReceiveTick
	// void ReceiveTick(float DeltaSeconds);                                                                                    // [0x1340978] Event|Public|BlueprintEvent 
	// Function /Game/BP_ProjectileTrajectory.BP_ProjectileTrajectory_C.SetTrajectorySpline
	// void SetTrajectorySpline(TArray<FVector>& SplinePoints, TArray<FVector>& SplineTangents);                                // [0x1340978] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/BP_ProjectileTrajectory.BP_ProjectileTrajectory_C.SetTrajectoryValid
	// void SetTrajectoryValid(bool bIsTrajectoryValid);                                                                        // [0x1340978] BlueprintCallable|BlueprintEvent 
	// Function /Game/BP_ProjectileTrajectory.BP_ProjectileTrajectory_C.UpdateTargetMeshVisibility
	// void UpdateTargetMeshVisibility();                                                                                       // [0x1340978] BlueprintCallable|BlueprintEvent 
	// Function /Game/BP_ProjectileTrajectory.BP_ProjectileTrajectory_C.ReceiveEndPlay
	// void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);                                                          // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Game/BP_ProjectileTrajectory.BP_ProjectileTrajectory_C.ExecuteUbergraph_BP_ProjectileTrajectory
	// void ExecuteUbergraph_BP_ProjectileTrajectory(int32_t EntryPoint);                                                       // [0x1340978] Final|HasDefaults    
};

