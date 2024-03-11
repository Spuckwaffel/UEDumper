
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: AIModule
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: StateTreeModule

/// Class /Script/GameplayStateTreeModule.StateTreeComponent
/// Size: 0x0060 (0x0000F8 - 0x000158)
class UStateTreeComponent : public UBrainComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 344;

public:
	SMember(FMulticastInlineDelegate)                  OnStateTreeRunStatusChanged                                 OFFSET(getStruct<T>, {0x100, 16, 0, 0})
	SMember(FStateTreeReference)                       StateTreeRef                                                OFFSET(getStruct<T>, {0x110, 40, 0, 0})
	DMember(bool)                                      bStartLogicAutomatically                                    OFFSET(get<bool>, {0x138, 1, 0, 0})
	SMember(FStateTreeInstanceData)                    InstanceData                                                OFFSET(getStruct<T>, {0x140, 16, 0, 0})


	/// Functions
	// Function /Script/GameplayStateTreeModule.StateTreeComponent.SetStartLogicAutomatically
	// void SetStartLogicAutomatically(bool bInStartLogicAutomatically);                                                        // [0xa8f4a74] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayStateTreeModule.StateTreeComponent.SendStateTreeEvent
	// void SendStateTreeEvent(FStateTreeEvent& Event);                                                                         // [0xa8f4988] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameplayStateTreeModule.StateTreeComponent.GetStateTreeRunStatus
	// EStateTreeRunStatus GetStateTreeRunStatus();                                                                             // [0xa8f4964] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/GameplayStateTreeModule.StateTreeComponentSchema
/// Size: 0x0020 (0x000028 - 0x000048)
class UStateTreeComponentSchema : public UStateTreeSchema
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(class UClass*)                             ContextActorClass                                           OFFSET(get<T>, {0x28, 8, 0, 0})
	SMember(FStateTreeExternalDataDesc)                ContextActorDataDesc                                        OFFSET(getStruct<T>, {0x30, 24, 0, 0})
};

