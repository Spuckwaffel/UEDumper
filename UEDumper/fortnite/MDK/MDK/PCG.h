
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine
/// dependency: StructUtils

/// Class /Script/PCG.PCGData
/// Size: 0x0010 (0x000028 - 0x000038)
class UPCGData : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(uint64_t)                                  UID                                                         OFFSET(get<uint64_t>, {0x28, 8, 0, 0})
};

/// Class /Script/PCG.PCGSettingsInterface
/// Size: 0x0008 (0x000038 - 0x000040)
class UPCGSettingsInterface : public UPCGData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x38, 1, 0, 0})
	DMember(bool)                                      bDebug                                                      OFFSET(get<bool>, {0x39, 1, 0, 0})
};

/// Class /Script/PCG.PCGSettings
/// Size: 0x0068 (0x000040 - 0x0000A8)
class UPCGSettings : public UPCGSettingsInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	DMember(int32_t)                                   Seed                                                        OFFSET(get<int32_t>, {0x40, 4, 0, 0})
	DMember(bool)                                      bUseSeed                                                    OFFSET(get<bool>, {0x50, 1, 0, 0})
	CMember(TArray<FPCGSettingsOverridableParam>)      CachedOverridableParams                                     OFFSET(get<T>, {0x90, 16, 0, 0})
};

/// Class /Script/PCG.PCGAddTagSettings
/// Size: 0x0010 (0x0000A8 - 0x0000B8)
class UPCGAddTagSettings : public UPCGSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	SMember(FString)                                   TagsToAdd                                                   OFFSET(getStruct<T>, {0xA8, 16, 0, 0})
};

/// Class /Script/PCG.PCGApplyOnActorSettings
/// Size: 0x0040 (0x0000A8 - 0x0000E8)
class UPCGApplyOnActorSettings : public UPCGSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
	CMember(TWeakObjectPtr<AActor*>)                   TargetActor                                                 OFFSET(get<T>, {0xA8, 32, 0, 0})
	CMember(TArray<FPCGObjectPropertyOverrideDescription>) PropertyOverrideDescriptions                            OFFSET(get<T>, {0xC8, 16, 0, 0})
	CMember(TArray<FName>)                             PostProcessFunctionNames                                    OFFSET(get<T>, {0xD8, 16, 0, 0})
};

/// Class /Script/PCG.PCGApplyScaleToBoundsSettings
/// Size: 0x0000 (0x0000A8 - 0x0000A8)
class UPCGApplyScaleToBoundsSettings : public UPCGSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
};

/// Class /Script/PCG.PCGAttributeCastSettings
/// Size: 0x0058 (0x0000A8 - 0x000100)
class UPCGAttributeCastSettings : public UPCGSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	SMember(FPCGAttributePropertyInputSelector)        InputSource                                                 OFFSET(getStruct<T>, {0xA8, 40, 0, 0})
	CMember(EPCGMetadataTypes)                         OutputType                                                  OFFSET(get<T>, {0xD0, 1, 0, 0})
	SMember(FPCGAttributePropertyOutputSelector)       OutputTarget                                                OFFSET(getStruct<T>, {0xD8, 40, 0, 0})
};

/// Class /Script/PCG.PCGAttributeExtractorTestObject
/// Size: 0x0008 (0x000028 - 0x000030)
class UPCGAttributeExtractorTestObject : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(double)                                    DoubleValue                                                 OFFSET(get<double>, {0x28, 8, 0, 0})
};

/// Class /Script/PCG.PCGAttributeFilteringSettings
/// Size: 0x01C8 (0x0000A8 - 0x000270)
class UPCGAttributeFilteringSettings : public UPCGSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 624;

public:
	CMember(EPCGAttributeFilterOperator)               Operator                                                    OFFSET(get<T>, {0xA8, 1, 0, 0})
	SMember(FPCGAttributePropertyInputSelector)        TargetAttribute                                             OFFSET(getStruct<T>, {0xB0, 40, 0, 0})
	DMember(bool)                                      bUseConstantThreshold                                       OFFSET(get<bool>, {0xD8, 1, 0, 0})
	SMember(FPCGAttributePropertyInputSelector)        ThresholdAttribute                                          OFFSET(getStruct<T>, {0xE0, 40, 0, 0})
	DMember(bool)                                      bUseSpatialQuery                                            OFFSET(get<bool>, {0x108, 1, 0, 0})
	SMember(FPCGMetadataTypesConstantStruct)           AttributeTypes                                              OFFSET(getStruct<T>, {0x110, 352, 0, 0})
};

/// Class /Script/PCG.PCGAttributeFilteringRangeSettings
/// Size: 0x0368 (0x0000A8 - 0x000410)
class UPCGAttributeFilteringRangeSettings : public UPCGSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1040;

public:
	SMember(FPCGAttributePropertyInputSelector)        TargetAttribute                                             OFFSET(getStruct<T>, {0xA8, 40, 0, 0})
	SMember(FPCGAttributeFilterThresholdSettings)      MinThreshold                                                OFFSET(getStruct<T>, {0xD0, 416, 0, 0})
	SMember(FPCGAttributeFilterThresholdSettings)      MaxThreshold                                                OFFSET(getStruct<T>, {0x270, 416, 0, 0})
};

/// Class /Script/PCG.PCGAttributePropertySelectorBlueprintHelpers
/// Size: 0x0000 (0x000028 - 0x000028)
class UPCGAttributePropertySelectorBlueprintHelpers : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/PCG.PCGAttributePropertySelectorBlueprintHelpers.SetPointProperty
	// bool SetPointProperty(FPCGAttributePropertySelector& Selector, EPCGPointProperties InPointProperty);                     // [0xa53ba28] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGAttributePropertySelectorBlueprintHelpers.SetExtraProperty
	// bool SetExtraProperty(FPCGAttributePropertySelector& Selector, EPCGExtraProperties InExtraProperty);                     // [0xa53b880] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGAttributePropertySelectorBlueprintHelpers.SetAttributeName
	// bool SetAttributeName(FPCGAttributePropertySelector& Selector, FName InAttributeName);                                   // [0xa53b6d8] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGAttributePropertySelectorBlueprintHelpers.GetSelection
	// EPCGAttributePropertySelection GetSelection(FPCGAttributePropertySelector& Selector);                                    // [0xa53b624] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGAttributePropertySelectorBlueprintHelpers.GetPointProperty
	// EPCGPointProperties GetPointProperty(FPCGAttributePropertySelector& Selector);                                           // [0xa53b570] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGAttributePropertySelectorBlueprintHelpers.GetName
	// FName GetName(FPCGAttributePropertySelector& Selector);                                                                  // [0xa53b4b4] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGAttributePropertySelectorBlueprintHelpers.GetExtraProperty
	// EPCGExtraProperties GetExtraProperty(FPCGAttributePropertySelector& Selector);                                           // [0xa53b400] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGAttributePropertySelectorBlueprintHelpers.GetExtraNames
	// TArray<FString> GetExtraNames(FPCGAttributePropertySelector& Selector);                                                  // [0xa53b344] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGAttributePropertySelectorBlueprintHelpers.GetAttributeName
	// FName GetAttributeName(FPCGAttributePropertySelector& Selector);                                                         // [0xa53b290] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGAttributePropertySelectorBlueprintHelpers.CopyAndFixSource
	// FPCGAttributePropertyOutputSelector CopyAndFixSource(FPCGAttributePropertyOutputSelector& Selector, FPCGAttributePropertyInputSelector& InSelector); // [0xa53b130] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGAttributePropertySelectorBlueprintHelpers.CopyAndFixLast
	// FPCGAttributePropertyInputSelector CopyAndFixLast(FPCGAttributePropertyInputSelector& Selector, class UPCGData* InData); // [0xa53af6c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/PCG.PCGBooleanSelectSettings
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UPCGBooleanSelectSettings : public UPCGSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	DMember(bool)                                      bUseInputB                                                  OFFSET(get<bool>, {0xA8, 1, 0, 0})
};

/// Class /Script/PCG.PCGBranchSettings
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UPCGBranchSettings : public UPCGSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	DMember(bool)                                      bOutputToB                                                  OFFSET(get<bool>, {0xA8, 1, 0, 0})
};

/// Class /Script/PCG.PCGSpatialData
/// Size: 0x0048 (0x000038 - 0x000080)
class UPCGSpatialData : public UPCGData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(TWeakObjectPtr<AActor*>)                   TargetActor                                                 OFFSET(get<T>, {0x38, 8, 0, 0})
	DMember(bool)                                      bKeepZeroDensityPoints                                      OFFSET(get<bool>, {0x40, 1, 0, 0})
	CMember(class UPCGMetadata*)                       MetaData                                                    OFFSET(get<T>, {0x48, 8, 0, 0})
	DMember(bool)                                      bHasCachedLastSelector                                      OFFSET(get<bool>, {0x50, 1, 0, 0})
	SMember(FPCGAttributePropertyInputSelector)        CachedLastSelector                                          OFFSET(getStruct<T>, {0x58, 40, 0, 0})


	/// Functions
	// Function /Script/PCG.PCGSpatialData.UnionWith
	// class UPCGUnionData* UnionWith(class UPCGSpatialData* InOther);                                                          // [0xa5be56c] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PCG.PCGSpatialData.ToPointDataWithContext
	// class UPCGPointData* ToPointDataWithContext(FPCGContext& Context);                                                       // [0xa5be4a0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PCG.PCGSpatialData.ToPointData
	// class UPCGPointData* ToPointData();                                                                                      // [0xa5be47c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PCG.PCGSpatialData.Subtract
	// class UPCGDifferenceData* Subtract(class UPCGSpatialData* InOther);                                                      // [0xa5be3e8] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PCG.PCGSpatialData.ProjectOn
	// class UPCGSpatialData* ProjectOn(class UPCGSpatialData* InOther, FPCGProjectionParams& InParams);                        // [0xa5be108] Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PCG.PCGSpatialData.MutableMetadata
	// class UPCGMetadata* MutableMetadata();                                                                                   // [0x3c5146c] Native|Public|BlueprintCallable 
	// Function /Script/PCG.PCGSpatialData.K2_SamplePoint
	// bool K2_SamplePoint(FTransform& Transform, FBox& Bounds, FPCGPoint& OutPoint, class UPCGMetadata* OutMetadata);          // [0xa5bde60] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PCG.PCGSpatialData.K2_ProjectPoint
	// bool K2_ProjectPoint(FTransform& InTransform, FBox& InBounds, FPCGProjectionParams& InParams, FPCGPoint& OutPoint, class UPCGMetadata* OutMetadata); // [0xa5bdb54] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PCG.PCGSpatialData.IntersectWith
	// class UPCGIntersectionData* IntersectWith(class UPCGSpatialData* InOther);                                               // [0xa5bdac0] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PCG.PCGSpatialData.InitializeFromData
	// void InitializeFromData(class UPCGSpatialData* InSource, class UPCGMetadata* InMetadataParentOverride, bool bInheritMetadata, bool bInheritAttributes); // [0xa5bd970] Final|Native|Public|BlueprintCallable 
	// Function /Script/PCG.PCGSpatialData.HasNonTrivialTransform
	// bool HasNonTrivialTransform();                                                                                           // [0x8e91164] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PCG.PCGSpatialData.GetStrictBounds
	// FBox GetStrictBounds();                                                                                                  // [0xa5bd5ec] Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PCG.PCGSpatialData.GetNormal
	// FVector GetNormal();                                                                                                     // [0xa5bd304] Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PCG.PCGSpatialData.GetDimension
	// int32_t GetDimension();                                                                                                  // [0x695188c] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PCG.PCGSpatialData.GetDensityAtPosition
	// float GetDensityAtPosition(FVector& InPosition);                                                                         // [0xa5bd22c] Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PCG.PCGSpatialData.GetBounds
	// FBox GetBounds();                                                                                                        // [0xa5bd1e0] Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PCG.PCGSpatialData.CreateEmptyMetadata
	// class UPCGMetadata* CreateEmptyMetadata();                                                                               // [0xa5bd16c] Final|Native|Public|BlueprintCallable 
	// Function /Script/PCG.PCGSpatialData.ConstMetadata
	// class UPCGMetadata* ConstMetadata();                                                                                     // [0x68143f8] Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/PCG.PCGSpatialDataWithPointCache
/// Size: 0x0050 (0x000080 - 0x0000D0)
class UPCGSpatialDataWithPointCache : public UPCGSpatialData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	CMember(class UPCGPointData*)                      CachedPointData                                             OFFSET(get<T>, {0x80, 8, 0, 0})
	CMember(TArray<FBox>)                              CachedBoundedPointDataBoxes                                 OFFSET(get<T>, {0x88, 16, 0, 0})
	CMember(TArray<class UPCGPointData*>)              CachedBoundedPointData                                      OFFSET(get<T>, {0x98, 16, 0, 0})
};

/// Class /Script/PCG.PCGCollisionShapeData
/// Size: 0x00F0 (0x0000D0 - 0x0001C0)
class UPCGCollisionShapeData : public UPCGSpatialDataWithPointCache
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 448;

public:
	SMember(FTransform)                                Transform                                                   OFFSET(getStruct<T>, {0xD0, 96, 0, 0})
	SMember(FBox)                                      CachedBounds                                                OFFSET(getStruct<T>, {0x148, 56, 0, 0})
	SMember(FBox)                                      CachedStrictBounds                                          OFFSET(getStruct<T>, {0x180, 56, 0, 0})
};

/// Class /Script/PCG.PCGCombinePointsSettings
/// Size: 0x0068 (0x0000A8 - 0x000110)
class UPCGCombinePointsSettings : public UPCGSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
	DMember(bool)                                      bCenterPivot                                                OFFSET(get<bool>, {0xA8, 1, 0, 0})
	DMember(bool)                                      bUseFirstPointTransform                                     OFFSET(get<bool>, {0xA9, 1, 0, 0})
	SMember(FTransform)                                PointTransform                                              OFFSET(getStruct<T>, {0xB0, 96, 0, 0})
};

/// Class /Script/PCG.PCGConvexHull2DSettings
/// Size: 0x0000 (0x0000A8 - 0x0000A8)
class UPCGConvexHull2DSettings : public UPCGSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
};

/// Class /Script/PCG.PCGCreatePointsSettings
/// Size: 0x0018 (0x0000A8 - 0x0000C0)
class UPCGCreatePointsSettings : public UPCGSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	CMember(TArray<FPCGPoint>)                         PointsToCreate                                              OFFSET(get<T>, {0xA8, 16, 0, 0})
	CMember(EPCGCoordinateSpace)                       CoordinateSpace                                             OFFSET(get<T>, {0xB8, 1, 0, 0})
	DMember(bool)                                      bCullPointsOutsideVolume                                    OFFSET(get<bool>, {0xB9, 1, 0, 0})
};

/// Class /Script/PCG.PCGCreatePointsGridSettings
/// Size: 0x0038 (0x0000A8 - 0x0000E0)
class UPCGCreatePointsGridSettings : public UPCGSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	SMember(FVector)                                   GridExtents                                                 OFFSET(getStruct<T>, {0xA8, 24, 0, 0})
	SMember(FVector)                                   CellSize                                                    OFFSET(getStruct<T>, {0xC0, 24, 0, 0})
	CMember(EPCGCoordinateSpace)                       CoordinateSpace                                             OFFSET(get<T>, {0xD8, 1, 0, 0})
	DMember(bool)                                      bSetPointsBounds                                            OFFSET(get<bool>, {0xD9, 1, 0, 0})
	DMember(bool)                                      bCullPointsOutsideVolume                                    OFFSET(get<bool>, {0xDA, 1, 0, 0})
	CMember(EPCGPointPosition)                         PointPosition                                               OFFSET(get<T>, {0xDB, 1, 0, 0})
};

/// Class /Script/PCG.PCGCullPointsOutsideActorBoundsSettings
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UPCGCullPointsOutsideActorBoundsSettings : public UPCGSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	DMember(float)                                     BoundsExpansion                                             OFFSET(get<float>, {0xA8, 4, 0, 0})
};

/// Class /Script/PCG.PCGDataAsset
/// Size: 0x0040 (0x000028 - 0x000068)
class UPCGDataAsset : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FPCGDataCollection)                        Data                                                        OFFSET(getStruct<T>, {0x28, 48, 0, 0})
	SMember(FString)                                   Name                                                        OFFSET(getStruct<T>, {0x58, 16, 0, 0})
};

/// Class /Script/PCG.PCGExternalDataSettings
/// Size: 0x0050 (0x0000A8 - 0x0000F8)
class UPCGExternalDataSettings : public UPCGSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
	CMember(TMap<FString, FPCGAttributePropertyInputSelector>) AttributeMapping                                    OFFSET(get<T>, {0xA8, 80, 0, 0})
};

/// Class /Script/PCG.PCGLoadDataTableSettings
/// Size: 0x0028 (0x0000F8 - 0x000120)
class UPCGLoadDataTableSettings : public UPCGExternalDataSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	CMember(TWeakObjectPtr<UDataTable*>)               DataTable                                                   OFFSET(get<T>, {0xF8, 32, 0, 0})
	CMember(EPCGExclusiveDataType)                     OutputType                                                  OFFSET(get<T>, {0x118, 1, 0, 0})
	DMember(bool)                                      bSynchronousLoad                                            OFFSET(get<bool>, {0x119, 1, 0, 0})
};

/// Class /Script/PCG.PCGManagedResource
/// Size: 0x0010 (0x000028 - 0x000038)
class UPCGManagedResource : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FPCGCrc)                                   Crc                                                         OFFSET(getStruct<T>, {0x28, 8, 0, 0})
	DMember(bool)                                      bIsMarkedUnused                                             OFFSET(get<bool>, {0x30, 1, 0, 0})
};

/// Class /Script/PCG.PCGManagedComponent
/// Size: 0x0020 (0x000038 - 0x000058)
class UPCGManagedComponent : public UPCGManagedResource
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(TWeakObjectPtr<UActorComponent*>)          GeneratedComponent                                          OFFSET(get<T>, {0x38, 32, 0, 0})
};

/// Class /Script/PCG.PCGManagedDebugDrawComponent
/// Size: 0x0000 (0x000058 - 0x000058)
class UPCGManagedDebugDrawComponent : public UPCGManagedComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
};

/// Class /Script/PCG.PCGDebugDrawComponent
/// Size: 0x0010 (0x000550 - 0x000560)
class UPCGDebugDrawComponent : public UDebugDrawComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1376;

public:
};

/// Class /Script/PCG.PCGDeleteAttributesSettings
/// Size: 0x0018 (0x0000A8 - 0x0000C0)
class UPCGDeleteAttributesSettings : public UPCGSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	CMember(EPCGAttributeFilterOperation)              Operation                                                   OFFSET(get<T>, {0xA8, 4, 0, 0})
	SMember(FString)                                   SelectedAttributes                                          OFFSET(getStruct<T>, {0xB0, 16, 0, 0})
};

/// Class /Script/PCG.PCGDeleteTagsSettings
/// Size: 0x0018 (0x0000A8 - 0x0000C0)
class UPCGDeleteTagsSettings : public UPCGSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	CMember(EPCGTagFilterOperation)                    Operation                                                   OFFSET(get<T>, {0xA8, 4, 0, 0})
	SMember(FString)                                   SelectedTags                                                OFFSET(getStruct<T>, {0xB0, 16, 0, 0})
};

/// Class /Script/PCG.PCGDistanceSettings
/// Size: 0x0048 (0x0000A8 - 0x0000F0)
class UPCGDistanceSettings : public UPCGSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	DMember(bool)                                      bOutputToAttribute                                          OFFSET(get<bool>, {0xA8, 1, 0, 0})
	SMember(FPCGAttributePropertySelector)             OutputAttribute                                             OFFSET(getStruct<T>, {0xB0, 40, 0, 0})
	DMember(bool)                                      bOutputDistanceVector                                       OFFSET(get<bool>, {0xD8, 1, 0, 0})
	DMember(bool)                                      bSetDensity                                                 OFFSET(get<bool>, {0xD9, 1, 0, 0})
	DMember(double)                                    MaximumDistance                                             OFFSET(get<double>, {0xE0, 8, 0, 0})
	CMember(PCGDistanceShape)                          SourceShape                                                 OFFSET(get<T>, {0xE8, 4, 0, 0})
	CMember(PCGDistanceShape)                          TargetShape                                                 OFFSET(get<T>, {0xEC, 4, 0, 0})
};

/// Class /Script/PCG.PCGDuplicatePointSettings
/// Size: 0x0088 (0x0000A8 - 0x000130)
class UPCGDuplicatePointSettings : public UPCGSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	DMember(int32_t)                                   Iterations                                                  OFFSET(get<int32_t>, {0xA8, 4, 0, 0})
	SMember(FVector)                                   Direction                                                   OFFSET(getStruct<T>, {0xB0, 24, 0, 0})
	DMember(bool)                                      bDirectionAppliedInRelativeSpace                            OFFSET(get<bool>, {0xC8, 1, 0, 0})
	DMember(bool)                                      bOutputSourcePoint                                          OFFSET(get<bool>, {0xC9, 1, 0, 0})
	SMember(FTransform)                                PointTransform                                              OFFSET(getStruct<T>, {0xD0, 96, 0, 0})
};

/// Class /Script/PCG.PCGBadOutputsNodeSettings
/// Size: 0x0000 (0x0000A8 - 0x0000A8)
class UPCGBadOutputsNodeSettings : public UPCGSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
};

/// Class /Script/PCG.PCGEngineSettings
/// Size: 0x0020 (0x000030 - 0x000050)
class UPCGEngineSettings : public UDeveloperSettingsBackedByCVars
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FVector)                                   VolumeScale                                                 OFFSET(getStruct<T>, {0x30, 24, 0, 0})
	DMember(bool)                                      bGenerateOnDrop                                             OFFSET(get<bool>, {0x48, 1, 0, 0})
	DMember(bool)                                      bDisplayCullingStateWhenDebugging                           OFFSET(get<bool>, {0x49, 1, 0, 0})
};

/// Class /Script/PCG.PCGFilterDataBaseSettings
/// Size: 0x0000 (0x0000A8 - 0x0000A8)
class UPCGFilterDataBaseSettings : public UPCGSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
};

/// Class /Script/PCG.PCGFilterByAttributeSettings
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UPCGFilterByAttributeSettings : public UPCGFilterDataBaseSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	SMember(FName)                                     Attribute                                                   OFFSET(getStruct<T>, {0xA8, 4, 0, 0})
};

/// Class /Script/PCG.PCGGatherSettings
/// Size: 0x0000 (0x0000A8 - 0x0000A8)
class UPCGGatherSettings : public UPCGSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
};

/// Class /Script/PCG.PCGGenSourceBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UPCGGenSourceBase : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/PCG.PCGGetActorPropertySettings
/// Size: 0x0058 (0x0000A8 - 0x000100)
class UPCGGetActorPropertySettings : public UPCGSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	SMember(FPCGActorSelectorSettings)                 ActorSelector                                               OFFSET(getStruct<T>, {0xA8, 32, 0, 0})
	DMember(bool)                                      bSelectComponent                                            OFFSET(get<bool>, {0xC8, 1, 0, 0})
	CMember(class UClass*)                             ComponentClass                                              OFFSET(get<T>, {0xD0, 8, 0, 0})
	SMember(FName)                                     PropertyName                                                OFFSET(getStruct<T>, {0xD8, 4, 0, 0})
	DMember(bool)                                      bForceObjectAndStructExtraction                             OFFSET(get<bool>, {0xDC, 1, 0, 0})
	SMember(FName)                                     OutputAttributeName                                         OFFSET(getStruct<T>, {0xE0, 4, 0, 0})
	DMember(bool)                                      bAlwaysRequeryActors                                        OFFSET(get<bool>, {0xE4, 1, 0, 0})
	CMember(EPCGActorSelection)                        ActorSelection                                              OFFSET(get<T>, {0xE5, 1, 0, 0})
	SMember(FName)                                     ActorSelectionTag                                           OFFSET(getStruct<T>, {0xE8, 4, 0, 0})
	SMember(FName)                                     ActorSelectionName                                          OFFSET(getStruct<T>, {0xEC, 4, 0, 0})
	CMember(class UClass*)                             ActorSelectionClass                                         OFFSET(get<T>, {0xF0, 8, 0, 0})
	CMember(EPCGActorFilter)                           ActorFilter                                                 OFFSET(get<T>, {0xF8, 1, 0, 0})
	DMember(bool)                                      bIncludeChildren                                            OFFSET(get<bool>, {0xF9, 1, 0, 0})
};

/// Class /Script/PCG.PCGDummyGetPropertyTest
/// Size: 0x0010 (0x000028 - 0x000038)
class UPCGDummyGetPropertyTest : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(int64_t)                                   Int64Property                                               OFFSET(get<int64_t>, {0x28, 8, 0, 0})
	DMember(double)                                    DoubleProperty                                              OFFSET(get<double>, {0x30, 8, 0, 0})
};

/// Class /Script/PCG.PCGUnitTestDummyActor
/// Size: 0x0200 (0x000290 - 0x000490)
class APCGUnitTestDummyActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1168;

public:
	DMember(int32_t)                                   IntProperty                                                 OFFSET(get<int32_t>, {0x290, 4, 0, 0})
	DMember(float)                                     FloatProperty                                               OFFSET(get<float>, {0x294, 4, 0, 0})
	DMember(int64_t)                                   Int64Property                                               OFFSET(get<int64_t>, {0x298, 8, 0, 0})
	DMember(double)                                    DoubleProperty                                              OFFSET(get<double>, {0x2A0, 8, 0, 0})
	DMember(bool)                                      BoolProperty                                                OFFSET(get<bool>, {0x2A8, 1, 0, 0})
	SMember(FName)                                     NameProperty                                                OFFSET(getStruct<T>, {0x2AC, 4, 0, 0})
	SMember(FString)                                   StringProperty                                              OFFSET(getStruct<T>, {0x2B0, 16, 0, 0})
	CMember(EPCGUnitTestDummyEnum)                     EnumProperty                                                OFFSET(get<T>, {0x2C0, 8, 0, 0})
	SMember(FVector)                                   VectorProperty                                              OFFSET(getStruct<T>, {0x2C8, 24, 0, 0})
	SMember(FVector4)                                  Vector4Property                                             OFFSET(getStruct<T>, {0x2E0, 32, 0, 0})
	SMember(FTransform)                                TransformProperty                                           OFFSET(getStruct<T>, {0x300, 96, 0, 0})
	SMember(FRotator)                                  RotatorProperty                                             OFFSET(getStruct<T>, {0x360, 24, 0, 0})
	SMember(FQuat)                                     QuatProperty                                                OFFSET(getStruct<T>, {0x380, 32, 0, 0})
	SMember(FSoftObjectPath)                           SoftObjectPathProperty                                      OFFSET(getStruct<T>, {0x3A0, 24, 0, 0})
	SMember(FSoftClassPath)                            SoftClassPathProperty                                       OFFSET(getStruct<T>, {0x3B8, 24, 0, 0})
	CMember(class UClass*)                             ClassProperty                                               OFFSET(get<T>, {0x3D0, 8, 0, 0})
	CMember(class UPCGDummyGetPropertyTest*)           ObjectProperty                                              OFFSET(get<T>, {0x3D8, 8, 0, 0})
	SMember(FVector2D)                                 Vector2Property                                             OFFSET(getStruct<T>, {0x3E0, 16, 0, 0})
	SMember(FColor)                                    ColorProperty                                               OFFSET(getStruct<T>, {0x3F0, 4, 0, 0})
	SMember(FLinearColor)                              LinearColorProperty                                         OFFSET(getStruct<T>, {0x3F4, 16, 0, 0})
	SMember(FPCGTestMyColorStruct)                     PCGColorProperty                                            OFFSET(getStruct<T>, {0x408, 32, 0, 0})
	CMember(TArray<int32_t>)                           ArrayOfIntsProperty                                         OFFSET(get<T>, {0x428, 16, 0, 0})
	CMember(TArray<FVector>)                           ArrayOfVectorsProperty                                      OFFSET(get<T>, {0x438, 16, 0, 0})
	CMember(TArray<FPCGTestMyColorStruct>)             ArrayOfStructsProperty                                      OFFSET(get<T>, {0x448, 16, 0, 0})
	CMember(TArray<class UPCGDummyGetPropertyTest*>)   ArrayOfObjectsProperty                                      OFFSET(get<T>, {0x458, 16, 0, 0})
	SMember(FPCGDummyGetPropertyStruct)                DummyStruct                                                 OFFSET(getStruct<T>, {0x468, 40, 0, 0})
};

/// Class /Script/PCG.PCGUnitTestDummyComponent
/// Size: 0x0008 (0x0000A0 - 0x0000A8)
class UPCGUnitTestDummyComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	DMember(int32_t)                                   IntProperty                                                 OFFSET(get<int32_t>, {0xA0, 4, 0, 0})
};

/// Class /Script/PCG.PCGGetBoundsSettings
/// Size: 0x0000 (0x0000A8 - 0x0000A8)
class UPCGGetBoundsSettings : public UPCGSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
};

/// Class /Script/PCG.PCGGetPropertyFromObjectPathSettings
/// Size: 0x0048 (0x0000A8 - 0x0000F0)
class UPCGGetPropertyFromObjectPathSettings : public UPCGSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	CMember(TArray<FSoftObjectPath>)                   ObjectPathsToExtract                                        OFFSET(get<T>, {0xA8, 16, 0, 0})
	SMember(FPCGAttributePropertyInputSelector)        InputSource                                                 OFFSET(getStruct<T>, {0xB8, 40, 0, 0})
	SMember(FName)                                     PropertyName                                                OFFSET(getStruct<T>, {0xE0, 4, 0, 0})
	DMember(bool)                                      bForceObjectAndStructExtraction                             OFFSET(get<bool>, {0xE4, 1, 0, 0})
	SMember(FName)                                     OutputAttributeName                                         OFFSET(getStruct<T>, {0xE8, 4, 0, 0})
	DMember(bool)                                      bSynchronousLoad                                            OFFSET(get<bool>, {0xEC, 1, 0, 0})
	DMember(bool)                                      bPersistAllData                                             OFFSET(get<bool>, {0xED, 1, 0, 0})
	DMember(bool)                                      bSilenceErrorOnEmptyObjectPath                              OFFSET(get<bool>, {0xEE, 1, 0, 0})
};

/// Class /Script/PCG.PCGGraphAuthoringTestHelperSettings
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UPCGGraphAuthoringTestHelperSettings : public UPCGSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
};

/// Class /Script/PCG.PCGGraphParametersHelpers
/// Size: 0x0000 (0x000028 - 0x000028)
class UPCGGraphParametersHelpers : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/PCG.PCGGraphParametersHelpers.SetVectorParameter
	// void SetVectorParameter(class UPCGGraphInterface* GraphInterface, FName Name, FVector& Value);                           // [0xa53f3c4] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGGraphParametersHelpers.SetVector4Parameter
	// void SetVector4Parameter(class UPCGGraphInterface* GraphInterface, FName Name, FVector4& Value);                         // [0xa53f258] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGGraphParametersHelpers.SetVector2DParameter
	// void SetVector2DParameter(class UPCGGraphInterface* GraphInterface, FName Name, FVector2D& Value);                       // [0xa53f100] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGGraphParametersHelpers.SetTransformParameter
	// void SetTransformParameter(class UPCGGraphInterface* GraphInterface, FName Name, FTransform& Value);                     // [0xa53ef3c] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGGraphParametersHelpers.SetStringParameter
	// void SetStringParameter(class UPCGGraphInterface* GraphInterface, FName Name, FString Value);                            // [0xa53ed08] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PCG.PCGGraphParametersHelpers.SetSoftObjectPathParameter
	// void SetSoftObjectPathParameter(class UPCGGraphInterface* GraphInterface, FName Name, FSoftObjectPath& Value);           // [0xa53eba0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGGraphParametersHelpers.SetSoftObjectParameter
	// void SetSoftObjectParameter(class UPCGGraphInterface* GraphInterface, FName Name, TWeakObjectPtr<UObject*>& Value);      // [0xa53ea44] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGGraphParametersHelpers.SetSoftClassParameter
	// void SetSoftClassParameter(class UPCGGraphInterface* GraphInterface, FName Name, TWeakObjectPtr<UClass*>& Value);        // [0xa53ea44] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGGraphParametersHelpers.SetRotatorParameter
	// void SetRotatorParameter(class UPCGGraphInterface* GraphInterface, FName Name, FRotator& Value);                         // [0xa53e8ec] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGGraphParametersHelpers.SetQuaternionParameter
	// void SetQuaternionParameter(class UPCGGraphInterface* GraphInterface, FName Name, FQuat& Value);                         // [0xa53e794] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGGraphParametersHelpers.SetObjectParameter
	// void SetObjectParameter(class UPCGGraphInterface* GraphInterface, FName Name, class UObject* Value);                     // [0xa53de80] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PCG.PCGGraphParametersHelpers.SetNameParameter
	// void SetNameParameter(class UPCGGraphInterface* GraphInterface, FName Name, FName Value);                                // [0xa53e664] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PCG.PCGGraphParametersHelpers.SetInt64Parameter
	// void SetInt64Parameter(class UPCGGraphInterface* GraphInterface, FName Name, int64_t Value);                             // [0xa53e534] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PCG.PCGGraphParametersHelpers.SetInt32Parameter
	// void SetInt32Parameter(class UPCGGraphInterface* GraphInterface, FName Name, int32_t Value);                             // [0xa53e404] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PCG.PCGGraphParametersHelpers.SetFloatParameter
	// void SetFloatParameter(class UPCGGraphInterface* GraphInterface, FName Name, float Value);                               // [0xa53e2c8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PCG.PCGGraphParametersHelpers.SetEnumParameter
	// void SetEnumParameter(class UPCGGraphInterface* GraphInterface, FName Name, char Value, class UEnum* Enum);              // [0xa53e0f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PCG.PCGGraphParametersHelpers.SetDoubleParameter
	// void SetDoubleParameter(class UPCGGraphInterface* GraphInterface, FName Name, double Value);                             // [0xa53dfb0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PCG.PCGGraphParametersHelpers.SetClassParameter
	// void SetClassParameter(class UPCGGraphInterface* GraphInterface, FName Name, class UClass* Value);                       // [0xa53de80] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PCG.PCGGraphParametersHelpers.SetByteParameter
	// void SetByteParameter(class UPCGGraphInterface* GraphInterface, FName Name, char Value);                                 // [0xa53dd50] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PCG.PCGGraphParametersHelpers.SetBoolParameter
	// void SetBoolParameter(class UPCGGraphInterface* GraphInterface, FName Name, bool bValue);                                // [0xa53dc1c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PCG.PCGGraphParametersHelpers.IsOverridden
	// bool IsOverridden(class UPCGGraphInterface* GraphInterface, FName Name);                                                 // [0xa53db48] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PCG.PCGGraphParametersHelpers.GetVectorParameter
	// FVector GetVectorParameter(class UPCGGraphInterface* GraphInterface, FName Name);                                        // [0xa53d9c8] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGGraphParametersHelpers.GetVector4Parameter
	// FVector4 GetVector4Parameter(class UPCGGraphInterface* GraphInterface, FName Name);                                      // [0xa53d824] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGGraphParametersHelpers.GetVector2DParameter
	// FVector2D GetVector2DParameter(class UPCGGraphInterface* GraphInterface, FName Name);                                    // [0xa53d6cc] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGGraphParametersHelpers.GetTransformParameter
	// FTransform GetTransformParameter(class UPCGGraphInterface* GraphInterface, FName Name);                                  // [0xa53d5c0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGGraphParametersHelpers.GetStringParameter
	// FString GetStringParameter(class UPCGGraphInterface* GraphInterface, FName Name);                                        // [0xa53d39c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PCG.PCGGraphParametersHelpers.GetSoftObjectPathParameter
	// FSoftObjectPath GetSoftObjectPathParameter(class UPCGGraphInterface* GraphInterface, FName Name);                        // [0xa53d1c8] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGGraphParametersHelpers.GetSoftObjectParameter
	// TWeakObjectPtr<UObject*> GetSoftObjectParameter(class UPCGGraphInterface* GraphInterface, FName Name);                   // [0xa53d010] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PCG.PCGGraphParametersHelpers.GetSoftClassParameter
	// TWeakObjectPtr<UClass*> GetSoftClassParameter(class UPCGGraphInterface* GraphInterface, FName Name);                     // [0xa53ce58] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PCG.PCGGraphParametersHelpers.GetRotatorParameter
	// FRotator GetRotatorParameter(class UPCGGraphInterface* GraphInterface, FName Name);                                      // [0xa53ccd8] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGGraphParametersHelpers.GetQuaternionParameter
	// FQuat GetQuaternionParameter(class UPCGGraphInterface* GraphInterface, FName Name);                                      // [0xa53cb60] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGGraphParametersHelpers.GetObjectParameter
	// class UObject* GetObjectParameter(class UPCGGraphInterface* GraphInterface, FName Name);                                 // [0xa53ca9c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PCG.PCGGraphParametersHelpers.GetNameParameter
	// FName GetNameParameter(class UPCGGraphInterface* GraphInterface, FName Name);                                            // [0xa53c970] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PCG.PCGGraphParametersHelpers.GetInt64Parameter
	// int64_t GetInt64Parameter(class UPCGGraphInterface* GraphInterface, FName Name);                                         // [0xa53c8ac] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PCG.PCGGraphParametersHelpers.GetInt32Parameter
	// int32_t GetInt32Parameter(class UPCGGraphInterface* GraphInterface, FName Name);                                         // [0xa53c7ec] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PCG.PCGGraphParametersHelpers.GetFloatParameter
	// float GetFloatParameter(class UPCGGraphInterface* GraphInterface, FName Name);                                           // [0xa53c728] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PCG.PCGGraphParametersHelpers.GetEnumParameter
	// char GetEnumParameter(class UPCGGraphInterface* GraphInterface, FName Name);                                             // [0xa53c49c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PCG.PCGGraphParametersHelpers.GetDoubleParameter
	// double GetDoubleParameter(class UPCGGraphInterface* GraphInterface, FName Name);                                         // [0xa53c664] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PCG.PCGGraphParametersHelpers.GetClassParameter
	// class UClass* GetClassParameter(class UPCGGraphInterface* GraphInterface, FName Name);                                   // [0xa53c5a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PCG.PCGGraphParametersHelpers.GetByteParameter
	// char GetByteParameter(class UPCGGraphInterface* GraphInterface, FName Name);                                             // [0xa53c49c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PCG.PCGGraphParametersHelpers.GetBoolParameter
	// bool GetBoolParameter(class UPCGGraphInterface* GraphInterface, FName Name);                                             // [0xa53c398] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/PCG.PCGFunctionPrototypes
