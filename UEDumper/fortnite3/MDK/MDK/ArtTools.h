
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine

/// Class /Engine/ArtTools/RenderToTexture/Macros/RenderToTextureFunctionLibrary.RenderToTextureFunctionLibrary_C
/// Size: 0x0000 (0x000028 - 0x000028)
class URenderToTextureFunctionLibrary_C : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Engine/ArtTools/RenderToTexture/Macros/RenderToTextureFunctionLibrary.RenderToTextureFunctionLibrary_C.Set Canvas Material Scale and Position
	// void Set Canvas Material Scale and Position(FVector2D Size, FVector2D Position, double Scale, class UObject* __WorldContext, FVector2D& Screen Position, FVector2D& Screen Size); // [0x1340978] Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Engine/ArtTools/RenderToTexture/Macros/RenderToTextureFunctionLibrary.RenderToTextureFunctionLibrary_C.Array to HLSL Int Array
	// void Array to HLSL Int Array(TEnumAsByte<EIntTypes> Type, FString& Variable Name, TArray<int32_t>& Int, TArray<FVector2D>& int2, TArray<FVector>& int3, TArray<FLinearColor>& int4, class UObject* __WorldContext, FString& String); // [0x1340978] Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/ArtTools/Tech_Art/Libraries/Macros/B_TechArt_GlobalLibrary.B_TechArt_GlobalLibrary_C
/// Size: 0x0000 (0x000028 - 0x000028)
class UB_TechArt_GlobalLibrary_C : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Game/ArtTools/Tech_Art/Libraries/Macros/B_TechArt_GlobalLibrary.B_TechArt_GlobalLibrary_C.BindScalabilitySettings
	// void BindScalabilitySettings(FDelegateProperty& Delegate, class UObject* __WorldContext);                                // [0x1340978] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/ArtTools/Tech_Art/Libraries/Macros/B_TechArt_GlobalLibrary.B_TechArt_GlobalLibrary_C.IsLumenEnabled
	// void IsLumenEnabled(class UObject* __WorldContext, bool& IsEnabled);                                                     // [0x1340978] Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/ArtTools/Tech_Art/Libraries/Macros/B_TechArt_GlobalLibrary.B_TechArt_GlobalLibrary_C.GetDynamicMaterialInstance
	// void GetDynamicMaterialInstance(class UMeshComponent* MeshComponent, int32_t MaterialIndex, class UObject* __WorldContext, class UMaterialInstanceDynamic*& Material Instance Dynamic); // [0x1340978] Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/ArtTools/Tech_Art/Libraries/Macros/B_TechArt_GlobalLibrary.B_TechArt_GlobalLibrary_C.AreBoundsOverlapping?
	// void AreBoundsOverlapping?(FBox BoundsA, FBox BoundsB, class UObject* __WorldContext, bool& BoundsOverlap?);             // [0x1340978] Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/ArtTools/Tech_Art/Libraries/Macros/B_TechArt_GlobalLibrary.B_TechArt_GlobalLibrary_C.AddActorTag
	// void AddActorTag(class AActor* Actor, FName& tag, class UObject* __WorldContext);                                        // [0x1340978] Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/ArtTools/Tech_Art/Libraries/Macros/B_TechArt_GlobalLibrary.B_TechArt_GlobalLibrary_C.HoudiniInstanceHISMBuilder
	// void HoudiniInstanceHISMBuilder(class UInstancedStaticMeshComponent* InstancedStaticMeshComponent, class UDataTable* InstanceDataTable, double InstancesCountToImport, bool RandomScale, double RandomScaleMin, double RandomScaleMax, bool RandomRotationZ, double RandomRotationZMin, double RandomRotationZMax, bool UseWorldSpacePositions, class UObject* __WorldContext); // [0x1340978] Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent 
};

/// Struct /Game/ArtTools/HoudiniInstanceImporter/HoudiniInstanceDataLayout.HoudiniInstanceDataLayout
/// Size: 0x001C (0x000000 - 0x00001C)
class FHoudiniInstanceDataLayout : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 28;

public:
	DMember(float)                                     Px_4_F5C0CE7F4E57E0634EEBA7986A38B75B                       OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     Py_7_462CEB644FCF8818190E0DA7A4233236                       OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     Pz_8_488530224541EBF7D43F2F99AE2CCEAF                       OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     Nx_18_51E5EF044A718D85E72395AA9D96475D                      OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     Ny_22_85D94369412DF832716FAD9638F05274                      OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     Nz_23_267E08D5410B2BAA799B67975DE79784                      OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     pscale_24_C1C793994E739F1A41356ABC35528C18                  OFFSET(get<float>, {0x18, 4, 0, 0})
};

/// Enum /Engine/ArtTools/RenderToTexture/Enums/EIntTypes.EIntTypes
/// Size: 0x05
enum class EIntTypes : uint8_t
{
	EIntTypes__NewEnumerator4                                                        = 0,
	EIntTypes__NewEnumerator5                                                        = 1,
	EIntTypes__NewEnumerator6                                                        = 2,
	EIntTypes__NewEnumerator7                                                        = 3,
	EIntTypes__EIntTypes_MAX                                                         = 4
};

