
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/Procedural.ProceduralParameterModifier
/// Size: 0x0010 (0x000028 - 0x000038)
class UProceduralParameterModifier : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x28, 1, 0, 0})
	DMember(float)                                     Contribution                                                OFFSET(get<float>, {0x2C, 4, 0, 0})
	CMember(EProceduralParameterModifierBlendMode)     BlendMode                                                   OFFSET(get<T>, {0x30, 1, 0, 0})


	/// Functions
	// Function /Script/Procedural.ProceduralParameterModifier.GetContribution
	// float GetContribution();                                                                                                 // [0xd23787c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/Procedural.ProceduralDensityModifier
/// Size: 0x0000 (0x000038 - 0x000038)
class UProceduralDensityModifier : public UProceduralParameterModifier
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Script/Procedural.ProceduralDataMap
/// Size: 0x0008 (0x000028 - 0x000030)
class UProceduralDataMap : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(bool)                                      bUseRemapCurve                                              OFFSET(get<bool>, {0x28, 1, 0, 0})
};

/// Class /Script/Procedural.ProceduralFloatDataMap
/// Size: 0x0088 (0x000030 - 0x0000B8)
class UProceduralFloatDataMap : public UProceduralDataMap
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	SMember(FProceduralRemapFloatCurve)                RemapCurve                                                  OFFSET(getStruct<T>, {0x30, 136, 0, 0})
};

/// Class /Script/Procedural.ProceduralLandscapeLayerMap
/// Size: 0x0008 (0x0000B8 - 0x0000C0)
class UProceduralLandscapeLayerMap : public UProceduralFloatDataMap
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	SMember(FName)                                     LandscapeLayerName                                          OFFSET(getStruct<T>, {0xB8, 4, 0, 0})
	SMember(FName)                                     LandscapeEditLayerName                                      OFFSET(getStruct<T>, {0xBC, 4, 0, 0})
};

/// Class /Script/Procedural.ProceduralRotationModifier
/// Size: 0x0000 (0x000038 - 0x000038)
class UProceduralRotationModifier : public UProceduralParameterModifier
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Script/Procedural.ProceduralScaleModifier
/// Size: 0x0000 (0x000038 - 0x000038)
class UProceduralScaleModifier : public UProceduralParameterModifier
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Script/Procedural.ProceduralTextureFloatMap
/// Size: 0x0040 (0x0000B8 - 0x0000F8)
class UProceduralTextureFloatMap : public UProceduralFloatDataMap
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
	CMember(EProceduralTextureColorChannel)            Channel                                                     OFFSET(get<T>, {0xB8, 1, 0, 0})
	SMember(FProceduralTextureSource)                  Source                                                      OFFSET(getStruct<T>, {0xC0, 56, 0, 0})
};

/// Class /Script/Procedural.ProceduralVectorDataMap
/// Size: 0x0208 (0x000030 - 0x000238)
class UProceduralVectorDataMap : public UProceduralDataMap
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
	SMember(FProceduralRemapVectorCurve)               RemapCurve                                                  OFFSET(getStruct<T>, {0x30, 520, 0, 0})
};

/// Class /Script/Procedural.ProceduralTextureVectorMap
/// Size: 0x0038 (0x000238 - 0x000270)
class UProceduralTextureVectorMap : public UProceduralVectorDataMap
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 624;

public:
	SMember(FProceduralTextureSource)                  Source                                                      OFFSET(getStruct<T>, {0x238, 56, 0, 0})
};

/// Class /Script/Procedural.ProceduralVertexColorMap
/// Size: 0x0008 (0x0000B8 - 0x0000C0)
class UProceduralVertexColorMap : public UProceduralFloatDataMap
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	CMember(EProceduralTextureColorChannel)            Channel                                                     OFFSET(get<T>, {0xB8, 1, 0, 0})
};

/// Class /Script/Procedural.HISMBuilderSettings
/// Size: 0x01E0 (0x000028 - 0x000208)
class UHISMBuilderSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 520;

public:
	CMember(TEnumAsByte<EComponentMobility>)           Mobility                                                    OFFSET(get<T>, {0x28, 1, 0, 0})
	SMember(FInt32Interval)                            CullDistance                                                OFFSET(getStruct<T>, {0x2C, 8, 0, 0})
	DMember(float)                                     LODDistanceScale                                            OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(bool)                                      bCastShadow                                                 OFFSET(get<bool>, {0x38, 1, 1, 0})
	DMember(bool)                                      bAffectDynamicIndirectLighting                              OFFSET(get<bool>, {0x38, 1, 1, 1})
	DMember(bool)                                      bAffectDistanceFieldLighting                                OFFSET(get<bool>, {0x38, 1, 1, 2})
	DMember(bool)                                      bCastDynamicShadow                                          OFFSET(get<bool>, {0x38, 1, 1, 3})
	DMember(bool)                                      bCastStaticShadow                                           OFFSET(get<bool>, {0x38, 1, 1, 4})
	DMember(bool)                                      bCastShadowAsTwoSided                                       OFFSET(get<bool>, {0x38, 1, 1, 5})
	DMember(bool)                                      bReceivesDecals                                             OFFSET(get<bool>, {0x38, 1, 1, 6})
	DMember(bool)                                      bOverrideLightMapRes                                        OFFSET(get<bool>, {0x38, 1, 1, 7})
	DMember(int32_t)                                   OverriddenLightMapRes                                       OFFSET(get<int32_t>, {0x3C, 4, 0, 0})
	CMember(ELightmapType)                             LightmapType                                                OFFSET(get<T>, {0x40, 1, 0, 0})
	DMember(bool)                                      bUseAsOccluder                                              OFFSET(get<bool>, {0x44, 1, 1, 0})
	SMember(FBodyInstance)                             BodyInstance                                                OFFSET(getStruct<T>, {0x48, 400, 0, 0})
	CMember(TEnumAsByte<EHasCustomNavigableGeometry>)  CustomNavigableGeometry                                     OFFSET(get<T>, {0x1D8, 1, 0, 0})
	SMember(FLightingChannels)                         LightingChannels                                            OFFSET(getStruct<T>, {0x1D9, 1, 0, 0})
	DMember(bool)                                      bRenderCustomDepth                                          OFFSET(get<bool>, {0x1DC, 1, 1, 0})
	CMember(ERendererStencilMask)                      CustomDepthStencilWriteMask                                 OFFSET(get<T>, {0x1E0, 1, 0, 0})
	DMember(int32_t)                                   CustomDepthStencilValue                                     OFFSET(get<int32_t>, {0x1E4, 4, 0, 0})
	DMember(int32_t)                                   TranslucencySortPriority                                    OFFSET(get<int32_t>, {0x1E8, 4, 0, 0})
	DMember(bool)                                      bEnableDensityScaling                                       OFFSET(get<bool>, {0x1EC, 1, 1, 0})
	CMember(TArray<class URuntimeVirtualTexture*>)     RuntimeVirtualTextures                                      OFFSET(get<T>, {0x1F0, 16, 0, 0})
	DMember(int32_t)                                   VirtualTextureCullMips                                      OFFSET(get<int32_t>, {0x200, 4, 0, 0})
	CMember(ERuntimeVirtualTextureMainPassType)        VirtualTextureRenderPassType                                OFFSET(get<T>, {0x204, 1, 0, 0})


	/// Functions
	// Function /Script/Procedural.HISMBuilderSettings.SetOverriddenLightMapRes
	// void SetOverriddenLightMapRes(int32_t Value);                                                                            // [0xd2383b4] Final|Native|Public|BlueprintCallable 
	// Function /Script/Procedural.HISMBuilderSettings.GetOverriddenLightMapRes
	// int32_t GetOverriddenLightMapRes();                                                                                      // [0x37e8c78] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/Procedural.ProceduralContentVariationsWeightsModifier
