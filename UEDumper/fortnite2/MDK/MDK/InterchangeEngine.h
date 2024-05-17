
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine
/// dependency: InterchangeCore

/// Class /Script/InterchangeEngine.InterchangeBlueprintPipelineBase
/// Size: 0x0000 (0x0000A8 - 0x0000A8)
class UInterchangeBlueprintPipelineBase : public UBlueprint
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
};

/// Class /Script/InterchangeEngine.InterchangeFilePickerBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UInterchangeFilePickerBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/InterchangeEngine.InterchangeFilePickerBase.ScriptedFilePickerForTranslatorType
	// bool ScriptedFilePickerForTranslatorType(EInterchangeTranslatorType TranslatorType, FInterchangeFilePickerParameters& Parameters, TArray<FString>& OutFilenames); // [0xd4c83bc] RequiredAPI|Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/InterchangeEngine.InterchangeFilePickerBase.ScriptedFilePickerForTranslatorAssetType
	// bool ScriptedFilePickerForTranslatorAssetType(EInterchangeTranslatorAssetType TranslatorAssetType, FInterchangeFilePickerParameters& Parameters, TArray<FString>& OutFilenames); // [0xd4c826c] RequiredAPI|Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/InterchangeEngine.InterchangePipelineConfigurationBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UInterchangePipelineConfigurationBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/InterchangeEngine.InterchangePipelineConfigurationBase.ScriptedShowScenePipelineConfigurationDialog
	// EInterchangePipelineConfigurationDialogResult ScriptedShowScenePipelineConfigurationDialog(TArray<FInterchangeStackInfo>& PipelineStacks, TArray<UInterchangePipelineBase*>& OutPipelines, class UInterchangeSourceData* SourceData, class UInterchangeTranslatorBase* Translator, class UInterchangeBaseNodeContainer* BaseNodeContainer); // [0xd4c99f0] RequiredAPI|Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/InterchangeEngine.InterchangePipelineConfigurationBase.ScriptedShowReimportPipelineConfigurationDialog
	// EInterchangePipelineConfigurationDialogResult ScriptedShowReimportPipelineConfigurationDialog(TArray<FInterchangeStackInfo>& PipelineStacks, TArray<UInterchangePipelineBase*>& OutPipelines, class UInterchangeSourceData* SourceData, class UInterchangeTranslatorBase* Translator, class UInterchangeBaseNodeContainer* BaseNodeContainer, class UObject* ReimportAsset); // [0xd4c8f08] RequiredAPI|Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/InterchangeEngine.InterchangePipelineConfigurationBase.ScriptedShowPipelineConfigurationDialog
	// EInterchangePipelineConfigurationDialogResult ScriptedShowPipelineConfigurationDialog(TArray<FInterchangeStackInfo>& PipelineStacks, TArray<UInterchangePipelineBase*>& OutPipelines, class UInterchangeSourceData* SourceData, class UInterchangeTranslatorBase* Translator, class UInterchangeBaseNodeContainer* BaseNodeContainer); // [0xd4c850c] RequiredAPI|Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/InterchangeEngine.InterchangeProjectSettings
/// Size: 0x01E8 (0x000030 - 0x000218)
class UInterchangeProjectSettings : public UDeveloperSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 536;

