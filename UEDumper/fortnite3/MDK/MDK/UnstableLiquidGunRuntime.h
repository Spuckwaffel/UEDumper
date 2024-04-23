
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: GameplayAbilities

/// Class /Script/UnstableLiquidGunRuntime.FortLiquidGunProjectile
/// Size: 0x0150 (0x000AB8 - 0x000C08)
class AFortLiquidGunProjectile : public AFortProjectileBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3080;

public:
	CMember(class USceneComponent*)                    AttachComponent                                             OFFSET(get<T>, {0xAB8, 8, 0, 0})
	SMember(FVector)                                   AttachOffset                                                OFFSET(getStruct<T>, {0xAC0, 24, 0, 0})
	DMember(int32_t)                                   ProjectileIndex                                             OFFSET(get<int32_t>, {0xAD8, 4, 0, 0})
	SMember(FVector)                                   StopNormal                                                  OFFSET(getStruct<T>, {0xAE0, 24, 0, 0})
	CMember(class ALiquidRibbonManager*)               RibbonManager                                               OFFSET(get<T>, {0xAF8, 8, 0, 0})
	SMember(FScalableFloat)                            MinDistBetweenProjectilesForSplineCollisionTest             OFFSET(getStruct<T>, {0xB00, 40, 0, 0})
	SMember(FScalableFloat)                            MinDistBetweenInLineProjectilesForSplineCollisionTest       OFFSET(getStruct<T>, {0xB28, 40, 0, 0})
	SMember(FScalableFloat)                            MinProjectileVelocityAngleToBeInLine                        OFFSET(getStruct<T>, {0xB50, 40, 0, 0})
	CMember(TEnumAsByte<ECollisionChannel>)            BroadSphereOverlapTraceChannel                              OFFSET(get<T>, {0xB78, 1, 0, 0})
	SMember(FName)                                     CapsuleTraceProfileName                                     OFFSET(getStruct<T>, {0xB7C, 4, 0, 0})
	DMember(bool)                                      bCapsuleTraceComplex                                        OFFSET(get<bool>, {0xB80, 1, 0, 0})
	SMember(FVector_NetQuantize)                       RandomDetachmentAngleFirstHalf                              OFFSET(getStruct<T>, {0xB88, 24, 0, 0})
	SMember(FVector_NetQuantize)                       RandomDetachmentAngleSecondHalf                             OFFSET(getStruct<T>, {0xBA0, 24, 0, 0})
	DMember(bool)                                      bDrawDebugCollision                                         OFFSET(get<bool>, {0xBB8, 1, 0, 0})
	DMember(bool)                                      bDrawDebugCollisionOnlyCapsuleTraceHits                     OFFSET(get<bool>, {0xBB9, 1, 0, 0})
	CMember(ELiquidRibbonDetachmentReason)             DetachmentReason                                            OFFSET(get<T>, {0xBBA, 1, 0, 0})


	/// Functions
	// Function /Script/UnstableLiquidGunRuntime.FortLiquidGunProjectile.SetDetachmentReason
	// void SetDetachmentReason(ELiquidRibbonDetachmentReason InDetachmentReason);                                              // [0xc97467c] Final|Native|Public|BlueprintCallable 
	// Function /Script/UnstableLiquidGunRuntime.FortLiquidGunProjectile.HandleSplineHit
	// void HandleSplineHit(FHitResult& Hit);                                                                                   // [0x1340978] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/UnstableLiquidGunRuntime.FortLiquidGunProjectile.GetDetachmentReason
	// ELiquidRibbonDetachmentReason GetDetachmentReason();                                                                     // [0xc9743f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/UnstableLiquidGunRuntime.LiquidRibbonManager
/// Size: 0x01B8 (0x000290 - 0x000448)
class ALiquidRibbonManager : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1096;

