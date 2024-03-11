
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: GameplayTags
/// dependency: ModularGameplay

/// Class /Script/MudGameplayRuntime.FortPawnComponent_Mud
/// Size: 0x0040 (0x0000A8 - 0x0000E8)
class UFortPawnComponent_Mud : public UFortPawnComponent
{ 
public:
	FGameplayTag                                       CurieFireTag;                                               // 0x00A8   (0x0004)  
	FGameplayTag                                       SlidingTag;                                                 // 0x00AC   (0x0004)  
	FGameplayTag                                       SprintingTag;                                               // 0x00B0   (0x0004)  
	FGameplayTag                                       AttachParentCoveredEventTag;                                // 0x00B4   (0x0004)  
	FGameplayTag                                       CreatureSprintingTag;                                       // 0x00B8   (0x0004)  
	unsigned char                                      UnknownData00_6[0x2C];                                      // 0x00BC   (0x002C)  MISSED


	/// Functions
	// Function /Script/MudGameplayRuntime.FortPawnComponent_Mud.OnSprintingTagCountChanged
	// void OnSprintingTagCountChanged(FGameplayTag tag, int32_t NewCount);                                                  // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/MudGameplayRuntime.FortPawnComponent_Mud.OnSlidingTagCountChanged
	// void OnSlidingTagCountChanged(FGameplayTag tag, int32_t NewCount);                                                    // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/MudGameplayRuntime.FortPawnComponent_Mud.OnExitedMud
	// void OnExitedMud();                                                                                                   // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/MudGameplayRuntime.FortPawnComponent_Mud.OnEnteredMud
	// void OnEnteredMud();                                                                                                  // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/MudGameplayRuntime.FortPawnComponent_Mud.OnCurieFireTagCountChanged
	// void OnCurieFireTagCountChanged(FGameplayTag tag, int32_t NewCount);                                                  // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/MudGameplayRuntime.FortPawnComponent_Mud.OnCreatureSprintingTagCountChanged
	// void OnCreatureSprintingTagCountChanged(FGameplayTag tag, int32_t NewCount);                                          // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/MudGameplayRuntime.FortPawnComponent_Mud.OnAttachedParentCoveredInMud
	// void OnAttachedParentCoveredInMud(FGameplayEventData& Payload);                                                       // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/MudGameplayRuntime.FortPawnComponent_Mud.HandleSurfaceTypeChanged
	// void HandleSurfaceTypeChanged(class AActor* SurfaceActor, TEnumAsByte<EPhysicalSurface> CurrentSurfaceType, TEnumAsByte<EPhysicalSurface> PrevSurfaceType); // [0xa8bd78c] Final|Native|Private 
	// Function /Script/MudGameplayRuntime.FortPawnComponent_Mud.HandleASCInitialized
	// void HandleASCInitialized(class UFortAbilitySystemComponent* AbilitySystemComponent, class AFortPlayerPawn* AffectedPawn); // [0xa8bd6c0] Final|Native|Private 
};

