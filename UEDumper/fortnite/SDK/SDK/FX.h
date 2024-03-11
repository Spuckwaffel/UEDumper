
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine

/// Enum /Inferno/FX/ENiagara_CurieAudioType.ENiagara_CurieAudioType
/// Size: 0x05
enum class ENiagara_CurieAudioType : uint8_t
{
	ENiagara_CurieAudioType__NewEnumerator0                                          = 0,
	ENiagara_CurieAudioType__NewEnumerator1                                          = 1,
	ENiagara_CurieAudioType__NewEnumerator2                                          = 2,
	ENiagara_CurieAudioType__NewEnumerator3                                          = 3,
	ENiagara_CurieAudioType__ENiagara_MAX                                            = 4
};

/// Enum /Inferno/FX/ENiagara_CurieVoxelFireType.ENiagara_CurieVoxelFireType
/// Size: 0x05
enum class ENiagara_CurieVoxelFireType : uint8_t
{
	ENiagara_CurieVoxelFireType__NewEnumerator0                                      = 0,
	ENiagara_CurieVoxelFireType__NewEnumerator1                                      = 1,
	ENiagara_CurieVoxelFireType__NewEnumerator2                                      = 2,
	ENiagara_CurieVoxelFireType__NewEnumerator3                                      = 3,
	ENiagara_CurieVoxelFireType__ENiagara_MAX                                        = 4
};

/// Class /Irwin/FX/AnimNotify_Irwin_Footfalls.AnimNotify_Irwin_Footfalls_C
/// Size: 0x0006 (0x000038 - 0x00003E)
class UAnimNotify_Irwin_Footfalls_C : public UAnimNotify
{ 
public:
	int32_t                                            FootfallsIndex;                                             // 0x0038   (0x0004)  
	bool                                               is_Running__;                                               // 0x003C   (0x0001)  
	bool                                               is_Sprinting__;                                             // 0x003D   (0x0001)  


	/// Functions
	// Function /Irwin/FX/AnimNotify_Irwin_Footfalls.AnimNotify_Irwin_Footfalls_C.Received_Notify
	// bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, FAnimNotifyEventReference& EventReference); // [0x18a39e4] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
};

