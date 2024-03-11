
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: ModularGameplay

/// Enum /Script/AIDebuggerRuntime.EAIDebuggerVisualization
/// Size: 0x03
enum class EAIDebuggerVisualization : uint8_t
{
	EAIDebuggerVisualization__INVALID                                                = 0,
	EAIDebuggerVisualization__NavMesh                                                = 1,
	EAIDebuggerVisualization__EAIDebuggerVisualization_MAX                           = 2
};

/// Class /Script/AIDebuggerRuntime.AIDebuggerCheatManager
/// Size: 0x0000 (0x000028 - 0x000028)
class UAIDebuggerCheatManager : public UChildCheatManager
{ 
public:


	/// Functions
	// Function /Script/AIDebuggerRuntime.AIDebuggerCheatManager.StartAIDebugger
	// void StartAIDebugger(FString AIDebuggerSoftClassPath);                                                                // [0x8b6e5a0] Final|Exec|Native|Public 
	// Function /Script/AIDebuggerRuntime.AIDebuggerCheatManager.NextNavMesh
	// void NextNavMesh();                                                                                                   // [0x36203b0] Final|Exec|Native|Public 
	// Function /Script/AIDebuggerRuntime.AIDebuggerCheatManager.EnableNavMeshVisualizer
	// void EnableNavMeshVisualizer(bool bEnable);                                                                           // [0x63fe5cc] Final|Exec|Native|Public 
};

/// Class /Script/AIDebuggerRuntime.AIDebuggerRendererComponent
/// Size: 0x00B0 (0x000500 - 0x0005B0)
class UAIDebuggerRendererComponent : public UPrimitiveComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x98];                                      // 0x0500   (0x0098)  MISSED
	class UMaterial*                                   NavMeshMaterial;                                            // 0x0598   (0x0008)  
	float                                              NavLinkLineThickness;                                       // 0x05A0   (0x0004)  
	float                                              NavLinkMaxDrawDistance;                                     // 0x05A4   (0x0004)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x05A8   (0x0008)  MISSED
};

/// Class /Script/AIDebuggerRuntime.FortControllerComponent_AIDebugger
/// Size: 0x0068 (0x0000A8 - 0x000110)
class UFortControllerComponent_AIDebugger : public UFortControllerComponent
{ 
public:
	class APlayerController*                           OwnerPC;                                                    // 0x00A8   (0x0008)  
	class UClass*                                      NavMeshRendererComponentClass;                              // 0x00B0   (0x0008)  
	char                                               DefaultEnabledVisualizers;                                  // 0x00B8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00B9   (0x0003)  MISSED
	int32_t                                            DefaultNavDataIndexToDisplay;                               // 0x00BC   (0x0004)  
	char                                               EnabledVisualizers;                                         // 0x00C0   (0x0001)  
	char                                               NumNavMeshes;                                               // 0x00C1   (0x0001)  
	unsigned char                                      UnknownData01_6[0x4E];                                      // 0x00C2   (0x004E)  MISSED


	/// Functions
	// Function /Script/AIDebuggerRuntime.FortControllerComponent_AIDebugger.VisualizeNextNavMesh
	// void VisualizeNextNavMesh();                                                                                          // [0x829f6f4] Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable 
	// Function /Script/AIDebuggerRuntime.FortControllerComponent_AIDebugger.VisualizeNavMeshID
	// void VisualizeNavMeshID(int32_t NavMeshID);                                                                           // [0x85d6000] Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable 
	// Function /Script/AIDebuggerRuntime.FortControllerComponent_AIDebugger.SetVisualizationEnable
	// void SetVisualizationEnable(EAIDebuggerVisualization VisualizationType, bool bEnable);                                // [0xa17b298] RequiredAPI|Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable 
	// Function /Script/AIDebuggerRuntime.FortControllerComponent_AIDebugger.OnRep_EnabledVisualizers
	// void OnRep_EnabledVisualizers();                                                                                      // [0xa17b284] Final|Native|Public  
	// Function /Script/AIDebuggerRuntime.FortControllerComponent_AIDebugger.OnPossessedPawnChanged
	// void OnPossessedPawnChanged(class APawn* OldPawn, class APawn* NewPawn);                                              // [0xa17b1c8] Final|Native|Public  
	// Function /Script/AIDebuggerRuntime.FortControllerComponent_AIDebugger.OnPlayerExitedIsland
	// void OnPlayerExitedIsland(FEventMessageTag Channel, FPlayerExitSpatialActorContextWithPawn& PlayerExitSpatialActorContext); // [0xa17b044] Final|Native|Public|HasOutParms 
	// Function /Script/AIDebuggerRuntime.FortControllerComponent_AIDebugger.IsVisualizationEnabled
	// bool IsVisualizationEnabled(EAIDebuggerVisualization VisualizationType);                                              // [0xa17afb4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIDebuggerRuntime.FortControllerComponent_AIDebugger.GetOrCreateRenderer
	// class UAIDebuggerRendererComponent* GetOrCreateRenderer();                                                            // [0xa17af90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

