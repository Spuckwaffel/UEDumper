
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: Entity
/// dependency: NetCore

/// Enum /Script/ActorEntity.EConsideredForActorEntityInterop
/// Size: 0x04
enum class EConsideredForActorEntityInterop : uint32_t
{
	EConsideredForActorEntityInterop__No                                             = 0,
	EConsideredForActorEntityInterop__Partial                                        = 1,
	EConsideredForActorEntityInterop__Yes                                            = 2,
	EConsideredForActorEntityInterop__EConsideredForActorEntityInterop_MAX           = 3
};

/// Struct /Script/ActorEntity.ActorEntityMappingArrayItem
/// Size: 0x0014 (0x00000C - 0x000020)
struct FActorEntityMappingArrayItem : FFastArraySerializerItem
{ 
	unsigned char                                      UnknownData00_3[0x4];                                       // 0x000C   (0x0004)  MISSED
	class UBaseEntity*                                 Entity;                                                     // 0x0010   (0x0008)  
	class UObject*                                     Object;                                                     // 0x0018   (0x0008)  
};

/// Struct /Script/ActorEntity.ActorEntityMappingArray
/// Size: 0x0028 (0x000108 - 0x000130)
struct FActorEntityMappingArray : FFastArraySerializer
{ 
	unsigned char                                      UnknownData00_3[0x18];                                      // 0x0108   (0x0018)  MISSED
	TArray<FActorEntityMappingArrayItem>               Entities;                                                   // 0x0120   (0x0010)  
};

/// Class /Script/ActorEntity.ActorEntityComponent
/// Size: 0x01A0 (0x0000A0 - 0x000240)
class UActorEntityComponent : public UActorComponent
{ 
public:
	FActorEntityMappingArray                           EntityMappingArray;                                         // 0x00A0   (0x0130)  
	unsigned char                                      UnknownData00_6[0x70];                                      // 0x01D0   (0x0070)  MISSED
};

/// Class /Script/ActorEntity.ActorEntitySubsystem
/// Size: 0x0068 (0x000030 - 0x000098)
class UActorEntitySubsystem : public UWorldSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x68];                                      // 0x0030   (0x0068)  MISSED
};

/// Class /Script/ActorEntity.PhysicsComponentBridgeHelper
/// Size: 0x0010 (0x000028 - 0x000038)
class UPhysicsComponentBridgeHelper : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x38];                                      // 0x0000   (0x0038)  MISSED


	/// Functions
	// Function /Script/ActorEntity.PhysicsComponentBridgeHelper.HandleActorComponentHit
	// void HandleActorComponentHit(class UPrimitiveComponent* PrimitiveComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComponent, FVector NormalImpulse, FHitResult& Hit); // [0xa05fb64] Final|Native|Private|HasOutParms|HasDefaults 
};

/// Struct /Script/ActorEntity.SubEntityInteropRules
/// Size: 0x0018 (0x000000 - 0x000018)
struct FSubEntityInteropRules
{ 
	FName                                              ComponentName;                                              // 0x0000   (0x0004)  
	EConsideredForActorEntityInterop                   Considered;                                                 // 0x0004   (0x0004)  
	SDK_UNDEFINED(16,9282) /* TArray<TWeakObjectPtr<UClass*>> */ __um(AllowedEntityComponents);                    // 0x0008   (0x0010)  
};

/// Struct /Script/ActorEntity.ActorEntityInteropRules
/// Size: 0x0050 (0x000000 - 0x000050)
struct FActorEntityInteropRules
{ 
	SDK_UNDEFINED(32,9283) /* TWeakObjectPtr<UClass*> */ __um(ActorClass);                                         // 0x0000   (0x0020)  
	EConsideredForActorEntityInterop                   ActorEntityConsidered;                                      // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0024   (0x0004)  MISSED
	SDK_UNDEFINED(16,9284) /* TArray<TWeakObjectPtr<UClass*>> */ __um(AllowedEntityComponents);                    // 0x0028   (0x0010)  
	EConsideredForActorEntityInterop                   SubEntitiesConsidered;                                      // 0x0038   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x003C   (0x0004)  MISSED
	TArray<FSubEntityInteropRules>                     SubEntityRules;                                             // 0x0040   (0x0010)  
};