/// Size: 0x0000 (0x000038 - 0x000038)
class UProceduralContentVariationsWeightsModifier : public UProceduralParameterModifier
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Script/Procedural.ProceduralContentVariationsWeightsMapModifier
/// Size: 0x0010 (0x000038 - 0x000048)
class UProceduralContentVariationsWeightsMapModifier : public UProceduralContentVariationsWeightsModifier
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(TArray<FProceduralContentVariationMap>)    VariationsMaps                                              OFFSET(get<T>, {0x38, 16, 0, 0})
};

/// Class /Script/Procedural.ProceduralGenerator
/// Size: 0x0010 (0x000028 - 0x000038)
class UProceduralGenerator : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FProceduralDebugSettings)                  DebugSettings                                               OFFSET(getStruct<T>, {0x28, 12, 0, 0})
};

/// Class /Script/Procedural.ProceduralCustomGenerator
/// Size: 0x0010 (0x000038 - 0x000048)
class UProceduralCustomGenerator : public UProceduralGenerator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(class UClass*)                             GeneratorContextClass                                       OFFSET(get<T>, {0x38, 8, 0, 0})
	CMember(class UProceduralGeneratorContext*)        GeneratorContext                                            OFFSET(get<T>, {0x40, 8, 0, 0})
};

/// Class /Script/Procedural.ProceduralDensityMapModifier
/// Size: 0x0008 (0x000038 - 0x000040)
class UProceduralDensityMapModifier : public UProceduralDensityModifier
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(class UProceduralFloatDataMap*)            Map                                                         OFFSET(get<T>, {0x38, 8, 0, 0})
};

/// Class /Script/Procedural.ProceduralGenerationBlockingVolume
/// Size: 0x0010 (0x0002C8 - 0x0002D8)
class AProceduralGenerationBlockingVolume : public AVolume
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 728;

public:
	CMember(TArray<class AProceduralGenerationVolume*>) BlockedVolumes                                             OFFSET(get<T>, {0x2C8, 16, 0, 0})
};

/// Class /Script/Procedural.ProceduralGenerationComponent
/// Size: 0x0030 (0x0000A0 - 0x0000D0)
class UProceduralGenerationComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	CMember(class UProceduralGenerator*)               Generator                                                   OFFSET(get<T>, {0xA0, 8, 0, 0})
	DMember(bool)                                      bShowDebugVisualization                                     OFFSET(get<bool>, {0xA8, 1, 0, 0})
	SMember(FGuid)                                     ProceduralGenerationGuid                                    OFFSET(getStruct<T>, {0xAC, 16, 0, 0})
	CMember(class AVolume*)                            GenerationVolume                                            OFFSET(get<T>, {0xC0, 8, 0, 0})
	CMember(class UProceduralGenerationContext*)       GenerationContext                                           OFFSET(get<T>, {0xC8, 8, 0, 0})
};

/// Class /Script/Procedural.ProceduralGenerationContext
/// Size: 0x00C8 (0x000028 - 0x0000F0)
class UProceduralGenerationContext : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	CMember(class UProceduralGeneratorContext*)        GeneratorContext                                            OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(TArray<class UProceduralGeneratorContext*>) GeneratedContexts                                          OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TArray<class UProceduralGeneratorContext*>) RegisteredContexts                                         OFFSET(get<T>, {0x40, 16, 0, 0})
	CMember(TMap<FGuid, UProceduralGeneratorContext*>) GeneratorContexts                                           OFFSET(get<T>, {0x50, 80, 0, 0})


	/// Functions
	// Function /Script/Procedural.ProceduralGenerationContext.GetGenerationVolume
	// class AVolume* GetGenerationVolume();                                                                                    // [0xd237f98] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Procedural.ProceduralGenerationContext.GetGenerationComponent
	// class UProceduralGenerationComponent* GetGenerationComponent();                                                          // [0xd237f74] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/Procedural.ProceduralGenerationVolume
/// Size: 0x0008 (0x0002C8 - 0x0002D0)
class AProceduralGenerationVolume : public AVolume
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 720;

public:
	CMember(class UProceduralGenerationComponent*)     ProceduralComponent                                         OFFSET(get<T>, {0x2C8, 8, 0, 0})


	/// Functions
	// Function /Script/Procedural.ProceduralGenerationVolume.Generate
	// void Generate();                                                                                                         // [0xd23783c] Final|Native|Public|BlueprintCallable 
	// Function /Script/Procedural.ProceduralGenerationVolume.ClearGeneratedContent
	// void ClearGeneratedContent();                                                                                            // [0xd2377f8] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/Procedural.ProceduralGeneratorContext
/// Size: 0x0030 (0x000028 - 0x000058)
class UProceduralGeneratorContext : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(class UProceduralGenerator*)               Generator                                                   OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(class UProceduralGenerationContext*)       GenerationContext                                           OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(class UProceduralGeneratorContext*)        OwnerContext                                                OFFSET(get<T>, {0x38, 8, 0, 0})
	CMember(TArray<class UObject*>)                    GeneratedObjects                                            OFFSET(get<T>, {0x40, 16, 0, 0})
	CMember(class UProceduralPointCloud*)              ExportedPointCloud                                          OFFSET(get<T>, {0x50, 8, 0, 0})


	/// Functions
	// Function /Script/Procedural.ProceduralGeneratorContext.OnGenerate
	// bool OnGenerate();                                                                                                       // [0x36b6e84] Native|Event|Public|BlueprintEvent 
	// Function /Script/Procedural.ProceduralGeneratorContext.OnDrawVisualization
	// void OnDrawVisualization();                                                                                              // [0x20c3f9c] Event|Public|BlueprintEvent|Const 
	// Function /Script/Procedural.ProceduralGeneratorContext.OnClearGeneratedContent
	// void OnClearGeneratedContent();                                                                                          // [0x1447bfc] Native|Event|Public|BlueprintEvent 
	// Function /Script/Procedural.ProceduralGeneratorContext.GetOrCreateGeneratorContext
	// void GetOrCreateGeneratorContext(class UProceduralGenerator* Generator, class UProceduralGeneratorContext*& Context);    // [0xd237fbc] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Procedural.ProceduralGeneratorContext.GetGeneratedContexts
	// TArray<UProceduralGeneratorContext*> GetGeneratedContexts();                                                             // [0xd23789c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Procedural.ProceduralGeneratorContext.Generate
	// bool Generate();                                                                                                         // [0xd237858] Final|Native|Public|BlueprintCallable 
	// Function /Script/Procedural.ProceduralGeneratorContext.ClearGeneratedContent
	// void ClearGeneratedContent();                                                                                            // [0xd237814] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/Procedural.ProceduralGeneratorStack
