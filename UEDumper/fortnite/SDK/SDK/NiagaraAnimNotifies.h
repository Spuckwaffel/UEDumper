
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: Niagara

/// Class /Script/NiagaraAnimNotifies.AnimNotifyState_TimedNiagaraEffect
/// Size: 0x0048 (0x000030 - 0x000078)
class UAnimNotifyState_TimedNiagaraEffect : public UAnimNotifyState
{ 
public:
	class UNiagaraSystem*                              Template;                                                   // 0x0030   (0x0008)  
	FName                                              SocketName;                                                 // 0x0038   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x003C   (0x0004)  MISSED
	FVector                                            LocationOffset;                                             // 0x0040   (0x0018)  
	FRotator                                           RotationOffset;                                             // 0x0058   (0x0018)  
	bool                                               bApplyRateScaleAsTimeDilation;                              // 0x0070   (0x0001)  
	bool                                               bDestroyAtEnd;                                              // 0x0071   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x0072   (0x0006)  MISSED


	/// Functions
	// Function /Script/NiagaraAnimNotifies.AnimNotifyState_TimedNiagaraEffect.GetSpawnedEffect
	// class UFXSystemComponent* GetSpawnedEffect(class UMeshComponent* MeshComp);                                           // [0x31047ec] Final|RequiredAPI|Native|Public|BlueprintCallable|Const 
};

/// Struct /Script/NiagaraAnimNotifies.CurveParameterPair
/// Size: 0x0008 (0x000000 - 0x000008)
struct FCurveParameterPair
{ 
	FName                                              AnimCurveName;                                              // 0x0000   (0x0004)  
	FName                                              UserVariableName;                                           // 0x0004   (0x0004)  
};

/// Class /Script/NiagaraAnimNotifies.AnimNotifyState_TimedNiagaraEffectAdvanced
/// Size: 0x0068 (0x000078 - 0x0000E0)
class UAnimNotifyState_TimedNiagaraEffectAdvanced : public UAnimNotifyState_TimedNiagaraEffect
{ 
public:
	bool                                               bEnableNormalizedNotifyProgress;                            // 0x0078   (0x0001)  
	bool                                               bApplyRateScaleToProgress;                                  // 0x0079   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x007A   (0x0002)  MISSED
	FName                                              NotifyProgressUserParameter;                                // 0x007C   (0x0004)  
	TArray<FCurveParameterPair>                        AnimCurves;                                                 // 0x0080   (0x0010)  
	unsigned char                                      UnknownData01_6[0x50];                                      // 0x0090   (0x0050)  MISSED


	/// Functions
	// Function /Script/NiagaraAnimNotifies.AnimNotifyState_TimedNiagaraEffectAdvanced.GetNotifyProgress
	// float GetNotifyProgress(class UMeshComponent* MeshComp);                                                              // [0x750cf88] Final|RequiredAPI|Native|Public|BlueprintCallable|Const 
};

/// Class /Script/NiagaraAnimNotifies.AnimNotify_PlayNiagaraEffect
/// Size: 0x0098 (0x000038 - 0x0000D0)
#pragma pack(push, 0x1)
class alignas(0x10) UAnimNotify_PlayNiagaraEffect : public UAnimNotify
{ 
public:
	class UNiagaraSystem*                              Template;                                                   // 0x0038   (0x0008)  
	FVector                                            LocationOffset;                                             // 0x0040   (0x0018)  
	FRotator                                           RotationOffset;                                             // 0x0058   (0x0018)  
	FVector                                            Scale;                                                      // 0x0070   (0x0018)  
	bool                                               bAbsoluteScale;                                             // 0x0088   (0x0001)  
	unsigned char                                      UnknownData00_5[0x37];                                      // 0x0089   (0x0037)  MISSED
	bool                                               Attached : 1;                                               // 0x00C0:0 (0x0001)  
	unsigned char                                      UnknownData01_4[0x3];                                       // 0x00C1   (0x0003)  MISSED
	FName                                              SocketName;                                                 // 0x00C4   (0x0004)  


	/// Functions
	// Function /Script/NiagaraAnimNotifies.AnimNotify_PlayNiagaraEffect.GetSpawnedEffect
	// class UFXSystemComponent* GetSpawnedEffect();                                                                         // [0x2bbd154] Final|RequiredAPI|Native|Public|BlueprintCallable|Const 
};
#pragma pack(pop)

