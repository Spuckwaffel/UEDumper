
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/CableComponent.CableActor
/// Size: 0x0008 (0x000290 - 0x000298)
class ACableActor : public AActor
{ 
public:
	class UCableComponent*                             CableComponent;                                             // 0x0290   (0x0008)  
};

/// Class /Script/CableComponent.CableComponent
/// Size: 0x00B0 (0x000540 - 0x0005F0)
class UCableComponent : public UMeshComponent
{ 
public:
	bool                                               bAttachStart;                                               // 0x0538   (0x0001)  
	bool                                               bAttachEnd;                                                 // 0x0539   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x053A   (0x0006)  MISSED
	FComponentReference                                AttachEndTo;                                                // 0x0540   (0x0028)  
	FName                                              AttachEndToSocketName;                                      // 0x0568   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x056C   (0x0004)  MISSED
	FVector                                            EndLocation;                                                // 0x0570   (0x0018)  
	float                                              CableLength;                                                // 0x0588   (0x0004)  
	int32_t                                            NumSegments;                                                // 0x058C   (0x0004)  
	float                                              SubstepTime;                                                // 0x0590   (0x0004)  
	int32_t                                            SolverIterations;                                           // 0x0594   (0x0004)  
	bool                                               bEnableStiffness;                                           // 0x0598   (0x0001)  
	bool                                               bUseSubstepping;                                            // 0x0599   (0x0001)  
	bool                                               bSkipCableUpdateWhenNotVisible;                             // 0x059A   (0x0001)  
	bool                                               bSkipCableUpdateWhenNotOwnerRecentlyRendered;               // 0x059B   (0x0001)  
	bool                                               bEnableCollision;                                           // 0x059C   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x059D   (0x0003)  MISSED
	float                                              CollisionFriction;                                          // 0x05A0   (0x0004)  
	unsigned char                                      UnknownData03_5[0x4];                                       // 0x05A4   (0x0004)  MISSED
	FVector                                            CableForce;                                                 // 0x05A8   (0x0018)  
	float                                              CableGravityScale;                                          // 0x05C0   (0x0004)  
	float                                              CableWidth;                                                 // 0x05C4   (0x0004)  
	int32_t                                            NumSides;                                                   // 0x05C8   (0x0004)  
	float                                              TileMaterial;                                               // 0x05CC   (0x0004)  
	unsigned char                                      UnknownData04_6[0x20];                                      // 0x05D0   (0x0020)  MISSED


	/// Functions
	// Function /Script/CableComponent.CableComponent.SetAttachEndToComponent
	// void SetAttachEndToComponent(class USceneComponent* Component, FName SocketName);                                     // [0x7e306d8] Final|Native|Public|BlueprintCallable 
	// Function /Script/CableComponent.CableComponent.SetAttachEndTo
	// void SetAttachEndTo(class AActor* Actor, FName ComponentProperty, FName SocketName);                                  // [0x7e30544] Final|Native|Public|BlueprintCallable 
	// Function /Script/CableComponent.CableComponent.GetCableParticleLocations
	// void GetCableParticleLocations(TArray<FVector>& Locations);                                                           // [0x7e304a8] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CableComponent.CableComponent.GetAttachedComponent
	// class USceneComponent* GetAttachedComponent();                                                                        // [0x7e30448] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CableComponent.CableComponent.GetAttachedActor
	// class AActor* GetAttachedActor();                                                                                     // [0x7e30420] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