/// Size: 0x0010 (0x000038 - 0x000048)
class UProceduralGeneratorStack : public UProceduralGenerator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(TArray<FProceduralGenerationStackElement>) Generators                                                  OFFSET(get<T>, {0x38, 16, 0, 0})
};

/// Class /Script/Procedural.ProceduralGeneratorStackContext
/// Size: 0x0000 (0x000058 - 0x000058)
class UProceduralGeneratorStackContext : public UProceduralGeneratorContext
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
};

/// Class /Script/Procedural.ProceduralPointCloud
/// Size: 0x0010 (0x000028 - 0x000038)
class UProceduralPointCloud : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<FProceduralPointCloudPoint>)        Points                                                      OFFSET(get<T>, {0x28, 16, 0, 0})


	/// Functions
	// Function /Script/Procedural.ProceduralPointCloud.GetPointsByTag
	// TArray<FProceduralPointCloudPoint> GetPointsByTag(FName InTag);                                                          // [0xd23808c] Final|Native|Public|BlueprintCallable 
	// Function /Script/Procedural.ProceduralPointCloud.Empty
	// void Empty();                                                                                                            // [0xd237828] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/Procedural.ProceduralRotationMapModifier
/// Size: 0x0028 (0x000038 - 0x000060)
class UProceduralRotationMapModifier : public UProceduralRotationModifier
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(class UProceduralVectorDataMap*)           Map                                                         OFFSET(get<T>, {0x38, 8, 0, 0})
	CMember(EProceduralRotationFormat)                 RotationFormat                                              OFFSET(get<T>, {0x40, 1, 0, 0})
	SMember(FFloatInterval)                            Roll                                                        OFFSET(getStruct<T>, {0x44, 8, 0, 0})
	SMember(FFloatInterval)                            pitch                                                       OFFSET(getStruct<T>, {0x4C, 8, 0, 0})
	SMember(FFloatInterval)                            Yaw                                                         OFFSET(getStruct<T>, {0x54, 8, 0, 0})


	/// Functions
	// Function /Script/Procedural.ProceduralRotationMapModifier.SetYawMin
	// void SetYawMin(float InValue);                                                                                           // [0xd238810] Final|Native|Public|BlueprintCallable 
	// Function /Script/Procedural.ProceduralRotationMapModifier.SetYawMax
	// void SetYawMax(float InValue);                                                                                           // [0xd238784] Final|Native|Public|BlueprintCallable 
	// Function /Script/Procedural.ProceduralRotationMapModifier.SetRollMin
	// void SetRollMin(float InValue);                                                                                          // [0xd238928] Final|Native|Public|BlueprintCallable 
	// Function /Script/Procedural.ProceduralRotationMapModifier.SetRollMax
	// void SetRollMax(float InValue);                                                                                          // [0xd23889c] Final|Native|Public|BlueprintCallable 
	// Function /Script/Procedural.ProceduralRotationMapModifier.SetPitchMin
	// void SetPitchMin(float InValue);                                                                                         // [0xd2384c8] Final|Native|Public|BlueprintCallable 
	// Function /Script/Procedural.ProceduralRotationMapModifier.SetPitchMax
	// void SetPitchMax(float InValue);                                                                                         // [0xd23843c] Final|Native|Public|BlueprintCallable 
	// Function /Script/Procedural.ProceduralRotationMapModifier.GetYawMin
	// float GetYawMin();                                                                                                       // [0x6b89d98] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Procedural.ProceduralRotationMapModifier.GetYawMax
	// float GetYawMax();                                                                                                       // [0x6b8a198] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Procedural.ProceduralRotationMapModifier.GetRollMin
	// float GetRollMin();                                                                                                      // [0x3cdfaa4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Procedural.ProceduralRotationMapModifier.GetRollMax
	// float GetRollMax();                                                                                                      // [0x3e62d5c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Procedural.ProceduralRotationMapModifier.GetPitchMin
	// float GetPitchMin();                                                                                                     // [0x3e62a90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Procedural.ProceduralRotationMapModifier.GetPitchMax
	// float GetPitchMax();                                                                                                     // [0x2ea9d9c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/Procedural.ProceduralRotationNoiseModifier
/// Size: 0x0028 (0x000038 - 0x000060)
class UProceduralRotationNoiseModifier : public UProceduralRotationModifier
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	DMember(bool)                                      bRandomRoll                                                 OFFSET(get<bool>, {0x38, 1, 1, 0})
	SMember(FFloatInterval)                            RandomRoll                                                  OFFSET(getStruct<T>, {0x3C, 8, 0, 0})
	DMember(bool)                                      bRandomPitch                                                OFFSET(get<bool>, {0x44, 1, 1, 0})
	SMember(FFloatInterval)                            RandomPitch                                                 OFFSET(getStruct<T>, {0x48, 8, 0, 0})
	DMember(bool)                                      bRandomYaw                                                  OFFSET(get<bool>, {0x50, 1, 1, 0})
	SMember(FFloatInterval)                            RandomYaw                                                   OFFSET(getStruct<T>, {0x54, 8, 0, 0})


	/// Functions
	// Function /Script/Procedural.ProceduralRotationNoiseModifier.SetRandomYawMin
	// void SetRandomYawMin(float InValue);                                                                                     // [0xd238810] Final|Native|Public|BlueprintCallable 
	// Function /Script/Procedural.ProceduralRotationNoiseModifier.SetRandomYawMax
	// void SetRandomYawMax(float InValue);                                                                                     // [0xd238784] Final|Native|Public|BlueprintCallable 
	// Function /Script/Procedural.ProceduralRotationNoiseModifier.SetRandomRollMin
	// void SetRandomRollMin(float InValue);                                                                                    // [0xd2386f8] Final|Native|Public|BlueprintCallable 
	// Function /Script/Procedural.ProceduralRotationNoiseModifier.SetRandomRollMax
	// void SetRandomRollMax(float InValue);                                                                                    // [0xd23866c] Final|Native|Public|BlueprintCallable 
	// Function /Script/Procedural.ProceduralRotationNoiseModifier.SetRandomPitchMin
	// void SetRandomPitchMin(float InValue);                                                                                   // [0xd2385e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Procedural.ProceduralRotationNoiseModifier.SetRandomPitchMax
	// void SetRandomPitchMax(float InValue);                                                                                   // [0xd238554] Final|Native|Public|BlueprintCallable 
	// Function /Script/Procedural.ProceduralRotationNoiseModifier.GetRandomYawMin
	// float GetRandomYawMin();                                                                                                 // [0x6b89d98] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Procedural.ProceduralRotationNoiseModifier.GetRandomYawMax
	// float GetRandomYawMax();                                                                                                 // [0x6b8a198] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Procedural.ProceduralRotationNoiseModifier.GetRandomRollMin
	// float GetRandomRollMin();                                                                                                // [0x37e8c78] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Procedural.ProceduralRotationNoiseModifier.GetRandomRollMax
	// float GetRandomRollMax();                                                                                                // [0x3a008ac] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Procedural.ProceduralRotationNoiseModifier.GetRandomPitchMin
	// float GetRandomPitchMin();                                                                                               // [0x3e62d5c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Procedural.ProceduralRotationNoiseModifier.GetRandomPitchMax
	// float GetRandomPitchMax();                                                                                               // [0x3e62a90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/Procedural.ProceduralScaleMapModifier
