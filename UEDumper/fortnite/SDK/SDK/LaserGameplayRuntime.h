
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
/// dependency: GameplayTags
/// dependency: NetCore

/// Enum /Script/LaserGameplayRuntime.ELaserConnectionState
/// Size: 0x05
enum class ELaserConnectionState : uint8_t
{
	ELaserConnectionState__Off                                                       = 0,
	ELaserConnectionState__TransitionOn                                              = 1,
	ELaserConnectionState__On                                                        = 2,
	ELaserConnectionState__TransitionOff                                             = 3,
	ELaserConnectionState__ELaserConnectionState_MAX                                 = 4
};

/// Class /Script/LaserGameplayRuntime.LaserCapsuleComponent
/// Size: 0x0010 (0x000530 - 0x000540)
class ULaserCapsuleComponent : public UCapsuleComponent
{ 
public:
	SDK_UNDEFINED(1,14845) /* TEnumAsByte<ECollisionEnabled> */ __um(CollisionWhenEnabled);                        // 0x0530   (0x0001)  
	SDK_UNDEFINED(1,14846) /* TEnumAsByte<ECollisionEnabled> */ __um(CollisionWhenDisabled);                       // 0x0531   (0x0001)  
	unsigned char                                      UnknownData00_6[0xE];                                       // 0x0532   (0x000E)  MISSED
};

/// Class /Script/LaserGameplayRuntime.LaserGridEditorComponent
/// Size: 0x0008 (0x0000A0 - 0x0000A8)
class ULaserGridEditorComponent : public UActorComponent
{ 
public:
	int32_t                                            VisualizeLaserGridPatternIndex;                             // 0x00A0   (0x0004)  
	bool                                               bVisualizeOutletIndex;                                      // 0x00A4   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00A5   (0x0003)  MISSED
};

/// Struct /Script/LaserGameplayRuntime.LaserOutletConnection
/// Size: 0x0002 (0x000000 - 0x000002)
struct FLaserOutletConnection
{ 
	char                                               PrimaryOutletIndex;                                         // 0x0000   (0x0001)  
	char                                               SecondaryOutletIndex;                                       // 0x0001   (0x0001)  
};

