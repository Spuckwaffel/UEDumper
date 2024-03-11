
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: AIModule
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: StateTreeModule

/// Class /Script/GameplayStateTreeModule.StateTreeComponent
/// Size: 0x0060 (0x0000F8 - 0x000158)
class UStateTreeComponent : public UBrainComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x00F8   (0x0008)  MISSED
	SDK_UNDEFINED(16,13429) /* FMulticastInlineDelegate */ __um(OnStateTreeRunStatusChanged);                      // 0x0100   (0x0010)  
	FStateTreeReference                                StateTreeRef;                                               // 0x0110   (0x0028)  
	bool                                               bStartLogicAutomatically;                                   // 0x0138   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0139   (0x0007)  MISSED
	FStateTreeInstanceData                             InstanceData;                                               // 0x0140   (0x0010)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x0150   (0x0008)  MISSED


	/// Functions
	// Function /Script/GameplayStateTreeModule.StateTreeComponent.SetStartLogicAutomatically
	// void SetStartLogicAutomatically(bool bInStartLogicAutomatically);                                                     // [0xa8f4a74] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayStateTreeModule.StateTreeComponent.SendStateTreeEvent
	// void SendStateTreeEvent(FStateTreeEvent& Event);                                                                      // [0xa8f4988] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameplayStateTreeModule.StateTreeComponent.GetStateTreeRunStatus
	// EStateTreeRunStatus GetStateTreeRunStatus();                                                                          // [0xa8f4964] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/GameplayStateTreeModule.StateTreeComponentSchema
/// Size: 0x0020 (0x000028 - 0x000048)
class UStateTreeComponentSchema : public UStateTreeSchema
{ 
public:
	class UClass*                                      ContextActorClass;                                          // 0x0028   (0x0008)  
	FStateTreeExternalDataDesc                         ContextActorDataDesc;                                       // 0x0030   (0x0018)  
};

