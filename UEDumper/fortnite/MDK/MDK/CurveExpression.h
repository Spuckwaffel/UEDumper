
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/CurveExpression.CurveExpressionsDataAsset
/// Size: 0x0020 (0x000030 - 0x000050)
class UCurveExpressionsDataAsset : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TArray<FName>)                             NamedConstants                                              OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Struct /Script/CurveExpression.AnimNode_RemapCurvesBase
/// Size: 0x0100 (0x000010 - 0x000110)
class FAnimNode_RemapCurvesBase : public FAnimNode_Base
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
	SMember(FPoseLink)                                 SourcePose                                                  OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	CMember(ERemapCurvesExpressionSource)              ExpressionSource                                            OFFSET(get<T>, {0x20, 1, 0, 0})
	SMember(FCurveExpressionList)                      ExpressionList                                              OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	CMember(class UCurveExpressionsDataAsset*)         CurveExpressionsDataAsset                                   OFFSET(get<T>, {0x38, 8, 0, 0})
	CMember(TMap<FName, FString>)                      CurveExpressions                                            OFFSET(get<T>, {0x40, 80, 0, 0})
	DMember(bool)                                      bExpressionsImmutable                                       OFFSET(get<bool>, {0x90, 1, 0, 0})
	CMember(TArray<FName>)                             CachedConstantNames                                         OFFSET(get<T>, {0x98, 16, 0, 0})
};

/// Struct /Script/CurveExpression.CurveExpressionList
/// Size: 0x0010 (0x000000 - 0x000010)
class FCurveExpressionList : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FString)                                   AssignmentExpressions                                       OFFSET(getStruct<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/CurveExpression.AnimNode_RemapCurves
/// Size: 0x0000 (0x000110 - 0x000110)
class FAnimNode_RemapCurves : public FAnimNode_RemapCurvesBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
};

/// Struct /Script/CurveExpression.AnimNode_RemapCurvesFromMesh
/// Size: 0x0078 (0x000110 - 0x000188)
class FAnimNode_RemapCurvesFromMesh : public FAnimNode_RemapCurvesBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 392;

public:
	CMember(TWeakObjectPtr<USkeletalMeshComponent*>)   SourceMeshComponent                                         OFFSET(get<T>, {0x110, 8, 0, 0})
	DMember(bool)                                      bUseAttachedParent                                          OFFSET(get<bool>, {0x118, 1, 0, 0})
};

/// Enum /Script/CurveExpression.ERemapCurvesExpressionSource
/// Size: 0x03
enum class ERemapCurvesExpressionSource : uint8_t
{
	ERemapCurvesExpressionSource__ExpressionList                                     = 0,
	ERemapCurvesExpressionSource__DataAsset                                          = 1,
	ERemapCurvesExpressionSource__ExpressionMap                                      = 2
};

