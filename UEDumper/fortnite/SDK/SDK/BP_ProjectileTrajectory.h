
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame

/// Class /Game/BP_ProjectileTrajectory.BP_ProjectileTrajectory_C
/// Size: 0x0052 (0x0002B8 - 0x00030A)
class ABP_ProjectileTrajectory_C : public AFortProjectileTrajectory
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02B8   (0x0008)  
	class UStaticMeshComponent*                        InvalidTarget;                                              // 0x02C0   (0x0008)  
	class UStaticMeshComponent*                        Target;                                                     // 0x02C8   (0x0008)  
	int32_t                                            MaxMeshCount;                                               // 0x02D0   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x02D4   (0x0004)  MISSED
	class UMaterialInstanceDynamic*                    SplineMID;                                                  // 0x02D8   (0x0008)  
	double                                             SplineFadeDistance;                                         // 0x02E0   (0x0008)  
	double                                             SplineFadeStartDistance;                                    // 0x02E8   (0x0008)  
	class UObject*                                     TrajectoryOwner;                                            // 0x02F0   (0x0008)  
	bool                                               ShouldUpdate;                                               // 0x02F8   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x02F9   (0x0007)  MISSED
	class UMaterialInstanceDynamic*                    InvalidSplineMID;                                           // 0x0300   (0x0008)  
	bool                                               bIsTrajectoryValid;                                         // 0x0308   (0x0001)  
	bool                                               bWaitFirstTrajectoryValid;                                  // 0x0309   (0x0001)  


	/// Functions
	// Function /Game/BP_ProjectileTrajectory.BP_ProjectileTrajectory_C.SetProjectileBudgetMesh
	// void SetProjectileBudgetMesh(class USkeletalMeshComponentBudgeted* ProjectileBudgetMesh);                             // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BP_ProjectileTrajectory.BP_ProjectileTrajectory_C.SetShouldUpdateFromOwner
	// void SetShouldUpdateFromOwner(bool ShouldUpdate, class UObject* Owner);                                               // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BP_ProjectileTrajectory.BP_ProjectileTrajectory_C.UpdateFromTrajectoryOwner
	// void UpdateFromTrajectoryOwner();                                                                                     // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BP_ProjectileTrajectory.BP_ProjectileTrajectory_C.UserConstructionScript
	// void UserConstructionScript();                                                                                        // [0x18a39e4] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/BP_ProjectileTrajectory.BP_ProjectileTrajectory_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                              // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Game/BP_ProjectileTrajectory.BP_ProjectileTrajectory_C.ReceiveTick
	// void ReceiveTick(float DeltaSeconds);                                                                                 // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Game/BP_ProjectileTrajectory.BP_ProjectileTrajectory_C.SetTrajectorySpline
	// void SetTrajectorySpline(TArray<FVector>& SplinePoints, TArray<FVector>& SplineTangents);                             // [0x18a39e4] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/BP_ProjectileTrajectory.BP_ProjectileTrajectory_C.SetTrajectoryValid
	// void SetTrajectoryValid(bool bIsTrajectoryValid);                                                                     // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Game/BP_ProjectileTrajectory.BP_ProjectileTrajectory_C.UpdateTargetMeshVisibility
	// void UpdateTargetMeshVisibility();                                                                                    // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Game/BP_ProjectileTrajectory.BP_ProjectileTrajectory_C.ReceiveEndPlay
	// void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);                                                       // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Game/BP_ProjectileTrajectory.BP_ProjectileTrajectory_C.ExecuteUbergraph_BP_ProjectileTrajectory
	// void ExecuteUbergraph_BP_ProjectileTrajectory(int32_t EntryPoint);                                                    // [0x18a39e4] Final|HasDefaults    
};

