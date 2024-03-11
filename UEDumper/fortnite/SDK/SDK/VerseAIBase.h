
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: EntityCore
/// dependency: FortniteGame
/// dependency: VerseFortnite

/// Class /Script/VerseAIBase.AIPerceptionComponentBase
/// Size: 0x0060 (0x000070 - 0x0000D0)
#pragma pack(push, 0x1)
class alignas(0x8) UAIPerceptionComponentBase : public UAIComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0070   (0x0020)  MISSED


	/// Functions
	// Function /Script/VerseAIBase.AIPerceptionComponentBase.NotifyTargetPerceptionUpdated
	// void NotifyTargetPerceptionUpdated(class AActor* Actor, FAIStimulus Stimulus);                                        // [0xa29f1a8] Final|Native|Protected 
	// Function /Script/VerseAIBase.AIPerceptionComponentBase.NotifyTargetPerceptionForgotten
	// void NotifyTargetPerceptionForgotten(class AActor* Actor);                                                            // [0xa29f00c] Final|Native|Protected 
};
#pragma pack(pop)

/// Class /Script/VerseAIBase.NPCBehaviorScriptComponent
/// Size: 0x0008 (0x000120 - 0x000128)
class UNPCBehaviorScriptComponent : public UFortUserOptionContainerComponent
{ 
public:
	class UNPCBehaviorScript*                          NPCBehaviorScript;                                          // 0x0120   (0x0008)  


	/// Functions
	// Function /Script/VerseAIBase.NPCBehaviorScriptComponent.GetBehaviorScript
	// class UNPCBehaviorScript* GetBehaviorScript();                                                                        // [0x9b62620] Final|Native|Public|BlueprintCallable 
};

