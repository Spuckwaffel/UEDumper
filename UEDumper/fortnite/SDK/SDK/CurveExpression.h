
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Enum /Script/CurveExpression.ERemapCurvesExpressionSource
/// Size: 0x04
enum class ERemapCurvesExpressionSource : uint8_t
{
	ERemapCurvesExpressionSource__ExpressionList                                     = 0,
	ERemapCurvesExpressionSource__DataAsset                                          = 1,
	ERemapCurvesExpressionSource__ExpressionMap                                      = 2,
	ERemapCurvesExpressionSource__ERemapCurvesExpressionSource_MAX                   = 3
};

/// Class /Script/CurveExpression.CurveExpressionsDataAsset
/// Size: 0x0020 (0x000030 - 0x000050)
class UCurveExpressionsDataAsset : public UDataAsset
{ 
public:
	TArray<FName>                                      NamedConstants;                                             // 0x0030   (0x0010)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0040   (0x0010)  MISSED
};

/// Struct /Script/CurveExpression.CurveExpressionList
/// Size: 0x0010 (0x000000 - 0x000010)
struct FCurveExpressionList
{ 
	SDK_UNDEFINED(16,12770) /* FString */              __um(AssignmentExpressions);                                // 0x0000   (0x0010)  
};

/// Struct /Script/CurveExpression.AnimNode_RemapCurvesBase
/// Size: 0x0100 (0x000010 - 0x000110)
struct FAnimNode_RemapCurvesBase : FAnimNode_Base
{ 
	FPoseLink                                          SourcePose;                                                 // 0x0010   (0x0010)  
	ERemapCurvesExpressionSource                       ExpressionSource;                                           // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0021   (0x0007)  MISSED
	FCurveExpressionList                               ExpressionList;                                             // 0x0028   (0x0010)  
	class UCurveExpressionsDataAsset*                  CurveExpressionsDataAsset;                                  // 0x0038   (0x0008)  
	SDK_UNDEFINED(80,12771) /* TMap<FName, FString> */ __um(CurveExpressions);                                     // 0x0040   (0x0050)  
	bool                                               bExpressionsImmutable;                                      // 0x0090   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0091   (0x0007)  MISSED
	TArray<FName>                                      CachedConstantNames;                                        // 0x0098   (0x0010)  
	unsigned char                                      UnknownData02_6[0x68];                                      // 0x00A8   (0x0068)  MISSED
};

/// Struct /Script/CurveExpression.AnimNode_RemapCurves
/// Size: 0x0000 (0x000110 - 0x000110)
struct FAnimNode_RemapCurves : FAnimNode_RemapCurvesBase
{ 
};

/// Struct /Script/CurveExpression.AnimNode_RemapCurvesFromMesh
/// Size: 0x0078 (0x000110 - 0x000188)
struct FAnimNode_RemapCurvesFromMesh : FAnimNode_RemapCurvesBase
{ 
	SDK_UNDEFINED(8,12772) /* TWeakObjectPtr<USkeletalMeshComponent*> */ __um(SourceMeshComponent);                // 0x0110   (0x0008)  
	bool                                               bUseAttachedParent;                                         // 0x0118   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6F];                                      // 0x0119   (0x006F)  MISSED
};

