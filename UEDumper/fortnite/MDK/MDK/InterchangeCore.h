
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject

/// Class /Script/InterchangeCore.InterchangeFactoryBase
/// Size: 0x0008 (0x000028 - 0x000030)
class UInterchangeFactoryBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(class UInterchangeResultsContainer*)       Results                                                     OFFSET(get<T>, {0x28, 8, 0, 0})


	/// Functions
	// Function /Script/InterchangeCore.InterchangeFactoryBase.GetFactoryClass
	// class UClass* GetFactoryClass();                                                                                         // [0x2f15498] Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/InterchangeCore.InterchangeSourceData
/// Size: 0x0028 (0x000028 - 0x000050)
class UInterchangeSourceData : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FString)                                   Filename                                                    OFFSET(getStruct<T>, {0x28, 16, 0, 0})


	/// Functions
	// Function /Script/InterchangeCore.InterchangeSourceData.SetFilename
	// bool SetFilename(FString InFilename);                                                                                    // [0xccb99d4] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeSourceData.GetFilename
	// FString GetFilename();                                                                                                   // [0xccab298] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/InterchangeCore.InterchangeWriterBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UInterchangeWriterBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/InterchangeCore.InterchangePipelineBase
/// Size: 0x00E0 (0x000028 - 0x000108)
class UInterchangePipelineBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:
	CMember(class UInterchangeResultsContainer*)       Results                                                     OFFSET(get<T>, {0x40, 8, 0, 0})
	CMember(TMap<FName, FInterchangePipelinePropertyStates>) PropertiesStates                                      OFFSET(get<T>, {0x48, 80, 0, 0})


	/// Functions
	// Function /Script/InterchangeCore.InterchangePipelineBase.ScriptedSetReimportSourceIndex
	// void ScriptedSetReimportSourceIndex(class UClass* ReimportObjectClass, int32_t SourceFileIndex);                         // [0xccb799c] RequiredAPI|Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/InterchangeCore.InterchangePipelineBase.ScriptedGetPipelineDisplayName
	// FString ScriptedGetPipelineDisplayName();                                                                                // [0xccb7954] RequiredAPI|Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/InterchangeCore.InterchangePipelineBase.ScriptedExecutePostImportPipeline
	// void ScriptedExecutePostImportPipeline(class UInterchangeBaseNodeContainer* BaseNodeContainer, FString FactoryNodeKey, class UObject* CreatedAsset, bool bIsAReimport); // [0xccb718c] RequiredAPI|Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/InterchangeCore.InterchangePipelineBase.ScriptedExecutePostFactoryPipeline
	// void ScriptedExecutePostFactoryPipeline(class UInterchangeBaseNodeContainer* BaseNodeContainer, FString FactoryNodeKey, class UObject* CreatedAsset, bool bIsAReimport); // [0xccb69c4] RequiredAPI|Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/InterchangeCore.InterchangePipelineBase.ScriptedExecutePipeline
	// void ScriptedExecutePipeline(class UInterchangeBaseNodeContainer* BaseNodeContainer, TArray<UInterchangeSourceData*>& SourceDatas, FString ContentBasePath); // [0xccb621c] RequiredAPI|Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/InterchangeCore.InterchangePipelineBase.ScriptedExecuteExportPipeline
	// void ScriptedExecuteExportPipeline(class UInterchangeBaseNodeContainer* BaseNodeContainer);                              // [0xccb6158] RequiredAPI|Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/InterchangeCore.InterchangePipelineBase.FindOrAddPropertyStates
	// FInterchangePipelinePropertyStates FindOrAddPropertyStates(FName PropertyPath);                                          // [0xcca84e0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangePipelineBase.DoesPropertyStatesExist
	// bool DoesPropertyStatesExist(FName PropertyPath);                                                                        // [0xcca8234] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/InterchangeCore.InterchangeResult
