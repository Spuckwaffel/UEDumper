
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/DataflowEngine.DataflowBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UDataflowBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/DataflowEngine.DataflowBlueprintLibrary.EvaluateTerminalNodeByName
	// void EvaluateTerminalNodeByName(class UDataflow* Dataflow, FName TerminalNodeName, class UObject* ResultAsset);       // [0x64855b8] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/DataflowEngine.DataflowContextObject
/// Size: 0x0020 (0x000028 - 0x000048)
class UDataflowContextObject : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x48];                                      // 0x0000   (0x0048)  MISSED
};

/// Class /Script/DataflowEngine.DataflowBaseContent
/// Size: 0x0038 (0x000048 - 0x000080)
class UDataflowBaseContent : public UDataflowContextObject
{ 
public:
	class UDataflow*                                   DataflowAsset;                                              // 0x0048   (0x0008)  
	SDK_UNDEFINED(16,2406) /* FString */               __um(DataflowTerminal);                                     // 0x0050   (0x0010)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x0060   (0x0020)  MISSED
};

/// Class /Script/DataflowEngine.DataflowSkeletalContent
/// Size: 0x0028 (0x000080 - 0x0000A8)
class UDataflowSkeletalContent : public UDataflowBaseContent
{ 
public:
	class USkeletalMesh*                               SkeletalMesh;                                               // 0x0080   (0x0008)  
	class UAnimationAsset*                             AnimationAsset;                                             // 0x0088   (0x0008)  
	class USkeleton*                                   Skeleton;                                                   // 0x0090   (0x0008)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0098   (0x0010)  MISSED
};

/// Class /Script/DataflowEngine.DataflowEdNode
/// Size: 0x0028 (0x000098 - 0x0000C0)
class UDataflowEdNode : public UEdGraphNode
{ 
public:
	unsigned char                                      UnknownData00_3[0x20];                                      // 0x0098   (0x0020)  MISSED
	bool                                               bRenderInAssetEditor;                                       // 0x00B8   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x00B9   (0x0007)  MISSED
};

/// Class /Script/DataflowEngine.Dataflow
/// Size: 0x0048 (0x000060 - 0x0000A8)
class UDataflow : public UEdGraph
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0060   (0x0028)  MISSED
	bool                                               bActive;                                                    // 0x0088   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0089   (0x0007)  MISSED
	TArray<class UObject*>                             Targets;                                                    // 0x0090   (0x0010)  
	class UMaterial*                                   Material;                                                   // 0x00A0   (0x0008)  
};

/// Struct /Script/DataflowEngine.StringValuePair
/// Size: 0x0020 (0x000000 - 0x000020)
struct FStringValuePair
{ 
	SDK_UNDEFINED(16,2407) /* FString */               __um(Key);                                                  // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,2408) /* FString */               __um(Value);                                                // 0x0010   (0x0010)  
};

