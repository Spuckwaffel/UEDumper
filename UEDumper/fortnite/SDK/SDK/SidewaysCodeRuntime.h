
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteAI
/// dependency: FortniteGame
/// dependency: GameFeatures
/// dependency: ModularGameplay
/// dependency: PlayspaceSystem

/// Enum /Script/SidewaysCodeRuntime.ESidewaysState
/// Size: 0x03
enum class ESidewaysState : uint8_t
{
	ESidewaysState__InNormalWorld                                                    = 0,
	ESidewaysState__InSidewaysWorld                                                  = 1,
	ESidewaysState__ESidewaysState_MAX                                               = 2
};

/// Class /Script/SidewaysCodeRuntime.SidewaysCheatManager
/// Size: 0x0000 (0x000028 - 0x000028)
class USidewaysCheatManager : public UChildCheatManager
{ 
public:


	/// Functions
	// Function /Script/SidewaysCodeRuntime.SidewaysCheatManager.SetSidewaysState
	// void SetSidewaysState(ESidewaysState SidewaysState);                                                                  // [0x81e7214] Final|BlueprintAuthorityOnly|Exec|Native|Public 
};

/// Class /Script/SidewaysCodeRuntime.FortControllerComponent_Sideways
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UFortControllerComponent_Sideways : public UFortControllerComponent
{ 
public:
	FTimerHandle                                       UpdateClosestSidewaysHandle;                                // 0x00A8   (0x0008)  
};

/// Class /Script/SidewaysCodeRuntime.PlayspaceComponent_SidewaysDimension
/// Size: 0x00E0 (0x0000F8 - 0x0001D8)
class UPlayspaceComponent_SidewaysDimension : public UFortPlayspaceComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0xD8];                                      // 0x00F8   (0x00D8)  MISSED
	class UAthenaAIServiceLoot*                        CachedAIServiceLoot;                                        // 0x01D0   (0x0008)  
};

/// Class /Script/SidewaysCodeRuntime.PlayspaceComponent_SidewaysEncounter
/// Size: 0x0000 (0x0000F8 - 0x0000F8)
class UPlayspaceComponent_SidewaysEncounter : public UFortPlayspaceComponent
{ 
public:
};

/// Class /Script/SidewaysCodeRuntime.SidewaysStateComponent
/// Size: 0x0028 (0x0000A0 - 0x0000C8)
class USidewaysStateComponent : public UGameFrameworkComponent
{ 
public:
	ESidewaysState                                     SidewaysState;                                              // 0x00A0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x00A1   (0x0007)  MISSED
	class ASidewaysPlayspace*                          SidewaysPlayspace;                                          // 0x00A8   (0x0008)  
	SDK_UNDEFINED(16,15571) /* FMulticastInlineDelegate */ __um(OnSidewaysStateChangedDelegate);                   // 0x00B0   (0x0010)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x00C0   (0x0008)  MISSED


	/// Functions
	// Function /Script/SidewaysCodeRuntime.SidewaysStateComponent.SetSidewaysState
	// void SetSidewaysState(ESidewaysState NewState, class ASidewaysPlayspace* NewSidewaysPlayspace);                       // [0xa884238] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/SidewaysCodeRuntime.SidewaysStateComponent.OnRep_SidewaysState
	// void OnRep_SidewaysState(ESidewaysState LastSidewaysState);                                                           // [0xa884148] Final|Native|Protected 
	// Function /Script/SidewaysCodeRuntime.SidewaysStateComponent.OnRep_SidewaysPlayspace
	// void OnRep_SidewaysPlayspace(class ASidewaysPlayspace* NewSidewaysPlayspace);                                         // [0x6b2e50c] Final|Native|Protected 
	// Function /Script/SidewaysCodeRuntime.SidewaysStateComponent.HandleSidewaysStateChanged
	// void HandleSidewaysStateChanged(class ASidewaysPlayspace* NewSidewaysPlayspace, ESidewaysState OldState, ESidewaysState NewState); // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/SidewaysCodeRuntime.SidewaysStateComponent.GetSidewaysState
	// ESidewaysState GetSidewaysState();                                                                                    // [0x81ea0ec] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SidewaysCodeRuntime.SidewaysStateComponent_Player
/// Size: 0x0048 (0x0000C8 - 0x000110)
class USidewaysStateComponent_Player : public USidewaysStateComponent
{ 
public:
	SDK_UNDEFINED(32,15572) /* TWeakObjectPtr<UMaterialParameterCollection*> */ __um(SidewaysMaterialParameterCollection); // 0x00C8   (0x0020)  
	FName                                              SidewaysBubbleLocationParameterNamesForLocalPlayers;        // 0x00E8   (0x0008)  
	FName                                              SidewaysBubbleRadiusParameterNamesForLocalPlayers;          // 0x00F0   (0x0008)  
	float                                              ExtraCorruptionRadius;                                      // 0x00F8   (0x0004)  
	float                                              MinRadiusToHaveAnyCorruption;                               // 0x00FC   (0x0004)  
	float                                              MaxRadiusForScalingExtraCorruptionRadius;                   // 0x0100   (0x0004)  
	float                                              UpdateFrequency;                                            // 0x0104   (0x0004)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0108   (0x0008)  MISSED
};

/// Class /Script/SidewaysCodeRuntime.SidewaysFeatureAction_HoldGlobalData
/// Size: 0x0030 (0x000028 - 0x000058)
class USidewaysFeatureAction_HoldGlobalData : public UGameFeatureAction
{ 
public:
	SDK_UNDEFINED(32,15573) /* TWeakObjectPtr<UMaterialParameterCollection*> */ __um(SidewaysMaterialParameterCollection); // 0x0028   (0x0020)  
	FName                                              SidewaysBubbleLocationParameterNamesForLocalPlayers;        // 0x0048   (0x0008)  
	FName                                              SidewaysBubbleRadiusParameterNamesForLocalPlayers;          // 0x0050   (0x0008)  
};

/// Class /Script/SidewaysCodeRuntime.SidewaysLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class USidewaysLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/SidewaysCodeRuntime.SidewaysLibrary.GetSidewaysStateComponent
	// class USidewaysStateComponent* GetSidewaysStateComponent(class AActor* Owner);                                        // [0xa8840b4] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SidewaysCodeRuntime.SidewaysPlayspace
/// Size: 0x0000 (0x0006E8 - 0x0006E8)
class ASidewaysPlayspace : public AFortPlayspace
{ 
public:


	/// Functions
	// Function /Script/SidewaysCodeRuntime.SidewaysPlayspace.RefreshActorsInSideways
	// void RefreshActorsInSideways();                                                                                       // [0xa8841c8] Final|Native|Public|BlueprintCallable 
	// Function /Script/SidewaysCodeRuntime.SidewaysPlayspace.NotifySizeChanged
	// void NotifySizeChanged();                                                                                             // [0xa884134] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/SidewaysCodeRuntime.SidewaysVolume
/// Size: 0x0000 (0x000330 - 0x000330)
class ASidewaysVolume : public AGameplayVolume
{ 
public:
};