/// Size: 0x0000 (0x000028 - 0x000028)
class UPCGFunctionPrototypes : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/PCG.PCGFunctionPrototypes.PrototypeWithPointAndMetadata
	// void PrototypeWithPointAndMetadata(FPCGPoint Point, class UPCGMetadata* MetaData);                                       // [0xa5423e8] Final|Native|Private 
	// Function /Script/PCG.PCGFunctionPrototypes.PrototypeWithNoParams
	// void PrototypeWithNoParams();                                                                                            // [0x36203b0] Final|Native|Private 
};

/// Class /Script/PCG.PCGHiGenGridSizeSettings
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UPCGHiGenGridSizeSettings : public UPCGSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	CMember(EPCGHiGenGrid)                             HiGenGridSize                                               OFFSET(get<T>, {0xA8, 4, 0, 0})
};

/// Class /Script/PCG.PCGLoadDataAssetSettings
/// Size: 0x0048 (0x0000A8 - 0x0000F0)
class UPCGLoadDataAssetSettings : public UPCGSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	CMember(TWeakObjectPtr<UPCGDataAsset*>)            Asset                                                       OFFSET(get<T>, {0xA8, 32, 0, 0})
	CMember(TArray<FPCGPinProperties>)                 Pins                                                        OFFSET(get<T>, {0xC8, 16, 0, 0})
	SMember(FString)                                   AssetName                                                   OFFSET(getStruct<T>, {0xD8, 16, 0, 0})
	DMember(bool)                                      bWarnIfNoAsset                                              OFFSET(get<bool>, {0xE8, 1, 0, 0})
	DMember(bool)                                      bSynchronousLoad                                            OFFSET(get<bool>, {0xE9, 1, 0, 0})
};

/// Class /Script/PCG.PCGMakeConcreteSettings
/// Size: 0x0000 (0x0000A8 - 0x0000A8)
class UPCGMakeConcreteSettings : public UPCGSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
};

/// Class /Script/PCG.PCGMergeAttributesSettings
/// Size: 0x0000 (0x0000A8 - 0x0000A8)
class UPCGMergeAttributesSettings : public UPCGSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
};

/// Class /Script/PCG.PCGMetadataSettingsBase
/// Size: 0x0030 (0x0000A8 - 0x0000D8)
class UPCGMetadataSettingsBase : public UPCGSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	SMember(FPCGAttributePropertyOutputSelector)       OutputTarget                                                OFFSET(getStruct<T>, {0xA8, 40, 0, 0})
	SMember(FName)                                     OutputDataFromPin                                           OFFSET(getStruct<T>, {0xD0, 4, 0, 0})


	/// Functions
	// Function /Script/PCG.PCGMetadataSettingsBase.GetOutputDataFromPinOptions
	// TArray<FName> GetOutputDataFromPinOptions();                                                                             // [0xa5bd340] Final|Native|Protected|Const 
};

/// Class /Script/PCG.PCGMetadataMakeRotatorSettings
/// Size: 0x0080 (0x0000D8 - 0x000158)
class UPCGMetadataMakeRotatorSettings : public UPCGMetadataSettingsBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 344;

public:
	SMember(FPCGAttributePropertyInputSelector)        InputSource1                                                OFFSET(getStruct<T>, {0xD8, 40, 0, 0})
	SMember(FPCGAttributePropertyInputSelector)        InputSource2                                                OFFSET(getStruct<T>, {0x100, 40, 0, 0})
	SMember(FPCGAttributePropertyInputSelector)        InputSource3                                                OFFSET(getStruct<T>, {0x128, 40, 0, 0})
	CMember(EPCGMetadataMakeRotatorOp)                 Operation                                                   OFFSET(get<T>, {0x150, 1, 0, 0})
};

/// Class /Script/PCG.PCGMultiSelectSettings
/// Size: 0x0058 (0x0000A8 - 0x000100)
class UPCGMultiSelectSettings : public UPCGSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	CMember(EPCGControlFlowSelectionMode)              SelectionMode                                               OFFSET(get<T>, {0xA8, 1, 0, 0})
	DMember(int32_t)                                   IntegerSelection                                            OFFSET(get<int32_t>, {0xAC, 4, 0, 0})
	CMember(TArray<int32_t>)                           IntOptions                                                  OFFSET(get<T>, {0xB0, 16, 0, 0})
	SMember(FString)                                   StringSelection                                             OFFSET(getStruct<T>, {0xC0, 16, 0, 0})
	CMember(TArray<FString>)                           StringOptions                                               OFFSET(get<T>, {0xD0, 16, 0, 0})
	SMember(FEnumSelector)                             EnumSelection                                               OFFSET(getStruct<T>, {0xE0, 16, 0, 0})
	CMember(TArray<FName>)                             CachedPinLabels                                             OFFSET(get<T>, {0xF0, 16, 0, 0})
};

/// Class /Script/PCG.PCGMutateSeedSettings
/// Size: 0x0000 (0x0000A8 - 0x0000A8)
class UPCGMutateSeedSettings : public UPCGSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
};

/// Class /Script/PCG.PCGNormalToDensitySettings
/// Size: 0x0030 (0x0000A8 - 0x0000D8)
class UPCGNormalToDensitySettings : public UPCGSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	SMember(FVector)                                   Normal                                                      OFFSET(getStruct<T>, {0xA8, 24, 0, 0})
	DMember(double)                                    Offset                                                      OFFSET(get<double>, {0xC0, 8, 0, 0})
	DMember(double)                                    Strength                                                    OFFSET(get<double>, {0xC8, 8, 0, 0})
	CMember(PCGNormalToDensityMode)                    DensityMode                                                 OFFSET(get<T>, {0xD0, 1, 0, 0})
};

/// Class /Script/PCG.PCGNumberOfElementsBaseSettings
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UPCGNumberOfElementsBaseSettings : public UPCGSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	SMember(FName)                                     OutputAttributeName                                         OFFSET(getStruct<T>, {0xA8, 4, 0, 0})
};

/// Class /Script/PCG.PCGNumberOfPointsSettings
/// Size: 0x0000 (0x0000B0 - 0x0000B0)
class UPCGNumberOfPointsSettings : public UPCGNumberOfElementsBaseSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
};

/// Class /Script/PCG.PCGNumberOfEntriesSettings
/// Size: 0x0000 (0x0000B0 - 0x0000B0)
class UPCGNumberOfEntriesSettings : public UPCGNumberOfElementsBaseSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
};

/// Class /Script/PCG.PCGSettingsWithDynamicInputs
/// Size: 0x0010 (0x0000A8 - 0x0000B8)
class UPCGSettingsWithDynamicInputs : public UPCGSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	CMember(TArray<FPCGPinProperties>)                 DynamicInputPinProperties                                   OFFSET(get<T>, {0xA8, 16, 0, 0})
};

/// Class /Script/PCG.PCGOuterIntersectionSettings
/// Size: 0x0008 (0x0000B8 - 0x0000C0)
class UPCGOuterIntersectionSettings : public UPCGSettingsWithDynamicInputs
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	CMember(EPCGIntersectionDensityFunction)           DensityFunction                                             OFFSET(get<T>, {0xB8, 1, 0, 0})
	DMember(bool)                                      bIgnorePinsWithNoInput                                      OFFSET(get<bool>, {0xB9, 1, 0, 0})
	DMember(bool)                                      bKeepZeroDensityPoints                                      OFFSET(get<bool>, {0xBA, 1, 0, 0})
};

/// Class /Script/PCG.PCGPointNeighborhoodSettings
/// Size: 0x0020 (0x0000A8 - 0x0000C8)
class UPCGPointNeighborhoodSettings : public UPCGSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	DMember(double)                                    SearchDistance                                              OFFSET(get<double>, {0xA8, 8, 0, 0})
	DMember(bool)                                      bSetDistanceToAttribute                                     OFFSET(get<bool>, {0xB0, 1, 0, 0})
	SMember(FName)                                     DistanceAttribute                                           OFFSET(getStruct<T>, {0xB4, 4, 0, 0})
	DMember(bool)                                      bSetAveragePositionToAttribute                              OFFSET(get<bool>, {0xB8, 1, 0, 0})
	SMember(FName)                                     AveragePositionAttribute                                    OFFSET(getStruct<T>, {0xBC, 4, 0, 0})
	CMember(EPCGPointNeighborhoodDensityMode)          SetDensity                                                  OFFSET(get<T>, {0xC0, 4, 0, 0})
	DMember(bool)                                      bSetAveragePosition                                         OFFSET(get<bool>, {0xC4, 1, 0, 0})
	DMember(bool)                                      bSetAverageColor                                            OFFSET(get<bool>, {0xC5, 1, 0, 0})
	DMember(bool)                                      bWeightedAverage                                            OFFSET(get<bool>, {0xC6, 1, 0, 0})
};

/// Class /Script/PCG.PCGManagedDebugStringMessageKey
/// Size: 0x0008 (0x000038 - 0x000040)
class UPCGManagedDebugStringMessageKey : public UPCGManagedResource
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(uint64_t)                                  HashKey                                                     OFFSET(get<uint64_t>, {0x38, 8, 0, 0})
};

/// Class /Script/PCG.PCGPrintElementSettings
/// Size: 0x0030 (0x0000A8 - 0x0000D8)
class UPCGPrintElementSettings : public UPCGSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	SMember(FString)                                   PrintString                                                 OFFSET(getStruct<T>, {0xA8, 16, 0, 0})
	CMember(EPCGPrintVerbosity)                        Verbosity                                                   OFFSET(get<T>, {0xB8, 1, 0, 0})
	SMember(FString)                                   CustomPrefix                                                OFFSET(getStruct<T>, {0xC0, 16, 0, 0})
	DMember(bool)                                      bDisplayOnNode                                              OFFSET(get<bool>, {0xD0, 1, 0, 0})
	DMember(bool)                                      bPrintPerComponent                                          OFFSET(get<bool>, {0xD1, 1, 0, 0})
	DMember(bool)                                      bPrefixWithOwner                                            OFFSET(get<bool>, {0xD2, 1, 0, 0})
	DMember(bool)                                      bPrefixWithComponent                                        OFFSET(get<bool>, {0xD3, 1, 0, 0})
	DMember(bool)                                      bPrefixWithGraph                                            OFFSET(get<bool>, {0xD4, 1, 0, 0})
	DMember(bool)                                      bPrefixWithNode                                             OFFSET(get<bool>, {0xD5, 1, 0, 0})
	DMember(bool)                                      bEnablePrint                                                OFFSET(get<bool>, {0xD6, 1, 0, 0})
};

/// Class /Script/PCG.PCGQualityBranchSettings
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UPCGQualityBranchSettings : public UPCGSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	DMember(bool)                                      bUseLowPin                                                  OFFSET(get<bool>, {0xA8, 1, 0, 0})
	DMember(bool)                                      bUseMediumPin                                               OFFSET(get<bool>, {0xA9, 1, 0, 0})
	DMember(bool)                                      bUseHighPin                                                 OFFSET(get<bool>, {0xAA, 1, 0, 0})
	DMember(bool)                                      bUseEpicPin                                                 OFFSET(get<bool>, {0xAB, 1, 0, 0})
	DMember(bool)                                      bUseCinematicPin                                            OFFSET(get<bool>, {0xAC, 1, 0, 0})
};

/// Class /Script/PCG.PCGQualitySelectSettings
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UPCGQualitySelectSettings : public UPCGSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	DMember(bool)                                      bUseLowPin                                                  OFFSET(get<bool>, {0xA8, 1, 0, 0})
	DMember(bool)                                      bUseMediumPin                                               OFFSET(get<bool>, {0xA9, 1, 0, 0})
	DMember(bool)                                      bUseHighPin                                                 OFFSET(get<bool>, {0xAA, 1, 0, 0})
	DMember(bool)                                      bUseEpicPin                                                 OFFSET(get<bool>, {0xAB, 1, 0, 0})
	DMember(bool)                                      bUseCinematicPin                                            OFFSET(get<bool>, {0xAC, 1, 0, 0})
};

/// Class /Script/PCG.PCGReplaceTagsSettings
/// Size: 0x0020 (0x0000A8 - 0x0000C8)
class UPCGReplaceTagsSettings : public UPCGSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	SMember(FString)                                   SelectedTags                                                OFFSET(getStruct<T>, {0xA8, 16, 0, 0})
	SMember(FString)                                   ReplacedTags                                                OFFSET(getStruct<T>, {0xB8, 16, 0, 0})
};

/// Class /Script/PCG.PCGRerouteSettings
/// Size: 0x0000 (0x0000A8 - 0x0000A8)
class UPCGRerouteSettings : public UPCGSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
};

/// Class /Script/PCG.PCGNamedRerouteBaseSettings
/// Size: 0x0000 (0x0000A8 - 0x0000A8)
class UPCGNamedRerouteBaseSettings : public UPCGRerouteSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
};

/// Class /Script/PCG.PCGNamedRerouteDeclarationSettings
/// Size: 0x0000 (0x0000A8 - 0x0000A8)
class UPCGNamedRerouteDeclarationSettings : public UPCGNamedRerouteBaseSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
};

/// Class /Script/PCG.PCGNamedRerouteUsageSettings
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UPCGNamedRerouteUsageSettings : public UPCGNamedRerouteBaseSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	CMember(class UPCGNamedRerouteDeclarationSettings*) Declaration                                                OFFSET(get<T>, {0xA8, 8, 0, 0})
};

/// Class /Script/PCG.PCGResetPointCenterSettings
/// Size: 0x0018 (0x0000A8 - 0x0000C0)
class UPCGResetPointCenterSettings : public UPCGSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	SMember(FVector)                                   PointCenterLocation                                         OFFSET(getStruct<T>, {0xA8, 24, 0, 0})
};

/// Class /Script/PCG.PCGSampleTextureSettings
/// Size: 0x0038 (0x0000A8 - 0x0000E0)
class UPCGSampleTextureSettings : public UPCGSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	CMember(EPCGTextureMappingMethod)                  TextureMappingMethod                                        OFFSET(get<T>, {0xA8, 1, 0, 0})
	SMember(FPCGAttributePropertyInputSelector)        UVCoordinatesAttribute                                      OFFSET(getStruct<T>, {0xB0, 40, 0, 0})
	CMember(EPCGTextureAddressMode)                    TilingMode                                                  OFFSET(get<T>, {0xD8, 1, 0, 0})
};

/// Class /Script/PCG.PCGSanityCheckPointDataSettings
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UPCGSanityCheckPointDataSettings : public UPCGSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	DMember(int32_t)                                   MinPointCount                                               OFFSET(get<int32_t>, {0xA8, 4, 0, 0})
	DMember(int32_t)                                   MaxPointCount                                               OFFSET(get<int32_t>, {0xAC, 4, 0, 0})
};

/// Class /Script/PCG.PCGSchedulingPolicyBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UPCGSchedulingPolicyBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/PCG.PCGSortAttributesSettings
/// Size: 0x0030 (0x0000A8 - 0x0000D8)
class UPCGSortAttributesSettings : public UPCGSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	SMember(FPCGAttributePropertyInputSelector)        InputSource                                                 OFFSET(getStruct<T>, {0xA8, 40, 0, 0})
	CMember(EPCGSortMethod)                            SortMethod                                                  OFFSET(get<T>, {0xD0, 1, 0, 0})
};

/// Class /Script/PCG.PCGSplitPointsSettings
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UPCGSplitPointsSettings : public UPCGSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	DMember(float)                                     SplitPosition                                               OFFSET(get<float>, {0xA8, 4, 0, 0})
	CMember(EPCGSplitAxis)                             SplitAxis                                                   OFFSET(get<T>, {0xAC, 4, 0, 0})
};

/// Class /Script/PCG.PCGSwitchSettings
/// Size: 0x0058 (0x0000A8 - 0x000100)
class UPCGSwitchSettings : public UPCGSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	CMember(EPCGControlFlowSelectionMode)              SelectionMode                                               OFFSET(get<T>, {0xA8, 1, 0, 0})
	DMember(int32_t)                                   IntegerSelection                                            OFFSET(get<int32_t>, {0xAC, 4, 0, 0})
	CMember(TArray<int32_t>)                           IntOptions                                                  OFFSET(get<T>, {0xB0, 16, 0, 0})
	SMember(FString)                                   StringSelection                                             OFFSET(getStruct<T>, {0xC0, 16, 0, 0})
	CMember(TArray<FString>)                           StringOptions                                               OFFSET(get<T>, {0xD0, 16, 0, 0})
	SMember(FEnumSelector)                             EnumSelection                                               OFFSET(getStruct<T>, {0xE0, 16, 0, 0})
};

/// Class /Script/PCG.PCGUserParameterGetSettings
/// Size: 0x0018 (0x0000A8 - 0x0000C0)
class UPCGUserParameterGetSettings : public UPCGSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	SMember(FGuid)                                     PropertyGuid                                                OFFSET(getStruct<T>, {0xA8, 16, 0, 0})
	SMember(FName)                                     PropertyName                                                OFFSET(getStruct<T>, {0xB8, 4, 0, 0})
	DMember(bool)                                      bForceObjectAndStructExtraction                             OFFSET(get<bool>, {0xBC, 1, 0, 0})
};

/// Class /Script/PCG.PCGUserParametersData
/// Size: 0x0018 (0x000038 - 0x000050)
class UPCGUserParametersData : public UPCGData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(class UPCGGraphInterface*)                 OriginalGraph                                               OFFSET(get<T>, {0x38, 8, 0, 0})
	SMember(FInstancedStruct)                          UserParameters                                              OFFSET(getStruct<T>, {0x40, 16, 0, 0})
};

/// Class /Script/PCG.PCGVisualizeAttributeSettings
/// Size: 0x0070 (0x0000A8 - 0x000118)
class UPCGVisualizeAttributeSettings : public UPCGSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 280;

public:
	SMember(FPCGAttributePropertyInputSelector)        AttributeSource                                             OFFSET(getStruct<T>, {0xA8, 40, 0, 0})
	SMember(FString)                                   CustomPrefixString                                          OFFSET(getStruct<T>, {0xD0, 16, 0, 0})
	DMember(bool)                                      bPrefixWithIndex                                            OFFSET(get<bool>, {0xE0, 1, 0, 0})
	DMember(bool)                                      bPrefixWithAttributeName                                    OFFSET(get<bool>, {0xE1, 1, 0, 0})
	SMember(FVector)                                   LocalOffset                                                 OFFSET(getStruct<T>, {0xE8, 24, 0, 0})
	SMember(FColor)                                    Color                                                       OFFSET(getStruct<T>, {0x100, 4, 0, 0})
	DMember(double)                                    duration                                                    OFFSET(get<double>, {0x108, 8, 0, 0})
	DMember(int32_t)                                   PointLimit                                                  OFFSET(get<int32_t>, {0x110, 4, 0, 0})
	DMember(bool)                                      bVisualizeEnabled                                           OFFSET(get<bool>, {0x114, 1, 0, 0})
};

/// Class /Script/PCG.PCGDifferenceData
/// Size: 0x0028 (0x0000D0 - 0x0000F8)
class UPCGDifferenceData : public UPCGSpatialDataWithPointCache
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
	DMember(bool)                                      bDiffMetadata                                               OFFSET(get<bool>, {0xD0, 1, 0, 0})
	CMember(class UPCGSpatialData*)                    Source                                                      OFFSET(get<T>, {0xD8, 8, 0, 0})
	CMember(class UPCGSpatialData*)                    Difference                                                  OFFSET(get<T>, {0xE0, 8, 0, 0})
	CMember(class UPCGUnionData*)                      DifferencesUnion                                            OFFSET(get<T>, {0xE8, 8, 0, 0})
	CMember(EPCGDifferenceDensityFunction)             DensityFunction                                             OFFSET(get<T>, {0xF0, 1, 0, 0})


	/// Functions
	// Function /Script/PCG.PCGDifferenceData.SetDensityFunction
	// void SetDensityFunction(EPCGDifferenceDensityFunction InDensityFunction);                                                // [0xa5be1fc] Final|Native|Public|BlueprintCallable 
	// Function /Script/PCG.PCGDifferenceData.Initialize
	// void Initialize(class UPCGSpatialData* InData);                                                                          // [0xa5bd638] Final|Native|Public|BlueprintCallable 
	// Function /Script/PCG.PCGDifferenceData.AddDifference
	// void AddDifference(class UPCGSpatialData* InDifference);                                                                 // [0xa5bd008] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/PCG.PCGIntersectionData
/// Size: 0x0088 (0x0000D0 - 0x000158)
class UPCGIntersectionData : public UPCGSpatialDataWithPointCache
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 344;

public:
	CMember(EPCGIntersectionDensityFunction)           DensityFunction                                             OFFSET(get<T>, {0xD0, 1, 0, 0})
	CMember(class UPCGSpatialData*)                    A                                                           OFFSET(get<T>, {0xD8, 8, 0, 0})
	CMember(class UPCGSpatialData*)                    B                                                           OFFSET(get<T>, {0xE0, 8, 0, 0})
	SMember(FBox)                                      CachedBounds                                                OFFSET(getStruct<T>, {0xE8, 56, 0, 0})
	SMember(FBox)                                      CachedStrictBounds                                          OFFSET(getStruct<T>, {0x120, 56, 0, 0})


	/// Functions
	// Function /Script/PCG.PCGIntersectionData.Initialize
	// void Initialize(class UPCGSpatialData* InA, class UPCGSpatialData* InB);                                                 // [0xa5bd6b8] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/PCG.PCGSurfaceData
/// Size: 0x0060 (0x0000D0 - 0x000130)
class UPCGSurfaceData : public UPCGSpatialDataWithPointCache
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	SMember(FTransform)                                Transform                                                   OFFSET(getStruct<T>, {0xD0, 96, 0, 0})
};

/// Class /Script/PCG.PCGLandscapeData
/// Size: 0x0080 (0x000130 - 0x0001B0)
class UPCGLandscapeData : public UPCGSurfaceData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 432;

public:
	CMember(TArray<TWeakObjectPtr<ALandscapeProxy*>>)  Landscapes                                                  OFFSET(get<T>, {0x130, 16, 0, 0})
	SMember(FBox)                                      Bounds                                                      OFFSET(getStruct<T>, {0x140, 56, 0, 0})
	SMember(FPCGLandscapeDataProps)                    DataProps                                                   OFFSET(getStruct<T>, {0x178, 5, 0, 0})
};

/// Class /Script/PCG.PCGPolyLineData
/// Size: 0x0000 (0x0000D0 - 0x0000D0)
class UPCGPolyLineData : public UPCGSpatialDataWithPointCache
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
};

/// Class /Script/PCG.PCGLandscapeSplineData
/// Size: 0x0020 (0x0000D0 - 0x0000F0)
class UPCGLandscapeSplineData : public UPCGPolyLineData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	CMember(TWeakObjectPtr<ULandscapeSplinesComponent*>) Spline                                                    OFFSET(get<T>, {0xD0, 8, 0, 0})
};

/// Class /Script/PCG.PCGPointData
/// Size: 0x0130 (0x000080 - 0x0001B0)
class UPCGPointData : public UPCGSpatialData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 432;

public:
	CMember(TArray<FPCGPoint>)                         Points                                                      OFFSET(get<T>, {0x80, 16, 0, 0})


	/// Functions
	// Function /Script/PCG.PCGPointData.SetPoints
	// void SetPoints(TArray<FPCGPoint>& InPoints);                                                                             // [0xa5be27c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGPointData.GetPointsCopy
	// TArray<FPCGPoint> GetPointsCopy();                                                                                       // [0xa5bd4b8] Final|Native|Public|BlueprintCallable|Const 
	// Function /Script/PCG.PCGPointData.GetPoints
	// TArray<FPCGPoint> GetPoints();                                                                                           // [0xa5bd49c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PCG.PCGPointData.GetPoint
	// FPCGPoint GetPoint(int32_t Index);                                                                                       // [0xa5bd380] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PCG.PCGPointData.CopyPointsFrom
	// void CopyPointsFrom(class UPCGPointData* InData, TArray<int32_t>& InDataIndices);                                        // [0xa5bd088] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/PCG.PCGPrimitiveData
/// Size: 0x0090 (0x0000D0 - 0x000160)
class UPCGPrimitiveData : public UPCGSpatialDataWithPointCache
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:
	SMember(FVector)                                   VoxelSize                                                   OFFSET(getStruct<T>, {0xD0, 24, 0, 0})
	CMember(TWeakObjectPtr<UPrimitiveComponent*>)      Primitive                                                   OFFSET(get<T>, {0xE8, 8, 0, 0})
	SMember(FBox)                                      CachedBounds                                                OFFSET(getStruct<T>, {0xF0, 56, 0, 0})
	SMember(FBox)                                      CachedStrictBounds                                          OFFSET(getStruct<T>, {0x128, 56, 0, 0})
};

/// Class /Script/PCG.PCGProjectionData
/// Size: 0x00A0 (0x0000D0 - 0x000170)
class UPCGProjectionData : public UPCGSpatialDataWithPointCache
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 368;

public:
	CMember(class UPCGSpatialData*)                    Source                                                      OFFSET(get<T>, {0xD0, 8, 0, 0})
	CMember(class UPCGSpatialData*)                    Target                                                      OFFSET(get<T>, {0xD8, 8, 0, 0})
	SMember(FBox)                                      CachedBounds                                                OFFSET(getStruct<T>, {0xE0, 56, 0, 0})
	SMember(FBox)                                      CachedStrictBounds                                          OFFSET(getStruct<T>, {0x118, 56, 0, 0})
	SMember(FPCGProjectionParams)                      ProjectionParams                                            OFFSET(getStruct<T>, {0x150, 32, 0, 0})
};

/// Class /Script/PCG.PCGBaseTextureData
/// Size: 0x00B0 (0x000130 - 0x0001E0)
class UPCGBaseTextureData : public UPCGSurfaceData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 480;

public:
	CMember(EPCGTextureDensityFunction)                DensityFunction                                             OFFSET(get<T>, {0x130, 1, 0, 0})
	CMember(EPCGTextureColorChannel)                   ColorChannel                                                OFFSET(get<T>, {0x131, 1, 0, 0})
	CMember(EPCGTextureFilter)                         Filter                                                      OFFSET(get<T>, {0x132, 1, 0, 0})
	DMember(float)                                     TexelSize                                                   OFFSET(get<float>, {0x134, 4, 0, 0})
	DMember(bool)                                      bUseAdvancedTiling                                          OFFSET(get<bool>, {0x138, 1, 0, 0})
	SMember(FVector2D)                                 Tiling                                                      OFFSET(getStruct<T>, {0x140, 16, 0, 0})
	SMember(FVector2D)                                 CenterOffset                                                OFFSET(getStruct<T>, {0x150, 16, 0, 0})
	DMember(float)                                     Rotation                                                    OFFSET(get<float>, {0x160, 4, 0, 0})
	DMember(bool)                                      bUseTileBounds                                              OFFSET(get<bool>, {0x164, 1, 0, 0})
	SMember(FBox2D)                                    TileBounds                                                  OFFSET(getStruct<T>, {0x168, 40, 0, 0})
	CMember(TArray<FLinearColor>)                      ColorData                                                   OFFSET(get<T>, {0x190, 16, 0, 0})
	SMember(FBox)                                      Bounds                                                      OFFSET(getStruct<T>, {0x1A0, 56, 0, 0})
	DMember(int32_t)                                   Height                                                      OFFSET(get<int32_t>, {0x1D8, 4, 0, 0})
	DMember(int32_t)                                   Width                                                       OFFSET(get<int32_t>, {0x1DC, 4, 0, 0})
};

/// Class /Script/PCG.PCGRenderTargetData
/// Size: 0x0010 (0x0001E0 - 0x0001F0)
class UPCGRenderTargetData : public UPCGBaseTextureData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 496;

public:
	CMember(class UTextureRenderTarget2D*)             RenderTarget                                                OFFSET(get<T>, {0x1E0, 8, 0, 0})


	/// Functions
	// Function /Script/PCG.PCGRenderTargetData.Initialize
	// void Initialize(class UTextureRenderTarget2D* InRenderTarget, FTransform& InTransform);                                  // [0xa5bd77c] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/PCG.PCGSplineData
/// Size: 0x01A0 (0x0000D0 - 0x000270)
class UPCGSplineData : public UPCGPolyLineData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 624;

public:
	SMember(FPCGSplineStruct)                          SplineStruct                                                OFFSET(getStruct<T>, {0xD0, 352, 0, 0})
	SMember(FBox)                                      CachedBounds                                                OFFSET(getStruct<T>, {0x230, 56, 0, 0})
};

/// Class /Script/PCG.PCGSplineProjectionData
/// Size: 0x0018 (0x000170 - 0x000188)
class UPCGSplineProjectionData : public UPCGProjectionData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 392;

public:
	SMember(FInterpCurveVector2D)                      ProjectedPosition                                           OFFSET(getStruct<T>, {0x170, 24, 0, 0})
};

/// Class /Script/PCG.PCGSplineInteriorSurfaceData
/// Size: 0x01C0 (0x000130 - 0x0002F0)
class UPCGSplineInteriorSurfaceData : public UPCGSurfaceData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 752;

public:
	SMember(FPCGSplineStruct)                          SplineStruct                                                OFFSET(getStruct<T>, {0x130, 352, 0, 0})
	SMember(FBox)                                      CachedBounds                                                OFFSET(getStruct<T>, {0x290, 56, 0, 0})
	CMember(TArray<FVector>)                           CachedSplinePoints                                          OFFSET(get<T>, {0x2C8, 16, 0, 0})
	CMember(TArray<FVector2D>)                         CachedSplinePoints2D                                        OFFSET(get<T>, {0x2D8, 16, 0, 0})
};

/// Class /Script/PCG.PCGTextureData
/// Size: 0x0010 (0x0001E0 - 0x0001F0)
class UPCGTextureData : public UPCGBaseTextureData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 496;

public:
	CMember(TWeakObjectPtr<UTexture*>)                 Texture                                                     OFFSET(get<T>, {0x1E0, 8, 0, 0})
	DMember(int32_t)                                   TextureIndex                                                OFFSET(get<int32_t>, {0x1E8, 4, 0, 0})
};

/// Class /Script/PCG.PCGUnionData
/// Size: 0x0098 (0x0000D0 - 0x000168)
class UPCGUnionData : public UPCGSpatialDataWithPointCache
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 360;

public:
	CMember(TArray<class UPCGSpatialData*>)            Data                                                        OFFSET(get<T>, {0xD0, 16, 0, 0})
	CMember(class UPCGSpatialData*)                    FirstNonTrivialTransformData                                OFFSET(get<T>, {0xE0, 8, 0, 0})
	CMember(EPCGUnionType)                             UnionType                                                   OFFSET(get<T>, {0xE8, 1, 0, 0})
	CMember(EPCGUnionDensityFunction)                  DensityFunction                                             OFFSET(get<T>, {0xE9, 1, 0, 0})
	SMember(FBox)                                      CachedBounds                                                OFFSET(getStruct<T>, {0xF0, 56, 0, 0})
	SMember(FBox)                                      CachedStrictBounds                                          OFFSET(getStruct<T>, {0x128, 56, 0, 0})
	DMember(int32_t)                                   CachedDimension                                             OFFSET(get<int32_t>, {0x160, 4, 0, 0})


	/// Functions
	// Function /Script/PCG.PCGUnionData.Initialize
	// void Initialize(class UPCGSpatialData* InA, class UPCGSpatialData* InB);                                                 // [0xa5bd8ac] Final|Native|Public|BlueprintCallable 
	// Function /Script/PCG.PCGUnionData.AddData
	// void AddData(class UPCGSpatialData* InData);                                                                             // [0xa5bcf88] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/PCG.PCGVolumeData
/// Size: 0x0098 (0x0000D0 - 0x000168)
class UPCGVolumeData : public UPCGSpatialDataWithPointCache
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 360;

public:
	SMember(FVector)                                   VoxelSize                                                   OFFSET(getStruct<T>, {0xD0, 24, 0, 0})
	CMember(TWeakObjectPtr<AVolume*>)                  Volume                                                      OFFSET(get<T>, {0xE8, 8, 0, 0})
	SMember(FBox)                                      Bounds                                                      OFFSET(getStruct<T>, {0xF0, 56, 0, 0})
	SMember(FBox)                                      StrictBounds                                                OFFSET(getStruct<T>, {0x128, 56, 0, 0})
};

/// Class /Script/PCG.PCGWorldVolumetricData
/// Size: 0x0088 (0x000168 - 0x0001F0)
class UPCGWorldVolumetricData : public UPCGVolumeData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 496;

public:
	CMember(TWeakObjectPtr<UWorld*>)                   World                                                       OFFSET(get<T>, {0x168, 8, 0, 0})
	CMember(TWeakObjectPtr<UPCGComponent*>)            OriginatingComponent                                        OFFSET(get<T>, {0x170, 8, 0, 0})
	SMember(FPCGWorldVolumetricQueryParams)            QueryParams                                                 OFFSET(getStruct<T>, {0x178, 120, 0, 0})
};

