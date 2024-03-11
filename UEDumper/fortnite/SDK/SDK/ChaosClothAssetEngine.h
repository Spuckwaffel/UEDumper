
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: ClothingSystemRuntimeCommon
/// dependency: ClothingSystemRuntimeInterface
/// dependency: CoreUObject
/// dependency: DataflowEngine
/// dependency: Engine

/// Enum /Script/ChaosClothAssetEngine.EClothAssetAsyncProperties
/// Size: 0x05
enum class EClothAssetAsyncProperties : uint8_t
{
	EClothAssetAsyncProperties__None                                                 = 0,
	EClothAssetAsyncProperties__RenderData                                           = 1,
	EClothAssetAsyncProperties__ThumbnailInfo                                        = 2,
	EClothAssetAsyncProperties__All                                                  = -1,
	EClothAssetAsyncProperties__EClothAssetAsyncProperties_MAX                       = 3
};

/// Class /Script/ChaosClothAssetEngine.ChaosClothComponent
/// Size: 0x0030 (0x000890 - 0x0008C0)
class UChaosClothComponent : public USkinnedMeshComponent
{ 
public:
	bool                                               bUseAttachedParentAsPoseComponent : 1;                      // 0x0888:0 (0x0001)  
	bool                                               bWaitForParallelTask : 1;                                   // 0x0888:1 (0x0001)  
	bool                                               bEnableSimulation : 1;                                      // 0x0888:2 (0x0001)  
	bool                                               bSuspendSimulation : 1;                                     // 0x0888:3 (0x0001)  
	bool                                               bBindToLeaderComponent : 1;                                 // 0x0888:4 (0x0001)  
	bool                                               bTeleport : 1;                                              // 0x0888:5 (0x0001)  
	bool                                               bReset : 1;                                                 // 0x0888:6 (0x0001)  
	unsigned char                                      UnknownData00_4[0x3];                                       // 0x0889   (0x0003)  MISSED
	float                                              BlendWeight;                                                // 0x088C   (0x0004)  
	unsigned char                                      UnknownData01_6[0x30];                                      // 0x0890   (0x0030)  MISSED


	/// Functions
	// Function /Script/ChaosClothAssetEngine.ChaosClothComponent.SuspendSimulation
	// void SuspendSimulation();                                                                                             // [0xba6decc] Final|Native|Public|BlueprintCallable 
	// Function /Script/ChaosClothAssetEngine.ChaosClothComponent.SetEnableSimulation
	// void SetEnableSimulation(bool bEnable);                                                                               // [0xba6de40] Final|Native|Public|BlueprintCallable 
	// Function /Script/ChaosClothAssetEngine.ChaosClothComponent.SetClothAsset
	// void SetClothAsset(class UChaosClothAsset* InClothAsset);                                                             // [0xba6ddb8] Final|Native|Public|BlueprintCallable 
	// Function /Script/ChaosClothAssetEngine.ChaosClothComponent.ResumeSimulation
	// void ResumeSimulation();                                                                                              // [0xba6dda0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ChaosClothAssetEngine.ChaosClothComponent.ResetTeleportMode
	// void ResetTeleportMode();                                                                                             // [0xba6dd88] Final|Native|Public|BlueprintCallable 
	// Function /Script/ChaosClothAssetEngine.ChaosClothComponent.ResetConfigProperties
	// void ResetConfigProperties();                                                                                         // [0xba6dd74] Final|Native|Public|BlueprintCallable 
	// Function /Script/ChaosClothAssetEngine.ChaosClothComponent.RecreateClothSimulationProxy
	// void RecreateClothSimulationProxy();                                                                                  // [0xba6dd60] Final|Native|Public|BlueprintCallable 
	// Function /Script/ChaosClothAssetEngine.ChaosClothComponent.IsSimulationSuspended
	// bool IsSimulationSuspended();                                                                                         // [0xba6dd3c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ChaosClothAssetEngine.ChaosClothComponent.IsSimulationEnabled
	// bool IsSimulationEnabled();                                                                                           // [0xba6dd18] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ChaosClothAssetEngine.ChaosClothComponent.GetClothAsset
	// class UChaosClothAsset* GetClothAsset();                                                                              // [0xba6dcf4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ChaosClothAssetEngine.ChaosClothComponent.ForceNextUpdateTeleportAndReset
	// void ForceNextUpdateTeleportAndReset();                                                                               // [0xba6dcdc] Final|Native|Public|BlueprintCallable 
	// Function /Script/ChaosClothAssetEngine.ChaosClothComponent.ForceNextUpdateTeleport
	// void ForceNextUpdateTeleport();                                                                                       // [0xba6dcbc] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/ChaosClothAssetEngine.ChaosClothAsset
/// Size: 0x0208 (0x0000D0 - 0x0002D8)
class UChaosClothAsset : public USkinnedAsset
{ 
public:
	class UDataflow*                                   DataflowAsset;                                              // 0x00D0   (0x0008)  
	SDK_UNDEFINED(16,12387) /* FString */              __um(DataflowTerminal);                                     // 0x00D8   (0x0010)  
	TArray<FSkeletalMaterial>                          Materials;                                                  // 0x00E8   (0x0010)  
	class USkeleton*                                   Skeleton;                                                   // 0x00F8   (0x0008)  
	class UPhysicsAsset*                               PhysicsAsset;                                               // 0x0100   (0x0008)  
	TArray<FSkeletalMeshLODInfo>                       LODInfo;                                                    // 0x0108   (0x0010)  
	FPerPlatformBool                                   DisableBelowMinLodStripping;                                // 0x0118   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0119   (0x0003)  MISSED
	FPerPlatformInt                                    MinLOD;                                                     // 0x011C   (0x0004)  
	bool                                               bSupportRayTracing : 1;                                     // 0x0120:0 (0x0001)  
	unsigned char                                      UnknownData01_4[0x3];                                       // 0x0121   (0x0003)  MISSED
	int32_t                                            RayTracingMinLOD;                                           // 0x0124   (0x0004)  
	bool                                               bSmoothTransition;                                          // 0x0128   (0x0001)  
	bool                                               bUseMultipleInfluences;                                     // 0x0129   (0x0001)  
	unsigned char                                      UnknownData02_5[0x2];                                       // 0x012A   (0x0002)  MISSED
	float                                              SkinningKernelRadius;                                       // 0x012C   (0x0004)  
	class UPhysicsAsset*                               ShadowPhysicsAsset;                                         // 0x0130   (0x0008)  
	FGuid                                              AssetGuid;                                                  // 0x0138   (0x0010)  
	unsigned char                                      UnknownData03_6[0x190];                                     // 0x0148   (0x0190)  MISSED


