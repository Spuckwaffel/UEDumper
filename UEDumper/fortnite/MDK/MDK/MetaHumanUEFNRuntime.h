
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: GameFeatures

/// Class /Script/MetaHumanUEFNRuntime.GameFeatureAction_MetaHuman
/// Size: 0x00F0 (0x000028 - 0x000118)
class UGameFeatureAction_MetaHuman : public UGameFeatureAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 280;

public:
	CMember(TMap<EMetaHumanBodyType, TWeakObjectPtr<UClass*>>) BodyPostAnimBPs                                     OFFSET(get<T>, {0x28, 80, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   Face_AnimBP                                                 OFFSET(get<T>, {0x78, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   Face_PostAnimBP                                             OFFSET(get<T>, {0x98, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   RigidBodyAnimBP                                             OFFSET(get<T>, {0xB8, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   ControlRigRigidBodyAnimBP                                   OFFSET(get<T>, {0xD8, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   ControlRigAnimBP                                            OFFSET(get<T>, {0xF8, 32, 0, 0})
};

/// Class /Script/MetaHumanUEFNRuntime.MetaHumanComponent
/// Size: 0x00B0 (0x0000A0 - 0x000150)
class UMetaHumanComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
	CMember(class USkeletalMeshComponent*)             Body                                                        OFFSET(get<T>, {0xA0, 8, 0, 0})
	DMember(bool)                                      bEnableBodyCorrectives                                      OFFSET(get<bool>, {0xA8, 1, 0, 0})
	DMember(int32_t)                                   BodyLODThreshold                                            OFFSET(get<int32_t>, {0xAC, 4, 0, 0})
	CMember(EMetaHumanBodyType)                        BodyType                                                    OFFSET(get<T>, {0xB0, 1, 0, 0})
	CMember(class USkeletalMeshComponent*)             Face                                                        OFFSET(get<T>, {0xB8, 8, 0, 0})
	DMember(int32_t)                                   RigLogicLODThreshold                                        OFFSET(get<int32_t>, {0xC0, 4, 0, 0})
	DMember(bool)                                      bEnableNeckCorrectives                                      OFFSET(get<bool>, {0xC4, 1, 0, 0})
	DMember(int32_t)                                   NeckCorrectivesLODThreshold                                 OFFSET(get<int32_t>, {0xC8, 4, 0, 0})
	DMember(bool)                                      bEnableNeckProcControlRig                                   OFFSET(get<bool>, {0xCC, 1, 0, 0})
	DMember(int32_t)                                   NeckProcControlRigLODThreshold                              OFFSET(get<int32_t>, {0xD0, 4, 0, 0})
	SMember(FMetaHumanCustomizableBodyPart)            Torso                                                       OFFSET(getStruct<T>, {0xD8, 40, 0, 0})
	SMember(FMetaHumanCustomizableBodyPart)            Legs                                                        OFFSET(getStruct<T>, {0x100, 40, 0, 0})
	SMember(FMetaHumanCustomizableBodyPart)            Feet                                                        OFFSET(getStruct<T>, {0x128, 40, 0, 0})
};

/// Struct /Script/MetaHumanUEFNRuntime.MetaHumanCustomizableBodyPart
/// Size: 0x0028 (0x000000 - 0x000028)
class FMetaHumanCustomizableBodyPart : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(class USkeletalMeshComponent*)             SkeletalMeshComponent                                       OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class UClass*)                             ControlRigClass                                             OFFSET(get<T>, {0x8, 8, 0, 0})
	DMember(int32_t)                                   ControlRigLODThreshold                                      OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	CMember(class UPhysicsAsset*)                      PhysicsAsset                                                OFFSET(get<T>, {0x18, 8, 0, 0})
	DMember(int32_t)                                   RigidBodyLODThreshold                                       OFFSET(get<int32_t>, {0x20, 4, 0, 0})
};

/// Enum /Script/MetaHumanUEFNRuntime.EMetaHumanBodyType
/// Size: 0x20
enum class EMetaHumanBodyType : uint8_t
{
	EMetaHumanBodyType__f_med_nrw                                                    = 0,
	EMetaHumanBodyType__f_med_ovw                                                    = 1,
	EMetaHumanBodyType__f_med_unw                                                    = 2,
	EMetaHumanBodyType__f_srt_nrw                                                    = 3,
	EMetaHumanBodyType__f_srt_ovw                                                    = 4,
	EMetaHumanBodyType__f_srt_unw                                                    = 5,
	EMetaHumanBodyType__f_tal_nrw                                                    = 6,
	EMetaHumanBodyType__f_tal_ovw                                                    = 7,
	EMetaHumanBodyType__f_tal_unw                                                    = 8,
	EMetaHumanBodyType__m_med_nrw                                                    = 9,
	EMetaHumanBodyType__m_med_ovw                                                    = 10,
	EMetaHumanBodyType__m_med_unw                                                    = 11,
	EMetaHumanBodyType__m_srt_nrw                                                    = 12,
	EMetaHumanBodyType__m_srt_ovw                                                    = 13,
	EMetaHumanBodyType__m_srt_unw                                                    = 14,
	EMetaHumanBodyType__m_tal_nrw                                                    = 15,
	EMetaHumanBodyType__m_tal_ovw                                                    = 16,
	EMetaHumanBodyType__m_tal_unw                                                    = 17,
	EMetaHumanBodyType__Count                                                        = 18,
	EMetaHumanBodyType__EMetaHumanBodyType_MAX                                       = 19
};

/// Enum /Script/MetaHumanUEFNRuntime.EMetaHumanBodyBodyPartIndex
/// Size: 0x07
enum class EMetaHumanBodyBodyPartIndex : uint8_t
{
	EMetaHumanBodyBodyPartIndex__Body                                                = 0,
	EMetaHumanBodyBodyPartIndex__Face                                                = 1,
	EMetaHumanBodyBodyPartIndex__Torso                                               = 2,
	EMetaHumanBodyBodyPartIndex__Legs                                                = 3,
	EMetaHumanBodyBodyPartIndex__Feet                                                = 4,
	EMetaHumanBodyBodyPartIndex__Count                                               = 5,
	EMetaHumanBodyBodyPartIndex__EMetaHumanBodyBodyPartIndex_MAX                     = 6
};

