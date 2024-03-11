
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: PlayspaceSystem

/// Enum /Script/FNE_VolumeRuntime.EFNEVolumeShapeTypeEnum
/// Size: 0x05
enum class EFNEVolumeShapeTypeEnum : uint8_t
{
	EFNEVolumeShapeTypeEnum__BoxVolume                                               = 0,
	EFNEVolumeShapeTypeEnum__CylinderVolume                                          = 1,
	EFNEVolumeShapeTypeEnum__SphereVolume                                            = 2,
	EFNEVolumeShapeTypeEnum__CustomVolume                                            = 3,
	EFNEVolumeShapeTypeEnum__EFNEVolumeShapeTypeEnum_MAX                             = 4
};

/// Class /Script/FNE_VolumeRuntime.FNE_Volume
/// Size: 0x0000 (0x000330 - 0x000330)
class AFNE_Volume : public AGameplayVolume
{ 
public:
};

/// Class /Script/FNE_VolumeRuntime.FNE_VolumeComponent
/// Size: 0x00A0 (0x000270 - 0x000310)
class UFNE_VolumeComponent : public UChildActorComponent
{ 
public:
	SDK_UNDEFINED(16,13925) /* FMulticastInlineDelegate */ __um(OnPlayerStateBeginOverlap);                        // 0x0270   (0x0010)  
	SDK_UNDEFINED(16,13926) /* FMulticastInlineDelegate */ __um(OnPlayerStateEndOverlap);                          // 0x0280   (0x0010)  
	SDK_UNDEFINED(16,13927) /* FMulticastInlineDelegate */ __um(OnOtherActorBeginOverlap);                         // 0x0290   (0x0010)  
	SDK_UNDEFINED(16,13928) /* FMulticastInlineDelegate */ __um(OnOtherActorEndOverlap);                           // 0x02A0   (0x0010)  
	bool                                               bEnableOverlap;                                             // 0x02B0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x02B1   (0x0007)  MISSED
	SDK_UNDEFINED(80,13929) /* TMap<EFNEVolumeShapeTypeEnum, UStaticMesh*> */ __um(FNEVolumeShapeMap);             // 0x02B8   (0x0050)  
	class USpatialGameplayActorTrackerComponent*       SpatialGameplayActorTracker;                                // 0x0308   (0x0008)  