	/// Functions
	// Function /Script/ChaosClothAssetEngine.ChaosClothAsset.GetShadowPhysicsAsset
	// class UPhysicsAsset* GetShadowPhysicsAsset();                                                                         // [0x6bf6324] Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/ChaosClothAssetEngine.ChaosClothAssetLodTransitionDataCache
/// Size: 0x0038 (0x000000 - 0x000038)
struct FChaosClothAssetLodTransitionDataCache
{ 
	unsigned char                                      UnknownData00_2[0x38];                                      // 0x0000   (0x0038)  MISSED
};

/// Struct /Script/ChaosClothAssetEngine.ChaosClothSimulationLodModel
/// Size: 0x01F0 (0x000000 - 0x0001F0)
struct FChaosClothSimulationLodModel
{ 
	TArray<FVector3f>                                  Positions;                                                  // 0x0000   (0x0010)  
	TArray<FVector3f>                                  Normals;                                                    // 0x0010   (0x0010)  
	TArray<uint32_t>                                   Indices;                                                    // 0x0020   (0x0010)  
	TArray<FClothVertBoneData>                         BoneData;                                                   // 0x0030   (0x0010)  
	TArray<uint16_t>                                   RequiredExtraBoneIndices;                                   // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_5[0x20];                                      // 0x0050   (0x0020)  MISSED
	TArray<FVector2f>                                  PatternPositions;                                           // 0x0070   (0x0010)  
	TArray<uint32_t>                                   PatternIndices;                                             // 0x0080   (0x0010)  
	TArray<uint32_t>                                   PatternToWeldedIndices;                                     // 0x0090   (0x0010)  
	unsigned char                                      UnknownData01_5[0x50];                                      // 0x00A0   (0x0050)  MISSED
	FClothTetherData                                   TetherData;                                                 // 0x00F0   (0x0010)  
	unsigned char                                      UnknownData02_6[0xF0];                                      // 0x0100   (0x00F0)  MISSED
};

/// Struct /Script/ChaosClothAssetEngine.ChaosClothSimulationModel
/// Size: 0x0038 (0x000000 - 0x000038)
struct FChaosClothSimulationModel
{ 
	TArray<FChaosClothSimulationLodModel>              ClothSimulationLodModels;                                   // 0x0000   (0x0010)  
	TArray<FName>                                      UsedBoneNames;                                              // 0x0010   (0x0010)  
	TArray<int32_t>                                    UsedBoneIndices;                                            // 0x0020   (0x0010)  
	int32_t                                            ReferenceBoneIndex;                                         // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0034   (0x0004)  MISSED
};

