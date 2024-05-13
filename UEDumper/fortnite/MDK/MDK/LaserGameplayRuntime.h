
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: GameplayTags
/// dependency: NetCore

/// Class /Script/LaserGameplayRuntime.LaserCapsuleComponent
/// Size: 0x0010 (0x000530 - 0x000540)
class ULaserCapsuleComponent : public UCapsuleComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1344;

public:
	CMember(TEnumAsByte<ECollisionEnabled>)            CollisionWhenEnabled                                        OFFSET(get<T>, {0x530, 1, 0, 0})
	CMember(TEnumAsByte<ECollisionEnabled>)            CollisionWhenDisabled                                       OFFSET(get<T>, {0x531, 1, 0, 0})
};

/// Class /Script/LaserGameplayRuntime.LaserGridEditorComponent
/// Size: 0x0008 (0x0000A0 - 0x0000A8)
class ULaserGridEditorComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	DMember(int32_t)                                   VisualizeLaserGridPatternIndex                              OFFSET(get<int32_t>, {0xA0, 4, 0, 0})
	DMember(bool)                                      bVisualizeOutletIndex                                       OFFSET(get<bool>, {0xA4, 1, 0, 0})
};

/// Class /Script/LaserGameplayRuntime.BuildingGameplayActorLaserGrid
/// Size: 0x0420 (0x000980 - 0x000DA0)
class ABuildingGameplayActorLaserGrid : public ABuildingGameplayActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3488;

