
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

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
/// Size: 0x14
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
	EProceduralRotationFormat__RangedRotator                                         = 12,
	EProceduralRotationFormat__EProceduralRotationFormat_MAX                         = 13
};

/// Enum /Script/Procedural.EProceduralTextureColorChannel
/// Size: 0x05
enum class EProceduralTextureColorChannel : uint8_t
{
	EProceduralTextureColorChannel__Red                                              = 0,
	EProceduralTextureColorChannel__Green                                            = 1,
	EProceduralTextureColorChannel__Blue                                             = 2,
	EProceduralTextureColorChannel__Alpha                                            = 3,
	EProceduralTextureColorChannel__EProceduralTextureColorChannel_MAX               = 4
};

/// Enum /Script/Procedural.EProceduralScatterContentPivotMode
/// Size: 0x05
enum class EProceduralScatterContentPivotMode : uint8_t
{
	EProceduralScatterContentPivotMode__UsePivot                                     = 0,
	EProceduralScatterContentPivotMode__UseBoundingBoxCenter                         = 1,
	EProceduralScatterContentPivotMode__UseBoundingBoxBottomCenter                   = 2,
	EProceduralScatterContentPivotMode__UseFootprintBoundingBoxBottomCenter          = 3,
	EProceduralScatterContentPivotMode__EProceduralScatterContentPivotMode_MAX       = 4
};

/// Enum /Script/Procedural.EProceduralScatterTileRandomGenerator
/// Size: 0x03
enum class EProceduralScatterTileRandomGenerator : uint8_t
{
	EProceduralScatterTileRandomGenerator__PseudoRandom                              = 0,
	EProceduralScatterTileRandomGenerator__HaltonSequence                            = 1,
	EProceduralScatterTileRandomGenerator__EProceduralScatterTileRandomGenerator_MAX = 2
};

/// Enum /Script/Procedural.EProceduralScatterMethod
/// Size: 0x04
enum class EProceduralScatterMethod : uint8_t
{
	EProceduralScatterMethod__Density                                                = 0,
	EProceduralScatterMethod__SourcePoints                                           = 1,
	EProceduralScatterMethod__Grid                                                   = 2,
	EProceduralScatterMethod__EProceduralScatterMethod_MAX                           = 3
};

/// Enum /Script/Procedural.EProceduralScatterStaticMeshMode
/// Size: 0x03
enum class EProceduralScatterStaticMeshMode : uint8_t
{
	EProceduralScatterStaticMeshMode__FromStaticMesh                                 = 0,
	EProceduralScatterStaticMeshMode__FromActor                                      = 1,
	EProceduralScatterStaticMeshMode__EProceduralScatterStaticMeshMode_MAX           = 2
};

/// Class /Script/Procedural.ProceduralParameterModifier
/// Size: 0x0010 (0x000028 - 0x000038)
class UProceduralParameterModifier : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	bool                                               bEnabled;                                                   // 0x0028   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0029   (0x0003)  MISSED
	float                                              Contribution;                                               // 0x002C   (0x0004)  
	EProceduralParameterModifierBlendMode              BlendMode;                                                  // 0x0030   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x0031   (0x0007)  MISSED


	/// Functions
	// Function /Script/Procedural.ProceduralParameterModifier.GetContribution
	// float GetContribution();                                                                                              // [0xb9a2370] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/Procedural.ProceduralDensityModifier
/// Size: 0x0000 (0x000038 - 0x000038)
class UProceduralDensityModifier : public UProceduralParameterModifier
{ 
public:
};

/// Class /Script/Procedural.ProceduralDataMap
/// Size: 0x0008 (0x000028 - 0x000030)
class UProceduralDataMap : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	bool                                               bUseRemapCurve;                                             // 0x0028   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0029   (0x0007)  MISSED
};

/// Struct /Script/Procedural.ProceduralRemapFloatCurve
/// Size: 0x0088 (0x000000 - 0x000088)
struct FProceduralRemapFloatCurve
{ 
	FRuntimeFloatCurve                                 RemapCurve;                                                 // 0x0000   (0x0088)  
};

/// Class /Script/Procedural.ProceduralFloatDataMap
/// Size: 0x0088 (0x000030 - 0x0000B8)
class UProceduralFloatDataMap : public UProceduralDataMap
{ 
public:
	FProceduralRemapFloatCurve                         RemapCurve;                                                 // 0x0030   (0x0088)  
};

/// Class /Script/Procedural.ProceduralLandscapeLayerMap
/// Size: 0x0008 (0x0000B8 - 0x0000C0)
class UProceduralLandscapeLayerMap : public UProceduralFloatDataMap
{ 
public:
	FName                                              LandscapeLayerName;                                         // 0x00B8   (0x0004)  
	FName                                              LandscapeEditLayerName;                                     // 0x00BC   (0x0004)  
};

/// Class /Script/Procedural.ProceduralRotationModifier
/// Size: 0x0000 (0x000038 - 0x000038)
class UProceduralRotationModifier : public UProceduralParameterModifier
{ 
public:
};

/// Class /Script/Procedural.ProceduralScaleModifier
/// Size: 0x0000 (0x000038 - 0x000038)
class UProceduralScaleModifier : public UProceduralParameterModifier
{ 
public:
};

/// Struct /Script/Procedural.ProceduralTextureSource
/// Size: 0x0038 (0x000000 - 0x000038)
struct FProceduralTextureSource
{ 
	bool                                               bUseRenderTarget;                                           // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	class UTexture2D*                                  Texture;                                                    // 0x0008   (0x0008)  
	class UTextureRenderTarget2D*                      RenderTarget;                                               // 0x0010   (0x0008)  
	class UMaterialInterface*                          RenderTargetMaterial;                                       // 0x0018   (0x0008)  
	bool                                               bStretchToFit;                                              // 0x0020   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0021   (0x0003)  MISSED
	float                                              TexelSize;                                                  // 0x0024   (0x0004)  
	float                                              XOffset;                                                    // 0x0028   (0x0004)  
	float                                              YOffset;                                                    // 0x002C   (0x0004)  
	float                                              Rotation;                                                   // 0x0030   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0034   (0x0004)  MISSED
};

/// Class /Script/Procedural.ProceduralTextureFloatMap
/// Size: 0x0040 (0x0000B8 - 0x0000F8)
class UProceduralTextureFloatMap : public UProceduralFloatDataMap
{ 
public:
	EProceduralTextureColorChannel                     Channel;                                                    // 0x00B8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x00B9   (0x0007)  MISSED
	FProceduralTextureSource                           Source;                                                     // 0x00C0   (0x0038)  
};

