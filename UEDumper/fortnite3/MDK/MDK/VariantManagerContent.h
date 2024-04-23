
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/VariantManagerContent.LevelVariantSets
/// Size: 0x0068 (0x000028 - 0x000090)
class ULevelVariantSets : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	CMember(class UBlueprintGeneratedClass*)           DirectorClass                                               OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(TArray<class UVariantSet*>)                VariantSets                                                 OFFSET(get<T>, {0x30, 16, 0, 0})


	/// Functions
	// Function /Script/VariantManagerContent.LevelVariantSets.GetVariantSetByName
	// class UVariantSet* GetVariantSetByName(FString VariantSetName);                                                          // [0xd27219c] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VariantManagerContent.LevelVariantSets.GetVariantSet
	// class UVariantSet* GetVariantSet(int32_t VariantSetIndex);                                                               // [0xd2720fc] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VariantManagerContent.LevelVariantSets.GetNumVariantSets
	// int32_t GetNumVariantSets();                                                                                             // [0x6aee8d8] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/VariantManagerContent.LevelVariantSetsActor
/// Size: 0x0068 (0x000290 - 0x0002F8)
class ALevelVariantSetsActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 760;

public:
	SMember(FSoftObjectPath)                           LevelVariantSets                                            OFFSET(getStruct<T>, {0x290, 24, 0, 0})
	CMember(TMap<UBlueprintGeneratedClass*, ULevelVariantSetsFunctionDirector*>) DirectorInstances                 OFFSET(get<T>, {0x2A8, 80, 0, 0})


	/// Functions
	// Function /Script/VariantManagerContent.LevelVariantSetsActor.SwitchOnVariantByName
	// bool SwitchOnVariantByName(FString VariantSetName, FString VariantName);                                                 // [0xd274254] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.LevelVariantSetsActor.SwitchOnVariantByIndex
	// bool SwitchOnVariantByIndex(int32_t VariantSetIndex, int32_t VariantIndex);                                              // [0xd27414c] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.LevelVariantSetsActor.SetLevelVariantSets
	// void SetLevelVariantSets(class ULevelVariantSets* InVariantSets);                                                        // [0xd272bd8] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.LevelVariantSetsActor.GetLevelVariantSets
	// class ULevelVariantSets* GetLevelVariantSets(bool bLoad);                                                                // [0xd2717f8] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/VariantManagerContent.LevelVariantSetsFunctionDirector
/// Size: 0x0018 (0x000028 - 0x000040)
class ULevelVariantSetsFunctionDirector : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Script/VariantManagerContent.PropertyValue
/// Size: 0x0180 (0x000028 - 0x0001A8)
class UPropertyValue : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 424;

public:
	CMember(TArray<Properties>)                        Properties                                                  OFFSET(get<T>, {0x88, 16, 0, 0})
	CMember(TArray<int32_t>)                           PropertyIndices                                             OFFSET(get<T>, {0x98, 16, 0, 0})
	CMember(TArray<FCapturedPropSegment>)              CapturedPropSegments                                        OFFSET(get<T>, {0xA8, 16, 0, 0})
	SMember(FString)                                   FullDisplayString                                           OFFSET(getStruct<T>, {0xB8, 16, 0, 0})
	SMember(FName)                                     PropertySetterName                                          OFFSET(getStruct<T>, {0xC8, 4, 0, 0})
	CMember(TMap<FString, FString>)                    PropertySetterParameterDefaults                             OFFSET(get<T>, {0xD0, 80, 0, 0})
	DMember(bool)                                      bHasRecordedData                                            OFFSET(get<bool>, {0x120, 1, 0, 0})
	CMember(class UClass*)                             LeafPropertyClass                                           OFFSET(get<T>, {0x128, 8, 0, 0})
	CMember(TArray<char>)                              ValueBytes                                                  OFFSET(get<T>, {0x138, 16, 0, 0})
	CMember(EPropertyValueCategory)                    PropCategory                                                OFFSET(get<T>, {0x148, 1, 0, 0})


	/// Functions
	// Function /Script/VariantManagerContent.PropertyValue.HasRecordedData
	// bool HasRecordedData();                                                                                                  // [0xbefdbd0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VariantManagerContent.PropertyValue.GetPropertyTooltip
	// FText GetPropertyTooltip();                                                                                              // [0xd271910] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VariantManagerContent.PropertyValue.GetFullDisplayString
	// FString GetFullDisplayString();                                                                                          // [0xd2717dc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/VariantManagerContent.PropertyValueTransform
/// Size: 0x0000 (0x0001A8 - 0x0001A8)
class UPropertyValueTransform : public UPropertyValue
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 424;

public:
};

/// Class /Script/VariantManagerContent.PropertyValueVisibility
/// Size: 0x0000 (0x0001A8 - 0x0001A8)
class UPropertyValueVisibility : public UPropertyValue
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 424;

public:
};

