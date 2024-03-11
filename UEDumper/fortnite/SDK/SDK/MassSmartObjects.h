
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: GameplayTags
/// dependency: MassEntity
/// dependency: MassSpawner
/// dependency: SmartObjectsModule
/// dependency: ZoneGraph
/// dependency: ZoneGraphAnnotations

/// Enum /Script/MassSmartObjects.EMassSmartObjectInteractionStatus
/// Size: 0x06
enum class EMassSmartObjectInteractionStatus : uint8_t
{
	EMassSmartObjectInteractionStatus__Unset                                         = 0,
	EMassSmartObjectInteractionStatus__InProgress                                    = 1,
	EMassSmartObjectInteractionStatus__BehaviorCompleted                             = 2,
	EMassSmartObjectInteractionStatus__TaskCompleted                                 = 3,
	EMassSmartObjectInteractionStatus__Aborted                                       = 4,
	EMassSmartObjectInteractionStatus__EMassSmartObjectInteractionStatus_MAX         = 5
};

/// Class /Script/MassSmartObjects.SmartObjectMassBehaviorDefinition
/// Size: 0x0008 (0x000028 - 0x000030)
class USmartObjectMassBehaviorDefinition : public USmartObjectBehaviorDefinition
{ 
public:
	float                                              UseTime;                                                    // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Class /Script/MassSmartObjects.MassSmartObjectCandidatesFinderProcessor
/// Size: 0x0550 (0x0000C0 - 0x000610)
class UMassSmartObjectCandidatesFinderProcessor : public UMassProcessor
{ 
public:
	float                                              SearchExtents;                                              // 0x00C0   (0x0004)  
	unsigned char                                      UnknownData00_6[0x54C];                                     // 0x00C4   (0x054C)  MISSED
};

/// Class /Script/MassSmartObjects.MassSmartObjectTimedBehaviorProcessor
/// Size: 0x02A0 (0x0000C0 - 0x000360)
class UMassSmartObjectTimedBehaviorProcessor : public UMassProcessor
{ 
public:
	unsigned char                                      UnknownData00_1[0x2A0];                                     // 0x00C0   (0x02A0)  MISSED
};

/// Class /Script/MassSmartObjects.MassSmartObjectUserFragmentDeinitializer
/// Size: 0x02A8 (0x0000D8 - 0x000380)
class UMassSmartObjectUserFragmentDeinitializer : public UMassObserverProcessor
{ 
public:
	unsigned char                                      UnknownData00_1[0x2A8];                                     // 0x00D8   (0x02A8)  MISSED
};

/// Class /Script/MassSmartObjects.MassSmartObjectSettings
/// Size: 0x0008 (0x000028 - 0x000030)
class UMassSmartObjectSettings : public UMassModuleSettings
{ 
public:
	FZoneGraphTag                                      SmartObjectTag;                                             // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0029   (0x0003)  MISSED
	float                                              SearchExtents;                                              // 0x002C   (0x0004)  
};

/// Class /Script/MassSmartObjects.MassSmartObjectUserTrait
/// Size: 0x0020 (0x000028 - 0x000048)
class UMassSmartObjectUserTrait : public UMassEntityTraitBase
{ 
public:
	FGameplayTagContainer                              UserTags;                                                   // 0x0028   (0x0020)  
};

/// Struct /Script/MassSmartObjects.SmartObjectLaneLocation
/// Size: 0x0010 (0x000000 - 0x000010)
struct FSmartObjectLaneLocation
{ 
	FSmartObjectHandle                                 ObjectHandle;                                               // 0x0000   (0x0008)  
	int32_t                                            LaneIndex;                                                  // 0x0008   (0x0004)  
	float                                              DistanceAlongLane;                                          // 0x000C   (0x0004)  
};

/// Struct /Script/MassSmartObjects.SmartObjectAnnotationData
/// Size: 0x00D0 (0x000000 - 0x0000D0)
struct FSmartObjectAnnotationData
{ 
	FZoneGraphDataHandle                               DataHandle;                                                 // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	TArray<int32_t>                                    AffectedLanes;                                              // 0x0008   (0x0010)  
	TArray<FSmartObjectLaneLocation>                   SmartObjectLaneLocations;                                   // 0x0018   (0x0010)  
	SDK_UNDEFINED(80,14908) /* TMap<FSmartObjectHandle, int32_t> */ __um(SmartObjectToLaneLocationIndexLookup);    // 0x0028   (0x0050)  
	SDK_UNDEFINED(80,14909) /* TMap<int32_t, FSmartObjectLaneLocationIndices> */ __um(LaneToLaneLocationIndicesLookup); // 0x0078   (0x0050)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x00C8   (0x0008)  MISSED
};

/// Class /Script/MassSmartObjects.SmartObjectZoneAnnotations
/// Size: 0x0030 (0x000570 - 0x0005A0)
class USmartObjectZoneAnnotations : public UZoneGraphAnnotationComponent
{ 
public:
	FZoneGraphTagFilter                                AffectedLaneTags;                                           // 0x0570   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x057C   (0x0004)  MISSED
	TArray<FSmartObjectAnnotationData>                 SmartObjectAnnotationDataArray;                             // 0x0580   (0x0010)  
	FZoneGraphTag                                      BehaviorTag;                                                // 0x0590   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0591   (0x0007)  MISSED
	class USmartObjectSubsystem*                       SmartObjectSubsystem;                                       // 0x0598   (0x0008)  
};

/// Struct /Script/MassSmartObjects.MassSmartObjectUserFragment
/// Size: 0x004F (0x000001 - 0x000050)
struct FMassSmartObjectUserFragment : FMassFragment
{ 
	FGameplayTagContainer                              UserTags;                                                   // 0x0000   (0x0020)  
	FSmartObjectClaimHandle                            InteractionHandle;                                          // 0x0020   (0x0020)  
	EMassSmartObjectInteractionStatus                  InteractionStatus;                                          // 0x0040   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0041   (0x0007)  MISSED
	double                                             InteractionCooldownEndTime;                                 // 0x0048   (0x0008)  
};

/// Struct /Script/MassSmartObjects.MassSmartObjectTimedBehaviorFragment
/// Size: 0x0003 (0x000001 - 0x000004)
struct FMassSmartObjectTimedBehaviorFragment : FMassFragment
{ 
	float                                              UseTime;                                                    // 0x0000   (0x0004)  
};

/// Struct /Script/MassSmartObjects.SmartObjectCandidateSlot
/// Size: 0x0020 (0x000000 - 0x000020)
struct FSmartObjectCandidateSlot
{ 
	FSmartObjectRequestResult                          Result;                                                     // 0x0000   (0x0018)  
	float                                              Cost;                                                       // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Struct /Script/MassSmartObjects.MassSmartObjectRequestID
/// Size: 0x0008 (0x000000 - 0x000008)
struct FMassSmartObjectRequestID
{ 
	FMassEntityHandle                                  Entity;                                                     // 0x0000   (0x0008)  
};

/// Struct /Script/MassSmartObjects.MassSmartObjectCandidateSlots
/// Size: 0x0088 (0x000000 - 0x000088)
struct FMassSmartObjectCandidateSlots
{ 
	char                                               NumSlots;                                                   // 0x0080   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0081   (0x0007)  MISSED
};

/// Struct /Script/MassSmartObjects.MassSmartObjectRequestResultFragment
/// Size: 0x008F (0x000001 - 0x000090)
struct FMassSmartObjectRequestResultFragment : FMassFragment
{ 
	FMassSmartObjectCandidateSlots                     Candidates;                                                 // 0x0000   (0x0088)  
	bool                                               bProcessed;                                                 // 0x0088   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0089   (0x0007)  MISSED
};

/// Struct /Script/MassSmartObjects.MassSmartObjectWorldLocationRequestFragment
/// Size: 0x0087 (0x000001 - 0x000088)
struct FMassSmartObjectWorldLocationRequestFragment : FMassFragment
{ 
	FVector                                            SearchOrigin;                                               // 0x0000   (0x0018)  
	FMassEntityHandle                                  RequestingEntity;                                           // 0x0018   (0x0008)  
	FGameplayTagContainer                              UserTags;                                                   // 0x0020   (0x0020)  
	FGameplayTagQuery                                  ActivityRequirements;                                       // 0x0040   (0x0048)  
};

/// Struct /Script/MassSmartObjects.MassSmartObjectLaneLocationRequestFragment
/// Size: 0x007F (0x000001 - 0x000080)
struct FMassSmartObjectLaneLocationRequestFragment : FMassFragment
{ 
	unsigned char                                      UnknownData00_3[0x10];                                      // 0x0000   (0x0010)  MISSED
	FMassEntityHandle                                  RequestingEntity;                                           // 0x0010   (0x0008)  
	FGameplayTagContainer                              UserTags;                                                   // 0x0018   (0x0020)  
	FGameplayTagQuery                                  ActivityRequirements;                                       // 0x0038   (0x0048)  
};

/// Struct /Script/MassSmartObjects.MassSmartObjectCompletedRequestTag
/// Size: 0x0000 (0x000001 - 0x000001)
struct FMassSmartObjectCompletedRequestTag : FMassTag
{ 
};

/// Struct /Script/MassSmartObjects.SmartObjectMassEntityUserData
/// Size: 0x0008 (0x000000 - 0x000008)
struct FSmartObjectMassEntityUserData
{ 
	FMassEntityHandle                                  UserEntity;                                                 // 0x0000   (0x0008)  
};

/// Struct /Script/MassSmartObjects.SmartObjectLaneLocationIndices
/// Size: 0x0010 (0x000000 - 0x000010)
struct FSmartObjectLaneLocationIndices
{ 
	TArray<int32_t>                                    SmartObjectLaneLocationIndices;                             // 0x0000   (0x0010)  
};

