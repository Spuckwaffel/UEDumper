
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: IKRig
/// dependency: LiveLinkInterface

/// Class /Script/PerformanceCaptureCore.CaptureCharacter
/// Size: 0x0020 (0x000310 - 0x000330)
class ACaptureCharacter : public ASkeletalMeshActor
{ 
public:
	class ACapturePerformer*                           SourcePerformer;                                            // 0x0310   (0x0008)  
	class UIKRetargeter*                               RetargetAsset;                                              // 0x0318   (0x0008)  
	bool                                               bForceAllSkeletalMeshesToFollowLeader;                      // 0x0320   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0321   (0x0007)  MISSED
	class URetargetComponent*                          RetargetComponent;                                          // 0x0328   (0x0008)  


	/// Functions
	// Function /Script/PerformanceCaptureCore.CaptureCharacter.SetSourcePerformer
	// void SetSourcePerformer(class ACapturePerformer* InPerformer);                                                        // [0xb899c44] Final|Native|Public|BlueprintCallable 
	// Function /Script/PerformanceCaptureCore.CaptureCharacter.SetRetargetAsset
	// void SetRetargetAsset(class UIKRetargeter* InRetargetAsset);                                                          // [0xb899b28] Final|Native|Public|BlueprintCallable 
	// Function /Script/PerformanceCaptureCore.CaptureCharacter.SetForceAllSkeletalMeshesToFollowLeader
	// void SetForceAllSkeletalMeshesToFollowLeader(bool InFollowLeader);                                                    // [0xb8997a8] Final|Native|Public|BlueprintCallable 
	// Function /Script/PerformanceCaptureCore.CaptureCharacter.SetCustomRetargetProfile
	// void SetCustomRetargetProfile(FRetargetProfile InProfile);                                                            // [0xb899374] Final|Native|Public|BlueprintCallable 
	// Function /Script/PerformanceCaptureCore.CaptureCharacter.GetCustomRetargetProfile
	// FRetargetProfile GetCustomRetargetProfile();                                                                          // [0xb8991e0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/PerformanceCaptureCore.CapturePerformer
/// Size: 0x0010 (0x000310 - 0x000320)
class ACapturePerformer : public ASkeletalMeshActor
{ 
public:
	FLiveLinkSubjectName                               SubjectName;                                                // 0x0310   (0x0004)  
	bool                                               bForceAllMeshesToFollowLeader;                              // 0x0314   (0x0001)  
	bool                                               bEvaluateAnimation;                                         // 0x0315   (0x0001)  
	unsigned char                                      UnknownData00_6[0xA];                                       // 0x0316   (0x000A)  MISSED


	/// Functions
	// Function /Script/PerformanceCaptureCore.CapturePerformer.SetMocapMesh
	// void SetMocapMesh(class USkeletalMesh* MocapMesh);                                                                    // [0xb899a9c] Final|Native|Public|BlueprintCallable 
	// Function /Script/PerformanceCaptureCore.CapturePerformer.SetLiveLinkSubject
	// void SetLiveLinkSubject(FLiveLinkSubjectName Subject);                                                                // [0xb899834] Final|Native|Public|BlueprintCallable 
	// Function /Script/PerformanceCaptureCore.CapturePerformer.SetEvaluateLiveLinkData
	// void SetEvaluateLiveLinkData(bool bEvaluateLinkLink);                                                                 // [0xb89969c] Final|Native|Public|BlueprintCallable 
	// Function /Script/PerformanceCaptureCore.CapturePerformer.GetLiveLinkSubject
	// FLiveLinkSubjectName GetLiveLinkSubject();                                                                            // [0xb8992d4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PerformanceCaptureCore.CapturePerformer.GetEvaluateLiveLinkData
	// bool GetEvaluateLiveLinkData();                                                                                       // [0xb8992b0] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/PerformanceCaptureCore.PerformerComponent
/// Size: 0x0038 (0x0000A0 - 0x0000D8)
class UPerformerComponent : public UActorComponent
{ 
public:
	FLiveLinkSubjectName                               SubjectName;                                                // 0x00A0   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00A4   (0x0004)  MISSED
	FComponentReference                                ControlledSkeletalMesh;                                     // 0x00A8   (0x0028)  
	bool                                               bEvaluateAnimation;                                         // 0x00D0   (0x0001)  
	bool                                               bForceOtherMeshesToFollowControlledMesh;                    // 0x00D1   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x00D2   (0x0006)  MISSED


