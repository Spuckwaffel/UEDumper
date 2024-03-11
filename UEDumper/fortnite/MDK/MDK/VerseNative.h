
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject

/// Class /Script/VerseNative.VerseClassBase
/// Size: 0x0000 (0x000200 - 0x000200)
class UVerseClassBase : public UClass
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 512;

public:
};

/// Class /Script/VerseNative.VersePersistentVarWeakMapKey
/// Size: 0x0000 (0x000028 - 0x000028)
class UVersePersistentVarWeakMapKey : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/VerseNative.VerseAsset
/// Size: 0x0008 (0x000028 - 0x000030)
class UVerseAsset : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(class UClass*)                             AssetClass                                                  OFFSET(get<T>, {0x28, 8, 0, 0})
};

/// Class /Script/VerseNative.VerseStmLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UVerseStmLibrary : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/VerseNative.VerseStmLibrary.StmSave
	// void StmSave(FakeType& Property);                                                                                        // [0x7287b80] Final|Native|Static|Public|HasOutParms 
	// Function /Script/VerseNative.VerseStmLibrary.StmRollback
	// void StmRollback();                                                                                                      // [0x7287984] Final|Native|Static|Public 
	// Function /Script/VerseNative.VerseStmLibrary.StmLeaveFrame
	// void StmLeaveFrame();                                                                                                    // [0x7287970] Final|Native|Static|Public 
	// Function /Script/VerseNative.VerseStmLibrary.StmEnterFrame
	// void StmEnterFrame();                                                                                                    // [0x7287920] Final|Native|Static|Public 
	// Function /Script/VerseNative.VerseStmLibrary.StmEnabled
	// void StmEnabled();                                                                                                       // [0x728788c] Final|Native|Static|Public 
	// Function /Script/VerseNative.VerseStmLibrary.StmCommit
	// void StmCommit();                                                                                                        // [0x7287434] Final|Native|Static|Public 
	// Function /Script/VerseNative.VerseStmLibrary.StmBegin
	// void StmBegin();                                                                                                         // [0x7287420] Final|Native|Static|Public 
};

/// Struct /Script/VerseNative.VerseIntRange
/// Size: 0x0010 (0x000000 - 0x000010)
class FVerseIntRange : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(int64_t)                                   Left                                                        OFFSET(get<int64_t>, {0x0, 8, 0, 0})
	DMember(int64_t)                                   Right                                                       OFFSET(get<int64_t>, {0x8, 8, 0, 0})
};

/// Struct /Script/VerseNative.VerseRational
/// Size: 0x0010 (0x000000 - 0x000010)
class FVerseRational : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(int64_t)                                   Numerator                                                   OFFSET(get<int64_t>, {0x0, 8, 0, 0})
	DMember(int64_t)                                   Denominator                                                 OFFSET(get<int64_t>, {0x8, 8, 0, 0})
};

/// Struct /Script/VerseNative.akeType
/// Size: 0x0001 (0x000000 - 0x000001)
class FakeType : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

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