/// Struct /Script/Procedural.ProceduralRemapVectorCurve
/// Size: 0x0208 (0x000000 - 0x000208)
struct FProceduralRemapVectorCurve
{ 
	FRuntimeCurveLinearColor                           RemapCurve;                                                 // 0x0000   (0x0208)  
};

/// Class /Script/Procedural.ProceduralVectorDataMap
/// Size: 0x0208 (0x000030 - 0x000238)
class UProceduralVectorDataMap : public UProceduralDataMap
{ 
public:
	FProceduralRemapVectorCurve                        RemapCurve;                                                 // 0x0030   (0x0208)  
};

/// Class /Script/Procedural.ProceduralTextureVectorMap
/// Size: 0x0038 (0x000238 - 0x000270)
class UProceduralTextureVectorMap : public UProceduralVectorDataMap
{ 
public:
	FProceduralTextureSource                           Source;                                                     // 0x0238   (0x0038)  
};

/// Class /Script/Procedural.ProceduralVertexColorMap
/// Size: 0x0008 (0x0000B8 - 0x0000C0)
class UProceduralVertexColorMap : public UProceduralFloatDataMap
{ 
public:
	EProceduralTextureColorChannel                     Channel;                                                    // 0x00B8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x00B9   (0x0007)  MISSED
};

/// Class /Script/Procedural.HISMBuilderSettings
/// Size: 0x01E0 (0x000028 - 0x000208)
class UHISMBuilderSettings : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	SDK_UNDEFINED(1,15338) /* TEnumAsByte<EComponentMobility> */ __um(Mobility);                                   // 0x0028   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0029   (0x0003)  MISSED
	FInt32Interval                                     CullDistance;                                               // 0x002C   (0x0008)  
	float                                              LODDistanceScale;                                           // 0x0034   (0x0004)  
	bool                                               bCastShadow : 1;                                            // 0x0038:0 (0x0001)  
	bool                                               bAffectDynamicIndirectLighting : 1;                         // 0x0038:1 (0x0001)  
	bool                                               bAffectDistanceFieldLighting : 1;                           // 0x0038:2 (0x0001)  
	bool                                               bCastDynamicShadow : 1;                                     // 0x0038:3 (0x0001)  
	bool                                               bCastStaticShadow : 1;                                      // 0x0038:4 (0x0001)  
	bool                                               bCastShadowAsTwoSided : 1;                                  // 0x0038:5 (0x0001)  
	bool                                               bReceivesDecals : 1;                                        // 0x0038:6 (0x0001)  
	bool                                               bOverrideLightMapRes : 1;                                   // 0x0038:7 (0x0001)  
	unsigned char                                      UnknownData02_4[0x3];                                       // 0x0039   (0x0003)  MISSED
	int32_t                                            OverriddenLightMapRes;                                      // 0x003C   (0x0004)  
	ELightmapType                                      LightmapType;                                               // 0x0040   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x0041   (0x0003)  MISSED
	bool                                               bUseAsOccluder : 1;                                         // 0x0044:0 (0x0001)  
	unsigned char                                      UnknownData04_4[0x3];                                       // 0x0045   (0x0003)  MISSED
	FBodyInstance                                      BodyInstance;                                               // 0x0048   (0x0190)  
	SDK_UNDEFINED(1,15339) /* TEnumAsByte<EHasCustomNavigableGeometry> */ __um(CustomNavigableGeometry);           // 0x01D8   (0x0001)  
	FLightingChannels                                  LightingChannels;                                           // 0x01D9   (0x0001)  
	unsigned char                                      UnknownData05_5[0x2];                                       // 0x01DA   (0x0002)  MISSED
	bool                                               bRenderCustomDepth : 1;                                     // 0x01DC:0 (0x0001)  
	unsigned char                                      UnknownData06_4[0x3];                                       // 0x01DD   (0x0003)  MISSED
	ERendererStencilMask                               CustomDepthStencilWriteMask;                                // 0x01E0   (0x0001)  
	unsigned char                                      UnknownData07_5[0x3];                                       // 0x01E1   (0x0003)  MISSED
	int32_t                                            CustomDepthStencilValue;                                    // 0x01E4   (0x0004)  
	int32_t                                            TranslucencySortPriority;                                   // 0x01E8   (0x0004)  
	bool                                               bEnableDensityScaling : 1;                                  // 0x01EC:0 (0x0001)  
	unsigned char                                      UnknownData08_4[0x3];                                       // 0x01ED   (0x0003)  MISSED
	TArray<class URuntimeVirtualTexture*>              RuntimeVirtualTextures;                                     // 0x01F0   (0x0010)  
	int32_t                                            VirtualTextureCullMips;                                     // 0x0200   (0x0004)  
	ERuntimeVirtualTextureMainPassType                 VirtualTextureRenderPassType;                               // 0x0204   (0x0001)  
	unsigned char                                      UnknownData09_6[0x3];                                       // 0x0205   (0x0003)  MISSED


	/// Functions
	// Function /Script/Procedural.HISMBuilderSettings.SetOverriddenLightMapRes
	// void SetOverriddenLightMapRes(int32_t Value);                                                                         // [0xb9a28f8] Final|Native|Public|BlueprintCallable 
	// Function /Script/Procedural.HISMBuilderSettings.GetOverriddenLightMapRes
	// int32_t GetOverriddenLightMapRes();                                                                                   // [0x3888b24] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/Procedural.ProceduralContentVariationsWeightsModifier
/// Size: 0x0000 (0x000038 - 0x000038)
class UProceduralContentVariationsWeightsModifier : public UProceduralParameterModifier
{ 
public:
};

/// Struct /Script/Procedural.ProceduralContentVariationMap
/// Size: 0x0018 (0x000000 - 0x000018)
struct FProceduralContentVariationMap
{ 
	int32_t                                            VariationIndex;                                             // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	class UProceduralFloatDataMap*                     Map;                                                        // 0x0008   (0x0008)  
	float                                              Weight;                                                     // 0x0010   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Class /Script/Procedural.ProceduralContentVariationsWeightsMapModifier
/// Size: 0x0010 (0x000038 - 0x000048)
class UProceduralContentVariationsWeightsMapModifier : public UProceduralContentVariationsWeightsModifier
{ 
public:
	TArray<FProceduralContentVariationMap>             VariationsMaps;                                             // 0x0038   (0x0010)  
};

/// Struct /Script/Procedural.ProceduralDebugSettings
/// Size: 0x000C (0x000000 - 0x00000C)
struct FProceduralDebugSettings
{ 
	bool                                               bShowDebugPointCloud;                                       // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	FColor                                             DebugPointColor;                                            // 0x0004   (0x0004)  
	float                                              DebugCullingDistance;                                       // 0x0008   (0x0004)  
};

/// Class /Script/Procedural.ProceduralGenerator
/// Size: 0x0010 (0x000028 - 0x000038)
class UProceduralGenerator : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	FProceduralDebugSettings                           DebugSettings;                                              // 0x0028   (0x000C)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0034   (0x0004)  MISSED
};

