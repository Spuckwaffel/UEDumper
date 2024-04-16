
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: LiveLinkInterface

/// Class /Script/LiveLinkComponents.LiveLinkComponentSettings
/// Size: 0x0050 (0x000028 - 0x000078)
class ULiveLinkComponentSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	CMember(TMap<UClass*, UClass*>)                    DefaultControllerForRole                                    OFFSET(get<T>, {0x28, 80, 0, 0})
};

/// Class /Script/LiveLinkComponents.LiveLinkControllerBase
/// Size: 0x0040 (0x000028 - 0x000068)
class ULiveLinkControllerBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FComponentReference)                       ComponentPicker                                             OFFSET(getStruct<T>, {0x28, 40, 0, 0})
};

/// Class /Script/LiveLinkComponents.LiveLinkLightController
/// Size: 0x0000 (0x000068 - 0x000068)
class ULiveLinkLightController : public ULiveLinkControllerBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
};

/// Class /Script/LiveLinkComponents.LiveLinkTransformController
/// Size: 0x0008 (0x000068 - 0x000070)
class ULiveLinkTransformController : public ULiveLinkControllerBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FLiveLinkTransformControllerData)          TransformData                                               OFFSET(getStruct<T>, {0x68, 6, 0, 0})
};

/// Class /Script/LiveLinkComponents.LiveLinkComponentController
/// Size: 0x00A8 (0x0000A0 - 0x000148)
class ULiveLinkComponentController : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 328;

public:
	SMember(FLiveLinkSubjectRepresentation)            SubjectRepresentation                                       OFFSET(getStruct<T>, {0xA0, 16, 0, 0})
	CMember(TMap<UClass*, ULiveLinkControllerBase*>)   ControllerMap                                               OFFSET(get<T>, {0xB0, 80, 0, 0})
	DMember(bool)                                      bUpdateInEditor                                             OFFSET(get<bool>, {0x100, 1, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnLiveLinkUpdated                                           OFFSET(getStruct<T>, {0x108, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnControllerMapUpdatedDelegate                              OFFSET(getStruct<T>, {0x118, 16, 0, 0})
	DMember(bool)                                      bDisableEvaluateLiveLinkWhenSpawnable                       OFFSET(get<bool>, {0x128, 1, 0, 0})
	DMember(bool)                                      bEvaluateLiveLink                                           OFFSET(get<bool>, {0x129, 1, 0, 0})
	DMember(bool)                                      bUpdateInPreviewEditor                                      OFFSET(get<bool>, {0x12A, 1, 0, 0})


	/// Functions
	// Function /Script/LiveLinkComponents.LiveLinkComponentController.SetSubjectRepresentation
	// void SetSubjectRepresentation(FLiveLinkSubjectRepresentation InSubjectRepresentation);                                   // [0xcb9ca94] Final|Native|Public|BlueprintCallable 
	// Function /Script/LiveLinkComponents.LiveLinkComponentController.GetSubjectRepresentation
	// FLiveLinkSubjectRepresentation GetSubjectRepresentation();                                                               // [0xcb9ca50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/LiveLinkComponents.LiveLinkTransformControllerData
/// Size: 0x0006 (0x000000 - 0x000006)
class FLiveLinkTransformControllerData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 6;

public:
	DMember(bool)                                      bWorldTransform                                             OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(bool)                                      bUseLocation                                                OFFSET(get<bool>, {0x1, 1, 0, 0})
	DMember(bool)                                      bUseRotation                                                OFFSET(get<bool>, {0x2, 1, 0, 0})
	DMember(bool)                                      bUseScale                                                   OFFSET(get<bool>, {0x3, 1, 0, 0})
	DMember(bool)                                      bSweep                                                      OFFSET(get<bool>, {0x4, 1, 0, 0})
	DMember(bool)                                      bTeleport                                                   OFFSET(get<bool>, {0x5, 1, 0, 0})
};

