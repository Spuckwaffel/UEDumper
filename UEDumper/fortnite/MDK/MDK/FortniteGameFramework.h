
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: NetCore
/// dependency: StateTreeModule

/// Class /Script/FortniteGameFramework.FGF_Character
/// Size: 0x0060 (0x000660 - 0x0006C0)
class AFGF_Character : public ACharacter
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1728;

public:
};

/// Class /Script/FortniteGameFramework.FGF_GameMode
/// Size: 0x0058 (0x000378 - 0x0003D0)
class AFGF_GameMode : public AGameMode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 976;

public:
};

/// Class /Script/FortniteGameFramework.FGF_GameState
/// Size: 0x0060 (0x000300 - 0x000360)
class AFGF_GameState : public AGameState
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 864;

public:
};

/// Class /Script/FortniteGameFramework.FGF_PlayerController
/// Size: 0x0058 (0x000858 - 0x0008B0)
class AFGF_PlayerController : public APlayerController
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2224;

public:
};

/// Class /Script/FortniteGameFramework.FGF_PlayerState
/// Size: 0x0058 (0x000348 - 0x0003A0)
class AFGF_PlayerState : public APlayerState
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 928;

public:
};

/// Class /Script/FortniteGameFramework.ObjectBasedStateTreeSchema
/// Size: 0x0000 (0x000028 - 0x000028)
class UObjectBasedStateTreeSchema : public UStateTreeSchema
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/FortniteGameFramework.StateTreeManagerComponent
/// Size: 0x0140 (0x0000A0 - 0x0001E0)
class UStateTreeManagerComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 480;

public:
	CMember(TArray<FStateTreeRuntimeData>)             StateTreeRuntimeDataList                                    OFFSET(get<T>, {0xA0, 16, 0, 0})
	CMember(TArray<FStateTreeClientSimulationData>)    SimulatedDataList                                           OFFSET(get<T>, {0xB0, 16, 0, 0})
	SMember(FStateChangeDataArray)                     ReplicatedStateChanges                                      OFFSET(getStruct<T>, {0xC0, 288, 0, 0})
};

/// Class /Script/FortniteGameFramework.StateTreeTaskObject
/// Size: 0x0008 (0x000048 - 0x000050)
class UStateTreeTaskObject : public UStateTreeTaskBlueprintBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	DMember(bool)                                      bReplicates                                                 OFFSET(get<bool>, {0x48, 1, 0, 0})
};

/// Struct /Script/FortniteGameFramework.ComponentCacheHelper
/// Size: 0x0058 (0x000000 - 0x000058)
class FComponentCacheHelper : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
};

/// Struct /Script/FortniteGameFramework.ActorOwnedStateTreeConfig
/// Size: 0x0028 (0x000000 - 0x000028)
class FActorOwnedStateTreeConfig : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(TWeakObjectPtr<UStateTree*>)               StateTreeAsset                                              OFFSET(get<T>, {0x0, 32, 0, 0})
	DMember(bool)                                      bShouldReplicate                                            OFFSET(get<bool>, {0x20, 1, 0, 0})
};

/// Struct /Script/FortniteGameFramework.StateTreeRuntimeData
/// Size: 0x0030 (0x000000 - 0x000030)
class FStateTreeRuntimeData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(class UObject*)                            Owner                                                       OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class UStateTree*)                         StateTree                                                   OFFSET(get<T>, {0x8, 8, 0, 0})
	SMember(FStateTreeInstanceData)                    StateTreeInstanceData                                       OFFSET(getStruct<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/FortniteGameFramework.StateChangeData
/// Size: 0x001C (0x00000C - 0x000028)
class FStateChangeData : public FFastArraySerializerItem
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(int32_t)                                   StateTreeDataHandle                                         OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	DMember(int32_t)                                   Handle                                                      OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	DMember(int32_t)                                   StateIdentifier                                             OFFSET(get<int32_t>, {0x14, 4, 0, 0})
	CMember(class UStateTreeTaskObject*)               StateObject                                                 OFFSET(get<T>, {0x18, 8, 0, 0})
	CMember(ETaskObjectStateChangeType)                StateChangeType                                             OFFSET(get<T>, {0x20, 1, 0, 0})
};

/// Struct /Script/FortniteGameFramework.StateChangeDataArray
/// Size: 0x0018 (0x000108 - 0x000120)
class FStateChangeDataArray : public FFastArraySerializer
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	CMember(TArray<FStateChangeData>)                  StateChangeDataList                                         OFFSET(get<T>, {0x108, 16, 0, 0})
	CMember(class UStateTreeManagerComponent*)         StateTreeManagerComponent                                   OFFSET(get<T>, {0x118, 8, 0, 0})
};

/// Struct /Script/FortniteGameFramework.StateTreeClientSimulationData
/// Size: 0x0028 (0x000000 - 0x000028)
class FStateTreeClientSimulationData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Enum /Script/FortniteGameFramework.ETaskObjectStateChangeType
/// Size: 0x04
enum class ETaskObjectStateChangeType : uint8_t
{
	ETaskObjectStateChangeType__None                                                 = 0,
	ETaskObjectStateChangeType__BeginState                                           = 1,
	ETaskObjectStateChangeType__EndState                                             = 2,
	ETaskObjectStateChangeType__ETaskObjectStateChangeType_MAX                       = 3
};