/// Class /Script/PCG.PCGWorldRayHitData
/// Size: 0x0100 (0x000130 - 0x000230)
class UPCGWorldRayHitData : public UPCGSurfaceData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 560;

public:
	CMember(TWeakObjectPtr<UWorld*>)                   World                                                       OFFSET(get<T>, {0x130, 8, 0, 0})
	CMember(TWeakObjectPtr<UPCGComponent*>)            OriginatingComponent                                        OFFSET(get<T>, {0x138, 8, 0, 0})
	SMember(FBox)                                      Bounds                                                      OFFSET(getStruct<T>, {0x140, 56, 0, 0})
	SMember(FPCGWorldRayHitQueryParams)                QueryParams                                                 OFFSET(getStruct<T>, {0x178, 184, 0, 0})
};

/// Class /Script/PCG.PCGMetadataBitwiseSettings
/// Size: 0x0058 (0x0000D8 - 0x000130)
class UPCGMetadataBitwiseSettings : public UPCGMetadataSettingsBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	CMember(EPCGMetadataBitwiseOperation)              Operation                                                   OFFSET(get<T>, {0xD8, 2, 0, 0})
	SMember(FPCGAttributePropertyInputSelector)        InputSource1                                                OFFSET(getStruct<T>, {0xE0, 40, 0, 0})
	SMember(FPCGAttributePropertyInputSelector)        InputSource2                                                OFFSET(getStruct<T>, {0x108, 40, 0, 0})
};

/// Class /Script/PCG.PCGMetadataBooleanSettings
/// Size: 0x0058 (0x0000D8 - 0x000130)
class UPCGMetadataBooleanSettings : public UPCGMetadataSettingsBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	CMember(EPCGMetadataBooleanOperation)              Operation                                                   OFFSET(get<T>, {0xD8, 2, 0, 0})
	SMember(FPCGAttributePropertyInputSelector)        InputSource1                                                OFFSET(getStruct<T>, {0xE0, 40, 0, 0})
	SMember(FPCGAttributePropertyInputSelector)        InputSource2                                                OFFSET(getStruct<T>, {0x108, 40, 0, 0})
};

/// Class /Script/PCG.PCGMetadataBreakTransformSettings
/// Size: 0x0028 (0x0000D8 - 0x000100)
class UPCGMetadataBreakTransformSettings : public UPCGMetadataSettingsBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	SMember(FPCGAttributePropertyInputSelector)        InputSource                                                 OFFSET(getStruct<T>, {0xD8, 40, 0, 0})
};

/// Class /Script/PCG.PCGMetadataBreakVectorSettings
/// Size: 0x0028 (0x0000D8 - 0x000100)
class UPCGMetadataBreakVectorSettings : public UPCGMetadataSettingsBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	SMember(FPCGAttributePropertyInputSelector)        InputSource                                                 OFFSET(getStruct<T>, {0xD8, 40, 0, 0})
};

/// Class /Script/PCG.PCGMetadataCompareSettings
/// Size: 0x0060 (0x0000D8 - 0x000138)
class UPCGMetadataCompareSettings : public UPCGMetadataSettingsBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 312;

public:
	CMember(EPCGMetadataCompareOperation)              Operation                                                   OFFSET(get<T>, {0xD8, 2, 0, 0})
	SMember(FPCGAttributePropertyInputSelector)        InputSource1                                                OFFSET(getStruct<T>, {0xE0, 40, 0, 0})
	SMember(FPCGAttributePropertyInputSelector)        InputSource2                                                OFFSET(getStruct<T>, {0x108, 40, 0, 0})
	DMember(double)                                    Tolerance                                                   OFFSET(get<double>, {0x130, 8, 0, 0})
};

/// Class /Script/PCG.PCGMetadataOperationSettings
/// Size: 0x0058 (0x0000A8 - 0x000100)
class UPCGMetadataOperationSettings : public UPCGSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	SMember(FPCGAttributePropertyInputSelector)        InputSource                                                 OFFSET(getStruct<T>, {0xA8, 40, 0, 0})
	SMember(FPCGAttributePropertyOutputSelector)       OutputTarget                                                OFFSET(getStruct<T>, {0xD0, 40, 0, 0})
	DMember(bool)                                      bCopyAllAttributes                                          OFFSET(get<bool>, {0xF8, 1, 0, 0})
};

/// Class /Script/PCG.PCGMetadataMakeTransformSettings
/// Size: 0x0078 (0x0000D8 - 0x000150)
class UPCGMetadataMakeTransformSettings : public UPCGMetadataSettingsBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
	SMember(FPCGAttributePropertyInputSelector)        InputSource1                                                OFFSET(getStruct<T>, {0xD8, 40, 0, 0})
	SMember(FPCGAttributePropertyInputSelector)        InputSource2                                                OFFSET(getStruct<T>, {0x100, 40, 0, 0})
	SMember(FPCGAttributePropertyInputSelector)        InputSource3                                                OFFSET(getStruct<T>, {0x128, 40, 0, 0})
};

/// Class /Script/PCG.PCGMetadataMakeVectorSettings
/// Size: 0x00A8 (0x0000D8 - 0x000180)
class UPCGMetadataMakeVectorSettings : public UPCGMetadataSettingsBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 384;

public:
	SMember(FPCGAttributePropertyInputSelector)        InputSource1                                                OFFSET(getStruct<T>, {0xD8, 40, 0, 0})
	SMember(FPCGAttributePropertyInputSelector)        InputSource2                                                OFFSET(getStruct<T>, {0x100, 40, 0, 0})
	SMember(FPCGAttributePropertyInputSelector)        InputSource3                                                OFFSET(getStruct<T>, {0x128, 40, 0, 0})
	SMember(FPCGAttributePropertyInputSelector)        InputSource4                                                OFFSET(getStruct<T>, {0x150, 40, 0, 0})
	CMember(EPCGMetadataTypes)                         OutputType                                                  OFFSET(get<T>, {0x178, 1, 0, 0})
	CMember(EPCGMetadataMakeVector3)                   MakeVector3Op                                               OFFSET(get<T>, {0x179, 1, 0, 0})
	CMember(EPCGMetadataMakeVector4)                   MakeVector4Op                                               OFFSET(get<T>, {0x17A, 1, 0, 0})
};

/// Class /Script/PCG.PCGMetadataMathsSettings
/// Size: 0x0080 (0x0000D8 - 0x000158)
class UPCGMetadataMathsSettings : public UPCGMetadataSettingsBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 344;

public:
	CMember(EPCGMetadataMathsOperation)                Operation                                                   OFFSET(get<T>, {0xD8, 2, 0, 0})
	DMember(bool)                                      bForceRoundingOpToInt                                       OFFSET(get<bool>, {0xDA, 1, 0, 0})
	DMember(bool)                                      bForceOpToDouble                                            OFFSET(get<bool>, {0xDB, 1, 0, 0})
	SMember(FPCGAttributePropertyInputSelector)        InputSource1                                                OFFSET(getStruct<T>, {0xE0, 40, 0, 0})
	SMember(FPCGAttributePropertyInputSelector)        InputSource2                                                OFFSET(getStruct<T>, {0x108, 40, 0, 0})
	SMember(FPCGAttributePropertyInputSelector)        InputSource3                                                OFFSET(getStruct<T>, {0x130, 40, 0, 0})
};

/// Class /Script/PCG.PCGMetadataPartitionSettings
/// Size: 0x0020 (0x0000A8 - 0x0000C8)
class UPCGMetadataPartitionSettings : public UPCGSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	CMember(TArray<FPCGAttributePropertyInputSelector>) PartitionAttributeSelectors                                OFFSET(get<T>, {0xA8, 16, 0, 0})
	SMember(FString)                                   PartitionAttributeNames                                     OFFSET(getStruct<T>, {0xB8, 16, 0, 0})
};

/// Class /Script/PCG.PCGMetadataRenameSettings
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UPCGMetadataRenameSettings : public UPCGSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	SMember(FName)                                     AttributeToRename                                           OFFSET(getStruct<T>, {0xA8, 4, 0, 0})
	SMember(FName)                                     NewAttributeName                                            OFFSET(getStruct<T>, {0xAC, 4, 0, 0})
};

/// Class /Script/PCG.PCGMetadataRotatorSettings
/// Size: 0x0080 (0x0000D8 - 0x000158)
class UPCGMetadataRotatorSettings : public UPCGMetadataSettingsBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 344;

public:
	CMember(EPCGMetadataRotatorOperation)              Operation                                                   OFFSET(get<T>, {0xD8, 2, 0, 0})
	SMember(FPCGAttributePropertyInputSelector)        InputSource1                                                OFFSET(getStruct<T>, {0xE0, 40, 0, 0})
	SMember(FPCGAttributePropertyInputSelector)        InputSource2                                                OFFSET(getStruct<T>, {0x108, 40, 0, 0})
	SMember(FPCGAttributePropertyInputSelector)        InputSource3                                                OFFSET(getStruct<T>, {0x130, 40, 0, 0})
};

/// Class /Script/PCG.PCGMetadataStringOpSettings
/// Size: 0x0058 (0x0000D8 - 0x000130)
class UPCGMetadataStringOpSettings : public UPCGMetadataSettingsBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	CMember(EPCGMetadataStringOperation)               Operation                                                   OFFSET(get<T>, {0xD8, 2, 0, 0})
	SMember(FPCGAttributePropertyInputSelector)        InputSource1                                                OFFSET(getStruct<T>, {0xE0, 40, 0, 0})
	SMember(FPCGAttributePropertyInputSelector)        InputSource2                                                OFFSET(getStruct<T>, {0x108, 40, 0, 0})
};

/// Class /Script/PCG.PCGMetadataTransformSettings
/// Size: 0x0080 (0x0000D8 - 0x000158)
class UPCGMetadataTransformSettings : public UPCGMetadataSettingsBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 344;

public:
	CMember(EPCGMetadataTransformOperation)            Operation                                                   OFFSET(get<T>, {0xD8, 2, 0, 0})
	CMember(EPCGTransformLerpMode)                     TransformLerpMode                                           OFFSET(get<T>, {0xDA, 2, 0, 0})
	SMember(FPCGAttributePropertyInputSelector)        InputSource1                                                OFFSET(getStruct<T>, {0xE0, 40, 0, 0})
	SMember(FPCGAttributePropertyInputSelector)        InputSource2                                                OFFSET(getStruct<T>, {0x108, 40, 0, 0})
	SMember(FPCGAttributePropertyInputSelector)        InputSource3                                                OFFSET(getStruct<T>, {0x130, 40, 0, 0})
};

/// Class /Script/PCG.PCGMetadataTrigSettings
/// Size: 0x0058 (0x0000D8 - 0x000130)
class UPCGMetadataTrigSettings : public UPCGMetadataSettingsBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	CMember(EPCGMetadataTrigOperation)                 Operation                                                   OFFSET(get<T>, {0xD8, 2, 0, 0})
	SMember(FPCGAttributePropertyInputSelector)        InputSource1                                                OFFSET(getStruct<T>, {0xE0, 40, 0, 0})
	SMember(FPCGAttributePropertyInputSelector)        InputSource2                                                OFFSET(getStruct<T>, {0x108, 40, 0, 0})
};

/// Class /Script/PCG.PCGMetadataVectorSettings
/// Size: 0x0080 (0x0000D8 - 0x000158)
class UPCGMetadataVectorSettings : public UPCGMetadataSettingsBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 344;

public:
	CMember(EPCGMetadataVectorOperation)               Operation                                                   OFFSET(get<T>, {0xD8, 2, 0, 0})
	SMember(FPCGAttributePropertyInputSelector)        InputSource1                                                OFFSET(getStruct<T>, {0xE0, 40, 0, 0})
	SMember(FPCGAttributePropertyInputSelector)        InputSource2                                                OFFSET(getStruct<T>, {0x108, 40, 0, 0})
	SMember(FPCGAttributePropertyInputSelector)        InputSource3                                                OFFSET(getStruct<T>, {0x130, 40, 0, 0})
};

/// Class /Script/PCG.PCGAttributeGetFromIndexSettings
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UPCGAttributeGetFromIndexSettings : public UPCGSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	DMember(int32_t)                                   Index                                                       OFFSET(get<int32_t>, {0xA8, 4, 0, 0})
};

/// Class /Script/PCG.PCGAttributeGetFromPointIndexSettings
/// Size: 0x0030 (0x0000A8 - 0x0000D8)
class UPCGAttributeGetFromPointIndexSettings : public UPCGSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	SMember(FPCGAttributePropertyInputSelector)        InputSource                                                 OFFSET(getStruct<T>, {0xA8, 40, 0, 0})
	DMember(int32_t)                                   Index                                                       OFFSET(get<int32_t>, {0xD0, 4, 0, 0})
	SMember(FName)                                     OutputAttributeName                                         OFFSET(getStruct<T>, {0xD4, 4, 0, 0})
};

/// Class /Script/PCG.PCGAttributeNoiseSettings
/// Size: 0x0060 (0x0000A8 - 0x000108)
class UPCGAttributeNoiseSettings : public UPCGSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:
	SMember(FPCGAttributePropertyInputSelector)        InputSource                                                 OFFSET(getStruct<T>, {0xA8, 40, 0, 0})
	SMember(FPCGAttributePropertyOutputSelector)       OutputTarget                                                OFFSET(getStruct<T>, {0xD0, 40, 0, 0})
	CMember(EPCGAttributeNoiseMode)                    Mode                                                        OFFSET(get<T>, {0xF8, 1, 0, 0})
	DMember(float)                                     NoiseMin                                                    OFFSET(get<float>, {0xFC, 4, 0, 0})
	DMember(float)                                     NoiseMax                                                    OFFSET(get<float>, {0x100, 4, 0, 0})
	DMember(bool)                                      bInvertSource                                               OFFSET(get<bool>, {0x104, 1, 0, 0})
	DMember(bool)                                      bClampResult                                                OFFSET(get<bool>, {0x105, 1, 0, 0})
};

/// Class /Script/PCG.PCGAttributeReduceSettings
/// Size: 0x0038 (0x0000A8 - 0x0000E0)
class UPCGAttributeReduceSettings : public UPCGSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	SMember(FPCGAttributePropertyInputSelector)        InputSource                                                 OFFSET(getStruct<T>, {0xA8, 40, 0, 0})
	SMember(FName)                                     OutputAttributeName                                         OFFSET(getStruct<T>, {0xD0, 4, 0, 0})
	CMember(EPCGAttributeReduceOperation)              Operation                                                   OFFSET(get<T>, {0xD4, 4, 0, 0})
	DMember(bool)                                      bMergeOutputAttributes                                      OFFSET(get<bool>, {0xD8, 1, 0, 0})
};

/// Class /Script/PCG.PCGAttributeSelectSettings
/// Size: 0x0058 (0x0000A8 - 0x000100)
class UPCGAttributeSelectSettings : public UPCGSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	SMember(FPCGAttributePropertyInputSelector)        InputSource                                                 OFFSET(getStruct<T>, {0xA8, 40, 0, 0})
	SMember(FName)                                     OutputAttributeName                                         OFFSET(getStruct<T>, {0xD0, 4, 0, 0})
	CMember(EPCGAttributeSelectOperation)              Operation                                                   OFFSET(get<T>, {0xD4, 4, 0, 0})
	CMember(EPCGAttributeSelectAxis)                   Axis                                                        OFFSET(get<T>, {0xD8, 4, 0, 0})
	SMember(FVector4)                                  CustomAxis                                                  OFFSET(getStruct<T>, {0xE0, 32, 0, 0})
};

/// Class /Script/PCG.PCGAttributeTransferSettings
/// Size: 0x0050 (0x0000A8 - 0x0000F8)
class UPCGAttributeTransferSettings : public UPCGSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
	SMember(FPCGAttributePropertyInputSelector)        SourceAttributeProperty                                     OFFSET(getStruct<T>, {0xA8, 40, 0, 0})
	SMember(FPCGAttributePropertyOutputSelector)       TargetAttributeProperty                                     OFFSET(getStruct<T>, {0xD0, 40, 0, 0})
};

/// Class /Script/PCG.PCGBoundsModifierSettings
/// Size: 0x0040 (0x0000A8 - 0x0000E8)
class UPCGBoundsModifierSettings : public UPCGSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
	CMember(EPCGBoundsModifierMode)                    Mode                                                        OFFSET(get<T>, {0xA8, 1, 0, 0})
	SMember(FVector)                                   BoundsMin                                                   OFFSET(getStruct<T>, {0xB0, 24, 0, 0})
	SMember(FVector)                                   BoundsMax                                                   OFFSET(getStruct<T>, {0xC8, 24, 0, 0})
	DMember(bool)                                      bAffectSteepness                                            OFFSET(get<bool>, {0xE0, 1, 0, 0})
	DMember(float)                                     Steepness                                                   OFFSET(get<float>, {0xE4, 4, 0, 0})
};

/// Class /Script/PCG.PCGCollapseSettings
/// Size: 0x0000 (0x0000A8 - 0x0000A8)
class UPCGCollapseSettings : public UPCGSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
};

/// Class /Script/PCG.PCGConvertToPointDataSettings
/// Size: 0x0000 (0x0000A8 - 0x0000A8)
class UPCGConvertToPointDataSettings : public UPCGCollapseSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
};

/// Class /Script/PCG.PCGConvertToAttributeSetSettings
/// Size: 0x0000 (0x0000A8 - 0x0000A8)
class UPCGConvertToAttributeSetSettings : public UPCGSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
};

/// Class /Script/PCG.PCGCopyPointsSettings
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UPCGCopyPointsSettings : public UPCGSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	CMember(EPCGCopyPointsInheritanceMode)             RotationInheritance                                         OFFSET(get<T>, {0xA8, 1, 0, 0})
	CMember(EPCGCopyPointsInheritanceMode)             ScaleInheritance                                            OFFSET(get<T>, {0xA9, 1, 0, 0})
	CMember(EPCGCopyPointsInheritanceMode)             ColorInheritance                                            OFFSET(get<T>, {0xAA, 1, 0, 0})
	CMember(EPCGCopyPointsInheritanceMode)             SeedInheritance                                             OFFSET(get<T>, {0xAB, 1, 0, 0})
	CMember(EPCGCopyPointsMetadataInheritanceMode)     AttributeInheritance                                        OFFSET(get<T>, {0xAC, 1, 0, 0})
	CMember(EPCGCopyPointsTagInheritanceMode)          TagInheritance                                              OFFSET(get<T>, {0xAD, 1, 0, 0})
};

/// Class /Script/PCG.PCGAddAttributeSettings
/// Size: 0x01C8 (0x0000A8 - 0x000270)
class UPCGAddAttributeSettings : public UPCGSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 624;

public:
	SMember(FPCGAttributePropertyInputSelector)        InputSource                                                 OFFSET(getStruct<T>, {0xA8, 40, 0, 0})
	SMember(FPCGAttributePropertyOutputSelector)       OutputTarget                                                OFFSET(getStruct<T>, {0xD0, 40, 0, 0})
	SMember(FPCGMetadataTypesConstantStruct)           AttributeTypes                                              OFFSET(getStruct<T>, {0x100, 352, 0, 0})
	DMember(bool)                                      bCopyAllAttributes                                          OFFSET(get<bool>, {0x260, 1, 0, 0})
};

/// Class /Script/PCG.PCGCreateAttributeSetSettings
/// Size: 0x0198 (0x0000A8 - 0x000240)
class UPCGCreateAttributeSetSettings : public UPCGSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 576;

public:
	SMember(FPCGMetadataTypesConstantStruct)           AttributeTypes                                              OFFSET(getStruct<T>, {0xB0, 352, 0, 0})
	SMember(FPCGAttributePropertyOutputNoSourceSelector) OutputTarget                                              OFFSET(getStruct<T>, {0x210, 40, 0, 0})
};

/// Class /Script/PCG.PCGCreateSplineSettings
/// Size: 0x0048 (0x0000A8 - 0x0000F0)
class UPCGCreateSplineSettings : public UPCGSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	CMember(EPCGCreateSplineMode)                      Mode                                                        OFFSET(get<T>, {0xA8, 1, 0, 0})
	DMember(bool)                                      bClosedLoop                                                 OFFSET(get<bool>, {0xA9, 1, 0, 0})
	DMember(bool)                                      bLinear                                                     OFFSET(get<bool>, {0xAA, 1, 0, 0})
	DMember(bool)                                      bApplyCustomTangents                                        OFFSET(get<bool>, {0xAB, 1, 0, 0})
	SMember(FName)                                     ArriveTangentAttribute                                      OFFSET(getStruct<T>, {0xAC, 4, 0, 0})
	SMember(FName)                                     LeaveTangentAttribute                                       OFFSET(getStruct<T>, {0xB0, 4, 0, 0})
	CMember(TWeakObjectPtr<AActor*>)                   TargetActor                                                 OFFSET(get<T>, {0xB8, 32, 0, 0})
	CMember(EPCGAttachOptions)                         AttachOptions                                               OFFSET(get<T>, {0xD8, 4, 0, 0})
	CMember(TArray<FName>)                             PostProcessFunctionNames                                    OFFSET(get<T>, {0xE0, 16, 0, 0})
};

/// Class /Script/PCG.PCGCreateSurfaceFromSplineSettings
/// Size: 0x0000 (0x0000A8 - 0x0000A8)
class UPCGCreateSurfaceFromSplineSettings : public UPCGSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
};

/// Class /Script/PCG.PCGCreateTargetActor
/// Size: 0x00C8 (0x0000A8 - 0x000170)
class UPCGCreateTargetActor : public UPCGSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 368;

public:
	CMember(class UClass*)                             TemplateActorClass                                          OFFSET(get<T>, {0xA8, 8, 0, 0})
	CMember(class AActor*)                             TemplateActor                                               OFFSET(get<T>, {0xB0, 8, 0, 0})
	DMember(bool)                                      bAllowTemplateActorEditing                                  OFFSET(get<bool>, {0xB8, 1, 0, 0})
	CMember(EPCGAttachOptions)                         AttachOptions                                               OFFSET(get<T>, {0xBC, 4, 0, 0})
	CMember(TWeakObjectPtr<AActor*>)                   RootActor                                                   OFFSET(get<T>, {0xC0, 32, 0, 0})
	SMember(FString)                                   ActorLabel                                                  OFFSET(getStruct<T>, {0xE0, 16, 0, 0})
	SMember(FTransform)                                ActorPivot                                                  OFFSET(getStruct<T>, {0xF0, 96, 0, 0})
	CMember(TArray<FPCGObjectPropertyOverrideDescription>) PropertyOverrideDescriptions                            OFFSET(get<T>, {0x150, 16, 0, 0})
	CMember(TArray<FName>)                             PostProcessFunctionNames                                    OFFSET(get<T>, {0x160, 16, 0, 0})
};

/// Class /Script/PCG.PCGDataFromActorSettings
/// Size: 0x0048 (0x0000A8 - 0x0000F0)
class UPCGDataFromActorSettings : public UPCGSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	SMember(FPCGActorSelectorSettings)                 ActorSelector                                               OFFSET(getStruct<T>, {0xA8, 32, 0, 0})
	CMember(EPCGGetDataFromActorMode)                  Mode                                                        OFFSET(get<T>, {0xC8, 1, 0, 0})
	DMember(bool)                                      bAlsoOutputSinglePointData                                  OFFSET(get<bool>, {0xC9, 1, 0, 0})
	DMember(bool)                                      bComponentsMustOverlapSelf                                  OFFSET(get<bool>, {0xCA, 1, 0, 0})
	DMember(bool)                                      bGetDataOnAllGrids                                          OFFSET(get<bool>, {0xCB, 1, 0, 0})
	DMember(int32_t)                                   AllowedGrids                                                OFFSET(get<int32_t>, {0xCC, 4, 0, 0})
	DMember(bool)                                      bMergeSinglePointData                                       OFFSET(get<bool>, {0xD0, 1, 0, 0})
	DMember(bool)                                      bDisplayModeSettings                                        OFFSET(get<bool>, {0xD1, 1, 0, 0})
	CMember(TArray<FName>)                             ExpectedPins                                                OFFSET(get<T>, {0xD8, 16, 0, 0})
	SMember(FName)                                     PropertyName                                                OFFSET(getStruct<T>, {0xE8, 4, 0, 0})
};

/// Class /Script/PCG.PCGDataNumSettings
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UPCGDataNumSettings : public UPCGSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	SMember(FName)                                     OutputAttributeName                                         OFFSET(getStruct<T>, {0xA8, 4, 0, 0})
};

/// Class /Script/PCG.PCGDataTableRowToParamDataSettings
/// Size: 0x0030 (0x0000A8 - 0x0000D8)
class UPCGDataTableRowToParamDataSettings : public UPCGSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	SMember(FName)                                     RowName                                                     OFFSET(getStruct<T>, {0xA8, 4, 0, 0})
	CMember(TWeakObjectPtr<UDataTable*>)               DataTable                                                   OFFSET(get<T>, {0xB0, 32, 0, 0})
	DMember(bool)                                      bSynchronousLoad                                            OFFSET(get<bool>, {0xD0, 1, 0, 0})
};

/// Class /Script/PCG.PCGDebugSettings
/// Size: 0x0020 (0x0000A8 - 0x0000C8)
class UPCGDebugSettings : public UPCGSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	CMember(TWeakObjectPtr<AActor*>)                   TargetActor                                                 OFFSET(get<T>, {0xA8, 32, 0, 0})
};

/// Class /Script/PCG.PCGDensityFilterSettings
/// Size: 0x0010 (0x0000A8 - 0x0000B8)
class UPCGDensityFilterSettings : public UPCGSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	DMember(float)                                     LowerBound                                                  OFFSET(get<float>, {0xA8, 4, 0, 0})
	DMember(float)                                     UpperBound                                                  OFFSET(get<float>, {0xAC, 4, 0, 0})
	DMember(bool)                                      bInvertFilter                                               OFFSET(get<bool>, {0xB0, 1, 0, 0})
};

/// Class /Script/PCG.PCGLinearDensityRemapSettings
/// Size: 0x0010 (0x0000A8 - 0x0000B8)
class UPCGLinearDensityRemapSettings : public UPCGSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	DMember(float)                                     RemapMin                                                    OFFSET(get<float>, {0xA8, 4, 0, 0})
	DMember(float)                                     RemapMax                                                    OFFSET(get<float>, {0xAC, 4, 0, 0})
	DMember(bool)                                      bMultiplyDensity                                            OFFSET(get<bool>, {0xB0, 1, 0, 0})
};

/// Class /Script/PCG.PCGDensityRemapSettings
/// Size: 0x0018 (0x0000A8 - 0x0000C0)
class UPCGDensityRemapSettings : public UPCGSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	DMember(float)                                     InRangeMin                                                  OFFSET(get<float>, {0xA8, 4, 0, 0})
	DMember(float)                                     InRangeMax                                                  OFFSET(get<float>, {0xAC, 4, 0, 0})
	DMember(float)                                     OutRangeMin                                                 OFFSET(get<float>, {0xB0, 4, 0, 0})
	DMember(float)                                     OutRangeMax                                                 OFFSET(get<float>, {0xB4, 4, 0, 0})
	DMember(bool)                                      bExcludeValuesOutsideInputRange                             OFFSET(get<bool>, {0xB8, 1, 0, 0})
};

/// Class /Script/PCG.PCGDifferenceSettings
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UPCGDifferenceSettings : public UPCGSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	CMember(EPCGDifferenceDensityFunction)             DensityFunction                                             OFFSET(get<T>, {0xA8, 1, 0, 0})
	CMember(EPCGDifferenceMode)                        Mode                                                        OFFSET(get<T>, {0xA9, 1, 0, 0})
	DMember(bool)                                      bDiffMetadata                                               OFFSET(get<bool>, {0xAA, 1, 0, 0})
	DMember(bool)                                      bKeepZeroDensityPoints                                      OFFSET(get<bool>, {0xAB, 1, 0, 0})
};

/// Class /Script/PCG.PCGBlueprintElement
/// Size: 0x0040 (0x000028 - 0x000068)
class UPCGBlueprintElement : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	DMember(bool)                                      bIsCacheable                                                OFFSET(get<bool>, {0x28, 1, 0, 0})
	DMember(bool)                                      bComputeFullDataCrc                                         OFFSET(get<bool>, {0x29, 1, 0, 0})
	DMember(bool)                                      bRequiresGameThread                                         OFFSET(get<bool>, {0x2A, 1, 0, 0})
	CMember(TArray<FPCGPinProperties>)                 CustomInputPins                                             OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TArray<FPCGPinProperties>)                 CustomOutputPins                                            OFFSET(get<T>, {0x40, 16, 0, 0})
	DMember(bool)                                      bHasDefaultInPin                                            OFFSET(get<bool>, {0x50, 1, 0, 0})
	DMember(bool)                                      bHasDefaultOutPin                                           OFFSET(get<bool>, {0x51, 1, 0, 0})


	/// Functions
	// Function /Script/PCG.PCGBlueprintElement.VariableLoopBody
	// TArray<FPCGPoint> VariableLoopBody(FPCGContext& InContext, class UPCGPointData* InData, FPCGPoint& InPoint, class UPCGMetadata* OutMetadata, int64_t Iteration); // [0x18a39e4] Event|Public|HasOutParms|BlueprintEvent|Const 
	// Function /Script/PCG.PCGBlueprintElement.VariableLoop
	// void VariableLoop(FPCGContext& InContext, class UPCGPointData* InData, class UPCGPointData*& OutData, class UPCGPointData* OptionalOutData); // [0xa622314] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/PCG.PCGBlueprintElement.PointLoopBody
	// bool PointLoopBody(FPCGContext& InContext, class UPCGPointData* InData, FPCGPoint& InPoint, FPCGPoint& OutPoint, class UPCGMetadata* OutMetadata, int64_t Iteration); // [0x18a39e4] Event|Public|HasOutParms|BlueprintEvent|Const 
	// Function /Script/PCG.PCGBlueprintElement.PointLoop
	// void PointLoop(FPCGContext& InContext, class UPCGPointData* InData, class UPCGPointData*& OutData, class UPCGPointData* OptionalOutData); // [0xa621f70] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/PCG.PCGBlueprintElement.NodeTypeOverride
	// EPCGSettingsType NodeTypeOverride();                                                                                     // [0x1aaf4c4] Native|Event|Public|BlueprintEvent|Const 
	// Function /Script/PCG.PCGBlueprintElement.NodeTitleOverride
	// FName NodeTitleOverride();                                                                                               // [0xa621f40] Native|Event|Public|BlueprintEvent|Const 
	// Function /Script/PCG.PCGBlueprintElement.NodeColorOverride
	// FLinearColor NodeColorOverride();                                                                                        // [0x692611c] Native|Event|Public|HasDefaults|BlueprintEvent|Const 
	// Function /Script/PCG.PCGBlueprintElement.NestedLoopBody
	// bool NestedLoopBody(FPCGContext& InContext, class UPCGPointData* InOuterData, class UPCGPointData* InInnerData, FPCGPoint& InOuterPoint, FPCGPoint& InInnerPoint, FPCGPoint& OutPoint, class UPCGMetadata* OutMetadata, int64_t OuterIteration, int64_t InnerIteration); // [0x18a39e4] Event|Public|HasOutParms|BlueprintEvent|Const 
	// Function /Script/PCG.PCGBlueprintElement.NestedLoop
	// void NestedLoop(FPCGContext& InContext, class UPCGPointData* InOuterData, class UPCGPointData* InInnerData, class UPCGPointData*& OutData, class UPCGPointData* OptionalOutData); // [0xa621bb4] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/PCG.PCGBlueprintElement.IterationLoopBody
	// bool IterationLoopBody(FPCGContext& InContext, int64_t Iteration, class UPCGSpatialData* InA, class UPCGSpatialData* InB, FPCGPoint& OutPoint, class UPCGMetadata* OutMetadata); // [0x18a39e4] Event|Public|HasOutParms|BlueprintEvent|Const 
	// Function /Script/PCG.PCGBlueprintElement.IterationLoop
	// void IterationLoop(FPCGContext& InContext, int64_t NumIterations, class UPCGPointData*& OutData, class UPCGSpatialData* OptionalA, class UPCGSpatialData* OptionalB, class UPCGPointData* OptionalOutData); // [0xa621710] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/PCG.PCGBlueprintElement.IsCacheableOverride
	// bool IsCacheableOverride();                                                                                              // [0x3912dc4] Native|Event|Public|BlueprintEvent|Const 
	// Function /Script/PCG.PCGBlueprintElement.GetSeed
	// int32_t GetSeed(FPCGContext& InContext);                                                                                 // [0xa62166c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PCG.PCGBlueprintElement.GetRandomStream
	// FRandomStream GetRandomStream(FPCGContext& InContext);                                                                   // [0xa6215b4] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|Const 
	// Function /Script/PCG.PCGBlueprintElement.GetOutputPins
	// TArray<FPCGPinProperties> GetOutputPins();                                                                               // [0xa621574] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PCG.PCGBlueprintElement.GetOutputPinByLabel
	// bool GetOutputPinByLabel(FName InPinLabel, FPCGPinProperties& OutFoundPin);                                              // [0xa621418] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PCG.PCGBlueprintElement.GetInputPins
	// TArray<FPCGPinProperties> GetInputPins();                                                                                // [0xa6213d8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PCG.PCGBlueprintElement.GetInputPinByLabel
	// bool GetInputPinByLabel(FName InPinLabel, FPCGPinProperties& OutFoundPin);                                               // [0xa62127c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PCG.PCGBlueprintElement.GetContext
	// FPCGContext GetContext();                                                                                                // [0xa621224] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PCG.PCGBlueprintElement.ExecuteWithContext
	// void ExecuteWithContext(FPCGContext& InContext, FPCGDataCollection& Input, FPCGDataCollection& Output);                  // [0xa621080] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/PCG.PCGBlueprintElement.Execute
	// void Execute(FPCGDataCollection& Input, FPCGDataCollection& Output);                                                     // [0x18a39e4] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/PCG.PCGBlueprintElement.CustomOutputLabels
	// TSet<FName> CustomOutputLabels();                                                                                        // [0xa620f54] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PCG.PCGBlueprintElement.CustomInputLabels
	// TSet<FName> CustomInputLabels();                                                                                         // [0xa620e28] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PCG.PCGBlueprintElement.ApplyPreconfiguredSettings
	// void ApplyPreconfiguredSettings(FPCGPreConfiguredSettingsInfo& InPreconfigureInfo);                                      // [0x18a39e4] Event|Public|HasOutParms|BlueprintEvent 
};

/// Class /Script/PCG.PCGBlueprintSettings
/// Size: 0x0010 (0x0000A8 - 0x0000B8)
class UPCGBlueprintSettings : public UPCGSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	CMember(class UClass*)                             BlueprintElementType                                        OFFSET(get<T>, {0xA8, 8, 0, 0})
	CMember(class UPCGBlueprintElement*)               BlueprintElementInstance                                    OFFSET(get<T>, {0xB0, 8, 0, 0})


	/// Functions
	// Function /Script/PCG.PCGBlueprintSettings.SetElementType
	// void SetElementType(class UClass* InElementType, class UPCGBlueprintElement*& ElementInstance);                          // [0xa62221c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGBlueprintSettings.GetElementType
	// class UClass* GetElementType();                                                                                          // [0xa621240] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/PCG.PCGFilterByIndexSettings
/// Size: 0x0018 (0x0000A8 - 0x0000C0)
class UPCGFilterByIndexSettings : public UPCGFilterDataBaseSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	DMember(bool)                                      bInvertFilter                                               OFFSET(get<bool>, {0xA8, 1, 0, 0})
	SMember(FString)                                   SelectedIndices                                             OFFSET(getStruct<T>, {0xB0, 16, 0, 0})
};

