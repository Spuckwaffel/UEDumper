
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine

/// Class /Game/Tools/Turntable_2/SunDirectionandColorSet.SunDirectionandColorSet_C
/// Size: 0x0028 (0x000290 - 0x0002B8)
class ASunDirectionandColorSet_C : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 696;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x290, 8, 0, 0})
	CMember(class USceneComponent*)                    Scene                                                       OFFSET(get<T>, {0x298, 8, 0, 0})
	CMember(class UArrowComponent*)                    Arrow                                                       OFFSET(get<T>, {0x2A0, 8, 0, 0})
	SMember(FLinearColor)                              SunLightColor                                               OFFSET(getStruct<T>, {0x2A8, 16, 0, 0})


	/// Functions
	// Function /Game/Tools/Turntable_2/SunDirectionandColorSet.SunDirectionandColorSet_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x228deb8] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Tools/Turntable_2/SunDirectionandColorSet.SunDirectionandColorSet_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x228deb8] Event|Protected|BlueprintEvent 
	// Function /Game/Tools/Turntable_2/SunDirectionandColorSet.SunDirectionandColorSet_C.ReceiveTick
	// void ReceiveTick(float DeltaSeconds);                                                                                    // [0x228deb8] Event|Public|BlueprintEvent 
	// Function /Game/Tools/Turntable_2/SunDirectionandColorSet.SunDirectionandColorSet_C.ExecuteUbergraph_SunDirectionandColorSet
	// void ExecuteUbergraph_SunDirectionandColorSet(int32_t EntryPoint);                                                       // [0x228deb8] Final                
};

