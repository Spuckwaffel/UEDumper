
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: AnimGraphRuntime
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteAI
/// dependency: FortniteGame
/// dependency: GameplayAbilities
/// dependency: GameplayTags
/// dependency: ModularGameplay

/// Class /Script/GrindRailRuntime.FortCameraModifier_Grinding
/// Size: 0x0978 (0x000048 - 0x0009C0)
class UFortCameraModifier_Grinding : public UCameraModifier
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2496;

public:
	SMember(FScalableFloat)                            bUseNativeCalculation                                       OFFSET(getStruct<T>, {0x48, 40, 0, 0})
	CMember(class UCurveFloat*)                        BlendInCurve                                                OFFSET(get<T>, {0x70, 8, 0, 0})
	CMember(class UCurveFloat*)                        BlendOutCurve                                               OFFSET(get<T>, {0x78, 8, 0, 0})
	SMember(FScalableFloat)                            SnapToGrindingLocation                                      OFFSET(getStruct<T>, {0x80, 40, 0, 0})
	SMember(FScalableFloat)                            ADSAlphaInterpSpeed                                         OFFSET(getStruct<T>, {0xA8, 40, 0, 0})
	SMember(FScalableFloat)                            CurrentForwardInterpSpeed                                   OFFSET(getStruct<T>, {0xD0, 40, 0, 0})
	SMember(FScalableFloat)                            MaxRightSpeedOldRangeForForward                             OFFSET(getStruct<T>, {0xF8, 40, 0, 0})
	SMember(FScalableFloat)                            MaxRightSpeedNewRangeForForward                             OFFSET(getStruct<T>, {0x120, 40, 0, 0})
	SMember(FScalableFloat)                            MinForwardSpeedOldRangeForForward                           OFFSET(getStruct<T>, {0x148, 40, 0, 0})
	SMember(FScalableFloat)                            MaxForwardSpeedOldRangeForForward                           OFFSET(getStruct<T>, {0x170, 40, 0, 0})
	SMember(FScalableFloat)                            MinForwardSpeedNewRangeForForward                           OFFSET(getStruct<T>, {0x198, 40, 0, 0})
	SMember(FScalableFloat)                            MaxForwardSpeedNewRangeForForward                           OFFSET(getStruct<T>, {0x1C0, 40, 0, 0})
	SMember(FScalableFloat)                            MinUpSpeedOldRangeForForward                                OFFSET(getStruct<T>, {0x1E8, 40, 0, 0})
	SMember(FScalableFloat)                            MaxUpSpeedOldRangeForForward                                OFFSET(getStruct<T>, {0x210, 40, 0, 0})
	SMember(FScalableFloat)                            MinUpSpeedNewRangeForForward                                OFFSET(getStruct<T>, {0x238, 40, 0, 0})
	SMember(FScalableFloat)                            MaxUpSpeedNewRangeForForward                                OFFSET(getStruct<T>, {0x260, 40, 0, 0})
	SMember(FScalableFloat)                            BaseForwardMultiplier                                       OFFSET(getStruct<T>, {0x288, 40, 0, 0})
	SMember(FScalableFloat)                            SpeedUpBoosterForwardMultiplier                             OFFSET(getStruct<T>, {0x2B0, 40, 0, 0})
	SMember(FScalableFloat)                            SprintingForwardMultiplier                                  OFFSET(getStruct<T>, {0x2D8, 40, 0, 0})
	SMember(FScalableFloat)                            RightSpeedOldRangeForRight                                  OFFSET(getStruct<T>, {0x300, 40, 0, 0})
	SMember(FScalableFloat)                            RightSpeedNewRangeForRight                                  OFFSET(getStruct<T>, {0x328, 40, 0, 0})
	SMember(FScalableFloat)                            MaxUpSpeedOldRangeForRight                                  OFFSET(getStruct<T>, {0x350, 40, 0, 0})
	SMember(FScalableFloat)                            MaxUpSpeedNewRangeForRight                                  OFFSET(getStruct<T>, {0x378, 40, 0, 0})
	SMember(FScalableFloat)                            MinForwardSpeedOldRangeForRight                             OFFSET(getStruct<T>, {0x3A0, 40, 0, 0})
	SMember(FScalableFloat)                            MaxForwardSpeedOldRangeForRight                             OFFSET(getStruct<T>, {0x3C8, 40, 0, 0})
	SMember(FScalableFloat)                            MinForwardSpeedNewRangeForRight                             OFFSET(getStruct<T>, {0x3F0, 40, 0, 0})
	SMember(FScalableFloat)                            MaxForwardSpeedNewRangeForRight                             OFFSET(getStruct<T>, {0x418, 40, 0, 0})
	SMember(FScalableFloat)                            BaseRightMultiplier                                         OFFSET(getStruct<T>, {0x440, 40, 0, 0})
	SMember(FScalableFloat)                            SpeedUpBoostRightMultiplier                                 OFFSET(getStruct<T>, {0x468, 40, 0, 0})
	SMember(FScalableFloat)                            SprintingRightMultiplier                                    OFFSET(getStruct<T>, {0x490, 40, 0, 0})
	SMember(FScalableFloat)                            CurrentRightInterpSpeed                                     OFFSET(getStruct<T>, {0x4B8, 40, 0, 0})
	SMember(FScalableFloat)                            UpSpeedOldRangeForUp                                        OFFSET(getStruct<T>, {0x4E0, 40, 0, 0})
	SMember(FScalableFloat)                            UpSpeedNewRangeForUp                                        OFFSET(getStruct<T>, {0x508, 40, 0, 0})
	SMember(FScalableFloat)                            CurrentUpInterpSpeed                                        OFFSET(getStruct<T>, {0x530, 40, 0, 0})
	SMember(FScalableFloat)                            BaseUpMultiplier                                            OFFSET(getStruct<T>, {0x558, 40, 0, 0})
	SMember(FScalableFloat)                            SpeedUpBoostUpMultiplier                                    OFFSET(getStruct<T>, {0x580, 40, 0, 0})
	SMember(FScalableFloat)                            SprintingUpMultiplier                                       OFFSET(getStruct<T>, {0x5A8, 40, 0, 0})
	SMember(FScalableFloat)                            MinForwardSpeedOldRangeForLean                              OFFSET(getStruct<T>, {0x5D0, 40, 0, 0})
	SMember(FScalableFloat)                            MaxForwardSpeedOldRangeForLean                              OFFSET(getStruct<T>, {0x5F8, 40, 0, 0})
	SMember(FScalableFloat)                            MinForwardSpeedNewRangeForLean                              OFFSET(getStruct<T>, {0x620, 40, 0, 0})
	SMember(FScalableFloat)                            MaxForwardSpeedNewRangeForLean                              OFFSET(getStruct<T>, {0x648, 40, 0, 0})
	SMember(FScalableFloat)                            MultiplierForMaxNewLeanRange                                OFFSET(getStruct<T>, {0x670, 40, 0, 0})
	SMember(FScalableFloat)                            CurrentLeanInterpSpeed                                      OFFSET(getStruct<T>, {0x698, 40, 0, 0})
	SMember(FScalableFloat)                            MaxSpeedOldRangeForFOV                                      OFFSET(getStruct<T>, {0x6C0, 40, 0, 0})
	SMember(FScalableFloat)                            MaxSpeedNewRangeForFOV                                      OFFSET(getStruct<T>, {0x6E8, 40, 0, 0})
	SMember(FScalableFloat)                            BaseFOV                                                     OFFSET(getStruct<T>, {0x710, 40, 0, 0})
	SMember(FScalableFloat)                            SpeedUpBoosterFOV                                           OFFSET(getStruct<T>, {0x738, 40, 0, 0})
	SMember(FScalableFloat)                            SprintingFOV                                                OFFSET(getStruct<T>, {0x760, 40, 0, 0})
	SMember(FScalableFloat)                            CurrentFOVInterpSpeed                                       OFFSET(getStruct<T>, {0x788, 40, 0, 0})
	SMember(FScalableFloat)                            DeltaDecreaseInZForOffset                                   OFFSET(getStruct<T>, {0x7B0, 40, 0, 0})
	SMember(FScalableFloat)                            CurrentOffsetInterpSpeed                                    OFFSET(getStruct<T>, {0x7D8, 40, 0, 0})
	SMember(FScalableFloat)                            StraightnessMultiplierForOffset                             OFFSET(getStruct<T>, {0x800, 40, 0, 0})
	SMember(FScalableFloat)                            FinalOffsetForwardDelta                                     OFFSET(getStruct<T>, {0x828, 40, 0, 0})
	SMember(FScalableFloat)                            FinalOffsetUpDelta                                          OFFSET(getStruct<T>, {0x850, 40, 0, 0})
	SMember(FScalableFloat)                            FinalOffsetRightDelta                                       OFFSET(getStruct<T>, {0x878, 40, 0, 0})
	DMember(bool)                                      bCachedUseNativeCalculation                                 OFFSET(get<bool>, {0x8F0, 1, 0, 0})
};

/// Class /Script/GrindRailRuntime.FortGrindRail
/// Size: 0x02C0 (0x000980 - 0x000C40)
class AFortGrindRail : public ABuildingGameplayActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3136;