/// Class /Script/PCG.PCGFilterByTagSettings
/// Size: 0x0018 (0x0000A8 - 0x0000C0)
class UPCGFilterByTagSettings : public UPCGFilterDataBaseSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	CMember(EPCGFilterByTagOperation)                  Operation                                                   OFFSET(get<T>, {0xA8, 4, 0, 0})
	SMember(FString)                                   SelectedTags                                                OFFSET(getStruct<T>, {0xB0, 16, 0, 0})
};

/// Class /Script/PCG.PCGFilterByTypeSettings
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UPCGFilterByTypeSettings : public UPCGFilterDataBaseSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	CMember(EPCGDataType)                              TargetType                                                  OFFSET(get<T>, {0xA8, 4, 0, 0})
	DMember(bool)                                      bShowOutsideFilter                                          OFFSET(get<bool>, {0xAC, 1, 0, 0})
};

/// Class /Script/PCG.PCGGetLoopIndexSettings
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UPCGGetLoopIndexSettings : public UPCGSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	DMember(bool)                                      bWarnIfCalledOutsideOfLoop                                  OFFSET(get<bool>, {0xA8, 1, 0, 0})
};

/// Class /Script/PCG.PCGIndirectionSettings
/// Size: 0x0040 (0x0000A8 - 0x0000E8)
class UPCGIndirectionSettings : public UPCGSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
	CMember(EPCGProxyInterfaceMode)                    ProxyInterfaceMode                                          OFFSET(get<T>, {0xA8, 1, 0, 0})
	CMember(class UClass*)                             SettingsClass                                               OFFSET(get<T>, {0xB0, 8, 0, 0})
	CMember(class UClass*)                             BlueprintElementClass                                       OFFSET(get<T>, {0xB8, 8, 0, 0})
	CMember(TWeakObjectPtr<UPCGSettings*>)             Settings                                                    OFFSET(get<T>, {0xC0, 32, 0, 0})
	DMember(bool)                                      bTagOutputsBasedOnOutputPins                                OFFSET(get<bool>, {0xE0, 1, 0, 0})
};

/// Class /Script/PCG.PCGInnerIntersectionSettings
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UPCGInnerIntersectionSettings : public UPCGSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	CMember(EPCGIntersectionDensityFunction)           DensityFunction                                             OFFSET(get<T>, {0xA8, 1, 0, 0})
	DMember(bool)                                      bKeepZeroDensityPoints                                      OFFSET(get<bool>, {0xA9, 1, 0, 0})
};

/// Class /Script/PCG.PCGBaseSubgraphSettings
/// Size: 0x0000 (0x0000A8 - 0x0000A8)
class UPCGBaseSubgraphSettings : public UPCGSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
};

/// Class /Script/PCG.PCGSubgraphSettings
/// Size: 0x0010 (0x0000A8 - 0x0000B8)
class UPCGSubgraphSettings : public UPCGBaseSubgraphSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	CMember(class UPCGGraphInstance*)                  SubgraphInstance                                            OFFSET(get<T>, {0xA8, 8, 0, 0})
	CMember(class UPCGGraphInterface*)                 SubgraphOverride                                            OFFSET(get<T>, {0xB0, 8, 0, 0})
};

/// Class /Script/PCG.PCGLoopSettings
/// Size: 0x0028 (0x0000B8 - 0x0000E0)
class UPCGLoopSettings : public UPCGSubgraphSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	DMember(bool)                                      bUseGraphDefaultPinUsage                                    OFFSET(get<bool>, {0xB8, 1, 0, 0})
	SMember(FString)                                   LoopPins                                                    OFFSET(getStruct<T>, {0xC0, 16, 0, 0})
	SMember(FString)                                   FeedbackPins                                                OFFSET(getStruct<T>, {0xD0, 16, 0, 0})
};

/// Class /Script/PCG.PCGMatchAndSetAttributesSettings
/// Size: 0x0218 (0x0000A8 - 0x0002C0)
class UPCGMatchAndSetAttributesSettings : public UPCGSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 704;

public:
	DMember(bool)                                      bMatchAttributes                                            OFFSET(get<bool>, {0xA8, 1, 0, 0})
	SMember(FPCGAttributePropertyInputSelector)        InputAttribute                                              OFFSET(getStruct<T>, {0xB0, 40, 0, 0})
	SMember(FName)                                     MatchAttribute                                              OFFSET(getStruct<T>, {0xD8, 4, 0, 0})
	DMember(bool)                                      bKeepUnmatched                                              OFFSET(get<bool>, {0xDC, 1, 0, 0})
	DMember(bool)                                      bFindNearest                                                OFFSET(get<bool>, {0xDD, 1, 0, 0})
	CMember(EPCGMatchMaxDistanceMode)                  MaxDistanceMode                                             OFFSET(get<T>, {0xE0, 4, 0, 0})
	SMember(FPCGMetadataTypesConstantStruct)           MaxDistanceForNearestMatch                                  OFFSET(getStruct<T>, {0xF0, 352, 0, 0})
	SMember(FPCGAttributePropertyInputSelector)        MaxDistanceInputAttribute                                   OFFSET(getStruct<T>, {0x250, 40, 0, 0})
	DMember(bool)                                      bUseInputWeightAttribute                                    OFFSET(get<bool>, {0x278, 1, 0, 0})
	SMember(FPCGAttributePropertyInputSelector)        InputWeightAttribute                                        OFFSET(getStruct<T>, {0x280, 40, 0, 0})
	DMember(bool)                                      bUseWeightAttribute                                         OFFSET(get<bool>, {0x2A8, 1, 0, 0})
	SMember(FName)                                     WeightAttribute                                             OFFSET(getStruct<T>, {0x2AC, 4, 0, 0})
	DMember(bool)                                      bWarnIfNoMatchData                                          OFFSET(get<bool>, {0x2B0, 1, 0, 0})
};

/// Class /Script/PCG.PCGMergeSettings
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UPCGMergeSettings : public UPCGSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	DMember(bool)                                      bMergeMetadata                                              OFFSET(get<bool>, {0xA8, 1, 0, 0})
};

/// Class /Script/PCG.PCGPointExtentsModifierSettings
/// Size: 0x0020 (0x0000A8 - 0x0000C8)
class UPCGPointExtentsModifierSettings : public UPCGSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	SMember(FVector)                                   Extents                                                     OFFSET(getStruct<T>, {0xA8, 24, 0, 0})
	CMember(EPCGPointExtentsModifierMode)              Mode                                                        OFFSET(get<T>, {0xC0, 1, 0, 0})
};

/// Class /Script/PCG.PCGPointFromMeshSettings
/// Size: 0x0028 (0x0000A8 - 0x0000D0)
class UPCGPointFromMeshSettings : public UPCGSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	CMember(TWeakObjectPtr<UStaticMesh*>)              StaticMesh                                                  OFFSET(get<T>, {0xA8, 32, 0, 0})
	SMember(FName)                                     MeshPathAttributeName                                       OFFSET(getStruct<T>, {0xC8, 4, 0, 0})
	DMember(bool)                                      bSynchronousLoad                                            OFFSET(get<bool>, {0xCC, 1, 0, 0})
};

/// Class /Script/PCG.PCGPointMatchAndSetSettings
/// Size: 0x0040 (0x0000A8 - 0x0000E8)
class UPCGPointMatchAndSetSettings : public UPCGSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
	CMember(class UClass*)                             MatchAndSetType                                             OFFSET(get<T>, {0xA8, 8, 0, 0})
	CMember(class UPCGMatchAndSetBase*)                MatchAndSetInstance                                         OFFSET(get<T>, {0xB0, 8, 0, 0})
	SMember(FPCGAttributePropertyOutputSelector)       SetTarget                                                   OFFSET(getStruct<T>, {0xB8, 40, 0, 0})
	CMember(EPCGMetadataTypes)                         SetTargetType                                               OFFSET(get<T>, {0xE0, 1, 0, 0})
	CMember(EPCGMetadataTypesConstantStructStringMode) SetTargetStringMode                                         OFFSET(get<T>, {0xE4, 4, 0, 0})


	/// Functions
	// Function /Script/PCG.PCGPointMatchAndSetSettings.SetMatchAndSetType
	// void SetMatchAndSetType(class UClass* InMatchAndSetType);                                                                // [0xa67934c] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/PCG.PCGProjectionSettings
/// Size: 0x0028 (0x0000A8 - 0x0000D0)
class UPCGProjectionSettings : public UPCGSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	SMember(FPCGProjectionParams)                      ProjectionParams                                            OFFSET(getStruct<T>, {0xA8, 32, 0, 0})
	DMember(bool)                                      bForceCollapseToPoint                                       OFFSET(get<bool>, {0xC8, 1, 0, 0})
	DMember(bool)                                      bKeepZeroDensityPoints                                      OFFSET(get<bool>, {0xC9, 1, 0, 0})
};

/// Class /Script/PCG.PCGSelectPointsSettings
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UPCGSelectPointsSettings : public UPCGSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	DMember(float)                                     Ratio                                                       OFFSET(get<float>, {0xA8, 4, 0, 0})
};

/// Class /Script/PCG.PCGSelfPruningSettings
/// Size: 0x0038 (0x0000A8 - 0x0000E0)
class UPCGSelfPruningSettings : public UPCGSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	SMember(FPCGSelfPruningParameters)                 Parameters                                                  OFFSET(getStruct<T>, {0xA8, 56, 0, 0})
};

/// Class /Script/PCG.PCGSpatialNoiseSettings
/// Size: 0x0108 (0x0000A8 - 0x0001B0)
class UPCGSpatialNoiseSettings : public UPCGSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 432;

public:
	CMember(PCGSpatialNoiseMode)                       Mode                                                        OFFSET(get<T>, {0xA8, 4, 0, 0})
	CMember(PCGSpatialNoiseMask2DMode)                 EdgeMask2DMode                                              OFFSET(get<T>, {0xAC, 4, 0, 0})
	DMember(int32_t)                                   Iterations                                                  OFFSET(get<int32_t>, {0xB0, 4, 0, 0})
	DMember(bool)                                      bTiling                                                     OFFSET(get<bool>, {0xB4, 1, 0, 0})
	DMember(float)                                     Brightness                                                  OFFSET(get<float>, {0xB8, 4, 0, 0})
	DMember(float)                                     Contrast                                                    OFFSET(get<float>, {0xBC, 4, 0, 0})
	SMember(FPCGAttributePropertyOutputNoSourceSelector) ValueTarget                                               OFFSET(getStruct<T>, {0xC0, 40, 0, 0})
	SMember(FVector)                                   RandomOffset                                                OFFSET(getStruct<T>, {0xE8, 24, 0, 0})
	SMember(FTransform)                                Transform                                                   OFFSET(getStruct<T>, {0x100, 96, 0, 0})
	DMember(double)                                    VoronoiCellRandomness                                       OFFSET(get<double>, {0x160, 8, 0, 0})
	SMember(FPCGAttributePropertyOutputNoSourceSelector) VoronoiCellIDTarget                                       OFFSET(getStruct<T>, {0x168, 40, 0, 0})
	DMember(bool)                                      bVoronoiOrientSamplesToCellEdge                             OFFSET(get<bool>, {0x190, 1, 0, 0})
	DMember(int32_t)                                   TiledVoronoiResolution                                      OFFSET(get<int32_t>, {0x194, 4, 0, 0})
	DMember(int32_t)                                   TiledVoronoiEdgeBlendCellCount                              OFFSET(get<int32_t>, {0x198, 4, 0, 0})
	DMember(float)                                     EdgeBlendDistance                                           OFFSET(get<float>, {0x19C, 4, 0, 0})
	DMember(float)                                     EdgeBlendCurveOffset                                        OFFSET(get<float>, {0x1A0, 4, 0, 0})
	DMember(float)                                     EdgeBlendCurveIntensity                                     OFFSET(get<float>, {0x1A4, 4, 0, 0})
};

/// Class /Script/PCG.PCGSpawnActorSettings
/// Size: 0x0080 (0x0000A8 - 0x000128)
class UPCGSpawnActorSettings : public UPCGBaseSubgraphSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
	CMember(class UClass*)                             TemplateActorClass                                          OFFSET(get<T>, {0xA8, 8, 0, 0})
	CMember(TArray<FName>)                             PostSpawnFunctionNames                                      OFFSET(get<T>, {0xB0, 16, 0, 0})
	CMember(EPCGSpawnActorOption)                      Option                                                      OFFSET(get<T>, {0xC0, 1, 0, 0})
	DMember(bool)                                      bForceDisableActorParsing                                   OFFSET(get<bool>, {0xC1, 1, 0, 0})
	CMember(EPCGSpawnActorGenerationTrigger)           GenerationTrigger                                           OFFSET(get<T>, {0xC2, 1, 0, 0})
	DMember(bool)                                      bInheritActorTags                                           OFFSET(get<bool>, {0xC3, 1, 0, 0})
	CMember(TArray<FName>)                             TagsToAddOnActors                                           OFFSET(get<T>, {0xC8, 16, 0, 0})
	DMember(bool)                                      bAllowTemplateActorEditing                                  OFFSET(get<bool>, {0xD8, 1, 0, 0})
	CMember(class AActor*)                             TemplateActor                                               OFFSET(get<T>, {0xE0, 8, 0, 0})
	CMember(TArray<FPCGObjectPropertyOverrideDescription>) SpawnedActorPropertyOverrideDescriptions                OFFSET(get<T>, {0xE8, 16, 0, 0})
	CMember(TWeakObjectPtr<AActor*>)                   RootActor                                                   OFFSET(get<T>, {0xF8, 32, 0, 0})
	CMember(EPCGAttachOptions)                         AttachOptions                                               OFFSET(get<T>, {0x118, 4, 0, 0})
	DMember(bool)                                      bSpawnByAttribute                                           OFFSET(get<bool>, {0x11C, 1, 0, 0})
	SMember(FName)                                     SpawnAttribute                                              OFFSET(getStruct<T>, {0x120, 4, 0, 0})
};

/// Class /Script/PCG.PCGNode
/// Size: 0x0060 (0x000028 - 0x000088)
class UPCGNode : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FName)                                     NodeTitle                                                   OFFSET(getStruct<T>, {0x28, 4, 0, 0})
	CMember(class UPCGSettingsInterface*)              SettingsInterface                                           OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(TArray<class UPCGNode*>)                   OutboundNodes                                               OFFSET(get<T>, {0x38, 16, 0, 0})
	CMember(TArray<class UPCGEdge*>)                   InboundEdges                                                OFFSET(get<T>, {0x48, 16, 0, 0})
	CMember(TArray<class UPCGEdge*>)                   OutboundEdges                                               OFFSET(get<T>, {0x58, 16, 0, 0})
	CMember(TArray<class UPCGPin*>)                    InputPins                                                   OFFSET(get<T>, {0x68, 16, 0, 0})
	CMember(TArray<class UPCGPin*>)                    OutputPins                                                  OFFSET(get<T>, {0x78, 16, 0, 0})


	/// Functions
	// Function /Script/PCG.PCGNode.RemoveEdgeTo
	// bool RemoveEdgeTo(FName FromPinLable, class UPCGNode* To, FName ToPinLabel);                                             // [0xa75c7c8] Final|Native|Public|BlueprintCallable 
	// Function /Script/PCG.PCGNode.GetSettings
	// class UPCGSettings* GetSettings();                                                                                       // [0xa75c438] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PCG.PCGNode.GetGraph
	// class UPCGGraph* GetGraph();                                                                                             // [0xa75c414] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PCG.PCGNode.AddEdgeTo
	// class UPCGNode* AddEdgeTo(FName FromPinLabel, class UPCGNode* To, FName ToPinLabel);                                     // [0xa75bb18] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/PCG.PCGBaseSubgraphNode
/// Size: 0x0000 (0x000088 - 0x000088)
class UPCGBaseSubgraphNode : public UPCGNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
};

/// Class /Script/PCG.PCGSpawnActorNode
/// Size: 0x0000 (0x000088 - 0x000088)
class UPCGSpawnActorNode : public UPCGBaseSubgraphNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
};

/// Class /Script/PCG.PCGSplineSamplerSettings
/// Size: 0x0100 (0x0000A8 - 0x0001A8)
class UPCGSplineSamplerSettings : public UPCGSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 424;

public:
	SMember(FPCGSplineSamplerParams)                   SamplerParams                                               OFFSET(getStruct<T>, {0xA8, 256, 0, 0})
};

/// Class /Script/PCG.PCGStaticMeshSpawnerSettings
/// Size: 0x0080 (0x0000A8 - 0x000128)
class UPCGStaticMeshSpawnerSettings : public UPCGSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
	CMember(class UClass*)                             MeshSelectorType                                            OFFSET(get<T>, {0xA8, 8, 0, 0})
	CMember(class UPCGMeshSelectorBase*)               MeshSelectorParameters                                      OFFSET(get<T>, {0xB0, 8, 0, 0})
	CMember(class UClass*)                             InstanceDataPackerType                                      OFFSET(get<T>, {0xB8, 8, 0, 0})
	CMember(class UPCGInstanceDataPackerBase*)         InstanceDataPackerParameters                                OFFSET(get<T>, {0xC0, 8, 0, 0})
	CMember(TArray<FPCGObjectPropertyOverrideDescription>) StaticMeshComponentPropertyOverrides                    OFFSET(get<T>, {0xC8, 16, 0, 0})
	SMember(FName)                                     OutAttributeName                                            OFFSET(getStruct<T>, {0xD8, 4, 0, 0})
	DMember(bool)                                      bApplyMeshBoundsToPoints                                    OFFSET(get<bool>, {0xDC, 1, 0, 0})
	CMember(TWeakObjectPtr<AActor*>)                   TargetActor                                                 OFFSET(get<T>, {0xE0, 32, 0, 0})
	CMember(TArray<FName>)                             PostProcessFunctionNames                                    OFFSET(get<T>, {0x100, 16, 0, 0})
	CMember(TArray<FPCGStaticMeshSpawnerEntry>)        Meshes                                                      OFFSET(get<T>, {0x110, 16, 0, 0})
	DMember(bool)                                      bSynchronousLoad                                            OFFSET(get<bool>, {0x120, 1, 0, 0})


	/// Functions
	// Function /Script/PCG.PCGStaticMeshSpawnerSettings.SetMeshSelectorType
	// void SetMeshSelectorType(class UClass* InMeshSelectorType);                                                              // [0xa679454] Final|Native|Public|BlueprintCallable 
	// Function /Script/PCG.PCGStaticMeshSpawnerSettings.SetInstancePackerType
	// void SetInstancePackerType(class UClass* InInstancePackerType);                                                          // [0xa6792b8] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/PCG.PCGSurfaceSamplerSettings
/// Size: 0x0030 (0x0000A8 - 0x0000D8)
class UPCGSurfaceSamplerSettings : public UPCGSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	DMember(float)                                     PointsPerSquaredMeter                                       OFFSET(get<float>, {0xA8, 4, 0, 0})
	SMember(FVector)                                   PointExtents                                                OFFSET(getStruct<T>, {0xB0, 24, 0, 0})
	DMember(float)                                     Looseness                                                   OFFSET(get<float>, {0xC8, 4, 0, 0})
	DMember(bool)                                      bUnbounded                                                  OFFSET(get<bool>, {0xCC, 1, 0, 0})
	DMember(bool)                                      bApplyDensityToPoints                                       OFFSET(get<bool>, {0xCD, 1, 0, 0})
	DMember(float)                                     PointSteepness                                              OFFSET(get<float>, {0xD0, 4, 0, 0})
};

/// Class /Script/PCG.PCGTextureSamplerSettings
/// Size: 0x00F8 (0x0000A8 - 0x0001A0)
class UPCGTextureSamplerSettings : public UPCGSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
	SMember(FTransform)                                Transform                                                   OFFSET(getStruct<T>, {0xB0, 96, 0, 0})
	DMember(bool)                                      bUseAbsoluteTransform                                       OFFSET(get<bool>, {0x110, 1, 0, 0})
	CMember(TWeakObjectPtr<UTexture*>)                 Texture                                                     OFFSET(get<T>, {0x118, 32, 0, 0})
	DMember(int32_t)                                   TextureArrayIndex                                           OFFSET(get<int32_t>, {0x138, 4, 0, 0})
	CMember(EPCGTextureDensityFunction)                DensityFunction                                             OFFSET(get<T>, {0x13C, 1, 0, 0})
	CMember(EPCGTextureColorChannel)                   ColorChannel                                                OFFSET(get<T>, {0x13D, 1, 0, 0})
	CMember(EPCGTextureFilter)                         Filter                                                      OFFSET(get<T>, {0x13E, 1, 0, 0})
	DMember(float)                                     TexelSize                                                   OFFSET(get<float>, {0x140, 4, 0, 0})
	DMember(bool)                                      bUseAdvancedTiling                                          OFFSET(get<bool>, {0x144, 1, 0, 0})
	SMember(FVector2D)                                 Tiling                                                      OFFSET(getStruct<T>, {0x148, 16, 0, 0})
	SMember(FVector2D)                                 CenterOffset                                                OFFSET(getStruct<T>, {0x158, 16, 0, 0})
	DMember(float)                                     Rotation                                                    OFFSET(get<float>, {0x168, 4, 0, 0})
	DMember(bool)                                      bUseTileBounds                                              OFFSET(get<bool>, {0x16C, 1, 0, 0})
	SMember(FVector2D)                                 TileBoundsMin                                               OFFSET(getStruct<T>, {0x170, 16, 0, 0})
	SMember(FVector2D)                                 TileBoundsMax                                               OFFSET(getStruct<T>, {0x180, 16, 0, 0})
	DMember(bool)                                      bSynchronousLoad                                            OFFSET(get<bool>, {0x190, 1, 0, 0})
};

/// Class /Script/PCG.PCGTransformPointsSettings
/// Size: 0x00B0 (0x0000A8 - 0x000158)
class UPCGTransformPointsSettings : public UPCGSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 344;

public:
	DMember(bool)                                      bApplyToAttribute                                           OFFSET(get<bool>, {0xA8, 1, 0, 0})
	SMember(FName)                                     AttributeName                                               OFFSET(getStruct<T>, {0xAC, 4, 0, 0})
	SMember(FVector)                                   OffsetMin                                                   OFFSET(getStruct<T>, {0xB0, 24, 0, 0})
	SMember(FVector)                                   OffsetMax                                                   OFFSET(getStruct<T>, {0xC8, 24, 0, 0})
	DMember(bool)                                      bAbsoluteOffset                                             OFFSET(get<bool>, {0xE0, 1, 0, 0})
	SMember(FRotator)                                  RotationMin                                                 OFFSET(getStruct<T>, {0xE8, 24, 0, 0})
	SMember(FRotator)                                  RotationMax                                                 OFFSET(getStruct<T>, {0x100, 24, 0, 0})
	DMember(bool)                                      bAbsoluteRotation                                           OFFSET(get<bool>, {0x118, 1, 0, 0})
	SMember(FVector)                                   ScaleMin                                                    OFFSET(getStruct<T>, {0x120, 24, 0, 0})
	SMember(FVector)                                   ScaleMax                                                    OFFSET(getStruct<T>, {0x138, 24, 0, 0})
	DMember(bool)                                      bAbsoluteScale                                              OFFSET(get<bool>, {0x150, 1, 0, 0})
	DMember(bool)                                      bUniformScale                                               OFFSET(get<bool>, {0x151, 1, 0, 0})
	DMember(bool)                                      bRecomputeSeed                                              OFFSET(get<bool>, {0x152, 1, 0, 0})
};

/// Class /Script/PCG.PCGGetLandscapeSettings
/// Size: 0x0008 (0x0000F0 - 0x0000F8)
class UPCGGetLandscapeSettings : public UPCGDataFromActorSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
	SMember(FPCGLandscapeDataProps)                    SamplingProperties                                          OFFSET(getStruct<T>, {0xF0, 5, 0, 0})
};

/// Class /Script/PCG.PCGGetSplineSettings
/// Size: 0x0000 (0x0000F0 - 0x0000F0)
class UPCGGetSplineSettings : public UPCGDataFromActorSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
};

/// Class /Script/PCG.PCGGetVolumeSettings
/// Size: 0x0000 (0x0000F0 - 0x0000F0)
class UPCGGetVolumeSettings : public UPCGDataFromActorSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
};

/// Class /Script/PCG.PCGGetPrimitiveSettings
/// Size: 0x0000 (0x0000F0 - 0x0000F0)
class UPCGGetPrimitiveSettings : public UPCGDataFromActorSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
};

/// Class /Script/PCG.PCGGetPCGComponentSettings
/// Size: 0x0000 (0x0000F0 - 0x0000F0)
class UPCGGetPCGComponentSettings : public UPCGDataFromActorSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
};

/// Class /Script/PCG.PCGUnionSettings
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UPCGUnionSettings : public UPCGSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	CMember(EPCGUnionType)                             Type                                                        OFFSET(get<T>, {0xA8, 1, 0, 0})
	CMember(EPCGUnionDensityFunction)                  DensityFunction                                             OFFSET(get<T>, {0xA9, 1, 0, 0})
};

/// Class /Script/PCG.PCGVolumeSamplerSettings
/// Size: 0x0020 (0x0000A8 - 0x0000C8)
class UPCGVolumeSamplerSettings : public UPCGSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	SMember(FVector)                                   VoxelSize                                                   OFFSET(getStruct<T>, {0xA8, 24, 0, 0})
	DMember(bool)                                      bUnbounded                                                  OFFSET(get<bool>, {0xC0, 1, 0, 0})
	DMember(float)                                     PointSteepness                                              OFFSET(get<float>, {0xC4, 4, 0, 0})
};

/// Class /Script/PCG.PCGWorldQuerySettings
/// Size: 0x0078 (0x0000A8 - 0x000120)
class UPCGWorldQuerySettings : public UPCGSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	SMember(FPCGWorldVolumetricQueryParams)            QueryParams                                                 OFFSET(getStruct<T>, {0xA8, 120, 0, 0})
};

/// Class /Script/PCG.PCGWorldRayHitSettings
/// Size: 0x00B8 (0x0000A8 - 0x000160)
class UPCGWorldRayHitSettings : public UPCGSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:
	SMember(FPCGWorldRayHitQueryParams)                QueryParams                                                 OFFSET(getStruct<T>, {0xA8, 184, 0, 0})
};

/// Class /Script/PCG.PCGLandscapeCache
/// Size: 0x00B8 (0x000028 - 0x0000E0)
class UPCGLandscapeCache : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	CMember(EPCGLandscapeCacheSerializationMode)       SerializationMode                                           OFFSET(get<T>, {0x28, 1, 0, 0})
	CMember(EPCGLandscapeCacheSerializationContents)   CookedSerializedContents                                    OFFSET(get<T>, {0x29, 1, 0, 0})
	CMember(TSet<FName>)                               CachedLayerNames                                            OFFSET(get<T>, {0x80, 80, 0, 0})


	/// Functions
	// Function /Script/PCG.PCGLandscapeCache.PrimeCache
	// void PrimeCache();                                                                                                       // [0x36203b0] Final|Native|Public  
	// Function /Script/PCG.PCGLandscapeCache.ClearCache
	// void ClearCache();                                                                                                       // [0xa6edc08] Final|Native|Public  
};

/// Class /Script/PCG.PCGPartitionActor
/// Size: 0x0108 (0x000290 - 0x000398)
class APCGPartitionActor : public APartitionActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 920;

public:
	SMember(FGuid)                                     PCGGuid                                                     OFFSET(getStruct<T>, {0x290, 16, 0, 0})
	CMember(TMap<UPCGComponent*, TWeakObjectPtr<UPCGComponent*>>) LocalToOriginal                                  OFFSET(get<T>, {0x2F0, 80, 0, 0})
	CMember(TMap<UPCGComponent*, TWeakObjectPtr<UPCGComponent*>>) LoadedPreviewComponents                          OFFSET(get<T>, {0x340, 80, 0, 0})
	DMember(uint32_t)                                  PCGGridSize                                                 OFFSET(get<uint32_t>, {0x390, 4, 0, 0})
	DMember(bool)                                      bUse2DGrid                                                  OFFSET(get<bool>, {0x394, 1, 0, 0})


	/// Functions
	// Function /Script/PCG.PCGPartitionActor.GetOriginalComponent
	// class UPCGComponent* GetOriginalComponent(class UPCGComponent* LocalComponent);                                          // [0xa6ee5a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PCG.PCGPartitionActor.GetLocalComponent
	// class UPCGComponent* GetLocalComponent(class UPCGComponent* OriginalComponent);                                          // [0xa6ee510] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/PCG.PCGActorHelpers
/// Size: 0x0000 (0x000028 - 0x000028)
class UPCGActorHelpers : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/PCG.PCGBlueprintHelpers
/// Size: 0x0000 (0x000028 - 0x000028)
class UPCGBlueprintHelpers : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/PCG.PCGBlueprintHelpers.SetSeedFromPosition
	// void SetSeedFromPosition(FPCGPoint& InPoint);                                                                            // [0xa6efc0c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGBlueprintHelpers.SetLocalCenter
	// void SetLocalCenter(FPCGPoint& InPoint, FVector& InLocalCenter);                                                         // [0xa6efa5c] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGBlueprintHelpers.SetExtents
	// void SetExtents(FPCGPoint& InPoint, FVector& InExtents);                                                                 // [0xa6ef8ac] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGBlueprintHelpers.GetTransformedBounds
	// FBox GetTransformedBounds(FPCGPoint& InPoint);                                                                           // [0xa6eef54] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGBlueprintHelpers.GetTaskId
	// int64_t GetTaskId(FPCGContext& Context);                                                                                 // [0xa6eeeb0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGBlueprintHelpers.GetTargetActor
	// class AActor* GetTargetActor(FPCGContext& Context, class UPCGSpatialData* SpatialData);                                  // [0xa6eed10] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGBlueprintHelpers.GetSettings
	// class UPCGSettings* GetSettings(FPCGContext& Context);                                                                   // [0xa6eec6c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGBlueprintHelpers.GetRandomStreamFromTwoPoints
	// FRandomStream GetRandomStreamFromTwoPoints(FPCGPoint& InPointA, FPCGPoint& InPointB, class UPCGSettings* OptionalSettings, class UPCGComponent* OptionalComponent); // [0xa6ee970] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGBlueprintHelpers.GetRandomStreamFromPoint
	// FRandomStream GetRandomStreamFromPoint(FPCGPoint& InPoint, class UPCGSettings* OptionalSettings, class UPCGComponent* OptionalComponent); // [0xa6ee6d4] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGBlueprintHelpers.GetOriginalComponent
	// class UPCGComponent* GetOriginalComponent(FPCGContext& Context);                                                         // [0xa6ee630] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGBlueprintHelpers.GetLocalCenter
	// FVector GetLocalCenter(FPCGPoint& InPoint);                                                                              // [0xa6ee40c] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGBlueprintHelpers.GetInterpolatedPCGLandscapeLayerWeights
	// TArray<FPCGLandscapeLayerWeight> GetInterpolatedPCGLandscapeLayerWeights(class UObject* WorldContextObject, FVector& Location); // [0xa6ee2c8] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGBlueprintHelpers.GetInputData
	// class UPCGData* GetInputData(FPCGContext& Context);                                                                      // [0xa6ee208] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGBlueprintHelpers.GetExtents
	// FVector GetExtents(FPCGPoint& InPoint);                                                                                  // [0xa6ee104] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGBlueprintHelpers.GetComponent
	// class UPCGComponent* GetComponent(FPCGContext& Context);                                                                 // [0xa6ee05c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGBlueprintHelpers.GetActorLocalBoundsPCG
	// FBox GetActorLocalBoundsPCG(class AActor* InActor, bool bIgnorePCGCreatedComponents);                                    // [0xa6edf7c] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGBlueprintHelpers.GetActorData
	// class UPCGData* GetActorData(FPCGContext& Context);                                                                      // [0xa6edebc] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGBlueprintHelpers.GetActorBoundsPCG
	// FBox GetActorBoundsPCG(class AActor* InActor, bool bIgnorePCGCreatedComponents);                                         // [0xa6edddc] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGBlueprintHelpers.CreatePCGDataFromActor
	// class UPCGData* CreatePCGDataFromActor(class AActor* InActor, bool bParseActor);                                         // [0xa6edd14] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PCG.PCGBlueprintHelpers.ComputeSeedFromPosition
	// int32_t ComputeSeedFromPosition(FVector& InPosition);                                                                    // [0xa6edc1c] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/PCG.PCGInstanceDataPackerBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UPCGInstanceDataPackerBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/PCG.PCGInstanceDataPackerBase.PackInstances
	// void PackInstances(FPCGContext& Context, class UPCGSpatialData* InSpatialData, FPCGMeshInstanceList& InstanceList, FPCGPackedCustomData& OutPackedCustomData); // [0xa6ef624] Native|Event|Public|HasOutParms|BlueprintEvent|Const 
	// Function /Script/PCG.PCGInstanceDataPackerBase.PackCustomDataFromAttributes
	// void PackCustomDataFromAttributes(FPCGMeshInstanceList& InstanceList, class UPCGMetadata* MetaData, TArray<FName>& AttributeNames, FPCGPackedCustomData& OutPackedCustomData); // [0xa6ef3bc] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PCG.PCGInstanceDataPackerBase.AddTypeToPacking
	// bool AddTypeToPacking(int32_t TypeId, FPCGPackedCustomData& OutPackedCustomData);                                        // [0xa6edb20] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/PCG.PCGInstanceDataPackerByAttribute
/// Size: 0x0010 (0x000028 - 0x000038)
class UPCGInstanceDataPackerByAttribute : public UPCGInstanceDataPackerBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<FName>)                             AttributeNames                                              OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Class /Script/PCG.PCGInstanceDataPackerByRegex
/// Size: 0x0010 (0x000028 - 0x000038)
class UPCGInstanceDataPackerByRegex : public UPCGInstanceDataPackerBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<FString>)                           RegexPatterns                                               OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Class /Script/PCG.PCGMatchAndSetBase
/// Size: 0x0008 (0x000028 - 0x000030)
class UPCGMatchAndSetBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(EPCGMetadataTypes)                         Type                                                        OFFSET(get<T>, {0x28, 1, 0, 0})
	CMember(EPCGMetadataTypesConstantStructStringMode) StringMode                                                  OFFSET(get<T>, {0x2C, 4, 0, 0})


	/// Functions
	// Function /Script/PCG.PCGMatchAndSetBase.ValidatePreconditions
	// bool ValidatePreconditions(class UPCGPointData* InPointData);                                                            // [0xa6efd04] Native|Event|Public|BlueprintEvent|Const 
	// Function /Script/PCG.PCGMatchAndSetBase.MatchAndSet
	// void MatchAndSet(FPCGContext& Context, class UPCGPointMatchAndSetSettings* InSettings, class UPCGPointData* InPointData, class UPCGPointData* OutPointData); // [0xa6ef064] Native|Event|Public|HasOutParms|BlueprintEvent|Const 
};

/// Class /Script/PCG.PCGMatchAndSetByAttribute
/// Size: 0x0020 (0x000030 - 0x000050)
class UPCGMatchAndSetByAttribute : public UPCGMatchAndSetBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FName)                                     MatchSourceAttribute                                        OFFSET(getStruct<T>, {0x30, 4, 0, 0})
	CMember(EPCGMetadataTypes)                         MatchSourceType                                             OFFSET(get<T>, {0x34, 1, 0, 0})
	CMember(EPCGMetadataTypesConstantStructStringMode) MatchSourceStringMode                                       OFFSET(get<T>, {0x38, 4, 0, 0})
	CMember(TArray<FPCGMatchAndSetByAttributeEntry>)   Entries                                                     OFFSET(get<T>, {0x40, 16, 0, 0})
};