public:
	DMember(int32_t)                                   PointsPerSegment                                            OFFSET(get<int32_t>, {0x290, 4, 0, 0})
	SMember(FScalableFloat)                            MaxSegmentLengthBeforeBreak                                 OFFSET(getStruct<T>, {0x298, 40, 0, 0})
	DMember(float)                                     SplineCurveTension                                          OFFSET(get<float>, {0x2C0, 4, 0, 0})
	DMember(float)                                     MinPointSize                                                OFFSET(get<float>, {0x2C4, 4, 0, 0})
	DMember(float)                                     MaxPointSize                                                OFFSET(get<float>, {0x2C8, 4, 0, 0})
	DMember(int32_t)                                   NumPointsAtMinPointSize                                     OFFSET(get<int32_t>, {0x2CC, 4, 0, 0})
	DMember(int32_t)                                   NumPointsAtMaxPointSize                                     OFFSET(get<int32_t>, {0x2D0, 4, 0, 0})
	DMember(float)                                     SplineLengthForSizeCalculation                              OFFSET(get<float>, {0x2D4, 4, 0, 0})
	DMember(int32_t)                                   NumPointsToTaperDownSplineEndSize                           OFFSET(get<int32_t>, {0x2D8, 4, 0, 0})
	DMember(float)                                     MinSplineEndTaperSize                                       OFFSET(get<float>, {0x2DC, 4, 0, 0})
	DMember(float)                                     TaperSizeAtDetachment_RemapClosenessToBreakageOldMin        OFFSET(get<float>, {0x2E0, 4, 0, 0})
	DMember(float)                                     TaperSizeAtDetachment_RemapClosenessToBreakageOldMax        OFFSET(get<float>, {0x2E4, 4, 0, 0})
	DMember(float)                                     MinPointSizePercentForFlashIntensity                        OFFSET(get<float>, {0x2E8, 4, 0, 0})
	DMember(float)                                     MaxPointSizePercentForFlashIntensity                        OFFSET(get<float>, {0x2EC, 4, 0, 0})
	SMember(FName)                                     PositionsNiagaraParamName                                   OFFSET(getStruct<T>, {0x2F0, 4, 0, 0})
	SMember(FName)                                     RibbonIDsNiagaraParamName                                   OFFSET(getStruct<T>, {0x2F4, 4, 0, 0})
	SMember(FName)                                     RibbonVisibilitiesNiagaraParamName                          OFFSET(getStruct<T>, {0x2F8, 4, 0, 0})
	SMember(FName)                                     FlashIntensitiesNiagaraParamName                            OFFSET(getStruct<T>, {0x2FC, 4, 0, 0})
	SMember(FName)                                     RibbonSizesNiagaraParamName                                 OFFSET(getStruct<T>, {0x300, 4, 0, 0})
	SMember(FScalableFloat)                            CalculateBaseCurlOffset_MaxSegmentLength                    OFFSET(getStruct<T>, {0x308, 40, 0, 0})
	SMember(FScalableFloat)                            CalculateBaseCurlOffset_MaxTimeSinceDetachment              OFFSET(getStruct<T>, {0x330, 40, 0, 0})
	SMember(FScalableFloat)                            CalculateBaseCurlOffset_TowardPerpendicularMult             OFFSET(getStruct<T>, {0x358, 40, 0, 0})
	SMember(FScalableFloat)                            CalculateBaseCurlOffset_TowardEndMult                       OFFSET(getStruct<T>, {0x380, 40, 0, 0})
	SMember(FScalableFloat)                            CalculateBaseCurlOffset_TowardRandomMult                    OFFSET(getStruct<T>, {0x3A8, 40, 0, 0})
	CMember(class UCurveFloat*)                        TimeSinceDetachmentCurlCurve                                OFFSET(get<T>, {0x3D0, 8, 0, 0})
	SMember(FScalableFloat)                            TimeSinceDetachmentCurlCurve_MaxTime                        OFFSET(getStruct<T>, {0x3D8, 40, 0, 0})
	DMember(float)                                     CurlingMaxClosenessToBreakage                               OFFSET(get<float>, {0x400, 4, 0, 0})
	CMember(TArray<float>)                             SegmentLengths                                              OFFSET(get<T>, {0x408, 16, 0, 0})
	CMember(TArray<FLiquidRibbonSplineDetachment>)     Detachments                                                 OFFSET(get<T>, {0x418, 16, 0, 0})
	CMember(TArray<FLiquidRibbonSplineSegment>)        SplineSegments                                              OFFSET(get<T>, {0x428, 16, 0, 0})
	CMember(TArray<class AFortLiquidGunProjectile*>)   Projectiles_Native                                          OFFSET(get<T>, {0x438, 16, 0, 0})


	/// Functions
	// Function /Script/UnstableLiquidGunRuntime.LiquidRibbonManager.SetNiagaraData
	// void SetNiagaraData(class UNiagaraComponent* NiagaraComponent, TArray<FVector>& Positions, TArray<int32_t>& RibbonIDs, TArray<bool>& RibbonVisibilities, TArray<float>& FlashIntensities, TArray<int32_t>& RibbonSizes); // [0xc9746f8] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UnstableLiquidGunRuntime.LiquidRibbonManager.RunSplineCollisionTestOnProjectiles
	// void RunSplineCollisionTestOnProjectiles();                                                                              // [0xc974620] Final|Native|Public|BlueprintCallable 
	// Function /Script/UnstableLiquidGunRuntime.LiquidRibbonManager.GetPointOnSegment
	// FVector GetPointOnSegment(float T, FLiquidRibbonSplineSegment& Segment);                                                 // [0xc97450c] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UnstableLiquidGunRuntime.LiquidRibbonManager.GetOrAddDetachment
	// FLiquidRibbonSplineDetachment GetOrAddDetachment(int32_t RibbonID, FLiquidRibbonSplineSegment& Segment);                 // [0xc974408] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UnstableLiquidGunRuntime.LiquidRibbonManager.GetFirstVisiblePointIndex
	// int32_t GetFirstVisiblePointIndex();                                                                                     // [0x9ac6800] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/UnstableLiquidGunRuntime.LiquidRibbonManager.CalculateSplinePointsAndSetNiagaraData
	// void CalculateSplinePointsAndSetNiagaraData(TArray<AFortLiquidGunProjectile*>& Projectiles, bool bAttachSplineToMuzzle, class UNiagaraComponent* NiagaraComponent, TArray<FVector>& OutAllPositions, TArray<int32_t>& OutRibbonIDs, TArray<bool>& OutRibbonVisibilities, TArray<float>& OutFlashIntensities, TArray<int32_t>& OutRibbonSizes); // [0xc9738cc] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UnstableLiquidGunRuntime.LiquidRibbonManager.CalculateSegments
	// TArray<FLiquidRibbonSplineSegment> CalculateSegments(TArray<FVector>& Points, float Tension);                            // [0xc973700] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UnstableLiquidGunRuntime.LiquidRibbonManager.CalculatePointSize
	// float CalculatePointSize(int32_t SegmentIndex, int32_t PointIndex);                                                      // [0xc973644] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UnstableLiquidGunRuntime.LiquidRibbonManager.CalculatePointFlashIntensity
	// float CalculatePointFlashIntensity(int32_t PointSize);                                                                   // [0xc9735b4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/UnstableLiquidGunRuntime.LiquidRibbonSplineSegment