public:
	SMember(FInterchangeContentImportSettings)         ContentImportSettings                                       OFFSET(getStruct<T>, {0x30, 288, 0, 0})
	SMember(FInterchangeImportSettings)                SceneImportSettings                                         OFFSET(getStruct<T>, {0x150, 128, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   FilePickerClass                                             OFFSET(get<T>, {0x1D0, 32, 0, 0})
	DMember(bool)                                      bStaticMeshUseSmoothEdgesIfSmoothingInformationIsMissing    OFFSET(get<bool>, {0x1F0, 1, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   GenericPipelineClass                                        OFFSET(get<T>, {0x1F8, 32, 0, 0})
};

/// Class /Script/InterchangeEngine.InterchangePythonPipelineBase
/// Size: 0x0000 (0x000108 - 0x000108)
class UInterchangePythonPipelineBase : public UInterchangePipelineBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:
};

/// Class /Script/InterchangeEngine.InterchangePythonPipelineAsset
/// Size: 0x0038 (0x000028 - 0x000060)
class UInterchangePythonPipelineAsset : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(TWeakObjectPtr<UClass*>)                   PythonClass                                                 OFFSET(get<T>, {0x28, 32, 0, 0})
	CMember(class UInterchangePythonPipelineBase*)     GeneratedPipeline                                           OFFSET(get<T>, {0x48, 8, 0, 0})
	SMember(FString)                                   JsonDefaultProperties                                       OFFSET(getStruct<T>, {0x50, 16, 0, 0})
};

/// Class /Script/InterchangeEngine.InterchangeSceneImportAsset
/// Size: 0x0008 (0x000028 - 0x000030)
class UInterchangeSceneImportAsset : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/InterchangeEngine.InterchangeAssetImportData
/// Size: 0x00A8 (0x000028 - 0x0000D0)
class UInterchangeAssetImportData : public UAssetImportData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	SMember(FSoftObjectPath)                           SceneImportAsset                                            OFFSET(getStruct<T>, {0x28, 24, 0, 0})
	SMember(FString)                                   NodeUniqueID                                                OFFSET(getStruct<T>, {0x40, 16, 0, 0})
	CMember(class UInterchangeBaseNodeContainer*)      NodeContainer                                               OFFSET(get<T>, {0x50, 8, 0, 0})
	CMember(TArray<class UObject*>)                    Pipelines                                                   OFFSET(get<T>, {0x58, 16, 0, 0})
	CMember(class UInterchangeBaseNodeContainer*)      TransientNodeContainer                                      OFFSET(get<T>, {0x68, 8, 0, 0})
	CMember(TArray<class UObject*>)                    TransientPipelines                                          OFFSET(get<T>, {0x70, 16, 0, 0})
	CMember(class UInterchangeTranslatorSettings*)     TransientTranslatorSettings                                 OFFSET(get<T>, {0x80, 8, 0, 0})


	/// Functions
	// Function /Script/InterchangeEngine.InterchangeAssetImportData.SetTranslatorSettings
	// void SetTranslatorSettings(class UInterchangeTranslatorSettings* TranslatorSettings);                                    // [0xd4ca508] Final|RequiredAPI|Native|Public|BlueprintCallable|Const 
	// Function /Script/InterchangeEngine.InterchangeAssetImportData.SetPipelines
	// void SetPipelines(TArray<UObject*>& InPipelines);                                                                        // [0xd4ca46c] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeEngine.InterchangeAssetImportData.SetNodeContainer
	// void SetNodeContainer(class UInterchangeBaseNodeContainer* InNodeContainer);                                             // [0xd4ca3ec] Final|RequiredAPI|Native|Public|BlueprintCallable|Const 
	// Function /Script/InterchangeEngine.InterchangeAssetImportData.ScriptGetFirstFilename
	// FString ScriptGetFirstFilename();                                                                                        // [0x6ca6eb4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeEngine.InterchangeAssetImportData.ScriptExtractFilenames
	// TArray<FString> ScriptExtractFilenames();                                                                                // [0x6970860] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeEngine.InterchangeAssetImportData.ScriptExtractDisplayLabels
	// TArray<FString> ScriptExtractDisplayLabels();                                                                            // [0x6970860] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeEngine.InterchangeAssetImportData.GetTranslatorSettings
	// class UInterchangeTranslatorSettings* GetTranslatorSettings();                                                           // [0xd4c7290] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeEngine.InterchangeAssetImportData.GetStoredNode
	// class UInterchangeBaseNode* GetStoredNode(FString InNodeUniqueId);                                                       // [0xd4c6b98] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeEngine.InterchangeAssetImportData.GetStoredFactoryNode
	// class UInterchangeFactoryBaseNode* GetStoredFactoryNode(FString InNodeUniqueId);                                         // [0xd4c64a0] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeEngine.InterchangeAssetImportData.GetPipelines
	// TArray<UObject*> GetPipelines();                                                                                         // [0xd4c63d0] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeEngine.InterchangeAssetImportData.GetNumberOfPipelines
	// int32_t GetNumberOfPipelines();                                                                                          // [0xd4c639c] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeEngine.InterchangeAssetImportData.GetNodeContainer
	// class UInterchangeBaseNodeContainer* GetNodeContainer();                                                                 // [0xd4c6378] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/InterchangeEngine.InterchangeAssetImportDataConverterBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UInterchangeAssetImportDataConverterBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/InterchangeEngine.InterchangePipelineStackOverride
/// Size: 0x0010 (0x000028 - 0x000038)
class UInterchangePipelineStackOverride : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<FSoftObjectPath>)                   OverridePipelines                                           OFFSET(get<T>, {0x28, 16, 0, 0})


	/// Functions
	// Function /Script/InterchangeEngine.InterchangePipelineStackOverride.AddPythonPipeline
	// void AddPythonPipeline(class UInterchangePythonPipelineBase* PipelineBase);                                              // [0xd4c5b9c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeEngine.InterchangePipelineStackOverride.AddPipeline
	// void AddPipeline(class UInterchangePipelineBase* PipelineBase);                                                          // [0xd4c5b9c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeEngine.InterchangePipelineStackOverride.AddBlueprintPipeline
	// void AddBlueprintPipeline(class UInterchangeBlueprintPipelineBase* PipelineBase);                                        // [0xd4c5b9c] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/InterchangeEngine.InterchangeManager