/// Class /Script/Procedural.ProceduralCustomGenerator
/// Size: 0x0010 (0x000038 - 0x000048)
class UProceduralCustomGenerator : public UProceduralGenerator
{ 
public:
	class UClass*                                      GeneratorContextClass;                                      // 0x0038   (0x0008)  
	class UProceduralGeneratorContext*                 GeneratorContext;                                           // 0x0040   (0x0008)  
};

/// Class /Script/Procedural.ProceduralDensityMapModifier
/// Size: 0x0008 (0x000038 - 0x000040)
class UProceduralDensityMapModifier : public UProceduralDensityModifier
{ 
public:
	class UProceduralFloatDataMap*                     Map;                                                        // 0x0038   (0x0008)  
};

/// Class /Script/Procedural.ProceduralGenerationBlockingVolume
/// Size: 0x0010 (0x0002C8 - 0x0002D8)
class AProceduralGenerationBlockingVolume : public AVolume
{ 
public:
	TArray<class AProceduralGenerationVolume*>         BlockedVolumes;                                             // 0x02C8   (0x0010)  
};

/// Class /Script/Procedural.ProceduralGenerationComponent
/// Size: 0x0030 (0x0000A0 - 0x0000D0)
class UProceduralGenerationComponent : public UActorComponent
{ 
public:
	class UProceduralGenerator*                        Generator;                                                  // 0x00A0   (0x0008)  
	bool                                               bShowDebugVisualization;                                    // 0x00A8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00A9   (0x0003)  MISSED
	FGuid                                              ProceduralGenerationGuid;                                   // 0x00AC   (0x0010)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x00BC   (0x0004)  MISSED
	class AVolume*                                     GenerationVolume;                                           // 0x00C0   (0x0008)  
	class UProceduralGenerationContext*                GenerationContext;                                          // 0x00C8   (0x0008)  
};

/// Class /Script/Procedural.ProceduralGenerationContext
/// Size: 0x00C8 (0x000028 - 0x0000F0)
class UProceduralGenerationContext : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	class UProceduralGeneratorContext*                 GeneratorContext;                                           // 0x0028   (0x0008)  
	TArray<class UProceduralGeneratorContext*>         GeneratedContexts;                                          // 0x0030   (0x0010)  
	TArray<class UProceduralGeneratorContext*>         RegisteredContexts;                                         // 0x0040   (0x0010)  
	SDK_UNDEFINED(80,15340) /* TMap<FGuid, UProceduralGeneratorContext*> */ __um(GeneratorContexts);               // 0x0050   (0x0050)  
	unsigned char                                      UnknownData01_6[0x50];                                      // 0x00A0   (0x0050)  MISSED


	/// Functions
	// Function /Script/Procedural.ProceduralGenerationContext.GetGenerationVolume
	// class AVolume* GetGenerationVolume();                                                                                 // [0xb9a252c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Procedural.ProceduralGenerationContext.GetGenerationComponent
	// class UProceduralGenerationComponent* GetGenerationComponent();                                                       // [0xb9a2508] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/Procedural.ProceduralGenerationVolume
/// Size: 0x0008 (0x0002C8 - 0x0002D0)
class AProceduralGenerationVolume : public AVolume
{ 
public:
	class UProceduralGenerationComponent*              ProceduralComponent;                                        // 0x02C8   (0x0008)  


	/// Functions
	// Function /Script/Procedural.ProceduralGenerationVolume.Generate
	// void Generate();                                                                                                      // [0xb9a2330] Final|Native|Public|BlueprintCallable 
	// Function /Script/Procedural.ProceduralGenerationVolume.ClearGeneratedContent
	// void ClearGeneratedContent();                                                                                         // [0xb9a22ec] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/Procedural.ProceduralGeneratorContext
/// Size: 0x0030 (0x000028 - 0x000058)
class UProceduralGeneratorContext : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	class UProceduralGenerator*                        Generator;                                                  // 0x0028   (0x0008)  
	class UProceduralGenerationContext*                GenerationContext;                                          // 0x0030   (0x0008)  
	class UProceduralGeneratorContext*                 OwnerContext;                                               // 0x0038   (0x0008)  
	TArray<class UObject*>                             GeneratedObjects;                                           // 0x0040   (0x0010)  
	class UProceduralPointCloud*                       ExportedPointCloud;                                         // 0x0050   (0x0008)  


	/// Functions
	// Function /Script/Procedural.ProceduralGeneratorContext.OnGenerate
	// bool OnGenerate();                                                                                                    // [0x1aaf4c4] Native|Event|Public|BlueprintEvent 
	// Function /Script/Procedural.ProceduralGeneratorContext.OnDrawVisualization
	// void OnDrawVisualization();                                                                                           // [0x18a39e4] Event|Public|BlueprintEvent|Const 
	// Function /Script/Procedural.ProceduralGeneratorContext.OnClearGeneratedContent
	// void OnClearGeneratedContent();                                                                                       // [0x15d82c4] Native|Event|Public|BlueprintEvent 
	// Function /Script/Procedural.ProceduralGeneratorContext.GetOrCreateGeneratorContext
	// void GetOrCreateGeneratorContext(class UProceduralGenerator* Generator, class UProceduralGeneratorContext*& Context); // [0xb9a2550] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Procedural.ProceduralGeneratorContext.GetGeneratedContexts
	// TArray<UProceduralGeneratorContext*> GetGeneratedContexts();                                                          // [0xb9a2390] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Procedural.ProceduralGeneratorContext.Generate
	// bool Generate();                                                                                                      // [0xb9a234c] Final|Native|Public|BlueprintCallable 
	// Function /Script/Procedural.ProceduralGeneratorContext.ClearGeneratedContent
	// void ClearGeneratedContent();                                                                                         // [0xb9a2308] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/Procedural.ProceduralGenerationStackElement
/// Size: 0x0010 (0x000000 - 0x000010)
struct FProceduralGenerationStackElement
{ 
	bool                                               bEnabled;                                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	class UProceduralGenerator*                        Generator;                                                  // 0x0008   (0x0008)  
};

/// Class /Script/Procedural.ProceduralGeneratorStack
/// Size: 0x0010 (0x000038 - 0x000048)
class UProceduralGeneratorStack : public UProceduralGenerator
{ 
public:
	TArray<FProceduralGenerationStackElement>          Generators;                                                 // 0x0038   (0x0010)  
};

/// Class /Script/Procedural.ProceduralGeneratorStackContext
/// Size: 0x0000 (0x000058 - 0x000058)
class UProceduralGeneratorStackContext : public UProceduralGeneratorContext
{ 
public:
};

/// Struct /Script/Procedural.ProceduralPointCloudPoint
/// Size: 0x00B0 (0x000000 - 0x0000B0)
struct FProceduralPointCloudPoint
{ 
	FTransform                                         Transform;                                                  // 0x0000   (0x0060)  
	FVector                                            SurfaceNormal;                                              // 0x0060   (0x0018)  
	class UObject*                                     SurfaceObject;                                              // 0x0078   (0x0008)  
	class UObject*                                     Object;                                                     // 0x0080   (0x0008)  
	int32_t                                            ObjectVariation;                                            // 0x0088   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x008C   (0x0004)  MISSED
	TArray<FName>                                      Tags;                                                       // 0x0090   (0x0010)  
	float                                              CollisionRadius;                                            // 0x00A0   (0x0004)  
	float                                              SourcePointGeneratorIndex;                                  // 0x00A4   (0x0004)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x00A8   (0x0008)  MISSED
};

/// Class /Script/Procedural.ProceduralPointCloud
/// Size: 0x0010 (0x000028 - 0x000038)
class UProceduralPointCloud : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	TArray<FProceduralPointCloudPoint>                 Points;                                                     // 0x0028   (0x0010)  


