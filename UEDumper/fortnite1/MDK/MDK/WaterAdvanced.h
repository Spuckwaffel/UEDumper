
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine
/// dependency: Niagara

/// Class /Script/WaterAdvanced.ShallowWaterPhysicsAssetOverridesDataAsset
/// Size: 0x0050 (0x000030 - 0x000080)
class UShallowWaterPhysicsAssetOverridesDataAsset : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(TMap<FGameplayTag, FShallowWaterPhysicsAssetOverride>) Overrides                                       OFFSET(get<T>, {0x30, 80, 0, 0})
};

/// Class /Script/WaterAdvanced.ShallowWaterSettings
/// Size: 0x0090 (0x000030 - 0x0000C0)
class UShallowWaterSettings : public UDeveloperSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	CMember(TWeakObjectPtr<UNiagaraSystem*>)           DefaultShallowWaterNiagaraSimulation                        OFFSET(get<T>, {0x30, 32, 0, 0})
	SMember(FShallowWaterSimParameters)                ShallowWaterSimParameters                                   OFFSET(getStruct<T>, {0x50, 12, 0, 0})
	CMember(TWeakObjectPtr<UMaterialParameterCollection*>) WaterMPC                                                OFFSET(get<T>, {0x60, 32, 0, 0})
	SMember(FName)                                     GridCenterMPCName                                           OFFSET(getStruct<T>, {0x80, 4, 0, 0})
	SMember(FName)                                     WorldGridSizeMPCName                                        OFFSET(getStruct<T>, {0x84, 4, 0, 0})
	SMember(FName)                                     ResolutionMaxAxisMPCName                                    OFFSET(getStruct<T>, {0x88, 4, 0, 0})
	SMember(FName)                                     NormalRTMaterialName                                        OFFSET(getStruct<T>, {0x8C, 4, 0, 0})
	DMember(int32_t)                                   MaxActivePawnNum                                            OFFSET(get<int32_t>, {0x90, 4, 0, 0})
	DMember(int32_t)                                   MaxImpulseForceNum                                          OFFSET(get<int32_t>, {0x94, 4, 0, 0})
	CMember(TWeakObjectPtr<UShallowWaterPhysicsAssetOverridesDataAsset*>) PhysicsAssetProxiesDataAsset             OFFSET(get<T>, {0x98, 32, 0, 0})
	DMember(bool)                                      bVisualizeActivePawn                                        OFFSET(get<bool>, {0xB8, 1, 0, 0})
};

/// Class /Script/WaterAdvanced.ShallowWaterSubsystem
/// Size: 0x01E0 (0x000040 - 0x000220)
class UShallowWaterSubsystem : public UTickableWorldSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 544;