	/// Functions
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeComponent.UpdateOverLapShape
	// void UpdateOverLapShape(EFNEVolumeShapeTypeEnum EShape, bool bUseCustomShape, class UStaticMesh* CustomShape);        // [0xab4e6a4] Final|Native|Public|BlueprintCallable 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeComponent.UnBindFromOnOtherActorEndOverlap
	// void UnBindFromOnOtherActorEndOverlap(FDelegateProperty& InEvent);                                                    // [0xab4e55c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeComponent.UnBindFromOnOtherActorBeginOverlap
	// void UnBindFromOnOtherActorBeginOverlap(FDelegateProperty& InEvent);                                                  // [0xab4e414] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeComponent.SetStaticMeshForBoundsComponent
	// bool SetStaticMeshForBoundsComponent(class UStaticMesh* NewMesh);                                                     // [0xab4e134] Final|Native|Public|BlueprintCallable 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeComponent.SetRelativeScale3DForBoundsComponent
	// void SetRelativeScale3DForBoundsComponent(FVector& Scale3D);                                                          // [0xab4dfac] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeComponent.SetEnableOverlap
	// void SetEnableOverlap(bool bEnable);                                                                                  // [0xab4deac] Final|Native|Public|BlueprintCallable 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeComponent.HandleNotifyPlayerStateEndOverlap
	// void HandleNotifyPlayerStateEndOverlap(class APlayerState* TouchingPlayerState, class AGameplayVolume* Volume);       // [0xab4d8d0] Final|Native|Protected 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeComponent.HandleNotifyPlayerStateBeginOverlap
	// void HandleNotifyPlayerStateBeginOverlap(class APlayerState* TouchingPlayerState, class AGameplayVolume* Volume);     // [0xab4d80c] Final|Native|Protected 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeComponent.HandleNotifyActorEndOverlap
	// void HandleNotifyActorEndOverlap(class AActor* OverlappedActor, class AActor* OtherActor);                            // [0xab4d748] Final|Native|Private 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeComponent.HandleNotifyActorBeginOverlap
	// void HandleNotifyActorBeginOverlap(class AActor* OverlappedActor, class AActor* OtherActor);                          // [0xab4d684] Final|Native|Private 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeComponent.GetSpawnedVolumeBoundsComponent
	// class UOverlapComponent* GetSpawnedVolumeBoundsComponent();                                                           // [0xab4d660] Final|Native|Public|BlueprintCallable 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeComponent.GetSpawnedVolume
	// class AFNE_Volume* GetSpawnedVolume();                                                                                // [0xab4d63c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeComponent.GetEnableOverlap
	// bool GetEnableOverlap();                                                                                              // [0xab4d60c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeComponent.GetAllTrackedActors
	// TArray<AActor*> GetAllTrackedActors();                                                                                // [0xab4d58c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeComponent.GetAllPlayerStates
	// TArray<APlayerState*> GetAllPlayerStates();                                                                           // [0xab4d50c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeComponent.GetAllPlayerPawns
	// TArray<APawn*> GetAllPlayerPawns();                                                                                   // [0xab4d494] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeComponent.BindToOnOtherActorEndOverlap
	// bool BindToOnOtherActorEndOverlap(FDelegateProperty& InEvent);                                                        // [0xab4d320] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeComponent.BindToOnOtherActorBeginOverlap
	// bool BindToOnOtherActorBeginOverlap(FDelegateProperty& InEvent);                                                      // [0xab4d1c0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/FNE_VolumeRuntime.FNE_VolumeOverlapComponent
/// Size: 0x0130 (0x0005C0 - 0x0006F0)
class UFNE_VolumeOverlapComponent : public UStaticMeshComponent
{ 
public:
	SDK_UNDEFINED(16,13930) /* FMulticastInlineDelegate */ __um(OnPlayerStateBeginOverlap);                        // 0x05C0   (0x0010)  
	SDK_UNDEFINED(16,13931) /* FMulticastInlineDelegate */ __um(OnPlayerStateEndOverlap);                          // 0x05D0   (0x0010)  
	SDK_UNDEFINED(16,13932) /* FMulticastInlineDelegate */ __um(OnOtherActorBeginOverlap);                         // 0x05E0   (0x0010)  
	SDK_UNDEFINED(16,13933) /* FMulticastInlineDelegate */ __um(OnOtherActorEndOverlap);                           // 0x05F0   (0x0010)  
	bool                                               bEnableOverlap;                                             // 0x0600   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0601   (0x0007)  MISSED
	SDK_UNDEFINED(80,13934) /* TMap<EFNEVolumeShapeTypeEnum, UStaticMesh*> */ __um(FNEVolumeShapeMap);             // 0x0608   (0x0050)  
	EFNEVolumeShapeTypeEnum                            SceneQueryShape;                                            // 0x0658   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0659   (0x0007)  MISSED
	SDK_UNDEFINED(16,13935) /* TArray<TEnumAsByte<EObjectTypeQuery>> */ __um(SceneQueryObjectTypes);               // 0x0660   (0x0010)  
	unsigned char                                      UnknownData02_5[0x20];                                      // 0x0670   (0x0020)  MISSED
	SDK_UNDEFINED(8,13936) /* TWeakObjectPtr<AFortMinigame*> */ __um(CachedMinigame);                              // 0x0690   (0x0008)  
	SDK_UNDEFINED(80,13937) /* TSet<AActor*> */        __um(TrackedActors);                                        // 0x0698   (0x0050)  
	unsigned char                                      UnknownData03_6[0x8];                                       // 0x06E8   (0x0008)  MISSED