	/// Functions
	// Function /Script/Procedural.ProceduralPointCloud.GetPointsByTag
	// TArray<FProceduralPointCloudPoint> GetPointsByTag(FName InTag);                                                       // [0xb9a2620] Final|Native|Public|BlueprintCallable 
	// Function /Script/Procedural.ProceduralPointCloud.Empty
	// void Empty();                                                                                                         // [0xb9a231c] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/Procedural.ProceduralRotationMapModifier
/// Size: 0x0028 (0x000038 - 0x000060)
class UProceduralRotationMapModifier : public UProceduralRotationModifier
{ 
public:
	class UProceduralVectorDataMap*                    Map;                                                        // 0x0038   (0x0008)  
	EProceduralRotationFormat                          RotationFormat;                                             // 0x0040   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0041   (0x0003)  MISSED
	FFloatInterval                                     Roll;                                                       // 0x0044   (0x0008)  
	FFloatInterval                                     pitch;                                                      // 0x004C   (0x0008)  
	FFloatInterval                                     Yaw;                                                        // 0x0054   (0x0008)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x005C   (0x0004)  MISSED


	/// Functions
	// Function /Script/Procedural.ProceduralRotationMapModifier.SetYawMin
	// void SetYawMin(float InValue);                                                                                        // [0xb9a2d54] Final|Native|Public|BlueprintCallable 
	// Function /Script/Procedural.ProceduralRotationMapModifier.SetYawMax
	// void SetYawMax(float InValue);                                                                                        // [0xb9a2cc8] Final|Native|Public|BlueprintCallable 
	// Function /Script/Procedural.ProceduralRotationMapModifier.SetRollMin
	// void SetRollMin(float InValue);                                                                                       // [0xb9a2e6c] Final|Native|Public|BlueprintCallable 
	// Function /Script/Procedural.ProceduralRotationMapModifier.SetRollMax
	// void SetRollMax(float InValue);                                                                                       // [0xb9a2de0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Procedural.ProceduralRotationMapModifier.SetPitchMin
	// void SetPitchMin(float InValue);                                                                                      // [0xb9a2a0c] Final|Native|Public|BlueprintCallable 
	// Function /Script/Procedural.ProceduralRotationMapModifier.SetPitchMax
	// void SetPitchMax(float InValue);                                                                                      // [0xb9a2980] Final|Native|Public|BlueprintCallable 
	// Function /Script/Procedural.ProceduralRotationMapModifier.GetYawMin
	// float GetYawMin();                                                                                                    // [0x69877c4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Procedural.ProceduralRotationMapModifier.GetYawMax
	// float GetYawMax();                                                                                                    // [0x6987a9c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Procedural.ProceduralRotationMapModifier.GetRollMin
	// float GetRollMin();                                                                                                   // [0x3b2ebc4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Procedural.ProceduralRotationMapModifier.GetRollMax
	// float GetRollMax();                                                                                                   // [0x3ead168] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Procedural.ProceduralRotationMapModifier.GetPitchMin
	// float GetPitchMin();                                                                                                  // [0x3eacefc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Procedural.ProceduralRotationMapModifier.GetPitchMax
	// float GetPitchMax();                                                                                                  // [0x2fa4a08] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/Procedural.ProceduralRotationNoiseModifier
/// Size: 0x0028 (0x000038 - 0x000060)
class UProceduralRotationNoiseModifier : public UProceduralRotationModifier
{ 
public:
	bool                                               bRandomRoll : 1;                                            // 0x0038:0 (0x0001)  
	unsigned char                                      UnknownData00_4[0x3];                                       // 0x0039   (0x0003)  MISSED
	FFloatInterval                                     RandomRoll;                                                 // 0x003C   (0x0008)  
	bool                                               bRandomPitch : 1;                                           // 0x0044:0 (0x0001)  
	unsigned char                                      UnknownData01_4[0x3];                                       // 0x0045   (0x0003)  MISSED
	FFloatInterval                                     RandomPitch;                                                // 0x0048   (0x0008)  
	bool                                               bRandomYaw : 1;                                             // 0x0050:0 (0x0001)  
	unsigned char                                      UnknownData02_4[0x3];                                       // 0x0051   (0x0003)  MISSED
	FFloatInterval                                     RandomYaw;                                                  // 0x0054   (0x0008)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x005C   (0x0004)  MISSED


