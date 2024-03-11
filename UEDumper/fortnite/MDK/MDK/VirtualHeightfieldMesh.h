
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/VirtualHeightfieldMesh.HeightfieldMinMaxTexture
/// Size: 0x0048 (0x000028 - 0x000070)
class UHeightfieldMinMaxTexture : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	CMember(class UTexture2D*)                         Texture                                                     OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(class UTexture2D*)                         LodBiasTexture                                              OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(class UTexture2D*)                         LodBiasMinMaxTexture                                        OFFSET(get<T>, {0x38, 8, 0, 0})
	DMember(int32_t)                                   MaxCPULevels                                                OFFSET(get<int32_t>, {0x40, 4, 0, 0})
	CMember(TArray<FVector2D>)                         TextureData                                                 OFFSET(get<T>, {0x48, 16, 0, 0})
	SMember(FIntPoint)                                 TextureDataSize                                             OFFSET(getStruct<T>, {0x58, 8, 0, 0})
	CMember(TArray<int32_t>)                           TextureDataMips                                             OFFSET(get<T>, {0x60, 16, 0, 0})
};

/// Class /Script/VirtualHeightfieldMesh.MaterialExpressionHeightfieldMinMaxTexture
/// Size: 0x0010 (0x0000B0 - 0x0000C0)
class UMaterialExpressionHeightfieldMinMaxTexture : public UMaterialExpression
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	CMember(class UHeightfieldMinMaxTexture*)          MinMaxTexture                                               OFFSET(get<T>, {0xB0, 8, 0, 0})
	CMember(TEnumAsByte<EMaterialSamplerType>)         SamplerType                                                 OFFSET(get<T>, {0xB8, 1, 0, 0})
};

/// Class /Script/VirtualHeightfieldMesh.VirtualHeightfieldMesh
/// Size: 0x0008 (0x000290 - 0x000298)
class AVirtualHeightfieldMesh : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 664;

public:
	CMember(class UVirtualHeightfieldMeshComponent*)   VirtualHeightfieldMeshComponent                             OFFSET(get<T>, {0x290, 8, 0, 0})
};

/// Class /Script/VirtualHeightfieldMesh.VirtualHeightfieldMeshComponent
/// Size: 0x0070 (0x000500 - 0x000570)
class UVirtualHeightfieldMeshComponent : public UPrimitiveComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1392;

public:
	CMember(TWeakObjectPtr<ARuntimeVirtualTextureVolume*>) VirtualTexture                                          OFFSET(get<T>, {0x500, 32, 0, 0})
	CMember(class ARuntimeVirtualTextureVolume*)       VirtualTextureRef                                           OFFSET(get<T>, {0x520, 8, 0, 0})
	CMember(class UObject*)                            VirtualTextureThumbnail                                     OFFSET(get<T>, {0x528, 8, 0, 0})
	DMember(bool)                                      bCopyBoundsButton                                           OFFSET(get<bool>, {0x530, 1, 0, 0})
	CMember(class UHeightfieldMinMaxTexture*)          MinMaxTexture                                               OFFSET(get<T>, {0x538, 8, 0, 0})
	DMember(int32_t)                                   NumMinMaxTextureBuildLevels                                 OFFSET(get<int32_t>, {0x540, 4, 0, 0})
	DMember(bool)                                      bBuildMinMaxTextureButton                                   OFFSET(get<bool>, {0x544, 1, 0, 0})
	CMember(class UMaterialInterface*)                 Material                                                    OFFSET(get<T>, {0x548, 8, 0, 0})
	DMember(float)                                     LOD0ScreenSize                                              OFFSET(get<float>, {0x550, 4, 0, 0})
	DMember(float)                                     Lod0Distribution                                            OFFSET(get<float>, {0x554, 4, 0, 0})
	DMember(float)                                     LodDistribution                                             OFFSET(get<float>, {0x558, 4, 0, 0})
	DMember(float)                                     LodBiasScale                                                OFFSET(get<float>, {0x55C, 4, 0, 0})
	DMember(int32_t)                                   NumForceLoadLods                                            OFFSET(get<int32_t>, {0x560, 4, 0, 0})
	DMember(int32_t)                                   NumOcclusionLods                                            OFFSET(get<int32_t>, {0x564, 4, 0, 0})
	DMember(bool)                                      bHiddenInEditor                                             OFFSET(get<bool>, {0x568, 1, 0, 0})
	DMember(bool)                                      bWorldPositionOffsetVelocity                                OFFSET(get<bool>, {0x569, 1, 0, 0})


	/// Functions
	// Function /Script/VirtualHeightfieldMesh.VirtualHeightfieldMeshComponent.GatherHideFlags
	// void GatherHideFlags(bool& InOutHidePrimitivesInEditor, bool& InOutHidePrimitivesInGame);                                // [0xba1173c] Final|Native|Protected|HasOutParms|Const 
};

