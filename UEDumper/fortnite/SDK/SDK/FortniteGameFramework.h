
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: NetCore
/// dependency: StateTreeModule

/// Enum /Script/FortniteGameFramework.ETaskObjectStateChangeType
/// Size: 0x04
enum class ETaskObjectStateChangeType : uint8_t
{
	ETaskObjectStateChangeType__None                                                 = 0,
	ETaskObjectStateChangeType__BeginState                                           = 1,
	ETaskObjectStateChangeType__EndState                                             = 2,
	ETaskObjectStateChangeType__ETaskObjectStateChangeType_MAX                       = 3
};

/// Class /Script/FortniteGameFramework.FGF_Character
/// Size: 0x0060 (0x000660 - 0x0006C0)
class AFGF_Character : public ACharacter
{ 
public:
	unsigned char                                      UnknownData00_1[0x60];                                      // 0x0660   (0x0060)  MISSED
};

/// Class /Script/FortniteGameFramework.FGF_GameMode
/// Size: 0x0058 (0x000378 - 0x0003D0)
class AFGF_GameMode : public AGameMode
{ 
public:
	unsigned char                                      UnknownData00_1[0x58];                                      // 0x0378   (0x0058)  MISSED
};

/// Class /Script/FortniteGameFramework.FGF_GameState
/// Size: 0x0060 (0x000300 - 0x000360)
class AFGF_GameState : public AGameState
{ 
public:
	unsigned char                                      UnknownData00_1[0x60];                                      // 0x0300   (0x0060)  MISSED
};

/// Class /Script/FortniteGameFramework.FGF_PlayerController
/// Size: 0x0058 (0x000858 - 0x0008B0)
class AFGF_PlayerController : public APlayerController
{ 
public:
	unsigned char                                      UnknownData00_1[0x58];                                      // 0x0858   (0x0058)  MISSED
};

/// Class /Script/FortniteGameFramework.FGF_PlayerState
/// Size: 0x0058 (0x000348 - 0x0003A0)
class AFGF_PlayerState : public APlayerState
{ 
public:
	unsigned char                                      UnknownData00_1[0x58];                                      // 0x0348   (0x0058)  MISSED
};

/// Class /Script/FortniteGameFramework.ObjectBasedStateTreeSchema
/// Size: 0x0000 (0x000028 - 0x000028)
class UObjectBasedStateTreeSchema : public UStateTreeSchema
{ 
public:
};

/// Struct /Script/FortniteGameFramework.StateTreeRuntimeData
/// Size: 0x0030 (0x000000 - 0x000030)
struct FStateTreeRuntimeData
{ 
	class UObject*                                     Owner;                                                      // 0x0000   (0x0008)  
	class UStateTree*                                  StateTree;                                                  // 0x0008   (0x0008)  
	FStateTreeInstanceData                             StateTreeInstanceData;                                      // 0x0010   (0x0010)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0020   (0x0010)  MISSED
};

/// Struct /Script/FortniteGameFramework.StateTreeClientSimulationData
/// Size: 0x0028 (0x000000 - 0x000028)
struct FStateTreeClientSimulationData
{ 
	unsigned char                                      UnknownData00_2[0x28];                                      // 0x0000   (0x0028)  MISSED
};

/// Struct /Script/FortniteGameFramework.StateChangeData
/// Size: 0x001C (0x00000C - 0x000028)
struct FStateChangeData : FFastArraySerializerItem
{ 
	int32_t                                            StateTreeDataHandle;                                        // 0x000C   (0x0004)  
	int32_t                                            Handle;                                                     // 0x0010   (0x0004)  
	int32_t                                            StateIdentifier;                                            // 0x0014   (0x0004)  
	class UStateTreeTaskObject*                        StateObject;                                                // 0x0018   (0x0008)  
	ETaskObjectStateChangeType                         StateChangeType;                                            // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0021   (0x0007)  MISSED
};

/// Struct /Script/FortniteGameFramework.StateChangeDataArray
/// Size: 0x0018 (0x000108 - 0x000120)
struct FStateChangeDataArray : FFastArraySerializer
{ 
	TArray<FStateChangeData>                           StateChangeDataList;                                        // 0x0108   (0x0010)  
	class UStateTreeManagerComponent*                  StateTreeManagerComponent;                                  // 0x0118   (0x0008)  
};

/// Class /Script/FortniteGameFramework.StateTreeManagerComponent
/// Size: 0x0140 (0x0000A0 - 0x0001E0)
class UStateTreeManagerComponent : public UActorComponent
{ 
public:
	TArray<FStateTreeRuntimeData>                      StateTreeRuntimeDataList;                                   // 0x00A0   (0x0010)  
	TArray<FStateTreeClientSimulationData>             SimulatedDataList;                                          // 0x00B0   (0x0010)  
	FStateChangeDataArray                              ReplicatedStateChanges;                                     // 0x00C0   (0x0120)  
};

/// Class /Script/FortniteGameFramework.StateTreeTaskObject
/// Size: 0x0008 (0x000048 - 0x000050)
class UStateTreeTaskObject : public UStateTreeTaskBlueprintBase
{ 
public:
	bool                                               bReplicates;                                                // 0x0048   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0049   (0x0007)  MISSED
};

/// Struct /Script/FortniteGameFramework.ComponentCacheHelper
/// Size: 0x0058 (0x000000 - 0x000058)
struct FComponentCacheHelper
{ 
	unsigned char                                      UnknownData00_2[0x58];                                      // 0x0000   (0x0058)  MISSED
};

/// Struct /Script/FortniteGameFramework.ActorOwnedStateTreeConfig
/// Size: 0x0028 (0x000000 - 0x000028)
struct FActorOwnedStateTreeConfig
{ 
	SDK_UNDEFINED(32,2048) /* TWeakObjectPtr<UStateTree*> */ __um(StateTreeAsset);                                 // 0x0000   (0x0020)  
	bool                                               bShouldReplicate;                                           // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0021   (0x0007)  MISSED
};