/// Struct /Script/LaserGameplayRuntime.LaserGridPattern
/// Size: 0x0018 (0x000000 - 0x000018)
struct FLaserGridPattern
{ 
	TArray<FLaserOutletConnection>                     OutletConnections;                                          // 0x0000   (0x0010)  
	float                                              duration;                                                   // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/LaserGameplayRuntime.LaserGridConnectionEntry
/// Size: 0x000C (0x00000C - 0x000018)
struct FLaserGridConnectionEntry : FFastArraySerializerItem
{ 
	FLaserOutletConnection                             OutletConnection;                                           // 0x000C   (0x0002)  
	ELaserConnectionState                              State;                                                      // 0x000E   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x000F   (0x0001)  MISSED
	class ULaserCapsuleComponent*                      LaserCapsuleComponent;                                      // 0x0010   (0x0008)  
};

/// Struct /Script/LaserGameplayRuntime.LaserGridConnectionArray
/// Size: 0x0010 (0x000108 - 0x000118)
struct FLaserGridConnectionArray : FFastArraySerializer
{ 
	TArray<FLaserGridConnectionEntry>                  Entries;                                                    // 0x0108   (0x0010)  
};

/// Struct /Script/LaserGameplayRuntime.LaserGridOutletEntry
/// Size: 0x0004 (0x00000C - 0x000010)
struct FLaserGridOutletEntry : FFastArraySerializerItem
{ 
	char                                               InstanceIndex;                                              // 0x000C   (0x0001)  
	ELaserConnectionState                              State;                                                      // 0x000D   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x000E   (0x0002)  MISSED
};

/// Struct /Script/LaserGameplayRuntime.LaserGridOutletArray
/// Size: 0x0018 (0x000108 - 0x000120)
struct FLaserGridOutletArray : FFastArraySerializer
{ 
	TArray<FLaserGridOutletEntry>                      Entries;                                                    // 0x0108   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0118   (0x0008)  MISSED
};

/// Class /Script/LaserGameplayRuntime.BuildingGameplayActorLaserGrid
/// Size: 0x0420 (0x000980 - 0x000DA0)
class ABuildingGameplayActorLaserGrid : public ABuildingGameplayActor
{ 
public:
	SDK_UNDEFINED(16,14847) /* FMulticastInlineDelegate */ __um(OnLaserGridTriggered);                             // 0x0980   (0x0010)  
	SDK_UNDEFINED(16,14848) /* FMulticastInlineDelegate */ __um(OnLaserGridOutletDestroyed);                       // 0x0990   (0x0010)  
	TArray<FLaserGridPattern>                          LaserGridPatterns;                                          // 0x09A0   (0x0010)  
	float                                              LaserPatternChangeWarningTime;                              // 0x09B0   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x09B4   (0x0004)  MISSED
	SDK_UNDEFINED(80,14849) /* TMap<int32_t, ABuildingActor*> */ __um(LaserOutletToBuildingAttachmentMap);         // 0x09B8   (0x0050)  
	FGameplayTagContainer                              IgnoreActorTags;                                            // 0x0A08   (0x0020)  
	class UClass*                                      LaserCapsuleComponentClass;                                 // 0x0A28   (0x0008)  
	FRotator                                           LaserCapsuleCollisionRotationOffset;                        // 0x0A30   (0x0018)  
	int32_t                                            LaserCustomDataIndexForRandomizedVisuals;                   // 0x0A48   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0A4C   (0x0004)  MISSED
	FLaserGridConnectionArray                          LaserGridConnections;                                       // 0x0A50   (0x0118)  
	TArray<FLaserGridConnectionEntry>                  LocalLaserGridConnections;                                  // 0x0B68   (0x0010)  
	unsigned char                                      UnknownData02_5[0x8];                                       // 0x0B78   (0x0008)  MISSED
	FTransform                                         LaserConnectionOffset;                                      // 0x0B80   (0x0060)  
	FVector                                            LaserOutletConnectionOffset;                                // 0x0BE0   (0x0018)  
	class USoundBase*                                  SoundOutletTransitionOn;                                    // 0x0BF8   (0x0008)  
	class USoundBase*                                  SoundLaserTransitionPrimaryOutlet;                          // 0x0C00   (0x0008)  
	class USoundBase*                                  SoundLaserTransitionSecondaryOutlet;                        // 0x0C08   (0x0008)  
	class USoundBase*                                  SoundLaserTransition;                                       // 0x0C10   (0x0008)  
	int32_t                                            OutletMaterialCustomDataIndex_EmissiveEnabled;              // 0x0C18   (0x0004)  
	int32_t                                            OutletMaterialCustomDataIndex_DisableEmissivePulse;         // 0x0C1C   (0x0004)  
	int32_t                                            OutletMaterialCustomDataIndex_AnimTimestamp;                // 0x0C20   (0x0004)  
	int32_t                                            OutletMaterialCustomDataIndex_AnimTimestampDuration;        // 0x0C24   (0x0004)  
	float                                              MaterialCosineWavePeriod;                                   // 0x0C28   (0x0004)  
	unsigned char                                      UnknownData03_5[0x4];                                       // 0x0C2C   (0x0004)  MISSED
	FVector2D                                          OutletMaterialTransitionOffTimestampOffset;                 // 0x0C30   (0x0010)  
	int32_t                                            LaserMaterialCustomDataIndex_PulseEnabled;                  // 0x0C40   (0x0004)  
	int32_t                                            LaserMaterialCustomDataIndex_RandomFlickeringSpeed;         // 0x0C44   (0x0004)  
	int32_t                                            LaserMaterialCustomDataIndex_AnimTimestamp;                 // 0x0C48   (0x0004)  
	int32_t                                            LaserMaterialCustomDataIndex_PulseTimeOffset;               // 0x0C4C   (0x0004)  
	FVector2D                                          LaserMaterialRandomFlickeringSpeed;                         // 0x0C50   (0x0010)  
	FLaserGridOutletArray                              LaserGridOutlets;                                           // 0x0C60   (0x0120)  
	class UHierarchicalInstancedStaticMeshComponent*   HISMComponentOutlet;                                        // 0x0D80   (0x0008)  
	class UHierarchicalInstancedStaticMeshComponent*   HISMComponentLaser;                                         // 0x0D88   (0x0008)  
	bool                                               bEnabled;                                                   // 0x0D90   (0x0001)  
	unsigned char                                      UnknownData04_5[0x3];                                       // 0x0D91   (0x0003)  MISSED
	int32_t                                            LaserGridPatternIndex;                                      // 0x0D94   (0x0004)  
	FTimerHandle                                       LaserPatternTimerHandle;                                    // 0x0D98   (0x0008)  