/// Class /Script/VariantManagerContent.PropertyValueColor
/// Size: 0x0000 (0x0001A8 - 0x0001A8)
class UPropertyValueColor : public UPropertyValue
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 424;

public:
};

/// Class /Script/VariantManagerContent.PropertyValueMaterial
/// Size: 0x0000 (0x0001A8 - 0x0001A8)
class UPropertyValueMaterial : public UPropertyValue
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 424;

public:
};

/// Class /Script/VariantManagerContent.PropertyValueOption
/// Size: 0x0000 (0x0001A8 - 0x0001A8)
class UPropertyValueOption : public UPropertyValue
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 424;

public:
};

/// Class /Script/VariantManagerContent.PropertyValueSoftObject
/// Size: 0x0000 (0x0001A8 - 0x0001A8)
class UPropertyValueSoftObject : public UPropertyValue
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 424;

public:
};

/// Class /Script/VariantManagerContent.SwitchActor
/// Size: 0x0028 (0x000290 - 0x0002B8)
class ASwitchActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 696;

public:
	CMember(class USceneComponent*)                    SceneComponent                                              OFFSET(get<T>, {0x2A8, 8, 0, 0})
	DMember(int32_t)                                   LastSelectedOption                                          OFFSET(get<int32_t>, {0x2B0, 4, 0, 0})


	/// Functions
	// Function /Script/VariantManagerContent.SwitchActor.SelectOption
	// void SelectOption(int32_t OptionIndex);                                                                                  // [0xd272938] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.SwitchActor.GetSelectedOption
	// int32_t GetSelectedOption();                                                                                             // [0xb21075c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VariantManagerContent.SwitchActor.GetOptions
	// TArray<AActor*> GetOptions();                                                                                            // [0xd271888] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/VariantManagerContent.Variant
/// Size: 0x0048 (0x000028 - 0x000070)
class UVariant : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	CMember(TArray<FVariantDependency>)                Dependencies                                                OFFSET(get<T>, {0x28, 16, 0, 0})
	SMember(FText)                                     DisplayText                                                 OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	CMember(TArray<class UVariantObjectBinding*>)      ObjectBindings                                              OFFSET(get<T>, {0x58, 16, 0, 0})
	CMember(class UTexture2D*)                         Thumbnail                                                   OFFSET(get<T>, {0x68, 8, 0, 0})


	/// Functions
	// Function /Script/VariantManagerContent.Variant.SwitchOn
	// void SwitchOn();                                                                                                         // [0xd274138] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.Variant.SetThumbnailFromTexture
	// void SetThumbnailFromTexture(class UTexture2D* NewThumbnail);                                                            // [0xd274020] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.Variant.SetThumbnailFromFile
	// void SetThumbnailFromFile(FString FilePath);                                                                             // [0xd273200] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.Variant.SetThumbnailFromEditorViewport
	// void SetThumbnailFromEditorViewport();                                                                                   // [0x35e6228] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.Variant.SetThumbnailFromCamera
	// void SetThumbnailFromCamera(class UObject* WorldContextObject, FTransform& CameraTransform, float FOVDegrees, float MinZ, float Gamma); // [0xd272c58] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/VariantManagerContent.Variant.SetDisplayText
	// void SetDisplayText(FText& NewDisplayText);                                                                              // [0xd272aa0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/VariantManagerContent.Variant.SetDependency
	// void SetDependency(int32_t Index, FVariantDependency& Dependency);                                                       // [0xd2729b8] Final|Native|Public|HasOutParms 
	// Function /Script/VariantManagerContent.Variant.IsActive
	// bool IsActive();                                                                                                         // [0xd2728a8] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.Variant.GetThumbnail
	// class UTexture2D* GetThumbnail();                                                                                        // [0x67b4798] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.Variant.GetParent
	// class UVariantSet* GetParent();                                                                                          // [0xd2718c8] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VariantManagerContent.Variant.GetNumDependencies
	// int32_t GetNumDependencies();                                                                                            // [0x67d23e4] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VariantManagerContent.Variant.GetNumActors
	// int32_t GetNumActors();                                                                                                  // [0x7e77b70] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VariantManagerContent.Variant.GetDisplayText
	// FText GetDisplayText();                                                                                                  // [0xd271764] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VariantManagerContent.Variant.GetDependents
	// TArray<UVariant*> GetDependents(class ULevelVariantSets* LevelVariantSets, bool bOnlyEnabledDependencies);               // [0xd271548] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.Variant.GetDependency
	// FVariantDependency GetDependency(int32_t Index);                                                                         // [0xd2714b0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VariantManagerContent.Variant.GetActor
	// class AActor* GetActor(int32_t ActorIndex);                                                                              // [0xd2713fc] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VariantManagerContent.Variant.DeleteDependency
	// void DeleteDependency(int32_t Index);                                                                                    // [0xd27137c] Final|Native|Public  
	// Function /Script/VariantManagerContent.Variant.AddDependency
	// int32_t AddDependency(FVariantDependency& Dependency);                                                                   // [0xd2712d0] Final|Native|Public|HasOutParms 
};