public:
	CMember(class UNiagaraComponent*)                  ShallowWaterNiagaraSimulation                               OFFSET(get<T>, {0x40, 8, 0, 0})
	CMember(class UTextureRenderTarget2D*)             WaterInfoTexture                                            OFFSET(get<T>, {0x48, 8, 0, 0})
	CMember(class UTextureRenderTarget2D*)             NormalRT                                                    OFFSET(get<T>, {0x50, 8, 0, 0})
	CMember(class UShallowWaterSettings*)              Settings                                                    OFFSET(get<T>, {0x58, 8, 0, 0})
	CMember(class UMaterialParameterCollection*)       MPC                                                         OFFSET(get<T>, {0x60, 8, 0, 0})
	CMember(TArray<TWeakObjectPtr<APawn*>>)            ActivePawns                                                 OFFSET(get<T>, {0x68, 16, 0, 0})
	CMember(TSet<UWaterBodyComponent*>)                WaterBodyComponentsWithProperMIDParameters                  OFFSET(get<T>, {0xD0, 80, 0, 0})
	CMember(TArray<class AWaterBody*>)                 PendingWaterBodiesToSetMIDOnInitialize                      OFFSET(get<T>, {0x120, 16, 0, 0})
	CMember(TArray<FShallowWaterCollisionContext>)     PreviousContexts                                            OFFSET(get<T>, {0x130, 16, 0, 0})
	CMember(TArray<FShallowWaterCollisionContext>)     PendingContexts                                             OFFSET(get<T>, {0x140, 16, 0, 0})
	CMember(TMap<FShallowWaterCollisionContext, USkeletalMeshComponent*>) VehicleCollisionProxies                  OFFSET(get<T>, {0x150, 80, 0, 0})
	CMember(TArray<FShallowWaterCollisionTracker_Actor>) Tracker_Actors                                            OFFSET(get<T>, {0x1A8, 16, 0, 0})
	CMember(TArray<FShallowWaterCollisionTracker_Direct>) Tracker_Directs                                          OFFSET(get<T>, {0x1B8, 16, 0, 0})


	/// Functions
	// Function /Script/WaterAdvanced.ShallowWaterSubsystem.SetWaterBodyMIDParameters
	// void SetWaterBodyMIDParameters(class AWaterBody* WaterBody);                                                             // [0xb927714] Final|Native|Public|BlueprintCallable 
	// Function /Script/WaterAdvanced.ShallowWaterSubsystem.ResetImpacts
	// void ResetImpacts();                                                                                                     // [0xb927700] Final|Native|Public|BlueprintCallable 
	// Function /Script/WaterAdvanced.ShallowWaterSubsystem.RemoveCollisionTrackerForActor
	// void RemoveCollisionTrackerForActor(class AActor* CollisionTrackerActor);                                                // [0xb9275f4] Final|Native|Protected|BlueprintCallable 
	// Function /Script/WaterAdvanced.ShallowWaterSubsystem.RegisterImpact
	// void RegisterImpact(FVector ImpactPosition, FVector ImpactVelocity, float ImpactRadius);                                 // [0xb927404] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/WaterAdvanced.ShallowWaterSubsystem.OnWaterInfoTextureCreated
	// void OnWaterInfoTextureCreated(class UTextureRenderTarget2D* WaterInfoTexture);                                          // [0xb92731c] Final|Native|Protected 
	// Function /Script/WaterAdvanced.ShallowWaterSubsystem.OnLocalPlayerPawnBecomesValid
	// void OnLocalPlayerPawnBecomesValid(class APawn* OldPawn, class APawn* NewPawn);                                          // [0xb9271cc] Final|Native|Private 
	// Function /Script/WaterAdvanced.ShallowWaterSubsystem.OnLocalPlayerControllerBecomesValid
	// void OnLocalPlayerControllerBecomesValid(class APlayerController* InPlayerController);                                   // [0xb926fb4] Final|Native|Private 
	// Function /Script/WaterAdvanced.ShallowWaterSubsystem.GetAllOverlappingWaterBodiesAndUpdateCollisionTrackers
	// TSet<AWaterBody*> GetAllOverlappingWaterBodiesAndUpdateCollisionTrackers();                                              // [0xb926ef8] Native|Protected|BlueprintCallable 
	// Function /Script/WaterAdvanced.ShallowWaterSubsystem.AddCollisionTrackerForActor
	// void AddCollisionTrackerForActor(class AActor* CollisionTrackerActor, float MaxLifespan);                                // [0xb926c80] Final|Native|Protected|BlueprintCallable 
};

/// Struct /Script/WaterAdvanced.ShallowWaterSimParameters
/// Size: 0x000C (0x000000 - 0x00000C)
class FShallowWaterSimParameters : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(float)                                     WorldGridSize                                               OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   ResolutionMaxAxis                                           OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   MaxImpactsPerFrame                                          OFFSET(get<int32_t>, {0x8, 4, 0, 0})
};

/// Struct /Script/WaterAdvanced.ShallowWaterPhysicsAssetOverride
/// Size: 0x0020 (0x000000 - 0x000020)
class FShallowWaterPhysicsAssetOverride : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(TWeakObjectPtr<UPhysicsAsset*>)            PhysicsAsset                                                OFFSET(get<T>, {0x0, 32, 0, 0})
};

/// Struct /Script/WaterAdvanced.ShallowWaterCollisionContext
/// Size: 0x0018 (0x000000 - 0x000018)
class FShallowWaterCollisionContext : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(class USkeletalMeshComponent*)             Component                                                   OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/WaterAdvanced.ShallowWaterCollisionTracker_Actor
/// Size: 0x0010 (0x000000 - 0x000010)
class FShallowWaterCollisionTracker_Actor : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TWeakObjectPtr<AActor*>)                   CollisionActor                                              OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/WaterAdvanced.ShallowWaterCollisionTracker_Direct
/// Size: 0x0010 (0x000000 - 0x000010)
class FShallowWaterCollisionTracker_Direct : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TWeakObjectPtr<AWaterBody*>)               WaterBody                                                   OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Enum /Script/WaterAdvanced.EShallowWaterCollisionContextType
/// Size: 0x04
enum class EShallowWaterCollisionContextType : uint8_t
{
	EShallowWaterCollisionContextType__Pawn                                          = 0,
	EShallowWaterCollisionContextType__Vehicle                                       = 1,
	EShallowWaterCollisionContextType__Custom                                        = 2,
	EShallowWaterCollisionContextType__EShallowWaterCollisionContextType_MAX         = 3
};

