
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: GameplayAbilities

/// Enum /Script/UnstableLiquidGunRuntime.ELiquidRibbonDetachmentReason
/// Size: 0x04
enum class ELiquidRibbonDetachmentReason : uint8_t
{
	ELiquidRibbonDetachmentReason__NotDetached                                       = 0,
	ELiquidRibbonDetachmentReason__ByDistance                                        = 1,
	ELiquidRibbonDetachmentReason__ByAngle                                           = 2,
	ELiquidRibbonDetachmentReason__ELiquidRibbonDetachmentReason_MAX                 = 3
};

/// Class /Script/UnstableLiquidGunRuntime.FortLiquidGunProjectile
/// Size: 0x0150 (0x000AA0 - 0x000BF0)
class AFortLiquidGunProjectile : public AFortProjectileBase
{ 
public:
	class USceneComponent*                             AttachComponent;                                            // 0x0AA0   (0x0008)  
	FVector                                            AttachOffset;                                               // 0x0AA8   (0x0018)  
	int32_t                                            ProjectileIndex;                                            // 0x0AC0   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0AC4   (0x0004)  MISSED
	FVector                                            StopNormal;                                                 // 0x0AC8   (0x0018)  
	class ALiquidRibbonManager*                        RibbonManager;                                              // 0x0AE0   (0x0008)  
	FScalableFloat                                     MinDistBetweenProjectilesForSplineCollisionTest;            // 0x0AE8   (0x0028)  
	FScalableFloat                                     MinDistBetweenInLineProjectilesForSplineCollisionTest;      // 0x0B10   (0x0028)  
	FScalableFloat                                     MinProjectileVelocityAngleToBeInLine;                       // 0x0B38   (0x0028)  
	SDK_UNDEFINED(1,15720) /* TEnumAsByte<ECollisionChannel> */ __um(BroadSphereOverlapTraceChannel);              // 0x0B60   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0B61   (0x0003)  MISSED
	FName                                              CapsuleTraceProfileName;                                    // 0x0B64   (0x0004)  
	bool                                               bCapsuleTraceComplex;                                       // 0x0B68   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x0B69   (0x0007)  MISSED
	FVector_NetQuantize                                RandomDetachmentAngleFirstHalf;                             // 0x0B70   (0x0018)  
	FVector_NetQuantize                                RandomDetachmentAngleSecondHalf;                            // 0x0B88   (0x0018)  
	bool                                               bDrawDebugCollision;                                        // 0x0BA0   (0x0001)  
	bool                                               bDrawDebugCollisionOnlyCapsuleTraceHits;                    // 0x0BA1   (0x0001)  
	ELiquidRibbonDetachmentReason                      DetachmentReason;                                           // 0x0BA2   (0x0001)  
	unsigned char                                      UnknownData03_6[0x4D];                                      // 0x0BA3   (0x004D)  MISSED


