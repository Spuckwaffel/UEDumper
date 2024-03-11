
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: LiveLinkInterface

/// Class /Script/LiveLinkAnimationCore.LiveLinkInstance
/// Size: 0x0000 (0x000370 - 0x000370)
class ULiveLinkInstance : public UAnimInstance
{ 
public:


	/// Functions
	// Function /Script/LiveLinkAnimationCore.LiveLinkInstance.SetSubject
	// void SetSubject(FLiveLinkSubjectName SubjectName);                                                                    // [0xb71ca18] Final|Native|Public|BlueprintCallable 
	// Function /Script/LiveLinkAnimationCore.LiveLinkInstance.SetRetargetAsset
	// void SetRetargetAsset(class UClass* RetargetAsset);                                                                   // [0xb71c940] Final|Native|Public|BlueprintCallable 
	// Function /Script/LiveLinkAnimationCore.LiveLinkInstance.EnableLiveLinkEvaluation
	// void EnableLiveLinkEvaluation(bool bDoEnable);                                                                        // [0xb71c6c0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/LiveLinkAnimationCore.LiveLinkRetargetAsset
/// Size: 0x0000 (0x000028 - 0x000028)
class ULiveLinkRetargetAsset : public UObject
{ 
public:
};

/// Class /Script/LiveLinkAnimationCore.LiveLinkRemapAsset
/// Size: 0x00A0 (0x000028 - 0x0000C8)
class ULiveLinkRemapAsset : public ULiveLinkRetargetAsset
{ 
public:
	unsigned char                                      UnknownData00_1[0xA0];                                      // 0x0028   (0x00A0)  MISSED


	/// Functions
	// Function /Script/LiveLinkAnimationCore.LiveLinkRemapAsset.RemapCurveElements
	// void RemapCurveElements(TMap<FName, float>& CurveItems);                                                              // [0xb71c858] RequiredAPI|Native|Event|Public|HasOutParms|BlueprintEvent|Const 
	// Function /Script/LiveLinkAnimationCore.LiveLinkRemapAsset.GetRemappedCurveName
	// FName GetRemappedCurveName(FName CurveName);                                                                          // [0xb71c7cc] RequiredAPI|Native|Event|Public|BlueprintEvent|Const 
	// Function /Script/LiveLinkAnimationCore.LiveLinkRemapAsset.GetRemappedBoneName
	// FName GetRemappedBoneName(FName BoneName);                                                                            // [0xb71c740] RequiredAPI|Native|Event|Public|BlueprintEvent|Const 
};

/// Struct /Script/LiveLinkAnimationCore.AnimNode_LiveLinkPose
/// Size: 0x0050 (0x000010 - 0x000060)
struct FAnimNode_LiveLinkPose : FAnimNode_Base
{ 
	FPoseLink                                          InputPose;                                                  // 0x0010   (0x0010)  
	FLiveLinkSubjectName                               LiveLinkSubjectName;                                        // 0x0020   (0x0004)  
	bool                                               bDoLiveLinkEvaluation;                                      // 0x0024   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0025   (0x0003)  MISSED
	class UClass*                                      RetargetAsset;                                              // 0x0028   (0x0008)  
	class ULiveLinkRetargetAsset*                      CurrentRetargetAsset;                                       // 0x0030   (0x0008)  
	unsigned char                                      UnknownData01_6[0x28];                                      // 0x0038   (0x0028)  MISSED
};

/// Struct /Script/LiveLinkAnimationCore.LiveLinkInstanceProxy
/// Size: 0x0060 (0x000740 - 0x0007A0)
struct FLiveLinkInstanceProxy : FAnimInstanceProxy
{ 
	FAnimNode_LiveLinkPose                             PoseNode;                                                   // 0x0738   (0x0060)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0798   (0x0008)  MISSED
};