public:
	SMember(FScalableFloat)                            SpeedHardCap                                                OFFSET(getStruct<T>, {0x980, 40, 0, 0})
	SMember(FScalableFloat)                            BaseMaxSpeed                                                OFFSET(getStruct<T>, {0x9A8, 40, 0, 0})
	SMember(FScalableFloat)                            MaxSpeedIncreaseFromDownwardSlope                           OFFSET(getStruct<T>, {0x9D0, 40, 0, 0})
	SMember(FScalableFloat)                            MaxBaseAcceleration                                         OFFSET(getStruct<T>, {0x9F8, 40, 0, 0})
	SMember(FScalableFloat)                            MinBaseAcceleration                                         OFFSET(getStruct<T>, {0xA20, 40, 0, 0})
	SMember(FScalableFloat)                            MaxStartSpeed                                               OFFSET(getStruct<T>, {0xA48, 40, 0, 0})
	SMember(FScalableFloat)                            MinStartSpeed                                               OFFSET(getStruct<T>, {0xA70, 40, 0, 0})
	SMember(FScalableFloat)                            SprintingAcceleration                                       OFFSET(getStruct<T>, {0xA98, 40, 0, 0})
	SMember(FScalableFloat)                            SprintingMaxSpeed                                           OFFSET(getStruct<T>, {0xAC0, 40, 0, 0})
	CMember(TArray<class USplineMeshComponent*>)       GrindRailMeshes                                             OFFSET(get<T>, {0xAE8, 16, 0, 0})
	CMember(TArray<FGrindRailBoosterInfo>)             BoosterInfos                                                OFFSET(get<T>, {0xAF8, 16, 0, 0})
	CMember(class USplineComponent*)                   SplineComponent                                             OFFSET(get<T>, {0xB08, 8, 0, 0})
	SMember(FScalableFloat)                            EnableBoosters                                              OFFSET(getStruct<T>, {0xB10, 40, 0, 0})
	SMember(FScalableFloat)                            EnableGrinding                                              OFFSET(getStruct<T>, {0xB38, 40, 0, 0})
	SMember(FScalableFloat)                            EnableProjectileCollision                                   OFFSET(getStruct<T>, {0xB60, 40, 0, 0})
	SMember(FScalableFloat)                            EnableMeshCollision                                         OFFSET(getStruct<T>, {0xB88, 40, 0, 0})
	SMember(FScalableFloat)                            EnableWeaponBulletCollision                                 OFFSET(getStruct<T>, {0xBB0, 40, 0, 0})
	DMember(bool)                                      bSimulateSplineGravity                                      OFFSET(get<bool>, {0xBD8, 1, 0, 0})
	DMember(float)                                     SimulatedSplineGravityAcceleration                          OFFSET(get<float>, {0xBDC, 4, 0, 0})
	DMember(float)                                     TargetDistanceBetweenSplinePointsForGravitySimulation       OFFSET(get<float>, {0xBE0, 4, 0, 0})
	DMember(int32_t)                                   SplineGravitySimulationIterationCount                       OFFSET(get<int32_t>, {0xBE4, 4, 0, 0})
	DMember(float)                                     SplineGravitySimulationTime                                 OFFSET(get<float>, {0xBE8, 4, 0, 0})
	DMember(bool)                                      bDisableBooster                                             OFFSET(get<bool>, {0xBEC, 1, 0, 0})
	CMember(TWeakObjectPtr<AFortGrindRail*>)           HeadConnectedRail                                           OFFSET(get<T>, {0xC00, 32, 0, 0})
	CMember(TWeakObjectPtr<AFortGrindRail*>)           TailConnectedRail                                           OFFSET(get<T>, {0xC20, 32, 0, 0})


	/// Functions
	// Function /Script/GrindRailRuntime.FortGrindRail.UpdateTransientComponentTransforms
	// void UpdateTransientComponentTransforms(TArray<USceneComponent*> TransientSceneComponents);                              // [0xb623644] Final|Native|Protected|BlueprintCallable 
	// Function /Script/GrindRailRuntime.FortGrindRail.ShouldApplyFallDamageImmunity
	// bool ShouldApplyFallDamageImmunity();                                                                                    // [0x2fe830c] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/GrindRailRuntime.FortGrindRail.SetupMeshInfo
	// void SetupMeshInfo(class USplineMeshComponent* SplineMeshComponent);                                                     // [0xb623544] Final|Native|Public|BlueprintCallable 
	// Function /Script/GrindRailRuntime.FortGrindRail.OnRep_TailConnectedRail
	// void OnRep_TailConnectedRail();                                                                                          // [0xb623530] Final|Native|Protected 
	// Function /Script/GrindRailRuntime.FortGrindRail.OnRep_HeadConnectedRail
	// void OnRep_HeadConnectedRail();                                                                                          // [0xb623530] Final|Native|Protected 
	// Function /Script/GrindRailRuntime.FortGrindRail.OnRep_DisableBooster
	// void OnRep_DisableBooster();                                                                                             // [0x3bf63a0] Final|Native|Protected 
	// Function /Script/GrindRailRuntime.FortGrindRail.OnPlaylistDataReady
	// void OnPlaylistDataReady(class AFortGameStateAthena* GameState, class UFortPlaylist* Playlist, FGameplayTagContainer& PlaylistContextTags); // [0x36cf4d4] Final|Native|Protected|HasOutParms 
	// Function /Script/GrindRailRuntime.FortGrindRail.OnPlayerEndedGrinding
	// void OnPlayerEndedGrinding(class AFortPlayerPawn* Pawn);                                                                 // [0x186becc] Event|Public|BlueprintEvent 
	// Function /Script/GrindRailRuntime.FortGrindRail.OnPlayerBeganGrinding
	// void OnPlayerBeganGrinding(class AFortPlayerPawn* GrindingPawn);                                                         // [0x186becc] Event|Public|BlueprintEvent 
	// Function /Script/GrindRailRuntime.FortGrindRail.NativeGetNextPositionToGrind
	// void NativeGetNextPositionToGrind(float DistanceToTravel, float CurrentDistanceAlongSpline, float RightLeanValue, FVector& OutNextLocation, bool& bGotToEnd, float& NextLocationOnRail, EGrindRailBoosterMode& BoosterMode, bool& bHitObstacle, bool& bNewRail, float& DistanceAlongNewRail, class AFortGrindRail*& TheNewRail, bool& bNewRailReverseDirection); // [0xb622db4] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GrindRailRuntime.FortGrindRail.IsTipCapped
	// bool IsTipCapped(bool bStartTip);                                                                                        // [0x186becc] Event|Public|BlueprintEvent 
	// Function /Script/GrindRailRuntime.FortGrindRail.IsGrindRailEnabled
	// bool IsGrindRailEnabled();                                                                                               // [0x32247e0] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/GrindRailRuntime.FortGrindRail.HasTailConnection
	// bool HasTailConnection();                                                                                                // [0xb622d90] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GrindRailRuntime.FortGrindRail.HasHeadConnection
	// bool HasHeadConnection();                                                                                                // [0xb622d6c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GrindRailRuntime.FortGrindRail.GetSpeedSettingsOverride
	// bool GetSpeedSettingsOverride(FGrindRailSpeedSettings& SpeedSettingsOverride);                                           // [0xb622a84] Native|Event|Public|HasOutParms|BlueprintEvent|Const 
	// Function /Script/GrindRailRuntime.FortGrindRail.GenerateMeshesAlongSpline
	// void GenerateMeshesAlongSpline();                                                                                        // [0x186becc] Event|Public|BlueprintEvent 
	// Function /Script/GrindRailRuntime.FortGrindRail.ForceClearBoosters
	// void ForceClearBoosters();                                                                                               // [0x186becc] Event|Protected|BlueprintEvent 
	// Function /Script/GrindRailRuntime.FortGrindRail.ConnectToRailAtTailUnchecked
	// void ConnectToRailAtTailUnchecked(class AFortGrindRail* RailToConnectTo);                                                // [0xb621e28] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GrindRailRuntime.FortGrindRail.BPRerunConstructionScript
	// void BPRerunConstructionScript();                                                                                        // [0x3518b8c] Final|Native|Public|BlueprintCallable 
	// Function /Script/GrindRailRuntime.FortGrindRail.AllowSprinting
	// bool AllowSprinting();                                                                                                   // [0x32247e0] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
};

/// Class /Script/GrindRailRuntime.FortGrindRailConnector
/// Size: 0x0000 (0x000980 - 0x000980)
class AFortGrindRailConnector : public ABuildingGameplayActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2432;

public:
};

/// Class /Script/GrindRailRuntime.FortGrindRailLayerAnimInstance
/// Size: 0x02E0 (0x000470 - 0x000750)
class UFortGrindRailLayerAnimInstance : public UFortBaseLayerAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1872;

