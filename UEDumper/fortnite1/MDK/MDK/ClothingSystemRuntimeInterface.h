
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject

/// Class /Script/ClothingSystemRuntimeInterface.ClothingAssetBase
/// Size: 0x0020 (0x000028 - 0x000048)
class UClothingAssetBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FString)                                   ImportedFilePath                                            OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	SMember(FGuid)                                     AssetGuid                                                   OFFSET(getStruct<T>, {0x38, 16, 0, 0})
};

/// Class /Script/ClothingSystemRuntimeInterface.ClothConfigBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UClothConfigBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/ClothingSystemRuntimeInterface.ClothSharedSimConfigBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UClothSharedSimConfigBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/ClothingSystemRuntimeInterface.ClothingSimulationFactory
/// Size: 0x0000 (0x000028 - 0x000028)
class UClothingSimulationFactory : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/ClothingSystemRuntimeInterface.ClothingInteractor
/// Size: 0x0008 (0x000028 - 0x000030)
class UClothingInteractor : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/ClothingSystemRuntimeInterface.ClothingSimulationInteractor
/// Size: 0x0068 (0x000028 - 0x000090)
class UClothingSimulationInteractor : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	CMember(TMap<FName, UClothingInteractor*>)         ClothingInteractors                                         OFFSET(get<T>, {0x28, 80, 0, 0})


	/// Functions
	// Function /Script/ClothingSystemRuntimeInterface.ClothingSimulationInteractor.SetNumSubsteps
	// void SetNumSubsteps(int32_t NumSubsteps);                                                                                // [0x2468610] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/ClothingSystemRuntimeInterface.ClothingSimulationInteractor.SetNumIterations
	// void SetNumIterations(int32_t NumIterations);                                                                            // [0x2468548] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/ClothingSystemRuntimeInterface.ClothingSimulationInteractor.SetMaxNumIterations
	// void SetMaxNumIterations(int32_t MaxNumIterations);                                                                      // [0x5ead6cc] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/ClothingSystemRuntimeInterface.ClothingSimulationInteractor.SetAnimDriveSpringStiffness
	// void SetAnimDriveSpringStiffness(float InStiffness);                                                                     // [0x5ead604] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/ClothingSystemRuntimeInterface.ClothingSimulationInteractor.PhysicsAssetUpdated
	// void PhysicsAssetUpdated();                                                                                              // [0x1509824] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetSimulationTime
	// float GetSimulationTime();                                                                                               // [0x5ead5ec] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumSubsteps
	// int32_t GetNumSubsteps();                                                                                                // [0x5ead5d4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumKinematicParticles
	// int32_t GetNumKinematicParticles();                                                                                      // [0x5ead5c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumIterations
	// int32_t GetNumIterations();                                                                                              // [0x5ead5a8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumDynamicParticles
	// int32_t GetNumDynamicParticles();                                                                                        // [0x5ead590] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumCloths
	// int32_t GetNumCloths();                                                                                                  // [0x5ead57c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetClothingInteractor
	// class UClothingInteractor* GetClothingInteractor(FString ClothingAssetName);                                             // [0x150b510] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ClothingSystemRuntimeInterface.ClothingSimulationInteractor.EnableGravityOverride
	// void EnableGravityOverride(FVector& InVector);                                                                           // [0x5ead4b4] RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/ClothingSystemRuntimeInterface.ClothingSimulationInteractor.DisableGravityOverride
	// void DisableGravityOverride();                                                                                           // [0x1f11b04] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/ClothingSystemRuntimeInterface.ClothingSimulationInteractor.ClothConfigUpdated
	// void ClothConfigUpdated();                                                                                               // [0x1f82a80] RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/ClothingSystemRuntimeInterface.ClothPhysicalMeshDataBase_Legacy
