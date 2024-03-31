
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CommonUI
/// dependency: CoreUObject
/// dependency: FortniteUI
/// dependency: ModelViewViewModel
/// dependency: UMG

/// Class /Script/FabricTooltipUI.FabricTooltipViewModel
/// Size: 0x0030 (0x000068 - 0x000098)
class UFabricTooltipViewModel : public UMVVMViewModelBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	SMember(FText)                                     Name                                                        OFFSET(getStruct<T>, {0x68, 24, 0, 0})
	SMember(FText)                                     Description                                                 OFFSET(getStruct<T>, {0x80, 24, 0, 0})
};

/// Class /Script/FabricTooltipUI.FabricTooltipWidget
/// Size: 0x0008 (0x0003D0 - 0x0003D8)
class UFabricTooltipWidget : public UFortActorIndicatorWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 984;

public:
	CMember(class UAthenaMarkerPointer*)               MarkerPointer                                               OFFSET(get<T>, {0x3D0, 8, 0, 0})


	/// Functions
	// Function /Script/FabricTooltipUI.FabricTooltipWidget.InitTooltip
	// void InitTooltip(class AActor* TargetedActor, class UPrimitiveComponent* TargetedComponent);                             // [0xc074f14] Final|Native|Public|BlueprintCallable 
};

