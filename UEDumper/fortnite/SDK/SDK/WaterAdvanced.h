
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine
/// dependency: Niagara
/// dependency: Water

/// Enum /Script/WaterAdvanced.EShallowWaterCollisionContextType
/// Size: 0x04
enum class EShallowWaterCollisionContextType : uint8_t
{
	EShallowWaterCollisionContextType__Pawn                                          = 0,
	EShallowWaterCollisionContextType__Vehicle                                       = 1,
	EShallowWaterCollisionContextType__Custom                                        = 2,
	EShallowWaterCollisionContextType__EShallowWaterCollisionContextType_MAX         = 3
};

/// Class /Script/WaterAdvanced.ShallowWaterPhysicsAssetOverridesDataAsset
/// Size: 0x0050 (0x000030 - 0x000080)
class UShallowWaterPhysicsAssetOverridesDataAsset : public UDataAsset
{ 
public:
	SDK_UNDEFINED(80,14026) /* TMap<FGameplayTag, FShallowWaterPhysicsAssetOverride> */ __um(Overrides);           // 0x0030   (0x0050)  
};

/// Struct /Script/WaterAdvanced.ShallowWaterSimParameters
/// Size: 0x000C (0x000000 - 0x00000C)
struct FShallowWaterSimParameters
{ 
	float                                              WorldGridSize;                                              // 0x0000   (0x0004)  
	int32_t                                            ResolutionMaxAxis;                                          // 0x0004   (0x0004)  
	int32_t                                            MaxImpactsPerFrame;                                         // 0x0008   (0x0004)  
};

/// Class /Script/WaterAdvanced.ShallowWaterSettings
/// Size: 0x0090 (0x000030 - 0x0000C0)
class UShallowWaterSettings : public UDeveloperSettings
{ 
public:
	SDK_UNDEFINED(32,14027) /* TWeakObjectPtr<UNiagaraSystem*> */ __um(DefaultShallowWaterNiagaraSimulation);      // 0x0030   (0x0020)  
	FShallowWaterSimParameters                         ShallowWaterSimParameters;                                  // 0x0050   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x005C   (0x0004)  MISSED
	SDK_UNDEFINED(32,14028) /* TWeakObjectPtr<UMaterialParameterCollection*> */ __um(WaterMPC);                    // 0x0060   (0x0020)  
	FName                                              GridCenterMPCName;                                          // 0x0080   (0x0004)  
	FName                                              WorldGridSizeMPCName;                                       // 0x0084   (0x0004)  
	FName                                              ResolutionMaxAxisMPCName;                                   // 0x0088   (0x0004)  
	FName                                              NormalRTMaterialName;                                       // 0x008C   (0x0004)  
	int32_t                                            MaxActivePawnNum;                                           // 0x0090   (0x0004)  
	int32_t                                            MaxImpulseForceNum;                                         // 0x0094   (0x0004)  
	SDK_UNDEFINED(32,14029) /* TWeakObjectPtr<UShallowWaterPhysicsAssetOverridesDataAsset*> */ __um(PhysicsAssetOverridesDataAsset); // 0x0098   (0x0020)  
	bool                                               bVisualizeActivePawn;                                       // 0x00B8   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x00B9   (0x0007)  MISSED
};

/// Struct /Script/WaterAdvanced.ShallowWaterCollisionContext
/// Size: 0x0018 (0x000000 - 0x000018)
struct FShallowWaterCollisionContext
{ 
	class USkeletalMeshComponent*                      Component;                                                  // 0x0008   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0010   (0x0008)  MISSED
};

/// Class /Script/WaterAdvanced.ShallowWaterSubsystem
/// Size: 0x00E8 (0x000040 - 0x000128)
class UShallowWaterSubsystem : public UTickableWorldSubsystem
{ 
public:
	class UNiagaraComponent*                           ShallowWaterNiagaraSimulation;                              // 0x0040   (0x0008)  
	class UTextureRenderTarget2D*                      WaterInfoTexture;                                           // 0x0048   (0x0008)  
	class UTextureRenderTarget2D*                      NormalRT;                                                   // 0x0050   (0x0008)  
	class UShallowWaterSettings*                       Settings;                                                   // 0x0058   (0x0008)  
	class UMaterialParameterCollection*                MPC;                                                        // 0x0060   (0x0008)  
	TArray<class APawn*>                               ActivePawns;                                                // 0x0068   (0x0010)  
	unsigned char                                      UnknownData00_5[0x20];                                      // 0x0078   (0x0020)  MISSED
	class AWaterBody*                                  LatestValidWaterBody_Internal;                              // 0x0098   (0x0008)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x00A0   (0x0008)  MISSED
	TArray<FShallowWaterCollisionContext>              PreviousContexts;                                           // 0x00A8   (0x0010)  
	TArray<FShallowWaterCollisionContext>              PendingContexts;                                            // 0x00B8   (0x0010)  
	SDK_UNDEFINED(80,14030) /* TMap<FShallowWaterCollisionContext, USkeletalMeshComponent*> */ __um(VehicleCollisionProxies); // 0x00C8   (0x0050)  
	unsigned char                                      UnknownData02_6[0x10];                                      // 0x0118   (0x0010)  MISSED


	/// Functions
	// Function /Script/WaterAdvanced.ShallowWaterSubsystem.SetRecentValidWaterBody
	// bool SetRecentValidWaterBody(class AWaterBody* InWaterBody, bool bOnlyReplaceIfNoValidWaterBodyFound);                // [0xb980748] Final|Native|Protected|BlueprintCallable 
	// Function /Script/WaterAdvanced.ShallowWaterSubsystem.ResetImpacts
	// void ResetImpacts();                                                                                                  // [0xb980734] Final|Native|Public|BlueprintCallable 
	// Function /Script/WaterAdvanced.ShallowWaterSubsystem.RegisterImpact
	// void RegisterImpact(FVector ImpactPosition, FVector ImpactVelocity, float ImpactRadius);                              // [0xb980424] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/WaterAdvanced.ShallowWaterSubsystem.OnWaterInfoTextureCreatedOrChanged
	// void OnWaterInfoTextureCreatedOrChanged(class UTextureRenderTarget2D* WaterInfoTexture);                              // [0xb9803a4] Final|Native|Protected 
	// Function /Script/WaterAdvanced.ShallowWaterSubsystem.OnLocalPlayerPawnBecomesValid
	// void OnLocalPlayerPawnBecomesValid(class APawn* OldPawn, class APawn* NewPawn);                                       // [0xb9802e0] Final|Native|Private 
	// Function /Script/WaterAdvanced.ShallowWaterSubsystem.OnLocalPlayerControllerBecomesValid
	// void OnLocalPlayerControllerBecomesValid(class APlayerController* InPlayerController);                                // [0xb980110] Final|Native|Private 
	// Function /Script/WaterAdvanced.ShallowWaterSubsystem.GetRecentValidWaterBody
	// class AWaterBody* GetRecentValidWaterBody();                                                                          // [0xb9800ec] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/WaterAdvanced.ShallowWaterSubsystem.GetCurrentWaterBody
	// class AWaterBody* GetCurrentWaterBody();                                                                              // [0xb9800c4] Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/WaterAdvanced.ShallowWaterPhysicsAssetOverride
/// Size: 0x0020 (0x000000 - 0x000020)
struct FShallowWaterPhysicsAssetOverride
{ 
	SDK_UNDEFINED(32,14031) /* TWeakObjectPtr<UPhysicsAsset*> */ __um(PhysicsAsset);                               // 0x0000   (0x0020)  
};