/// Size: 0x0048 (0x000028 - 0x000070)
class UInterchangeResult : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FString)                                   SourceAssetName                                             OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	SMember(FString)                                   DestinationAssetName                                        OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	SMember(FString)                                   AssetFriendlyName                                           OFFSET(getStruct<T>, {0x48, 16, 0, 0})
	CMember(class UClass*)                             AssetType                                                   OFFSET(get<T>, {0x58, 8, 0, 0})
	SMember(FString)                                   InterchangeKey                                              OFFSET(getStruct<T>, {0x60, 16, 0, 0})
};

/// Class /Script/InterchangeCore.InterchangeResultSuccess
/// Size: 0x0000 (0x000070 - 0x000070)
class UInterchangeResultSuccess : public UInterchangeResult
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Class /Script/InterchangeCore.InterchangeResultWarning
/// Size: 0x0000 (0x000070 - 0x000070)
class UInterchangeResultWarning : public UInterchangeResult
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Class /Script/InterchangeCore.InterchangeResultError
/// Size: 0x0000 (0x000070 - 0x000070)
class UInterchangeResultError : public UInterchangeResult
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Class /Script/InterchangeCore.InterchangeResultWarning_Generic
/// Size: 0x0018 (0x000070 - 0x000088)
class UInterchangeResultWarning_Generic : public UInterchangeResultWarning
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FText)                                     Text                                                        OFFSET(getStruct<T>, {0x70, 24, 0, 0})
};

/// Class /Script/InterchangeCore.InterchangeResultError_Generic
/// Size: 0x0018 (0x000070 - 0x000088)
class UInterchangeResultError_Generic : public UInterchangeResultError
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FText)                                     Text                                                        OFFSET(getStruct<T>, {0x70, 24, 0, 0})
};

/// Class /Script/InterchangeCore.InterchangeResultError_ReimportFail
/// Size: 0x0000 (0x000070 - 0x000070)
class UInterchangeResultError_ReimportFail : public UInterchangeResultError
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Class /Script/InterchangeCore.InterchangeResultDisplay_Generic
/// Size: 0x0018 (0x000070 - 0x000088)
class UInterchangeResultDisplay_Generic : public UInterchangeResultSuccess
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FText)                                     Text                                                        OFFSET(getStruct<T>, {0x70, 24, 0, 0})
};

/// Class /Script/InterchangeCore.InterchangeResultsContainer
/// Size: 0x0038 (0x000028 - 0x000060)
class UInterchangeResultsContainer : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(TArray<class UInterchangeResult*>)         Results                                                     OFFSET(get<T>, {0x50, 16, 0, 0})
};

/// Class /Script/InterchangeCore.InterchangeTranslatorSettings
/// Size: 0x0000 (0x000028 - 0x000028)
class UInterchangeTranslatorSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/InterchangeCore.InterchangeTranslatorBase
/// Size: 0x0010 (0x000028 - 0x000038)
class UInterchangeTranslatorBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(class UInterchangeResultsContainer*)       Results                                                     OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(class UInterchangeSourceData*)             SourceData                                                  OFFSET(get<T>, {0x30, 8, 0, 0})
};