public:
	CMember(class UAnimMontage*)                       LancePickaxeMontage                                         OFFSET(get<T>, {0x468, 8, 0, 0})
	CMember(class UAnimMontage*)                       ScythePickaxeMontage                                        OFFSET(get<T>, {0x470, 8, 0, 0})
	CMember(class UAnimMontage*)                       FruitCakePickaxeMontage                                     OFFSET(get<T>, {0x478, 8, 0, 0})
	SMember(FName)                                     LeanAlphaCurve                                              OFFSET(getStruct<T>, {0x480, 4, 0, 0})
	SMember(FName)                                     MeleeTwistCurve                                             OFFSET(getStruct<T>, {0x484, 4, 0, 0})
	SMember(FName)                                     InterruptibleCurve                                          OFFSET(getStruct<T>, {0x488, 4, 0, 0})
	CMember(TMap<FName, float>)                        SlopeWarpingCurveMap                                        OFFSET(get<T>, {0x490, 80, 0, 0})
	DMember(double)                                    LeanBwdVelocityThreshold                                    OFFSET(get<double>, {0x4E0, 8, 0, 0})
	SMember(FCachedAnimRelevancyData)                  BwdStartCachedData                                          OFFSET(getStruct<T>, {0x4E8, 20, 0, 0})
	DMember(double)                                    IsMovingThresholdSpeed                                      OFFSET(get<double>, {0x500, 8, 0, 0})
	DMember(double)                                    NoisePlayRateSprintSpeedThreshold                           OFFSET(get<double>, {0x508, 8, 0, 0})
	SMember(FVector2D)                                 NoisePlayRateNormalSpeedInputRange                          OFFSET(getStruct<T>, {0x510, 16, 0, 0})
	SMember(FVector2D)                                 NoisePlayRateNormalSpeedOutputRange                         OFFSET(getStruct<T>, {0x520, 16, 0, 0})
	SMember(FVector2D)                                 NoisePlayRateHighSpeedInputRange                            OFFSET(getStruct<T>, {0x530, 16, 0, 0})
	SMember(FVector2D)                                 NoisePlayRateHighSpeedOutputRange                           OFFSET(getStruct<T>, {0x540, 16, 0, 0})
	SMember(FVector2D)                                 CombatNoisePlayRateSpeedInputRange                          OFFSET(getStruct<T>, {0x550, 16, 0, 0})
	SMember(FVector2D)                                 CombatNoisePlayRateSpeedOutputRange                         OFFSET(getStruct<T>, {0x560, 16, 0, 0})
	DMember(double)                                    CombatNoiseAlphaTargeting                                   OFFSET(get<double>, {0x570, 8, 0, 0})
	DMember(double)                                    CombatNoiseAlphaNonTargeting                                OFFSET(get<double>, {0x578, 8, 0, 0})
	DMember(double)                                    RootLeanAlphaInterpSpeed                                    OFFSET(get<double>, {0x580, 8, 0, 0})
	DMember(double)                                    SlopeWarpAlphaInterpSpeed                                   OFFSET(get<double>, {0x588, 8, 0, 0})
	DMember(double)                                    SplineRelativeAimYawDeltaThreshold                          OFFSET(get<double>, {0x590, 8, 0, 0})
	DMember(double)                                    AimYawSmoothInterpolationCoefficient                        OFFSET(get<double>, {0x598, 8, 0, 0})
	DMember(double)                                    IsSmoothingYawThreshold                                     OFFSET(get<double>, {0x5A0, 8, 0, 0})
	DMember(double)                                    LeanBWDThreshold                                            OFFSET(get<double>, {0x5A8, 8, 0, 0})
	DMember(double)                                    MuteUpperBodyAlphaMeleeWeapon                               OFFSET(get<double>, {0x5B0, 8, 0, 0})
	DMember(double)                                    MuteUpperBodyAlphaNonMeleeWeapon                            OFFSET(get<double>, {0x5B8, 8, 0, 0})
	DMember(double)                                    MuteUpperBodyAlphaFruitcakePickaxe                          OFFSET(get<double>, {0x5C0, 8, 0, 0})
	DMember(double)                                    MuteUpperBodyAlphaLanceSyctheOrDualWeild                    OFFSET(get<double>, {0x5C8, 8, 0, 0})
	DMember(double)                                    BaseLeanDirection                                           OFFSET(get<double>, {0x5D0, 8, 0, 0})
	DMember(bool)                                      bIsGrinding                                                 OFFSET(get<bool>, {0x5D8, 1, 0, 0})
	DMember(double)                                    CurrentSpeed                                                OFFSET(get<double>, {0x5E0, 8, 0, 0})
	DMember(double)                                    LeanDirection                                               OFFSET(get<double>, {0x5E8, 8, 0, 0})
	DMember(bool)                                      bSprinting                                                  OFFSET(get<bool>, {0x5F0, 1, 0, 0})
	DMember(double)                                    LeanForward                                                 OFFSET(get<double>, {0x5F8, 8, 0, 0})
	DMember(bool)                                      bIsWeaponActive                                             OFFSET(get<bool>, {0x600, 1, 0, 0})
	SMember(FRotator)                                  SplineRelativeAim                                           OFFSET(getStruct<T>, {0x608, 24, 0, 0})
	SMember(FFortAnimInput_GrindRail)                  GrindRailInput                                              OFFSET(getStruct<T>, {0x620, 24, 0, 0})
	CMember(TWeakObjectPtr<UFortPawnComponent_GrindingProvider*>) GrindingProvider                                 OFFSET(get<T>, {0x638, 8, 0, 0})
	CMember(TWeakObjectPtr<UCharacterMovementComponent*>) MovementComponent                                        OFFSET(get<T>, {0x640, 8, 0, 0})
	CMember(TWeakObjectPtr<AFortPlayerPawn*>)          FortPlayerPawn                                              OFFSET(get<T>, {0x648, 8, 0, 0})
	DMember(bool)                                      bIsFalling                                                  OFFSET(get<bool>, {0x650, 1, 0, 0})
	DMember(double)                                    LeanAlpha                                                   OFFSET(get<double>, {0x658, 8, 0, 0})
	DMember(bool)                                      bIsMoving                                                   OFFSET(get<bool>, {0x660, 1, 0, 0})
	DMember(bool)                                      bShould180Turn                                              OFFSET(get<bool>, {0x661, 1, 0, 0})
	DMember(bool)                                      bShouldPlayEntry                                            OFFSET(get<bool>, {0x662, 1, 0, 0})
	DMember(double)                                    NoisePlayRate                                               OFFSET(get<double>, {0x668, 8, 0, 0})
	DMember(bool)                                      bIsLeanBwd                                                  OFFSET(get<bool>, {0x670, 1, 0, 0})
	DMember(bool)                                      bIsLeft180Turn                                              OFFSET(get<bool>, {0x671, 1, 0, 0})
	DMember(bool)                                      bShould180TurnAgain                                         OFFSET(get<bool>, {0x672, 1, 0, 0})
	DMember(bool)                                      bIsTurning                                                  OFFSET(get<bool>, {0x673, 1, 0, 0})
	DMember(bool)                                      bShouldExitLocomotion                                       OFFSET(get<bool>, {0x674, 1, 0, 0})
	DMember(bool)                                      bIsBoosting                                                 OFFSET(get<bool>, {0x675, 1, 0, 0})
	DMember(bool)                                      bEarlyExitFromEntry                                         OFFSET(get<bool>, {0x676, 1, 0, 0})
	DMember(bool)                                      bAimFWD                                                     OFFSET(get<bool>, {0x677, 1, 0, 0})
	DMember(bool)                                      bAimBWD                                                     OFFSET(get<bool>, {0x678, 1, 0, 0})
	DMember(bool)                                      bAimLFT                                                     OFFSET(get<bool>, {0x679, 1, 0, 0})
	DMember(bool)                                      bAimRGT                                                     OFFSET(get<bool>, {0x67A, 1, 0, 0})
	DMember(double)                                    AimFWDDeltaAngleDegrees                                     OFFSET(get<double>, {0x680, 8, 0, 0})
	DMember(double)                                    AimBWDDeltaAngleDegrees                                     OFFSET(get<double>, {0x688, 8, 0, 0})
	DMember(double)                                    AimLFTDeltaAngleDegrees                                     OFFSET(get<double>, {0x690, 8, 0, 0})
	DMember(double)                                    AimRGTDeltaAngleDegrees                                     OFFSET(get<double>, {0x698, 8, 0, 0})
	DMember(double)                                    NegativeYaw                                                 OFFSET(get<double>, {0x6A0, 8, 0, 0})
	SMember(FRotator)                                  MeleeTwistRot                                               OFFSET(getStruct<T>, {0x6A8, 24, 0, 0})
	DMember(double)                                    BwdStartCachedTime                                          OFFSET(get<double>, {0x6C0, 8, 0, 0})
	DMember(double)                                    Velocity                                                    OFFSET(get<double>, {0x6C8, 8, 0, 0})
	DMember(bool)                                      bIsEntryLeft                                                OFFSET(get<bool>, {0x6D0, 1, 0, 0})
	DMember(bool)                                      bIsEntryFromAir                                             OFFSET(get<bool>, {0x6D1, 1, 0, 0})
	DMember(bool)                                      bIsEntryRight                                               OFFSET(get<bool>, {0x6D2, 1, 0, 0})
	DMember(bool)                                      bEnteredFromInteraction                                     OFFSET(get<bool>, {0x6D3, 1, 0, 0})
	DMember(double)                                    SlopeWarpAlpha                                              OFFSET(get<double>, {0x6D8, 8, 0, 0})
	DMember(double)                                    SplineRelativeAimYaw                                        OFFSET(get<double>, {0x6E0, 8, 0, 0})
	DMember(double)                                    AimYawSmoothed                                              OFFSET(get<double>, {0x6E8, 8, 0, 0})
	DMember(bool)                                      bIsSmoothingYaw                                             OFFSET(get<bool>, {0x6F0, 1, 0, 0})
	DMember(double)                                    LastSplineRelativeAimYaw                                    OFFSET(get<double>, {0x6F8, 8, 0, 0})
	DMember(double)                                    RootLeanAlpha                                               OFFSET(get<double>, {0x700, 8, 0, 0})
	DMember(double)                                    MuteUpperBodyAlpha                                          OFFSET(get<double>, {0x708, 8, 0, 0})
	DMember(bool)                                      bIsLanceType                                                OFFSET(get<bool>, {0x710, 1, 0, 0})
	DMember(bool)                                      bWasSprinting                                               OFFSET(get<bool>, {0x711, 1, 0, 0})
	DMember(bool)                                      bStateRuleToBoostLoop                                       OFFSET(get<bool>, {0x712, 1, 0, 0})
	DMember(bool)                                      bIsInAction                                                 OFFSET(get<bool>, {0x713, 1, 0, 0})
	DMember(double)                                    CombatNoisePlayRate                                         OFFSET(get<double>, {0x718, 8, 0, 0})
	DMember(double)                                    CombatNoiseAlpha                                            OFFSET(get<double>, {0x720, 8, 0, 0})
	DMember(bool)                                      bIsTwoHandedMelee                                           OFFSET(get<bool>, {0x728, 1, 0, 0})
	DMember(bool)                                      bShouldCorrectUpperBody                                     OFFSET(get<bool>, {0x729, 1, 0, 0})
	DMember(bool)                                      bBothHandsDown                                              OFFSET(get<bool>, {0x72A, 1, 0, 0})
	DMember(double)                                    TurnInPlaceAnimCurveValue                                   OFFSET(get<double>, {0x730, 8, 0, 0})
	DMember(double)                                    TurnRotationAmountCurveValue                                OFFSET(get<double>, {0x738, 8, 0, 0})


	/// Functions
	// Function /Script/GrindRailRuntime.FortGrindRailLayerAnimInstance.HandleBegunGrinding
	// void HandleBegunGrinding(bool bWasAlreadyGrinding, bool bWasJumpingFromRail, bool bFromInteraction, FVector PreviousPlayerLocation); // [0xb622b0c] Final|Native|Public|HasDefaults 
	// Function /Script/GrindRailRuntime.FortGrindRailLayerAnimInstance.AnimNotify_IdleEnter
	// void AnimNotify_IdleEnter(class UAnimNotify* Notify);                                                                    // [0xb621cc0] Final|Native|Public  
	// Function /Script/GrindRailRuntime.FortGrindRailLayerAnimInstance.AnimNotify_EntryExit
	// void AnimNotify_EntryExit(class UAnimNotify* Notify);                                                                    // [0xb621d74] Final|Native|Public  
	// Function /Script/GrindRailRuntime.FortGrindRailLayerAnimInstance.AnimNotify_EntryEnter
	// void AnimNotify_EntryEnter(class UAnimNotify* Notify);                                                                   // [0xb621cc0] Final|Native|Public  
};

/// Class /Script/GrindRailRuntime.FortMovementMode_ExtLogicGrinding
/// Size: 0x0C20 (0x000120 - 0x000D40)
class UFortMovementMode_ExtLogicGrinding : public UFortMovementMode_BaseExtLogic
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3392;