/// Size: 0x0018 (0x000038 - 0x000050)
class UProceduralScaleMapModifier : public UProceduralScaleModifier
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	DMember(bool)                                      bRemapScale                                                 OFFSET(get<bool>, {0x38, 1, 0, 0})
	SMember(FFloatInterval)                            RemapScale                                                  OFFSET(getStruct<T>, {0x3C, 8, 0, 0})
	CMember(class UProceduralFloatDataMap*)            Map                                                         OFFSET(get<T>, {0x48, 8, 0, 0})


	/// Functions
	// Function /Script/Procedural.ProceduralScaleMapModifier.SetRemapScaleMin
	// void SetRemapScaleMin(float InValue);                                                                                    // [0xd2386f8] Final|Native|Public|BlueprintCallable 
	// Function /Script/Procedural.ProceduralScaleMapModifier.SetRemapScaleMax
	// void SetRemapScaleMax(float InValue);                                                                                    // [0xd23866c] Final|Native|Public|BlueprintCallable 
	// Function /Script/Procedural.ProceduralScaleMapModifier.GetRemapScaleMin
	// float GetRemapScaleMin();                                                                                                // [0x37e8c78] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Procedural.ProceduralScaleMapModifier.GetRemapScaleMax
	// float GetRemapScaleMax();                                                                                                // [0x3a008ac] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/Procedural.ProceduralScaleNoiseModifier
/// Size: 0x0008 (0x000038 - 0x000040)
class UProceduralScaleNoiseModifier : public UProceduralScaleModifier
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FFloatInterval)                            Scale                                                       OFFSET(getStruct<T>, {0x38, 8, 0, 0})


	/// Functions
	// Function /Script/Procedural.ProceduralScaleNoiseModifier.SetScaleMin
	// void SetScaleMin(float InValue);                                                                                         // [0xd238a40] Final|Native|Public|BlueprintCallable 
	// Function /Script/Procedural.ProceduralScaleNoiseModifier.SetScaleMax
	// void SetScaleMax(float InValue);                                                                                         // [0xd2389b4] Final|Native|Public|BlueprintCallable 
	// Function /Script/Procedural.ProceduralScaleNoiseModifier.GetScaleMin
	// float GetScaleMin();                                                                                                     // [0x6b89cd0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Procedural.ProceduralScaleNoiseModifier.GetScaleMax
	// float GetScaleMax();                                                                                                     // [0x37e8c78] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/Procedural.ProceduralScatterContentVariation
/// Size: 0x00C0 (0x000028 - 0x0000E8)
class UProceduralScatterContentVariation : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x28, 4, 0, 0})
	CMember(EProceduralScatterContentPivotMode)        PivotMode                                                   OFFSET(get<T>, {0x2C, 1, 0, 0})
	SMember(FVector)                                   AdditionalPivotOffset                                       OFFSET(getStruct<T>, {0x30, 24, 0, 0})
	DMember(float)                                     FootprintBoundingBoxRatio                                   OFFSET(get<float>, {0x48, 4, 0, 0})
	CMember(TArray<FName>)                             SetActorTags                                                OFFSET(get<T>, {0x50, 16, 0, 0})
};

/// Class /Script/Procedural.ProceduralScatterActorContentVariation
/// Size: 0x0008 (0x0000E8 - 0x0000F0)
class UProceduralScatterActorContentVariation : public UProceduralScatterContentVariation
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	CMember(class UClass*)                             ActorClass                                                  OFFSET(get<T>, {0xE8, 8, 0, 0})
};

/// Class /Script/Procedural.ProceduralScatterContentSettings
/// Size: 0x0040 (0x000028 - 0x000068)
class UProceduralScatterContentSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	CMember(TArray<FName>)                             SetActorTags                                                OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(TArray<class UProceduralScatterContentVariation*>) Variations                                          OFFSET(get<T>, {0x38, 16, 0, 0})
};

/// Class /Script/Procedural.ProceduralScatterActorContentSettings
/// Size: 0x0008 (0x000068 - 0x000070)
class UProceduralScatterActorContentSettings : public UProceduralScatterContentSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	DMember(bool)                                      bHideFromWorldOutliner                                      OFFSET(get<bool>, {0x68, 1, 0, 0})
};

/// Class /Script/Procedural.ProceduralScatterGenerator
/// Size: 0x00A0 (0x000038 - 0x0000D8)
class UProceduralScatterGenerator : public UProceduralGenerator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	CMember(EProceduralScatterMethod)                  ScatterMethod                                               OFFSET(get<T>, {0x38, 1, 0, 0})
	SMember(FProceduralScatterTileSettings)            TileSettings                                                OFFSET(getStruct<T>, {0x3C, 20, 0, 0})
	DMember(int32_t)                                   RandomSeed                                                  OFFSET(get<int32_t>, {0x50, 4, 0, 0})
	DMember(int32_t)                                   NumUniqueSourcePointPatterns                                OFFSET(get<int32_t>, {0x54, 4, 0, 0})
	SMember(FVector2D)                                 GridSize                                                    OFFSET(getStruct<T>, {0x58, 16, 0, 0})
	SMember(FVector2D)                                 GridJitter                                                  OFFSET(getStruct<T>, {0x68, 16, 0, 0})
	DMember(float)                                     GridRotation                                                OFFSET(get<float>, {0x78, 4, 0, 0})
	SMember(FVector2D)                                 GridOffset                                                  OFFSET(getStruct<T>, {0x80, 16, 0, 0})
	CMember(TArray<FProceduralScatterSettingsElement>) ScatterSettingsElements                                     OFFSET(get<T>, {0x90, 16, 0, 0})
	CMember(TArray<FName>)                             BlockingActorTags                                           OFFSET(get<T>, {0xA0, 16, 0, 0})
	DMember(bool)                                      bAllScatterPointsBlocking                                   OFFSET(get<bool>, {0xB0, 1, 0, 0})
	DMember(bool)                                      bLocalDistribution                                          OFFSET(get<bool>, {0xB1, 1, 0, 0})
	CMember(TArray<FName>)                             BlockingScatterPointTags                                    OFFSET(get<T>, {0xB8, 16, 0, 0})
	SMember(FProceduralScatterDebugSettings)           ScatterDebugSettings                                        OFFSET(getStruct<T>, {0xC8, 12, 0, 0})
};