/// Size: 0x0078 (0x000000 - 0x000078)
class FLiquidRibbonSplineSegment : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	SMember(FVector)                                   A                                                           OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FVector)                                   B                                                           OFFSET(getStruct<T>, {0x18, 24, 0, 0})
	SMember(FVector)                                   C                                                           OFFSET(getStruct<T>, {0x30, 24, 0, 0})
	SMember(FVector)                                   D                                                           OFFSET(getStruct<T>, {0x48, 24, 0, 0})
	DMember(float)                                     DirectLength                                                OFFSET(get<float>, {0x60, 4, 0, 0})
	DMember(bool)                                      bHasDetachment                                              OFFSET(get<bool>, {0x64, 1, 0, 0})
	CMember(TArray<FVector>)                           PointPositions                                              OFFSET(get<T>, {0x68, 16, 0, 0})
};

/// Struct /Script/UnstableLiquidGunRuntime.LiquidRibbonSplineDetachment
/// Size: 0x00B8 (0x000000 - 0x0000B8)
class FLiquidRibbonSplineDetachment : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	DMember(int32_t)                                   FirstRibbonID                                               OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   SecondRibbonID                                              OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(float)                                     TimeDetached                                                OFFSET(get<float>, {0x8, 4, 0, 0})
	SMember(FLiquidRibbonSplineSegment)                Segment                                                     OFFSET(getStruct<T>, {0x10, 120, 0, 0})
	SMember(FVector)                                   SegmentStartPoint                                           OFFSET(getStruct<T>, {0x88, 24, 0, 0})
	SMember(FVector)                                   SegmentEndPoint                                             OFFSET(getStruct<T>, {0xA0, 24, 0, 0})
};

/// Enum /Script/UnstableLiquidGunRuntime.ELiquidRibbonDetachmentReason
/// Size: 0x04
enum class ELiquidRibbonDetachmentReason : uint8_t
{
	ELiquidRibbonDetachmentReason__NotDetached                                       = 0,
	ELiquidRibbonDetachmentReason__ByDistance                                        = 1,
	ELiquidRibbonDetachmentReason__ByAngle                                           = 2,
	ELiquidRibbonDetachmentReason__ELiquidRibbonDetachmentReason_MAX                 = 3
};