/// Class /Script/PCG.PCGMatchAndSetWeighted
/// Size: 0x0018 (0x000030 - 0x000048)
class UPCGMatchAndSetWeighted : public UPCGMatchAndSetBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(TArray<FPCGMatchAndSetWeightedEntry>)      Entries                                                     OFFSET(get<T>, {0x30, 16, 0, 0})
	DMember(bool)                                      bShouldMutateSeed                                           OFFSET(get<bool>, {0x40, 1, 0, 0})
};

/// Class /Script/PCG.PCGMatchAndSetWeightedByCategory
/// Size: 0x0028 (0x000030 - 0x000058)
class UPCGMatchAndSetWeightedByCategory : public UPCGMatchAndSetBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FName)                                     CategoryAttribute                                           OFFSET(getStruct<T>, {0x30, 4, 0, 0})
	CMember(EPCGMetadataTypes)                         CategoryType                                                OFFSET(get<T>, {0x34, 1, 0, 0})
	CMember(EPCGMetadataTypesConstantStructStringMode) CategoryStringMode                                          OFFSET(get<T>, {0x38, 4, 0, 0})
	CMember(TArray<FPCGMatchAndSetWeightedByCategoryEntryList>) Categories                                         OFFSET(get<T>, {0x40, 16, 0, 0})
	DMember(bool)                                      bShouldMutateSeed                                           OFFSET(get<bool>, {0x50, 1, 0, 0})
};

/// Class /Script/PCG.PCGMeshSelectorBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UPCGMeshSelectorBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/PCG.PCGMeshSelectorByAttribute
/// Size: 0x0260 (0x000028 - 0x000288)
class UPCGMeshSelectorByAttribute : public UPCGMeshSelectorBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 648;

public:
	SMember(FName)                                     AttributeName                                               OFFSET(getStruct<T>, {0x28, 4, 0, 0})
	SMember(FSoftISMComponentDescriptor)               TemplateDescriptor                                          OFFSET(getStruct<T>, {0x30, 576, 0, 0})
	DMember(bool)                                      bUseAttributeMaterialOverrides                              OFFSET(get<bool>, {0x270, 1, 0, 0})
	CMember(TArray<FName>)                             MaterialOverrideAttributes                                  OFFSET(get<T>, {0x278, 16, 0, 0})
};

/// Class /Script/PCG.PCGMeshSelectorWeighted
/// Size: 0x0028 (0x000028 - 0x000050)
class UPCGMeshSelectorWeighted : public UPCGMeshSelectorBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TArray<FPCGMeshSelectorWeightedEntry>)     MeshEntries                                                 OFFSET(get<T>, {0x28, 16, 0, 0})
	DMember(bool)                                      bUseAttributeMaterialOverrides                              OFFSET(get<bool>, {0x38, 1, 0, 0})
	CMember(TArray<FName>)                             MaterialOverrideAttributes                                  OFFSET(get<T>, {0x40, 16, 0, 0})
};

/// Class /Script/PCG.PCGMeshSelectorWeightedByCategory
/// Size: 0x0030 (0x000028 - 0x000058)
class UPCGMeshSelectorWeightedByCategory : public UPCGMeshSelectorBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FName)                                     CategoryAttribute                                           OFFSET(getStruct<T>, {0x28, 4, 0, 0})
	CMember(TArray<FPCGWeightedByCategoryEntryList>)   Entries                                                     OFFSET(get<T>, {0x30, 16, 0, 0})
	DMember(bool)                                      bUseAttributeMaterialOverrides                              OFFSET(get<bool>, {0x40, 1, 0, 0})
	CMember(TArray<FName>)                             MaterialOverrideAttributes                                  OFFSET(get<T>, {0x48, 16, 0, 0})
};

/// Class /Script/PCG.PCGMetadata
/// Size: 0x00E0 (0x000028 - 0x000108)
class UPCGMetadata : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:
	CMember(class UPCGMetadata*)                       Parent                                                      OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(TSet<TWeakObjectPtr<UPCGMetadata*>>)       OtherParents                                                OFFSET(get<T>, {0x30, 80, 0, 0})


	/// Functions
	// Function /Script/PCG.PCGMetadata.SetPointAttributes
	// void SetPointAttributes(FPCGPoint& Point, class UPCGMetadata* MetaData, FPCGPoint& OutPoint);                            // [0xa7420e4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGMetadata.SetAttributesByKey
	// void SetAttributesByKey(int64_t Key, class UPCGMetadata* InMetaData, int64_t TargetKey, int64_t& OutKey);                // [0xa73f928] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGMetadata.ResetWeightedAttributesByKey
	// void ResetWeightedAttributesByKey(int64_t TargetKey, int64_t& OutKey);                                                   // [0xa73f444] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGMetadata.ResetPointWeightedAttributes
	// void ResetPointWeightedAttributes(FPCGPoint& OutPoint);                                                                  // [0xa73f380] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGMetadata.RenameAttribute
	// bool RenameAttribute(FName AttributeToRename, FName NewAttributeName);                                                   // [0xa73f2c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/PCG.PCGMetadata.MergePointAttributes
	// void MergePointAttributes(FPCGPoint& PointA, class UPCGMetadata* MetadataA, FPCGPoint& PointB, class UPCGMetadata* MetadataB, FPCGPoint& TargetPoint, EPCGMetadataOp Op); // [0xa73eb04] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGMetadata.MergeAttributesByKey
	// void MergeAttributesByKey(int64_t KeyA, class UPCGMetadata* MetadataA, int64_t KeyB, class UPCGMetadata* MetadataB, int64_t TargetKey, EPCGMetadataOp Op, int64_t& OutKey); // [0xa73e8ec] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGMetadata.K2_InitializeAsCopyWithAttributeFilter
	// void K2_InitializeAsCopyWithAttributeFilter(class UPCGMetadata* InMetadataToCopy, TSet<FName>& InFilteredAttributes, TArray<int64_t>& InOptionalEntriesToCopy, EPCGMetadataFilterMode InFilterMode); // [0xa73e620] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGMetadata.K2_InitializeAsCopy
	// void K2_InitializeAsCopy(class UPCGMetadata* InMetadataToCopy, TArray<int64_t>& InOptionalEntriesToCopy);                // [0xa73e524] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGMetadata.InitializeWithAttributeFilter
	// void InitializeWithAttributeFilter(class UPCGMetadata* InParent, TSet<FName>& InFilteredAttributes, EPCGMetadataFilterMode InFilterMode); // [0xa73e2b8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGMetadata.Initialize
	// void Initialize(class UPCGMetadata* InParent);                                                                           // [0xa73df54] Final|Native|Public|BlueprintCallable 
	// Function /Script/PCG.PCGMetadata.HasCommonAttributes
	// bool HasCommonAttributes(class UPCGMetadata* InMetaData);                                                                // [0xa73dde8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PCG.PCGMetadata.HasAttribute
	// bool HasAttribute(FName AttributeName);                                                                                  // [0xa73d9cc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PCG.PCGMetadata.GetItemCountForChild
	// int64_t GetItemCountForChild();                                                                                          // [0xa73a5f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PCG.PCGMetadata.GetAttributes
	// void GetAttributes(TArray<FName>& AttributeNames, TArray<EPCGMetadataTypes>& AttributeTypes);                            // [0xa738dc0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PCG.PCGMetadata.GetAttributeCount
	// int32_t GetAttributeCount();                                                                                             // [0xa738d9c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PCG.PCGMetadata.Flatten
	// void Flatten();                                                                                                          // [0xa738bf8] Final|Native|Public|BlueprintCallable 
	// Function /Script/PCG.PCGMetadata.DeleteAttribute
	// void DeleteAttribute(FName AttributeName);                                                                               // [0xa738b78] Final|Native|Public|BlueprintCallable 
	// Function /Script/PCG.PCGMetadata.CreateVectorAttribute
	// class UPCGMetadata* CreateVectorAttribute(FName AttributeName, FVector DefaultValue, bool bAllowsInterpolation, bool bOverrideParent); // [0xa73882c] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGMetadata.CreateVector4Attribute
	// class UPCGMetadata* CreateVector4Attribute(FName AttributeName, FVector4 DefaultValue, bool bAllowsInterpolation, bool bOverrideParent); // [0xa7384d0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGMetadata.CreateVector2Attribute
	// class UPCGMetadata* CreateVector2Attribute(FName AttributeName, FVector2D DefaultValue, bool bAllowsInterpolation, bool bOverrideParent); // [0xa738190] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGMetadata.CreateTransformAttribute
	// class UPCGMetadata* CreateTransformAttribute(FName AttributeName, FTransform DefaultValue, bool bAllowsInterpolation, bool bOverrideParent); // [0xa737da8] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGMetadata.CreateStringAttribute
	// class UPCGMetadata* CreateStringAttribute(FName AttributeName, FString DefaultValue, bool bAllowsInterpolation, bool bOverrideParent); // [0xa737b74] Final|Native|Public|BlueprintCallable 
	// Function /Script/PCG.PCGMetadata.CreateSoftObjectPathAttribute
	// class UPCGMetadata* CreateSoftObjectPathAttribute(FName AttributeName, FSoftObjectPath& DefaultValue, bool bAllowsInterpolation, bool bOverrideParent); // [0xa7378c4] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGMetadata.CreateSoftClassPathAttribute
	// class UPCGMetadata* CreateSoftClassPathAttribute(FName AttributeName, FSoftClassPath& DefaultValue, bool bAllowsInterpolation, bool bOverrideParent); // [0xa73752c] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGMetadata.CreateRotatorAttribute
	// class UPCGMetadata* CreateRotatorAttribute(FName AttributeName, FRotator DefaultValue, bool bAllowsInterpolation, bool bOverrideParent); // [0xa7371e0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGMetadata.CreateQuatAttribute
	// class UPCGMetadata* CreateQuatAttribute(FName AttributeName, FQuat DefaultValue, bool bAllowsInterpolation, bool bOverrideParent); // [0xa736e98] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGMetadata.CreateNameAttribute
	// class UPCGMetadata* CreateNameAttribute(FName AttributeName, FName DefaultValue, bool bAllowsInterpolation, bool bOverrideParent); // [0xa736d4c] Final|Native|Public|BlueprintCallable 
	// Function /Script/PCG.PCGMetadata.CreateInteger64Attribute
	// class UPCGMetadata* CreateInteger64Attribute(FName AttributeName, int64_t DefaultValue, bool bAllowsInterpolation, bool bOverrideParent); // [0xa736bfc] Final|Native|Public|BlueprintCallable 
	// Function /Script/PCG.PCGMetadata.CreateInteger32Attribute
	// class UPCGMetadata* CreateInteger32Attribute(FName AttributeName, int32_t DefaultValue, bool bAllowsInterpolation, bool bOverrideParent); // [0xa736aac] Final|Native|Public|BlueprintCallable 
	// Function /Script/PCG.PCGMetadata.CreateFloatAttribute
	// class UPCGMetadata* CreateFloatAttribute(FName AttributeName, float DefaultValue, bool bAllowsInterpolation, bool bOverrideParent); // [0xa73695c] Final|Native|Public|BlueprintCallable 
	// Function /Script/PCG.PCGMetadata.CreateDoubleAttribute
	// class UPCGMetadata* CreateDoubleAttribute(FName AttributeName, double DefaultValue, bool bAllowsInterpolation, bool bOverrideParent); // [0xa736804] Final|Native|Public|BlueprintCallable 
	// Function /Script/PCG.PCGMetadata.CreateBoolAttribute
	// class UPCGMetadata* CreateBoolAttribute(FName AttributeName, bool DefaultValue, bool bAllowsInterpolation, bool bOverrideParent); // [0xa7366ac] Final|Native|Public|BlueprintCallable 
	// Function /Script/PCG.PCGMetadata.CopyExistingAttribute
	// bool CopyExistingAttribute(FName AttributeToCopy, FName NewAttributeName, bool bKeepParent);                             // [0xa7361b8] Final|Native|Public|BlueprintCallable 
	// Function /Script/PCG.PCGMetadata.CopyAttributes
	// void CopyAttributes(class UPCGMetadata* InOther);                                                                        // [0xa736014] Final|Native|Public|BlueprintCallable 
	// Function /Script/PCG.PCGMetadata.CopyAttribute
	// void CopyAttribute(class UPCGMetadata* InOther, FName AttributeToCopy, FName NewAttributeName);                          // [0xa735e8c] Final|Native|Public|BlueprintCallable 
	// Function /Script/PCG.PCGMetadata.ClearAttribute
	// void ClearAttribute(FName AttributeToClear);                                                                             // [0xa735d7c] Final|Native|Public|BlueprintCallable 
	// Function /Script/PCG.PCGMetadata.AddEntry
	// int64_t AddEntry(int64_t ParentEntryKey);                                                                                // [0xa735350] Final|Native|Public|BlueprintCallable 
	// Function /Script/PCG.PCGMetadata.AddAttributesFiltered
	// void AddAttributesFiltered(class UPCGMetadata* InOther, TSet<FName>& InFilteredAttributes, EPCGMetadataFilterMode InFilterMode); // [0xa734d04] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGMetadata.AddAttributes
	// void AddAttributes(class UPCGMetadata* InOther);                                                                         // [0xa734c84] Final|Native|Public|BlueprintCallable 
	// Function /Script/PCG.PCGMetadata.AddAttribute
	// void AddAttribute(class UPCGMetadata* InOther, FName AttributeName);                                                     // [0xa734ad8] Final|Native|Public|BlueprintCallable 
	// Function /Script/PCG.PCGMetadata.AccumulateWeightedAttributesByKey
	// void AccumulateWeightedAttributesByKey(int64_t Key, class UPCGMetadata* MetaData, float Weight, bool bSetNonInterpolableAttributes, int64_t TargetKey, int64_t& OutKey); // [0xa73474c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGMetadata.AccumulatePointWeightedAttributes
	// void AccumulatePointWeightedAttributes(FPCGPoint& InPoint, class UPCGMetadata* InMetaData, float Weight, bool bSetNonInterpolableAttributes, FPCGPoint& OutPoint); // [0xa734370] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/PCG.PCGMetadataAccessorHelpers
/// Size: 0x0000 (0x000028 - 0x000028)
class UPCGMetadataAccessorHelpers : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/PCG.PCGMetadataAccessorHelpers.SetVectorAttributeByMetadataKey
	// void SetVectorAttributeByMetadataKey(int64_t& Key, class UPCGMetadata* MetaData, FName AttributeName, FVector& Value);   // [0xa7456e0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.SetVectorAttribute
	// void SetVectorAttribute(FPCGPoint& Point, class UPCGMetadata* MetaData, FName AttributeName, FVector& Value);            // [0xa745390] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.SetVector4AttributeByMetadataKey
	// void SetVector4AttributeByMetadataKey(int64_t& Key, class UPCGMetadata* MetaData, FName AttributeName, FVector4& Value); // [0xa745114] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.SetVector4Attribute
	// void SetVector4Attribute(FPCGPoint& Point, class UPCGMetadata* MetaData, FName AttributeName, FVector4& Value);          // [0xa744e58] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.SetVector2AttributeByMetadataKey
	// void SetVector2AttributeByMetadataKey(int64_t& Key, class UPCGMetadata* MetaData, FName AttributeName, FVector2D& Value); // [0xa744bf0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.SetVector2Attribute
	// void SetVector2Attribute(FPCGPoint& Point, class UPCGMetadata* MetaData, FName AttributeName, FVector2D& Value);         // [0xa744948] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.SetTransformAttributeByMetadataKey
	// void SetTransformAttributeByMetadataKey(int64_t& Key, class UPCGMetadata* MetaData, FName AttributeName, FTransform& Value); // [0xa7445e8] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.SetTransformAttribute
	// void SetTransformAttribute(FPCGPoint& Point, class UPCGMetadata* MetaData, FName AttributeName, FTransform& Value);      // [0xa744268] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.SetStringAttributeByMetadataKey
	// void SetStringAttributeByMetadataKey(int64_t& Key, class UPCGMetadata* MetaData, FName AttributeName, FString Value);    // [0xa743f34] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.SetStringAttribute
	// void SetStringAttribute(FPCGPoint& Point, class UPCGMetadata* MetaData, FName AttributeName, FString Value);             // [0xa743bac] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.SetSoftObjectPathAttributeByMetadataKey
	// void SetSoftObjectPathAttributeByMetadataKey(int64_t& Key, class UPCGMetadata* MetaData, FName AttributeName, FSoftObjectPath& Value); // [0xa743858] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.SetSoftObjectPathAttribute
	// void SetSoftObjectPathAttribute(FPCGPoint& Point, class UPCGMetadata* MetaData, FName AttributeName, FSoftObjectPath& Value); // [0xa7434c0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.SetSoftClassPathAttributeByMetadataKey
	// void SetSoftClassPathAttributeByMetadataKey(int64_t& Key, class UPCGMetadata* MetaData, FName AttributeName, FSoftClassPath& Value); // [0xa74316c] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.SetSoftClassPathAttribute
	// void SetSoftClassPathAttribute(FPCGPoint& Point, class UPCGMetadata* MetaData, FName AttributeName, FSoftClassPath& Value); // [0xa742dd4] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.SetRotatorAttributeByMetadataKey
	// void SetRotatorAttributeByMetadataKey(int64_t& Key, class UPCGMetadata* MetaData, FName AttributeName, FRotator& Value); // [0xa742b10] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.SetRotatorAttribute
	// void SetRotatorAttribute(FPCGPoint& Point, class UPCGMetadata* MetaData, FName AttributeName, FRotator& Value);          // [0xa7427fc] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.SetQuatAttributeByMetadataKey
	// void SetQuatAttributeByMetadataKey(int64_t& Key, class UPCGMetadata* MetaData, FName AttributeName, FQuat& Value);       // [0xa742594] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.SetQuatAttribute
	// void SetQuatAttribute(FPCGPoint& Point, class UPCGMetadata* MetaData, FName AttributeName, FQuat& Value);                // [0xa7422ec] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.SetNameAttribute
	// void SetNameAttribute(FPCGPoint& Point, class UPCGMetadata* MetaData, FName AttributeName, FName& Value);                // [0xa741dcc] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.SetInteger64AttributeByMetadataKey
	// void SetInteger64AttributeByMetadataKey(int64_t& Key, class UPCGMetadata* MetaData, FName AttributeName, int64_t Value); // [0xa741aa8] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.SetInteger64Attribute
	// void SetInteger64Attribute(FPCGPoint& Point, class UPCGMetadata* MetaData, FName AttributeName, int64_t Value);          // [0xa741730] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.SetInteger32AttributeByMetadataKey
	// void SetInteger32AttributeByMetadataKey(int64_t& Key, class UPCGMetadata* MetaData, FName AttributeName, int32_t Value); // [0xa74140c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.SetInteger32Attribute
	// void SetInteger32Attribute(FPCGPoint& Point, class UPCGMetadata* MetaData, FName AttributeName, int32_t Value);          // [0xa741098] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.SetFloatAttributeByMetadataKey
	// void SetFloatAttributeByMetadataKey(int64_t& Key, class UPCGMetadata* MetaData, FName AttributeName, float Value);       // [0xa740d74] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.SetFloatAttribute
	// void SetFloatAttribute(FPCGPoint& Point, class UPCGMetadata* MetaData, FName AttributeName, float Value);                // [0xa740a00] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.SetDoubleAttributeByMetadataKey
	// void SetDoubleAttributeByMetadataKey(int64_t& Key, class UPCGMetadata* MetaData, FName AttributeName, double Value);     // [0xa74060c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.SetDoubleAttribute
	// void SetDoubleAttribute(FPCGPoint& Point, class UPCGMetadata* MetaData, FName AttributeName, double Value);              // [0xa74028c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.SetBoolAttributeByMetadataKey
	// void SetBoolAttributeByMetadataKey(int64_t& Key, class UPCGMetadata* MetaData, FName AttributeName, bool Value);         // [0xa73ff68] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.SetBoolAttribute
	// void SetBoolAttribute(FPCGPoint& Point, class UPCGMetadata* MetaData, FName AttributeName, bool Value);                  // [0xa73fbf0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.SetAttributeFromPropertyByMetadataKey
	// bool SetAttributeFromPropertyByMetadataKey(int64_t& Key, class UPCGMetadata* MetaData, FName AttributeName, class UObject* Object, FName PropertyName); // [0xa73f518] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.InitializeMetadata
	// void InitializeMetadata(FPCGPoint& Point, class UPCGMetadata* MetaData, FPCGPoint& ParentPoint, class UPCGMetadata* ParentMetadata); // [0xa73dfd4] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.HasAttributeSetByMetadataKey
	// bool HasAttributeSetByMetadataKey(int64_t Key, class UPCGMetadata* MetaData, FName AttributeName);                       // [0xa73dcf0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.HasAttributeSet
	// bool HasAttributeSet(FPCGPoint& Point, class UPCGMetadata* MetaData, FName AttributeName);                               // [0xa73da58] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.GetVectorAttributeByMetadataKey
	// FVector GetVectorAttributeByMetadataKey(int64_t Key, class UPCGMetadata* MetaData, FName AttributeName);                 // [0xa73d8c0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.GetVectorAttribute
	// FVector GetVectorAttribute(FPCGPoint& Point, class UPCGMetadata* MetaData, FName AttributeName);                         // [0xa73d614] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.GetVector4AttributeByMetadataKey
	// FVector4 GetVector4AttributeByMetadataKey(int64_t Key, class UPCGMetadata* MetaData, FName AttributeName);               // [0xa73d50c] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.GetVector4Attribute
	// FVector4 GetVector4Attribute(FPCGPoint& Point, class UPCGMetadata* MetaData, FName AttributeName);                       // [0xa73d260] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.GetVector2AttributeByMetadataKey
	// FVector2D GetVector2AttributeByMetadataKey(int64_t Key, class UPCGMetadata* MetaData, FName AttributeName);              // [0xa73d160] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.GetVector2Attribute
	// FVector2D GetVector2Attribute(FPCGPoint& Point, class UPCGMetadata* MetaData, FName AttributeName);                      // [0xa73cebc] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.GetTransformAttributeByMetadataKey
	// FTransform GetTransformAttributeByMetadataKey(int64_t Key, class UPCGMetadata* MetaData, FName AttributeName);           // [0xa73c2c8] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.GetTransformAttribute
	// FTransform GetTransformAttribute(FPCGPoint& Point, class UPCGMetadata* MetaData, FName AttributeName);                   // [0xa73bff8] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.GetStringAttributeByMetadataKey
	// FString GetStringAttributeByMetadataKey(int64_t Key, class UPCGMetadata* MetaData, FName AttributeName);                 // [0xa73bee8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.GetStringAttribute
	// FString GetStringAttribute(FPCGPoint& Point, class UPCGMetadata* MetaData, FName AttributeName);                         // [0xa73bc30] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.GetSoftObjectPathAttributeByMetadataKey
	// FSoftObjectPath GetSoftObjectPathAttributeByMetadataKey(int64_t Key, class UPCGMetadata* MetaData, FName AttributeName); // [0xa73bb10] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.GetSoftObjectPathAttribute
	// FSoftObjectPath GetSoftObjectPathAttribute(FPCGPoint& Point, class UPCGMetadata* MetaData, FName AttributeName);         // [0xa73b858] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.GetSoftClassPathAttributeByMetadataKey
	// FSoftClassPath GetSoftClassPathAttributeByMetadataKey(int64_t Key, class UPCGMetadata* MetaData, FName AttributeName);   // [0xa73b738] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.GetSoftClassPathAttribute
	// FSoftClassPath GetSoftClassPathAttribute(FPCGPoint& Point, class UPCGMetadata* MetaData, FName AttributeName);           // [0xa73b480] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.GetRotatorAttributeByMetadataKey
	// FRotator GetRotatorAttributeByMetadataKey(int64_t Key, class UPCGMetadata* MetaData, FName AttributeName);               // [0xa73b35c] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.GetRotatorAttribute
	// FRotator GetRotatorAttribute(FPCGPoint& Point, class UPCGMetadata* MetaData, FName AttributeName);                       // [0xa73b0b0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.GetQuatAttributeByMetadataKey
	// FQuat GetQuatAttributeByMetadataKey(int64_t Key, class UPCGMetadata* MetaData, FName AttributeName);                     // [0xa73afa8] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.GetQuatAttribute
	// FQuat GetQuatAttribute(FPCGPoint& Point, class UPCGMetadata* MetaData, FName AttributeName);                             // [0xa73acfc] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.GetNameAttribute
	// FName GetNameAttribute(FPCGPoint& Point, class UPCGMetadata* MetaData, FName AttributeName);                             // [0xa73a614] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.GetInteger64AttributeByMetadataKey
	// int64_t GetInteger64AttributeByMetadataKey(int64_t Key, class UPCGMetadata* MetaData, FName AttributeName);              // [0xa73a4f8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.GetInteger64Attribute
	// int64_t GetInteger64Attribute(FPCGPoint& Point, class UPCGMetadata* MetaData, FName AttributeName);                      // [0xa73a260] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.GetInteger32AttributeByMetadataKey
	// int32_t GetInteger32AttributeByMetadataKey(int64_t Key, class UPCGMetadata* MetaData, FName AttributeName);              // [0xa73a168] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.GetInteger32Attribute
	// int32_t GetInteger32Attribute(FPCGPoint& Point, class UPCGMetadata* MetaData, FName AttributeName);                      // [0xa739ed0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.GetFloatAttributeByMetadataKey
	// float GetFloatAttributeByMetadataKey(int64_t Key, class UPCGMetadata* MetaData, FName AttributeName);                    // [0xa739974] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.GetFloatAttribute
	// float GetFloatAttribute(FPCGPoint& Point, class UPCGMetadata* MetaData, FName AttributeName);                            // [0xa7396dc] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.GetDoubleAttributeByMetadataKey
	// double GetDoubleAttributeByMetadataKey(int64_t Key, class UPCGMetadata* MetaData, FName AttributeName);                  // [0xa7395e4] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.GetDoubleAttribute
	// double GetDoubleAttribute(FPCGPoint& Point, class UPCGMetadata* MetaData, FName AttributeName);                          // [0xa73934c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.GetBoolAttributeByMetadataKey
	// bool GetBoolAttributeByMetadataKey(int64_t Key, class UPCGMetadata* MetaData, FName AttributeName);                      // [0xa739254] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.GetBoolAttribute
	// bool GetBoolAttribute(FPCGPoint& Point, class UPCGMetadata* MetaData, FName AttributeName);                              // [0xa738fbc] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGMetadataAccessorHelpers.CopyPoint
	// void CopyPoint(FPCGPoint& InPoint, FPCGPoint& OutPoint, bool bCopyMetadata, class UPCGMetadata* InMetaData, class UPCGMetadata* OutMetadata); // [0xa7362c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/PCG.PCGComponent
/// Size: 0x01F0 (0x0000A0 - 0x000290)
class UPCGComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 656;

public:
	DMember(int32_t)                                   Seed                                                        OFFSET(get<int32_t>, {0xA0, 4, 0, 0})
	DMember(bool)                                      bActivated                                                  OFFSET(get<bool>, {0xA4, 1, 0, 0})
	DMember(bool)                                      bIsComponentPartitioned                                     OFFSET(get<bool>, {0xA5, 1, 0, 0})
	CMember(EPCGComponentGenerationTrigger)            GenerationTrigger                                           OFFSET(get<T>, {0xA6, 1, 0, 0})
	DMember(bool)                                      bGenerateOnDropWhenTriggerOnDemand                          OFFSET(get<bool>, {0xA7, 1, 0, 0})
	DMember(bool)                                      bOverrideGenerationRadii                                    OFFSET(get<bool>, {0xA8, 1, 0, 0})
	SMember(FPCGRuntimeGenerationRadii)                GenerationRadii                                             OFFSET(getStruct<T>, {0xB0, 96, 0, 0})
	CMember(class UClass*)                             SchedulingPolicyClass                                       OFFSET(get<T>, {0x110, 8, 0, 0})
	CMember(class UPCGSchedulingPolicyBase*)           SchedulingPolicy                                            OFFSET(get<T>, {0x118, 8, 0, 0})
	DMember(bool)                                      bGenerated                                                  OFFSET(get<bool>, {0x120, 1, 0, 0})
	DMember(bool)                                      bRuntimeGenerated                                           OFFSET(get<bool>, {0x121, 1, 0, 0})
	CMember(TArray<FName>)                             PostGenerateFunctionNames                                   OFFSET(get<T>, {0x128, 16, 0, 0})
	CMember(class UPCGGraphInstance*)                  GraphInstance                                               OFFSET(get<T>, {0x138, 8, 0, 0})
	DMember(uint32_t)                                  GenerationGridSize                                          OFFSET(get<uint32_t>, {0x140, 4, 0, 0})
	CMember(EPCGEditorDirtyMode)                       CurrentEditingMode                                          OFFSET(get<T>, {0x144, 1, 0, 0})
	CMember(EPCGEditorDirtyMode)                       SerializedEditingMode                                       OFFSET(get<T>, {0x145, 1, 0, 0})
	CMember(EPCGComponentInput)                        InputType                                                   OFFSET(get<T>, {0x147, 1, 0, 0})
	DMember(bool)                                      bParseActorComponents                                       OFFSET(get<bool>, {0x148, 1, 0, 0})
	CMember(class UPCGData*)                           CachedPCGData                                               OFFSET(get<T>, {0x150, 8, 0, 0})
	CMember(class UPCGData*)                           CachedInputData                                             OFFSET(get<T>, {0x158, 8, 0, 0})
	CMember(class UPCGData*)                           CachedActorData                                             OFFSET(get<T>, {0x160, 8, 0, 0})
	CMember(class UPCGData*)                           CachedLandscapeData                                         OFFSET(get<T>, {0x168, 8, 0, 0})
	CMember(class UPCGData*)                           CachedLandscapeHeightData                                   OFFSET(get<T>, {0x170, 8, 0, 0})
	CMember(TArray<class UPCGManagedResource*>)        GeneratedResources                                          OFFSET(get<T>, {0x178, 16, 0, 0})
	SMember(FBox)                                      LastGeneratedBounds                                         OFFSET(getStruct<T>, {0x190, 56, 0, 0})
	SMember(FPCGDataCollection)                        GeneratedGraphOutput                                        OFFSET(getStruct<T>, {0x1C8, 48, 0, 0})
	CMember(TMap<FString, FPCGDataCollection>)         PerPinGeneratedOutput                                       OFFSET(get<T>, {0x1F8, 80, 0, 0})
	DMember(bool)                                      bIsComponentLocal                                           OFFSET(get<bool>, {0x260, 1, 0, 0})


	/// Functions
	// Function /Script/PCG.PCGComponent.SetGraph
	// void SetGraph(class UPCGGraphInterface* InGraph);                                                                        // [0x7c2bb64] Net|NetReliableNative|Event|NetMulticast|Public|BlueprintCallable 
	// Function /Script/PCG.PCGComponent.SetEditingMode
	// void SetEditingMode(EPCGEditorDirtyMode InEditingMode, EPCGEditorDirtyMode InSerializedEditingMode);                     // [0xa740938] Final|Native|Public|BlueprintCallable 
	// Function /Script/PCG.PCGComponent.NotifyPropertiesChangedFromBlueprint
	// void NotifyPropertiesChangedFromBlueprint();                                                                             // [0x36203b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/PCG.PCGComponent.GetSerializedEditingMode
	// EPCGEditorDirtyMode GetSerializedEditingMode();                                                                          // [0xa73b468] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PCG.PCGComponent.GetGeneratedGraphOutput
	// FPCGDataCollection GetGeneratedGraphOutput();                                                                            // [0xa739a6c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PCG.PCGComponent.GetEditingMode
	// EPCGEditorDirtyMode GetEditingMode();                                                                                    // [0xa4fd6cc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PCG.PCGComponent.GenerateLocal
	// void GenerateLocal(bool bForce);                                                                                         // [0xa738c54] Final|Native|Public|BlueprintCallable 
	// Function /Script/PCG.PCGComponent.Generate
	// void Generate(bool bForce);                                                                                              // [0x70d0474] Net|NetReliableNative|Event|NetMulticast|Public|BlueprintCallable 
	// Function /Script/PCG.PCGComponent.ClearPCGLink
	// class AActor* ClearPCGLink(class UClass* TemplateActor);                                                                 // [0xa735dfc] Final|Native|Public|BlueprintCallable 
	// Function /Script/PCG.PCGComponent.CleanupLocal
	// void CleanupLocal(bool bRemoveComponents, bool bSave);                                                                   // [0xa735cc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/PCG.PCGComponent.Cleanup
	// void Cleanup(bool bRemoveComponents, bool bSave);                                                                        // [0xa735bf8] Net|NetReliableNative|Event|NetMulticast|Public|BlueprintCallable 
	// Function /Script/PCG.PCGComponent.AddToManagedResources
	// void AddToManagedResources(class UPCGManagedResource* InResource);                                                       // [0xa735b18] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/PCG.PCGDataFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UPCGDataFunctionLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/PCG.PCGDataFunctionLibrary.GetTypedInputsByTag
	// TArray<UPCGData*> GetTypedInputsByTag(FPCGDataCollection& InCollection, FString InTag, TArray<FPCGTaggedData>& OutTaggedData, class UClass* InDataTypeClass); // [0xa73cbb8] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGDataFunctionLibrary.GetTypedInputsByPinLabel
	// TArray<UPCGData*> GetTypedInputsByPinLabel(FPCGDataCollection& InCollection, FName InPinLabel, TArray<FPCGTaggedData>& OutTaggedData, class UClass* InDataTypeClass); // [0xa73c8c4] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGDataFunctionLibrary.GetTypedInputsByPin
	// TArray<UPCGData*> GetTypedInputsByPin(FPCGDataCollection& InCollection, FPCGPinProperties& InPin, TArray<FPCGTaggedData>& OutTaggedData, class UClass* InDataTypeClass); // [0xa73c638] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGDataFunctionLibrary.GetTypedInputs
	// TArray<UPCGData*> GetTypedInputs(FPCGDataCollection& InCollection, TArray<FPCGTaggedData>& OutTaggedData, class UClass* InDataTypeClass); // [0xa73c414] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGDataFunctionLibrary.GetParamsByTag
	// TArray<FPCGTaggedData> GetParamsByTag(FPCGDataCollection& InCollection, FString InTag);                                  // [0xa73ab2c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGDataFunctionLibrary.GetParamsByPinLabel
	// TArray<FPCGTaggedData> GetParamsByPinLabel(FPCGDataCollection& InCollection, FName InPinLabel);                          // [0xa73a97c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGDataFunctionLibrary.GetParams
	// TArray<FPCGTaggedData> GetParams(FPCGDataCollection& InCollection);                                                      // [0xa73a8b4] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGDataFunctionLibrary.GetInputsByTag
	// TArray<FPCGTaggedData> GetInputsByTag(FPCGDataCollection& InCollection, FString InTag);                                  // [0xa739d00] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGDataFunctionLibrary.GetInputsByPinLabel
	// TArray<FPCGTaggedData> GetInputsByPinLabel(FPCGDataCollection& InCollection, FName InPinLabel);                          // [0xa739b50] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGDataFunctionLibrary.GetInputs
	// TArray<FPCGTaggedData> GetInputs(FPCGDataCollection& InCollection);                                                      // [0xa739a88] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGDataFunctionLibrary.GetAllSettings
	// TArray<FPCGTaggedData> GetAllSettings(FPCGDataCollection& InCollection);                                                 // [0xa738cd4] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGDataFunctionLibrary.AddToCollection
	// void AddToCollection(FPCGDataCollection& InCollection, class UPCGData* InData, FName InPinLabel, TArray<FString> InTags); // [0xa73575c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/PCG.PCGEdge
