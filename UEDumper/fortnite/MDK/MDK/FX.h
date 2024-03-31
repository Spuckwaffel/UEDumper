
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine

/// Class /Irwin/FX/AnimNotify_Irwin_Footfalls.AnimNotify_Irwin_Footfalls_C
/// Size: 0x0006 (0x000038 - 0x00003E)
class UAnimNotify_Irwin_Footfalls_C : public UAnimNotify
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 62;

public:
	DMember(int32_t)                                   FootfallsIndex                                              OFFSET(get<int32_t>, {0x38, 4, 0, 0})
	DMember(bool)                                      is_Running__                                                OFFSET(get<bool>, {0x3C, 1, 0, 0})
	DMember(bool)                                      is_Sprinting__                                              OFFSET(get<bool>, {0x3D, 1, 0, 0})


	/// Functions
	// Function /Irwin/FX/AnimNotify_Irwin_Footfalls.AnimNotify_Irwin_Footfalls_C.Received_Notify
	// bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, FAnimNotifyEventReference& EventReference); // [0x186becc] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
};