/// Class /Script/InterchangeCore.InterchangeBaseNode
/// Size: 0x0038 (0x000028 - 0x000060)
class UInterchangeBaseNode : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:


	/// Functions
	// Function /Script/InterchangeCore.InterchangeBaseNode.SetParentUid
	// bool SetParentUid(FString ParentUid);                                                                                    // [0xccba748] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeBaseNode.SetEnabled
	// bool SetEnabled(bool bIsEnabled);                                                                                        // [0xccb9904] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeBaseNode.SetDisplayLabel
	// bool SetDisplayLabel(FString DisplayName);                                                                               // [0xccb9294] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeBaseNode.SetAssetName
	// bool SetAssetName(FString AssetName);                                                                                    // [0xccb7ae0] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeBaseNode.RemoveTargetNodeUid
	// bool RemoveTargetNodeUid(FString AssetUid);                                                                              // [0xccb46d4] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeCore.InterchangeBaseNode.RemoveAttribute
	// bool RemoveAttribute(FString NodeAttributeKey);                                                                          // [0xccb39f8] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeBaseNode.IsEnabled
	// bool IsEnabled();                                                                                                        // [0xccb2d00] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeCore.InterchangeBaseNode.InitializeNode
	// void InitializeNode(FString UniqueID, FString DisplayLabel, EInterchangeNodeContainerType NodeContainerType);            // [0xccb1ec8] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeBaseNode.GetVector2Attribute
	// bool GetVector2Attribute(FString NodeAttributeKey, FVector2f& OutValue);                                                 // [0xccb1830] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeCore.InterchangeBaseNode.GetUniqueID
	// FString GetUniqueID();                                                                                                   // [0xccaf164] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeCore.InterchangeBaseNode.GetTargetNodeUids
	// void GetTargetNodeUids(TArray<FString>& OutTargetAssets);                                                                // [0xccaf0c8] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeCore.InterchangeBaseNode.GetTargetNodeCount
	// int32_t GetTargetNodeCount();                                                                                            // [0xccaf0a0] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeCore.InterchangeBaseNode.GetStringAttribute
	// bool GetStringAttribute(FString NodeAttributeKey, FString& OutValue);                                                    // [0xccae9f4] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeCore.InterchangeBaseNode.GetParentUid
	// FString GetParentUid();                                                                                                  // [0xccae8f8] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeCore.InterchangeBaseNode.GetNodeContainerType
	// EInterchangeNodeContainerType GetNodeContainerType();                                                                    // [0xccae7ac] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeCore.InterchangeBaseNode.GetLinearColorAttribute
	// bool GetLinearColorAttribute(FString NodeAttributeKey, FLinearColor& OutValue);                                          // [0xccac6f8] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeCore.InterchangeBaseNode.GetInt32Attribute
	// bool GetInt32Attribute(FString NodeAttributeKey, int32_t& OutValue);                                                     // [0xccac01c] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeCore.InterchangeBaseNode.GetGuidAttribute
	// bool GetGuidAttribute(FString NodeAttributeKey, FGuid& OutValue);                                                        // [0xccab97c] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeCore.InterchangeBaseNode.GetFloatAttribute
	// bool GetFloatAttribute(FString NodeAttributeKey, float& OutValue);                                                       // [0xccab2e0] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeCore.InterchangeBaseNode.GetDoubleAttribute
	// bool GetDoubleAttribute(FString NodeAttributeKey, double& OutValue);                                                     // [0xcca9e34] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeCore.InterchangeBaseNode.GetDisplayLabel
	// FString GetDisplayLabel();                                                                                               // [0xcca9df4] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeCore.InterchangeBaseNode.GetBooleanAttribute
	// bool GetBooleanAttribute(FString NodeAttributeKey, bool& OutValue);                                                      // [0xcca864c] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeCore.InterchangeBaseNode.GetAssetName
	// FString GetAssetName();                                                                                                  // [0xcca8608] RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeCore.InterchangeBaseNode.AddVector2Attribute
	// bool AddVector2Attribute(FString NodeAttributeKey, FVector2f& Value);                                                    // [0xcca510c] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeBaseNode.AddTargetNodeUid
	// bool AddTargetNodeUid(FString AssetUid);                                                                                 // [0xcca4aa0] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeCore.InterchangeBaseNode.AddStringAttribute
	// bool AddStringAttribute(FString NodeAttributeKey, FString Value);                                                        // [0xcca43c0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeBaseNode.AddLinearColorAttribute
	// bool AddLinearColorAttribute(FString NodeAttributeKey, FLinearColor& Value);                                             // [0xcca3c44] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeBaseNode.AddInt32Attribute
	// bool AddInt32Attribute(FString NodeAttributeKey, int32_t& Value);                                                        // [0xcca3568] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeBaseNode.AddGuidAttribute
	// bool AddGuidAttribute(FString NodeAttributeKey, FGuid& Value);                                                           // [0xcca2ec8] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeBaseNode.AddFloatAttribute
	// bool AddFloatAttribute(FString NodeAttributeKey, float& Value);                                                          // [0xcca282c] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeBaseNode.AddDoubleAttribute
	// bool AddDoubleAttribute(FString NodeAttributeKey, double& Value);                                                        // [0xcca1b20] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeBaseNode.AddBooleanAttribute
	// bool AddBooleanAttribute(FString NodeAttributeKey, bool& Value);                                                         // [0xcca1484] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/InterchangeCore.InterchangeBaseNodeContainer
