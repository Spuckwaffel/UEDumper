
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: Niagara

/// Class /Script/Component.CameraProxyActor
/// Size: 0x0000 (0x0009B0 - 0x0009B0)
class ACameraProxyActor : public ACameraActor
{ 
public:
};

/// Class /Script/Component.LightProxyActor
/// Size: 0x0008 (0x000290 - 0x000298)
class ALightProxyActor : public AActor
{ 
public:
	class UPointLightComponent*                        LightComponent;                                             // 0x0290   (0x0008)  
};

/// Class /Script/Component.ParticleSystemProxyActor
/// Size: 0x0010 (0x000290 - 0x0002A0)
class AParticleSystemProxyActor : public AActor
{ 
public:
	bool                                               bIsActive;                                                  // 0x0290   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0291   (0x0007)  MISSED
	class UNiagaraComponent*                           NiagaraComponent;                                           // 0x0298   (0x0008)  


	/// Functions
	// Function /Script/Component.ParticleSystemProxyActor.OnRep_IsActive
	// void OnRep_IsActive();                                                                                                // [0x770f7e0] Final|Native|Private 
};

/// Class /Script/Component.PhysicsEntityComponent_Implementation
/// Size: 0x01A0 (0x000028 - 0x0001C8)
class UPhysicsEntityComponent_Implementation : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	FBodyInstance                                      BodyInstance;                                               // 0x0028   (0x0190)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x01B8   (0x0010)  MISSED
};

/// Class /Script/Component.SoundProxyActor
/// Size: 0x0010 (0x000290 - 0x0002A0)
class ASoundProxyActor : public AActor
{ 
public:
	float                                              StartTime;                                                  // 0x0290   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0294   (0x0004)  MISSED
	class UAudioComponent*                             AudioComponent;                                             // 0x0298   (0x0008)  


	/// Functions
	// Function /Script/Component.SoundProxyActor.OnRep_StartTime
	// void OnRep_StartTime();                                                                                               // [0x770f7f4] Final|Native|Private 
};

/// Class /Script/Component.StaticMeshEntityComponent_Implementation
/// Size: 0x01D8 (0x000028 - 0x000200)
class UStaticMeshEntityComponent_Implementation : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x200];                                     // 0x0000   (0x0200)  MISSED
};