	/// Functions
	// Function /Script/LaserGameplayRuntime.BuildingGameplayActorLaserGrid.SetLaserGridEnable
	// void SetLaserGridEnable(bool bEnable);                                                                                // [0x63fe5cc] Final|BlueprintAuthorityOnly|Native|Protected|BlueprintCallable 
	// Function /Script/LaserGameplayRuntime.BuildingGameplayActorLaserGrid.OnRep_LaserGridConnections
	// void OnRep_LaserGridConnections();                                                                                    // [0xa97dcd8] Final|Native|Private 
	// Function /Script/LaserGameplayRuntime.BuildingGameplayActorLaserGrid.OnRep_bEnabled
	// void OnRep_bEnabled();                                                                                                // [0xa97dcec] Final|Native|Private 
	// Function /Script/LaserGameplayRuntime.BuildingGameplayActorLaserGrid.LaserGridTriggered
	// void LaserGridTriggered(FLaserGridConnectionEntry& LaserConnectionData, class AActor* TriggeringActor);               // [0x18a39e4] BlueprintAuthorityOnly|Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/LaserGameplayRuntime.BuildingGameplayActorLaserGrid.LaserGridStateUpdated
	// void LaserGridStateUpdated(bool bLaserGridEnabled);                                                                   // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/LaserGameplayRuntime.BuildingGameplayActorLaserGrid.HandlePatternTimerComplete_PreTransition
	// void HandlePatternTimerComplete_PreTransition();                                                                      // [0x36203b0] Final|Native|Private 
	// Function /Script/LaserGameplayRuntime.BuildingGameplayActorLaserGrid.HandlePatternTimerComplete_PostTransition
	// void HandlePatternTimerComplete_PostTransition();                                                                     // [0x36203b0] Final|Native|Private 
	// Function /Script/LaserGameplayRuntime.BuildingGameplayActorLaserGrid.HandleLaserCollisionOverlap
	// void HandleLaserCollisionOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x81ea384] Final|Native|Private|HasOutParms 
	// Function /Script/LaserGameplayRuntime.BuildingGameplayActorLaserGrid.HandleAttachedBuildingActorDied
	// void HandleAttachedBuildingActorDied(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, FVector HitLocation, class UPrimitiveComponent* HitComponent, FName BoneName, FVector Momentum); // [0x8682e30] Final|Native|Private|HasDefaults 
	// Function /Script/LaserGameplayRuntime.BuildingGameplayActorLaserGrid.GetActiveLaserGridConnections
	// void GetActiveLaserGridConnections(TArray<FLaserGridConnectionEntry>& OutActiveLaserGridConnections);                 // [0xa97db6c] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/LaserGameplayRuntime.BuildingGameplayActorLaserGrid.CosmeticDestroyOutletInstance
	// void CosmeticDestroyOutletInstance(FLaserGridOutletEntry& OutletEntry);                                               // [0x18a39e4] BlueprintCosmetic|Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/LaserGameplayRuntime.BuildingGameplayActorLaserGrid.CanActorTriggerLaserGrid
	// bool CanActorTriggerLaserGrid(class AActor* TriggeringActor);                                                         // [0xa97dad8] BlueprintAuthorityOnly|Native|Event|Protected|BlueprintEvent|Const 
};

