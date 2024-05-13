
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteAI
/// dependency: FortniteGame
/// dependency: GameFeatures
/// dependency: ModularGameplay
/// dependency: PlayspaceSystem

/// Class /Script/SidewaysCodeRuntime.SidewaysCheatManager
/// Size: 0x0000 (0x000028 - 0x000028)
class USidewaysCheatManager : public UChildCheatManager
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/SidewaysCodeRuntime.SidewaysCheatManager.SetSidewaysState
	// void SetSidewaysState(ESidewaysState SidewaysState);                                                                     // [0x8a31f48] Final|BlueprintAuthorityOnly|Exec|Native|Public 
};

/// Class /Script/SidewaysCodeRuntime.FortControllerComponent_Sideways
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UFortControllerComponent_Sideways : public UFortControllerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	SMember(FTimerHandle)                              UpdateClosestSidewaysHandle                                 OFFSET(getStruct<T>, {0xA8, 8, 0, 0})
};

/// Class /Script/SidewaysCodeRuntime.PlayspaceComponent_SidewaysDimension
/// Size: 0x00E0 (0x0000F8 - 0x0001D8)
class UPlayspaceComponent_SidewaysDimension : public UFortPlayspaceComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 472;

public:
	CMember(class UAthenaAIServiceLoot*)               CachedAIServiceLoot                                         OFFSET(get<T>, {0x1D0, 8, 0, 0})
};

/// Class /Script/SidewaysCodeRuntime.PlayspaceComponent_SidewaysEncounter
/// Size: 0x0000 (0x0000F8 - 0x0000F8)
class UPlayspaceComponent_SidewaysEncounter : public UFortPlayspaceComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
};

/// Class /Script/SidewaysCodeRuntime.SidewaysStateComponent
/// Size: 0x0028 (0x0000A0 - 0x0000C8)
class USidewaysStateComponent : public UGameFrameworkComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	CMember(ESidewaysState)                            SidewaysState                                               OFFSET(get<T>, {0xA0, 1, 0, 0})
	CMember(class ASidewaysPlayspace*)                 SidewaysPlayspace                                           OFFSET(get<T>, {0xA8, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnSidewaysStateChangedDelegate                              OFFSET(getStruct<T>, {0xB0, 16, 0, 0})


	/// Functions
	// Function /Script/SidewaysCodeRuntime.SidewaysStateComponent.SetSidewaysState
	// void SetSidewaysState(ESidewaysState NewState, class ASidewaysPlayspace* NewSidewaysPlayspace);                          // [0xbbe17c8] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/SidewaysCodeRuntime.SidewaysStateComponent.OnRep_SidewaysState
	// void OnRep_SidewaysState(ESidewaysState LastSidewaysState);                                                              // [0xbbe16d8] Final|Native|Protected 
	// Function /Script/SidewaysCodeRuntime.SidewaysStateComponent.OnRep_SidewaysPlayspace
	// void OnRep_SidewaysPlayspace(class ASidewaysPlayspace* NewSidewaysPlayspace);                                            // [0x6d5e974] Final|Native|Protected 
	// Function /Script/SidewaysCodeRuntime.SidewaysStateComponent.HandleSidewaysStateChanged
	// void HandleSidewaysStateChanged(class ASidewaysPlayspace* NewSidewaysPlayspace, ESidewaysState OldState, ESidewaysState NewState); // [0x20c3f9c] Event|Protected|BlueprintEvent 
	// Function /Script/SidewaysCodeRuntime.SidewaysStateComponent.GetSidewaysState
	// ESidewaysState GetSidewaysState();                                                                                       // [0x8a35688] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SidewaysCodeRuntime.SidewaysStateComponent_Player
/// Size: 0x0048 (0x0000C8 - 0x000110)
class USidewaysStateComponent_Player : public USidewaysStateComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
	CMember(TWeakObjectPtr<UMaterialParameterCollection*>) SidewaysMaterialParameterCollection                     OFFSET(get<T>, {0xC8, 32, 0, 0})
	SMember(FName)                                     SidewaysBubbleLocationParameterNamesForLocalPlayers         OFFSET(getStruct<T>, {0xE8, 8, 0, 0})
	SMember(FName)                                     SidewaysBubbleRadiusParameterNamesForLocalPlayers           OFFSET(getStruct<T>, {0xF0, 8, 0, 0})
	DMember(float)                                     ExtraCorruptionRadius                                       OFFSET(get<float>, {0xF8, 4, 0, 0})
	DMember(float)                                     MinRadiusToHaveAnyCorruption                                OFFSET(get<float>, {0xFC, 4, 0, 0})
	DMember(float)                                     MaxRadiusForScalingExtraCorruptionRadius                    OFFSET(get<float>, {0x100, 4, 0, 0})
	DMember(float)                                     UpdateFrequency                                             OFFSET(get<float>, {0x104, 4, 0, 0})
};

/// Class /Script/SidewaysCodeRuntime.SidewaysFeatureAction_HoldGlobalData
/// Size: 0x0030 (0x000028 - 0x000058)
class USidewaysFeatureAction_HoldGlobalData : public UGameFeatureAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(TWeakObjectPtr<UMaterialParameterCollection*>) SidewaysMaterialParameterCollection                     OFFSET(get<T>, {0x28, 32, 0, 0})
	SMember(FName)                                     SidewaysBubbleLocationParameterNamesForLocalPlayers         OFFSET(getStruct<T>, {0x48, 8, 0, 0})
	SMember(FName)                                     SidewaysBubbleRadiusParameterNamesForLocalPlayers           OFFSET(getStruct<T>, {0x50, 8, 0, 0})
};

/// Class /Script/SidewaysCodeRuntime.SidewaysLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class USidewaysLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/SidewaysCodeRuntime.SidewaysLibrary.GetSidewaysStateComponent
	// class USidewaysStateComponent* GetSidewaysStateComponent(class AActor* Owner);                                           // [0xbbe1644] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SidewaysCodeRuntime.SidewaysPlayspace
/// Size: 0x0000 (0x000740 - 0x000740)
class ASidewaysPlayspace : public AFortPlayspace
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1856;

public:


	/// Functions
	// Function /Script/SidewaysCodeRuntime.SidewaysPlayspace.RefreshActorsInSideways
	// void RefreshActorsInSideways();                                                                                          // [0xbbe1758] Final|Native|Public|BlueprintCallable 
	// Function /Script/SidewaysCodeRuntime.SidewaysPlayspace.NotifySizeChanged
	// void NotifySizeChanged();                                                                                                // [0xbbe16c4] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/SidewaysCodeRuntime.SidewaysVolume
/// Size: 0x0000 (0x000330 - 0x000330)
class ASidewaysVolume : public AGameplayVolume
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 816;

public:
};

/// Enum /Script/SidewaysCodeRuntime.ESidewaysState
/// Size: 0x02
enum class ESidewaysState : uint8_t
{
	ESidewaysState__InNormalWorld                                                    = 0,
	ESidewaysState__InSidewaysWorld                                                  = 1
};