/// Size: 0x00B8 (0x000028 - 0x0000E0)
class UClothPhysicalMeshDataBase_Legacy : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	CMember(TArray<FVector3f>)                         Vertices                                                    OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(TArray<FVector3f>)                         Normals                                                     OFFSET(get<T>, {0x38, 16, 0, 0})
	CMember(TArray<uint32_t>)                          Indices                                                     OFFSET(get<T>, {0x48, 16, 0, 0})
	CMember(TArray<float>)                             InverseMasses                                               OFFSET(get<T>, {0x58, 16, 0, 0})
	CMember(TArray<FClothVertBoneData>)                BoneData                                                    OFFSET(get<T>, {0x68, 16, 0, 0})
	DMember(int32_t)                                   NumFixedVerts                                               OFFSET(get<int32_t>, {0x78, 4, 0, 0})
	DMember(int32_t)                                   MaxBoneWeights                                              OFFSET(get<int32_t>, {0x7C, 4, 0, 0})
	CMember(TArray<uint32_t>)                          SelfCollisionIndices                                        OFFSET(get<T>, {0x80, 16, 0, 0})
};

/// Struct /Script/ClothingSystemRuntimeInterface.ClothCollisionPrim_Sphere
/// Size: 0x0020 (0x000000 - 0x000020)
class FClothCollisionPrim_Sphere : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(int32_t)                                   BoneIndex                                                   OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(float)                                     Radius                                                      OFFSET(get<float>, {0x4, 4, 0, 0})
	SMember(FVector)                                   LocalPosition                                               OFFSET(getStruct<T>, {0x8, 24, 0, 0})
};

/// Struct /Script/ClothingSystemRuntimeInterface.ClothCollisionPrim_SphereConnection
/// Size: 0x0008 (0x000000 - 0x000008)
class FClothCollisionPrim_SphereConnection : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(int32_t)                                   SphereIndices                                               OFFSET(get<int32_t>, {0x0, 8, 0, 0})
};

/// Struct /Script/ClothingSystemRuntimeInterface.ClothCollisionPrim_ConvexFace
/// Size: 0x0030 (0x000000 - 0x000030)
class FClothCollisionPrim_ConvexFace : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FPlane)                                    Plane                                                       OFFSET(getStruct<T>, {0x0, 32, 0, 0})
	CMember(TArray<int32_t>)                           Indices                                                     OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/ClothingSystemRuntimeInterface.ClothCollisionPrim_Convex
/// Size: 0x0028 (0x000000 - 0x000028)
class FClothCollisionPrim_Convex : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(TArray<FClothCollisionPrim_ConvexFace>)    Faces                                                       OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FVector>)                           SurfacePoints                                               OFFSET(get<T>, {0x10, 16, 0, 0})
	DMember(int32_t)                                   BoneIndex                                                   OFFSET(get<int32_t>, {0x20, 4, 0, 0})
};

/// Struct /Script/ClothingSystemRuntimeInterface.ClothCollisionPrim_Box
/// Size: 0x0060 (0x000000 - 0x000060)
class FClothCollisionPrim_Box : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FVector)                                   LocalPosition                                               OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FQuat)                                     LocalRotation                                               OFFSET(getStruct<T>, {0x20, 32, 0, 0})
	SMember(FVector)                                   HalfExtents                                                 OFFSET(getStruct<T>, {0x40, 24, 0, 0})
	DMember(int32_t)                                   BoneIndex                                                   OFFSET(get<int32_t>, {0x58, 4, 0, 0})
};

/// Struct /Script/ClothingSystemRuntimeInterface.ClothVertBoneData
/// Size: 0x004C (0x000000 - 0x00004C)
class FClothVertBoneData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 76;

public:
	DMember(int32_t)                                   NumInfluences                                               OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(uint16_t)                                  BoneIndices                                                 OFFSET(get<uint16_t>, {0x4, 24, 0, 0})
	DMember(float)                                     BoneWeights                                                 OFFSET(get<float>, {0x1C, 48, 0, 0})
};

/// Struct /Script/ClothingSystemRuntimeInterface.ClothCollisionData
/// Size: 0x0040 (0x000000 - 0x000040)
class FClothCollisionData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(TArray<FClothCollisionPrim_Sphere>)        Spheres                                                     OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FClothCollisionPrim_SphereConnection>) SphereConnections                                        OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<FClothCollisionPrim_Convex>)        Convexes                                                    OFFSET(get<T>, {0x20, 16, 0, 0})
	CMember(TArray<FClothCollisionPrim_Box>)           Boxes                                                       OFFSET(get<T>, {0x30, 16, 0, 0})
};

