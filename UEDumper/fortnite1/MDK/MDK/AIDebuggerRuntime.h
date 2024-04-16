
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: ModularGameplay

/// Class /Script/AIDebuggerRuntime.AIDebuggerCheatManager
/// Size: 0x0000 (0x000028 - 0x000028)
class UAIDebuggerCheatManager : public UChildCheatManager
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/AIDebuggerRuntime.AIDebuggerCheatManager.StartAIDebugger
	// void StartAIDebugger(FString AIDebuggerSoftClassPath);                                                                   // [0x93017c4] Final|Exec|Native|Public 
	// Function /Script/AIDebuggerRuntime.AIDebuggerCheatManager.NextNavMesh
	// void NextNavMesh();                                                                                                      // [0x3508bf8] Final|Exec|Native|Public 
	// Function /Script/AIDebuggerRuntime.AIDebuggerCheatManager.EnableNavMeshVisualizer
	// void EnableNavMeshVisualizer(bool bEnable);                                                                              // [0x62ffeb0] Final|Exec|Native|Public 
};

/// Class /Script/AIDebuggerRuntime.AIDebuggerRendererComponent
/// Size: 0x00B0 (0x000500 - 0x0005B0)
class UAIDebuggerRendererComponent : public UPrimitiveComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1456;

public:
	CMember(class UMaterial*)                          NavMeshMaterial                                             OFFSET(get<T>, {0x598, 8, 0, 0})
	DMember(float)                                     NavLinkLineThickness                                        OFFSET(get<float>, {0x5A0, 4, 0, 0})
	DMember(float)                                     NavLinkMaxDrawDistance                                      OFFSET(get<float>, {0x5A4, 4, 0, 0})
};

/// Class /Script/AIDebuggerRuntime.FortControllerComponent_AIDebugger
/// Size: 0x0068 (0x0000A8 - 0x000110)
class UFortControllerComponent_AIDebugger : public UFortControllerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
	CMember(class APlayerController*)                  OwnerPC                                                     OFFSET(get<T>, {0xA8, 8, 0, 0})
	CMember(class UClass*)                             NavMeshRendererComponentClass                               OFFSET(get<T>, {0xB0, 8, 0, 0})
	DMember(char)                                      DefaultEnabledVisualizers                                   OFFSET(get<char>, {0xB8, 1, 0, 0})
	DMember(int32_t)                                   DefaultNavDataIndexToDisplay                                OFFSET(get<int32_t>, {0xBC, 4, 0, 0})
	DMember(char)                                      EnabledVisualizers                                          OFFSET(get<char>, {0xC0, 1, 0, 0})
	DMember(char)                                      NumNavMeshes                                                OFFSET(get<char>, {0xC1, 1, 0, 0})


	/// Functions
	// Function /Script/AIDebuggerRuntime.FortControllerComponent_AIDebugger.VisualizeNextNavMesh
	// void VisualizeNextNavMesh();                                                                                             // [0x8a1d468] Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable 
	// Function /Script/AIDebuggerRuntime.FortControllerComponent_AIDebugger.VisualizeNavMeshID
	// void VisualizeNavMeshID(int32_t NavMeshID);                                                                              // [0x8c2d110] Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable 
	// Function /Script/AIDebuggerRuntime.FortControllerComponent_AIDebugger.SetVisualizationEnable
	// void SetVisualizationEnable(EAIDebuggerVisualization VisualizationType, bool bEnable);                                   // [0xafddc80] RequiredAPI|Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable 
	// Function /Script/AIDebuggerRuntime.FortControllerComponent_AIDebugger.OnRep_EnabledVisualizers
	// void OnRep_EnabledVisualizers();                                                                                         // [0xafddc6c] Final|Native|Public  
	// Function /Script/AIDebuggerRuntime.FortControllerComponent_AIDebugger.OnPossessedPawnChanged
	// void OnPossessedPawnChanged(class APawn* OldPawn, class APawn* NewPawn);                                                 // [0xafddb38] Final|Native|Public  
	// Function /Script/AIDebuggerRuntime.FortControllerComponent_AIDebugger.OnPlayerExitedIsland
	// void OnPlayerExitedIsland(FEventMessageTag Channel, FPlayerExitSpatialActorContextWithPawn& PlayerExitSpatialActorContext); // [0xafdd9f4] Final|Native|Public|HasOutParms 
	// Function /Script/AIDebuggerRuntime.FortControllerComponent_AIDebugger.IsVisualizationEnabled
	// bool IsVisualizationEnabled(EAIDebuggerVisualization VisualizationType);                                                 // [0xafdd924] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIDebuggerRuntime.FortControllerComponent_AIDebugger.GetOrCreateRenderer
	// class UAIDebuggerRendererComponent* GetOrCreateRenderer();                                                               // [0xafdd900] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Enum /Script/AIDebuggerRuntime.EAIDebuggerVisualization
/// Size: 0x03
enum class EAIDebuggerVisualization : uint8_t
{
	EAIDebuggerVisualization__INVALID                                                = 0,
	EAIDebuggerVisualization__NavMesh                                                = 1,
	EAIDebuggerVisualization__EAIDebuggerVisualization_MAX                           = 2
};