/// Size: 0x00A0 (0x000028 - 0x0000C8)
class UInterchangeBaseNodeContainer : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	CMember(TMap<FString, UInterchangeBaseNode*>)      Nodes                                                       OFFSET(get<T>, {0x28, 80, 0, 0})


	/// Functions
	// Function /Script/InterchangeCore.InterchangeBaseNodeContainer.SetNodeParentUid
	// bool SetNodeParentUid(FString NodeUniqueID, FString NewParentNodeUid);                                                   // [0xccba068] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeBaseNodeContainer.SaveToFile
	// void SaveToFile(FString Filename);                                                                                       // [0xccb5af4] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeBaseNodeContainer.ResetChildrenCache
	// void ResetChildrenCache();                                                                                               // [0xccb5ae0] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeBaseNodeContainer.Reset
	// void Reset();                                                                                                            // [0xccb5acc] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeBaseNodeContainer.ReplaceNode
	// void ReplaceNode(FString NodeUniqueID, class UInterchangeFactoryBaseNode* NewNode);                                      // [0xccb5404] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeBaseNodeContainer.LoadFromFile
	// void LoadFromFile(FString Filename);                                                                                     // [0xccb3394] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeBaseNodeContainer.IsNodeUidValid
	// bool IsNodeUidValid(FString NodeUniqueID);                                                                               // [0xccb2d24] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeCore.InterchangeBaseNodeContainer.GetRoots
	// void GetRoots(TArray<FString>& RootNodes);                                                                               // [0xccae95c] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeCore.InterchangeBaseNodeContainer.GetNodes
	// void GetNodes(class UClass* ClassNode, TArray<FString>& OutNodes);                                                       // [0xccae7d0] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeCore.InterchangeBaseNodeContainer.GetNodeChildrenUids
	// TArray<FString> GetNodeChildrenUids(FString NodeUniqueID);                                                               // [0xccae144] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeCore.InterchangeBaseNodeContainer.GetNodeChildrenCount
	// int32_t GetNodeChildrenCount(FString NodeUniqueID);                                                                      // [0xccadad4] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeCore.InterchangeBaseNodeContainer.GetNodeChildren
	// class UInterchangeBaseNode* GetNodeChildren(FString NodeUniqueID, int32_t ChildIndex);                                   // [0xccad400] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeBaseNodeContainer.GetNode
	// class UInterchangeBaseNode* GetNode(FString NodeUniqueID);                                                               // [0xccacd90] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeCore.InterchangeBaseNodeContainer.GetFactoryNode
	// class UInterchangeFactoryBaseNode* GetFactoryNode(FString NodeUniqueID);                                                 // [0xccaac28] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeCore.InterchangeBaseNodeContainer.ComputeChildrenCache
	// void ComputeChildrenCache();                                                                                             // [0xcca5808] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeBaseNodeContainer.AddNode
	// FString AddNode(class UInterchangeBaseNode* Node);                                                                       // [0xcca42dc] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/InterchangeCore.InterchangeFactoryBaseNode
