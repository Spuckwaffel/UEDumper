
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/SkeletalMerging.SkeletalMergingLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class USkeletalMergingLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/SkeletalMerging.SkeletalMergingLibrary.MergeSkeletons
	// class USkeleton* MergeSkeletons(FSkeletonMergeParams& Params);                                                        // [0x72065a4] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SkeletalMerging.SkeletalMergingLibrary.MergeMeshes
	// class USkeletalMesh* MergeMeshes(FSkeletalMeshMergeParams& Params);                                                   // [0x7206508] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/SkeletalMerging.SkeletalMeshMergeParams
/// Size: 0x0040 (0x000000 - 0x000040)
struct FSkeletalMeshMergeParams
{ 
	TArray<FSkelMeshMergeSectionMapping>               MeshSectionMappings;                                        // 0x0000   (0x0010)  
	TArray<FSkelMeshMergeMeshUVTransforms>             UVTransformsPerMesh;                                        // 0x0010   (0x0010)  
	TArray<class USkeletalMesh*>                       MeshesToMerge;                                              // 0x0020   (0x0010)  
	int32_t                                            StripTopLODS;                                               // 0x0030   (0x0004)  
	bool                                               bNeedsCpuAccess : 1;                                        // 0x0034:0 (0x0001)  
	bool                                               bSkeletonBefore : 1;                                        // 0x0034:1 (0x0001)  
	unsigned char                                      UnknownData00_4[0x3];                                       // 0x0035   (0x0003)  MISSED
	class USkeleton*                                   Skeleton;                                                   // 0x0038   (0x0008)  
};

/// Struct /Script/SkeletalMerging.SkeletonMergeParams
/// Size: 0x0018 (0x000000 - 0x000018)
struct FSkeletonMergeParams
{ 
	TArray<class USkeleton*>                           SkeletonsToMerge;                                           // 0x0000   (0x0010)  
	bool                                               bMergeSockets;                                              // 0x0010   (0x0001)  
	bool                                               bMergeVirtualBones;                                         // 0x0011   (0x0001)  
	bool                                               bMergeCurveNames;                                           // 0x0012   (0x0001)  
	bool                                               bMergeBlendProfiles;                                        // 0x0013   (0x0001)  
	bool                                               bMergeAnimSlotGroups;                                       // 0x0014   (0x0001)  
	bool                                               bCheckSkeletonsCompatibility;                               // 0x0015   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0016   (0x0002)  MISSED
};

