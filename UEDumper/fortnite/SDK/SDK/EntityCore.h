
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Enum /Script/EntityCore.EMovementType
/// Size: 0x04
enum class EMovementType : uint8_t
{
	EMovementType__SweepPhysics                                                      = 0,
	EMovementType__TeleportPhysics                                                   = 1,
	EMovementType__ResetPhysics                                                      = 2,
	EMovementType__EMovementType_MAX                                                 = 3
};

/// Class /Script/EntityCore.EntityComponent
/// Size: 0x0030 (0x000028 - 0x000058)
class UEntityComponent : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x58];                                      // 0x0000   (0x0058)  MISSED
};

/// Class /Script/EntityCore.EntityDataBackedComponent
/// Size: 0x0008 (0x000058 - 0x000060)
class UEntityDataBackedComponent : public UEntityComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0058   (0x0008)  MISSED
};

/// Class /Script/EntityCore.EntityPositionComponent
/// Size: 0x0000 (0x000060 - 0x000060)
class UEntityPositionComponent : public UEntityDataBackedComponent
{ 
public:
};

/// Class /Script/EntityCore.EntityRotationComponent
/// Size: 0x0000 (0x000060 - 0x000060)
class UEntityRotationComponent : public UEntityDataBackedComponent
{ 
public:
};

/// Class /Script/EntityCore.EntityScaleComponent
/// Size: 0x0000 (0x000060 - 0x000060)
class UEntityScaleComponent : public UEntityDataBackedComponent
{ 
public:
};

/// Class /Script/EntityCore.EntityCoreDataBackedRelativePositionComponent
/// Size: 0x0000 (0x000060 - 0x000060)
class UEntityCoreDataBackedRelativePositionComponent : public UEntityDataBackedComponent
{ 
public:
};

/// Class /Script/EntityCore.Entity
/// Size: 0x0010 (0x000028 - 0x000038)
class UEntity : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x30];                                      // 0x0000   (0x0030)  MISSED
	class ULevel*                                      Level;                                                      // 0x0030   (0x0008)  
};

/// Class /Script/EntityCore.EntityCoreSubsystem
/// Size: 0x0120 (0x000030 - 0x000150)
class UEntityCoreSubsystem : public UWorldSubsystem
{ 
public:
	unsigned char                                      UnknownData00_3[0x10];                                      // 0x0030   (0x0010)  MISSED
	SDK_UNDEFINED(80,992) /* TMap<uint32_t, FEntityComponentContainer> */ __um(ComponentMap);                      // 0x0040   (0x0050)  
	unsigned char                                      UnknownData01_5[0x58];                                      // 0x0090   (0x0058)  MISSED
	TArray<class UEntityComponent*>                    ComponentArray;                                             // 0x00E8   (0x0010)  
	SDK_UNDEFINED(80,993) /* TMap<uint32_t, UEntity*> */ __um(Entities);                                           // 0x00F8   (0x0050)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x0148   (0x0008)  MISSED
};

/// Class /Script/EntityCore.EntityEnableableComponent
/// Size: 0x0020 (0x000058 - 0x000078)
class UEntityEnableableComponent : public UEntityComponent
{ 
public:
	bool                                               IsEnabled : 1;                                              // 0x0058:0 (0x0001)  
	bool                                               LastIsEnabled : 1;                                          // 0x0058:1 (0x0001)  
	unsigned char                                      UnknownData00_6[0x1F];                                      // 0x0059   (0x001F)  MISSED


	/// Functions
	// Function /Script/EntityCore.EntityEnableableComponent.OnRep_Enabled
	// void OnRep_Enabled();                                                                                                 // [0x72f36a8] Final|Native|Private 
};

/// Class /Script/EntityCore.EntityTickableComponent
/// Size: 0x0038 (0x000078 - 0x0000B0)
class UEntityTickableComponent : public UEntityEnableableComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x38];                                      // 0x0078   (0x0038)  MISSED
};

/// Class /Script/EntityCore.EntityScriptComponent
/// Size: 0x0000 (0x0000B0 - 0x0000B0)
class UEntityScriptComponent : public UEntityTickableComponent
{ 
public:
};

/// Struct /Script/EntityCore.ComponentData
/// Size: 0x0001 (0x000000 - 0x000001)
struct FComponentData
{ 
};

/// Struct /Script/EntityCore.EntityPositionComponentData
/// Size: 0x0017 (0x000001 - 0x000018)
struct FEntityPositionComponentData : FComponentData
{ 
	FVector                                            WorldPosition;                                              // 0x0000   (0x0018)  
};

/// Struct /Script/EntityCore.EntityRotationComponentData
/// Size: 0x0017 (0x000001 - 0x000018)
struct FEntityRotationComponentData : FComponentData
{ 
	FRotator                                           WorldRotation;                                              // 0x0000   (0x0018)  
};

/// Struct /Script/EntityCore.EntityScaleComponentData
/// Size: 0x0017 (0x000001 - 0x000018)
struct FEntityScaleComponentData : FComponentData
{ 
	FVector                                            WorldScale3D;                                               // 0x0000   (0x0018)  
};

/// Struct /Script/EntityCore.EntityCoreSystemRelativePositionComponentData
/// Size: 0x001F (0x000001 - 0x000020)
struct FEntityCoreSystemRelativePositionComponentData : FComponentData
{ 
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0000   (0x0020)  MISSED
};

/// Struct /Script/EntityCore.EntityComponentContainer
/// Size: 0x0010 (0x000000 - 0x000010)
struct FEntityComponentContainer
{ 
	TArray<class UEntityComponent*>                    Array;                                                      // 0x0000   (0x0010)  
};

/// Struct /Script/EntityCore.EntityTickFunction
/// Size: 0x0008 (0x000028 - 0x000030)
struct FEntityTickFunction : FTickFunction
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0028   (0x0008)  MISSED
};