/// Size: 0x00E0 (0x000060 - 0x000140)
class UInterchangeFactoryBaseNode : public UInterchangeBaseNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:


	/// Functions
	// Function /Script/InterchangeCore.InterchangeFactoryBaseNode.UnsetSkipNodeImport
	// bool UnsetSkipNodeImport();                                                                                              // [0xccbaee0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeFactoryBaseNode.UnsetForceNodeReimport
	// bool UnsetForceNodeReimport();                                                                                           // [0xccbaebc] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeFactoryBaseNode.ShouldSkipNodeImport
	// bool ShouldSkipNodeImport();                                                                                             // [0xccbae98] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeCore.InterchangeFactoryBaseNode.ShouldForceNodeReimport
	// bool ShouldForceNodeReimport();                                                                                          // [0xccbae74] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeCore.InterchangeFactoryBaseNode.SetSkipNodeImport
	// bool SetSkipNodeImport();                                                                                                // [0xccbae50] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeFactoryBaseNode.SetReimportStrategyFlags
	// bool SetReimportStrategyFlags(EReimportStrategyFlags& ReimportStrategyFlags);                                            // [0xccbadb8] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeFactoryBaseNode.SetForceNodeReimport
	// bool SetForceNodeReimport();                                                                                             // [0xccba044] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeFactoryBaseNode.SetCustomSubPath
	// bool SetCustomSubPath(FString AttributeValue);                                                                           // [0xccb8c24] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeFactoryBaseNode.SetCustomReferenceObject
	// bool SetCustomReferenceObject(FSoftObjectPath& AttributeValue);                                                          // [0xccb8320] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeFactoryBaseNode.RemoveFactoryDependencyUid
	// bool RemoveFactoryDependencyUid(FString DependencyUid);                                                                  // [0xccb4068] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeFactoryBaseNode.GetReimportStrategyFlags
	// EReimportStrategyFlags GetReimportStrategyFlags();                                                                       // [0xccae938] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeCore.InterchangeFactoryBaseNode.GetFactoryDependency
	// void GetFactoryDependency(int32_t Index, FString& OutDependency);                                                        // [0xccaa598] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeCore.InterchangeFactoryBaseNode.GetFactoryDependenciesCount
	// int32_t GetFactoryDependenciesCount();                                                                                   // [0xccaa570] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeCore.InterchangeFactoryBaseNode.GetFactoryDependencies
	// void GetFactoryDependencies(TArray<FString>& OutDependencies);                                                           // [0xccaa4d4] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeCore.InterchangeFactoryBaseNode.GetCustomSubPath
	// bool GetCustomSubPath(FString& AttributeValue);                                                                          // [0xcca97bc] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeCore.InterchangeFactoryBaseNode.GetCustomReferenceObject
	// bool GetCustomReferenceObject(FSoftObjectPath& AttributeValue);                                                          // [0xcca8eb8] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeCore.InterchangeFactoryBaseNode.AddFactoryDependencyUid
	// bool AddFactoryDependencyUid(FString DependencyUid);                                                                     // [0xcca21c0] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/InterchangeCore.InterchangeSourceNode
/// Size: 0x0070 (0x000060 - 0x0000D0)
class UInterchangeSourceNode : public UInterchangeBaseNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:


	/// Functions
	// Function /Script/InterchangeCore.InterchangeSourceNode.SetCustomSourceTimelineStart
	// bool SetCustomSourceTimelineStart(double& AttributeValue);                                                               // [0xccb8b88] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeSourceNode.SetCustomSourceTimelineEnd
	// bool SetCustomSourceTimelineEnd(double& AttributeValue);                                                                 // [0xccb8aec] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeSourceNode.SetCustomSourceFrameRateNumerator
	// bool SetCustomSourceFrameRateNumerator(int32_t& AttributeValue);                                                         // [0xccb8a18] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeSourceNode.SetCustomSourceFrameRateDenominator
	// bool SetCustomSourceFrameRateDenominator(int32_t& AttributeValue);                                                       // [0xccb8944] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeSourceNode.SetCustomImportUnusedMaterial
	// bool SetCustomImportUnusedMaterial(bool& AttributeValue);                                                                // [0xccb8288] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeSourceNode.SetCustomAnimatedTimeStart
	// bool SetCustomAnimatedTimeStart(double& AttributeValue);                                                                 // [0xccb81ec] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeSourceNode.SetCustomAnimatedTimeEnd
	// bool SetCustomAnimatedTimeEnd(double& AttributeValue);                                                                   // [0xccb8150] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeSourceNode.InitializeSourceNode
	// void InitializeSourceNode(FString UniqueID, FString DisplayLabel);                                                       // [0xccb2620] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeSourceNode.GetCustomSourceTimelineStart
	// bool GetCustomSourceTimelineStart(double& AttributeValue);                                                               // [0xcca9720] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeCore.InterchangeSourceNode.GetCustomSourceTimelineEnd
	// bool GetCustomSourceTimelineEnd(double& AttributeValue);                                                                 // [0xcca9684] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeCore.InterchangeSourceNode.GetCustomSourceFrameRateNumerator
	// bool GetCustomSourceFrameRateNumerator(int32_t& AttributeValue);                                                         // [0xcca95b0] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeCore.InterchangeSourceNode.GetCustomSourceFrameRateDenominator
	// bool GetCustomSourceFrameRateDenominator(int32_t& AttributeValue);                                                       // [0xcca94dc] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeCore.InterchangeSourceNode.GetCustomImportUnusedMaterial
	// bool GetCustomImportUnusedMaterial(bool& AttributeValue);                                                                // [0xcca8e20] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeCore.InterchangeSourceNode.GetCustomAnimatedTimeStart
	// bool GetCustomAnimatedTimeStart(double& AttributeValue);                                                                 // [0xcca8d84] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeCore.InterchangeSourceNode.GetCustomAnimatedTimeEnd
	// bool GetCustomAnimatedTimeEnd(double& AttributeValue);                                                                   // [0xcca8ce8] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/InterchangeCore.InterchangeUserDefinedAttributesAPI
