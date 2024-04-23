
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame

/// Class /Lager/Requirements/BP_ControllerRequirement_CheckLivingWorldManagerBudget.BP_ControllerRequirement_CheckLivingWorldManagerBudget_C
/// Size: 0x0018 (0x000030 - 0x000048)
class UBP_ControllerRequirement_CheckLivingWorldManagerBudget_C : public UFortControllerRequirement
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	DMember(int32_t)                                   RequiredBudget                                              OFFSET(get<int32_t>, {0x30, 4, 0, 0})
	SMember(FDataTableRowHandle)                       EventRowHandle                                              OFFSET(getStruct<T>, {0x38, 16, 0, 0})


	/// Functions
	// Function /Lager/Requirements/BP_ControllerRequirement_CheckLivingWorldManagerBudget.BP_ControllerRequirement_CheckLivingWorldManagerBudget_C.IsRequirementMetInternal
	// bool IsRequirementMetInternal(FControllerRequirementTestContext& RequestContext);                                        // [0x1340978] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
};