	/// Functions
	// Function /Script/Procedural.ProceduralRotationNoiseModifier.SetRandomYawMin
	// void SetRandomYawMin(float InValue);                                                                                  // [0xb9a2d54] Final|Native|Public|BlueprintCallable 
	// Function /Script/Procedural.ProceduralRotationNoiseModifier.SetRandomYawMax
	// void SetRandomYawMax(float InValue);                                                                                  // [0xb9a2cc8] Final|Native|Public|BlueprintCallable 
	// Function /Script/Procedural.ProceduralRotationNoiseModifier.SetRandomRollMin
	// void SetRandomRollMin(float InValue);                                                                                 // [0xb9a2c3c] Final|Native|Public|BlueprintCallable 
	// Function /Script/Procedural.ProceduralRotationNoiseModifier.SetRandomRollMax
	// void SetRandomRollMax(float InValue);                                                                                 // [0xb9a2bb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Procedural.ProceduralRotationNoiseModifier.SetRandomPitchMin
	// void SetRandomPitchMin(float InValue);                                                                                // [0xb9a2b24] Final|Native|Public|BlueprintCallable 
	// Function /Script/Procedural.ProceduralRotationNoiseModifier.SetRandomPitchMax
	// void SetRandomPitchMax(float InValue);                                                                                // [0xb9a2a98] Final|Native|Public|BlueprintCallable 
	// Function /Script/Procedural.ProceduralRotationNoiseModifier.GetRandomYawMin
	// float GetRandomYawMin();                                                                                              // [0x69877c4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Procedural.ProceduralRotationNoiseModifier.GetRandomYawMax
	// float GetRandomYawMax();                                                                                              // [0x6987a9c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Procedural.ProceduralRotationNoiseModifier.GetRandomRollMin
	// float GetRandomRollMin();                                                                                             // [0x3888b24] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Procedural.ProceduralRotationNoiseModifier.GetRandomRollMax
	// float GetRandomRollMax();                                                                                             // [0x3932b2c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Procedural.ProceduralRotationNoiseModifier.GetRandomPitchMin
	// float GetRandomPitchMin();                                                                                            // [0x3ead168] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Procedural.ProceduralRotationNoiseModifier.GetRandomPitchMax
	// float GetRandomPitchMax();                                                                                            // [0x3eacefc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/Procedural.ProceduralScaleMapModifier
/// Size: 0x0018 (0x000038 - 0x000050)
class UProceduralScaleMapModifier : public UProceduralScaleModifier
{ 
public:
	bool                                               bRemapScale;                                                // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0039   (0x0003)  MISSED
	FFloatInterval                                     RemapScale;                                                 // 0x003C   (0x0008)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0044   (0x0004)  MISSED
	class UProceduralFloatDataMap*                     Map;                                                        // 0x0048   (0x0008)  


	/// Functions
	// Function /Script/Procedural.ProceduralScaleMapModifier.SetRemapScaleMin
	// void SetRemapScaleMin(float InValue);                                                                                 // [0xb9a2c3c] Final|Native|Public|BlueprintCallable 
	// Function /Script/Procedural.ProceduralScaleMapModifier.SetRemapScaleMax
	// void SetRemapScaleMax(float InValue);                                                                                 // [0xb9a2bb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Procedural.ProceduralScaleMapModifier.GetRemapScaleMin
	// float GetRemapScaleMin();                                                                                             // [0x3888b24] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Procedural.ProceduralScaleMapModifier.GetRemapScaleMax
	// float GetRemapScaleMax();                                                                                             // [0x3932b2c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/Procedural.ProceduralScaleNoiseModifier
/// Size: 0x0008 (0x000038 - 0x000040)
class UProceduralScaleNoiseModifier : public UProceduralScaleModifier
{ 
public:
	FFloatInterval                                     Scale;                                                      // 0x0038   (0x0008)  