/// Size: 0x0000 (0x000028 - 0x000028)
class UInterchangeUserDefinedAttributesAPI : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/InterchangeCore.InterchangeUserDefinedAttributesAPI.RemoveUserDefinedAttribute
	// bool RemoveUserDefinedAttribute(class UInterchangeBaseNode* InterchangeNode, FString UserDefinedAttributeName);          // [0xccb4d40] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeUserDefinedAttributesAPI.GetUserDefinedAttributeInfos
	// void GetUserDefinedAttributeInfos(class UInterchangeBaseNode* InterchangeNode, TArray<FInterchangeUserDefinedAttributeInfo>& UserDefinedAttributeInfos); // [0xccaf1a4] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeUserDefinedAttributesAPI.GetUserDefinedAttribute_Int32
	// bool GetUserDefinedAttribute_Int32(class UInterchangeBaseNode* InterchangeNode, FString UserDefinedAttributeName, int32_t& OutValue, FString& OutPayloadKey); // [0xccb1084] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeUserDefinedAttributesAPI.GetUserDefinedAttribute_FString
	// bool GetUserDefinedAttribute_FString(class UInterchangeBaseNode* InterchangeNode, FString UserDefinedAttributeName, FString& OutValue, FString& OutPayloadKey); // [0xccb0198] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeUserDefinedAttributesAPI.GetUserDefinedAttribute_Float
	// bool GetUserDefinedAttribute_Float(class UInterchangeBaseNode* InterchangeNode, FString UserDefinedAttributeName, float& OutValue, FString& OutPayloadKey); // [0xccb0918] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeUserDefinedAttributesAPI.GetUserDefinedAttribute_Double
	// bool GetUserDefinedAttribute_Double(class UInterchangeBaseNode* InterchangeNode, FString UserDefinedAttributeName, double& OutValue, FString& OutPayloadKey); // [0xccafa28] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeUserDefinedAttributesAPI.GetUserDefinedAttribute_Boolean
	// bool GetUserDefinedAttribute_Boolean(class UInterchangeBaseNode* InterchangeNode, FString UserDefinedAttributeName, bool& OutValue, FString& OutPayloadKey); // [0xccaf2bc] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeUserDefinedAttributesAPI.DuplicateAllUserDefinedAttribute
	// void DuplicateAllUserDefinedAttribute(class UInterchangeBaseNode* InterchangeSourceNode, class UInterchangeBaseNode* InterchangeDestinationNode, bool bAddSourceNodeName); // [0xcca8324] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeUserDefinedAttributesAPI.CreateUserDefinedAttribute_Int32
	// bool CreateUserDefinedAttribute_Int32(class UInterchangeBaseNode* InterchangeNode, FString UserDefinedAttributeName, int32_t& Value, FString PayloadKey, bool RequiresDelegate); // [0xcca7988] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeUserDefinedAttributesAPI.CreateUserDefinedAttribute_FString
	// bool CreateUserDefinedAttribute_FString(class UInterchangeBaseNode* InterchangeNode, FString UserDefinedAttributeName, FString Value, FString PayloadKey, bool RequiresDelegate); // [0xcca68b4] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeUserDefinedAttributesAPI.CreateUserDefinedAttribute_Float
	// bool CreateUserDefinedAttribute_Float(class UInterchangeBaseNode* InterchangeNode, FString UserDefinedAttributeName, float& Value, FString PayloadKey, bool RequiresDelegate); // [0xcca7164] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeUserDefinedAttributesAPI.CreateUserDefinedAttribute_Double
	// bool CreateUserDefinedAttribute_Double(class UInterchangeBaseNode* InterchangeNode, FString UserDefinedAttributeName, double& Value, FString PayloadKey, bool RequiresDelegate); // [0xcca608c] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeUserDefinedAttributesAPI.CreateUserDefinedAttribute_Boolean
	// bool CreateUserDefinedAttribute_Boolean(class UInterchangeBaseNode* InterchangeNode, FString UserDefinedAttributeName, bool& Value, FString PayloadKey, bool RequiresDelegate); // [0xcca581c] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/InterchangeCore.InterchangePipelinePropertyStatePerContext