public:
	CMember(TWeakObjectPtr<UFortPawnComponent_GrindingProvider*>) GrindingProvider                                 OFFSET(get<T>, {0x130, 8, 0, 0})
	CMember(class UClass*)                             GrindCameraModifierClass                                    OFFSET(get<T>, {0x138, 8, 0, 0})
	CMember(class UClass*)                             GrindingAnimLayer                                           OFFSET(get<T>, {0x140, 8, 0, 0})
	SMember(FGameplayTag)                              StartGrindingGameplayEvent                                  OFFSET(getStruct<T>, {0x148, 4, 0, 0})
	SMember(FGameplayTag)                              StopGrindingGameplayEvent                                   OFFSET(getStruct<T>, {0x14C, 4, 0, 0})
	SMember(FGameplayTag)                              VehicleLaunchImmuneTag                                      OFFSET(getStruct<T>, {0x150, 4, 0, 0})
	SMember(FScalableFloat)                            ShouldDropHeldObject                                        OFFSET(getStruct<T>, {0x158, 40, 0, 0})
	SMember(FGameplayTag)                              BuildingTagImmuneToDamage                                   OFFSET(getStruct<T>, {0x180, 4, 0, 0})
	SMember(FScalableFloat)                            BaseMaxLeanAngularSpeed                                     OFFSET(getStruct<T>, {0x188, 40, 0, 0})
	SMember(FScalableFloat)                            BaseLeanInterpSpeed                                         OFFSET(getStruct<T>, {0x1B0, 40, 0, 0})
	CMember(TWeakObjectPtr<UFortComponent_Energy*>)    TacticalSprintEnergyComponent                               OFFSET(get<T>, {0x1D8, 8, 0, 0})
	SMember(FGameplayTagContainer)                     TacticalSprintTooLowEnergyTag                               OFFSET(getStruct<T>, {0x1E0, 32, 0, 0})
	SMember(FScalableFloat)                            JumpDistanceMultiplier                                      OFFSET(getStruct<T>, {0x200, 40, 0, 0})
	SMember(FScalableFloat)                            SameRailAnchoring_MaxForwardDistanceMultiplier              OFFSET(getStruct<T>, {0x228, 40, 0, 0})
	SMember(FScalableFloat)                            NoAnchorJumpDistanceMultiplier                              OFFSET(getStruct<T>, {0x250, 40, 0, 0})
	SMember(FScalableFloat)                            SameRailAnchoring_MaxAngle                                  OFFSET(getStruct<T>, {0x278, 40, 0, 0})
	SMember(FScalableFloat)                            MinJumpOffSpeed                                             OFFSET(getStruct<T>, {0x2A0, 40, 0, 0})
	SMember(FScalableFloat)                            JumpHeight                                                  OFFSET(getStruct<T>, {0x2C8, 40, 0, 0})
	SMember(FScalableFloat)                            InfluenceOfMomentumOnAnchorJump                             OFFSET(getStruct<T>, {0x2F0, 40, 0, 0})
	SMember(FScalableFloat)                            SprintUsePerSecond                                          OFFSET(getStruct<T>, {0x318, 40, 0, 0})
	SMember(FScalableFloat)                            SprintUsePerSecond_Creative                                 OFFSET(getStruct<T>, {0x340, 40, 0, 0})
	SMember(FGameplayTag)                              SprintUseEnergyTag                                          OFFSET(getStruct<T>, {0x368, 4, 0, 0})
	SMember(FGameplayTag)                              SprintStartedGameplayEvent                                  OFFSET(getStruct<T>, {0x36C, 4, 0, 0})
	SMember(FScalableFloat)                            MaxAllowedInclineSplinePitch                                OFFSET(getStruct<T>, {0x370, 40, 0, 0})
	SMember(FScalableFloat)                            MaxAllowedDeclineSplinePitch                                OFFSET(getStruct<T>, {0x398, 40, 0, 0})
	SMember(FScalableFloat)                            MaxAllowedShootingSplinePitch                               OFFSET(getStruct<T>, {0x3C0, 40, 0, 0})
	SMember(FScalableFloat)                            TurnAngleThreshold                                          OFFSET(getStruct<T>, {0x3E8, 40, 0, 0})
	SMember(FScalableFloat)                            AnimatedTurnDuration                                        OFFSET(getStruct<T>, {0x410, 40, 0, 0})
	SMember(FScalableFloat)                            BaseGrindRailYawRotationInterpSpeed                         OFFSET(getStruct<T>, {0x438, 40, 0, 0})
	SMember(FScalableFloat)                            InclineGrindRailPitchRotationInterpSpeed                    OFFSET(getStruct<T>, {0x460, 40, 0, 0})
	SMember(FScalableFloat)                            DeclineGrindRailPitchRotationInterpSpeed                    OFFSET(getStruct<T>, {0x488, 40, 0, 0})
	SMember(FScalableFloat)                            ShootingGrindRailRotationInterpSpeed                        OFFSET(getStruct<T>, {0x4B0, 40, 0, 0})
	SMember(FScalableFloat)                            NextGrindRailDetectionOffset                                OFFSET(getStruct<T>, {0x4D8, 40, 0, 0})
	SMember(FGameplayTag)                              CancelGrindingTag                                           OFFSET(getStruct<T>, {0x500, 4, 0, 0})
	SMember(FScalableFloat)                            MinTimeBeforeJumpSinceEntry                                 OFFSET(getStruct<T>, {0x508, 40, 0, 0})
	SMember(FScalableFloat)                            CancelSprintLeanBackThreshold                               OFFSET(getStruct<T>, {0x530, 40, 0, 0})
	SMember(FScalableFloat)                            WeaponHolsterCooldown                                       OFFSET(getStruct<T>, {0x558, 40, 0, 0})
	SMember(FScalableFloat)                            WeaponIsShootingCooldown                                    OFFSET(getStruct<T>, {0x580, 40, 0, 0})
	SMember(FScalableFloat)                            GravityForceWhenGoingDown                                   OFFSET(getStruct<T>, {0x5A8, 40, 0, 0})
	SMember(FScalableFloat)                            GravityForceWhenGoingUp                                     OFFSET(getStruct<T>, {0x5D0, 40, 0, 0})
	SMember(FScalableFloat)                            BoosterSprintingAccelerationOnSlowDownBooster               OFFSET(getStruct<T>, {0x5F8, 40, 0, 0})
	SMember(FScalableFloat)                            BoosterAccelerationOnSpeedUpBooster                         OFFSET(getStruct<T>, {0x620, 40, 0, 0})
	SMember(FScalableFloat)                            BoosterSlowDownBoosterDragMultiplier                        OFFSET(getStruct<T>, {0x648, 40, 0, 0})
	SMember(FScalableFloat)                            BoosterSlowDownBoosterGoalSpeed                             OFFSET(getStruct<T>, {0x670, 40, 0, 0})
	SMember(FScalableFloat)                            BoosterMaxSpeed                                             OFFSET(getStruct<T>, {0x698, 40, 0, 0})
	SMember(FScalableFloat)                            ShootingMaxSpeedMultiplier                                  OFFSET(getStruct<T>, {0x6C0, 40, 0, 0})
	SMember(FScalableFloat)                            AngleForMaxSpeedIncreaseFromDownwardSlope                   OFFSET(getStruct<T>, {0x6E8, 40, 0, 0})
	SMember(FScalableFloat)                            MaxSpeedIncreaseFromDownwardSlope                           OFFSET(getStruct<T>, {0x710, 40, 0, 0})
	SMember(FScalableFloat)                            MaxDragForSpeedSoftCap                                      OFFSET(getStruct<T>, {0x738, 40, 0, 0})
	SMember(FScalableFloat)                            SpeedHardCap                                                OFFSET(getStruct<T>, {0x760, 40, 0, 0})
	SMember(FScalableFloat)                            SprintingAcceleration                                       OFFSET(getStruct<T>, {0x788, 40, 0, 0})
	SMember(FScalableFloat)                            SprintingMaxSpeed                                           OFFSET(getStruct<T>, {0x7B0, 40, 0, 0})
	SMember(FScalableFloat)                            SpeedThresholdForTurn                                       OFFSET(getStruct<T>, {0x7D8, 40, 0, 0})
	SMember(FScalableFloat)                            TimeToTurnAround                                            OFFSET(getStruct<T>, {0x800, 40, 0, 0})
	SMember(FScalableFloat)                            SpeedForMaxLeanAcceleration                                 OFFSET(getStruct<T>, {0x828, 40, 0, 0})
	SMember(FScalableFloat)                            SpeedForMinLeanAcceleration                                 OFFSET(getStruct<T>, {0x850, 40, 0, 0})
	SMember(FScalableFloat)                            MaxLeanAcceleration                                         OFFSET(getStruct<T>, {0x878, 40, 0, 0})
	SMember(FScalableFloat)                            MinLeanAcceleration                                         OFFSET(getStruct<T>, {0x8A0, 40, 0, 0})
	SMember(FScalableFloat)                            CanAccelerateByLeaningIntoTurns                             OFFSET(getStruct<T>, {0x8C8, 40, 0, 0})
	SMember(FScalableFloat)                            CurvatureForMaxLeanIntoTurnsAcceleration                    OFFSET(getStruct<T>, {0x8F0, 40, 0, 0})
	SMember(FScalableFloat)                            LeanIntoTurnsMaxAcceleration                                OFFSET(getStruct<T>, {0x918, 40, 0, 0})
	SMember(FScalableFloat)                            IncreasedMaxSpeedFromLeanIntoTurn                           OFFSET(getStruct<T>, {0x940, 40, 0, 0})
	SMember(FScalableFloat)                            SidewaysLeanBoostReductionRate                              OFFSET(getStruct<T>, {0x968, 40, 0, 0})
	SMember(FScalableFloat)                            SpeedForMaxBaseAcceleration                                 OFFSET(getStruct<T>, {0x990, 40, 0, 0})
	SMember(FScalableFloat)                            SpeedForMinBaseAcceleration                                 OFFSET(getStruct<T>, {0x9B8, 40, 0, 0})
	SMember(FScalableFloat)                            MaxBaseAcceleration                                         OFFSET(getStruct<T>, {0x9E0, 40, 0, 0})
	SMember(FScalableFloat)                            MinBaseAcceleration                                         OFFSET(getStruct<T>, {0xA08, 40, 0, 0})
	SMember(FScalableFloat)                            BaseGoalSpeed                                               OFFSET(getStruct<T>, {0xA30, 40, 0, 0})
	SMember(FScalableFloat)                            BaseMaxSpeed                                                OFFSET(getStruct<T>, {0xA58, 40, 0, 0})
	SMember(FScalableFloat)                            EnableFriction                                              OFFSET(getStruct<T>, {0xA80, 40, 0, 0})
	SMember(FScalableFloat)                            BaseGoalDecelerationSpeed                                   OFFSET(getStruct<T>, {0xAA8, 40, 0, 0})
	SMember(FScalableFloat)                            FrictionWhenNotLeaning                                      OFFSET(getStruct<T>, {0xAD0, 40, 0, 0})
	SMember(FScalableFloat)                            SpeedMultiplierOnHitRailCap                                 OFFSET(getStruct<T>, {0xAF8, 40, 0, 0})
	SMember(FScalableFloat)                            MinSpeedAfterBouncedOffRailCap                              OFFSET(getStruct<T>, {0xB20, 40, 0, 0})
	SMember(FScalableFloat)                            SpeedMultiplierWhenImpactedPlayer                           OFFSET(getStruct<T>, {0xB48, 40, 0, 0})
	SMember(FScalableFloat)                            SpeedMinBouncePlayer                                        OFFSET(getStruct<T>, {0xB70, 40, 0, 0})


	/// Functions
	// Function /Script/GrindRailRuntime.FortMovementMode_ExtLogicGrinding.RemoveGrindRailInitiatedEffects
	// void RemoveGrindRailInitiatedEffects(class AFortGrindRail* GrindRail);                                                   // [0x186becc] Event|Protected|BlueprintEvent 
	// Function /Script/GrindRailRuntime.FortMovementMode_ExtLogicGrinding.OnIgnoredBuildingEndPlay
	// void OnIgnoredBuildingEndPlay(class AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason);                           // [0xb6233f0] Final|Native|Protected 
	// Function /Script/GrindRailRuntime.FortMovementMode_ExtLogicGrinding.IsThrowableItem
	// bool IsThrowableItem(class ABuildingActor* BuildingActor);                                                               // [0x186becc] Event|Protected|BlueprintEvent 
	// Function /Script/GrindRailRuntime.FortMovementMode_ExtLogicGrinding.IsDamageableDevice
	// bool IsDamageableDevice(class ABuildingActor* BuildingActor);                                                            // [0x186becc] Event|Protected|BlueprintEvent 
	// Function /Script/GrindRailRuntime.FortMovementMode_ExtLogicGrinding.HandleGrindingEnded
	// void HandleGrindingEnded();                                                                                              // [0x186becc] Event|Protected|BlueprintEvent 
	// Function /Script/GrindRailRuntime.FortMovementMode_ExtLogicGrinding.HandleGrindingBegun
	// void HandleGrindingBegun(class AFortGrindRail* GrindRail);                                                               // [0x186becc] Event|Protected|BlueprintEvent 
	// Function /Script/GrindRailRuntime.FortMovementMode_ExtLogicGrinding.HandleGameplayEffectsOnVehicleHit
	// void HandleGameplayEffectsOnVehicleHit(class AFortAthenaVehicle* AthenaVehicle);                                         // [0x186becc] Event|Protected|BlueprintEvent 
	// Function /Script/GrindRailRuntime.FortMovementMode_ExtLogicGrinding.HandleGameplayCuesOnSprinting
	// void HandleGameplayCuesOnSprinting(class AFortGrindRail* GrindRail, bool bWantsToGrindSprint);                           // [0x186becc] Event|Protected|BlueprintEvent 
	// Function /Script/GrindRailRuntime.FortMovementMode_ExtLogicGrinding.HandleGameplayCuesOnRailJump
	// void HandleGameplayCuesOnRailJump(bool bIsAnchorJumpActive);                                                             // [0x186becc] Event|Protected|BlueprintEvent 
	// Function /Script/GrindRailRuntime.FortMovementMode_ExtLogicGrinding.HandleGameplayCuesOnHit
	// void HandleGameplayCuesOnHit(class AFortGrindRail* GrindRail);                                                           // [0x186becc] Event|Protected|BlueprintEvent 
	// Function /Script/GrindRailRuntime.FortMovementMode_ExtLogicGrinding.HandleGameplayCuesOnFeetLanding
	// void HandleGameplayCuesOnFeetLanding(class AFortGrindRail* GrindRail);                                                   // [0x186becc] Event|Protected|BlueprintEvent 
	// Function /Script/GrindRailRuntime.FortMovementMode_ExtLogicGrinding.HandleGameplayCuesOnBoosterModeChange
	// void HandleGameplayCuesOnBoosterModeChange(class AFortGrindRail* GrindRail, EGrindRailBoosterMode OldBoosterMode, EGrindRailBoosterMode NewBoosterMode); // [0x186becc] Event|Protected|BlueprintEvent 
	// Function /Script/GrindRailRuntime.FortMovementMode_ExtLogicGrinding.HandleFallDamageImmunityOnGrindingEnd
	// void HandleFallDamageImmunityOnGrindingEnd(bool bShouldApplyFallDamageImmunityOnEnd);                                    // [0x186becc] Event|Protected|BlueprintEvent 
	// Function /Script/GrindRailRuntime.FortMovementMode_ExtLogicGrinding.GetGrindInAirGameplayEffectClass
	// class UClass* GetGrindInAirGameplayEffectClass(class AFortGrindRail* GrindRail);                                         // [0x186becc] Event|Protected|BlueprintEvent 
	// Function /Script/GrindRailRuntime.FortMovementMode_ExtLogicGrinding.GameplayTagCallback_StartDashMME
	// void GameplayTagCallback_StartDashMME(FGameplayTag tag, int32_t NewCount);                                               // [0xb622948] Final|Native|Private|Const 
	// Function /Script/GrindRailRuntime.FortMovementMode_ExtLogicGrinding.GameplayTagCallback_CancelGrinding
	// void GameplayTagCallback_CancelGrinding(FGameplayTag tag, int32_t NewCount);                                             // [0xb62280c] Final|Native|Private|Const 
	// Function /Script/GrindRailRuntime.FortMovementMode_ExtLogicGrinding.GameplayTagCallback_BlockSprintingAndHolstering
	// void GameplayTagCallback_BlockSprintingAndHolstering(FGameplayTag tag, int32_t NewCount);                                // [0xb622698] Final|Native|Private 
	// Function /Script/GrindRailRuntime.FortMovementMode_ExtLogicGrinding.GameplayTagCallback_BlockSprinting
	// void GameplayTagCallback_BlockSprinting(FGameplayTag tag, int32_t NewCount);                                             // [0xb622534] Final|Native|Private 
	// Function /Script/GrindRailRuntime.FortMovementMode_ExtLogicGrinding.EventCallback_OnTeleport
	// void EventCallback_OnTeleport(class AFortPawn* TeleportedPawn);                                                          // [0xb622474] Final|Native|Private 
	// Function /Script/GrindRailRuntime.FortMovementMode_ExtLogicGrinding.EventCallback_OnSprintInputPressed
	// void EventCallback_OnSprintInputPressed(bool bPressed);                                                                  // [0xb6223b0] Final|Native|Private 
	// Function /Script/GrindRailRuntime.FortMovementMode_ExtLogicGrinding.EventCallback_OnReloadInput
	// void EventCallback_OnReloadInput();                                                                                      // [0xb62239c] Final|Native|Private 
	// Function /Script/GrindRailRuntime.FortMovementMode_ExtLogicGrinding.EventCallback_OnPawnLanded
	// void EventCallback_OnPawnLanded(FHitResult& Hit);                                                                        // [0xb6222c4] Final|Native|Private|HasOutParms 
	// Function /Script/GrindRailRuntime.FortMovementMode_ExtLogicGrinding.EventCallback_OnJumpInput
	// void EventCallback_OnJumpInput(bool bPressed);                                                                           // [0xb622200] Final|Native|Private 
	// Function /Script/GrindRailRuntime.FortMovementMode_ExtLogicGrinding.EventCallback_OnGrindLostStructuralSupport
	// void EventCallback_OnGrindLostStructuralSupport();                                                                       // [0xb6221ec] Final|Native|Private 
	// Function /Script/GrindRailRuntime.FortMovementMode_ExtLogicGrinding.EventCallback_OnFeetLanded
	// void EventCallback_OnFeetLanded();                                                                                       // [0xb6221d8] Final|Native|Private 
	// Function /Script/GrindRailRuntime.FortMovementMode_ExtLogicGrinding.EventCallback_OnEnergyCompletelyDrained
	// void EventCallback_OnEnergyCompletelyDrained(class UFortComponent_Energy* EnergyComponentDrained);                       // [0xb622118] Final|Native|Private 
	// Function /Script/GrindRailRuntime.FortMovementMode_ExtLogicGrinding.EventCallback_OnDismountPlayerRequested
	// void EventCallback_OnDismountPlayerRequested();                                                                          // [0xb622104] Final|Native|Private 
	// Function /Script/GrindRailRuntime.FortMovementMode_ExtLogicGrinding.EventCallback_OnBaseMeshReady
	// void EventCallback_OnBaseMeshReady(class AFortPlayerPawn* Pawn, class USkeletalMeshComponent* MeshComponent);            // [0xb621fc4] Final|Native|Private 
	// Function /Script/GrindRailRuntime.FortMovementMode_ExtLogicGrinding.EventCallback_OnApplyDamageToDevice
	// void EventCallback_OnApplyDamageToDevice(class ABuildingActor* BuildingActor);                                           // [0xb621f04] Final|Native|Private 
	// Function /Script/GrindRailRuntime.FortMovementMode_ExtLogicGrinding.DrawDebugHUD
	// void DrawDebugHUD(class AHUD* HUD, class UCanvas* Canvas);                                                               // [0x6d6d7fc] Final|Native|Protected|Const 
	// Function /Script/GrindRailRuntime.FortMovementMode_ExtLogicGrinding.ApplyDamageToDevice
	// void ApplyDamageToDevice(class ABuildingActor* BuildingActor);                                                           // [0x186becc] Event|Protected|BlueprintEvent 
	// Function /Script/GrindRailRuntime.FortMovementMode_ExtLogicGrinding.AddTemporaryMoveIgnoreActor
	// void AddTemporaryMoveIgnoreActor(class ABuildingActor* BuildingActor, float IgnoreDuration);                             // [0xb621b80] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/GrindRailRuntime.FortPawnComponent_GrindingProvider
