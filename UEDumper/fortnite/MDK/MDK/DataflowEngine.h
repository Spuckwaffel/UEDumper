
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/DataflowEngine.DataflowBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UDataflowBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/DataflowEngine.DataflowBlueprintLibrary.EvaluateTerminalNodeByName
	// void EvaluateTerminalNodeByName(class UDataflow* Dataflow, FName TerminalNodeName, class UObject* ResultAsset);          // [0x6428488] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/DataflowEngine.DataflowContextObject
/// Size: 0x0020 (0x000028 - 0x000048)
class UDataflowContextObject : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Class /Script/DataflowEngine.DataflowBaseContent
/// Size: 0x0038 (0x000048 - 0x000080)
class UDataflowBaseContent : public UDataflowContextObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(class UDataflow*)                          DataflowAsset                                               OFFSET(get<T>, {0x48, 8, 0, 0})
	SMember(FString)                                   DataflowTerminal                                            OFFSET(getStruct<T>, {0x50, 16, 0, 0})
};

/// Class /Script/DataflowEngine.DataflowSkeletalContent
/// Size: 0x0028 (0x000080 - 0x0000A8)
class UDataflowSkeletalContent : public UDataflowBaseContent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	CMember(class USkeletalMesh*)                      SkeletalMesh                                                OFFSET(get<T>, {0x80, 8, 0, 0})
	CMember(class UAnimationAsset*)                    AnimationAsset                                              OFFSET(get<T>, {0x88, 8, 0, 0})
	CMember(class USkeleton*)                          Skeleton                                                    OFFSET(get<T>, {0x90, 8, 0, 0})
};

/// Class /Script/DataflowEngine.DataflowEdNode
/// Size: 0x0028 (0x000098 - 0x0000C0)
class UDataflowEdNode : public UEdGraphNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	DMember(bool)                                      bRenderInAssetEditor                                        OFFSET(get<bool>, {0xB8, 1, 0, 0})
};

/// Class /Script/DataflowEngine.Dataflow
/// Size: 0x0048 (0x000060 - 0x0000A8)
class UDataflow : public UEdGraph
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	DMember(bool)                                      bActive                                                     OFFSET(get<bool>, {0x88, 1, 0, 0})
	CMember(TArray<class UObject*>)                    Targets                                                     OFFSET(get<T>, {0x90, 16, 0, 0})
	CMember(class UMaterial*)                          Material                                                    OFFSET(get<T>, {0xA0, 8, 0, 0})
};

/// Struct /Script/DataflowEngine.StringValuePair
/// Size: 0x0020 (0x000000 - 0x000020)
class FStringValuePair : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FString)                                   Key                                                         OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   Value                                                       OFFSET(getStruct<T>, {0x10, 16, 0, 0})
};