/// Size: 0x0001 (0x000000 - 0x000001)
class FInterchangePipelinePropertyStatePerContext : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
	DMember(bool)                                      bVisible                                                    OFFSET(get<bool>, {0x0, 1, 0, 0})
};

/// Struct /Script/InterchangeCore.InterchangePipelinePropertyStates
/// Size: 0x0004 (0x000000 - 0x000004)
class FInterchangePipelinePropertyStates : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(bool)                                      bLocked                                                     OFFSET(get<bool>, {0x0, 1, 0, 0})
	SMember(FInterchangePipelinePropertyStatePerContext) BasicLayoutStates                                         OFFSET(getStruct<T>, {0x1, 1, 0, 0})
	SMember(FInterchangePipelinePropertyStatePerContext) ImportStates                                              OFFSET(getStruct<T>, {0x2, 1, 0, 0})
	SMember(FInterchangePipelinePropertyStatePerContext) ReimportStates                                            OFFSET(getStruct<T>, {0x3, 1, 0, 0})
};

/// Struct /Script/InterchangeCore.InterchangeUserDefinedAttributeInfo
/// Size: 0x0038 (0x000000 - 0x000038)
class FInterchangeUserDefinedAttributeInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FString)                                   Name                                                        OFFSET(getStruct<T>, {0x0, 16, 0, 0})
};

/// Enum /Script/InterchangeCore.EInterchangeFactoryAssetType
/// Size: 0x07
enum class EInterchangeFactoryAssetType : uint8_t
{
	EInterchangeFactoryAssetType__None                                               = 0,
	EInterchangeFactoryAssetType__Textures                                           = 1,
	EInterchangeFactoryAssetType__Materials                                          = 2,
	EInterchangeFactoryAssetType__Meshes                                             = 3,
	EInterchangeFactoryAssetType__Animations                                         = 4,
	EInterchangeFactoryAssetType__Physics                                            = 5,
	EInterchangeFactoryAssetType__EInterchangeFactoryAssetType_MAX                   = 6
};

/// Enum /Script/InterchangeCore.EInterchangePipelineTask
/// Size: 0x05
enum class EInterchangePipelineTask : uint8_t
{
	EInterchangePipelineTask__PostTranslator                                         = 0,
	EInterchangePipelineTask__PostFactory                                            = 1,
	EInterchangePipelineTask__PostImport                                             = 2,
	EInterchangePipelineTask__Export                                                 = 3,
	EInterchangePipelineTask__EInterchangePipelineTask_MAX                           = 4
};