	/// Functions
	// Function /Script/PerformanceCaptureCore.PerformerComponent.SetLiveLinkSubject
	// void SetLiveLinkSubject(FLiveLinkSubjectName Subject);                                                                // [0xb89996c] Final|Native|Public|BlueprintCallable 
	// Function /Script/PerformanceCaptureCore.PerformerComponent.SetEvaluateLiveLinkData
	// void SetEvaluateLiveLinkData(bool bEvaluateLinkLink);                                                                 // [0xb899728] Final|Native|Public|BlueprintCallable 
	// Function /Script/PerformanceCaptureCore.PerformerComponent.GetLiveLinkSubject
	// FLiveLinkSubjectName GetLiveLinkSubject();                                                                            // [0x8ebd450] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PerformanceCaptureCore.PerformerComponent.GetEvaluateLiveLinkData
	// bool GetEvaluateLiveLinkData();                                                                                       // [0x945cf30] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/PerformanceCaptureCore.RetargetAnimInstance
/// Size: 0x01D0 (0x000370 - 0x000540)
class URetargetAnimInstance : public UAnimInstance
{ 
public:
	FAnimNode_RetargetPoseFromMesh                     RetargetNode;                                               // 0x0368   (0x01D8)  
};

/// Class /Script/PerformanceCaptureCore.RetargetComponent
/// Size: 0x0168 (0x0000A0 - 0x000208)
class URetargetComponent : public UActorComponent
{ 
public:
	FComponentReference                                SourceSkeletalMeshComponent;                                // 0x00A0   (0x0028)  
	FComponentReference                                ControlledSkeletalMeshComponent;                            // 0x00C8   (0x0028)  
	bool                                               bForceOtherMeshesToFollowControlledMesh;                    // 0x00F0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x00F1   (0x0007)  MISSED
	class UIKRetargeter*                               RetargetAsset;                                              // 0x00F8   (0x0008)  
	FRetargetProfile                                   CustomRetargetProfile;                                      // 0x0100   (0x0100)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0200   (0x0008)  MISSED


	/// Functions
	// Function /Script/PerformanceCaptureCore.RetargetComponent.SetSourcePerformerMesh
	// void SetSourcePerformerMesh(class USkeletalMeshComponent* InPerformerMesh);                                           // [0xb899cc4] Final|Native|Public|BlueprintCallable 
	// Function /Script/PerformanceCaptureCore.RetargetComponent.SetRetargetAsset
	// void SetRetargetAsset(class UIKRetargeter* InRetargetAsset);                                                          // [0xb899bc4] Final|Native|Public|BlueprintCallable 
	// Function /Script/PerformanceCaptureCore.RetargetComponent.SetCustomRetargetProfile
	// void SetCustomRetargetProfile(FRetargetProfile InProfile);                                                            // [0xb899508] Final|Native|Public|BlueprintCallable 
	// Function /Script/PerformanceCaptureCore.RetargetComponent.SetControlledMesh
	// void SetControlledMesh(class USkeletalMeshComponent* InControlledMesh);                                               // [0xb8992f4] Final|Native|Public|BlueprintCallable 
	// Function /Script/PerformanceCaptureCore.RetargetComponent.GetCustomRetargetProfile
	// FRetargetProfile GetCustomRetargetProfile();                                                                          // [0xb89924c] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/PerformanceCaptureCore.RetargetAnimInstanceProxy
/// Size: 0x0010 (0x000740 - 0x000750)
struct FRetargetAnimInstanceProxy : FAnimInstanceProxy
{ 
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0738   (0x0018)  MISSED
};

