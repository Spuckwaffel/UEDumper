
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: Niagara

/// Class /Script/Component.CameraEntityProxyActor
/// Size: 0x0000 (0x0009B0 - 0x0009B0)
class ACameraEntityProxyActor : public ACameraActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2480;

public:
};

/// Class /Script/Component.LightProxyActor
/// Size: 0x0008 (0x000290 - 0x000298)
class ALightProxyActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 664;

public:
	CMember(class ULightComponent*)                    LightComponent                                              OFFSET(get<T>, {0x290, 8, 0, 0})
};

/// Class /Script/Component.ParticleSystemProxyActor
/// Size: 0x0008 (0x000290 - 0x000298)
class AParticleSystemProxyActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 664;

public:
	CMember(class UNiagaraComponent*)                  NiagaraComponent                                            OFFSET(get<T>, {0x290, 8, 0, 0})
};

/// Class /Script/Component.PhysicsEntityComponent_Implementation
/// Size: 0x01A0 (0x000028 - 0x0001C8)
class UPhysicsEntityComponent_Implementation : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 456;

public:
	SMember(FBodyInstance)                             BodyInstance                                                OFFSET(getStruct<T>, {0x28, 400, 0, 0})
};

/// Class /Script/Component.SoundProxyActor
/// Size: 0x0010 (0x000290 - 0x0002A0)
class ASoundProxyActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 672;

public:
	DMember(float)                                     StartTime                                                   OFFSET(get<float>, {0x290, 4, 0, 0})
	CMember(class UAudioComponent*)                    AudioComponent                                              OFFSET(get<T>, {0x298, 8, 0, 0})


	/// Functions
	// Function /Script/Component.SoundProxyActor.OnRep_StartTime
	// void OnRep_StartTime();                                                                                                  // [0x7ecd02c] Final|Native|Private 
};

/// Class /Script/Component.StaticMeshEntityComponent_Implementation
/// Size: 0x01D8 (0x000028 - 0x000200)
class UStaticMeshEntityComponent_Implementation : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 512;

public:
};

/// Class /Script/Component.TextDisplayProxyActor
/// Size: 0x0010 (0x000290 - 0x0002A0)
class ATextDisplayProxyActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 672;

public:
	CMember(class UTextRenderComponent*)               TextRenderComponent                                         OFFSET(get<T>, {0x290, 8, 0, 0})
	CMember(class UMaterialInterface*)                 TextMaterial                                                OFFSET(get<T>, {0x298, 8, 0, 0})
};

