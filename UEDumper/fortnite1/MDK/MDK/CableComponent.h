
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/CableComponent.CableActor
/// Size: 0x0008 (0x000290 - 0x000298)
class ACableActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 664;

public:
	CMember(class UCableComponent*)                    CableComponent                                              OFFSET(get<T>, {0x290, 8, 0, 0})
};

/// Class /Script/CableComponent.CableComponent
/// Size: 0x00B0 (0x000540 - 0x0005F0)
class UCableComponent : public UMeshComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1520;

public:
	DMember(bool)                                      bAttachStart                                                OFFSET(get<bool>, {0x538, 1, 0, 0})
	DMember(bool)                                      bAttachEnd                                                  OFFSET(get<bool>, {0x539, 1, 0, 0})
	SMember(FComponentReference)                       AttachEndTo                                                 OFFSET(getStruct<T>, {0x540, 40, 0, 0})
	SMember(FName)                                     AttachEndToSocketName                                       OFFSET(getStruct<T>, {0x568, 4, 0, 0})
	SMember(FVector)                                   EndLocation                                                 OFFSET(getStruct<T>, {0x570, 24, 0, 0})
	DMember(float)                                     CableLength                                                 OFFSET(get<float>, {0x588, 4, 0, 0})
	DMember(int32_t)                                   NumSegments                                                 OFFSET(get<int32_t>, {0x58C, 4, 0, 0})
	DMember(float)                                     SubstepTime                                                 OFFSET(get<float>, {0x590, 4, 0, 0})
	DMember(int32_t)                                   SolverIterations                                            OFFSET(get<int32_t>, {0x594, 4, 0, 0})
	DMember(bool)                                      bEnableStiffness                                            OFFSET(get<bool>, {0x598, 1, 0, 0})
	DMember(bool)                                      bUseSubstepping                                             OFFSET(get<bool>, {0x599, 1, 0, 0})
	DMember(bool)                                      bSkipCableUpdateWhenNotVisible                              OFFSET(get<bool>, {0x59A, 1, 0, 0})
	DMember(bool)                                      bSkipCableUpdateWhenNotOwnerRecentlyRendered                OFFSET(get<bool>, {0x59B, 1, 0, 0})
	DMember(bool)                                      bEnableCollision                                            OFFSET(get<bool>, {0x59C, 1, 0, 0})
	DMember(float)                                     CollisionFriction                                           OFFSET(get<float>, {0x5A0, 4, 0, 0})
	SMember(FVector)                                   CableForce                                                  OFFSET(getStruct<T>, {0x5A8, 24, 0, 0})
	DMember(float)                                     CableGravityScale                                           OFFSET(get<float>, {0x5C0, 4, 0, 0})
	DMember(float)                                     CableWidth                                                  OFFSET(get<float>, {0x5C4, 4, 0, 0})
	DMember(int32_t)                                   NumSides                                                    OFFSET(get<int32_t>, {0x5C8, 4, 0, 0})
	DMember(float)                                     TileMaterial                                                OFFSET(get<float>, {0x5CC, 4, 0, 0})


	/// Functions
	// Function /Script/CableComponent.CableComponent.SetAttachEndToComponent
	// void SetAttachEndToComponent(class USceneComponent* Component, FName SocketName);                                        // [0x83d83a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CableComponent.CableComponent.SetAttachEndTo
	// void SetAttachEndTo(class AActor* Actor, FName ComponentProperty, FName SocketName);                                     // [0x83d8150] Final|Native|Public|BlueprintCallable 
	// Function /Script/CableComponent.CableComponent.GetCableParticleLocations
	// void GetCableParticleLocations(TArray<FVector>& Locations);                                                              // [0x83d80b4] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CableComponent.CableComponent.GetAttachedComponent
	// class USceneComponent* GetAttachedComponent();                                                                           // [0x83d8060] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CableComponent.CableComponent.GetAttachedActor
	// class AActor* GetAttachedActor();                                                                                        // [0x83d8038] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