/// Size: 0x0228 (0x0000A8 - 0x0002D0)
class UFortPawnComponent_GrindingProvider : public UFortPawnComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 720;

public:
	SMember(FMulticastInlineDelegate)                  GrindRailChangedDelegate                                    OFFSET(getStruct<T>, {0xB0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  FeetLandedDelegate                                          OFFSET(getStruct<T>, {0xC0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  BegunGrindingDelegate                                       OFFSET(getStruct<T>, {0xD0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  HitObstacleWhenGrindingDelegate                             OFFSET(getStruct<T>, {0xE0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  BoosterModeChangedDelegate                                  OFFSET(getStruct<T>, {0xF0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  SprintingStateChangedDelegate                               OFFSET(getStruct<T>, {0x100, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  EndedGrindingDelegate                                       OFFSET(getStruct<T>, {0x110, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  ADSPressedDelegate                                          OFFSET(getStruct<T>, {0x120, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  ADSReleasedDelegate                                         OFFSET(getStruct<T>, {0x130, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  ApplyDamageToDeviceDelegate                                 OFFSET(getStruct<T>, {0x140, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  DismountPlayerDelegate                                      OFFSET(getStruct<T>, {0x150, 16, 0, 0})
	SMember(FScalableFloat)                            DisablePlayerFromGrinding                                   OFFSET(getStruct<T>, {0x160, 40, 0, 0})
	SMember(FScalableFloat)                            ForceGrindingFromWalking                                    OFFSET(getStruct<T>, {0x188, 40, 0, 0})
	SMember(FScalableFloat)                            GrindFromLandSpeedBoost                                     OFFSET(getStruct<T>, {0x1B0, 40, 0, 0})
	SMember(FGameplayTag)                              CancelGrindingTag                                           OFFSET(getStruct<T>, {0x1D8, 4, 0, 0})
	SMember(FScalableFloat)                            UseGrindingMME                                              OFFSET(getStruct<T>, {0x1E0, 40, 0, 0})
	SMember(FScalableFloat)                            EnableSprinting                                             OFFSET(getStruct<T>, {0x208, 40, 0, 0})
	SMember(FScalableFloat)                            GrindInteractionReentryCooldownTime                         OFFSET(getStruct<T>, {0x230, 40, 0, 0})
	CMember(class UClass*)                             GrindingExtLogicClass                                       OFFSET(get<T>, {0x258, 8, 0, 0})
	CMember(TWeakObjectPtr<AFortPlayerPawn*>)          OwnerPawn                                                   OFFSET(get<T>, {0x260, 8, 0, 0})
	CMember(TWeakObjectPtr<UFortMovementComp_Character*>) MovementComponent                                        OFFSET(get<T>, {0x268, 8, 0, 0})


	/// Functions
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindingProvider.RequestGrindingOnRail
	// bool RequestGrindingOnRail(class AFortGrindRail* GrindRail, float OptionalStartDistance, bool bFromInteraction);         // [0xb64a2d4] Final|Native|Public|BlueprintCallable 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindingProvider.OnWalkingBaseChanged
	// void OnWalkingBaseChanged(class AFortPawn* Pawn, class AActor* NewBase);                                                 // [0xb64a194] Final|Native|Private 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindingProvider.OnPawnLandedCallback
	// void OnPawnLandedCallback(FHitResult& Hit);                                                                              // [0xb649c68] Final|Native|Private|HasOutParms 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindingProvider.OnMovementModeChanged
	// void OnMovementModeChanged(class ACharacter* InCharacter, TEnumAsByte<EMovementMode> PrevMovementMode, char PreviousCustomMode); // [0x1dccb98] Final|Native|Private 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindingProvider.IsUsingOriginalGrinding
	// bool IsUsingOriginalGrinding();                                                                                          // [0xb649c4c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindingProvider.IsSprinting
	// bool IsSprinting();                                                                                                      // [0xb649c28] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindingProvider.IsGrindingDisabledForPlayers
	// bool IsGrindingDisabledForPlayers();                                                                                     // [0xb649c04] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindingProvider.IsGrinding
	// bool IsGrinding();                                                                                                       // [0x3303dc4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindingProvider.GetWantsToGrind
	// bool GetWantsToGrind();                                                                                                  // [0xb649ba8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindingProvider.GetStartedGrindingFromLand
	// bool GetStartedGrindingFromLand();                                                                                       // [0xb649b2c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindingProvider.GetCurrentGrindingRailActor
	// class AFortGrindRail* GetCurrentGrindingRailActor();                                                                     // [0xb649b08] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindingProvider.GetCurrentBoosterMode
	// EGrindRailBoosterMode GetCurrentBoosterMode();                                                                           // [0xb649ae4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindingProvider.EventCallback_OnEndedGrinding
	// void EventCallback_OnEndedGrinding();                                                                                    // [0xb649ad0] Final|Native|Private 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindingProvider.EventCallback_OnBegunGrinding
	// void EventCallback_OnBegunGrinding(bool bWasAlreadyGrinding, bool bWasJumpingFromRail, bool bEnteredFromInteraction, FVector PreviousPlayerLocation); // [0xb649870] Final|Native|Private|HasDefaults 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindingProvider.Broadcast_FeetLandedEvent
	// void Broadcast_FeetLandedEvent();                                                                                        // [0xb649534] Final|Native|Protected|BlueprintCallable 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindingProvider.Broadcast_DismountPlayerEvent
	// void Broadcast_DismountPlayerEvent();                                                                                    // [0xb649504] Final|Native|Protected|BlueprintCallable 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindingProvider.Broadcast_ApplyDamageToBuildingActorEvent
	// void Broadcast_ApplyDamageToBuildingActorEvent(class ABuildingActor* BuildingActor);                                     // [0xb649434] Final|Native|Protected|BlueprintCallable 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindingProvider.Broadcast_ADSReleasedEvent
	// void Broadcast_ADSReleasedEvent();                                                                                       // [0xb649404] Final|Native|Protected|BlueprintCallable 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindingProvider.Broadcast_ADSPressedEvent
	// void Broadcast_ADSPressedEvent();                                                                                        // [0xb6493d4] Final|Native|Protected|BlueprintCallable 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindingProvider.BP_OnFeetLanded
	// void BP_OnFeetLanded();                                                                                                  // [0x186becc] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindingProvider.BP_OnDismount
	// void BP_OnDismount();                                                                                                    // [0x186becc] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindingProvider.BP_OnApplyDamageToDevice
	// void BP_OnApplyDamageToDevice(class ABuildingActor* BuildingActor);                                                      // [0x186becc] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindingProvider.BP_OnADSReleased
	// void BP_OnADSReleased();                                                                                                 // [0x186becc] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindingProvider.BP_OnADSPressed
	// void BP_OnADSPressed();                                                                                                  // [0x186becc] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindingProvider.BP_HandleGameplayEffectsOnPlayerJumpOff
	// void BP_HandleGameplayEffectsOnPlayerJumpOff(FVector PlayerPosition);                                                    // [0x186becc] Event|Public|HasDefaults|BlueprintEvent 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindingProvider.BP_CanBeginGrinding
	// bool BP_CanBeginGrinding();                                                                                              // [0x186becc] Event|Public|BlueprintEvent|Const 
};

/// Class /Script/GrindRailRuntime.GrindRailEditorComponent
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UGrindRailEditorComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
};

/// Class /Script/GrindRailRuntime.GrindRailMovementControls
/// Size: 0x0000 (0x000030 - 0x000030)
class UGrindRailMovementControls : public UFortMovementControls
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/GrindRailRuntime.StructurallySupportedSplineComponent
/// Size: 0x0078 (0x0000A0 - 0x000118)
class UStructurallySupportedSplineComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 280;

public:


	/// Functions
	// Function /Script/GrindRailRuntime.StructurallySupportedSplineComponent.OnStructuralSupportDied
	// void OnStructuralSupportDied(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, FVector HitLocation, class UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum); // [0xb649d40] Final|Native|Protected|HasDefaults 
	// Function /Script/GrindRailRuntime.StructurallySupportedSplineComponent.OnDestroyFromStructuralSupport
	// void OnDestroyFromStructuralSupport(class AActor* SupportActor);                                                         // [0x186becc] Event|Protected|BlueprintEvent 
	// Function /Script/GrindRailRuntime.StructurallySupportedSplineComponent.Multicast_OnStructuralSupportDied
	// void Multicast_OnStructuralSupportDied();                                                                                // [0x6d61aec] Net|NetReliableNative|Event|NetMulticast|Protected 
};

/// Class /Script/GrindRailRuntime.FortAthenaAIBotEvaluator_GrindRail
/// Size: 0x0068 (0x0000A8 - 0x000110)
class UFortAthenaAIBotEvaluator_GrindRail : public UFortAthenaAIBotEvaluator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
	SMember(FGameplayTag)                              GrindRailTag                                                OFFSET(getStruct<T>, {0xA8, 4, 0, 0})
	SMember(FScalableFloat)                            GrindDuration                                               OFFSET(getStruct<T>, {0xB0, 40, 0, 0})
	SMember(FScalableFloat)                            GrindDurationRandomDeviation                                OFFSET(getStruct<T>, {0xD8, 40, 0, 0})
};

/// Class /Script/GrindRailRuntime.FortGameplayCueNotifyLoop_Grinding
/// Size: 0x0190 (0x0009B0 - 0x000B40)
class AFortGameplayCueNotifyLoop_Grinding : public AFortGameplayCueNotify_Loop
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2880;

public:
	DMember(bool)                                      bFeetHasLanded                                              OFFSET(get<bool>, {0x9B0, 1, 0, 0})
	DMember(bool)                                      bEnableNativeAudioUpdate                                    OFFSET(get<bool>, {0x9B1, 1, 0, 0})
	DMember(float)                                     ForwardChangedValueThreshold                                OFFSET(get<float>, {0x9B4, 4, 0, 0})
	SMember(FFortAudioFloatParameter)                  Speed                                                       OFFSET(getStruct<T>, {0x9B8, 56, 0, 0})
	SMember(FFortAudioFloatParameter)                  Forward                                                     OFFSET(getStruct<T>, {0x9F0, 56, 0, 0})
	SMember(FFortAudioFloatParameter)                  Boost                                                       OFFSET(getStruct<T>, {0xA28, 56, 0, 0})
	SMember(FFortAudioFloatParameter)                  Curve                                                       OFFSET(getStruct<T>, {0xA60, 56, 0, 0})
	SMember(FFortAudioFloatParameter)                  IsGrinding                                                  OFFSET(getStruct<T>, {0xA98, 56, 0, 0})
	SMember(FFortAudioFloatParameter)                  IsSlowDown                                                  OFFSET(getStruct<T>, {0xAD0, 56, 0, 0})
	SMember(FName)                                     LeanForwardSpeedName                                        OFFSET(getStruct<T>, {0xB08, 4, 0, 0})
	SMember(FName)                                     TurnOnSpeedFXName                                           OFFSET(getStruct<T>, {0xB0C, 4, 0, 0})
	DMember(float)                                     TurnOnSpeedFXThreshold                                      OFFSET(get<float>, {0xB10, 4, 0, 0})
	CMember(TWeakObjectPtr<UFXSystemComponent*>)       EffectsComponent                                            OFFSET(get<T>, {0xB14, 8, 0, 0})
	CMember(class UAudioComponent*)                    AudioComponent                                              OFFSET(get<T>, {0xB20, 8, 0, 0})
	CMember(class AFortPlayerPawn*)                    PlayerPawn                                                  OFFSET(get<T>, {0xB28, 8, 0, 0})
	CMember(class UFortPawnComponent_GrindingProvider*) GrindingProvider                                           OFFSET(get<T>, {0xB30, 8, 0, 0})


	/// Functions
	// Function /Script/GrindRailRuntime.FortGameplayCueNotifyLoop_Grinding.OnForwardChanged
	// void OnForwardChanged(bool bNewState);                                                                                   // [0x186becc] Event|Public|BlueprintEvent 
	// Function /Script/GrindRailRuntime.FortGameplayCueNotifyLoop_Grinding.CacheReferences
	// void CacheReferences(class UAudioComponent* InAudioComponent, class UFXSystemComponent* InEffectsComponent, class AFortPlayerPawn* InPlayerPawn, class UFortPawnComponent_GrindingProvider* InGrindingProvider); // [0xb649564] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/GrindRailRuntime.FortPawnComponent_GrindRail
/// Size: 0x0AF0 (0x0000A8 - 0x000B98)
class UFortPawnComponent_GrindRail : public UFortPawnComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2968;

public:
	DMember(bool)                                      bUseNativeSpeedCalculation                                  OFFSET(get<bool>, {0xB0, 1, 0, 0})
	DMember(float)                                     LeanForward                                                 OFFSET(get<float>, {0xB4, 4, 0, 0})
	DMember(float)                                     LeanRight                                                   OFFSET(get<float>, {0xB8, 4, 0, 0})
	DMember(float)                                     BaseLeanRight                                               OFFSET(get<float>, {0xBC, 4, 0, 0})
	DMember(float)                                     CurrentSpeedAlongSpline                                     OFFSET(get<float>, {0xC0, 4, 0, 0})
	SMember(FVector)                                   CurrentDirection                                            OFFSET(getStruct<T>, {0xC8, 24, 0, 0})
	CMember(EGrindRailBoosterMode)                     CurrentBoosterMode                                          OFFSET(get<T>, {0xE0, 1, 0, 0})
	DMember(bool)                                      bShould180Turn                                              OFFSET(get<bool>, {0xE1, 1, 0, 0})
	DMember(bool)                                      bShould180TurnAgain                                         OFFSET(get<bool>, {0xE2, 1, 0, 0})
	CMember(class UClass*)                             GrindCameraModifierClass                                    OFFSET(get<T>, {0xE8, 8, 0, 0})
	CMember(class UClass*)                             GrindingAnimLayer                                           OFFSET(get<T>, {0xF0, 8, 0, 0})
	SMember(FScalableFloat)                            BaseMaxLeanAngularSpeed                                     OFFSET(getStruct<T>, {0xF8, 40, 0, 0})
	SMember(FScalableFloat)                            BaseLeanInterpSpeed                                         OFFSET(getStruct<T>, {0x120, 40, 0, 0})
	CMember(TWeakObjectPtr<AFortGrindRail*>)           ReplicatedGrindingRail                                      OFFSET(get<T>, {0x148, 8, 0, 0})
	CMember(TWeakObjectPtr<AFortGrindRail*>)           PreviousGrindingRail                                        OFFSET(get<T>, {0x150, 8, 0, 0})
	CMember(TWeakObjectPtr<AFortGrindRail*>)           GrindingRail                                                OFFSET(get<T>, {0x158, 8, 0, 0})
	CMember(TWeakObjectPtr<AFortGrindRail*>)           NextGrindingRail                                            OFFSET(get<T>, {0x160, 8, 0, 0})
	DMember(bool)                                      bIsGrinding                                                 OFFSET(get<bool>, {0x168, 1, 0, 0})
	DMember(bool)                                      bIsGrindJumping                                             OFFSET(get<bool>, {0x169, 1, 0, 0})
	DMember(bool)                                      bIsSprinting                                                OFFSET(get<bool>, {0x16A, 1, 0, 0})
	DMember(bool)                                      bWeaponHolstered                                            OFFSET(get<bool>, {0x16B, 1, 0, 0})
	DMember(bool)                                      bJumpInputReady                                             OFFSET(get<bool>, {0x16C, 1, 0, 0})
	DMember(float)                                     GrindStartDistance                                          OFFSET(get<float>, {0x170, 4, 0, 0})
	DMember(float)                                     CurrentDistanceAlongSpline                                  OFFSET(get<float>, {0x174, 4, 0, 0})
	SMember(FVector)                                   NativeLastRailLocation                                      OFFSET(getStruct<T>, {0x178, 24, 0, 0})
	DMember(float)                                     NativeMaxSpeed                                              OFFSET(get<float>, {0x190, 4, 0, 0})
	SMember(FRotator)                                  GoalRotation                                                OFFSET(getStruct<T>, {0x198, 24, 0, 0})
	DMember(bool)                                      bIs180Turning                                               OFFSET(get<bool>, {0x1B0, 1, 0, 0})
	DMember(float)                                     HorizontalSplineAngleDeltaDegrees                           OFFSET(get<float>, {0x1B4, 4, 0, 0})
	SMember(FScalableFloat)                            MaxAllowedInclineSplinePitch                                OFFSET(getStruct<T>, {0x1B8, 40, 0, 0})
	SMember(FScalableFloat)                            MaxAllowedDeclineSplinePitch                                OFFSET(getStruct<T>, {0x1E0, 40, 0, 0})
	SMember(FScalableFloat)                            MaxAllowedShootingSplinePitch                               OFFSET(getStruct<T>, {0x208, 40, 0, 0})
	SMember(FScalableFloat)                            TurnAngleThreshold                                          OFFSET(getStruct<T>, {0x230, 40, 0, 0})
	SMember(FScalableFloat)                            AnimatedTurnDuration                                        OFFSET(getStruct<T>, {0x258, 40, 0, 0})
	SMember(FScalableFloat)                            BaseGrindRailYawRotationInterpSpeed                         OFFSET(getStruct<T>, {0x280, 40, 0, 0})
	SMember(FScalableFloat)                            InclineGrindRailPitchRotationInterpSpeed                    OFFSET(getStruct<T>, {0x2A8, 40, 0, 0})
	SMember(FScalableFloat)                            DeclineGrindRailPitchRotationInterpSpeed                    OFFSET(getStruct<T>, {0x2D0, 40, 0, 0})
	SMember(FScalableFloat)                            ShootingGrindRailRotationInterpSpeed                        OFFSET(getStruct<T>, {0x2F8, 40, 0, 0})
	SMember(FScalableFloat)                            NextGrindRailDetectionOffset                                OFFSET(getStruct<T>, {0x320, 40, 0, 0})
	SMember(FGameplayTag)                              CancelGrindingTag                                           OFFSET(getStruct<T>, {0x348, 4, 0, 0})
	SMember(FScalableFloat)                            GrindInteractionReentryCooldownTime                         OFFSET(getStruct<T>, {0x350, 40, 0, 0})
	SMember(FScalableFloat)                            ForceGrindingFromWalking                                    OFFSET(getStruct<T>, {0x378, 40, 0, 0})
	SMember(FScalableFloat)                            MinTimeBeforeJumpSinceEntry                                 OFFSET(getStruct<T>, {0x3A0, 40, 0, 0})
	SMember(FScalableFloat)                            CancelSprintLeanBackThreshold                               OFFSET(getStruct<T>, {0x3C8, 40, 0, 0})
	SMember(FScalableFloat)                            WeaponHolsterCooldown                                       OFFSET(getStruct<T>, {0x3F0, 40, 0, 0})
	SMember(FScalableFloat)                            WeaponIsShootingCooldown                                    OFFSET(getStruct<T>, {0x418, 40, 0, 0})
	SMember(FScalableFloat)                            GravityForceWhenGoingDown                                   OFFSET(getStruct<T>, {0x440, 40, 0, 0})
	SMember(FScalableFloat)                            GravityForceWhenGoingUp                                     OFFSET(getStruct<T>, {0x468, 40, 0, 0})
	SMember(FScalableFloat)                            BoosterSprintingAccelerationOnSlowDownBooster               OFFSET(getStruct<T>, {0x490, 40, 0, 0})
	SMember(FScalableFloat)                            BoosterAccelerationOnSpeedUpBooster                         OFFSET(getStruct<T>, {0x4B8, 40, 0, 0})
	SMember(FScalableFloat)                            BoosterSlowDownBoosterDragMultiplier                        OFFSET(getStruct<T>, {0x4E0, 40, 0, 0})
	SMember(FScalableFloat)                            BoosterSlowDownBoosterGoalSpeed                             OFFSET(getStruct<T>, {0x508, 40, 0, 0})
	SMember(FScalableFloat)                            BoosterMaxSpeed                                             OFFSET(getStruct<T>, {0x530, 40, 0, 0})
	SMember(FScalableFloat)                            ShootingMaxSpeedMultiplier                                  OFFSET(getStruct<T>, {0x558, 40, 0, 0})
	SMember(FScalableFloat)                            AngleForMaxSpeedIncreaseFromDownwardSlope                   OFFSET(getStruct<T>, {0x580, 40, 0, 0})
	SMember(FScalableFloat)                            MaxSpeedIncreaseFromDownwardSlope                           OFFSET(getStruct<T>, {0x5A8, 40, 0, 0})
	SMember(FScalableFloat)                            MaxDragForSpeedSoftCap                                      OFFSET(getStruct<T>, {0x5D0, 40, 0, 0})
	SMember(FScalableFloat)                            SpeedHardCap                                                OFFSET(getStruct<T>, {0x5F8, 40, 0, 0})
	SMember(FScalableFloat)                            SprintingAcceleration                                       OFFSET(getStruct<T>, {0x620, 40, 0, 0})
	SMember(FScalableFloat)                            SprintingMaxSpeed                                           OFFSET(getStruct<T>, {0x648, 40, 0, 0})
	SMember(FScalableFloat)                            SpeedThresholdForTurn                                       OFFSET(getStruct<T>, {0x670, 40, 0, 0})
	SMember(FScalableFloat)                            TimeToTurnAround                                            OFFSET(getStruct<T>, {0x698, 40, 0, 0})
	SMember(FScalableFloat)                            SpeedForMaxLeanAcceleration                                 OFFSET(getStruct<T>, {0x6C0, 40, 0, 0})
	SMember(FScalableFloat)                            SpeedForMinLeanAcceleration                                 OFFSET(getStruct<T>, {0x6E8, 40, 0, 0})
	SMember(FScalableFloat)                            MaxLeanAcceleration                                         OFFSET(getStruct<T>, {0x710, 40, 0, 0})
	SMember(FScalableFloat)                            MinLeanAcceleration                                         OFFSET(getStruct<T>, {0x738, 40, 0, 0})
	SMember(FScalableFloat)                            CanAccelerateByLeaningIntoTurns                             OFFSET(getStruct<T>, {0x760, 40, 0, 0})
	SMember(FScalableFloat)                            CurvatureForMaxLeanIntoTurnsAcceleration                    OFFSET(getStruct<T>, {0x788, 40, 0, 0})
	SMember(FScalableFloat)                            LeanIntoTurnsMaxAcceleration                                OFFSET(getStruct<T>, {0x7B0, 40, 0, 0})
	SMember(FScalableFloat)                            IncreasedMaxSpeedFromLeanIntoTurn                           OFFSET(getStruct<T>, {0x7D8, 40, 0, 0})
	SMember(FScalableFloat)                            SidewaysLeanBoostReductionRate                              OFFSET(getStruct<T>, {0x800, 40, 0, 0})
	SMember(FScalableFloat)                            SpeedForMaxBaseAcceleration                                 OFFSET(getStruct<T>, {0x828, 40, 0, 0})
	SMember(FScalableFloat)                            SpeedForMinBaseAcceleration                                 OFFSET(getStruct<T>, {0x850, 40, 0, 0})
	SMember(FScalableFloat)                            MaxBaseAcceleration                                         OFFSET(getStruct<T>, {0x878, 40, 0, 0})
	SMember(FScalableFloat)                            MinBaseAcceleration                                         OFFSET(getStruct<T>, {0x8A0, 40, 0, 0})
	SMember(FScalableFloat)                            BaseGoalSpeed                                               OFFSET(getStruct<T>, {0x8C8, 40, 0, 0})
	SMember(FScalableFloat)                            BaseMaxSpeed                                                OFFSET(getStruct<T>, {0x8F0, 40, 0, 0})
	SMember(FScalableFloat)                            EnableFriction                                              OFFSET(getStruct<T>, {0x918, 40, 0, 0})
	SMember(FScalableFloat)                            BaseGoalDecelerationSpeed                                   OFFSET(getStruct<T>, {0x940, 40, 0, 0})
	SMember(FScalableFloat)                            FrictionWhenNotLeaning                                      OFFSET(getStruct<T>, {0x968, 40, 0, 0})
	SMember(FScalableFloat)                            SpeedMultiplierOnHitRailCap                                 OFFSET(getStruct<T>, {0x990, 40, 0, 0})
	SMember(FScalableFloat)                            MinSpeedAfterBouncedOffRailCap                              OFFSET(getStruct<T>, {0x9B8, 40, 0, 0})
	CMember(TWeakObjectPtr<UFortPawnComponent_GrindingProvider*>) GrindingProvider                                 OFFSET(get<T>, {0x9E0, 8, 0, 0})


	/// Functions
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindRail.SetMovementStatus
	// void SetMovementStatus(FVector& NewStatus);                                                                              // [0xb65e3a0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindRail.SetIsSprinting
	// void SetIsSprinting(bool bNewIsSprinting);                                                                               // [0xb65e2dc] Final|Native|Public|BlueprintCallable 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindRail.SetGrindDistanceOnSpline
	// void SetGrindDistanceOnSpline(float NewDistanceOnSpline);                                                                // [0xb65e218] Final|Native|Public|BlueprintCallable 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindRail.SetGrindBaseActor
	// void SetGrindBaseActor(class AActor* NewBaseActor);                                                                      // [0xb65e158] Final|Native|Public|BlueprintCallable 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindRail.ServerUpdateWeaponHolstered
	// void ServerUpdateWeaponHolstered(bool bNewHolstered, bool bPlayEquipAnim);                                               // [0xb65e004] Net|NetReliableNative|Event|Protected|NetServer 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindRail.ServerBeginGrinding
	// void ServerBeginGrinding(class AFortGrindRail* GrindRail, float OptionalStartDistance, bool bFromInteraction);           // [0xb65de44] Net|NetReliableNative|Event|Protected|NetServer 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindRail.RemoveMoveIgnoreActors
	// void RemoveMoveIgnoreActors();                                                                                           // [0xb65de30] Final|Native|Protected|BlueprintCallable 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindRail.OnRep_IsSprinting
	// void OnRep_IsSprinting();                                                                                                // [0xb65ddc8] Final|Native|Protected 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindRail.OnRep_GrindingRail
	// void OnRep_GrindingRail();                                                                                               // [0xb65dd44] Final|Native|Protected 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindRail.OnRep_CurrentBoosterMode
	// void OnRep_CurrentBoosterMode(EGrindRailBoosterMode PreviousBoosterMode);                                                // [0xb65dc54] Final|Native|Protected 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindRail.OnReloadInput
	// void OnReloadInput();                                                                                                    // [0xb65dc40] Final|Native|Protected 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindRail.OnMovementModeChanged
	// void OnMovementModeChanged(class ACharacter* InCharacter, TEnumAsByte<EMovementMode> PrevMovementMode, char PreviousCustomMode); // [0x1dcc8b0] Final|Native|Protected 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindRail.OnJumpInput
	// void OnJumpInput(bool bPressed);                                                                                         // [0xb65db7c] Final|Native|Protected 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindRail.OnIgnoredBuildingEndPlay
	// void OnIgnoredBuildingEndPlay(class AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason);                           // [0xb65da3c] Final|Native|Protected 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindRail.OnGrindLostStructuralSupport
	// void OnGrindLostStructuralSupport();                                                                                     // [0xb65da28] Final|Native|Private 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindRail.OnBaseMeshReady
	// void OnBaseMeshReady(class AFortPlayerPawn* Pawn, class USkeletalMeshComponent* MeshComponent);                          // [0x186becc] Event|Public|BlueprintEvent 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindRail.NativeIsShooting
	// bool NativeIsShooting();                                                                                                 // [0xb65da04] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindRail.IsWeaponADS
	// bool IsWeaponADS();                                                                                                      // [0xb65d978] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindRail.IsWeaponActive
	// bool IsWeaponActive();                                                                                                   // [0xb65d9e8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindRail.IsUsingToggleSprint
	// bool IsUsingToggleSprint();                                                                                              // [0xb65d918] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindRail.IsUsingFirstPersonCamera
	// bool IsUsingFirstPersonCamera();                                                                                         // [0xb65d880] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindRail.IsOriginalGrindingSupported
	// bool IsOriginalGrindingSupported();                                                                                      // [0x2eafcd8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindRail.IsGrinding
	// bool IsGrinding();                                                                                                       // [0xa734e70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindRail.HandleSprintInput
	// void HandleSprintInput(bool bPressed);                                                                                   // [0x186becc] Event|Public|BlueprintEvent 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindRail.HandleRailJump
	// void HandleRailJump();                                                                                                   // [0x186becc] Event|Public|BlueprintEvent 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindRail.HandleJumpOffEnd
	// void HandleJumpOffEnd();                                                                                                 // [0x186becc] Event|Public|BlueprintEvent 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindRail.HandleHitWhenGrinding
	// void HandleHitWhenGrinding(FHitResult& Hit);                                                                             // [0x186becc] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindRail.HandleGrindingEndedFromReplication
	// void HandleGrindingEndedFromReplication();                                                                               // [0x186becc] Event|Public|BlueprintEvent 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindRail.HandleGrindingEnded
	// void HandleGrindingEnded();                                                                                              // [0x186becc] Event|Public|BlueprintEvent 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindRail.HandleGrindingBegun
	// void HandleGrindingBegun();                                                                                              // [0x186becc] Event|Public|BlueprintEvent 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindRail.HandleGrindFinishedAfterJumping
	// void HandleGrindFinishedAfterJumping();                                                                                  // [0x186becc] Event|Public|BlueprintEvent 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindRail.GetWantsToGrind
	// bool GetWantsToGrind();                                                                                                  // [0xb65d838] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindRail.GetSpeedHardCap
	// float GetSpeedHardCap();                                                                                                 // [0xb65d820] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindRail.GetMovementStatus
	// FVector GetMovementStatus();                                                                                             // [0xb65d7c0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindRail.GetLeanForwardSpeedNormalized
	// float GetLeanForwardSpeedNormalized();                                                                                   // [0xb65d7a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindRail.GetHorizontalSplineAngleDeltaDegrees
	// float GetHorizontalSplineAngleDeltaDegrees();                                                                            // [0xa1f4774] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindRail.GetGrindRequestJump
	// bool GetGrindRequestJump();                                                                                              // [0xb65d758] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindRail.GetGrindDistanceOnSpline
	// float GetGrindDistanceOnSpline();                                                                                        // [0xb65d734] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindRail.GetGrindBaseActor
	// class AActor* GetGrindBaseActor();                                                                                       // [0xb65d6e4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindRail.GetCurrentGrindingRailActor
	// class AFortGrindRail* GetCurrentGrindingRailActor();                                                                     // [0xb65d6c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindRail.GetCameraOrientedLeanValues
	// void GetCameraOrientedLeanValues(float RawLeanForward, float RawLeanRight, float& OrientedLeanForward, float& OrientedLeanRight); // [0xb65d4f0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindRail.EventCallback_OnSprintInput
	// void EventCallback_OnSprintInput(bool bPressed);                                                                         // [0xb65d42c] Final|Native|Private 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindRail.EventCallback_OnBaseMeshReady
	// void EventCallback_OnBaseMeshReady(class AFortPlayerPawn* Pawn, class USkeletalMeshComponent* MeshComponent);            // [0xb65d2ec] Final|Native|Private 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindRail.EndGrinding
	// void EndGrinding(bool bSetEndMovementMode);                                                                              // [0xb65d228] Final|Native|Public|BlueprintCallable 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindRail.DrawDebugHUD
	// void DrawDebugHUD(class AHUD* HUD, class UCanvas* Canvas);                                                               // [0x6d6d7fc] Final|Native|Protected|Const 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindRail.CanBeginGrinding
	// bool CanBeginGrinding();                                                                                                 // [0x858e270] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindRail.CalculateVelocity
	// void CalculateVelocity(float DeltaTime, bool bReplayingMovement, FVector& OutVelocity);                                  // [0x186becc] Event|Public|HasOutParms|HasDefaults|BlueprintEvent 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindRail.BeginGrinding
	// void BeginGrinding(class AFortGrindRail* GrindRail, float OptionalStartDistance, bool bFromInteraction);                 // [0xb65d06c] Final|Native|Public|BlueprintCallable 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindRail.AttemptDestroyVehicleWhileGrinding
	// bool AttemptDestroyVehicleWhileGrinding(class AFortAthenaVehicle* Vehicle);                                              // [0xb65cdf4] Final|Native|Protected|BlueprintCallable 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindRail.AddTemporaryMoveIgnoreActor
	// void AddTemporaryMoveIgnoreActor(class ABuildingActor* BuildingActor, float IgnoreDuration);                             // [0xb65ccb4] Final|Native|Protected|BlueprintCallable 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindRail.AddMoveIgnoreActor
	// bool AddMoveIgnoreActor(class ABuildingActor* BuildingActor);                                                            // [0xb65cbe4] Final|Native|Protected|BlueprintCallable 
};

/// Struct /Script/GrindRailRuntime.FortAnimInput_GrindRail
/// Size: 0x0018 (0x000000 - 0x000018)
class FFortAnimInput_GrindRail : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(bool)                                      bAimFWD                                                     OFFSET(get<bool>, {0x0, 1, 1, 0})
	DMember(bool)                                      bAimBWD                                                     OFFSET(get<bool>, {0x0, 1, 1, 1})
	DMember(bool)                                      bAimLFT                                                     OFFSET(get<bool>, {0x0, 1, 1, 2})
	DMember(bool)                                      bAimRGT                                                     OFFSET(get<bool>, {0x0, 1, 1, 3})
	DMember(float)                                     AimFWDDeltaAngleDegrees                                     OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     AimBWDDeltaAngleDegrees                                     OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     AimLFTDeltaAngleDegrees                                     OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     AimRGTDeltaAngleDegrees                                     OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     PawnToSplineDeltaYawAngleDegrees                            OFFSET(get<float>, {0x14, 4, 0, 0})
};

/// Struct /Script/GrindRailRuntime.FortAnimNode_GrindRailSlopeWarping
/// Size: 0x0060 (0x0002E8 - 0x000348)
class FFortAnimNode_GrindRailSlopeWarping : public FFortAnimNode_SlopeWarping
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 840;

public:
	DMember(float)                                     BaseSplineRadius                                            OFFSET(get<float>, {0x2E8, 4, 0, 0})
	DMember(bool)                                      bAbsentCurveMeansFootDown                                   OFFSET(get<bool>, {0x2EC, 1, 1, 0})
	SMember(FName)                                     LFootOnGroundCurveName                                      OFFSET(getStruct<T>, {0x2F0, 4, 0, 0})
	DMember(bool)                                      bLeftCurveHighMeansFootDown                                 OFFSET(get<bool>, {0x2F4, 1, 1, 0})
	SMember(FName)                                     RFootOnGroundCurveName                                      OFFSET(getStruct<T>, {0x2F8, 4, 0, 0})
	DMember(bool)                                      bRightCurveHighMeansFootDown                                OFFSET(get<bool>, {0x2FC, 1, 1, 0})
	SMember(FBoneReference)                            LeftFootFKBone                                              OFFSET(getStruct<T>, {0x300, 12, 0, 0})
};

/// Struct /Script/GrindRailRuntime.GrindRailBoosterInfo
/// Size: 0x000C (0x000000 - 0x00000C)
class FGrindRailBoosterInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(float)                                     MinDistanceAlongSpline                                      OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     MaxDistanceAlongSpline                                      OFFSET(get<float>, {0x4, 4, 0, 0})
	CMember(EGrindRailBoosterMode)                     PositiveMode                                                OFFSET(get<T>, {0x8, 1, 0, 0})
	CMember(EGrindRailBoosterMode)                     NegativeMode                                                OFFSET(get<T>, {0x9, 1, 0, 0})
};

/// Struct /Script/GrindRailRuntime.FortRailPointSnapData
/// Size: 0x0010 (0x000000 - 0x000010)
class FFortRailPointSnapData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class AFortGrindRail*)                     RailToSnapTo                                                OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(int32_t)                                   PointToSnapTo                                               OFFSET(get<int32_t>, {0x8, 4, 0, 0})
};

/// Struct /Script/GrindRailRuntime.GrindRailSpeedSettings
/// Size: 0x0018 (0x000000 - 0x000018)
class FGrindRailSpeedSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(float)                                     SprintAcceleration                                          OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     MaxLeanAcceleration                                         OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     MinLeanAcceleration                                         OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     ShootingSpeedMultiplier                                     OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     GravityForceWhenGoingUp                                     OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     GravityForceWhenGoingDown                                   OFFSET(get<float>, {0x14, 4, 0, 0})
};

/// Struct /Script/GrindRailRuntime.FortMovementMode_GrindingRuntimeData
/// Size: 0x01A0 (0x000010 - 0x0001B0)
class FFortMovementMode_GrindingRuntimeData : public FFortMovementMode_BaseExtRuntimeData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 432;

public:
};

/// Struct /Script/GrindRailRuntime.FortMovementMode_GrindingCreationData
/// Size: 0x0040 (0x000008 - 0x000048)
class FFortMovementMode_GrindingCreationData : public FFortMovementMode_BaseExtCreationData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Struct /Script/GrindRailRuntime.FortMovementMode_GrindingRailJumpResult
/// Size: 0x0020 (0x000000 - 0x000020)
class FFortMovementMode_GrindingRailJumpResult : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/GrindRailRuntime.GrindingRequestCalculationData
/// Size: 0x0038 (0x000000 - 0x000038)
class FGrindingRequestCalculationData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FVector)                                   ResultActorLocation                                         OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FVector)                                   ResultActorDirection                                        OFFSET(getStruct<T>, {0x18, 24, 0, 0})
	DMember(float)                                     ResultDistanceOnSpline                                      OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(float)                                     ResultSpeed                                                 OFFSET(get<float>, {0x34, 4, 0, 0})
};

/// Struct /Script/GrindRailRuntime.GrindRailStatus
/// Size: 0x0010 (0x000000 - 0x000010)
class FGrindRailStatus : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TWeakObjectPtr<AFortGrindRail*>)           GrindingRail                                                OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(float)                                     CurrentSpeedAlongSpline                                     OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     CurrentDistanceAlongSpline                                  OFFSET(get<float>, {0xC, 4, 0, 0})
};

/// Enum /Script/GrindRailRuntime.EGrindRailBoosterMode
/// Size: 0x04
enum class EGrindRailBoosterMode : uint8_t
{
	EGrindRailBoosterMode__SpeedUp                                                   = 0,
	EGrindRailBoosterMode__SlowDown                                                  = 1,
	EGrindRailBoosterMode__NoEffect                                                  = 2,
	EGrindRailBoosterMode__EGrindRailBoosterMode_MAX                                 = 3
};

/// Enum /Script/GrindRailRuntime.EFortMovementMode_GrindingState
/// Size: 0x05
enum class EFortMovementMode_GrindingState : uint8_t
{
	Created                                                                          = 0,
	Active                                                                           = 1,
	AnchorJump                                                                       = 2,
	RequestToEnd                                                                     = 3,
	EFortMovementMode_GrindingState_MAX                                              = 4
};