/// Class /Script/Procedural.ProceduralScatterGeneratorContext
/// Size: 0x0328 (0x000058 - 0x000380)
class UProceduralScatterGeneratorContext : public UProceduralGeneratorContext
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 896;

public:
	SMember(FScatteredPointCloud)                      ScatteredPointCloud                                         OFFSET(getStruct<T>, {0x58, 16, 0, 0})
	CMember(TArray<class UProceduralScatterGeneratorTile*>) UniqueTiles                                            OFFSET(get<T>, {0x68, 16, 0, 0})
	CMember(TArray<FSourcePointGenerator>)             SourcePointGenerators                                       OFFSET(get<T>, {0x78, 16, 0, 0})
	CMember(TArray<FProceduralScatterProjectionPoint>) ProjectionPointCloud                                        OFFSET(get<T>, {0x88, 16, 0, 0})
	CMember(class UProceduralPointCloud*)              SourcePointCloud                                            OFFSET(get<T>, {0x98, 8, 0, 0})
	CMember(class UProceduralPointCloud*)              BlockerPointCloud                                           OFFSET(get<T>, {0xA0, 8, 0, 0})
	CMember(class UMaterialInstanceDynamic*)           ProjectionVectorMaterial                                    OFFSET(get<T>, {0xA8, 8, 0, 0})
};

/// Class /Script/Procedural.ProceduralScatterGeneratorTile
/// Size: 0x0140 (0x000028 - 0x000168)
class UProceduralScatterGeneratorTile : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 360;

public:
	CMember(class UProceduralScatterGenerator*)        Generator                                                   OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(TArray<FProceduralScatter2DPoint>)         GeneratedPoints                                             OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Class /Script/Procedural.ProceduralScatterSettings
/// Size: 0x01B0 (0x000028 - 0x0001D8)
class UProceduralScatterSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 472;

public:
	CMember(class UProceduralScatterContentSettings*)  Content                                                     OFFSET(get<T>, {0x28, 8, 0, 0})
	DMember(bool)                                      bContentVariationsModifiersEnabled                          OFFSET(get<bool>, {0x30, 1, 1, 0})
	SMember(FProceduralContentVariationsModifiers)     ContentVariationsModifiers                                  OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	CMember(TArray<FName>)                             SetPointTags                                                OFFSET(get<T>, {0x48, 16, 0, 0})
	DMember(float)                                     CollisionRadius                                             OFFSET(get<float>, {0x58, 4, 0, 0})
	DMember(bool)                                      bAutomaticCollisionRadius                                   OFFSET(get<bool>, {0x5C, 1, 1, 0})
	DMember(bool)                                      bUseSphericalBoundsForAutomaticCollisionRadius              OFFSET(get<bool>, {0x5C, 1, 1, 1})
	DMember(float)                                     AutomaticCollisionRadiusScaleFactor                         OFFSET(get<float>, {0x60, 4, 0, 0})
	DMember(int32_t)                                   DistributionSeed                                            OFFSET(get<int32_t>, {0x64, 4, 0, 0})
	DMember(bool)                                      bDensityModifiersEnabled                                    OFFSET(get<bool>, {0x68, 1, 1, 0})
	SMember(FProceduralDensityModifiers)               DensityModifiers                                            OFFSET(getStruct<T>, {0x70, 16, 0, 0})
	DMember(float)                                     Density                                                     OFFSET(get<float>, {0x80, 4, 0, 0})
	CMember(TArray<FName>)                             SourcePointTagIncludes                                      OFFSET(get<T>, {0x88, 16, 0, 0})
	CMember(TArray<FName>)                             SourcePointTagExcludes                                      OFFSET(get<T>, {0x98, 16, 0, 0})
	CMember(TArray<FName>)                             SourceActorTagIncludes                                      OFFSET(get<T>, {0xA8, 16, 0, 0})
	CMember(TArray<FName>)                             SourceActorTagExcludes                                      OFFSET(get<T>, {0xB8, 16, 0, 0})
	CMember(TArray<FName>)                             SourceComponentTagIncludes                                  OFFSET(get<T>, {0xC8, 16, 0, 0})
	CMember(TArray<FName>)                             SourceComponentTagExcludes                                  OFFSET(get<T>, {0xD8, 16, 0, 0})
	SMember(FFloatInterval)                            SourcePointDistance                                         OFFSET(getStruct<T>, {0xE8, 8, 0, 0})
	DMember(bool)                                      bUseSourcePointExactNumber                                  OFFSET(get<bool>, {0xF0, 1, 1, 0})
	DMember(int32_t)                                   SourcePointExactNumber                                      OFFSET(get<int32_t>, {0xF4, 4, 0, 0})
	DMember(bool)                                      bScaleModifiersEnabled                                      OFFSET(get<bool>, {0xF8, 1, 1, 0})
	SMember(FProceduralScaleModifiers)                 ScaleModifiers                                              OFFSET(getStruct<T>, {0x100, 32, 0, 0})
	DMember(bool)                                      bRotationModifiersEnabled                                   OFFSET(get<bool>, {0x120, 1, 1, 0})
	SMember(FProceduralRotationModifiers)              RotationModifiers                                           OFFSET(getStruct<T>, {0x128, 16, 0, 0})
	DMember(bool)                                      bAlignToNormal                                              OFFSET(get<bool>, {0x138, 1, 1, 0})
	DMember(float)                                     AlignMaxAngle                                               OFFSET(get<float>, {0x13C, 4, 0, 0})
	SMember(FProceduralScatterTargetSurface)           TargetSurface                                               OFFSET(getStruct<T>, {0x140, 72, 0, 0})
	DMember(bool)                                      bDetectOverhangingLedge                                     OFFSET(get<bool>, {0x188, 1, 1, 0})
	DMember(int32_t)                                   OverhangingLedgeDetectionRayCount                           OFFSET(get<int32_t>, {0x18C, 4, 0, 0})
	DMember(float)                                     OverhangingLedgeDetectionLength                             OFFSET(get<float>, {0x190, 4, 0, 0})
	DMember(float)                                     OverhangingLedgeDetectionVerticalThreshold                  OFFSET(get<float>, {0x194, 4, 0, 0})
	DMember(float)                                     OverhangingLedgeDetectionRadiusScale                        OFFSET(get<float>, {0x198, 4, 0, 0})
	DMember(float)                                     FilterMinimumScale                                          OFFSET(get<float>, {0x19C, 4, 0, 0})
	DMember(float)                                     OverlapPriority                                             OFFSET(get<float>, {0x1A0, 4, 0, 0})
	DMember(bool)                                      bCollisionWithWorld                                         OFFSET(get<bool>, {0x1A4, 1, 1, 0})
	SMember(FVector)                                   CollisionScale                                              OFFSET(getStruct<T>, {0x1A8, 24, 0, 0})
	SMember(FColor)                                    DebugColor                                                  OFFSET(getStruct<T>, {0x1C0, 4, 0, 0})


	/// Functions
	// Function /Script/Procedural.ProceduralScatterSettings.SetSourcePointDistanceMin
	// void SetSourcePointDistanceMin(float InValue);                                                                           // [0xd238b60] Final|Native|Public|BlueprintCallable 
	// Function /Script/Procedural.ProceduralScatterSettings.SetSourcePointDistanceMax
	// void SetSourcePointDistanceMax(float InValue);                                                                           // [0xd238acc] Final|Native|Public|BlueprintCallable 
	// Function /Script/Procedural.ProceduralScatterSettings.GetSourcePointDistanceMin
	// float GetSourcePointDistanceMin();                                                                                       // [0x6872d64] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Procedural.ProceduralScatterSettings.GetSourcePointDistanceMax
	// float GetSourcePointDistanceMax();                                                                                       // [0x958d8e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/Procedural.ProceduralScatterStaticMeshContentVariation