	/// Functions
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeOverlapComponent.UpdateOverLapShape
	// void UpdateOverLapShape(EFNEVolumeShapeTypeEnum EShape, bool bUseCustomShape, class UStaticMesh* CustomShape);        // [0xab4e7ac] Final|Native|Public|BlueprintCallable 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeOverlapComponent.UnBindFromOnOtherActorEndOverlap
	// void UnBindFromOnOtherActorEndOverlap(FDelegateProperty& InEvent);                                                    // [0xab4e600] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeOverlapComponent.UnBindFromOnOtherActorBeginOverlap
	// void UnBindFromOnOtherActorBeginOverlap(FDelegateProperty& InEvent);                                                  // [0xab4e4b8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeOverlapComponent.ShouldAllowOverlapEventToFire
	// bool ShouldAllowOverlapEventToFire(class AActor* OverlapActor);                                                       // [0xab4e380] Native|Event|Public|BlueprintEvent 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeOverlapComponent.SetVolumeMaterial
	// void SetVolumeMaterial(TWeakObjectPtr<UMaterialInterface*> MaterialToLoad, int32_t ElementIndex);                     // [0xab4e254] Final|Native|Public|BlueprintCallable 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeOverlapComponent.SetStaticMeshForBoundsComponent
	// bool SetStaticMeshForBoundsComponent(class UStaticMesh* NewMesh);                                                     // [0xab4e1c4] Final|Native|Public|BlueprintCallable 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeOverlapComponent.SetRelativeScale3DForBoundsComponent
	// void SetRelativeScale3DForBoundsComponent(FVector& Scale3D);                                                          // [0xab4e070] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeOverlapComponent.SetEnableOverlap
	// void SetEnableOverlap(bool bEnable);                                                                                  // [0xab4df2c] Final|Native|Public|BlueprintCallable 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeOverlapComponent.OnMinigameStarted
	// void OnMinigameStarted();                                                                                             // [0xab4de98] Final|Native|Protected 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeOverlapComponent.OnMinigameRoundEnded
	// void OnMinigameRoundEnded(class AFortPlayerController* Instigator, EFortMinigameEnd EndMethod, EFortMinigameState NextState); // [0xab4dda0] Final|Native|Protected 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeOverlapComponent.OnMinigameEnded
	// void OnMinigameEnded();                                                                                               // [0xab4dd8c] Final|Native|Protected 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeOverlapComponent.OnEndActorOverlap
	// void OnEndActorOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // [0xab4dc60] Final|Native|Private 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeOverlapComponent.OnBeginActorOverlap
	// void OnBeginActorOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0xab4da58] Final|Native|Private|HasOutParms 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeOverlapComponent.HandleTrackedActorEndPlay
	// void HandleTrackedActorEndPlay(class AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason);                       // [0xab4d994] Final|Native|Private 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeOverlapComponent.GetEnableOverlap
	// bool GetEnableOverlap();                                                                                              // [0xab4d624] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeOverlapComponent.GetAllTrackedActors
	// TArray<AActor*> GetAllTrackedActors();                                                                                // [0xab4d5cc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeOverlapComponent.GetAllPlayerStates
	// TArray<APlayerState*> GetAllPlayerStates();                                                                           // [0xab4d54c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeOverlapComponent.GetAllPlayerPawns
	// TArray<APawn*> GetAllPlayerPawns();                                                                                   // [0xab4d4d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeOverlapComponent.CheckCollidingActorsSceneQuery
	// void CheckCollidingActorsSceneQuery();                                                                                // [0xab4d480] Final|Native|Public|BlueprintCallable 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeOverlapComponent.BindToOnOtherActorEndOverlap
	// bool BindToOnOtherActorEndOverlap(FDelegateProperty& InEvent);                                                        // [0xab4d3d0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeOverlapComponent.BindToOnOtherActorBeginOverlap
	// bool BindToOnOtherActorBeginOverlap(FDelegateProperty& InEvent);                                                      // [0xab4d270] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeOverlapComponent.ActorExitVolume
	// void ActorExitVolume(class AActor* LeavingActor);                                                                     // [0xab4d140] Final|Native|Private 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeOverlapComponent.ActorEnteredVolume
	// void ActorEnteredVolume(class AActor* EnteringActor);                                                                 // [0xab4d0c0] Final|Native|Private 
};