/// Size: 0x0328 (0x000028 - 0x000350)
class UInterchangeManager : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 848;

public:
	CMember(TSet<UClass*>)                             RegisteredTranslatorsClass                                  OFFSET(get<T>, {0x1A0, 80, 0, 0})
	CMember(TMap<UClass*, UClass*>)                    RegisteredFactoryClasses                                    OFFSET(get<T>, {0x1F0, 80, 0, 0})
	CMember(TMap<UClass*, UInterchangeWriterBase*>)    RegisteredWriters                                           OFFSET(get<T>, {0x240, 80, 0, 0})
	CMember(TMap<UClass*, UInterchangeAssetImportDataConverterBase*>) RegisteredConverters                         OFFSET(get<T>, {0x290, 80, 0, 0})


	/// Functions
	// Function /Script/InterchangeEngine.InterchangeManager.ImportScene
	// bool ImportScene(FString ContentPath, class UInterchangeSourceData* SourceData, FImportAssetParameters& ImportAssetParameters); // [0xd4c7aa0] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeEngine.InterchangeManager.ImportAsset
	// bool ImportAsset(FString ContentPath, class UInterchangeSourceData* SourceData, FImportAssetParameters& ImportAssetParameters); // [0xd4c72c8] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeEngine.InterchangeManager.GetRegisteredFactoryClass
	// class UClass* GetRegisteredFactoryClass(class UClass* ClassToMake);                                                      // [0xd4c6410] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeEngine.InterchangeManager.GetInterchangeManagerScripted
	// class UInterchangeManager* GetInterchangeManagerScripted();                                                              // [0xd4c6354] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/InterchangeEngine.InterchangeManager.ExportScene
	// bool ExportScene(class UObject* World, bool bIsAutomated);                                                               // [0xa7387c0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeEngine.InterchangeManager.ExportAsset
	// bool ExportAsset(class UObject* Asset, bool bIsAutomated);                                                               // [0xa7387c0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeEngine.InterchangeManager.CreateSourceData
	// class UInterchangeSourceData* CreateSourceData(FString InFilename);                                                      // [0xd4c5c7c] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/InterchangeEngine.InterchangeMeshUtilities
/// Size: 0x0000 (0x000028 - 0x000028)
class UInterchangeMeshUtilities : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Struct /Script/InterchangeEngine.InterchangeFilePickerParameters
/// Size: 0x0028 (0x000000 - 0x000028)
class FInterchangeFilePickerParameters : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(bool)                                      bAllowMultipleFiles                                         OFFSET(get<bool>, {0x0, 1, 0, 0})
	SMember(FText)                                     Title                                                       OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	SMember(FString)                                   DefaultPath                                                 OFFSET(getStruct<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/InterchangeEngine.InterchangeStackInfo
/// Size: 0x0018 (0x000000 - 0x000018)
class FInterchangeStackInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FName)                                     StackName                                                   OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(TArray<class UInterchangePipelineBase*>)   Pipelines                                                   OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/InterchangeEngine.InterchangeTranslatorPipelines
/// Size: 0x0030 (0x000000 - 0x000030)
class FInterchangeTranslatorPipelines : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(TWeakObjectPtr<UClass*>)                   Translator                                                  OFFSET(get<T>, {0x0, 32, 0, 0})
	CMember(TArray<FSoftObjectPath>)                   Pipelines                                                   OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/InterchangeEngine.InterchangePipelineStack