/// Size: 0x0080 (0x0000E8 - 0x000168)
class UProceduralScatterStaticMeshContentVariation : public UProceduralScatterContentVariation
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 360;

public:
	CMember(EProceduralScatterStaticMeshMode)          StaticMeshMode                                              OFFSET(get<T>, {0xE8, 1, 0, 0})
	CMember(class UStaticMesh*)                        Mesh                                                        OFFSET(get<T>, {0xF0, 8, 0, 0})
	CMember(class UClass*)                             ActorClass                                                  OFFSET(get<T>, {0xF8, 8, 0, 0})
	CMember(TArray<class UMaterialInterface*>)         OverrideMaterials                                           OFFSET(get<T>, {0x100, 16, 0, 0})
	CMember(class UHISMBuilderSettings*)               OverrideInstancingSettings                                  OFFSET(get<T>, {0x110, 8, 0, 0})
};

/// Class /Script/Procedural.ProceduralScatterStaticMeshContentSettings
/// Size: 0x0018 (0x000068 - 0x000080)
class UProceduralScatterStaticMeshContentSettings : public UProceduralScatterContentSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(class UClass*)                             ComponentClass                                              OFFSET(get<T>, {0x68, 8, 0, 0})
	SMember(FName)                                     ComponentTag                                                OFFSET(getStruct<T>, {0x70, 4, 0, 0})
	CMember(class UHISMBuilderSettings*)               VariationsInstancingSettings                                OFFSET(get<T>, {0x78, 8, 0, 0})
};

/// Class /Script/Procedural.ProceduralSurfaceHeightMap
/// Size: 0x0010 (0x0000B8 - 0x0000C8)
class UProceduralSurfaceHeightMap : public UProceduralFloatDataMap
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	DMember(bool)                                      bNormalizedHeight                                           OFFSET(get<bool>, {0xB8, 1, 0, 0})
	SMember(FFloatInterval)                            HeightRange                                                 OFFSET(getStruct<T>, {0xBC, 8, 0, 0})


	/// Functions
	// Function /Script/Procedural.ProceduralSurfaceHeightMap.SetHeightRangeMin
	// void SetHeightRangeMin(float InValue);                                                                                   // [0xd238320] Final|Native|Public|BlueprintCallable 
	// Function /Script/Procedural.ProceduralSurfaceHeightMap.SetHeightRangeMax
	// void SetHeightRangeMax(float InValue);                                                                                   // [0xd23828c] Final|Native|Public|BlueprintCallable 
	// Function /Script/Procedural.ProceduralSurfaceHeightMap.GetValue
	// float GetValue(float InHeight);                                                                                          // [0xd2381fc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Procedural.ProceduralSurfaceHeightMap.GetHeightRangeMin
	// float GetHeightRangeMin();                                                                                               // [0xc6ce3d8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Procedural.ProceduralSurfaceHeightMap.GetHeightRangeMax
	// float GetHeightRangeMax();                                                                                               // [0x82f0d34] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/Procedural.ProceduralSurfaceSlopeAngleMap
/// Size: 0x0010 (0x0000B8 - 0x0000C8)
class UProceduralSurfaceSlopeAngleMap : public UProceduralFloatDataMap
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	DMember(bool)                                      bNormalizedSlopeAngle                                       OFFSET(get<bool>, {0xB8, 1, 0, 0})
	SMember(FFloatInterval)                            SlopeAngleRange                                             OFFSET(getStruct<T>, {0xBC, 8, 0, 0})


	/// Functions
	// Function /Script/Procedural.ProceduralSurfaceSlopeAngleMap.SetSlopeAngleRangeMin
	// void SetSlopeAngleRangeMin(float InValue);                                                                               // [0xd238320] Final|Native|Public|BlueprintCallable 
	// Function /Script/Procedural.ProceduralSurfaceSlopeAngleMap.SetSlopeAngleRangeMax
	// void SetSlopeAngleRangeMax(float InValue);                                                                               // [0xd23828c] Final|Native|Public|BlueprintCallable 
	// Function /Script/Procedural.ProceduralSurfaceSlopeAngleMap.GetValue
	// float GetValue(float InSlopeAngle);                                                                                      // [0xd2381fc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Procedural.ProceduralSurfaceSlopeAngleMap.GetSlopeAngleRangeMin
	// float GetSlopeAngleRangeMin();                                                                                           // [0xc6ce3d8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Procedural.ProceduralSurfaceSlopeAngleMap.GetSlopeAngleRangeMax
	// float GetSlopeAngleRangeMax();                                                                                           // [0x82f0d34] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/Procedural.ProceduralPointCloudPoint
/// Size: 0x00B0 (0x000000 - 0x0000B0)
class FProceduralPointCloudPoint : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	SMember(FTransform)                                Transform                                                   OFFSET(getStruct<T>, {0x0, 96, 0, 0})
	SMember(FVector)                                   SurfaceNormal                                               OFFSET(getStruct<T>, {0x60, 24, 0, 0})
	CMember(class UObject*)                            SurfaceObject                                               OFFSET(get<T>, {0x78, 8, 0, 0})
	CMember(class UObject*)                            Object                                                      OFFSET(get<T>, {0x80, 8, 0, 0})
	DMember(int32_t)                                   ObjectVariation                                             OFFSET(get<int32_t>, {0x88, 4, 0, 0})
	CMember(TArray<FName>)                             Tags                                                        OFFSET(get<T>, {0x90, 16, 0, 0})
	DMember(float)                                     CollisionRadius                                             OFFSET(get<float>, {0xA0, 4, 0, 0})
	DMember(float)                                     SourcePointGeneratorIndex                                   OFFSET(get<float>, {0xA4, 4, 0, 0})
};

/// Struct /Script/Procedural.ProceduralScatterPoint
/// Size: 0x00A0 (0x000000 - 0x0000A0)
class FProceduralScatterPoint : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	SMember(FVector)                                   Location                                                    OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FRotator)                                  Rotation                                                    OFFSET(getStruct<T>, {0x18, 24, 0, 0})
	DMember(float)                                     Scale                                                       OFFSET(get<float>, {0x30, 4, 0, 0})
	CMember(class UProceduralScatterSettings*)         ScatterSettings                                             OFFSET(get<T>, {0x38, 8, 0, 0})
	DMember(int32_t)                                   VariationIdx                                                OFFSET(get<int32_t>, {0x40, 4, 0, 0})
	SMember(FVector)                                   GenerationLocation                                          OFFSET(getStruct<T>, {0x48, 24, 0, 0})
	SMember(FProceduralHitPoint)                       HitPoint                                                    OFFSET(getStruct<T>, {0x60, 64, 0, 0})
};