	/// Functions
	// Function /Script/UnstableLiquidGunRuntime.FortLiquidGunProjectile.SetDetachmentReason
	// void SetDetachmentReason(ELiquidRibbonDetachmentReason InDetachmentReason);                                           // [0xacea068] Final|Native|Public|BlueprintCallable 
	// Function /Script/UnstableLiquidGunRuntime.FortLiquidGunProjectile.HandleSplineHit
	// void HandleSplineHit(FHitResult& Hit);                                                                                // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/UnstableLiquidGunRuntime.FortLiquidGunProjectile.GetDetachmentReason
	// ELiquidRibbonDetachmentReason GetDetachmentReason();                                                                  // [0xace9ddc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/UnstableLiquidGunRuntime.LiquidRibbonSplineSegment
/// Size: 0x0078 (0x000000 - 0x000078)
struct FLiquidRibbonSplineSegment
{ 
	FVector                                            A;                                                          // 0x0000   (0x0018)  
	FVector                                            B;                                                          // 0x0018   (0x0018)  
	FVector                                            C;                                                          // 0x0030   (0x0018)  
	FVector                                            D;                                                          // 0x0048   (0x0018)  
	float                                              DirectLength;                                               // 0x0060   (0x0004)  
	bool                                               bHasDetachment;                                             // 0x0064   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0065   (0x0003)  MISSED
	TArray<FVector>                                    PointPositions;                                             // 0x0068   (0x0010)  
};

/// Struct /Script/UnstableLiquidGunRuntime.LiquidRibbonSplineDetachment
/// Size: 0x00B8 (0x000000 - 0x0000B8)
struct FLiquidRibbonSplineDetachment
{ 
	int32_t                                            FirstRibbonID;                                              // 0x0000   (0x0004)  
	int32_t                                            SecondRibbonID;                                             // 0x0004   (0x0004)  
	float                                              TimeDetached;                                               // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	FLiquidRibbonSplineSegment                         Segment;                                                    // 0x0010   (0x0078)  
	FVector                                            SegmentStartPoint;                                          // 0x0088   (0x0018)  
	FVector                                            SegmentEndPoint;                                            // 0x00A0   (0x0018)  
};

/// Class /Script/UnstableLiquidGunRuntime.LiquidRibbonManager
/// Size: 0x01B8 (0x000290 - 0x000448)
class ALiquidRibbonManager : public AActor
{ 
public:
	int32_t                                            PointsPerSegment;                                           // 0x0290   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0294   (0x0004)  MISSED
	FScalableFloat                                     MaxSegmentLengthBeforeBreak;                                // 0x0298   (0x0028)  
	float                                              SplineCurveTension;                                         // 0x02C0   (0x0004)  
	float                                              MinPointSize;                                               // 0x02C4   (0x0004)  
	float                                              MaxPointSize;                                               // 0x02C8   (0x0004)  
	int32_t                                            NumPointsAtMinPointSize;                                    // 0x02CC   (0x0004)  
	int32_t                                            NumPointsAtMaxPointSize;                                    // 0x02D0   (0x0004)  
	float                                              SplineLengthForSizeCalculation;                             // 0x02D4   (0x0004)  
	int32_t                                            NumPointsToTaperDownSplineEndSize;                          // 0x02D8   (0x0004)  
	float                                              MinSplineEndTaperSize;                                      // 0x02DC   (0x0004)  
	float                                              TaperSizeAtDetachment_RemapClosenessToBreakageOldMin;       // 0x02E0   (0x0004)  
	float                                              TaperSizeAtDetachment_RemapClosenessToBreakageOldMax;       // 0x02E4   (0x0004)  
	float                                              MinPointSizePercentForFlashIntensity;                       // 0x02E8   (0x0004)  
	float                                              MaxPointSizePercentForFlashIntensity;                       // 0x02EC   (0x0004)  
	FName                                              PositionsNiagaraParamName;                                  // 0x02F0   (0x0004)  
	FName                                              RibbonIDsNiagaraParamName;                                  // 0x02F4   (0x0004)  
	FName                                              RibbonVisibilitiesNiagaraParamName;                         // 0x02F8   (0x0004)  
	FName                                              FlashIntensitiesNiagaraParamName;                           // 0x02FC   (0x0004)  
	FName                                              RibbonSizesNiagaraParamName;                                // 0x0300   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0304   (0x0004)  MISSED
	FScalableFloat                                     CalculateBaseCurlOffset_MaxSegmentLength;                   // 0x0308   (0x0028)  
	FScalableFloat                                     CalculateBaseCurlOffset_MaxTimeSinceDetachment;             // 0x0330   (0x0028)  
	FScalableFloat                                     CalculateBaseCurlOffset_TowardPerpendicularMult;            // 0x0358   (0x0028)  
	FScalableFloat                                     CalculateBaseCurlOffset_TowardEndMult;                      // 0x0380   (0x0028)  
	FScalableFloat                                     CalculateBaseCurlOffset_TowardRandomMult;                   // 0x03A8   (0x0028)  
	class UCurveFloat*                                 TimeSinceDetachmentCurlCurve;                               // 0x03D0   (0x0008)  
	FScalableFloat                                     TimeSinceDetachmentCurlCurve_MaxTime;                       // 0x03D8   (0x0028)  
	float                                              CurlingMaxClosenessToBreakage;                              // 0x0400   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x0404   (0x0004)  MISSED
	TArray<float>                                      SegmentLengths;                                             // 0x0408   (0x0010)  
	TArray<FLiquidRibbonSplineDetachment>              Detachments;                                                // 0x0418   (0x0010)  
	TArray<FLiquidRibbonSplineSegment>                 SplineSegments;                                             // 0x0428   (0x0010)  
	TArray<class AFortLiquidGunProjectile*>            Projectiles_Native;                                         // 0x0438   (0x0010)  


	/// Functions
	// Function /Script/UnstableLiquidGunRuntime.LiquidRibbonManager.SetNiagaraData
	// void SetNiagaraData(class UNiagaraComponent* NiagaraComponent, TArray<FVector>& Positions, TArray<int32_t>& RibbonIDs, TArray<bool>& RibbonVisibilities, TArray<float>& FlashIntensities, TArray<int32_t>& RibbonSizes); // [0xacea0e4] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UnstableLiquidGunRuntime.LiquidRibbonManager.RunSplineCollisionTestOnProjectiles
	// void RunSplineCollisionTestOnProjectiles();                                                                           // [0xacea00c] Final|Native|Public|BlueprintCallable 
	// Function /Script/UnstableLiquidGunRuntime.LiquidRibbonManager.GetPointOnSegment
	// FVector GetPointOnSegment(float T, FLiquidRibbonSplineSegment& Segment);                                              // [0xace9ef8] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UnstableLiquidGunRuntime.LiquidRibbonManager.GetOrAddDetachment
	// FLiquidRibbonSplineDetachment GetOrAddDetachment(int32_t RibbonID, FLiquidRibbonSplineSegment& Segment);              // [0xace9df4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UnstableLiquidGunRuntime.LiquidRibbonManager.GetFirstVisiblePointIndex
	// int32_t GetFirstVisiblePointIndex();                                                                                  // [0x8f9a6ac] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/UnstableLiquidGunRuntime.LiquidRibbonManager.CalculateSplinePointsAndSetNiagaraData
	// void CalculateSplinePointsAndSetNiagaraData(TArray<AFortLiquidGunProjectile*>& Projectiles, bool bAttachSplineToMuzzle, class UNiagaraComponent* NiagaraComponent, TArray<FVector>& OutAllPositions, TArray<int32_t>& OutRibbonIDs, TArray<bool>& OutRibbonVisibilities, TArray<float>& OutFlashIntensities, TArray<int32_t>& OutRibbonSizes); // [0xace9878] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UnstableLiquidGunRuntime.LiquidRibbonManager.CalculateSegments
	// TArray<FLiquidRibbonSplineSegment> CalculateSegments(TArray<FVector>& Points, float Tension);                         // [0xace96d4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UnstableLiquidGunRuntime.LiquidRibbonManager.CalculatePointSize
	// float CalculatePointSize(int32_t SegmentIndex, int32_t PointIndex);                                                   // [0xace9618] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UnstableLiquidGunRuntime.LiquidRibbonManager.CalculatePointFlashIntensity
	// float CalculatePointFlashIntensity(int32_t PointSize);                                                                // [0xace9588] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

