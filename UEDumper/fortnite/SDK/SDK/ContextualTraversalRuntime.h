
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: GameplayTags

/// Class /Script/ContextualTraversalRuntime.FortMovementMode_ExtLogicTraversalBase
/// Size: 0x0058 (0x000120 - 0x000178)
class UFortMovementMode_ExtLogicTraversalBase : public UFortMovementMode_BaseExtLogic
{ 
public:
	unsigned char                                      UnknownData00_3[0x30];                                      // 0x0120   (0x0030)  MISSED
	FGameplayTag                                       SynchedActionTag;                                           // 0x0150   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0154   (0x0004)  MISSED
	class UClass*                                      CameraMode;                                                 // 0x0158   (0x0008)  
	FGameplayTag                                       CameraModeTag;                                              // 0x0160   (0x0004)  
	FName                                              MontageStartSectionName;                                    // 0x0164   (0x0004)  
	bool                                               bUseNextSectionAnimName;                                    // 0x0168   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0169   (0x0003)  MISSED
	float                                              OverrideServerAllowablePositionError;                       // 0x016C   (0x0004)  
	float                                              OverrideAnimBlendOutTimeWhenLanding;                        // 0x0170   (0x0004)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x0174   (0x0004)  MISSED
};

/// Struct /Script/ContextualTraversalRuntime.FortMovementMode_TraversalBaseRuntimeData
/// Size: 0x00C0 (0x000010 - 0x0000D0)
#pragma pack(push, 0x1)
struct alignas(0x10) FFortMovementMode_TraversalBaseRuntimeData : FFortMovementMode_BaseExtRuntimeData
{ 
	class UAnimMontage*                                AnimMontage;                                                // 0x0010   (0x0008)  
	FName                                              MontageStartSectionName;                                    // 0x0018   (0x0004)  
	FName                                              MontageMiddleSectionName;                                   // 0x001C   (0x0004)  
	FSynchedActionWarpPointInfo_Replicated             SynchedActionWarpPointInfo;                                 // 0x0020   (0x00A0)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x00C0   (0x0008)  MISSED
};
#pragma pack(pop)

/// Struct /Script/ContextualTraversalRuntime.FortMovementMode_TraversalBaseCreationData
/// Size: 0x0128 (0x000008 - 0x000130)
#pragma pack(push, 0x1)
struct alignas(0x10) FFortMovementMode_TraversalBaseCreationData : FFortMovementMode_BaseExtCreationData
{ 
	FSynchedActionInfo                                 SynchedActionInfo;                                          // 0x0008   (0x0030)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0038   (0x0008)  MISSED
	FSynchedActionWarpPointInfo_Replicated             SynchedActionWarpPointInfo;                                 // 0x0040   (0x00A0)  
	FVector                                            TargetLocation;                                             // 0x00E0   (0x0018)  
	FRotator                                           TargetRotation;                                             // 0x00F8   (0x0018)  
	SDK_UNDEFINED(8,12409) /* TWeakObjectPtr<AActor*> */ __um(RefActor);                                           // 0x0110   (0x0008)  
	SDK_UNDEFINED(8,12410) /* TWeakObjectPtr<UPrimitiveComponent*> */ __um(RefActorComponent);                     // 0x0118   (0x0008)  
	FName                                              RefActorBoneName;                                           // 0x0120   (0x0004)  
	EFortSynchedActionEndMovementMode                  EndMovementMode;                                            // 0x0124   (0x0001)  
	bool                                               bIsWindow;                                                  // 0x0125   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x0126   (0x0002)  MISSED
};
#pragma pack(pop)