/// Struct /Script/Procedural.ProceduralHitPoint
/// Size: 0x0040 (0x000000 - 0x000040)
class FProceduralHitPoint : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(bool)                                      bIsTraceDone                                                OFFSET(get<bool>, {0x0, 1, 0, 0})
	SMember(FVector)                                   Position                                                    OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	SMember(FVector)                                   Normal                                                      OFFSET(getStruct<T>, {0x20, 24, 0, 0})
	CMember(TWeakObjectPtr<UPrimitiveComponent*>)      Component                                                   OFFSET(get<T>, {0x38, 8, 0, 0})
};

/// Struct /Script/Procedural.ProceduralScatterProjectionPoint
/// Size: 0x00C0 (0x000000 - 0x0000C0)
class FProceduralScatterProjectionPoint : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	SMember(FVector)                                   GenerationLocation                                          OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FRotator)                                  Rotation                                                    OFFSET(getStruct<T>, {0x18, 24, 0, 0})
	DMember(float)                                     Scale                                                       OFFSET(get<float>, {0x30, 4, 0, 0})
	CMember(class UProceduralScatterSettings*)         ScatterSettings                                             OFFSET(get<T>, {0x38, 8, 0, 0})
	DMember(int32_t)                                   VariationIdx                                                OFFSET(get<int32_t>, {0x40, 4, 0, 0})
	SMember(FVector)                                   StartTrace                                                  OFFSET(getStruct<T>, {0x48, 24, 0, 0})
	SMember(FVector)                                   EndTrace                                                    OFFSET(getStruct<T>, {0x60, 24, 0, 0})
	SMember(FProceduralHitPoint)                       HitPoint                                                    OFFSET(getStruct<T>, {0x78, 64, 0, 0})
};

/// Struct /Script/Procedural.ProceduralTextureSource
/// Size: 0x0038 (0x000000 - 0x000038)
class FProceduralTextureSource : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(bool)                                      bUseRenderTarget                                            OFFSET(get<bool>, {0x0, 1, 0, 0})
	CMember(class UTexture2D*)                         Texture                                                     OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(class UTextureRenderTarget2D*)             RenderTarget                                                OFFSET(get<T>, {0x10, 8, 0, 0})
	CMember(class UMaterialInterface*)                 RenderTargetMaterial                                        OFFSET(get<T>, {0x18, 8, 0, 0})
	DMember(bool)                                      bStretchToFit                                               OFFSET(get<bool>, {0x20, 1, 0, 0})
	DMember(float)                                     TexelSize                                                   OFFSET(get<float>, {0x24, 4, 0, 0})
	DMember(float)                                     XOffset                                                     OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(float)                                     YOffset                                                     OFFSET(get<float>, {0x2C, 4, 0, 0})
	DMember(float)                                     Rotation                                                    OFFSET(get<float>, {0x30, 4, 0, 0})
};

/// Struct /Script/Procedural.ProceduralContentVariationMap
/// Size: 0x0018 (0x000000 - 0x000018)
class FProceduralContentVariationMap : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(int32_t)                                   VariationIndex                                              OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	CMember(class UProceduralFloatDataMap*)            Map                                                         OFFSET(get<T>, {0x8, 8, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x10, 4, 0, 0})
};

/// Struct /Script/Procedural.ProceduralRemapFloatCurve
/// Size: 0x0088 (0x000000 - 0x000088)
class FProceduralRemapFloatCurve : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FRuntimeFloatCurve)                        RemapCurve                                                  OFFSET(getStruct<T>, {0x0, 136, 0, 0})
};

/// Struct /Script/Procedural.ProceduralRemapVectorCurve
/// Size: 0x0208 (0x000000 - 0x000208)
class FProceduralRemapVectorCurve : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 520;

public:
	SMember(FRuntimeCurveLinearColor)                  RemapCurve                                                  OFFSET(getStruct<T>, {0x0, 520, 0, 0})
};

/// Struct /Script/Procedural.ProceduralDebugSettings
/// Size: 0x000C (0x000000 - 0x00000C)
class FProceduralDebugSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(bool)                                      bShowDebugPointCloud                                        OFFSET(get<bool>, {0x0, 1, 0, 0})
	SMember(FColor)                                    DebugPointColor                                             OFFSET(getStruct<T>, {0x4, 4, 0, 0})
	DMember(float)                                     DebugCullingDistance                                        OFFSET(get<float>, {0x8, 4, 0, 0})
};

/// Struct /Script/Procedural.ProceduralGenerationStackElement
/// Size: 0x0010 (0x000000 - 0x000010)
class FProceduralGenerationStackElement : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x0, 1, 0, 0})
	CMember(class UProceduralGenerator*)               Generator                                                   OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/Procedural.ProceduralScatter2DPoint
/// Size: 0x0060 (0x000000 - 0x000060)
class FProceduralScatter2DPoint : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FVector)                                   Location                                                    OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	DMember(float)                                     Scale                                                       OFFSET(get<float>, {0x18, 4, 0, 0})
	CMember(class UProceduralScatterSettings*)         ScatterSettings                                             OFFSET(get<T>, {0x20, 8, 0, 0})
	SMember(FBox2D)                                    MaxAABB                                                     OFFSET(getStruct<T>, {0x28, 40, 0, 0})
	DMember(float)                                     CollisionRadius                                             OFFSET(get<float>, {0x50, 4, 0, 0})
	DMember(bool)                                      bBlocker                                                    OFFSET(get<bool>, {0x54, 1, 0, 0})
	DMember(int32_t)                                   RandomNumber                                                OFFSET(get<int32_t>, {0x58, 4, 0, 0})
};

/// Struct /Script/Procedural.ProceduralScatterSettingsElement
/// Size: 0x0018 (0x000000 - 0x000018)
class FProceduralScatterSettingsElement : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x0, 1, 0, 0})
	CMember(class UProceduralScatterSettings*)         ScatterSettings                                             OFFSET(get<T>, {0x8, 8, 0, 0})
	DMember(int32_t)                                   MaxPoints                                                   OFFSET(get<int32_t>, {0x10, 4, 0, 0})
};

/// Struct /Script/Procedural.ProceduralScatterDebugSettings
/// Size: 0x000C (0x000000 - 0x00000C)
class FProceduralScatterDebugSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(bool)                                      bShowDebugPlane                                             OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(bool)                                      bShowDebugTrace                                             OFFSET(get<bool>, {0x1, 1, 0, 0})
	DMember(bool)                                      bShowDebugFootprint                                         OFFSET(get<bool>, {0x2, 1, 0, 0})
	DMember(bool)                                      bShowDebugHitNormal                                         OFFSET(get<bool>, {0x3, 1, 0, 0})
	DMember(bool)                                      bShowDebugPoints                                            OFFSET(get<bool>, {0x4, 1, 0, 0})
	DMember(bool)                                      bShowDebugPivots                                            OFFSET(get<bool>, {0x5, 1, 0, 0})
	DMember(float)                                     DebugMaxCullingDistance                                     OFFSET(get<float>, {0x8, 4, 0, 0})
};