/// Enum /Script/InterchangeCore.EInterchangePipelineContext
/// Size: 0x10
enum class EInterchangePipelineContext : uint8_t
{
	EInterchangePipelineContext__None                                                = 0,
	EInterchangePipelineContext__AssetImport                                         = 1,
	EInterchangePipelineContext__AssetReimport                                       = 2,
	EInterchangePipelineContext__SceneImport                                         = 3,
	EInterchangePipelineContext__SceneReimport                                       = 4,
	EInterchangePipelineContext__AssetCustomLODImport                                = 5,
	EInterchangePipelineContext__AssetCustomLODReimport                              = 6,
	EInterchangePipelineContext__AssetAlternateSkinningImport                        = 7,
	EInterchangePipelineContext__AssetAlternateSkinningReimport                      = 8,
	EInterchangePipelineContext__EInterchangePipelineContext_MAX                     = 9
};

/// Enum /Script/InterchangeCore.EInterchangeResultType
/// Size: 0x04
enum class EInterchangeResultType : uint8_t
{
	EInterchangeResultType__Success                                                  = 0,
	EInterchangeResultType__Warning                                                  = 1,
	EInterchangeResultType__Error                                                    = 2,
	EInterchangeResultType__EInterchangeResultType_MAX                               = 3
};

/// Enum /Script/InterchangeCore.EInterchangeTranslatorType
/// Size: 0x05
enum class EInterchangeTranslatorType : uint8_t
{
	EInterchangeTranslatorType__Invalid                                              = 0,
	EInterchangeTranslatorType__Assets                                               = 2,
	EInterchangeTranslatorType__Actors                                               = 4,
	EInterchangeTranslatorType__Scenes                                               = 6,
	EInterchangeTranslatorType__EInterchangeTranslatorType_MAX                       = 7
};

/// Enum /Script/InterchangeCore.EInterchangeTranslatorAssetType
/// Size: 0x06
enum class EInterchangeTranslatorAssetType : uint8_t
{
	EInterchangeTranslatorAssetType__None                                            = 0,
	EInterchangeTranslatorAssetType__Textures                                        = 1,
	EInterchangeTranslatorAssetType__Materials                                       = 2,
	EInterchangeTranslatorAssetType__Meshes                                          = 4,
	EInterchangeTranslatorAssetType__Animations                                      = 8,
	EInterchangeTranslatorAssetType__EInterchangeTranslatorAssetType_MAX             = 9
};

/// Enum /Script/InterchangeCore.EInterchangeNodeContainerType
/// Size: 0x05
enum class EInterchangeNodeContainerType : uint8_t
{
	EInterchangeNodeContainerType__None                                              = 0,
	EInterchangeNodeContainerType__TranslatedScene                                   = 1,
	EInterchangeNodeContainerType__TranslatedAsset                                   = 2,
	EInterchangeNodeContainerType__FactoryData                                       = 3,
	EInterchangeNodeContainerType__EInterchangeNodeContainerType_MAX                 = 4
};

/// Enum /Script/InterchangeCore.EInterchangeNodeUserInterfaceContext
/// Size: 0x03
enum class EInterchangeNodeUserInterfaceContext : uint8_t
{
	EInterchangeNodeUserInterfaceContext__None                                       = 0,
	EInterchangeNodeUserInterfaceContext__Preview                                    = 1,
	EInterchangeNodeUserInterfaceContext__EInterchangeNodeUserInterfaceContext_MAX   = 2
};

/// Enum /Script/InterchangeCore.EReimportStrategyFlags
/// Size: 0x04
enum class EReimportStrategyFlags : uint8_t
{
	EReimportStrategyFlags__ApplyNoProperties                                        = 0,
	EReimportStrategyFlags__ApplyPipelineProperties                                  = 1,
	EReimportStrategyFlags__ApplyEditorChangedProperties                             = 2,
	EReimportStrategyFlags__EReimportStrategyFlags_MAX                               = 3
};

