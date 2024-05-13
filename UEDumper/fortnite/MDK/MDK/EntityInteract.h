
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: LocalizableMessage

/// Class /Script/EntityInteract.EntityInteractLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UEntityInteractLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/EntityInteract.EntityInteractLibrary.EntityInteractGetActor
	// class AActor* EntityInteractGetActor(class UObject* WorldContextObject, FHitResult& HitResult);                          // [0xc9d5878] Final|Native|Static|Public|HasOutParms 
};

/// Class /Script/EntityInteract.EntityInteractProxyActor
/// Size: 0x0068 (0x000290 - 0x0002F8)
class AEntityInteractProxyActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 760;

public:
	CMember(class USceneComponent*)                    ActorRootComponent                                          OFFSET(get<T>, {0x298, 8, 0, 0})
	SMember(FLocalizableMessage)                       InteractMessage                                             OFFSET(getStruct<T>, {0x2A0, 48, 0, 0})
	SMember(FText)                                     InteractText                                                OFFSET(getStruct<T>, {0x2D0, 16, 0, 0})
	DMember(float)                                     ForwardInteractOffset                                       OFFSET(get<float>, {0x2F0, 4, 0, 0})
	DMember(float)                                     RightInteractOffset                                         OFFSET(get<float>, {0x2F4, 4, 0, 0})


	/// Functions
	// Function /Script/EntityInteract.EntityInteractProxyActor.OnRep_Message
	// void OnRep_Message();                                                                                                    // [0xc9d5994] Final|Native|Private 
};

/// Class /Script/EntityInteract.FortAthenaMutator_EntityInteract
/// Size: 0x0000 (0x000338 - 0x000338)
class AFortAthenaMutator_EntityInteract : public AFortAthenaMutator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 824;

public:
};