	/// Functions
	// Function /Script/Procedural.ProceduralScaleNoiseModifier.SetScaleMin
	// void SetScaleMin(float InValue);                                                                                      // [0xb9a2f84] Final|Native|Public|BlueprintCallable 
	// Function /Script/Procedural.ProceduralScaleNoiseModifier.SetScaleMax
	// void SetScaleMax(float InValue);                                                                                      // [0xb9a2ef8] Final|Native|Public|BlueprintCallable 
	// Function /Script/Procedural.ProceduralScaleNoiseModifier.GetScaleMin
	// float GetScaleMin();                                                                                                  // [0x69876fc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Procedural.ProceduralScaleNoiseModifier.GetScaleMax
	// float GetScaleMax();                                                                                                  // [0x3888b24] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/Procedural.ProceduralScatterContentVariation
/// Size: 0x00C0 (0x000028 - 0x0000E8)
class UProceduralScatterContentVariation : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	float                                              Weight;                                                     // 0x0028   (0x0004)  
	EProceduralScatterContentPivotMode                 PivotMode;                                                  // 0x002C   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x002D   (0x0003)  MISSED
	FVector                                            AdditionalPivotOffset;                                      // 0x0030   (0x0018)  
	float                                              FootprintBoundingBoxRatio;                                  // 0x0048   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x004C   (0x0004)  MISSED
	TArray<FName>                                      SetActorTags;                                               // 0x0050   (0x0010)  
	unsigned char                                      UnknownData03_6[0x88];                                      // 0x0060   (0x0088)  MISSED
};

/// Class /Script/Procedural.ProceduralScatterActorContentVariation
/// Size: 0x0008 (0x0000E8 - 0x0000F0)
class UProceduralScatterActorContentVariation : public UProceduralScatterContentVariation
{ 
public:
	class UClass*                                      ActorClass;                                                 // 0x00E8   (0x0008)  
};

/// Class /Script/Procedural.ProceduralScatterContentSettings
/// Size: 0x0040 (0x000028 - 0x000068)
class UProceduralScatterContentSettings : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	TArray<FName>                                      SetActorTags;                                               // 0x0028   (0x0010)  
	TArray<class UProceduralScatterContentVariation*>  Variations;                                                 // 0x0038   (0x0010)  
	unsigned char                                      UnknownData01_6[0x20];                                      // 0x0048   (0x0020)  MISSED
};

/// Class /Script/Procedural.ProceduralScatterActorContentSettings
/// Size: 0x0008 (0x000068 - 0x000070)
class UProceduralScatterActorContentSettings : public UProceduralScatterContentSettings
{ 
public:
	bool                                               bHideFromWorldOutliner;                                     // 0x0068   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0069   (0x0007)  MISSED
};

/// Struct /Script/Procedural.ProceduralScatterTileSettings
/// Size: 0x0014 (0x000000 - 0x000014)
struct FProceduralScatterTileSettings
{ 
	int32_t                                            NumUniqueTiles;                                             // 0x0000   (0x0004)  
	float                                              TileSize;                                                   // 0x0004   (0x0004)  
	float                                              TileOverlapPercentage;                                      // 0x0008   (0x0004)  
	float                                              MinimumQuadTreeSize;                                        // 0x000C   (0x0004)  
	EProceduralScatterTileRandomGenerator              RandomGenerator;                                            // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0011   (0x0003)  MISSED
};

/// Struct /Script/Procedural.ProceduralScatterSettingsElement
/// Size: 0x0018 (0x000000 - 0x000018)
struct FProceduralScatterSettingsElement
{ 
	bool                                               bEnabled;                                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	class UProceduralScatterSettings*                  ScatterSettings;                                            // 0x0008   (0x0008)  
	int32_t                                            MaxPoints;                                                  // 0x0010   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/Procedural.ProceduralScatterDebugSettings
/// Size: 0x000C (0x000000 - 0x00000C)
struct FProceduralScatterDebugSettings
{ 
	bool                                               bShowDebugPlane;                                            // 0x0000   (0x0001)  
	bool                                               bShowDebugTrace;                                            // 0x0001   (0x0001)  
	bool                                               bShowDebugFootprint;                                        // 0x0002   (0x0001)  
	bool                                               bShowDebugHitNormal;                                        // 0x0003   (0x0001)  
	bool                                               bShowDebugPoints;                                           // 0x0004   (0x0001)  
	bool                                               bShowDebugPivots;                                           // 0x0005   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0006   (0x0002)  MISSED
	float                                              DebugMaxCullingDistance;                                    // 0x0008   (0x0004)  
};

/// Class /Script/Procedural.ProceduralScatterGenerator
/// Size: 0x00A0 (0x000038 - 0x0000D8)
class UProceduralScatterGenerator : public UProceduralGenerator
{ 
public:
	EProceduralScatterMethod                           ScatterMethod;                                              // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0039   (0x0003)  MISSED
	FProceduralScatterTileSettings                     TileSettings;                                               // 0x003C   (0x0014)  
	int32_t                                            RandomSeed;                                                 // 0x0050   (0x0004)  
	int32_t                                            NumUniqueSourcePointPatterns;                               // 0x0054   (0x0004)  
	FVector2D                                          GridSize;                                                   // 0x0058   (0x0010)  
	FVector2D                                          GridJitter;                                                 // 0x0068   (0x0010)  
	float                                              GridRotation;                                               // 0x0078   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x007C   (0x0004)  MISSED
	FVector2D                                          GridOffset;                                                 // 0x0080   (0x0010)  
	TArray<FProceduralScatterSettingsElement>          ScatterSettingsElements;                                    // 0x0090   (0x0010)  
	TArray<FName>                                      BlockingActorTags;                                          // 0x00A0   (0x0010)  
	bool                                               bAllScatterPointsBlocking;                                  // 0x00B0   (0x0001)  
	bool                                               bLocalDistribution;                                         // 0x00B1   (0x0001)  
	unsigned char                                      UnknownData02_5[0x6];                                       // 0x00B2   (0x0006)  MISSED
	TArray<FName>                                      BlockingScatterPointTags;                                   // 0x00B8   (0x0010)  
	FProceduralScatterDebugSettings                    ScatterDebugSettings;                                       // 0x00C8   (0x000C)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x00D4   (0x0004)  MISSED
};

/// Struct /Script/Procedural.ProceduralHitPoint
/// Size: 0x0040 (0x000000 - 0x000040)
struct FProceduralHitPoint
{ 
	bool                                               bIsTraceDone;                                               // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	FVector                                            Position;                                                   // 0x0008   (0x0018)  
	FVector                                            Normal;                                                     // 0x0020   (0x0018)  
	SDK_UNDEFINED(8,15341) /* TWeakObjectPtr<UPrimitiveComponent*> */ __um(Component);                             // 0x0038   (0x0008)  
};

/// Struct /Script/Procedural.ProceduralScatterPoint
/// Size: 0x00A0 (0x000000 - 0x0000A0)
struct FProceduralScatterPoint
{ 
	FVector                                            Location;                                                   // 0x0000   (0x0018)  
	FRotator                                           Rotation;                                                   // 0x0018   (0x0018)  
	float                                              Scale;                                                      // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0034   (0x0004)  MISSED
	class UProceduralScatterSettings*                  ScatterSettings;                                            // 0x0038   (0x0008)  
	int32_t                                            VariationIdx;                                               // 0x0040   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0044   (0x0004)  MISSED
	FVector                                            GenerationLocation;                                         // 0x0048   (0x0018)  
	FProceduralHitPoint                                HitPoint;                                                   // 0x0060   (0x0040)  
};

/// Struct /Script/Procedural.ScatteredPointCloud
/// Size: 0x0010 (0x000000 - 0x000010)
struct FScatteredPointCloud
{ 
	TArray<FProceduralScatterPoint>                    Points;                                                     // 0x0000   (0x0010)  
};

/// Struct /Script/Procedural.SourcePointGenerator
/// Size: 0x0018 (0x000000 - 0x000018)
struct FSourcePointGenerator
{ 
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x0000   (0x0018)  MISSED
};

/// Struct /Script/Procedural.ProceduralScatterProjectionPoint
/// Size: 0x00C0 (0x000000 - 0x0000C0)
struct FProceduralScatterProjectionPoint
{ 
	FVector                                            GenerationLocation;                                         // 0x0000   (0x0018)  
	FRotator                                           Rotation;                                                   // 0x0018   (0x0018)  
	float                                              Scale;                                                      // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0034   (0x0004)  MISSED
	class UProceduralScatterSettings*                  ScatterSettings;                                            // 0x0038   (0x0008)  
	int32_t                                            VariationIdx;                                               // 0x0040   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0044   (0x0004)  MISSED
	FVector                                            StartTrace;                                                 // 0x0048   (0x0018)  
	FVector                                            EndTrace;                                                   // 0x0060   (0x0018)  
	FProceduralHitPoint                                HitPoint;                                                   // 0x0078   (0x0040)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x00B8   (0x0008)  MISSED
};

/// Class /Script/Procedural.ProceduralScatterGeneratorContext
/// Size: 0x0328 (0x000058 - 0x000380)
class UProceduralScatterGeneratorContext : public UProceduralGeneratorContext
{ 
public:
	FScatteredPointCloud                               ScatteredPointCloud;                                        // 0x0058   (0x0010)  
	TArray<class UProceduralScatterGeneratorTile*>     UniqueTiles;                                                // 0x0068   (0x0010)  
	TArray<FSourcePointGenerator>                      SourcePointGenerators;                                      // 0x0078   (0x0010)  
	TArray<FProceduralScatterProjectionPoint>          ProjectionPointCloud;                                       // 0x0088   (0x0010)  
	class UProceduralPointCloud*                       SourcePointCloud;                                           // 0x0098   (0x0008)  
	class UProceduralPointCloud*                       BlockerPointCloud;                                          // 0x00A0   (0x0008)  
	class UMaterialInstanceDynamic*                    ProjectionVectorMaterial;                                   // 0x00A8   (0x0008)  
	unsigned char                                      UnknownData00_6[0x2D0];                                     // 0x00B0   (0x02D0)  MISSED
};

/// Struct /Script/Procedural.ProceduralScatter2DPoint
/// Size: 0x0060 (0x000000 - 0x000060)
struct FProceduralScatter2DPoint
{ 
	FVector                                            Location;                                                   // 0x0000   (0x0018)  
	float                                              Scale;                                                      // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x001C   (0x0004)  MISSED
	class UProceduralScatterSettings*                  ScatterSettings;                                            // 0x0020   (0x0008)  
	FBox2D                                             MaxAABB;                                                    // 0x0028   (0x0028)  
	float                                              CollisionRadius;                                            // 0x0050   (0x0004)  
	bool                                               bBlocker;                                                   // 0x0054   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0055   (0x0003)  MISSED
	int32_t                                            RandomNumber;                                               // 0x0058   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x005C   (0x0004)  MISSED
};

/// Class /Script/Procedural.ProceduralScatterGeneratorTile
/// Size: 0x0140 (0x000028 - 0x000168)
class UProceduralScatterGeneratorTile : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	class UProceduralScatterGenerator*                 Generator;                                                  // 0x0028   (0x0008)  
	TArray<FProceduralScatter2DPoint>                  GeneratedPoints;                                            // 0x0030   (0x0010)  
	unsigned char                                      UnknownData01_6[0x128];                                     // 0x0040   (0x0128)  MISSED
};

/// Struct /Script/Procedural.ProceduralContentVariationsModifiers
/// Size: 0x0010 (0x000000 - 0x000010)
struct FProceduralContentVariationsModifiers
{ 
	TArray<class UProceduralContentVariationsWeightsModifier*> Modifiers;                                          // 0x0000   (0x0010)  
};

/// Struct /Script/Procedural.ProceduralDensityModifiers
/// Size: 0x0010 (0x000000 - 0x000010)
struct FProceduralDensityModifiers
{ 
	TArray<class UProceduralDensityModifier*>          Modifiers;                                                  // 0x0000   (0x0010)  
};

/// Struct /Script/Procedural.ProceduralScaleModifiers
/// Size: 0x0020 (0x000000 - 0x000020)
struct FProceduralScaleModifiers
{ 
	bool                                               bRandomScaleEnabled;                                        // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	FFloatInterval                                     RandomScale;                                                // 0x0004   (0x0008)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	TArray<class UProceduralScaleModifier*>            Modifiers;                                                  // 0x0010   (0x0010)  
};

/// Struct /Script/Procedural.ProceduralRotationModifiers
/// Size: 0x0010 (0x000000 - 0x000010)
struct FProceduralRotationModifiers
{ 
	TArray<class UProceduralRotationModifier*>         Modifiers;                                                  // 0x0000   (0x0010)  
};

/// Struct /Script/Procedural.ProceduralScatterTargetSurface
/// Size: 0x0048 (0x000000 - 0x000048)
struct FProceduralScatterTargetSurface
{ 
	bool                                               bAllowLandscape;                                            // 0x0000   (0x0001)  
	bool                                               bAllowBSP;                                                  // 0x0001   (0x0001)  
	bool                                               bAllowStaticMesh;                                           // 0x0002   (0x0001)  
	bool                                               bAllowTranslucent;                                          // 0x0003   (0x0001)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	TArray<FName>                                      AllowedActorTags;                                           // 0x0008   (0x0010)  
	TArray<FName>                                      DisallowedActorTags;                                        // 0x0018   (0x0010)  
	TArray<FName>                                      AllowedComponentTags;                                       // 0x0028   (0x0010)  
	TArray<FName>                                      DisallowedComponentTags;                                    // 0x0038   (0x0010)  
};

/// Class /Script/Procedural.ProceduralScatterSettings
/// Size: 0x01B0 (0x000028 - 0x0001D8)
class UProceduralScatterSettings : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	class UProceduralScatterContentSettings*           Content;                                                    // 0x0028   (0x0008)  
	bool                                               bContentVariationsModifiersEnabled : 1;                     // 0x0030:0 (0x0001)  
	unsigned char                                      UnknownData01_4[0x7];                                       // 0x0031   (0x0007)  MISSED
	FProceduralContentVariationsModifiers              ContentVariationsModifiers;                                 // 0x0038   (0x0010)  
	TArray<FName>                                      SetPointTags;                                               // 0x0048   (0x0010)  
	float                                              CollisionRadius;                                            // 0x0058   (0x0004)  
	bool                                               bAutomaticCollisionRadius : 1;                              // 0x005C:0 (0x0001)  
	bool                                               bUseSphericalBoundsForAutomaticCollisionRadius : 1;         // 0x005C:1 (0x0001)  
	unsigned char                                      UnknownData02_4[0x3];                                       // 0x005D   (0x0003)  MISSED
	float                                              AutomaticCollisionRadiusScaleFactor;                        // 0x0060   (0x0004)  
	int32_t                                            DistributionSeed;                                           // 0x0064   (0x0004)  
	bool                                               bDensityModifiersEnabled : 1;                               // 0x0068:0 (0x0001)  
	unsigned char                                      UnknownData03_4[0x7];                                       // 0x0069   (0x0007)  MISSED
	FProceduralDensityModifiers                        DensityModifiers;                                           // 0x0070   (0x0010)  
	float                                              Density;                                                    // 0x0080   (0x0004)  
	unsigned char                                      UnknownData04_5[0x4];                                       // 0x0084   (0x0004)  MISSED
	TArray<FName>                                      SourcePointTagIncludes;                                     // 0x0088   (0x0010)  
	TArray<FName>                                      SourcePointTagExcludes;                                     // 0x0098   (0x0010)  
	TArray<FName>                                      SourceActorTagIncludes;                                     // 0x00A8   (0x0010)  
	TArray<FName>                                      SourceActorTagExcludes;                                     // 0x00B8   (0x0010)  
	TArray<FName>                                      SourceComponentTagIncludes;                                 // 0x00C8   (0x0010)  
	TArray<FName>                                      SourceComponentTagExcludes;                                 // 0x00D8   (0x0010)  
	FFloatInterval                                     SourcePointDistance;                                        // 0x00E8   (0x0008)  
	bool                                               bUseSourcePointExactNumber : 1;                             // 0x00F0:0 (0x0001)  
	unsigned char                                      UnknownData05_4[0x3];                                       // 0x00F1   (0x0003)  MISSED
	int32_t                                            SourcePointExactNumber;                                     // 0x00F4   (0x0004)  
	bool                                               bScaleModifiersEnabled : 1;                                 // 0x00F8:0 (0x0001)  
	unsigned char                                      UnknownData06_4[0x7];                                       // 0x00F9   (0x0007)  MISSED
	FProceduralScaleModifiers                          ScaleModifiers;                                             // 0x0100   (0x0020)  
	bool                                               bRotationModifiersEnabled : 1;                              // 0x0120:0 (0x0001)  
	unsigned char                                      UnknownData07_4[0x7];                                       // 0x0121   (0x0007)  MISSED
	FProceduralRotationModifiers                       RotationModifiers;                                          // 0x0128   (0x0010)  
	bool                                               bAlignToNormal : 1;                                         // 0x0138:0 (0x0001)  
	unsigned char                                      UnknownData08_4[0x3];                                       // 0x0139   (0x0003)  MISSED
	float                                              AlignMaxAngle;                                              // 0x013C   (0x0004)  
	FProceduralScatterTargetSurface                    TargetSurface;                                              // 0x0140   (0x0048)  
	bool                                               bDetectOverhangingLedge : 1;                                // 0x0188:0 (0x0001)  
	unsigned char                                      UnknownData09_4[0x3];                                       // 0x0189   (0x0003)  MISSED
	int32_t                                            OverhangingLedgeDetectionRayCount;                          // 0x018C   (0x0004)  
	float                                              OverhangingLedgeDetectionLength;                            // 0x0190   (0x0004)  
	float                                              OverhangingLedgeDetectionVerticalThreshold;                 // 0x0194   (0x0004)  
	float                                              OverhangingLedgeDetectionRadiusScale;                       // 0x0198   (0x0004)  
	float                                              FilterMinimumScale;                                         // 0x019C   (0x0004)  
	float                                              OverlapPriority;                                            // 0x01A0   (0x0004)  
	bool                                               bCollisionWithWorld : 1;                                    // 0x01A4:0 (0x0001)  
	unsigned char                                      UnknownData10_4[0x3];                                       // 0x01A5   (0x0003)  MISSED
	FVector                                            CollisionScale;                                             // 0x01A8   (0x0018)  
	FColor                                             DebugColor;                                                 // 0x01C0   (0x0004)  
	unsigned char                                      UnknownData11_6[0x14];                                      // 0x01C4   (0x0014)  MISSED