/// Size: 0x0030 (0x000028 - 0x000058)
class UPCGEdge : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FName)                                     InboundLabel                                                OFFSET(getStruct<T>, {0x28, 4, 0, 0})
	CMember(class UPCGNode*)                           InboundNode                                                 OFFSET(get<T>, {0x30, 8, 0, 0})
	SMember(FName)                                     OutboundLabel                                               OFFSET(getStruct<T>, {0x38, 4, 0, 0})
	CMember(class UPCGNode*)                           OutboundNode                                                OFFSET(get<T>, {0x40, 8, 0, 0})
	CMember(class UPCGPin*)                            InputPin                                                    OFFSET(get<T>, {0x48, 8, 0, 0})
	CMember(class UPCGPin*)                            OutputPin                                                   OFFSET(get<T>, {0x50, 8, 0, 0})
};

/// Class /Script/PCG.PCGGraphInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UPCGGraphInterface : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/PCG.PCGGraphInterface.GetMutablePCGGraph
	// class UPCGGraph* GetMutablePCGGraph();                                                                                   // [0x7f3a054] Final|Native|Public|BlueprintCallable 
	// Function /Script/PCG.PCGGraphInterface.GetConstPCGGraph
	// class UPCGGraph* GetConstPCGGraph();                                                                                     // [0x30ea940] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/PCG.PCGGraph
/// Size: 0x0100 (0x000028 - 0x000128)
class UPCGGraph : public UPCGGraphInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
	DMember(bool)                                      bLandscapeUsesMetadata                                      OFFSET(get<bool>, {0x28, 1, 0, 0})
	CMember(TArray<class UPCGNode*>)                   Nodes                                                       OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(class UPCGNode*)                           InputNode                                                   OFFSET(get<T>, {0x40, 8, 0, 0})
	CMember(class UPCGNode*)                           OutputNode                                                  OFFSET(get<T>, {0x48, 8, 0, 0})
	SMember(FInstancedPropertyBag)                     UserParameters                                              OFFSET(getStruct<T>, {0x50, 16, 0, 0})
	DMember(bool)                                      bUseHierarchicalGeneration                                  OFFSET(get<bool>, {0x60, 1, 0, 0})
	CMember(EPCGHiGenGrid)                             HiGenGridSize                                               OFFSET(get<T>, {0x64, 4, 0, 0})
	DMember(bool)                                      bIsEditorOnly                                               OFFSET(get<bool>, {0xC0, 1, 0, 0})
	SMember(FPCGRuntimeGenerationRadii)                GenerationRadii                                             OFFSET(getStruct<T>, {0xC8, 96, 0, 0})


	/// Functions
	// Function /Script/PCG.PCGGraph.RemoveNodes
	// void RemoveNodes(TArray<UPCGNode*>& InNodes);                                                                            // [0xa73f134] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGGraph.RemoveNode
	// void RemoveNode(class UPCGNode* InNode);                                                                                 // [0xa73f0b4] Final|Native|Public|BlueprintCallable 
	// Function /Script/PCG.PCGGraph.RemoveEdge
	// bool RemoveEdge(class UPCGNode* From, FName& FromLabel, class UPCGNode* To, FName& ToLabel);                             // [0xa73ef50] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGGraph.GetOutputNode
	// class UPCGNode* GetOutputNode();                                                                                         // [0x9443d7c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PCG.PCGGraph.GetInputNode
	// class UPCGNode* GetInputNode();                                                                                          // [0x6473ba8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PCG.PCGGraph.AddNodeOfType
	// class UPCGNode* AddNodeOfType(class UClass* InSettingsClass, class UPCGSettings*& DefaultNodeSettings);                  // [0xa735608] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGGraph.AddNodeInstance
	// class UPCGNode* AddNodeInstance(class UPCGSettings* InSettings);                                                         // [0xa735520] Final|Native|Public|BlueprintCallable 
	// Function /Script/PCG.PCGGraph.AddNodeCopy
	// class UPCGNode* AddNodeCopy(class UPCGSettings* InSettings, class UPCGSettings*& DefaultNodeSettings);                   // [0xa7353e0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGGraph.AddEdge
	// class UPCGNode* AddEdge(class UPCGNode* From, FName& FromPinLabel, class UPCGNode* To, FName& ToPinLabel);               // [0xa7351ec] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/PCG.PCGGraphInstance
/// Size: 0x0068 (0x000028 - 0x000090)
class UPCGGraphInstance : public UPCGGraphInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	CMember(class UPCGGraphInterface*)                 Graph                                                       OFFSET(get<T>, {0x28, 8, 0, 0})
	SMember(FPCGOverrideInstancedPropertyBag)          ParametersOverrides                                         OFFSET(getStruct<T>, {0x30, 96, 0, 0})
};

/// Class /Script/PCG.PCGGraphInputOutputSettings
/// Size: 0x0078 (0x0000A8 - 0x000120)
class UPCGGraphInputOutputSettings : public UPCGSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	CMember(TSet<FName>)                               PinLabels                                                   OFFSET(get<T>, {0xA8, 80, 0, 0})
	CMember(TArray<FPCGPinProperties>)                 CustomPins                                                  OFFSET(get<T>, {0xF8, 16, 0, 0})
	CMember(TArray<FPCGPinProperties>)                 Pins                                                        OFFSET(get<T>, {0x108, 16, 0, 0})
	DMember(bool)                                      bHasAddedDefaultPin                                         OFFSET(get<bool>, {0x118, 1, 0, 0})
};

/// Class /Script/PCG.PCGManagedActors
/// Size: 0x0050 (0x000038 - 0x000088)
class UPCGManagedActors : public UPCGManagedResource
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	CMember(TSet<TWeakObjectPtr<AActor*>>)             GeneratedActors                                             OFFSET(get<T>, {0x38, 80, 0, 0})
};

/// Class /Script/PCG.PCGManagedISMComponent
/// Size: 0x0248 (0x000058 - 0x0002A0)
class UPCGManagedISMComponent : public UPCGManagedComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 672;

public:
	DMember(bool)                                      bHasDescriptor                                              OFFSET(get<bool>, {0x58, 1, 0, 0})
	SMember(FISMComponentDescriptor)                   Descriptor                                                  OFFSET(getStruct<T>, {0x60, 528, 0, 0})
	DMember(bool)                                      bHasRootLocation                                            OFFSET(get<bool>, {0x270, 1, 0, 0})
	SMember(FVector)                                   RootLocation                                                OFFSET(getStruct<T>, {0x278, 24, 0, 0})
	DMember(uint64_t)                                  SettingsUID                                                 OFFSET(get<uint64_t>, {0x290, 8, 0, 0})
};

/// Class /Script/PCG.PCGParamData
/// Size: 0x0088 (0x000038 - 0x0000C0)
class UPCGParamData : public UPCGData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	CMember(class UPCGMetadata*)                       MetaData                                                    OFFSET(get<T>, {0x38, 8, 0, 0})
	CMember(TMap<FName, int64_t>)                      NameMap                                                     OFFSET(get<T>, {0x40, 80, 0, 0})
	DMember(bool)                                      bHasCachedLastSelector                                      OFFSET(get<bool>, {0x90, 1, 0, 0})
	SMember(FPCGAttributePropertyInputSelector)        CachedLastSelector                                          OFFSET(getStruct<T>, {0x98, 40, 0, 0})


	/// Functions
	// Function /Script/PCG.PCGParamData.MutableMetadata
	// class UPCGMetadata* MutableMetadata();                                                                                   // [0x3c5146c] Native|Public|BlueprintCallable 
	// Function /Script/PCG.PCGParamData.FindOrAddMetadataKey
	// int64_t FindOrAddMetadataKey(FName& InName);                                                                             // [0xa75c37c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGParamData.FindMetadataKey
	// int64_t FindMetadataKey(FName& InName);                                                                                  // [0xa75c2e4] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PCG.PCGParamData.FilterParamsByName
	// class UPCGParamData* FilterParamsByName(FName& InName);                                                                  // [0xa75c210] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PCG.PCGParamData.FilterParamsByKey
	// class UPCGParamData* FilterParamsByKey(int64_t InKey);                                                                   // [0xa75c180] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PCG.PCGParamData.ConstMetadata
	// class UPCGMetadata* ConstMetadata();                                                                                     // [0x68143f8] Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/PCG.PCGBlueprintPinHelpers
/// Size: 0x0000 (0x000028 - 0x000028)
class UPCGBlueprintPinHelpers : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/PCG.PCGBlueprintPinHelpers.MakePinProperty
	// FPCGPinProperties MakePinProperty(FName Label, bool bAllowMultipleData, bool bAllowMultipleConnections, bool bIsAdvancedPin, EPCGExclusiveDataType AllowedType); // [0xa75c62c] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/PCG.PCGBlueprintPinHelpers.BreakPinProperty
	// void BreakPinProperty(FPCGPinProperties& PinProperty, FName& Label, bool& bAllowMultipleData, bool& bAllowMultipleConnections, bool& bIsAdvancedPin, EPCGExclusiveDataType& AllowedType); // [0xa75bce4] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
};

/// Class /Script/PCG.PCGPin
/// Size: 0x0030 (0x000028 - 0x000058)
class UPCGPin : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(class UPCGNode*)                           Node                                                        OFFSET(get<T>, {0x28, 8, 0, 0})
	SMember(FName)                                     Label                                                       OFFSET(getStruct<T>, {0x30, 4, 0, 0})
	CMember(TArray<class UPCGEdge*>)                   Edges                                                       OFFSET(get<T>, {0x38, 16, 0, 0})
	SMember(FPCGPinProperties)                         Properties                                                  OFFSET(getStruct<T>, {0x48, 16, 0, 0})


	/// Functions
	// Function /Script/PCG.PCGPin.SetToolTip
	// void SetToolTip(FText& InTooltip);                                                                                       // [0x91fe8bc] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGPin.GetTooltip
	// FText GetTooltip();                                                                                                      // [0x99c0f3c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/PCG.PCGPinPropertiesBlueprintHelpers
/// Size: 0x0000 (0x000028 - 0x000028)
class UPCGPinPropertiesBlueprintHelpers : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/PCG.PCGPinPropertiesBlueprintHelpers.SetRequiredPin
	// void SetRequiredPin(FPCGPinProperties& PinProperties);                                                                   // [0xa75cb80] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGPinPropertiesBlueprintHelpers.SetNormalPin
	// void SetNormalPin(FPCGPinProperties& PinProperties);                                                                     // [0xa75caf8] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGPinPropertiesBlueprintHelpers.SetAllowMultipleConnections
	// void SetAllowMultipleConnections(FPCGPinProperties& PinProperties, bool bAllowMultipleConnections);                      // [0xa75c974] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGPinPropertiesBlueprintHelpers.SetAdvancedPin
	// void SetAdvancedPin(FPCGPinProperties& PinProperties);                                                                   // [0xa75c8e8] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGPinPropertiesBlueprintHelpers.IsRequiredPin
	// bool IsRequiredPin(FPCGPinProperties& PinProperties);                                                                    // [0xa75c590] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGPinPropertiesBlueprintHelpers.IsNormalPin
	// bool IsNormalPin(FPCGPinProperties& PinProperties);                                                                      // [0xa75c4f8] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGPinPropertiesBlueprintHelpers.IsAdvancedPin
	// bool IsAdvancedPin(FPCGPinProperties& PinProperties);                                                                    // [0xa75c45c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PCG.PCGPinPropertiesBlueprintHelpers.AllowsMultipleConnections
	// bool AllowsMultipleConnections(FPCGPinProperties& PinProperties);                                                        // [0xa75bc38] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/PCG.PCGSettingsInstance
/// Size: 0x0008 (0x000040 - 0x000048)
class UPCGSettingsInstance : public UPCGSettingsInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(class UPCGSettings*)                       Settings                                                    OFFSET(get<T>, {0x40, 8, 0, 0})
};

/// Class /Script/PCG.PCGTrivialSettings
/// Size: 0x0000 (0x0000A8 - 0x0000A8)
class UPCGTrivialSettings : public UPCGSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
};

/// Class /Script/PCG.PCGSubgraphNode
/// Size: 0x0000 (0x000088 - 0x000088)
class UPCGSubgraphNode : public UPCGBaseSubgraphNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
};

/// Class /Script/PCG.PCGSubsystem
/// Size: 0x0640 (0x000040 - 0x000680)
class UPCGSubsystem : public UTickableWorldSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1664;

public:
};

/// Class /Script/PCG.PCGVolume
/// Size: 0x0008 (0x0002C8 - 0x0002D0)
class APCGVolume : public AVolume
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 720;

public:
	CMember(class UPCGComponent*)                      PCGComponent                                                OFFSET(get<T>, {0x2C8, 8, 0, 0})
};

/// Class /Script/PCG.PCGWorldActor
/// Size: 0x0118 (0x000290 - 0x0003A8)
class APCGWorldActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 936;

public:
	DMember(uint32_t)                                  PartitionGridSize                                           OFFSET(get<uint32_t>, {0x290, 4, 0, 0})
	CMember(class UPCGLandscapeCache*)                 LandscapeCacheObject                                        OFFSET(get<T>, {0x298, 8, 0, 0})
	DMember(bool)                                      bUse2DGrid                                                  OFFSET(get<bool>, {0x2A0, 1, 0, 0})
	CMember(TMap<uint32_t, FGuid>)                     GridGuids                                                   OFFSET(get<T>, {0x2A8, 80, 0, 0})
	CMember(TMap<uint32_t, FGuid>)                     TransientGridGuids                                          OFFSET(get<T>, {0x300, 80, 0, 0})
	CMember(TSet<FPCGPartitionActorRecord>)            SerializedPartitionActorRecords                             OFFSET(get<T>, {0x358, 80, 0, 0})
};

/// Class /Script/PCG.PCGGenSourceComponent
/// Size: 0x0008 (0x0000A0 - 0x0000A8)
class UPCGGenSourceComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
};

/// Class /Script/PCG.PCGGenSourceEditorCamera
/// Size: 0x0008 (0x000028 - 0x000030)
class UPCGGenSourceEditorCamera : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/PCG.PCGGenSourcePlayer
/// Size: 0x0010 (0x000028 - 0x000038)
class UPCGGenSourcePlayer : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Script/PCG.PCGGenSourceWPStreamingSource
/// Size: 0x0010 (0x000028 - 0x000038)
class UPCGGenSourceWPStreamingSource : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Script/PCG.PCGSchedulingPolicyDistanceAndDirection
/// Size: 0x0010 (0x000028 - 0x000038)
class UPCGSchedulingPolicyDistanceAndDirection : public UPCGSchedulingPolicyBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(bool)                                      bUseDistance                                                OFFSET(get<bool>, {0x28, 1, 0, 0})
	DMember(float)                                     DistanceWeight                                              OFFSET(get<float>, {0x2C, 4, 0, 0})
	DMember(bool)                                      bUseDirection                                               OFFSET(get<bool>, {0x30, 1, 0, 0})
	DMember(float)                                     DirectionWeight                                             OFFSET(get<float>, {0x34, 4, 0, 0})
};

/// Class /Script/PCG.PCGDeterminismTestBlueprintBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UPCGDeterminismTestBlueprintBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/PCG.PCGDeterminismTestBlueprintBase.ExecuteTest
	// void ExecuteTest(class UPCGNode* InPCGNode, FDeterminismTestResult& InOutTestResult);                                    // [0xa75c074] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
};

/// Struct /Script/PCG.PCGAttributeExtractorTestStructDepth2
/// Size: 0x0004 (0x000000 - 0x000004)
class FPCGAttributeExtractorTestStructDepth2 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(int32_t)                                   IntValue                                                    OFFSET(get<int32_t>, {0x0, 4, 0, 0})
};

/// Struct /Script/PCG.PCGAttributeExtractorTestStructDepth1
/// Size: 0x0008 (0x000000 - 0x000008)
class FPCGAttributeExtractorTestStructDepth1 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FPCGAttributeExtractorTestStructDepth2)    Depth2Struct                                                OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(float)                                     FloatValue                                                  OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Struct /Script/PCG.PCGAttributeExtractorTestStruct
/// Size: 0x0010 (0x000000 - 0x000010)
class FPCGAttributeExtractorTestStruct : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FPCGAttributeExtractorTestStructDepth1)    DepthStruct                                                 OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	CMember(class UPCGAttributeExtractorTestObject*)   Object                                                      OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/PCG.PCGAttributeFilterThresholdSettings
/// Size: 0x01A0 (0x000000 - 0x0001A0)
class FPCGAttributeFilterThresholdSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
	DMember(bool)                                      bInclusive                                                  OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(bool)                                      bUseConstantThreshold                                       OFFSET(get<bool>, {0x1, 1, 0, 0})
	SMember(FPCGAttributePropertyInputSelector)        ThresholdAttribute                                          OFFSET(getStruct<T>, {0x8, 40, 0, 0})
	DMember(bool)                                      bUseSpatialQuery                                            OFFSET(get<bool>, {0x30, 1, 0, 0})
	SMember(FPCGMetadataTypesConstantStruct)           AttributeTypes                                              OFFSET(getStruct<T>, {0x40, 352, 0, 0})
};

/// Struct /Script/PCG.PCGMetadataTypesConstantStruct
/// Size: 0x0160 (0x000000 - 0x000160)
class FPCGMetadataTypesConstantStruct : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:
	CMember(EPCGMetadataTypes)                         Type                                                        OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(EPCGMetadataTypesConstantStructStringMode) StringMode                                                  OFFSET(get<T>, {0x4, 4, 0, 0})
	DMember(float)                                     FloatValue                                                  OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   Int32Value                                                  OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	DMember(double)                                    DoubleValue                                                 OFFSET(get<double>, {0x10, 8, 0, 0})
	DMember(int64_t)                                   IntValue                                                    OFFSET(get<int64_t>, {0x18, 8, 0, 0})
	SMember(FVector2D)                                 Vector2Value                                                OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	SMember(FVector)                                   VectorValue                                                 OFFSET(getStruct<T>, {0x30, 24, 0, 0})
	SMember(FVector4)                                  Vector4Value                                                OFFSET(getStruct<T>, {0x50, 32, 0, 0})
	SMember(FQuat)                                     QuatValue                                                   OFFSET(getStruct<T>, {0x70, 32, 0, 0})
	SMember(FTransform)                                TransformValue                                              OFFSET(getStruct<T>, {0x90, 96, 0, 0})
	SMember(FString)                                   StringValue                                                 OFFSET(getStruct<T>, {0xF0, 16, 0, 0})
	DMember(bool)                                      BoolValue                                                   OFFSET(get<bool>, {0x100, 1, 0, 0})
	SMember(FRotator)                                  RotatorValue                                                OFFSET(getStruct<T>, {0x108, 24, 0, 0})
	SMember(FName)                                     NameValue                                                   OFFSET(getStruct<T>, {0x120, 4, 0, 0})
	SMember(FSoftClassPath)                            SoftClassPathValue                                          OFFSET(getStruct<T>, {0x128, 24, 0, 0})
	SMember(FSoftObjectPath)                           SoftObjectPathValue                                         OFFSET(getStruct<T>, {0x140, 24, 0, 0})
	DMember(bool)                                      bAllowsTypeChange                                           OFFSET(get<bool>, {0x158, 1, 0, 0})
};

/// Struct /Script/PCG.PCGAttributePropertySelector
/// Size: 0x0028 (0x000000 - 0x000028)
class FPCGAttributePropertySelector : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(EPCGAttributePropertySelection)            Selection                                                   OFFSET(get<T>, {0x8, 4, 0, 0})
	SMember(FName)                                     AttributeName                                               OFFSET(getStruct<T>, {0xC, 4, 0, 0})
	CMember(EPCGPointProperties)                       PointProperty                                               OFFSET(get<T>, {0x10, 1, 0, 0})
	CMember(EPCGExtraProperties)                       ExtraProperty                                               OFFSET(get<T>, {0x11, 1, 0, 0})
	CMember(TArray<FString>)                           ExtraNames                                                  OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/PCG.PCGAttributePropertyInputSelector
/// Size: 0x0000 (0x000028 - 0x000028)
class FPCGAttributePropertyInputSelector : public FPCGAttributePropertySelector
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Struct /Script/PCG.PCGAttributePropertyOutputSelector
/// Size: 0x0000 (0x000028 - 0x000028)
class FPCGAttributePropertyOutputSelector : public FPCGAttributePropertySelector
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Struct /Script/PCG.PCGAttributePropertyOutputNoSourceSelector
/// Size: 0x0000 (0x000028 - 0x000028)
class FPCGAttributePropertyOutputNoSourceSelector : public FPCGAttributePropertySelector
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Struct /Script/PCG.PCGRuntimeGenerationRadii
/// Size: 0x0060 (0x000000 - 0x000060)
class FPCGRuntimeGenerationRadii : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	DMember(double)                                    GenerationRadius                                            OFFSET(get<double>, {0x0, 8, 0, 0})
	DMember(double)                                    GenerationRadius400                                         OFFSET(get<double>, {0x8, 8, 0, 0})
	DMember(double)                                    GenerationRadius800                                         OFFSET(get<double>, {0x10, 8, 0, 0})
	DMember(double)                                    GenerationRadius1600                                        OFFSET(get<double>, {0x18, 8, 0, 0})
	DMember(double)                                    GenerationRadius3200                                        OFFSET(get<double>, {0x20, 8, 0, 0})
	DMember(double)                                    GenerationRadius6400                                        OFFSET(get<double>, {0x28, 8, 0, 0})
	DMember(double)                                    GenerationRadius12800                                       OFFSET(get<double>, {0x30, 8, 0, 0})
	DMember(double)                                    GenerationRadius25600                                       OFFSET(get<double>, {0x38, 8, 0, 0})
	DMember(double)                                    GenerationRadius51200                                       OFFSET(get<double>, {0x40, 8, 0, 0})
	DMember(double)                                    GenerationRadius102400                                      OFFSET(get<double>, {0x48, 8, 0, 0})
	DMember(double)                                    GenerationRadius204800                                      OFFSET(get<double>, {0x50, 8, 0, 0})
	DMember(double)                                    CleanupRadiusMultiplier                                     OFFSET(get<double>, {0x58, 8, 0, 0})
};

/// Struct /Script/PCG.EnumSelector
/// Size: 0x0010 (0x000000 - 0x000010)
class FEnumSelector : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class UEnum*)                              Class                                                       OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(int64_t)                                   Value                                                       OFFSET(get<int64_t>, {0x8, 8, 0, 0})
};

/// Struct /Script/PCG.PCGCrc
/// Size: 0x0008 (0x000000 - 0x000008)
class FPCGCrc : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(uint32_t)                                  Value                                                       OFFSET(get<uint32_t>, {0x0, 4, 0, 0})
	DMember(bool)                                      bValid                                                      OFFSET(get<bool>, {0x4, 1, 0, 0})
};

/// Struct /Script/PCG.PCGDataTableRowToParamDataTestStruct
/// Size: 0x00A0 (0x000000 - 0x0000A0)
class FPCGDataTableRowToParamDataTestStruct : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FString)                                   String                                                      OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	DMember(int32_t)                                   I32                                                         OFFSET(get<int32_t>, {0x18, 4, 0, 0})
	DMember(int64_t)                                   I64                                                         OFFSET(get<int64_t>, {0x20, 8, 0, 0})
	DMember(float)                                     F32                                                         OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(double)                                    F64                                                         OFFSET(get<double>, {0x30, 8, 0, 0})
	SMember(FVector2D)                                 v2                                                          OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	SMember(FVector)                                   V3                                                          OFFSET(getStruct<T>, {0x48, 24, 0, 0})
	SMember(FVector4)                                  V4                                                          OFFSET(getStruct<T>, {0x60, 32, 0, 0})
	SMember(FSoftObjectPath)                           SoftPath                                                    OFFSET(getStruct<T>, {0x80, 24, 0, 0})
};

/// Struct /Script/PCG.PCGDeterminismSettings
/// Size: 0x0010 (0x000000 - 0x000010)
class FPCGDeterminismSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(bool)                                      bNativeTests                                                OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(bool)                                      bUseBlueprintDeterminismTest                                OFFSET(get<bool>, {0x1, 1, 0, 0})
	CMember(class UClass*)                             DeterminismTestBlueprint                                    OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/PCG.PCGDummyGetPropertyLevel2Struct
/// Size: 0x0010 (0x000000 - 0x000010)
class FPCGDummyGetPropertyLevel2Struct : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<double>)                            DoubleArrayProperty                                         OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/PCG.PCGDummyGetPropertyStruct
/// Size: 0x0028 (0x000000 - 0x000028)
class FPCGDummyGetPropertyStruct : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(TArray<int32_t>)                           IntArrayProperty                                            OFFSET(get<T>, {0x0, 16, 0, 0})
	DMember(float)                                     FloatProperty                                               OFFSET(get<float>, {0x10, 4, 0, 0})
	SMember(FPCGDummyGetPropertyLevel2Struct)          Level2Struct                                                OFFSET(getStruct<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/PCG.PCGTestMyColorStruct
/// Size: 0x0020 (0x000000 - 0x000020)
class FPCGTestMyColorStruct : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(double)                                    B                                                           OFFSET(get<double>, {0x0, 8, 0, 0})
	DMember(double)                                    G                                                           OFFSET(get<double>, {0x8, 8, 0, 0})
	DMember(double)                                    R                                                           OFFSET(get<double>, {0x10, 8, 0, 0})
	DMember(double)                                    A                                                           OFFSET(get<double>, {0x18, 8, 0, 0})
};

/// Struct /Script/PCG.PCGObjectPropertyOverrideDescription
/// Size: 0x0038 (0x000000 - 0x000038)
class FPCGObjectPropertyOverrideDescription : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FPCGAttributePropertyInputSelector)        InputSource                                                 OFFSET(getStruct<T>, {0x0, 40, 0, 0})
	SMember(FString)                                   PropertyTarget                                              OFFSET(getStruct<T>, {0x28, 16, 0, 0})
};

/// Struct /Script/PCG.PCGActorPropertyOverride
/// Size: 0x0038 (0x000000 - 0x000038)
class FPCGActorPropertyOverride : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FPCGAttributePropertyInputSelector)        InputSource                                                 OFFSET(getStruct<T>, {0x0, 40, 0, 0})
	SMember(FString)                                   PropertyTarget                                              OFFSET(getStruct<T>, {0x28, 16, 0, 0})
};

/// Struct /Script/PCG.PCGProjectionParams
/// Size: 0x0020 (0x000000 - 0x000020)
class FPCGProjectionParams : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(bool)                                      bProjectPositions                                           OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(bool)                                      bProjectRotations                                           OFFSET(get<bool>, {0x1, 1, 0, 0})
	DMember(bool)                                      bProjectScales                                              OFFSET(get<bool>, {0x2, 1, 0, 0})
	CMember(EPCGProjectionColorBlendMode)              ColorBlendMode                                              OFFSET(get<T>, {0x3, 1, 0, 0})
	SMember(FString)                                   AttributeList                                               OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	CMember(EPCGMetadataFilterMode)                    AttributeMode                                               OFFSET(get<T>, {0x18, 1, 0, 0})
	CMember(EPCGMetadataOp)                            AttributeMergeOperation                                     OFFSET(get<T>, {0x19, 1, 0, 0})
	CMember(EPCGProjectionTagMergeMode)                TagMergeOperation                                           OFFSET(get<T>, {0x1A, 1, 0, 0})
};

/// Struct /Script/PCG.PCGContext
/// Size: 0x00D0 (0x000000 - 0x0000D0)
class FPCGContext : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
};

/// Struct /Script/PCG.PCGStaticMeshSpawnerContext
/// Size: 0x0238 (0x0000D0 - 0x000308)
class FPCGStaticMeshSpawnerContext : public FPCGContext
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 776;

public:
};

/// Struct /Script/PCG.PCGLandscapeDataProps
/// Size: 0x0005 (0x000000 - 0x000005)
class FPCGLandscapeDataProps : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 5;

public:
	DMember(bool)                                      bGetHeightOnly                                              OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(bool)                                      bGetLayerWeights                                            OFFSET(get<bool>, {0x1, 1, 0, 0})
	DMember(bool)                                      bGetActorReference                                          OFFSET(get<bool>, {0x2, 1, 0, 0})
	DMember(bool)                                      bGetPhysicalMaterial                                        OFFSET(get<bool>, {0x3, 1, 0, 0})
	DMember(bool)                                      bGetComponentCoordinates                                    OFFSET(get<bool>, {0x4, 1, 0, 0})
};

/// Struct /Script/PCG.PCGSplineStruct
/// Size: 0x0160 (0x000000 - 0x000160)
class FPCGSplineStruct : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:
	SMember(FSplineCurves)                             SplineCurves                                                OFFSET(getStruct<T>, {0x0, 112, 0, 0})
	SMember(FTransform)                                Transform                                                   OFFSET(getStruct<T>, {0x70, 96, 0, 0})
	SMember(FVector)                                   DefaultUpVector                                             OFFSET(getStruct<T>, {0xD0, 24, 0, 0})
	DMember(int32_t)                                   ReparamStepsPerSegment                                      OFFSET(get<int32_t>, {0xE8, 4, 0, 0})
	DMember(bool)                                      bClosedLoop                                                 OFFSET(get<bool>, {0xEC, 1, 0, 0})
	SMember(FBoxSphereBounds)                          LocalBounds                                                 OFFSET(getStruct<T>, {0xF0, 56, 0, 0})
	SMember(FBoxSphereBounds)                          Bounds                                                      OFFSET(getStruct<T>, {0x128, 56, 0, 0})
};

/// Struct /Script/PCG.PCGWorldCommonQueryParams
/// Size: 0x0070 (0x000000 - 0x000070)
class FPCGWorldCommonQueryParams : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	DMember(bool)                                      bIgnorePCGHits                                              OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(bool)                                      bIgnoreSelfHits                                             OFFSET(get<bool>, {0x1, 1, 0, 0})
	CMember(TEnumAsByte<ECollisionChannel>)            CollisionChannel                                            OFFSET(get<T>, {0x2, 1, 0, 0})
	DMember(bool)                                      bTraceComplex                                               OFFSET(get<bool>, {0x3, 1, 0, 0})
	CMember(EPCGWorldQueryFilterByTag)                 ActorTagFilter                                              OFFSET(get<T>, {0x4, 4, 0, 0})
	SMember(FString)                                   ActorTagsList                                               OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	DMember(bool)                                      bIgnoreLandscapeHits                                        OFFSET(get<bool>, {0x18, 1, 0, 0})
	DMember(bool)                                      bGetReferenceToActorHit                                     OFFSET(get<bool>, {0x19, 1, 0, 0})
	CMember(TSet<FName>)                               ParsedActorTagsList                                         OFFSET(get<T>, {0x20, 80, 0, 0})
};

/// Struct /Script/PCG.PCGWorldVolumetricQueryParams
/// Size: 0x0008 (0x000070 - 0x000078)
class FPCGWorldVolumetricQueryParams : public FPCGWorldCommonQueryParams
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	DMember(bool)                                      bSearchForOverlap                                           OFFSET(get<bool>, {0x70, 1, 0, 0})
};

/// Struct /Script/PCG.PCGWorldRayHitQueryParams
/// Size: 0x0048 (0x000070 - 0x0000B8)
class FPCGWorldRayHitQueryParams : public FPCGWorldCommonQueryParams
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	DMember(bool)                                      bOverrideDefaultParams                                      OFFSET(get<bool>, {0x70, 1, 0, 0})
	SMember(FVector)                                   RayOrigin                                                   OFFSET(getStruct<T>, {0x78, 24, 0, 0})
	SMember(FVector)                                   RayDirection                                                OFFSET(getStruct<T>, {0x90, 24, 0, 0})
	DMember(double)                                    RayLength                                                   OFFSET(get<double>, {0xA8, 8, 0, 0})
	DMember(bool)                                      bApplyMetadataFromLandscape                                 OFFSET(get<bool>, {0xB0, 1, 0, 0})
	DMember(bool)                                      bGetReferenceToPhysicalMaterial                             OFFSET(get<bool>, {0xB1, 1, 0, 0})
};

/// Struct /Script/PCG.PCGSelectionKey
/// Size: 0x0030 (0x000000 - 0x000030)
class FPCGSelectionKey : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(EPCGActorFilter)                           ActorFilter                                                 OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(EPCGActorSelection)                        Selection                                                   OFFSET(get<T>, {0x1, 1, 0, 0})
	SMember(FName)                                     tag                                                         OFFSET(getStruct<T>, {0x4, 4, 0, 0})
	CMember(class UClass*)                             SelectionClass                                              OFFSET(get<T>, {0x8, 8, 0, 0})
	SMember(FSoftObjectPath)                           ObjectPath                                                  OFFSET(getStruct<T>, {0x10, 24, 0, 0})
	CMember(class UClass*)                             OptionalExtraDependency                                     OFFSET(get<T>, {0x28, 8, 0, 0})
};

/// Struct /Script/PCG.PCGActorSelectorSettings
/// Size: 0x0020 (0x000000 - 0x000020)
class FPCGActorSelectorSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(EPCGActorFilter)                           ActorFilter                                                 OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(bool)                                      bMustOverlapSelf                                            OFFSET(get<bool>, {0x1, 1, 0, 0})
	DMember(bool)                                      bIncludeChildren                                            OFFSET(get<bool>, {0x2, 1, 0, 0})
	DMember(bool)                                      bDisableFilter                                              OFFSET(get<bool>, {0x3, 1, 0, 0})
	CMember(EPCGActorSelection)                        ActorSelection                                              OFFSET(get<T>, {0x4, 1, 0, 0})
	SMember(FName)                                     ActorSelectionTag                                           OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	CMember(class UClass*)                             ActorSelectionClass                                         OFFSET(get<T>, {0x10, 8, 0, 0})
	DMember(bool)                                      bSelectMultiple                                             OFFSET(get<bool>, {0x18, 1, 0, 0})
	DMember(bool)                                      bIgnoreSelfAndChildren                                      OFFSET(get<bool>, {0x19, 1, 0, 0})
	DMember(bool)                                      bShowActorFilter                                            OFFSET(get<bool>, {0x1A, 1, 0, 0})
	DMember(bool)                                      bShowIncludeChildren                                        OFFSET(get<bool>, {0x1B, 1, 0, 0})
	DMember(bool)                                      bShowActorSelection                                         OFFSET(get<bool>, {0x1C, 1, 0, 0})
	DMember(bool)                                      bShowActorSelectionClass                                    OFFSET(get<bool>, {0x1D, 1, 0, 0})
	DMember(bool)                                      bShowSelectMultiple                                         OFFSET(get<bool>, {0x1E, 1, 0, 0})
	DMember(bool)                                      bShowIgnoreSelfAndChildren                                  OFFSET(get<bool>, {0x1F, 1, 0, 0})
};

/// Struct /Script/PCG.PCGSelfPruningParameters
/// Size: 0x0038 (0x000000 - 0x000038)
class FPCGSelfPruningParameters : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(EPCGSelfPruningType)                       PruningType                                                 OFFSET(get<T>, {0x0, 1, 0, 0})
	SMember(FPCGAttributePropertyInputSelector)        ComparisonSource                                            OFFSET(getStruct<T>, {0x8, 40, 0, 0})
	DMember(float)                                     RadiusSimilarityFactor                                      OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(bool)                                      bRandomizedPruning                                          OFFSET(get<bool>, {0x34, 1, 0, 0})
};