/// Class /Script/VariantManagerContent.VariantObjectBinding
/// Size: 0x0060 (0x000028 - 0x000088)
class UVariantObjectBinding : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FString)                                   CachedActorLabel                                            OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	SMember(FSoftObjectPath)                           ObjectPtr                                                   OFFSET(getStruct<T>, {0x38, 24, 0, 0})
	CMember(TLazyObjectPtr<UObject*>)                  LazyObjectPtr                                               OFFSET(get<T>, {0x50, 24, 0, 0})
	CMember(TArray<class UPropertyValue*>)             CapturedProperties                                          OFFSET(get<T>, {0x68, 16, 0, 0})
	CMember(TArray<FFunctionCaller>)                   FunctionCallers                                             OFFSET(get<T>, {0x78, 16, 0, 0})
};

/// Class /Script/VariantManagerContent.VariantSet
/// Size: 0x0040 (0x000028 - 0x000068)
class UVariantSet : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FText)                                     DisplayText                                                 OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	DMember(bool)                                      bExpanded                                                   OFFSET(get<bool>, {0x48, 1, 0, 0})
	CMember(TArray<class UVariant*>)                   Variants                                                    OFFSET(get<T>, {0x50, 16, 0, 0})
	CMember(class UTexture2D*)                         Thumbnail                                                   OFFSET(get<T>, {0x60, 8, 0, 0})


	/// Functions
	// Function /Script/VariantManagerContent.VariantSet.SetThumbnailFromTexture
	// void SetThumbnailFromTexture(class UTexture2D* NewThumbnail);                                                            // [0xd2740ac] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.VariantSet.SetThumbnailFromFile
	// void SetThumbnailFromFile(FString FilePath);                                                                             // [0xd273910] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.VariantSet.SetThumbnailFromEditorViewport
	// void SetThumbnailFromEditorViewport();                                                                                   // [0x35e6228] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.VariantSet.SetThumbnailFromCamera
	// void SetThumbnailFromCamera(class UObject* WorldContextObject, FTransform& CameraTransform, float FOVDegrees, float MinZ, float Gamma); // [0xd272f2c] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/VariantManagerContent.VariantSet.SetDisplayText
	// void SetDisplayText(FText& NewDisplayText);                                                                              // [0xd272b3c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/VariantManagerContent.VariantSet.GetVariantByName
	// class UVariant* GetVariantByName(FString VariantName);                                                                   // [0xd2719f0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VariantManagerContent.VariantSet.GetVariant
	// class UVariant* GetVariant(int32_t VariantIndex);                                                                        // [0xd271950] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VariantManagerContent.VariantSet.GetThumbnail
	// class UTexture2D* GetThumbnail();                                                                                        // [0xa549c10] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.VariantSet.GetParent
	// class ULevelVariantSets* GetParent();                                                                                    // [0xd2718ec] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VariantManagerContent.VariantSet.GetNumVariants
	// int32_t GetNumVariants();                                                                                                // [0x6aeeda0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VariantManagerContent.VariantSet.GetDisplayText
	// FText GetDisplayText();                                                                                                  // [0xd2717a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/VariantManagerContent.FunctionCaller
/// Size: 0x0004 (0x000000 - 0x000004)
class FFunctionCaller : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	SMember(FName)                                     FunctionName                                                OFFSET(getStruct<T>, {0x0, 4, 0, 0})
};

/// Struct /Script/VariantManagerContent.CapturedPropSegment
/// Size: 0x0028 (0x000000 - 0x000028)
class FCapturedPropSegment : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FString)                                   PropertyName                                                OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	DMember(int32_t)                                   PropertyIndex                                               OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	SMember(FString)                                   ComponentName                                               OFFSET(getStruct<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/VariantManagerContent.VariantDependency
/// Size: 0x0048 (0x000000 - 0x000048)
class FVariantDependency : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(TWeakObjectPtr<UVariantSet*>)              VariantSet                                                  OFFSET(get<T>, {0x0, 32, 0, 0})
	CMember(TWeakObjectPtr<UVariant*>)                 Variant                                                     OFFSET(get<T>, {0x20, 32, 0, 0})
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x40, 1, 0, 0})
};

/// Enum /Script/VariantManagerContent.EPropertyValueCategory
/// Size: 0x10
enum class EPropertyValueCategory : uint8_t
{
	EPropertyValueCategory__Undefined                                                = 0,
	EPropertyValueCategory__Generic                                                  = 1,
	EPropertyValueCategory__RelativeLocation                                         = 2,
	EPropertyValueCategory__RelativeRotation                                         = 4,
	EPropertyValueCategory__RelativeScale3D                                          = 8,
	EPropertyValueCategory__Visibility                                               = 16,
	EPropertyValueCategory__Material                                                 = 32,
	EPropertyValueCategory__Color                                                    = 64,
	EPropertyValueCategory__Option                                                   = 128,
	EPropertyValueCategory__EPropertyValueCategory_MAX                               = 129
};