	/// Functions
	// Function /Script/Procedural.ProceduralScatterSettings.SetSourcePointDistanceMin
	// void SetSourcePointDistanceMin(float InValue);                                                                        // [0xb9a30a4] Final|Native|Public|BlueprintCallable 
	// Function /Script/Procedural.ProceduralScatterSettings.SetSourcePointDistanceMax
	// void SetSourcePointDistanceMax(float InValue);                                                                        // [0xb9a3010] Final|Native|Public|BlueprintCallable 
	// Function /Script/Procedural.ProceduralScatterSettings.GetSourcePointDistanceMin
	// float GetSourcePointDistanceMin();                                                                                    // [0x66de910] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Procedural.ProceduralScatterSettings.GetSourcePointDistanceMax
	// float GetSourcePointDistanceMax();                                                                                    // [0x8b53458] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/Procedural.ProceduralScatterStaticMeshContentVariation
/// Size: 0x0080 (0x0000E8 - 0x000168)
class UProceduralScatterStaticMeshContentVariation : public UProceduralScatterContentVariation
{ 
public:
	EProceduralScatterStaticMeshMode                   StaticMeshMode;                                             // 0x00E8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x00E9   (0x0007)  MISSED
	class UStaticMesh*                                 Mesh;                                                       // 0x00F0   (0x0008)  
	class UClass*                                      ActorClass;                                                 // 0x00F8   (0x0008)  
	TArray<class UMaterialInterface*>                  OverrideMaterials;                                          // 0x0100   (0x0010)  
	class UHISMBuilderSettings*                        OverrideInstancingSettings;                                 // 0x0110   (0x0008)  
	unsigned char                                      UnknownData01_6[0x50];                                      // 0x0118   (0x0050)  MISSED
};

/// Class /Script/Procedural.ProceduralScatterStaticMeshContentSettings
/// Size: 0x0018 (0x000068 - 0x000080)
class UProceduralScatterStaticMeshContentSettings : public UProceduralScatterContentSettings
{ 
public:
	class UClass*                                      ComponentClass;                                             // 0x0068   (0x0008)  
	FName                                              ComponentTag;                                               // 0x0070   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0074   (0x0004)  MISSED
	class UHISMBuilderSettings*                        VariationsInstancingSettings;                               // 0x0078   (0x0008)  
};

/// Class /Script/Procedural.ProceduralSurfaceHeightMap
/// Size: 0x0010 (0x0000B8 - 0x0000C8)
class UProceduralSurfaceHeightMap : public UProceduralFloatDataMap
{ 
public:
	bool                                               bNormalizedHeight;                                          // 0x00B8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00B9   (0x0003)  MISSED
	FFloatInterval                                     HeightRange;                                                // 0x00BC   (0x0008)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x00C4   (0x0004)  MISSED