/// Struct /Script/PCG.PCGSplineSamplerParams
/// Size: 0x0100 (0x000000 - 0x000100)
class FPCGSplineSamplerParams : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	CMember(EPCGSplineSamplingDimension)               Dimension                                                   OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(EPCGSplineSamplingMode)                    Mode                                                        OFFSET(get<T>, {0x1, 1, 0, 0})
	CMember(EPCGSplineSamplingFill)                    Fill                                                        OFFSET(get<T>, {0x2, 1, 0, 0})
	DMember(int32_t)                                   SubdivisionsPerSegment                                      OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(float)                                     DistanceIncrement                                           OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   NumSamples                                                  OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	DMember(int32_t)                                   NumPlanarSubdivisions                                       OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	DMember(int32_t)                                   NumHeightSubdivisions                                       OFFSET(get<int32_t>, {0x14, 4, 0, 0})
	DMember(bool)                                      bComputeDirectionDelta                                      OFFSET(get<bool>, {0x18, 1, 0, 0})
	SMember(FName)                                     NextDirectionDeltaAttribute                                 OFFSET(getStruct<T>, {0x1C, 4, 0, 0})
	DMember(bool)                                      bComputeCurvature                                           OFFSET(get<bool>, {0x20, 1, 0, 0})
	SMember(FName)                                     CurvatureAttribute                                          OFFSET(getStruct<T>, {0x24, 4, 0, 0})
	DMember(bool)                                      bComputeSegmentIndex                                        OFFSET(get<bool>, {0x28, 1, 0, 0})
	SMember(FName)                                     SegmentIndexAttribute                                       OFFSET(getStruct<T>, {0x2C, 4, 0, 0})
	DMember(bool)                                      bComputeSubsegmentIndex                                     OFFSET(get<bool>, {0x30, 1, 0, 0})
	SMember(FName)                                     SubsegmentIndexAttribute                                    OFFSET(getStruct<T>, {0x34, 4, 0, 0})
	DMember(bool)                                      bComputeTangents                                            OFFSET(get<bool>, {0x38, 1, 0, 0})
	SMember(FName)                                     ArriveTangentAttribute                                      OFFSET(getStruct<T>, {0x3C, 4, 0, 0})
	SMember(FName)                                     LeaveTangentAttribute                                       OFFSET(getStruct<T>, {0x40, 4, 0, 0})
	DMember(bool)                                      bComputeAlpha                                               OFFSET(get<bool>, {0x44, 1, 0, 0})
	SMember(FName)                                     AlphaAttribute                                              OFFSET(getStruct<T>, {0x48, 4, 0, 0})
	DMember(bool)                                      bComputeDistance                                            OFFSET(get<bool>, {0x4C, 1, 0, 0})
	SMember(FName)                                     DistanceAttribute                                           OFFSET(getStruct<T>, {0x50, 4, 0, 0})
	DMember(bool)                                      bComputeInputKey                                            OFFSET(get<bool>, {0x54, 1, 0, 0})
	SMember(FName)                                     InputKeyAttribute                                           OFFSET(getStruct<T>, {0x58, 4, 0, 0})
	DMember(bool)                                      bUnbounded                                                  OFFSET(get<bool>, {0x5C, 1, 0, 0})
	DMember(float)                                     InteriorSampleSpacing                                       OFFSET(get<float>, {0x60, 4, 0, 0})
	DMember(float)                                     InteriorBorderSampleSpacing                                 OFFSET(get<float>, {0x64, 4, 0, 0})
	DMember(bool)                                      bTreatSplineAsPolyline                                      OFFSET(get<bool>, {0x68, 1, 0, 0})
	CMember(EPCGSplineSamplingInteriorOrientation)     InteriorOrientation                                         OFFSET(get<T>, {0x69, 1, 0, 0})
	DMember(bool)                                      bProjectOntoSurface                                         OFFSET(get<bool>, {0x6A, 1, 0, 0})
	SMember(FRuntimeFloatCurve)                        InteriorDensityFalloffCurve                                 OFFSET(getStruct<T>, {0x70, 136, 0, 0})
	DMember(float)                                     PointSteepness                                              OFFSET(get<float>, {0xF8, 4, 0, 0})
	DMember(bool)                                      bSeedFromLocalPosition                                      OFFSET(get<bool>, {0xFC, 1, 0, 0})
	DMember(bool)                                      bSeedFrom2DPosition                                         OFFSET(get<bool>, {0xFD, 1, 0, 0})
};

/// Struct /Script/PCG.PCGStaticMeshSpawnerEntry
/// Size: 0x0030 (0x000000 - 0x000030)
class FPCGStaticMeshSpawnerEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(int32_t)                                   Weight                                                      OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	CMember(TWeakObjectPtr<UStaticMesh*>)              Mesh                                                        OFFSET(get<T>, {0x8, 32, 0, 0})
	DMember(bool)                                      bOverrideCollisionProfile                                   OFFSET(get<bool>, {0x28, 1, 0, 0})
	SMember(FCollisionProfileName)                     CollisionProfile                                            OFFSET(getStruct<T>, {0x2C, 4, 0, 0})
};

/// Struct /Script/PCG.PCGStackFrame
/// Size: 0x0010 (0x000000 - 0x000010)
class FPCGStackFrame : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/PCG.PCGStack
/// Size: 0x0010 (0x000000 - 0x000010)
class FPCGStack : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/PCG.PCGLandscapeLayerWeight
/// Size: 0x0008 (0x000000 - 0x000008)
class FPCGLandscapeLayerWeight : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Struct /Script/PCG.PCGPackedCustomData
/// Size: 0x0018 (0x000000 - 0x000018)
class FPCGPackedCustomData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(int32_t)                                   NumCustomDataFloats                                         OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	CMember(TArray<float>)                             CustomData                                                  OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/PCG.PCGMatchAndSetByAttributeEntry
/// Size: 0x02C0 (0x000000 - 0x0002C0)
class FPCGMatchAndSetByAttributeEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 704;

public:
	SMember(FPCGMetadataTypesConstantStruct)           ValueToMatch                                                OFFSET(getStruct<T>, {0x0, 352, 0, 0})
	SMember(FPCGMetadataTypesConstantStruct)           Value                                                       OFFSET(getStruct<T>, {0x160, 352, 0, 0})
};

/// Struct /Script/PCG.PCGMatchAndSetWeightedEntry
/// Size: 0x0170 (0x000000 - 0x000170)
class FPCGMatchAndSetWeightedEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 368;

public:
	SMember(FPCGMetadataTypesConstantStruct)           Value                                                       OFFSET(getStruct<T>, {0x0, 352, 0, 0})
	DMember(int32_t)                                   Weight                                                      OFFSET(get<int32_t>, {0x160, 4, 0, 0})
};

/// Struct /Script/PCG.PCGMatchAndSetWeightedByCategoryEntryList
/// Size: 0x0180 (0x000000 - 0x000180)
class FPCGMatchAndSetWeightedByCategoryEntryList : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 384;

public:
	SMember(FPCGMetadataTypesConstantStruct)           CategoryValue                                               OFFSET(getStruct<T>, {0x0, 352, 0, 0})
	DMember(bool)                                      bIsDefault                                                  OFFSET(get<bool>, {0x160, 1, 0, 0})
	CMember(TArray<FPCGMatchAndSetWeightedEntry>)      WeightedEntries                                             OFFSET(get<T>, {0x168, 16, 0, 0})
};

/// Struct /Script/PCG.PCGMeshInstanceList
/// Size: 0x0268 (0x000000 - 0x000268)
class FPCGMeshInstanceList : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 616;

public:
	SMember(FSoftISMComponentDescriptor)               Descriptor                                                  OFFSET(getStruct<T>, {0x0, 576, 0, 0})
	CMember(TArray<FTransform>)                        Instances                                                   OFFSET(get<T>, {0x240, 16, 0, 0})
	CMember(TArray<int64_t>)                           InstancesMetadataEntry                                      OFFSET(get<T>, {0x250, 16, 0, 0})
};

/// Struct /Script/PCG.PCGMeshSelectorWeightedEntry
/// Size: 0x0248 (0x000000 - 0x000248)
class FPCGMeshSelectorWeightedEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 584;

public:
	SMember(FSoftISMComponentDescriptor)               Descriptor                                                  OFFSET(getStruct<T>, {0x0, 576, 0, 0})
	DMember(int32_t)                                   Weight                                                      OFFSET(get<int32_t>, {0x240, 4, 0, 0})
};

/// Struct /Script/PCG.PCGWeightedByCategoryEntryList
/// Size: 0x0028 (0x000000 - 0x000028)
class FPCGWeightedByCategoryEntryList : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FString)                                   CategoryEntry                                               OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	DMember(bool)                                      IsDefault                                                   OFFSET(get<bool>, {0x10, 1, 0, 0})
	CMember(TArray<FPCGMeshSelectorWeightedEntry>)     WeightedMeshEntries                                         OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/PCG.PCGComponentInstanceData
/// Size: 0x0018 (0x000068 - 0x000080)
class FPCGComponentInstanceData : public FActorComponentInstanceData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(TArray<class UPCGManagedResource*>)        GeneratedResources                                          OFFSET(get<T>, {0x68, 16, 0, 0})
	CMember(class UPCGComponent*)                      SourceComponent                                             OFFSET(get<T>, {0x78, 8, 0, 0})
};

/// Struct /Script/PCG.PCGTaggedData
/// Size: 0x0060 (0x000000 - 0x000060)
class FPCGTaggedData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(class UPCGData*)                           Data                                                        OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(TSet<FString>)                             Tags                                                        OFFSET(get<T>, {0x8, 80, 0, 0})
	SMember(FName)                                     Pin                                                         OFFSET(getStruct<T>, {0x58, 4, 0, 0})
	DMember(bool)                                      bPinlessData                                                OFFSET(get<bool>, {0x5C, 1, 0, 0})
};

/// Struct /Script/PCG.PCGDataCollection
/// Size: 0x0030 (0x000000 - 0x000030)
class FPCGDataCollection : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(TArray<FPCGTaggedData>)                    TaggedData                                                  OFFSET(get<T>, {0x0, 16, 0, 0})
	DMember(bool)                                      bCancelExecutionOnEmpty                                     OFFSET(get<bool>, {0x10, 1, 0, 0})
};

/// Struct /Script/PCG.PCGDebugVisualizationSettings
/// Size: 0x0048 (0x000000 - 0x000048)
class FPCGDebugVisualizationSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	DMember(float)                                     PointScale                                                  OFFSET(get<float>, {0x0, 4, 0, 0})
	CMember(EPCGDebugVisScaleMethod)                   ScaleMethod                                                 OFFSET(get<T>, {0x4, 1, 0, 0})
	CMember(TWeakObjectPtr<UStaticMesh*>)              PointMesh                                                   OFFSET(get<T>, {0x8, 32, 0, 0})
	CMember(TWeakObjectPtr<UMaterialInterface*>)       MaterialOverride                                            OFFSET(get<T>, {0x28, 32, 0, 0})
};

/// Struct /Script/PCG.PCGOverrideInstancedPropertyBag
/// Size: 0x0060 (0x000000 - 0x000060)
class FPCGOverrideInstancedPropertyBag : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FInstancedPropertyBag)                     Parameters                                                  OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	CMember(TSet<FGuid>)                               PropertiesIDsOverridden                                     OFFSET(get<T>, {0x10, 80, 0, 0})
};

/// Struct /Script/PCG.PCGPinProperties
/// Size: 0x0010 (0x000000 - 0x000010)
class FPCGPinProperties : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FName)                                     Label                                                       OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(EPCGPinUsage)                              Usage                                                       OFFSET(get<T>, {0x4, 1, 0, 0})
	CMember(EPCGDataType)                              AllowedTypes                                                OFFSET(get<T>, {0x8, 4, 0, 0})
	DMember(bool)                                      bAllowMultipleData                                          OFFSET(get<bool>, {0xC, 1, 0, 0})
	CMember(EPCGPinStatus)                             PinStatus                                                   OFFSET(get<T>, {0xD, 1, 0, 0})
	DMember(bool)                                      bInvisiblePin                                               OFFSET(get<bool>, {0xE, 1, 0, 0})
	DMember(bool)                                      bAllowMultipleConnections                                   OFFSET(get<bool>, {0xF, 1, 0, 0})
};

/// Struct /Script/PCG.PCGPoint
/// Size: 0x00D0 (0x000000 - 0x0000D0)
class FPCGPoint : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	SMember(FTransform)                                Transform                                                   OFFSET(getStruct<T>, {0x0, 96, 0, 0})
	DMember(float)                                     Density                                                     OFFSET(get<float>, {0x60, 4, 0, 0})
	SMember(FVector)                                   BoundsMin                                                   OFFSET(getStruct<T>, {0x68, 24, 0, 0})
	SMember(FVector)                                   BoundsMax                                                   OFFSET(getStruct<T>, {0x80, 24, 0, 0})
	SMember(FVector4)                                  Color                                                       OFFSET(getStruct<T>, {0xA0, 32, 0, 0})
	DMember(float)                                     Steepness                                                   OFFSET(get<float>, {0xC0, 4, 0, 0})
	DMember(int32_t)                                   Seed                                                        OFFSET(get<int32_t>, {0xC4, 4, 0, 0})
	DMember(int64_t)                                   MetadataEntry                                               OFFSET(get<int64_t>, {0xC8, 8, 0, 0})
};

/// Struct /Script/PCG.PCGPropertyAliases
/// Size: 0x0010 (0x000000 - 0x000010)
class FPCGPropertyAliases : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FName>)                             Aliases                                                     OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/PCG.PCGSettingsOverridableParam
/// Size: 0x0088 (0x000000 - 0x000088)
class FPCGSettingsOverridableParam : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FName)                                     Label                                                       OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(TArray<FName>)                             PropertiesNames                                             OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(class UStruct*)                            PropertyClass                                               OFFSET(get<T>, {0x18, 8, 0, 0})
	CMember(TMap<int32_t, FPCGPropertyAliases>)        MapOfAliases                                                OFFSET(get<T>, {0x20, 80, 0, 0})
	DMember(bool)                                      bHasNameClash                                               OFFSET(get<bool>, {0x70, 1, 0, 0})
};

/// Struct /Script/PCG.PCGPreConfiguredSettingsInfo
/// Size: 0x0020 (0x000000 - 0x000020)
class FPCGPreConfiguredSettingsInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(int32_t)                                   PreconfiguredIndex                                          OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	SMember(FText)                                     Label                                                       OFFSET(getStruct<T>, {0x8, 24, 0, 0})
};

/// Struct /Script/PCG.PCGPartitionActorRecord
/// Size: 0x0020 (0x000000 - 0x000020)
class FPCGPartitionActorRecord : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FGuid)                                     GridGuid                                                    OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	DMember(uint32_t)                                  GridSize                                                    OFFSET(get<uint32_t>, {0x10, 4, 0, 0})
	SMember(FIntVector)                                GridCoords                                                  OFFSET(getStruct<T>, {0x14, 12, 0, 0})
};

/// Struct /Script/PCG.DeterminismTestResult
/// Size: 0x0088 (0x000000 - 0x000088)
class FDeterminismTestResult : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FName)                                     TestResultTitle                                             OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FString)                                   TestResultName                                              OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	DMember(int32_t)                                   Seed                                                        OFFSET(get<int32_t>, {0x18, 4, 0, 0})
	CMember(EPCGDataType)                              DataTypesTested                                             OFFSET(get<T>, {0x1C, 4, 0, 0})
	CMember(TMap<FName, EDeterminismLevel>)            TestResults                                                 OFFSET(get<T>, {0x20, 80, 0, 0})
	CMember(TArray<FString>)                           AdditionalDetails                                           OFFSET(get<T>, {0x70, 16, 0, 0})
	DMember(bool)                                      bFlagRaised                                                 OFFSET(get<bool>, {0x80, 1, 0, 0})
};

/// Enum /Script/PCG.EPCGAttributeAccessorFlags
/// Size: 0x05
enum class EPCGAttributeAccessorFlags : uint8_t
{
	EPCGAttributeAccessorFlags__StrictType                                           = 1,
	EPCGAttributeAccessorFlags__AllowBroadcast                                       = 2,
	EPCGAttributeAccessorFlags__AllowConstructible                                   = 4,
	EPCGAttributeAccessorFlags__AllowSetDefaultValue                                 = 8,
	EPCGAttributeAccessorFlags__EPCGAttributeAccessorFlags_MAX                       = 9
};

/// Enum /Script/PCG.EPCGAttributeFilterOperator
/// Size: 0x10
enum class EPCGAttributeFilterOperator : uint8_t
{
	EPCGAttributeFilterOperator__Greater                                             = 0,
	EPCGAttributeFilterOperator__GreaterOrEqual                                      = 1,
	EPCGAttributeFilterOperator__Lesser                                              = 2,
	EPCGAttributeFilterOperator__LesserOrEqual                                       = 3,
	EPCGAttributeFilterOperator__Equal                                               = 4,
	EPCGAttributeFilterOperator__NotEqual                                            = 5,
	EPCGAttributeFilterOperator__InRange                                             = 6,
	EPCGAttributeFilterOperator__Substring                                           = 7,
	EPCGAttributeFilterOperator__Matches                                             = 8,
	EPCGAttributeFilterOperator__EPCGAttributeFilterOperator_MAX                     = 9
};

/// Enum /Script/PCG.EPCGAttributePropertySelection
/// Size: 0x04
enum class EPCGAttributePropertySelection : uint32_t
{
	EPCGAttributePropertySelection__Attribute                                        = 0,
	EPCGAttributePropertySelection__PointProperty                                    = 1,
	EPCGAttributePropertySelection__ExtraProperty                                    = 2,
	EPCGAttributePropertySelection__EPCGAttributePropertySelection_MAX               = 3
};

/// Enum /Script/PCG.EPCGExtraProperties
/// Size: 0x02
enum class EPCGExtraProperties : uint8_t
{
	EPCGExtraProperties__Index                                                       = 0,
	EPCGExtraProperties__EPCGExtraProperties_MAX                                     = 1
};

/// Enum /Script/PCG.EPCGChangeType
/// Size: 0x09
enum class EPCGChangeType : uint8_t
{
	EPCGChangeType__None                                                             = 0,
	EPCGChangeType__Cosmetic                                                         = 1,
	EPCGChangeType__Settings                                                         = 2,
	EPCGChangeType__Input                                                            = 4,
	EPCGChangeType__Edge                                                             = 8,
	EPCGChangeType__Node                                                             = 16,
	EPCGChangeType__Structural                                                       = 32,
	EPCGChangeType__GenerationGrid                                                   = 64,
	EPCGChangeType__EPCGChangeType_MAX                                               = 65
};

/// Enum /Script/PCG.EPCGDataType
/// Size: 0x20
enum class EPCGDataType : uint32_t
{
	EPCGDataType__None                                                               = 0,
	EPCGDataType__Point                                                              = 2,
	EPCGDataType__Spline                                                             = 4,
	EPCGDataType__LandscapeSpline                                                    = 8,
	EPCGDataType__PolyLine                                                           = 12,
	EPCGDataType__Landscape                                                          = 16,
	EPCGDataType__Texture                                                            = 32,
	EPCGDataType__RenderTarget                                                       = 64,
	EPCGDataType__BaseTexture                                                        = 96,
	EPCGDataType__Surface                                                            = 112,
	EPCGDataType__Volume                                                             = 128,
	EPCGDataType__Primitive                                                          = 256,
	EPCGDataType__Concrete                                                           = 510,
	EPCGDataType__Composite                                                          = 512,
	EPCGDataType__Spatial                                                            = 1022,
	EPCGDataType__Param                                                              = 134217728,
	EPCGDataType__Settings                                                           = 268435456,
	EPCGDataType__Other                                                              = 536870912,
	EPCGDataType__Any                                                                = 1073741823,
	EPCGDataType__EPCGDataType_MAX                                                   = 1073741824
};

/// Enum /Script/PCG.EPCGExclusiveDataType
/// Size: 0x20
enum class EPCGExclusiveDataType : uint8_t
{
	EPCGExclusiveDataType__None                                                      = 0,
	EPCGExclusiveDataType__Point                                                     = 1,
	EPCGExclusiveDataType__Spline                                                    = 2,
	EPCGExclusiveDataType__LandscapeSpline                                           = 3,
	EPCGExclusiveDataType__PolyLine                                                  = 4,
	EPCGExclusiveDataType__Landscape                                                 = 5,
	EPCGExclusiveDataType__Texture                                                   = 6,
	EPCGExclusiveDataType__RenderTarget                                              = 7,
	EPCGExclusiveDataType__BaseTexture                                               = 8,
	EPCGExclusiveDataType__Surface                                                   = 9,
	EPCGExclusiveDataType__Volume                                                    = 10,
	EPCGExclusiveDataType__Primitive                                                 = 11,
	EPCGExclusiveDataType__Concrete                                                  = 12,
	EPCGExclusiveDataType__Composite                                                 = 13,
	EPCGExclusiveDataType__Spatial                                                   = 14,
	EPCGExclusiveDataType__Param                                                     = 15,
	EPCGExclusiveDataType__Settings                                                  = 16,
	EPCGExclusiveDataType__Other                                                     = 17,
	EPCGExclusiveDataType__Any                                                       = 18,
	EPCGExclusiveDataType__EPCGExclusiveDataType_MAX                                 = 19
};

/// Enum /Script/PCG.EPCGCoordinateSpace
/// Size: 0x04
enum class EPCGCoordinateSpace : uint8_t
{
	EPCGCoordinateSpace__World                                                       = 0,
	EPCGCoordinateSpace__OriginalComponent                                           = 1,
	EPCGCoordinateSpace__LocalComponent                                              = 2,
	EPCGCoordinateSpace__EPCGCoordinateSpace_MAX                                     = 3
};

/// Enum /Script/PCG.EPCGHiGenGrid
/// Size: 0x15
enum class EPCGHiGenGrid : uint32_t
{
	EPCGHiGenGrid__Uninitialized                                                     = 0,
	EPCGHiGenGrid__Grid4                                                             = 4,
	EPCGHiGenGrid__Grid8                                                             = 8,
	EPCGHiGenGrid__Grid16                                                            = 16,
	EPCGHiGenGrid__Grid32                                                            = 32,
	EPCGHiGenGrid__Grid64                                                            = 64,
	EPCGHiGenGrid__Grid128                                                           = 128,
	EPCGHiGenGrid__Grid256                                                           = 256,
	EPCGHiGenGrid__Grid512                                                           = 512,
	EPCGHiGenGrid__Grid1024                                                          = 1024,
	EPCGHiGenGrid__Grid2048                                                          = 2048,
	EPCGHiGenGrid__GridMin                                                           = 4,
	EPCGHiGenGrid__GridMax                                                           = 2048,
	EPCGHiGenGrid__Unbounded                                                         = -2147483648,
	EPCGHiGenGrid__EPCGHiGenGrid_MAX                                                 = -2147483647
};

/// Enum /Script/PCG.EPCGAttachOptions
/// Size: 0x04
enum class EPCGAttachOptions : uint32_t
{
	EPCGAttachOptions__NotAttached                                                   = 0,
	EPCGAttachOptions__Attached                                                      = 1,
	EPCGAttachOptions__InFolder                                                      = 2,
	EPCGAttachOptions__EPCGAttachOptions_MAX                                         = 3
};

/// Enum /Script/PCG.EPCGEditorDirtyMode
/// Size: 0x04
enum class EPCGEditorDirtyMode : uint8_t
{
	EPCGEditorDirtyMode__Normal                                                      = 0,
	EPCGEditorDirtyMode__Preview                                                     = 1,
	EPCGEditorDirtyMode__LoadAsPreview                                               = 2,
	EPCGEditorDirtyMode__EPCGEditorDirtyMode_MAX                                     = 3
};

/// Enum /Script/PCG.EPCGNodeTitleType
/// Size: 0x03
enum class EPCGNodeTitleType : uint8_t
{
	EPCGNodeTitleType__FullTitle                                                     = 0,
	EPCGNodeTitleType__ListView                                                      = 1,
	EPCGNodeTitleType__EPCGNodeTitleType_MAX                                         = 2
};

/// Enum /Script/PCG.EPCGControlFlowSelectionMode
/// Size: 0x04
enum class EPCGControlFlowSelectionMode : uint8_t
{
	EPCGControlFlowSelectionMode__Integer                                            = 0,
	EPCGControlFlowSelectionMode__Enum                                               = 1,
	EPCGControlFlowSelectionMode__String                                             = 2,
	EPCGControlFlowSelectionMode__EPCGControlFlowSelectionMode_MAX                   = 3
};

/// Enum /Script/PCG.EPCGLocalGridPivot
/// Size: 0x04
enum class EPCGLocalGridPivot : uint8_t
{
	EPCGLocalGridPivot__Global                                                       = 0,
	EPCGLocalGridPivot__OriginalComponent                                            = 1,
	EPCGLocalGridPivot__LocalComponent                                               = 2,
	EPCGLocalGridPivot__EPCGLocalGridPivot_MAX                                       = 3
};

/// Enum /Script/PCG.EPCGPointPosition
/// Size: 0x03
enum class EPCGPointPosition : uint8_t
{
	EPCGPointPosition__CellCenter                                                    = 0,
	EPCGPointPosition__CellCorners                                                   = 1,
	EPCGPointPosition__EPCGPointPosition_MAX                                         = 2
};

/// Enum /Script/PCG.EPCGGridPivot
/// Size: 0x04
enum class EPCGGridPivot : uint8_t
{
	EPCGGridPivot__Global                                                            = 0,
	EPCGGridPivot__OriginalComponent                                                 = 1,
	EPCGGridPivot__LocalComponent                                                    = 2,
	EPCGGridPivot__EPCGGridPivot_MAX                                                 = 3
};

/// Enum /Script/PCG.EPCGAttributeFilterOperation
/// Size: 0x03
enum class EPCGAttributeFilterOperation : uint32_t
{
	EPCGAttributeFilterOperation__KeepSelectedAttributes                             = 0,
	EPCGAttributeFilterOperation__DeleteSelectedAttributes                           = 1,
	EPCGAttributeFilterOperation__EPCGAttributeFilterOperation_MAX                   = 2
};

/// Enum /Script/PCG.EPCGTagFilterOperation
/// Size: 0x03
enum class EPCGTagFilterOperation : uint32_t
{
	EPCGTagFilterOperation__KeepOnlySelectedTags                                     = 0,
	EPCGTagFilterOperation__DeleteSelectedTags                                       = 1,
	EPCGTagFilterOperation__EPCGTagFilterOperation_MAX                               = 2
};

/// Enum /Script/PCG.PCGDistanceShape
/// Size: 0x04
enum class PCGDistanceShape : uint32_t
{
	PCGDistanceShape__SphereBounds                                                   = 0,
	PCGDistanceShape__BoxBounds                                                      = 1,
	PCGDistanceShape__Center                                                         = 2,
	PCGDistanceShape__PCGDistanceShape_MAX                                           = 3
};

/// Enum /Script/PCG.EPCGUnitTestDummyEnum
/// Size: 0x04
enum class EPCGUnitTestDummyEnum : uint64_t
{
	EPCGUnitTestDummyEnum__One                                                       = 0,
	EPCGUnitTestDummyEnum__Two                                                       = 1,
	EPCGUnitTestDummyEnum__Three                                                     = 2,
	EPCGUnitTestDummyEnum__EPCGUnitTestDummyEnum_MAX                                 = 3
};

/// Enum /Script/PCG.EPCGMetadataTypes
/// Size: 0x18
enum class EPCGMetadataTypes : uint8_t
{
	EPCGMetadataTypes__Float                                                         = 0,
	EPCGMetadataTypes__Double                                                        = 1,
	EPCGMetadataTypes__Integer32                                                     = 2,
	EPCGMetadataTypes__Integer64                                                     = 3,
	EPCGMetadataTypes__Vector2                                                       = 4,
	EPCGMetadataTypes__Vector                                                        = 5,
	EPCGMetadataTypes__Vector4                                                       = 6,
	EPCGMetadataTypes__Quaternion                                                    = 7,
	EPCGMetadataTypes__Transform                                                     = 8,
	EPCGMetadataTypes__String                                                        = 9,
	EPCGMetadataTypes__Boolean                                                       = 10,
	EPCGMetadataTypes__Rotator                                                       = 11,
	EPCGMetadataTypes__Name                                                          = 12,
	EPCGMetadataTypes__SoftObjectPath                                                = 13,
	EPCGMetadataTypes__SoftClassPath                                                 = 14,
	EPCGMetadataTypes__Count                                                         = 15,
	EPCGMetadataTypes__Unknown                                                       = 255,
	EPCGMetadataTypes__EPCGMetadataTypes_MAX                                         = 256
};

/// Enum /Script/PCG.EPCGMetadataOp
/// Size: 0x08
enum class EPCGMetadataOp : uint8_t
{
	EPCGMetadataOp__Min                                                              = 0,
	EPCGMetadataOp__Max                                                              = 1,
	EPCGMetadataOp__Sub                                                              = 2,
	EPCGMetadataOp__Add                                                              = 3,
	EPCGMetadataOp__Mul                                                              = 4,
	EPCGMetadataOp__Div                                                              = 5,
	EPCGMetadataOp__SourceValue                                                      = 6,
	EPCGMetadataOp__TargetValue                                                      = 7
};

/// Enum /Script/PCG.EPCGMetadataFilterMode
/// Size: 0x03
enum class EPCGMetadataFilterMode : uint8_t
{
	EPCGMetadataFilterMode__ExcludeAttributes                                        = 0,
	EPCGMetadataFilterMode__IncludeAttributes                                        = 1,
	EPCGMetadataFilterMode__EPCGMetadataFilterMode_MAX                               = 2
};

/// Enum /Script/PCG.EPCGMetadataMakeRotatorOp
/// Size: 0x12
enum class EPCGMetadataMakeRotatorOp : uint8_t
{
	EPCGMetadataMakeRotatorOp__MakeRotFromX                                          = 0,
	EPCGMetadataMakeRotatorOp__MakeRotFromY                                          = 1,
	EPCGMetadataMakeRotatorOp__MakeRotFromZ                                          = 2,
	EPCGMetadataMakeRotatorOp__MakeRotFromXY                                         = 3,
	EPCGMetadataMakeRotatorOp__MakeRotFromYX                                         = 4,
	EPCGMetadataMakeRotatorOp__MakeRotFromXZ                                         = 5,
	EPCGMetadataMakeRotatorOp__MakeRotFromZX                                         = 6,
	EPCGMetadataMakeRotatorOp__MakeRotFromYZ                                         = 7,
	EPCGMetadataMakeRotatorOp__MakeRotFromZY                                         = 8,
	EPCGMetadataMakeRotatorOp__MakeRotFromAxes                                       = 9,
	EPCGMetadataMakeRotatorOp__MakeRotFromAngles                                     = 10,
	EPCGMetadataMakeRotatorOp__EPCGMetadataMakeRotatorOp_MAX                         = 11
};

/// Enum /Script/PCG.EPCGMetadataTypesConstantStructStringMode
/// Size: 0x04
enum class EPCGMetadataTypesConstantStructStringMode : uint32_t
{
	EPCGMetadataTypesConstantStructStringMode__String                                = 0,
	EPCGMetadataTypesConstantStructStringMode__SoftObjectPath                        = 1,
	EPCGMetadataTypesConstantStructStringMode__SoftClassPath                         = 2,
	EPCGMetadataTypesConstantStructStringMode__EPCGMetadataTypesConstantStructStringMode_MAX = 3
};

/// Enum /Script/PCG.PCGNormalToDensityMode
/// Size: 0x08
enum class PCGNormalToDensityMode : uint8_t
{
	PCGNormalToDensityMode__Set                                                      = 0,
	PCGNormalToDensityMode__Minimum                                                  = 1,
	PCGNormalToDensityMode__Maximum                                                  = 2,
	PCGNormalToDensityMode__Add                                                      = 3,
	PCGNormalToDensityMode__Subtract                                                 = 4,
	PCGNormalToDensityMode__Multiply                                                 = 5,
	PCGNormalToDensityMode__Divide                                                   = 6,
	PCGNormalToDensityMode__PCGNormalToDensityMode_MAX                               = 7
};

/// Enum /Script/PCG.EPCGPointNeighborhoodDensityMode
/// Size: 0x04
enum class EPCGPointNeighborhoodDensityMode : uint32_t
{
	EPCGPointNeighborhoodDensityMode__None                                           = 0,
	EPCGPointNeighborhoodDensityMode__SetNormalizedDistanceToDensity                 = 1,
	EPCGPointNeighborhoodDensityMode__SetAverageDensity                              = 2,
	EPCGPointNeighborhoodDensityMode__EPCGPointNeighborhoodDensityMode_MAX           = 3
};

/// Enum /Script/PCG.EPCGPrintVerbosity
/// Size: 0x04
enum class EPCGPrintVerbosity : uint8_t
{
	EPCGPrintVerbosity__Log                                                          = 5,
	EPCGPrintVerbosity__Warning                                                      = 3,
	EPCGPrintVerbosity__Error                                                        = 2,
	EPCGPrintVerbosity__EPCGPrintVerbosity_MAX                                       = 6
};

/// Enum /Script/PCG.EPCGProjectionColorBlendMode
/// Size: 0x06
enum class EPCGProjectionColorBlendMode : uint8_t
{
	EPCGProjectionColorBlendMode__SourceValue                                        = 0,
	EPCGProjectionColorBlendMode__TargetValue                                        = 1,
	EPCGProjectionColorBlendMode__Add                                                = 2,
	EPCGProjectionColorBlendMode__Subtract                                           = 3,
	EPCGProjectionColorBlendMode__Multiply                                           = 4,
	EPCGProjectionColorBlendMode__EPCGProjectionColorBlendMode_MAX                   = 5
};

/// Enum /Script/PCG.EPCGProjectionTagMergeMode
/// Size: 0x04
enum class EPCGProjectionTagMergeMode : uint8_t
{
	EPCGProjectionTagMergeMode__Source                                               = 0,
	EPCGProjectionTagMergeMode__Target                                               = 1,
	EPCGProjectionTagMergeMode__Both                                                 = 2,
	EPCGProjectionTagMergeMode__EPCGProjectionTagMergeMode_MAX                       = 3
};

/// Enum /Script/PCG.EPCGTextureMappingMethod
/// Size: 0x03
enum class EPCGTextureMappingMethod : uint8_t
{
	EPCGTextureMappingMethod__Planar                                                 = 0,
	EPCGTextureMappingMethod__UVCoordinates                                          = 1,
	EPCGTextureMappingMethod__EPCGTextureMappingMethod_MAX                           = 2
};

/// Enum /Script/PCG.EPCGSortMethod
/// Size: 0x03
enum class EPCGSortMethod : uint8_t
{
	EPCGSortMethod__Ascending                                                        = 0,
	EPCGSortMethod__Descending                                                       = 1,
	EPCGSortMethod__EPCGSortMethod_MAX                                               = 2
};

/// Enum /Script/PCG.EPCGSplitAxis
/// Size: 0x04
enum class EPCGSplitAxis : uint32_t
{
	EPCGSplitAxis__X                                                                 = 0,
	EPCGSplitAxis__Y                                                                 = 1,
	EPCGSplitAxis__Z                                                                 = 2,
	EPCGSplitAxis__EPCGSplitAxis_MAX                                                 = 3
};

/// Enum /Script/PCG.EPCGDifferenceDensityFunction
/// Size: 0x04
enum class EPCGDifferenceDensityFunction : uint8_t
{
	EPCGDifferenceDensityFunction__Minimum                                           = 0,
	EPCGDifferenceDensityFunction__ClampedSubstraction                               = 1,
	EPCGDifferenceDensityFunction__Binary                                            = 2,
	EPCGDifferenceDensityFunction__EPCGDifferenceDensityFunction_MAX                 = 3
};

/// Enum /Script/PCG.EPCGDifferenceMode
/// Size: 0x04
enum class EPCGDifferenceMode : uint8_t
{
	EPCGDifferenceMode__Inferred                                                     = 0,
	EPCGDifferenceMode__Continuous                                                   = 1,
	EPCGDifferenceMode__Discrete                                                     = 2,
	EPCGDifferenceMode__EPCGDifferenceMode_MAX                                       = 3
};

