
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: EntityCore
/// dependency: FortniteGame
/// dependency: VerseFortnite

/// Class /Script/VerseAIBase.AIPerceptionComponentBase
/// Size: 0x0060 (0x000070 - 0x0000D0)
class UAIPerceptionComponentBase : public UAIComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:


	/// Functions
	// Function /Script/VerseAIBase.AIPerceptionComponentBase.NotifyTargetPerceptionUpdated
	// void NotifyTargetPerceptionUpdated(class AActor* Actor, FAIStimulus Stimulus);                                           // [0xafc5e7c] Final|Native|Protected 
	// Function /Script/VerseAIBase.AIPerceptionComponentBase.NotifyTargetPerceptionForgotten
	// void NotifyTargetPerceptionForgotten(class AActor* Actor);                                                               // [0xafc5dbc] Final|Native|Protected 
};

/// Class /Script/VerseAIBase.NPCBehaviorScriptComponent
/// Size: 0x0008 (0x000120 - 0x000128)
class UNPCBehaviorScriptComponent : public UFortUserOptionContainerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
	CMember(class UNPCBehaviorScript*)                 NPCBehaviorScript                                           OFFSET(get<T>, {0x120, 8, 0, 0})


	/// Functions
	// Function /Script/VerseAIBase.NPCBehaviorScriptComponent.GetBehaviorScript
	// class UNPCBehaviorScript* GetBehaviorScript();                                                                           // [0xa671cc8] Final|Native|Public|BlueprintCallable 
};

