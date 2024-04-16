
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: IKRig
/// dependency: LiveLinkInterface

/// Class /Script/PerformanceCaptureCore.CaptureCharacter
/// Size: 0x0020 (0x000310 - 0x000330)
class ACaptureCharacter : public ASkeletalMeshActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 816;

public:
	CMember(class ACapturePerformer*)                  SourcePerformer                                             OFFSET(get<T>, {0x310, 8, 0, 0})
	CMember(class UIKRetargeter*)                      RetargetAsset                                               OFFSET(get<T>, {0x318, 8, 0, 0})
	DMember(bool)                                      bForceAllSkeletalMeshesToFollowLeader                       OFFSET(get<bool>, {0x320, 1, 0, 0})
	CMember(class URetargetComponent*)                 RetargetComponent                                           OFFSET(get<T>, {0x328, 8, 0, 0})


	/// Functions
	// Function /Script/PerformanceCaptureCore.CaptureCharacter.SetSourcePerformer
	// void SetSourcePerformer(class ACapturePerformer* InPerformer);                                                           // [0xcc4b480] Final|Native|Public|BlueprintCallable 
	// Function /Script/PerformanceCaptureCore.CaptureCharacter.SetRetargetAsset
	// void SetRetargetAsset(class UIKRetargeter* InRetargetAsset);                                                             // [0xcc4b2e4] Final|Native|Public|BlueprintCallable 
	// Function /Script/PerformanceCaptureCore.CaptureCharacter.SetForceAllSkeletalMeshesToFollowLeader
	// void SetForceAllSkeletalMeshesToFollowLeader(bool InFollowLeader);                                                       // [0xcc4afc4] Final|Native|Public|BlueprintCallable 
	// Function /Script/PerformanceCaptureCore.CaptureCharacter.SetCustomRetargetProfile
	// void SetCustomRetargetProfile(FRetargetProfile InProfile);                                                               // [0xcc4abe4] Final|Native|Public|BlueprintCallable 
	// Function /Script/PerformanceCaptureCore.CaptureCharacter.GetCustomRetargetProfile
	// FRetargetProfile GetCustomRetargetProfile();                                                                             // [0xcc4aa10] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/PerformanceCaptureCore.CapturePerformer
/// Size: 0x0010 (0x000310 - 0x000320)
class ACapturePerformer : public ASkeletalMeshActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 800;

public:
	SMember(FLiveLinkSubjectName)                      SubjectName                                                 OFFSET(getStruct<T>, {0x310, 4, 0, 0})
	DMember(bool)                                      bForceAllMeshesToFollowLeader                               OFFSET(get<bool>, {0x314, 1, 0, 0})
	DMember(bool)                                      bEvaluateAnimation                                          OFFSET(get<bool>, {0x315, 1, 0, 0})


	/// Functions
	// Function /Script/PerformanceCaptureCore.CapturePerformer.SetMocapMesh
	// void SetMocapMesh(class USkeletalMesh* MocapMesh);                                                                       // [0xcc4b218] Final|Native|Public|BlueprintCallable 
	// Function /Script/PerformanceCaptureCore.CapturePerformer.SetLiveLinkSubject
	// void SetLiveLinkSubject(FLiveLinkSubjectName Subject);                                                                   // [0xcc4b090] Final|Native|Public|BlueprintCallable 
	// Function /Script/PerformanceCaptureCore.CapturePerformer.SetEvaluateLiveLinkData
	// void SetEvaluateLiveLinkData(bool bEvaluateLinkLink);                                                                    // [0xcc4ae34] Final|Native|Public|BlueprintCallable 
	// Function /Script/PerformanceCaptureCore.CapturePerformer.GetLiveLinkSubject
	// FLiveLinkSubjectName GetLiveLinkSubject();                                                                               // [0xcc4ab04] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PerformanceCaptureCore.CapturePerformer.GetEvaluateLiveLinkData
	// bool GetEvaluateLiveLinkData();                                                                                          // [0xcc4aae0] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/PerformanceCaptureCore.PerformerComponent