/// Size: 0x0020 (0x000000 - 0x000020)
class FInterchangePipelineStack : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(TArray<FSoftObjectPath>)                   Pipelines                                                   OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FInterchangeTranslatorPipelines>)   PerTranslatorPipelines                                      OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/InterchangeEngine.InterchangeImportSettings
/// Size: 0x0080 (0x000000 - 0x000080)
class FInterchangeImportSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(TMap<FName, FInterchangePipelineStack>)    PipelineStacks                                              OFFSET(get<T>, {0x0, 80, 0, 0})
	SMember(FName)                                     DefaultPipelineStack                                        OFFSET(getStruct<T>, {0x50, 4, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   ImportDialogClass                                           OFFSET(get<T>, {0x58, 32, 0, 0})
	DMember(bool)                                      bShowImportDialog                                           OFFSET(get<bool>, {0x78, 1, 0, 0})
};

/// Struct /Script/InterchangeEngine.InterchangePerTranslatorDialogOverride
/// Size: 0x0028 (0x000000 - 0x000028)
class FInterchangePerTranslatorDialogOverride : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(TWeakObjectPtr<UClass*>)                   Translator                                                  OFFSET(get<T>, {0x0, 32, 0, 0})
	DMember(bool)                                      bShowImportDialog                                           OFFSET(get<bool>, {0x20, 1, 0, 0})
};

/// Struct /Script/InterchangeEngine.InterchangeDialogOverride
/// Size: 0x0018 (0x000000 - 0x000018)
class FInterchangeDialogOverride : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(bool)                                      bShowImportDialog                                           OFFSET(get<bool>, {0x0, 1, 0, 0})
	CMember(TArray<FInterchangePerTranslatorDialogOverride>) PerTranslatorImportDialogOverride                     OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/InterchangeEngine.InterchangeContentImportSettings
/// Size: 0x00A0 (0x000080 - 0x000120)
class FInterchangeContentImportSettings : public FInterchangeImportSettings
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	CMember(TMap<EInterchangeTranslatorAssetType, FName>) DefaultPipelineStackOverride                             OFFSET(get<T>, {0x80, 80, 0, 0})
	CMember(TMap<EInterchangeTranslatorAssetType, FInterchangeDialogOverride>) ShowImportDialogOverride            OFFSET(get<T>, {0xD0, 80, 0, 0})
};

/// Struct /Script/InterchangeEngine.PropertyData
/// Size: 0x0018 (0x000000 - 0x000018)
class FPropertyData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/InterchangeEngine.ImportAssetParameters
/// Size: 0x00B8 (0x000000 - 0x0000B8)
class FImportAssetParameters : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	CMember(class UObject*)                            ReimportAsset                                               OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(int32_t)                                   ReimportSourceIndex                                         OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(bool)                                      bIsAutomated                                                OFFSET(get<bool>, {0xC, 1, 0, 0})
	DMember(bool)                                      bFollowRedirectors                                          OFFSET(get<bool>, {0xD, 1, 0, 0})
	CMember(TArray<FSoftObjectPath>)                   OverridePipelines                                           OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(class ULevel*)                             ImportLevel                                                 OFFSET(get<T>, {0x20, 8, 0, 0})
	SMember(FString)                                   DestinationName                                             OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	DMember(bool)                                      bReplaceExisting                                            OFFSET(get<bool>, {0x38, 1, 0, 0})
	SMember(FDelegateProperty)                         OnAssetDone                                                 OFFSET(getStruct<T>, {0x3C, 12, 0, 0})
	SMember(FDelegateProperty)                         OnAssetsImportDone                                          OFFSET(getStruct<T>, {0x58, 12, 0, 0})
	SMember(FDelegateProperty)                         OnSceneObjectDone                                           OFFSET(getStruct<T>, {0x78, 12, 0, 0})
	SMember(FDelegateProperty)                         OnSceneImportDone                                           OFFSET(getStruct<T>, {0x98, 12, 0, 0})
};

/// Enum /Script/InterchangeEngine.EInterchangePipelineConfigurationDialogResult
/// Size: 0x03
enum class EInterchangePipelineConfigurationDialogResult : uint8_t
{
	EInterchangePipelineConfigurationDialogResult__Cancel                            = 0,
	EInterchangePipelineConfigurationDialogResult__Import                            = 1,
	EInterchangePipelineConfigurationDialogResult__ImportAll                         = 2
};

