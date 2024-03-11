
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Enum /Script/ACLPlugin.ACLRotationFormat
/// Size: 0x04
enum class ACLRotationFormat : uint8_t
{
	ACLRF_Quat                                                                       = 0,
	ACLRF_QuatDropW                                                                  = 1,
	ACLRF_QuatDropW_Variable                                                         = 2,
	ACLRF_MAX                                                                        = 3
};

/// Enum /Script/ACLPlugin.ACLVectorFormat
/// Size: 0x03
enum class ACLVectorFormat : uint8_t
{
	ACLVF_Vector3                                                                    = 0,
	ACLVF_Vector3_Variable                                                           = 1,
	ACLVF_Vector3_MAX                                                                = 2
};

/// Enum /Script/ACLPlugin.ACLCompressionLevel
/// Size: 0x06
enum class ACLCompressionLevel : uint8_t
{
	ACLCL_Lowest                                                                     = 0,
	ACLCL_Low                                                                        = 1,
	ACLCL_Medium                                                                     = 2,
	ACLCL_High                                                                       = 3,
	ACLCL_Highest                                                                    = 4,
	ACLCL_MAX                                                                        = 5
};

/// Enum /Script/ACLPlugin.ACLVisualFidelity
/// Size: 0x04
enum class ACLVisualFidelity : uint8_t
{
	ACLVisualFidelity__Highest                                                       = 0,
	ACLVisualFidelity__Medium                                                        = 1,
	ACLVisualFidelity__Lowest                                                        = 2,
	ACLVisualFidelity__ACLVisualFidelity_MAX                                         = 3
};

/// Enum /Script/ACLPlugin.ACLVisualFidelityChangeResult
/// Size: 0x04
enum class ACLVisualFidelityChangeResult : uint8_t
{
	ACLVisualFidelityChangeResult__Dispatched                                        = 0,
	ACLVisualFidelityChangeResult__Completed                                         = 1,
	ACLVisualFidelityChangeResult__Failed                                            = 2,
	ACLVisualFidelityChangeResult__ACLVisualFidelityChangeResult_MAX                 = 3
};

/// Class /Script/ACLPlugin.AnimationCompressionLibraryDatabase
/// Size: 0x0100 (0x000028 - 0x000128)
class UAnimationCompressionLibraryDatabase : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	TArray<char>                                       CookedCompressedBytes;                                      // 0x0028   (0x0010)  
	TArray<uint64_t>                                   CookedAnimSequenceMappings;                                 // 0x0038   (0x0010)  
	unsigned char                                      UnknownData01_5[0xD8];                                      // 0x0048   (0x00D8)  MISSED
	uint32_t                                           MaxStreamRequestSizeKB;                                     // 0x0120   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0124   (0x0004)  MISSED


	/// Functions
	// Function /Script/ACLPlugin.AnimationCompressionLibraryDatabase.SetVisualFidelity
	// void SetVisualFidelity(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, class UAnimationCompressionLibraryDatabase* DatabaseAsset, ACLVisualFidelityChangeResult& Result, ACLVisualFidelity VisualFidelity); // [0xa82ce2c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ACLPlugin.AnimationCompressionLibraryDatabase.GetVisualFidelity
	// ACLVisualFidelity GetVisualFidelity(class UAnimationCompressionLibraryDatabase* DatabaseAsset);                       // [0xa82cdac] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/ACLPlugin.AnimBoneCompressionCodec_ACLBase
/// Size: 0x0000 (0x000038 - 0x000038)
class UAnimBoneCompressionCodec_ACLBase : public UAnimBoneCompressionCodec
{ 
public:
};

/// Class /Script/ACLPlugin.AnimBoneCompressionCodec_ACL
/// Size: 0x0000 (0x000038 - 0x000038)
class UAnimBoneCompressionCodec_ACL : public UAnimBoneCompressionCodec_ACLBase
{ 
public:
};

/// Class /Script/ACLPlugin.AnimBoneCompressionCodec_ACLCustom
/// Size: 0x0000 (0x000038 - 0x000038)
class UAnimBoneCompressionCodec_ACLCustom : public UAnimBoneCompressionCodec_ACLBase
{ 
public:
};

/// Class /Script/ACLPlugin.AnimBoneCompressionCodec_ACLDatabase
/// Size: 0x0008 (0x000038 - 0x000040)
class UAnimBoneCompressionCodec_ACLDatabase : public UAnimBoneCompressionCodec_ACLBase
{ 
public:
	class UAnimationCompressionLibraryDatabase*        DatabaseAsset;                                              // 0x0038   (0x0008)  
};

/// Class /Script/ACLPlugin.AnimBoneCompressionCodec_ACLSafe
/// Size: 0x0000 (0x000038 - 0x000038)
class UAnimBoneCompressionCodec_ACLSafe : public UAnimBoneCompressionCodec_ACLBase
{ 
public:
};

/// Class /Script/ACLPlugin.AnimCurveCompressionCodec_ACL
/// Size: 0x0000 (0x000028 - 0x000028)
class UAnimCurveCompressionCodec_ACL : public UAnimCurveCompressionCodec
{ 
public:
};