/// Size: 0x0038 (0x0000A0 - 0x0000D8)
class UPerformerComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	SMember(FLiveLinkSubjectName)                      SubjectName                                                 OFFSET(getStruct<T>, {0xA0, 4, 0, 0})
	SMember(FComponentReference)                       ControlledSkeletalMesh                                      OFFSET(getStruct<T>, {0xA8, 40, 0, 0})
	DMember(bool)                                      bEvaluateAnimation                                          OFFSET(get<bool>, {0xD0, 1, 0, 0})
	DMember(bool)                                      bForceOtherMeshesToFollowControlledMesh                     OFFSET(get<bool>, {0xD1, 1, 0, 0})


	/// Functions
	// Function /Script/PerformanceCaptureCore.PerformerComponent.SetLiveLinkSubject
	// void SetLiveLinkSubject(FLiveLinkSubjectName Subject);                                                                   // [0xcc4b158] Final|Native|Public|BlueprintCallable 
	// Function /Script/PerformanceCaptureCore.PerformerComponent.SetEvaluateLiveLinkData
	// void SetEvaluateLiveLinkData(bool bEvaluateLinkLink);                                                                    // [0xcc4af00] Final|Native|Public|BlueprintCallable 
	// Function /Script/PerformanceCaptureCore.PerformerComponent.GetLiveLinkSubject
	// FLiveLinkSubjectName GetLiveLinkSubject();                                                                               // [0x97323b8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PerformanceCaptureCore.PerformerComponent.GetEvaluateLiveLinkData
	// bool GetEvaluateLiveLinkData();                                                                                          // [0x9f2dd08] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/PerformanceCaptureCore.RetargetAnimInstance
/// Size: 0x01D0 (0x000370 - 0x000540)
class URetargetAnimInstance : public UAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1344;

public:
	SMember(FAnimNode_RetargetPoseFromMesh)            RetargetNode                                                OFFSET(getStruct<T>, {0x368, 472, 0, 0})
};

/// Class /Script/PerformanceCaptureCore.RetargetComponent
/// Size: 0x0168 (0x0000A0 - 0x000208)
class URetargetComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 520;

public:
	SMember(FComponentReference)                       SourceSkeletalMeshComponent                                 OFFSET(getStruct<T>, {0xA0, 40, 0, 0})
	SMember(FComponentReference)                       ControlledSkeletalMeshComponent                             OFFSET(getStruct<T>, {0xC8, 40, 0, 0})
	DMember(bool)                                      bForceOtherMeshesToFollowControlledMesh                     OFFSET(get<bool>, {0xF0, 1, 0, 0})
	CMember(class UIKRetargeter*)                      RetargetAsset                                               OFFSET(get<T>, {0xF8, 8, 0, 0})
	SMember(FRetargetProfile)                          CustomRetargetProfile                                       OFFSET(getStruct<T>, {0x100, 256, 0, 0})


	/// Functions
	// Function /Script/PerformanceCaptureCore.RetargetComponent.SetSourcePerformerMesh
	// void SetSourcePerformerMesh(class USkeletalMeshComponent* InPerformerMesh);                                              // [0xcc4b540] Final|Native|Public|BlueprintCallable 
	// Function /Script/PerformanceCaptureCore.RetargetComponent.SetRetargetAsset
	// void SetRetargetAsset(class UIKRetargeter* InRetargetAsset);                                                             // [0xcc4b3c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/PerformanceCaptureCore.RetargetComponent.SetCustomRetargetProfile
	// void SetCustomRetargetProfile(FRetargetProfile InProfile);                                                               // [0xcc4ad1c] Final|Native|Public|BlueprintCallable 
	// Function /Script/PerformanceCaptureCore.RetargetComponent.SetControlledMesh
	// void SetControlledMesh(class USkeletalMeshComponent* InControlledMesh);                                                  // [0xcc4ab24] Final|Native|Public|BlueprintCallable 
	// Function /Script/PerformanceCaptureCore.RetargetComponent.GetCustomRetargetProfile
	// FRetargetProfile GetCustomRetargetProfile();                                                                             // [0xcc4aa7c] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/PerformanceCaptureCore.RetargetAnimInstanceProxy
/// Size: 0x0010 (0x000740 - 0x000750)
class FRetargetAnimInstanceProxy : public FAnimInstanceProxy
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1872;

public:
};

