
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: PlayspaceSystem

/// Class /Script/FNE_VolumeRuntime.FNE_Volume
/// Size: 0x0000 (0x000330 - 0x000330)
class AFNE_Volume : public AGameplayVolume
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 816;

public:
};

/// Class /Script/FNE_VolumeRuntime.FNE_VolumeComponent
/// Size: 0x00A0 (0x000270 - 0x000310)
class UFNE_VolumeComponent : public UChildActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 784;

public:
	SMember(FMulticastInlineDelegate)                  OnPlayerStateBeginOverlap                                   OFFSET(getStruct<T>, {0x270, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPlayerStateEndOverlap                                     OFFSET(getStruct<T>, {0x280, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnOtherActorBeginOverlap                                    OFFSET(getStruct<T>, {0x290, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnOtherActorEndOverlap                                      OFFSET(getStruct<T>, {0x2A0, 16, 0, 0})
	DMember(bool)                                      bEnableOverlap                                              OFFSET(get<bool>, {0x2B0, 1, 0, 0})
	CMember(TMap<EFNEVolumeShapeTypeEnum, UStaticMesh*>) FNEVolumeShapeMap                                         OFFSET(get<T>, {0x2B8, 80, 0, 0})
	CMember(class USpatialGameplayActorTrackerComponent*) SpatialGameplayActorTracker                              OFFSET(get<T>, {0x308, 8, 0, 0})


	/// Functions
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeComponent.UpdateOverLapShape
	// void UpdateOverLapShape(EFNEVolumeShapeTypeEnum EShape, bool bUseCustomShape, class UStaticMesh* CustomShape);           // [0xc0512f4] Final|Native|Public|BlueprintCallable 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeComponent.UnBindFromOnOtherActorEndOverlap
	// void UnBindFromOnOtherActorEndOverlap(FDelegateProperty& InEvent);                                                       // [0xc0511ac] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeComponent.UnBindFromOnOtherActorBeginOverlap
	// void UnBindFromOnOtherActorBeginOverlap(FDelegateProperty& InEvent);                                                     // [0xc051064] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeComponent.SetStaticMeshForBoundsComponent
	// bool SetStaticMeshForBoundsComponent(class UStaticMesh* NewMesh);                                                        // [0xc050d84] Final|Native|Public|BlueprintCallable 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeComponent.SetRelativeScale3DForBoundsComponent
	// void SetRelativeScale3DForBoundsComponent(FVector& Scale3D);                                                             // [0xc050bfc] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeComponent.SetEnableOverlap
	// void SetEnableOverlap(bool bEnable);                                                                                     // [0xc050afc] Final|Native|Public|BlueprintCallable 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeComponent.HandleNotifyPlayerStateEndOverlap
	// void HandleNotifyPlayerStateEndOverlap(class APlayerState* TouchingPlayerState, class AGameplayVolume* Volume);          // [0xc050520] Final|Native|Protected 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeComponent.HandleNotifyPlayerStateBeginOverlap
	// void HandleNotifyPlayerStateBeginOverlap(class APlayerState* TouchingPlayerState, class AGameplayVolume* Volume);        // [0xc05045c] Final|Native|Protected 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeComponent.HandleNotifyActorEndOverlap
	// void HandleNotifyActorEndOverlap(class AActor* OverlappedActor, class AActor* OtherActor);                               // [0xc050398] Final|Native|Private 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeComponent.HandleNotifyActorBeginOverlap
	// void HandleNotifyActorBeginOverlap(class AActor* OverlappedActor, class AActor* OtherActor);                             // [0xc0502d4] Final|Native|Private 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeComponent.GetSpawnedVolumeBoundsComponent
	// class UOverlapComponent* GetSpawnedVolumeBoundsComponent();                                                              // [0xc0502b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeComponent.GetSpawnedVolume
	// class AFNE_Volume* GetSpawnedVolume();                                                                                   // [0xc05028c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeComponent.GetEnableOverlap
	// bool GetEnableOverlap();                                                                                                 // [0xc05025c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeComponent.GetAllTrackedActors
	// TArray<AActor*> GetAllTrackedActors();                                                                                   // [0xc0501dc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeComponent.GetAllPlayerStates
	// TArray<APlayerState*> GetAllPlayerStates();                                                                              // [0xc05015c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeComponent.GetAllPlayerPawns
	// TArray<APawn*> GetAllPlayerPawns();                                                                                      // [0xc0500e4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeComponent.BindToOnOtherActorEndOverlap
	// bool BindToOnOtherActorEndOverlap(FDelegateProperty& InEvent);                                                           // [0xc04ff70] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeComponent.BindToOnOtherActorBeginOverlap
	// bool BindToOnOtherActorBeginOverlap(FDelegateProperty& InEvent);                                                         // [0xc04fe10] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/FNE_VolumeRuntime.FNE_VolumeOverlapComponent
/// Size: 0x0130 (0x0005C0 - 0x0006F0)
class UFNE_VolumeOverlapComponent : public UStaticMeshComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1776;

public:
	SMember(FMulticastInlineDelegate)                  OnPlayerStateBeginOverlap                                   OFFSET(getStruct<T>, {0x5C0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPlayerStateEndOverlap                                     OFFSET(getStruct<T>, {0x5D0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnOtherActorBeginOverlap                                    OFFSET(getStruct<T>, {0x5E0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnOtherActorEndOverlap                                      OFFSET(getStruct<T>, {0x5F0, 16, 0, 0})
	CMember(EVolumeEnableOverlapBehavior)              EnableOverlapBehavior                                       OFFSET(get<T>, {0x600, 1, 0, 0})
	CMember(TMap<EFNEVolumeShapeTypeEnum, UStaticMesh*>) FNEVolumeShapeMap                                         OFFSET(get<T>, {0x608, 80, 0, 0})
	CMember(EFNEVolumeShapeTypeEnum)                   SceneQueryShape                                             OFFSET(get<T>, {0x658, 1, 0, 0})
	CMember(TArray<TEnumAsByte<EObjectTypeQuery>>)     SceneQueryObjectTypes                                       OFFSET(get<T>, {0x660, 16, 0, 0})
	CMember(TWeakObjectPtr<AFortMinigame*>)            CachedMinigame                                              OFFSET(get<T>, {0x690, 8, 0, 0})
	CMember(TSet<AActor*>)                             TrackedActors                                               OFFSET(get<T>, {0x698, 80, 0, 0})


	/// Functions
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeOverlapComponent.UpdateOverLapShape
	// void UpdateOverLapShape(EFNEVolumeShapeTypeEnum EShape, bool bUseCustomShape, class UStaticMesh* CustomShape);           // [0xc0513fc] Final|Native|Public|BlueprintCallable 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeOverlapComponent.UnBindFromOnOtherActorEndOverlap
	// void UnBindFromOnOtherActorEndOverlap(FDelegateProperty& InEvent);                                                       // [0xc051250] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeOverlapComponent.UnBindFromOnOtherActorBeginOverlap
	// void UnBindFromOnOtherActorBeginOverlap(FDelegateProperty& InEvent);                                                     // [0xc051108] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeOverlapComponent.ShouldAllowOverlapEventToFire
	// bool ShouldAllowOverlapEventToFire(class AActor* OverlapActor);                                                          // [0xc050fd0] Native|Event|Public|BlueprintEvent 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeOverlapComponent.SetVolumeMaterial
	// void SetVolumeMaterial(TWeakObjectPtr<UMaterialInterface*> MaterialToLoad, int32_t ElementIndex);                        // [0xc050ea4] Final|Native|Public|BlueprintCallable 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeOverlapComponent.SetStaticMeshForBoundsComponent
	// bool SetStaticMeshForBoundsComponent(class UStaticMesh* NewMesh);                                                        // [0xc050e14] Final|Native|Public|BlueprintCallable 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeOverlapComponent.SetRelativeScale3DForBoundsComponent
	// void SetRelativeScale3DForBoundsComponent(FVector& Scale3D);                                                             // [0xc050cc0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeOverlapComponent.SetEnableOverlapBehavior
	// void SetEnableOverlapBehavior(EVolumeEnableOverlapBehavior InOverlapBehavior);                                           // [0xc050b7c] Final|Native|Public|BlueprintCallable 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeOverlapComponent.OnMinigameStarted
	// void OnMinigameStarted();                                                                                                // [0xc050ae8] Final|Native|Protected 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeOverlapComponent.OnMinigameRoundEnded
	// void OnMinigameRoundEnded(class AFortPlayerController* Instigator, EFortMinigameEnd EndMethod, EFortMinigameState NextState); // [0xc0509f0] Final|Native|Protected 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeOverlapComponent.OnMinigameEnded
	// void OnMinigameEnded();                                                                                                  // [0xc0509dc] Final|Native|Protected 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeOverlapComponent.OnEndActorOverlap
	// void OnEndActorOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // [0xc0508b0] Final|Native|Private 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeOverlapComponent.OnBeginActorOverlap
	// void OnBeginActorOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0xc0506a8] Final|Native|Private|HasOutParms 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeOverlapComponent.HandleTrackedActorEndPlay
	// void HandleTrackedActorEndPlay(class AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason);                          // [0xc0505e4] Final|Native|Private 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeOverlapComponent.GetEnableOverlap
	// EVolumeEnableOverlapBehavior GetEnableOverlap();                                                                         // [0xc050274] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeOverlapComponent.GetAllTrackedActors
	// TArray<AActor*> GetAllTrackedActors();                                                                                   // [0xc05021c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeOverlapComponent.GetAllPlayerStates
	// TArray<APlayerState*> GetAllPlayerStates();                                                                              // [0xc05019c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeOverlapComponent.GetAllPlayerPawns
	// TArray<APawn*> GetAllPlayerPawns();                                                                                      // [0xc050120] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeOverlapComponent.CheckCollidingActorsSceneQuery
	// void CheckCollidingActorsSceneQuery();                                                                                   // [0xc0500d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeOverlapComponent.BindToOnOtherActorEndOverlap
	// bool BindToOnOtherActorEndOverlap(FDelegateProperty& InEvent);                                                           // [0xc050020] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeOverlapComponent.BindToOnOtherActorBeginOverlap
	// bool BindToOnOtherActorBeginOverlap(FDelegateProperty& InEvent);                                                         // [0xc04fec0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeOverlapComponent.ActorExitVolume
	// void ActorExitVolume(class AActor* LeavingActor);                                                                        // [0xc04fd90] Final|Native|Private 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeOverlapComponent.ActorEnteredVolume
	// void ActorEnteredVolume(class AActor* EnteringActor);                                                                    // [0xc04fd10] Final|Native|Private 
};

/// Enum /Script/FNE_VolumeRuntime.EFNEVolumeShapeTypeEnum
/// Size: 0x04
enum class EFNEVolumeShapeTypeEnum : uint8_t
{
	EFNEVolumeShapeTypeEnum__BoxVolume                                               = 0,
	EFNEVolumeShapeTypeEnum__CylinderVolume                                          = 1,
	EFNEVolumeShapeTypeEnum__SphereVolume                                            = 2,
	EFNEVolumeShapeTypeEnum__CustomVolume                                            = 3
};

/// Enum /Script/FNE_VolumeRuntime.EVolumeEnableOverlapBehavior
/// Size: 0x03
enum class EVolumeEnableOverlapBehavior : uint8_t
{
	EVolumeEnableOverlapBehavior__Never                                              = 0,
	EVolumeEnableOverlapBehavior__Game                                               = 1,
	EVolumeEnableOverlapBehavior__Always                                             = 2
};

