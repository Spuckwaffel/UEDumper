
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject

/// Enum /Script/VerseNative.EVerseFalse
/// Size: 0x02
enum class EVerseFalse : uint8_t
{
	EVerseFalse__Value                                                               = 0,
	EVerseFalse__EVerseFalse_MAX                                                     = 1
};

/// Enum /Script/VerseNative.EVerseTrue
/// Size: 0x02
enum class EVerseTrue : uint8_t
{
	EVerseTrue__Value                                                                = 0,
	EVerseTrue__EVerseTrue_MAX                                                       = 1
};

/// Class /Script/VerseNative.VerseClassBase
/// Size: 0x0000 (0x000200 - 0x000200)
class UVerseClassBase : public UClass
{ 
public:
};

/// Class /Script/VerseNative.VersePersistentVarWeakMapKey
/// Size: 0x0000 (0x000028 - 0x000028)
class UVersePersistentVarWeakMapKey : public UObject
{ 
public:
};

/// Class /Script/VerseNative.VerseAsset
/// Size: 0x0008 (0x000028 - 0x000030)
class UVerseAsset : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	class UClass*                                      AssetClass;                                                 // 0x0028   (0x0008)  
};

/// Class /Script/VerseNative.VerseStmLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UVerseStmLibrary : public UObject
{ 
public:


	/// Functions
	// Function /Script/VerseNative.VerseStmLibrary.StmSave
	// void StmSave(FakeType& Property);                                                                                     // [0x7287b80] Final|Native|Static|Public|HasOutParms 
	// Function /Script/VerseNative.VerseStmLibrary.StmRollback
	// void StmRollback();                                                                                                   // [0x7287984] Final|Native|Static|Public 
	// Function /Script/VerseNative.VerseStmLibrary.StmLeaveFrame
	// void StmLeaveFrame();                                                                                                 // [0x7287970] Final|Native|Static|Public 
	// Function /Script/VerseNative.VerseStmLibrary.StmEnterFrame
	// void StmEnterFrame();                                                                                                 // [0x7287920] Final|Native|Static|Public 
	// Function /Script/VerseNative.VerseStmLibrary.StmEnabled
	// void StmEnabled();                                                                                                    // [0x728788c] Final|Native|Static|Public 
	// Function /Script/VerseNative.VerseStmLibrary.StmCommit
	// void StmCommit();                                                                                                     // [0x7287434] Final|Native|Static|Public 
	// Function /Script/VerseNative.VerseStmLibrary.StmBegin
	// void StmBegin();                                                                                                      // [0x7287420] Final|Native|Static|Public 
};

/// Struct /Script/VerseNative.VerseIntRange
/// Size: 0x0010 (0x000000 - 0x000010)
struct FVerseIntRange
{ 
	int64_t                                            Left;                                                       // 0x0000   (0x0008)  
	int64_t                                            Right;                                                      // 0x0008   (0x0008)  
};

/// Struct /Script/VerseNative.VerseRational
/// Size: 0x0010 (0x000000 - 0x000010)
struct FVerseRational
{ 
	int64_t                                            Numerator;                                                  // 0x0000   (0x0008)  
	int64_t                                            Denominator;                                                // 0x0008   (0x0008)  
};

/// Struct /Script/VerseNative.akeType
/// Size: 0x0001 (0x000000 - 0x000001)
struct FakeType
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