	/// Functions
	// Function /Script/Procedural.ProceduralSurfaceHeightMap.SetHeightRangeMin
	// void SetHeightRangeMin(float InValue);                                                                                // [0xb9a2864] Final|Native|Public|BlueprintCallable 
	// Function /Script/Procedural.ProceduralSurfaceHeightMap.SetHeightRangeMax
	// void SetHeightRangeMax(float InValue);                                                                                // [0xb9a27d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Procedural.ProceduralSurfaceHeightMap.GetValue
	// float GetValue(float InHeight);                                                                                       // [0xb9a2740] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Procedural.ProceduralSurfaceHeightMap.GetHeightRangeMin
	// float GetHeightRangeMin();                                                                                            // [0xabbc1c4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Procedural.ProceduralSurfaceHeightMap.GetHeightRangeMax
	// float GetHeightRangeMax();                                                                                            // [0x6661a0c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/Procedural.ProceduralSurfaceSlopeAngleMap
/// Size: 0x0010 (0x0000B8 - 0x0000C8)
class UProceduralSurfaceSlopeAngleMap : public UProceduralFloatDataMap
{ 
public:
	bool                                               bNormalizedSlopeAngle;                                      // 0x00B8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00B9   (0x0003)  MISSED
	FFloatInterval                                     SlopeAngleRange;                                            // 0x00BC   (0x0008)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x00C4   (0x0004)  MISSED


	/// Functions
	// Function /Script/Procedural.ProceduralSurfaceSlopeAngleMap.SetSlopeAngleRangeMin
	// void SetSlopeAngleRangeMin(float InValue);                                                                            // [0xb9a2864] Final|Native|Public|BlueprintCallable 
	// Function /Script/Procedural.ProceduralSurfaceSlopeAngleMap.SetSlopeAngleRangeMax
	// void SetSlopeAngleRangeMax(float InValue);                                                                            // [0xb9a27d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Procedural.ProceduralSurfaceSlopeAngleMap.GetValue
	// float GetValue(float InSlopeAngle);                                                                                   // [0xb9a2740] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Procedural.ProceduralSurfaceSlopeAngleMap.GetSlopeAngleRangeMin
	// float GetSlopeAngleRangeMin();                                                                                        // [0xabbc1c4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Procedural.ProceduralSurfaceSlopeAngleMap.GetSlopeAngleRangeMax
	// float GetSlopeAngleRangeMax();                                                                                        // [0x6661a0c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