/// Struct /Script/Procedural.ProceduralScatterTileSettings
/// Size: 0x0014 (0x000000 - 0x000014)
class FProceduralScatterTileSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	DMember(int32_t)                                   NumUniqueTiles                                              OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(float)                                     TileSize                                                    OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     TileOverlapPercentage                                       OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     MinimumQuadTreeSize                                         OFFSET(get<float>, {0xC, 4, 0, 0})
	CMember(EProceduralScatterTileRandomGenerator)     RandomGenerator                                             OFFSET(get<T>, {0x10, 1, 0, 0})
};

/// Struct /Script/Procedural.SourcePointGenerator
/// Size: 0x0018 (0x000000 - 0x000018)
class FSourcePointGenerator : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/Procedural.ScatteredPointCloud
/// Size: 0x0010 (0x000000 - 0x000010)
class FScatteredPointCloud : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FProceduralScatterPoint>)           Points                                                      OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/Procedural.ProceduralScatterTargetSurface
/// Size: 0x0048 (0x000000 - 0x000048)
class FProceduralScatterTargetSurface : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	DMember(bool)                                      bAllowLandscape                                             OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(bool)                                      bAllowBSP                                                   OFFSET(get<bool>, {0x1, 1, 0, 0})
	DMember(bool)                                      bAllowStaticMesh                                            OFFSET(get<bool>, {0x2, 1, 0, 0})
	DMember(bool)                                      bAllowTranslucent                                           OFFSET(get<bool>, {0x3, 1, 0, 0})
	CMember(TArray<FName>)                             AllowedActorTags                                            OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(TArray<FName>)                             DisallowedActorTags                                         OFFSET(get<T>, {0x18, 16, 0, 0})
	CMember(TArray<FName>)                             AllowedComponentTags                                        OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(TArray<FName>)                             DisallowedComponentTags                                     OFFSET(get<T>, {0x38, 16, 0, 0})
};

/// Struct /Script/Procedural.ProceduralContentVariationsModifiers
/// Size: 0x0010 (0x000000 - 0x000010)
class FProceduralContentVariationsModifiers : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<class UProceduralContentVariationsWeightsModifier*>) Modifiers                                  OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/Procedural.ProceduralDensityModifiers
/// Size: 0x0010 (0x000000 - 0x000010)
class FProceduralDensityModifiers : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<class UProceduralDensityModifier*>) Modifiers                                                   OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/Procedural.ProceduralScaleModifiers
/// Size: 0x0020 (0x000000 - 0x000020)
class FProceduralScaleModifiers : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(bool)                                      bRandomScaleEnabled                                         OFFSET(get<bool>, {0x0, 1, 0, 0})
	SMember(FFloatInterval)                            RandomScale                                                 OFFSET(getStruct<T>, {0x4, 8, 0, 0})
	CMember(TArray<class UProceduralScaleModifier*>)   Modifiers                                                   OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/Procedural.ProceduralRotationModifiers
/// Size: 0x0010 (0x000000 - 0x000010)
class FProceduralRotationModifiers : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<class UProceduralRotationModifier*>) Modifiers                                                  OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Enum /Script/Procedural.EProceduralParameterModifierBlendMode
/// Size: 0x06
enum class EProceduralParameterModifierBlendMode : uint8_t
{
	EProceduralParameterModifierBlendMode__Min                                       = 0,
	EProceduralParameterModifierBlendMode__Max                                       = 1,
	EProceduralParameterModifierBlendMode__Additive                                  = 2,
	EProceduralParameterModifierBlendMode__Subtractive                               = 3,
	EProceduralParameterModifierBlendMode__Multiply                                  = 4,
	EProceduralParameterModifierBlendMode__Interpolate                               = 5
};

/// Enum /Script/Procedural.EProceduralRotationFormat
/// Size: 0x13
enum class EProceduralRotationFormat : uint8_t
{
	EProceduralRotationFormat__VectorXAxis                                           = 0,
	EProceduralRotationFormat__VectorXAxisNegative                                   = 1,
	EProceduralRotationFormat__VectorYAxis                                           = 2,
	EProceduralRotationFormat__VectorYAxisNegative                                   = 3,
	EProceduralRotationFormat__VectorZAxis                                           = 4,
	EProceduralRotationFormat__VectorZAxisNegative                                   = 5,
	EProceduralRotationFormat__Vector2DXAxis                                         = 6,
	EProceduralRotationFormat__Vector2DXAxisNegative                                 = 7,
	EProceduralRotationFormat__Vector2DYAxis                                         = 8,
	EProceduralRotationFormat__Vector2DYAxisNegative                                 = 9,
	EProceduralRotationFormat__Vector2DZAxis                                         = 10,
	EProceduralRotationFormat__Vector2DZAxisNegative                                 = 11,
	EProceduralRotationFormat__RangedRotator                                         = 12
};

/// Enum /Script/Procedural.EProceduralTextureColorChannel
/// Size: 0x04
enum class EProceduralTextureColorChannel : uint8_t
{
	EProceduralTextureColorChannel__Red                                              = 0,
	EProceduralTextureColorChannel__Green                                            = 1,
	EProceduralTextureColorChannel__Blue                                             = 2,
	EProceduralTextureColorChannel__Alpha                                            = 3
};

/// Enum /Script/Procedural.EProceduralScatterContentPivotMode
/// Size: 0x04
enum class EProceduralScatterContentPivotMode : uint8_t
{
	EProceduralScatterContentPivotMode__UsePivot                                     = 0,
	EProceduralScatterContentPivotMode__UseBoundingBoxCenter                         = 1,
	EProceduralScatterContentPivotMode__UseBoundingBoxBottomCenter                   = 2,
	EProceduralScatterContentPivotMode__UseFootprintBoundingBoxBottomCenter          = 3
};

/// Enum /Script/Procedural.EProceduralScatterTileRandomGenerator
/// Size: 0x02
enum class EProceduralScatterTileRandomGenerator : uint8_t
{
	EProceduralScatterTileRandomGenerator__PseudoRandom                              = 0,
	EProceduralScatterTileRandomGenerator__HaltonSequence                            = 1
};

/// Enum /Script/Procedural.EProceduralScatterMethod
/// Size: 0x03
enum class EProceduralScatterMethod : uint8_t
{
	EProceduralScatterMethod__Density                                                = 0,
	EProceduralScatterMethod__SourcePoints                                           = 1,
	EProceduralScatterMethod__Grid                                                   = 2
};

/// Enum /Script/Procedural.EProceduralScatterStaticMeshMode
/// Size: 0x02
enum class EProceduralScatterStaticMeshMode : uint8_t
{
	EProceduralScatterStaticMeshMode__FromStaticMesh                                 = 0,
	EProceduralScatterStaticMeshMode__FromActor                                      = 1
};