public:
	SMember(FMulticastInlineDelegate)                  OnLaserGridTriggered                                        OFFSET(getStruct<T>, {0x980, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnLaserGridOutletDestroyed                                  OFFSET(getStruct<T>, {0x990, 16, 0, 0})
	CMember(TArray<FLaserGridPattern>)                 LaserGridPatterns                                           OFFSET(get<T>, {0x9A0, 16, 0, 0})
	DMember(float)                                     LaserPatternChangeWarningTime                               OFFSET(get<float>, {0x9B0, 4, 0, 0})
	CMember(TMap<int32_t, ABuildingActor*>)            LaserOutletToBuildingAttachmentMap                          OFFSET(get<T>, {0x9B8, 80, 0, 0})
	SMember(FGameplayTagContainer)                     IgnoreActorTags                                             OFFSET(getStruct<T>, {0xA08, 32, 0, 0})
	CMember(class UClass*)                             LaserCapsuleComponentClass                                  OFFSET(get<T>, {0xA28, 8, 0, 0})
	SMember(FRotator)                                  LaserCapsuleCollisionRotationOffset                         OFFSET(getStruct<T>, {0xA30, 24, 0, 0})
	DMember(int32_t)                                   LaserCustomDataIndexForRandomizedVisuals                    OFFSET(get<int32_t>, {0xA48, 4, 0, 0})
	SMember(FLaserGridConnectionArray)                 LaserGridConnections                                        OFFSET(getStruct<T>, {0xA50, 280, 0, 0})
	CMember(TArray<FLaserGridConnectionEntry>)         LocalLaserGridConnections                                   OFFSET(get<T>, {0xB68, 16, 0, 0})
	SMember(FTransform)                                LaserConnectionOffset                                       OFFSET(getStruct<T>, {0xB80, 96, 0, 0})
	SMember(FVector)                                   LaserOutletConnectionOffset                                 OFFSET(getStruct<T>, {0xBE0, 24, 0, 0})
	CMember(class USoundBase*)                         SoundOutletTransitionOn                                     OFFSET(get<T>, {0xBF8, 8, 0, 0})
	CMember(class USoundBase*)                         SoundLaserTransitionPrimaryOutlet                           OFFSET(get<T>, {0xC00, 8, 0, 0})
	CMember(class USoundBase*)                         SoundLaserTransitionSecondaryOutlet                         OFFSET(get<T>, {0xC08, 8, 0, 0})
	CMember(class USoundBase*)                         SoundLaserTransition                                        OFFSET(get<T>, {0xC10, 8, 0, 0})
	DMember(int32_t)                                   OutletMaterialCustomDataIndex_EmissiveEnabled               OFFSET(get<int32_t>, {0xC18, 4, 0, 0})
	DMember(int32_t)                                   OutletMaterialCustomDataIndex_DisableEmissivePulse          OFFSET(get<int32_t>, {0xC1C, 4, 0, 0})
	DMember(int32_t)                                   OutletMaterialCustomDataIndex_AnimTimestamp                 OFFSET(get<int32_t>, {0xC20, 4, 0, 0})
	DMember(int32_t)                                   OutletMaterialCustomDataIndex_AnimTimestampDuration         OFFSET(get<int32_t>, {0xC24, 4, 0, 0})
	DMember(float)                                     MaterialCosineWavePeriod                                    OFFSET(get<float>, {0xC28, 4, 0, 0})
	SMember(FVector2D)                                 OutletMaterialTransitionOffTimestampOffset                  OFFSET(getStruct<T>, {0xC30, 16, 0, 0})
	DMember(int32_t)                                   LaserMaterialCustomDataIndex_PulseEnabled                   OFFSET(get<int32_t>, {0xC40, 4, 0, 0})
	DMember(int32_t)                                   LaserMaterialCustomDataIndex_RandomFlickeringSpeed          OFFSET(get<int32_t>, {0xC44, 4, 0, 0})
	DMember(int32_t)                                   LaserMaterialCustomDataIndex_AnimTimestamp                  OFFSET(get<int32_t>, {0xC48, 4, 0, 0})
	DMember(int32_t)                                   LaserMaterialCustomDataIndex_PulseTimeOffset                OFFSET(get<int32_t>, {0xC4C, 4, 0, 0})
	SMember(FVector2D)                                 LaserMaterialRandomFlickeringSpeed                          OFFSET(getStruct<T>, {0xC50, 16, 0, 0})
	SMember(FLaserGridOutletArray)                     LaserGridOutlets                                            OFFSET(getStruct<T>, {0xC60, 288, 0, 0})
	CMember(class UHierarchicalInstancedStaticMeshComponent*) HISMComponentOutlet                                  OFFSET(get<T>, {0xD80, 8, 0, 0})
	CMember(class UHierarchicalInstancedStaticMeshComponent*) HISMComponentLaser                                   OFFSET(get<T>, {0xD88, 8, 0, 0})
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0xD90, 1, 0, 0})
	DMember(int32_t)                                   LaserGridPatternIndex                                       OFFSET(get<int32_t>, {0xD94, 4, 0, 0})
	SMember(FTimerHandle)                              LaserPatternTimerHandle                                     OFFSET(getStruct<T>, {0xD98, 8, 0, 0})


	/// Functions
	// Function /Script/LaserGameplayRuntime.BuildingGameplayActorLaserGrid.SetLaserGridEnable
	// void SetLaserGridEnable(bool bEnable);                                                                                   // [0x654e370] Final|BlueprintAuthorityOnly|Native|Protected|BlueprintCallable 
	// Function /Script/LaserGameplayRuntime.BuildingGameplayActorLaserGrid.OnRep_LaserGridConnections
	// void OnRep_LaserGridConnections();                                                                                       // [0xbd3f050] Final|Native|Private 
	// Function /Script/LaserGameplayRuntime.BuildingGameplayActorLaserGrid.OnRep_bEnabled
	// void OnRep_bEnabled();                                                                                                   // [0xbd3f064] Final|Native|Private 
	// Function /Script/LaserGameplayRuntime.BuildingGameplayActorLaserGrid.LaserGridTriggered
	// void LaserGridTriggered(FLaserGridConnectionEntry& LaserConnectionData, class AActor* TriggeringActor);                  // [0x20c3f9c] BlueprintAuthorityOnly|Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/LaserGameplayRuntime.BuildingGameplayActorLaserGrid.LaserGridStateUpdated
	// void LaserGridStateUpdated(bool bLaserGridEnabled);                                                                      // [0x20c3f9c] Event|Protected|BlueprintEvent 
	// Function /Script/LaserGameplayRuntime.BuildingGameplayActorLaserGrid.HandlePatternTimerComplete_PreTransition
	// void HandlePatternTimerComplete_PreTransition();                                                                         // [0x35cf850] Final|Native|Private 
	// Function /Script/LaserGameplayRuntime.BuildingGameplayActorLaserGrid.HandlePatternTimerComplete_PostTransition
	// void HandlePatternTimerComplete_PostTransition();                                                                        // [0x35cf850] Final|Native|Private 
	// Function /Script/LaserGameplayRuntime.BuildingGameplayActorLaserGrid.HandleLaserCollisionOverlap
	// void HandleLaserCollisionOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x8a35920] Final|Native|Private|HasOutParms 
	// Function /Script/LaserGameplayRuntime.BuildingGameplayActorLaserGrid.HandleAttachedBuildingActorDied
	// void HandleAttachedBuildingActorDied(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, FVector HitLocation, class UPrimitiveComponent* HitComponent, FName BoneName, FVector Momentum); // [0x8fc78e4] Final|Native|Private|HasDefaults 
	// Function /Script/LaserGameplayRuntime.BuildingGameplayActorLaserGrid.GetActiveLaserGridConnections
	// void GetActiveLaserGridConnections(TArray<FLaserGridConnectionEntry>& OutActiveLaserGridConnections);                    // [0xbd3e960] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/LaserGameplayRuntime.BuildingGameplayActorLaserGrid.CosmeticDestroyOutletInstance
	// void CosmeticDestroyOutletInstance(FLaserGridOutletEntry& OutletEntry);                                                  // [0x20c3f9c] BlueprintCosmetic|Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/LaserGameplayRuntime.BuildingGameplayActorLaserGrid.CanActorTriggerLaserGrid
	// bool CanActorTriggerLaserGrid(class AActor* TriggeringActor);                                                            // [0xbd3e8cc] BlueprintAuthorityOnly|Native|Event|Protected|BlueprintEvent|Const 
};

