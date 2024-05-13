
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/SkeletalMerging.SkeletalMergingLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class USkeletalMergingLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/SkeletalMerging.SkeletalMergingLibrary.MergeSkeletons
	// class USkeleton* MergeSkeletons(FSkeletonMergeParams& Params);                                                           // [0x77b7e74] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SkeletalMerging.SkeletalMergingLibrary.MergeMeshes
	// class USkeletalMesh* MergeMeshes(FSkeletalMeshMergeParams& Params);                                                      // [0x77b7dd8] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/SkeletalMerging.SkeletalMeshMergeParams
/// Size: 0x0040 (0x000000 - 0x000040)
class FSkeletalMeshMergeParams : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(TArray<FSkelMeshMergeSectionMapping>)      MeshSectionMappings                                         OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FSkelMeshMergeMeshUVTransforms>)    UVTransformsPerMesh                                         OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<class USkeletalMesh*>)              MeshesToMerge                                               OFFSET(get<T>, {0x20, 16, 0, 0})
	DMember(int32_t)                                   StripTopLODS                                                OFFSET(get<int32_t>, {0x30, 4, 0, 0})
	DMember(bool)                                      bNeedsCpuAccess                                             OFFSET(get<bool>, {0x34, 1, 1, 0})
	DMember(bool)                                      bSkeletonBefore                                             OFFSET(get<bool>, {0x34, 1, 1, 1})
	CMember(class USkeleton*)                          Skeleton                                                    OFFSET(get<T>, {0x38, 8, 0, 0})
};

/// Struct /Script/SkeletalMerging.SkeletonMergeParams
/// Size: 0x0018 (0x000000 - 0x000018)
class FSkeletonMergeParams : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(TArray<class USkeleton*>)                  SkeletonsToMerge                                            OFFSET(get<T>, {0x0, 16, 0, 0})
	DMember(bool)                                      bMergeSockets                                               OFFSET(get<bool>, {0x10, 1, 0, 0})
	DMember(bool)                                      bMergeVirtualBones                                          OFFSET(get<bool>, {0x11, 1, 0, 0})
	DMember(bool)                                      bMergeCurveNames                                            OFFSET(get<bool>, {0x12, 1, 0, 0})
	DMember(bool)                                      bMergeBlendProfiles                                         OFFSET(get<bool>, {0x13, 1, 0, 0})
	DMember(bool)                                      bMergeAnimSlotGroups                                        OFFSET(get<bool>, {0x14, 1, 0, 0})
	DMember(bool)                                      bCheckSkeletonsCompatibility                                OFFSET(get<bool>, {0x15, 1, 0, 0})
};