/// Enum /Script/PCG.EPCGIntersectionDensityFunction
/// Size: 0x03
enum class EPCGIntersectionDensityFunction : uint8_t
{
	EPCGIntersectionDensityFunction__Multiply                                        = 0,
	EPCGIntersectionDensityFunction__Minimum                                         = 1,
	EPCGIntersectionDensityFunction__EPCGIntersectionDensityFunction_MAX             = 2
};

/// Enum /Script/PCG.EPCGTextureColorChannel
/// Size: 0x05
enum class EPCGTextureColorChannel : uint8_t
{
	EPCGTextureColorChannel__Red                                                     = 0,
	EPCGTextureColorChannel__Green                                                   = 1,
	EPCGTextureColorChannel__Blue                                                    = 2,
	EPCGTextureColorChannel__Alpha                                                   = 3,
	EPCGTextureColorChannel__EPCGTextureColorChannel_MAX                             = 4
};

/// Enum /Script/PCG.EPCGTextureDensityFunction
/// Size: 0x03
enum class EPCGTextureDensityFunction : uint8_t
{
	EPCGTextureDensityFunction__Ignore                                               = 0,
	EPCGTextureDensityFunction__Multiply                                             = 1,
	EPCGTextureDensityFunction__EPCGTextureDensityFunction_MAX                       = 2
};

/// Enum /Script/PCG.EPCGTextureFilter
/// Size: 0x03
enum class EPCGTextureFilter : uint8_t
{
	EPCGTextureFilter__Point                                                         = 0,
	EPCGTextureFilter__Bilinear                                                      = 1,
	EPCGTextureFilter__EPCGTextureFilter_MAX                                         = 2
};

/// Enum /Script/PCG.EPCGTextureAddressMode
/// Size: 0x03
enum class EPCGTextureAddressMode : uint8_t
{
	EPCGTextureAddressMode__Clamp                                                    = 0,
	EPCGTextureAddressMode__Wrap                                                     = 1,
	EPCGTextureAddressMode__EPCGTextureAddressMode_MAX                               = 2
};

/// Enum /Script/PCG.EPCGUnionType
/// Size: 0x04
enum class EPCGUnionType : uint8_t
{
	EPCGUnionType__LeftToRightPriority                                               = 0,
	EPCGUnionType__RightToLeftPriority                                               = 1,
	EPCGUnionType__KeepAll                                                           = 2,
	EPCGUnionType__EPCGUnionType_MAX                                                 = 3
};

/// Enum /Script/PCG.EPCGUnionDensityFunction
/// Size: 0x04
enum class EPCGUnionDensityFunction : uint8_t
{
	EPCGUnionDensityFunction__Maximum                                                = 0,
	EPCGUnionDensityFunction__ClampedAddition                                        = 1,
	EPCGUnionDensityFunction__Binary                                                 = 2,
	EPCGUnionDensityFunction__EPCGUnionDensityFunction_MAX                           = 3
};

/// Enum /Script/PCG.EPCGWorldQueryFilterByTag
/// Size: 0x04
enum class EPCGWorldQueryFilterByTag : uint32_t
{
	EPCGWorldQueryFilterByTag__NoTagFilter                                           = 0,
	EPCGWorldQueryFilterByTag__IncludeTagged                                         = 1,
	EPCGWorldQueryFilterByTag__ExcludeTagged                                         = 2,
	EPCGWorldQueryFilterByTag__EPCGWorldQueryFilterByTag_MAX                         = 3
};

/// Enum /Script/PCG.EPCGMetadataBitwiseOperation
/// Size: 0x05
enum class EPCGMetadataBitwiseOperation : uint16_t
{
	EPCGMetadataBitwiseOperation__And                                                = 0,
	EPCGMetadataBitwiseOperation__Not                                                = 1,
	EPCGMetadataBitwiseOperation__Or                                                 = 2,
	EPCGMetadataBitwiseOperation__Xor                                                = 3,
	EPCGMetadataBitwiseOperation__EPCGMetadataBitwiseOperation_MAX                   = 4
};

/// Enum /Script/PCG.EPCGMetadataBooleanOperation
/// Size: 0x05
enum class EPCGMetadataBooleanOperation : uint16_t
{
	EPCGMetadataBooleanOperation__And                                                = 0,
	EPCGMetadataBooleanOperation__Not                                                = 1,
	EPCGMetadataBooleanOperation__Or                                                 = 2,
	EPCGMetadataBooleanOperation__Xor                                                = 3,
	EPCGMetadataBooleanOperation__EPCGMetadataBooleanOperation_MAX                   = 4
};

/// Enum /Script/PCG.EPCGMetadataCompareOperation
/// Size: 0x07
enum class EPCGMetadataCompareOperation : uint16_t
{
	EPCGMetadataCompareOperation__Equal                                              = 0,
	EPCGMetadataCompareOperation__NotEqual                                           = 1,
	EPCGMetadataCompareOperation__Greater                                            = 2,
	EPCGMetadataCompareOperation__GreaterOrEqual                                     = 3,
	EPCGMetadataCompareOperation__Less                                               = 4,
	EPCGMetadataCompareOperation__LessOrEqual                                        = 5,
	EPCGMetadataCompareOperation__EPCGMetadataCompareOperation_MAX                   = 6
};

/// Enum /Script/PCG.EPCGMetadataOperationTarget
/// Size: 0x04
enum class EPCGMetadataOperationTarget : uint8_t
{
	EPCGMetadataOperationTarget__PropertyToAttribute                                 = 0,
	EPCGMetadataOperationTarget__AttributeToProperty                                 = 1,
	EPCGMetadataOperationTarget__AttributeToAttribute                                = 2,
	EPCGMetadataOperationTarget__EPCGMetadataOperationTarget_MAX                     = 3
};

/// Enum /Script/PCG.EPCGMetadataMakeVector3
/// Size: 0x03
enum class EPCGMetadataMakeVector3 : uint8_t
{
	EPCGMetadataMakeVector3__ThreeValues                                             = 0,
	EPCGMetadataMakeVector3__Vector2AndValue                                         = 1,
	EPCGMetadataMakeVector3__EPCGMetadataMakeVector3_MAX                             = 2
};

/// Enum /Script/PCG.EPCGMetadataMakeVector4
/// Size: 0x05
enum class EPCGMetadataMakeVector4 : uint8_t
{
	EPCGMetadataMakeVector4__FourValues                                              = 0,
	EPCGMetadataMakeVector4__Vector2AndTwoValues                                     = 1,
	EPCGMetadataMakeVector4__TwoVector2                                              = 2,
	EPCGMetadataMakeVector4__Vector3AndValue                                         = 3,
	EPCGMetadataMakeVector4__EPCGMetadataMakeVector4_MAX                             = 4
};

/// Enum /Script/PCG.EPCGMetadataMathsOperation
/// Size: 0x25
enum class EPCGMetadataMathsOperation : uint16_t
{
	EPCGMetadataMathsOperation__UnaryOp                                              = 1024,
	EPCGMetadataMathsOperation__Sign                                                 = 1025,
	EPCGMetadataMathsOperation__Frac                                                 = 1026,
	EPCGMetadataMathsOperation__Truncate                                             = 1027,
	EPCGMetadataMathsOperation__Round                                                = 1028,
	EPCGMetadataMathsOperation__Sqrt                                                 = 1029,
	EPCGMetadataMathsOperation__Abs                                                  = 1030,
	EPCGMetadataMathsOperation__Floor                                                = 1031,
	EPCGMetadataMathsOperation__Ceil                                                 = 1032,
	EPCGMetadataMathsOperation__OneMinus                                             = 1033,
	EPCGMetadataMathsOperation__BinaryOp                                             = 2048,
	EPCGMetadataMathsOperation__Add                                                  = 2049,
	EPCGMetadataMathsOperation__Subtract                                             = 2050,
	EPCGMetadataMathsOperation__Multiply                                             = 2051,
	EPCGMetadataMathsOperation__Divide                                               = 2052,
	EPCGMetadataMathsOperation__Max                                                  = 2053,
	EPCGMetadataMathsOperation__Min                                                  = 2054,
	EPCGMetadataMathsOperation__Pow                                                  = 2055,
	EPCGMetadataMathsOperation__ClampMin                                             = 2056,
	EPCGMetadataMathsOperation__ClampMax                                             = 2057,
	EPCGMetadataMathsOperation__Modulo                                               = 2058,
	EPCGMetadataMathsOperation__Set                                                  = 2059,
	EPCGMetadataMathsOperation__TernaryOp                                            = 4096,
	EPCGMetadataMathsOperation__Clamp                                                = 4097,
	EPCGMetadataMathsOperation__Lerp                                                 = 4098
};

/// Enum /Script/PCG.EPCGMetadataSettingsBaseMode
/// Size: 0x04
enum class EPCGMetadataSettingsBaseMode : uint8_t
{
	EPCGMetadataSettingsBaseMode__Inferred                                           = 0,
	EPCGMetadataSettingsBaseMode__NoBroadcast                                        = 1,
	EPCGMetadataSettingsBaseMode__Broadcast                                          = 2,
	EPCGMetadataSettingsBaseMode__EPCGMetadataSettingsBaseMode_MAX                   = 3
};

/// Enum /Script/PCG.EPCGMetadataSettingsBaseTypes
/// Size: 0x03
enum class EPCGMetadataSettingsBaseTypes : uint8_t
{
	EPCGMetadataSettingsBaseTypes__AutoUpcastTypes                                   = 0,
	EPCGMetadataSettingsBaseTypes__StrictTypes                                       = 1,
	EPCGMetadataSettingsBaseTypes__EPCGMetadataSettingsBaseTypes_MAX                 = 2
};

/// Enum /Script/PCG.EPCGMetadataRotatorOperation
/// Size: 0x09
enum class EPCGMetadataRotatorOperation : uint16_t
{
	EPCGMetadataRotatorOperation__RotatorOp                                          = 0,
	EPCGMetadataRotatorOperation__Combine                                            = 1,
	EPCGMetadataRotatorOperation__Invert                                             = 2,
	EPCGMetadataRotatorOperation__Lerp                                               = 3,
	EPCGMetadataRotatorOperation__Normalize                                          = 4,
	EPCGMetadataRotatorOperation__TransformOp                                        = 100,
	EPCGMetadataRotatorOperation__TransformRotation                                  = 101,
	EPCGMetadataRotatorOperation__InverseTransformRotation                           = 102,
	EPCGMetadataRotatorOperation__EPCGMetadataRotatorOperation_MAX                   = 103
};

/// Enum /Script/PCG.EPCGMetadataStringOperation
/// Size: 0x02
enum class EPCGMetadataStringOperation : uint16_t
{
	EPCGMetadataStringOperation__Append                                              = 0,
	EPCGMetadataStringOperation__EPCGMetadataStringOperation_MAX                     = 1
};

/// Enum /Script/PCG.EPCGMetadataTransformOperation
/// Size: 0x04
enum class EPCGMetadataTransformOperation : uint16_t
{
	EPCGMetadataTransformOperation__Compose                                          = 0,
	EPCGMetadataTransformOperation__Invert                                           = 1,
	EPCGMetadataTransformOperation__Lerp                                             = 2,
	EPCGMetadataTransformOperation__EPCGMetadataTransformOperation_MAX               = 3
};

/// Enum /Script/PCG.EPCGTransformLerpMode
/// Size: 0x04
enum class EPCGTransformLerpMode : uint16_t
{
	EPCGTransformLerpMode__QuatInterp                                                = 0,
	EPCGTransformLerpMode__EulerInterp                                               = 1,
	EPCGTransformLerpMode__DualQuatInterp                                            = 2,
	EPCGTransformLerpMode__EPCGTransformLerpMode_MAX                                 = 3
};

/// Enum /Script/PCG.EPCGMetadataTrigOperation
/// Size: 0x10
enum class EPCGMetadataTrigOperation : uint16_t
{
	EPCGMetadataTrigOperation__Acos                                                  = 0,
	EPCGMetadataTrigOperation__Asin                                                  = 1,
	EPCGMetadataTrigOperation__Atan                                                  = 2,
	EPCGMetadataTrigOperation__Atan2                                                 = 3,
	EPCGMetadataTrigOperation__Cos                                                   = 4,
	EPCGMetadataTrigOperation__Sin                                                   = 5,
	EPCGMetadataTrigOperation__Tan                                                   = 6,
	EPCGMetadataTrigOperation__DegToRad                                              = 7,
	EPCGMetadataTrigOperation__RadToDeg                                              = 8,
	EPCGMetadataTrigOperation__EPCGMetadataTrigOperation_MAX                         = 9
};

/// Enum /Script/PCG.EPCGMetadataVectorOperation
/// Size: 0x13
enum class EPCGMetadataVectorOperation : uint16_t
{
	EPCGMetadataVectorOperation__VectorOp                                            = 0,
	EPCGMetadataVectorOperation__Cross                                               = 1,
	EPCGMetadataVectorOperation__Dot                                                 = 2,
	EPCGMetadataVectorOperation__Distance                                            = 3,
	EPCGMetadataVectorOperation__Normalize                                           = 4,
	EPCGMetadataVectorOperation__Length                                              = 5,
	EPCGMetadataVectorOperation__RotateAroundAxis                                    = 6,
	EPCGMetadataVectorOperation__TransformOp                                         = 100,
	EPCGMetadataVectorOperation__TransformDirection                                  = 101,
	EPCGMetadataVectorOperation__TransformLocation                                   = 102,
	EPCGMetadataVectorOperation__InverseTransformDirection                           = 103,
	EPCGMetadataVectorOperation__InverseTransformLocation                            = 104,
	EPCGMetadataVectorOperation__EPCGMetadataVectorOperation_MAX                     = 105
};

/// Enum /Script/PCG.EPCGActorSelection
/// Size: 0x06
enum class EPCGActorSelection : uint8_t
{
	EPCGActorSelection__ByTag                                                        = 0,
	EPCGActorSelection__ByName                                                       = 1,
	EPCGActorSelection__ByClass                                                      = 2,
	EPCGActorSelection__ByPath                                                       = 3,
	EPCGActorSelection__Unknown                                                      = 4,
	EPCGActorSelection__EPCGActorSelection_MAX                                       = 5
};

/// Enum /Script/PCG.EPCGActorFilter
/// Size: 0x06
enum class EPCGActorFilter : uint8_t
{
	EPCGActorFilter__Self                                                            = 0,
	EPCGActorFilter__Parent                                                          = 1,
	EPCGActorFilter__Root                                                            = 2,
	EPCGActorFilter__AllWorldActors                                                  = 3,
	EPCGActorFilter__Original                                                        = 4,
	EPCGActorFilter__EPCGActorFilter_MAX                                             = 5
};

/// Enum /Script/PCG.EPCGAttributeNoiseMode
/// Size: 0x06
enum class EPCGAttributeNoiseMode : uint8_t
{
	EPCGAttributeNoiseMode__Set                                                      = 0,
	EPCGAttributeNoiseMode__Minimum                                                  = 1,
	EPCGAttributeNoiseMode__Maximum                                                  = 2,
	EPCGAttributeNoiseMode__Add                                                      = 3,
	EPCGAttributeNoiseMode__Multiply                                                 = 4,
	EPCGAttributeNoiseMode__EPCGAttributeNoiseMode_MAX                               = 5
};

/// Enum /Script/PCG.EPCGAttributeReduceOperation
/// Size: 0x04
enum class EPCGAttributeReduceOperation : uint32_t
{
	EPCGAttributeReduceOperation__Average                                            = 0,
	EPCGAttributeReduceOperation__Max                                                = 1,
	EPCGAttributeReduceOperation__Min                                                = 2,
	EPCGAttributeReduceOperation__Sum                                                = 3
};

/// Enum /Script/PCG.EPCGAttributeSelectOperation
/// Size: 0x03
enum class EPCGAttributeSelectOperation : uint32_t
{
	EPCGAttributeSelectOperation__Min                                                = 0,
	EPCGAttributeSelectOperation__Max                                                = 1,
	EPCGAttributeSelectOperation__Median                                             = 2
};

/// Enum /Script/PCG.EPCGAttributeSelectAxis
/// Size: 0x06
enum class EPCGAttributeSelectAxis : uint32_t
{
	EPCGAttributeSelectAxis__X                                                       = 0,
	EPCGAttributeSelectAxis__Y                                                       = 1,
	EPCGAttributeSelectAxis__Z                                                       = 2,
	EPCGAttributeSelectAxis__W                                                       = 3,
	EPCGAttributeSelectAxis__CustomAxis                                              = 4,
	EPCGAttributeSelectAxis__EPCGAttributeSelectAxis_MAX                             = 5
};

/// Enum /Script/PCG.EPCGBoundsModifierMode
/// Size: 0x06
enum class EPCGBoundsModifierMode : uint8_t
{
	EPCGBoundsModifierMode__Set                                                      = 0,
	EPCGBoundsModifierMode__Intersect                                                = 1,
	EPCGBoundsModifierMode__Include                                                  = 2,
	EPCGBoundsModifierMode__Translate                                                = 3,
	EPCGBoundsModifierMode__Scale                                                    = 4,
	EPCGBoundsModifierMode__EPCGBoundsModifierMode_MAX                               = 5
};

/// Enum /Script/PCG.EPCGCopyPointsInheritanceMode
/// Size: 0x04
enum class EPCGCopyPointsInheritanceMode : uint8_t
{
	EPCGCopyPointsInheritanceMode__Relative                                          = 0,
	EPCGCopyPointsInheritanceMode__Source                                            = 1,
	EPCGCopyPointsInheritanceMode__Target                                            = 2,
	EPCGCopyPointsInheritanceMode__EPCGCopyPointsInheritanceMode_MAX                 = 3
};

/// Enum /Script/PCG.EPCGCopyPointsTagInheritanceMode
/// Size: 0x04
enum class EPCGCopyPointsTagInheritanceMode : uint8_t
{
	EPCGCopyPointsTagInheritanceMode__Both                                           = 0,
	EPCGCopyPointsTagInheritanceMode__Source                                         = 1,
	EPCGCopyPointsTagInheritanceMode__Target                                         = 2,
	EPCGCopyPointsTagInheritanceMode__EPCGCopyPointsTagInheritanceMode_MAX           = 3
};

/// Enum /Script/PCG.EPCGCopyPointsMetadataInheritanceMode
/// Size: 0x06
enum class EPCGCopyPointsMetadataInheritanceMode : uint8_t
{
	EPCGCopyPointsMetadataInheritanceMode__SourceFirst                               = 0,
	EPCGCopyPointsMetadataInheritanceMode__TargetFirst                               = 1,
	EPCGCopyPointsMetadataInheritanceMode__SourceOnly                                = 2,
	EPCGCopyPointsMetadataInheritanceMode__TargetOnly                                = 3,
	EPCGCopyPointsMetadataInheritanceMode__None                                      = 4,
	EPCGCopyPointsMetadataInheritanceMode__EPCGCopyPointsMetadataInheritanceMode_MAX = 5
};

/// Enum /Script/PCG.EPCGCreateSplineMode
/// Size: 0x04
enum class EPCGCreateSplineMode : uint8_t
{
	EPCGCreateSplineMode__CreateDataOnly                                             = 0,
	EPCGCreateSplineMode__CreateComponent                                            = 1,
	EPCGCreateSplineMode__CreateNewActor                                             = 2,
	EPCGCreateSplineMode__EPCGCreateSplineMode_MAX                                   = 3
};

/// Enum /Script/PCG.EPCGGetDataFromActorMode
/// Size: 0x06
enum class EPCGGetDataFromActorMode : uint8_t
{
	EPCGGetDataFromActorMode__ParseActorComponents                                   = 0,
	EPCGGetDataFromActorMode__GetSinglePoint                                         = 1,
	EPCGGetDataFromActorMode__GetDataFromProperty                                    = 2,
	EPCGGetDataFromActorMode__GetDataFromPCGComponent                                = 3,
	EPCGGetDataFromActorMode__GetDataFromPCGComponentOrParseComponents               = 4,
	EPCGGetDataFromActorMode__EPCGGetDataFromActorMode_MAX                           = 5
};

/// Enum /Script/PCG.EPCGFilterByTagOperation
/// Size: 0x03
enum class EPCGFilterByTagOperation : uint32_t
{
	EPCGFilterByTagOperation__KeepTagged                                             = 0,
	EPCGFilterByTagOperation__RemoveTagged                                           = 1,
	EPCGFilterByTagOperation__EPCGFilterByTagOperation_MAX                           = 2
};

/// Enum /Script/PCG.EPCGProxyInterfaceMode
/// Size: 0x04
enum class EPCGProxyInterfaceMode : uint8_t
{
	EPCGProxyInterfaceMode__ByNativeElement                                          = 0,
	EPCGProxyInterfaceMode__ByBlueprintElement                                       = 1,
	EPCGProxyInterfaceMode__BySettings                                               = 2,
	EPCGProxyInterfaceMode__EPCGProxyInterfaceMode_MAX                               = 3
};

/// Enum /Script/PCG.EPCGMatchMaxDistanceMode
/// Size: 0x04
enum class EPCGMatchMaxDistanceMode : uint32_t
{
	EPCGMatchMaxDistanceMode__NoMaxDistance                                          = 0,
	EPCGMatchMaxDistanceMode__UseConstantMaxDistance                                 = 1,
	EPCGMatchMaxDistanceMode__AttributeMaxDistance                                   = 2,
	EPCGMatchMaxDistanceMode__EPCGMatchMaxDistanceMode_MAX                           = 3
};

/// Enum /Script/PCG.EPCGPointExtentsModifierMode
/// Size: 0x06
enum class EPCGPointExtentsModifierMode : uint8_t
{
	EPCGPointExtentsModifierMode__Set                                                = 0,
	EPCGPointExtentsModifierMode__Minimum                                            = 1,
	EPCGPointExtentsModifierMode__Maximum                                            = 2,
	EPCGPointExtentsModifierMode__Add                                                = 3,
	EPCGPointExtentsModifierMode__Multiply                                           = 4,
	EPCGPointExtentsModifierMode__EPCGPointExtentsModifierMode_MAX                   = 5
};

/// Enum /Script/PCG.EPCGSelfPruningType
/// Size: 0x06
enum class EPCGSelfPruningType : uint8_t
{
	EPCGSelfPruningType__LargeToSmall                                                = 0,
	EPCGSelfPruningType__SmallToLarge                                                = 1,
	EPCGSelfPruningType__AllEqual                                                    = 2,
	EPCGSelfPruningType__None                                                        = 3,
	EPCGSelfPruningType__RemoveDuplicates                                            = 4,
	EPCGSelfPruningType__EPCGSelfPruningType_MAX                                     = 5
};

/// Enum /Script/PCG.PCGSpatialNoiseMode
/// Size: 0x06
enum class PCGSpatialNoiseMode : uint32_t
{
	PCGSpatialNoiseMode__Perlin2D                                                    = 0,
	PCGSpatialNoiseMode__Caustic2D                                                   = 1,
	PCGSpatialNoiseMode__Voronoi2D                                                   = 2,
	PCGSpatialNoiseMode__FractionalBrownian2D                                        = 3,
	PCGSpatialNoiseMode__EdgeMask2D                                                  = 4,
	PCGSpatialNoiseMode__PCGSpatialNoiseMode_MAX                                     = 5
};

/// Enum /Script/PCG.PCGSpatialNoiseMask2DMode
/// Size: 0x04
enum class PCGSpatialNoiseMask2DMode : uint32_t
{
	PCGSpatialNoiseMask2DMode__Perlin                                                = 0,
	PCGSpatialNoiseMask2DMode__Caustic                                               = 1,
	PCGSpatialNoiseMask2DMode__FractionalBrownian                                    = 2,
	PCGSpatialNoiseMask2DMode__PCGSpatialNoiseMask2DMode_MAX                         = 3
};

/// Enum /Script/PCG.EPCGSpawnActorOption
/// Size: 0x04
enum class EPCGSpawnActorOption : uint8_t
{
	EPCGSpawnActorOption__CollapseActors                                             = 0,
	EPCGSpawnActorOption__MergePCGOnly                                               = 1,
	EPCGSpawnActorOption__NoMerging                                                  = 2,
	EPCGSpawnActorOption__EPCGSpawnActorOption_MAX                                   = 3
};

/// Enum /Script/PCG.EPCGSpawnActorGenerationTrigger
/// Size: 0x05
enum class EPCGSpawnActorGenerationTrigger : uint8_t
{
	EPCGSpawnActorGenerationTrigger__Default                                         = 0,
	EPCGSpawnActorGenerationTrigger__ForceGenerate                                   = 1,
	EPCGSpawnActorGenerationTrigger__DoNotGenerateInEditor                           = 2,
	EPCGSpawnActorGenerationTrigger__DoNotGenerate                                   = 3,
	EPCGSpawnActorGenerationTrigger__EPCGSpawnActorGenerationTrigger_MAX             = 4
};

/// Enum /Script/PCG.EPCGSplineSamplingMode
/// Size: 0x04
enum class EPCGSplineSamplingMode : uint8_t
{
	EPCGSplineSamplingMode__Subdivision                                              = 0,
	EPCGSplineSamplingMode__Distance                                                 = 1,
	EPCGSplineSamplingMode__NumberOfSamples                                          = 2,
	EPCGSplineSamplingMode__EPCGSplineSamplingMode_MAX                               = 3
};

/// Enum /Script/PCG.EPCGSplineSamplingDimension
/// Size: 0x06
enum class EPCGSplineSamplingDimension : uint8_t
{
	EPCGSplineSamplingDimension__OnSpline                                            = 0,
	EPCGSplineSamplingDimension__OnHorizontal                                        = 1,
	EPCGSplineSamplingDimension__OnVertical                                          = 2,
	EPCGSplineSamplingDimension__OnVolume                                            = 3,
	EPCGSplineSamplingDimension__OnInterior                                          = 4,
	EPCGSplineSamplingDimension__EPCGSplineSamplingDimension_MAX                     = 5
};

/// Enum /Script/PCG.EPCGSplineSamplingFill
/// Size: 0x03
enum class EPCGSplineSamplingFill : uint8_t
{
	EPCGSplineSamplingFill__Fill                                                     = 0,
	EPCGSplineSamplingFill__EdgesOnly                                                = 1,
	EPCGSplineSamplingFill__EPCGSplineSamplingFill_MAX                               = 2
};

/// Enum /Script/PCG.EPCGSplineSamplingInteriorOrientation
/// Size: 0x03
enum class EPCGSplineSamplingInteriorOrientation : uint8_t
{
	EPCGSplineSamplingInteriorOrientation__Uniform                                   = 0,
	EPCGSplineSamplingInteriorOrientation__FollowCurvature                           = 1,
	EPCGSplineSamplingInteriorOrientation__EPCGSplineSamplingInteriorOrientation_MAX = 2
};

/// Enum /Script/PCG.EPCGLandscapeCacheSerializationMode
/// Size: 0x04
enum class EPCGLandscapeCacheSerializationMode : uint8_t
{
	EPCGLandscapeCacheSerializationMode__SerializeOnlyAtCook                         = 0,
	EPCGLandscapeCacheSerializationMode__NeverSerialize                              = 1,
	EPCGLandscapeCacheSerializationMode__AlwaysSerialize                             = 2,
	EPCGLandscapeCacheSerializationMode__EPCGLandscapeCacheSerializationMode_MAX     = 3
};

/// Enum /Script/PCG.EPCGLandscapeCacheSerializationContents
/// Size: 0x04
enum class EPCGLandscapeCacheSerializationContents : uint8_t
{
	EPCGLandscapeCacheSerializationContents__SerializeOnlyPositionsAndNormals        = 0,
	EPCGLandscapeCacheSerializationContents__SerializeOnlyLayerData                  = 1,
	EPCGLandscapeCacheSerializationContents__SerializeAll                            = 2,
	EPCGLandscapeCacheSerializationContents__EPCGLandscapeCacheSerializationContents_MAX = 3
};

/// Enum /Script/PCG.EPCGMeshSelectorMaterialOverrideMode
/// Size: 0x04
enum class EPCGMeshSelectorMaterialOverrideMode : uint8_t
{
	EPCGMeshSelectorMaterialOverrideMode__NoOverride                                 = 0,
	EPCGMeshSelectorMaterialOverrideMode__StaticOverride                             = 1,
	EPCGMeshSelectorMaterialOverrideMode__ByAttributeOverride                        = 2,
	EPCGMeshSelectorMaterialOverrideMode__EPCGMeshSelectorMaterialOverrideMode_MAX   = 3
};

/// Enum /Script/PCG.EPCGComponentInput
/// Size: 0x04
enum class EPCGComponentInput : uint8_t
{
	EPCGComponentInput__Actor                                                        = 0,
	EPCGComponentInput__Landscape                                                    = 1,
	EPCGComponentInput__Other                                                        = 2,
	EPCGComponentInput__EPCGComponentInput_MAX                                       = 3
};

/// Enum /Script/PCG.EPCGComponentGenerationTrigger
/// Size: 0x04
enum class EPCGComponentGenerationTrigger : uint8_t
{
	EPCGComponentGenerationTrigger__GenerateOnLoad                                   = 0,
	EPCGComponentGenerationTrigger__GenerateOnDemand                                 = 1,
	EPCGComponentGenerationTrigger__GenerateAtRuntime                                = 2,
	EPCGComponentGenerationTrigger__EPCGComponentGenerationTrigger_MAX               = 3
};

/// Enum /Script/PCG.EPCGComponentDirtyFlag
/// Size: 0x07
enum class EPCGComponentDirtyFlag : uint8_t
{
	EPCGComponentDirtyFlag__None                                                     = 0,
	EPCGComponentDirtyFlag__Actor                                                    = 1,
	EPCGComponentDirtyFlag__Landscape                                                = 2,
	EPCGComponentDirtyFlag__Input                                                    = 4,
	EPCGComponentDirtyFlag__Data                                                     = 8,
	EPCGComponentDirtyFlag__All                                                      = 15,
	EPCGComponentDirtyFlag__EPCGComponentDirtyFlag_MAX                               = 16
};

/// Enum /Script/PCG.EPCGExecutionPhase
/// Size: 0x06
enum class EPCGExecutionPhase : uint8_t
{
	EPCGExecutionPhase__NotExecuted                                                  = 0,
	EPCGExecutionPhase__PrepareData                                                  = 1,
	EPCGExecutionPhase__Execute                                                      = 2,
	EPCGExecutionPhase__PostExecute                                                  = 3,
	EPCGExecutionPhase__Done                                                         = 4,
	EPCGExecutionPhase__EPCGExecutionPhase_MAX                                       = 5
};

/// Enum /Script/PCG.EPCGDebugVisScaleMethod
/// Size: 0x04
enum class EPCGDebugVisScaleMethod : uint8_t
{
	EPCGDebugVisScaleMethod__Relative                                                = 0,
	EPCGDebugVisScaleMethod__Absolute                                                = 1,
	EPCGDebugVisScaleMethod__Extents                                                 = 2,
	EPCGDebugVisScaleMethod__EPCGDebugVisScaleMethod_MAX                             = 3
};

/// Enum /Script/PCG.EPCGPinUsage
/// Size: 0x05
enum class EPCGPinUsage : uint8_t
{
	EPCGPinUsage__Normal                                                             = 0,
	EPCGPinUsage__Loop                                                               = 1,
	EPCGPinUsage__Feedback                                                           = 2,
	EPCGPinUsage__DependencyOnly                                                     = 3,
	EPCGPinUsage__EPCGPinUsage_MAX                                                   = 4
};

/// Enum /Script/PCG.EPCGPinStatus
/// Size: 0x04
enum class EPCGPinStatus : uint8_t
{
	EPCGPinStatus__Normal                                                            = 0,
	EPCGPinStatus__Required                                                          = 1,
	EPCGPinStatus__Advanced                                                          = 2,
	EPCGPinStatus__EPCGPinStatus_MAX                                                 = 3
};

/// Enum /Script/PCG.EPCGTypeConversion
/// Size: 0x07
enum class EPCGTypeConversion : uint8_t
{
	EPCGTypeConversion__NoConversionRequired                                         = 0,
	EPCGTypeConversion__CollapseToPoint                                              = 1,
	EPCGTypeConversion__Filter                                                       = 2,
	EPCGTypeConversion__MakeConcrete                                                 = 3,
	EPCGTypeConversion__SplineToSurface                                              = 4,
	EPCGTypeConversion__Failed                                                       = 5,
	EPCGTypeConversion__EPCGTypeConversion_MAX                                       = 6
};

/// Enum /Script/PCG.EPCGPointProperties
/// Size: 0x13
enum class EPCGPointProperties : uint8_t
{
	EPCGPointProperties__Density                                                     = 0,
	EPCGPointProperties__BoundsMin                                                   = 1,
	EPCGPointProperties__BoundsMax                                                   = 2,
	EPCGPointProperties__Extents                                                     = 3,
	EPCGPointProperties__Color                                                       = 4,
	EPCGPointProperties__Position                                                    = 5,
	EPCGPointProperties__Rotation                                                    = 6,
	EPCGPointProperties__Scale                                                       = 7,
	EPCGPointProperties__Transform                                                   = 8,
	EPCGPointProperties__Steepness                                                   = 9,
	EPCGPointProperties__LocalCenter                                                 = 10,
	EPCGPointProperties__Seed                                                        = 11,
	EPCGPointProperties__EPCGPointProperties_MAX                                     = 12
};

/// Enum /Script/PCG.EPCGSettingsExecutionMode
/// Size: 0x05
enum class EPCGSettingsExecutionMode : uint8_t
{
	EPCGSettingsExecutionMode__Enabled                                               = 0,
	EPCGSettingsExecutionMode__Debug                                                 = 1,
	EPCGSettingsExecutionMode__Isolated                                              = 2,
	EPCGSettingsExecutionMode__Disabled                                              = 3,
	EPCGSettingsExecutionMode__EPCGSettingsExecutionMode_MAX                         = 4
};

/// Enum /Script/PCG.EPCGSettingsType
/// Size: 0x18
enum class EPCGSettingsType : uint8_t
{
	EPCGSettingsType__InputOutput                                                    = 0,
	EPCGSettingsType__Spatial                                                        = 1,
	EPCGSettingsType__Density                                                        = 2,
	EPCGSettingsType__Blueprint                                                      = 3,
	EPCGSettingsType__Metadata                                                       = 4,
	EPCGSettingsType__Filter                                                         = 5,
	EPCGSettingsType__Sampler                                                        = 6,
	EPCGSettingsType__Spawner                                                        = 7,
	EPCGSettingsType__Subgraph                                                       = 8,
	EPCGSettingsType__Debug                                                          = 9,
	EPCGSettingsType__Generic                                                        = 10,
	EPCGSettingsType__Param                                                          = 11,
	EPCGSettingsType__HierarchicalGeneration                                         = 12,
	EPCGSettingsType__ControlFlow                                                    = 13,
	EPCGSettingsType__PointOps                                                       = 14,
	EPCGSettingsType__GraphParameters                                                = 15,
	EPCGSettingsType__Reroute                                                        = 16,
	EPCGSettingsType__EPCGSettingsType_MAX                                           = 17
};

/// Enum /Script/PCG.EDeterminismLevel
/// Size: 0x08
enum class EDeterminismLevel : uint8_t
{
	EDeterminismLevel__None                                                          = 0,
	EDeterminismLevel__NoDeterminism                                                 = 0,
	EDeterminismLevel__Basic                                                         = 1,
	EDeterminismLevel__OrderOrthogonal                                               = 2,
	EDeterminismLevel__OrderConsistent                                               = 3,
	EDeterminismLevel__OrderIndependent                                              = 4,
	EDeterminismLevel__Deterministic                                                 = 4,
	EDeterminismLevel__EDeterminismLevel_MAX                                         = 5
};