/// Struct /Script/LaserGameplayRuntime.LaserGridConnectionEntry
/// Size: 0x000C (0x00000C - 0x000018)
class FLaserGridConnectionEntry : public FFastArraySerializerItem
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FLaserOutletConnection)                    OutletConnection                                            OFFSET(getStruct<T>, {0xC, 2, 0, 0})
	CMember(ELaserConnectionState)                     State                                                       OFFSET(get<T>, {0xE, 1, 0, 0})
	CMember(class ULaserCapsuleComponent*)             LaserCapsuleComponent                                       OFFSET(get<T>, {0x10, 8, 0, 0})
};

/// Struct /Script/LaserGameplayRuntime.LaserOutletConnection
/// Size: 0x0002 (0x000000 - 0x000002)
class FLaserOutletConnection : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 2;

public:
	DMember(char)                                      PrimaryOutletIndex                                          OFFSET(get<char>, {0x0, 1, 0, 0})
	DMember(char)                                      SecondaryOutletIndex                                        OFFSET(get<char>, {0x1, 1, 0, 0})
};

/// Struct /Script/LaserGameplayRuntime.LaserGridConnectionArray
/// Size: 0x0010 (0x000108 - 0x000118)
class FLaserGridConnectionArray : public FFastArraySerializer
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 280;

public:
	CMember(TArray<FLaserGridConnectionEntry>)         Entries                                                     OFFSET(get<T>, {0x108, 16, 0, 0})
};

/// Struct /Script/LaserGameplayRuntime.LaserGridOutletEntry
/// Size: 0x0004 (0x00000C - 0x000010)
class FLaserGridOutletEntry : public FFastArraySerializerItem
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(char)                                      InstanceIndex                                               OFFSET(get<char>, {0xC, 1, 0, 0})
	CMember(ELaserConnectionState)                     State                                                       OFFSET(get<T>, {0xD, 1, 0, 0})
};

/// Struct /Script/LaserGameplayRuntime.LaserGridOutletArray
/// Size: 0x0018 (0x000108 - 0x000120)
class FLaserGridOutletArray : public FFastArraySerializer
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	CMember(TArray<FLaserGridOutletEntry>)             Entries                                                     OFFSET(get<T>, {0x108, 16, 0, 0})
};

/// Struct /Script/LaserGameplayRuntime.LaserGridPattern
/// Size: 0x0018 (0x000000 - 0x000018)
class FLaserGridPattern : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(TArray<FLaserOutletConnection>)            OutletConnections                                           OFFSET(get<T>, {0x0, 16, 0, 0})
	DMember(float)                                     duration                                                    OFFSET(get<float>, {0x10, 4, 0, 0})
};

/// Enum /Script/LaserGameplayRuntime.ELaserConnectionState
/// Size: 0x04
enum class ELaserConnectionState : uint8_t
{
	ELaserConnectionState__Off                                                       = 0,
	ELaserConnectionState__TransitionOn                                              = 1,
	ELaserConnectionState__On                                                        = 2,
	ELaserConnectionState__TransitionOff                                             = 3
};

