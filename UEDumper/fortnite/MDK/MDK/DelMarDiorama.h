
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CinematicCamera
/// dependency: CoreUObject
/// dependency: DelMarCore
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: GameplayTags
/// dependency: LevelSequence
/// dependency: ModularGameplay
/// dependency: MovieScene

/// Class /Script/DelMarDiorama.DelMarCockpitActor
/// Size: 0x0010 (0x000290 - 0x0002A0)
class ADelMarCockpitActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 672;

public:
	CMember(class USkeletalMeshComponent*)             CockpitMeshComponent                                        OFFSET(get<T>, {0x290, 8, 0, 0})
	CMember(class ADelMarVehicle*)                     BoundVehicle                                                OFFSET(get<T>, {0x298, 8, 0, 0})


	/// Functions
	// Function /Script/DelMarDiorama.DelMarCockpitActor.BP_OnBoundVehicleChanged
	// void BP_OnBoundVehicleChanged(class ADelMarVehicle* NewVehicle);                                                         // [0x18a39e4] Event|Protected|BlueprintEvent 
};

/// Class /Script/DelMarDiorama.DelMarDioramaActor
/// Size: 0x0158 (0x000290 - 0x0003E8)
class ADelMarDioramaActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1000;

public:
	CMember(class USkeletalMeshComponent*)             VehicleInteriorMeshComponent                                OFFSET(get<T>, {0x290, 8, 0, 0})
	CMember(TMap<FGameplayTag, FDelMarDriverSequenceDataList>) CustomSequenceListTable                             OFFSET(get<T>, {0x298, 80, 0, 0})
	CMember(class UClass*)                             DriverMannequinClass                                        OFFSET(get<T>, {0x300, 8, 0, 0})
	CMember(class UClass*)                             LevelSequenceActorClass                                     OFFSET(get<T>, {0x308, 8, 0, 0})
	CMember(class UClass*)                             CineCameraClass                                             OFFSET(get<T>, {0x310, 8, 0, 0})
	CMember(class UClass*)                             CockpitClass                                                OFFSET(get<T>, {0x318, 8, 0, 0})
	CMember(class UDelMarDioramaConfigData*)           ConfigData                                                  OFFSET(get<T>, {0x320, 8, 0, 0})
	SMember(FVector)                                   DefaultCameraOffset                                         OFFSET(getStruct<T>, {0x328, 24, 0, 0})
	SMember(FRotator)                                  DefaultCameraRotation                                       OFFSET(getStruct<T>, {0x340, 24, 0, 0})
	CMember(class ALevelSequenceActor*)                SequenceActor                                               OFFSET(get<T>, {0x358, 8, 0, 0})
	CMember(class ADelMarDriverCameraActor*)           CameraActor                                                 OFFSET(get<T>, {0x360, 8, 0, 0})
	CMember(class ADelMarDriverMannequin*)             DriverMannequin                                             OFFSET(get<T>, {0x368, 8, 0, 0})
	CMember(class ADelMarCockpitActor*)                CockpitActor                                                OFFSET(get<T>, {0x370, 8, 0, 0})
	CMember(class APlayerState*)                       BoundPlayer                                                 OFFSET(get<T>, {0x378, 8, 0, 0})
	CMember(class UDelMarDriverSequenceData*)          LastPlayedSequenceData                                      OFFSET(get<T>, {0x380, 8, 0, 0})
	CMember(TSet<UDelMarDriverSequenceDataTable*>)     BoundSequencesTables                                        OFFSET(get<T>, {0x388, 80, 0, 0})
	DMember(int32_t)                                   DefaultCameraSocketIndex                                    OFFSET(get<int32_t>, {0x3DC, 4, 0, 0})


	/// Functions
	// Function /Script/DelMarDiorama.DelMarDioramaActor.HandleSequenceFinished
	// void HandleSequenceFinished();                                                                                           // [0xb05de58] Final|Native|Protected 
};

/// Class /Script/DelMarDiorama.DelMarDioramaConfigData
/// Size: 0x0028 (0x000030 - 0x000058)
class UDelMarDioramaConfigData : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FName)                                     CameraActorTag                                              OFFSET(getStruct<T>, {0x30, 4, 0, 0})
	SMember(FName)                                     DriverMannequinTag                                          OFFSET(getStruct<T>, {0x34, 4, 0, 0})
	SMember(FName)                                     CockpitActorTag                                             OFFSET(getStruct<T>, {0x38, 4, 0, 0})
	CMember(TArray<FName>)                             CockpitCameraCutSockets                                     OFFSET(get<T>, {0x40, 16, 0, 0})
	SMember(FName)                                     CockpitCameraIdleSocket                                     OFFSET(getStruct<T>, {0x50, 4, 0, 0})
};

/// Class /Script/DelMarDiorama.DelMarDriverCameraActor
/// Size: 0x0010 (0x000A20 - 0x000A30)
class ADelMarDriverCameraActor : public ACineCameraActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2608;

public:
	CMember(class USceneCaptureComponent2D*)           CaptureComponent                                            OFFSET(get<T>, {0xA20, 8, 0, 0})
};

/// Class /Script/DelMarDiorama.DelMarDriverCheatManager
/// Size: 0x0000 (0x000028 - 0x000028)
class UDelMarDriverCheatManager : public UChildCheatManager
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/DelMarDiorama.DelMarDriverCheatManager.DelMarIntercomPlayInteraction
	// void DelMarIntercomPlayInteraction(FString InteractionTag);                                                              // [0x6b8287c] Final|Exec|Native|Protected 
	// Function /Script/DelMarDiorama.DelMarDriverCheatManager.DelMarIntercomBroadcastEmote
	// void DelMarIntercomBroadcastEmote(FString EmoteTag);                                                                     // [0x6b8287c] Final|Exec|Native|Protected 
	// Function /Script/DelMarDiorama.DelMarDriverCheatManager.DelMarDioramaSetVisibleInSceneCaptureOnly
	// void DelMarDioramaSetVisibleInSceneCaptureOnly(bool bOnly);                                                              // [0x63fe5cc] Final|Exec|Native|Protected 
	// Function /Script/DelMarDiorama.DelMarDriverCheatManager.DelMarDioramaSetLocation
	// void DelMarDioramaSetLocation(float X, float Y, float Z);                                                                // [0x8b74074] Final|Exec|Native|Protected 
	// Function /Script/DelMarDiorama.DelMarDriverCheatManager.DelMarDioramaSetLightingChannel
	// void DelMarDioramaSetLightingChannel(bool bMainChannel);                                                                 // [0x63fe5cc] Final|Exec|Native|Protected 
	// Function /Script/DelMarDiorama.DelMarDriverCheatManager.DelMarDioramaSetEnabled
	// void DelMarDioramaSetEnabled(bool bEnabled);                                                                             // [0x63fe5cc] Final|Exec|Native|Protected 
	// Function /Script/DelMarDiorama.DelMarDriverCheatManager.DelMarDioramaSetDriverReaction
	// void DelMarDioramaSetDriverReaction(FString ReactionTag);                                                                // [0x6b8287c] Final|Exec|Native|Protected 
	// Function /Script/DelMarDiorama.DelMarDriverCheatManager.DelMarDioramaOpenChannel
	// void DelMarDioramaOpenChannel(bool bOpened);                                                                             // [0x63fe5cc] Final|Exec|Native|Protected 
};

/// Class /Script/DelMarDiorama.DelMarDriverSequenceData
/// Size: 0x0010 (0x000030 - 0x000040)
class UDelMarDriverSequenceData : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(class ULevelSequence*)                     Sequence                                                    OFFSET(get<T>, {0x30, 8, 0, 0})
	DMember(int32_t)                                   PriorityLevel                                               OFFSET(get<int32_t>, {0x38, 4, 0, 0})
	DMember(bool)                                      bLoop                                                       OFFSET(get<bool>, {0x3C, 1, 0, 0})
	DMember(bool)                                      bTriggerReactiveWidget                                      OFFSET(get<bool>, {0x3D, 1, 0, 0})
	DMember(bool)                                      bCameraCut                                                  OFFSET(get<bool>, {0x3E, 1, 0, 0})
};

/// Class /Script/DelMarDiorama.DelMarDriverSequenceDataTable
/// Size: 0x0050 (0x000030 - 0x000080)
class UDelMarDriverSequenceDataTable : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(TMap<FGameplayTag, FDelMarDriverSequenceDataList>) SequenceListTable                                   OFFSET(get<T>, {0x30, 80, 0, 0})
};

/// Class /Script/DelMarDiorama.DelMarIntercomEvent
/// Size: 0x0018 (0x000028 - 0x000040)
class UDelMarIntercomEvent : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(class AFortPlayerState*)                   OwningPlayerState                                           OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(class ADelMarVehicle*)                     OwningVehicle                                               OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(class UDelMarIntercomComponent*)           IntercomComponent                                           OFFSET(get<T>, {0x38, 8, 0, 0})
};

/// Class /Script/DelMarDiorama.DelMarIntercomEvent_TurboPassing
/// Size: 0x0010 (0x000040 - 0x000050)
class UDelMarIntercomEvent_TurboPassing : public UDelMarIntercomEvent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TWeakObjectPtr<AFortPlayerState*>)         PlayerAhead                                                 OFFSET(get<T>, {0x40, 8, 0, 0})
	CMember(class UDelMarPlayerRaceDataComponent*)     RaceData                                                    OFFSET(get<T>, {0x48, 8, 0, 0})
};

/// Class /Script/DelMarDiorama.DelMarDriverAnimInstance
/// Size: 0x0020 (0x000460 - 0x000480)
class UDelMarDriverAnimInstance : public UFortBaseAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1152;

public:
	CMember(class ADelMarVehicle*)                     BoundVehicle                                                OFFSET(get<T>, {0x458, 8, 0, 0})
	DMember(bool)                                      bDrifting                                                   OFFSET(get<bool>, {0x460, 1, 0, 0})
	DMember(bool)                                      bTurboing                                                   OFFSET(get<bool>, {0x461, 1, 0, 0})
	DMember(float)                                     SteeringAngle                                               OFFSET(get<float>, {0x464, 4, 0, 0})
	DMember(float)                                     SlipAngle                                                   OFFSET(get<float>, {0x468, 4, 0, 0})
	DMember(float)                                     StableSpeed                                                 OFFSET(get<float>, {0x46C, 4, 0, 0})
	DMember(float)                                     DrivingSpeedThreshold                                       OFFSET(get<float>, {0x470, 4, 0, 0})


	/// Functions
	// Function /Script/DelMarDiorama.DelMarDriverAnimInstance.IsDrivingSpeed
	// bool IsDrivingSpeed();                                                                                                   // [0xb05e6cc] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DelMarDiorama.DelMarCockpitAnimInstance
/// Size: 0x0010 (0x000480 - 0x000490)
class UDelMarCockpitAnimInstance : public UDelMarDriverAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1168;

public:
	DMember(float)                                     DefaultCameraShakeIntensity                                 OFFSET(get<float>, {0x478, 4, 0, 0})
	DMember(float)                                     DefaultTerrainAccMultiplier                                 OFFSET(get<float>, {0x47C, 4, 0, 0})
	DMember(float)                                     DefaultTerrainMaxForwardSpeedPercentage                     OFFSET(get<float>, {0x480, 4, 0, 0})
	DMember(float)                                     CameraShakeIntensity                                        OFFSET(get<float>, {0x484, 4, 0, 0})
};

/// Class /Script/DelMarDiorama.DelMarDioramaControllerComponent
/// Size: 0x0130 (0x0000A0 - 0x0001D0)
class UDelMarDioramaControllerComponent : public UControllerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 464;

public:
	SMember(FVector)                                   DioramaOffset                                               OFFSET(getStruct<T>, {0xA0, 24, 0, 0})
	CMember(class UClass*)                             DioramaClass                                                OFFSET(get<T>, {0xB8, 8, 0, 0})
	CMember(class UDelMarDriverSequenceDataTable*)     CustomizedSequencesTable                                    OFFSET(get<T>, {0xC0, 8, 0, 0})
	SMember(FTransform)                                DioramaInitialTransform                                     OFFSET(getStruct<T>, {0xD0, 96, 0, 0})
	CMember(class UClass*)                             MainChannelClass                                            OFFSET(get<T>, {0x130, 8, 0, 0})
	CMember(class UDelMarDriverChannel*)               MainChannel                                                 OFFSET(get<T>, {0x138, 8, 0, 0})
	CMember(class UClass*)                             PostRaceChannelClass                                        OFFSET(get<T>, {0x140, 8, 0, 0})
	CMember(TArray<class UDelMarDriverChannelBase*>)   PostRaceChannels                                            OFFSET(get<T>, {0x148, 16, 0, 0})
	CMember(class APlayerState*)                       CachedOwningPlayerState                                     OFFSET(get<T>, {0x158, 8, 0, 0})
	CMember(class APlayerState*)                       ViewTargetPlayer                                            OFFSET(get<T>, {0x160, 8, 0, 0})
	CMember(TWeakObjectPtr<ADelMarVehicle*>)           ViewTargetVehicle                                           OFFSET(get<T>, {0x168, 8, 0, 0})
	CMember(TMap<APlayerState*, ADelMarDioramaActor*>) PlayerDioramaTable                                          OFFSET(get<T>, {0x170, 80, 0, 0})
	DMember(int32_t)                                   NumPostRaceChannel                                          OFFSET(get<int32_t>, {0x1C0, 4, 0, 0})


	/// Functions
	// Function /Script/DelMarDiorama.DelMarDioramaControllerComponent.HandleViewTargetChanged
	// void HandleViewTargetChanged(class AFortPlayerController* PC, class AActor* Old, class AActor* NewViewTarget);           // [0xb05e494] Final|Native|Protected 
};

/// Class /Script/DelMarDiorama.DelMarDriverChannelBase
/// Size: 0x0060 (0x000028 - 0x000088)
class UDelMarDriverChannelBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	CMember(class UTextureRenderTarget2D*)             ViewRenderTarget                                            OFFSET(get<T>, {0x28, 8, 0, 0})
	SMember(FIntPoint)                                 RenderTargetDim                                             OFFSET(getStruct<T>, {0x30, 8, 0, 0})
	CMember(class UDelMarDriverSequenceDataTable*)     SequencesTable                                              OFFSET(get<T>, {0x68, 8, 0, 0})
	CMember(class APlayerState*)                       ViewPlayer                                                  OFFSET(get<T>, {0x70, 8, 0, 0})
	CMember(class ADelMarDioramaActor*)                ViewDiorama                                                 OFFSET(get<T>, {0x78, 8, 0, 0})
	CMember(class UMovieSceneSequencePlayer*)          SequencePlayer                                              OFFSET(get<T>, {0x80, 8, 0, 0})


	/// Functions
	// Function /Script/DelMarDiorama.DelMarDriverChannelBase.HandleSequenceFinished
	// void HandleSequenceFinished();                                                                                           // [0x17b4428] Native|Protected     
};

/// Class /Script/DelMarDiorama.DelMarDriverChannel
/// Size: 0x00D8 (0x000088 - 0x000160)
class UDelMarDriverChannel : public UDelMarDriverChannelBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:
	CMember(class ADelMarVehicle*)                     ViewVehicle                                                 OFFSET(get<T>, {0x88, 8, 0, 0})
	CMember(TArray<FGameplayTag>)                      QueueReactions                                              OFFSET(get<T>, {0x90, 16, 0, 0})
	CMember(TMap<FGameplayTag, FDelMarDriverSequenceDataList>) SequenceListTableInstance                           OFFSET(get<T>, {0xA0, 80, 0, 0})
	CMember(TMap<FGameplayTag, float>)                 ReactionCoolDownTimeStamp                                   OFFSET(get<T>, {0xF0, 80, 0, 0})
	DMember(float)                                     LandingForceThreshold                                       OFFSET(get<float>, {0x140, 4, 0, 0})
	DMember(float)                                     SlowDownImpactSpeedThreshold                                OFFSET(get<float>, {0x144, 4, 0, 0})
	DMember(float)                                     HitWallImpactThreshold                                      OFFSET(get<float>, {0x148, 4, 0, 0})
	DMember(float)                                     HitWallImpactHardThreshold                                  OFFSET(get<float>, {0x14C, 4, 0, 0})
	DMember(float)                                     DraftBonusPercentageThreshold                               OFFSET(get<float>, {0x150, 4, 0, 0})
	DMember(float)                                     StartlineBoostPercentageEarnedThreshold                     OFFSET(get<float>, {0x154, 4, 0, 0})


	/// Functions
	// Function /Script/DelMarDiorama.DelMarDriverChannel.HandleVehicleSpawned
	// void HandleVehicleSpawned(bool bFirstCar, bool bPrevCarDemolished);                                                      // [0xb05e3d0] Final|Native|Protected 
	// Function /Script/DelMarDiorama.DelMarDriverChannel.HandleVehicleLanded
	// void HandleVehicleLanded(float LandingForce, bool bLandedKickflip);                                                      // [0xb05e308] Final|Native|Protected 
	// Function /Script/DelMarDiorama.DelMarDriverChannel.HandleVehicleHitWall
	// void HandleVehicleHitWall(float ImpactMagnitude, FVector WorldLocation, float ForwardRotationDegrees);                   // [0xb05e0b0] Final|Native|Protected|HasDefaults 
	// Function /Script/DelMarDiorama.DelMarDriverChannel.HandleVehicleDemolished
	// void HandleVehicleDemolished(FGameplayTag CausedByTag);                                                                  // [0xb05df80] Final|Native|Protected 
	// Function /Script/DelMarDiorama.DelMarDriverChannel.HandleTurboActivated
	// void HandleTurboActivated();                                                                                             // [0xb05df6c] Final|Native|Protected 
	// Function /Script/DelMarDiorama.DelMarDriverChannel.HandleStartlineBoostActivated
	// void HandleStartlineBoostActivated(float PercentageSpeedEarned);                                                         // [0xb05deec] Final|Native|Protected 
	// Function /Script/DelMarDiorama.DelMarDriverChannel.HandleSpeedChanged
	// void HandleSpeedChanged(float NewSpeed);                                                                                 // [0xb05de6c] Final|Native|Protected 
	// Function /Script/DelMarDiorama.DelMarDriverChannel.HandleHazardSpeedLost
	// void HandleHazardSpeedLost();                                                                                            // [0xb05de44] Final|Native|Protected 
	// Function /Script/DelMarDiorama.DelMarDriverChannel.HandleDriftBoostActivated
	// void HandleDriftBoostActivated(float PercentageMaxBoostGained);                                                          // [0xb05ddc4] Final|Native|Protected 
	// Function /Script/DelMarDiorama.DelMarDriverChannel.HandleDraftStateChanged
	// void HandleDraftStateChanged(EDelmarDraftingState DraftState);                                                           // [0xb05dd44] Final|Native|Protected 
};

/// Class /Script/DelMarDiorama.DelMarDriverMannequin
/// Size: 0x0000 (0x000630 - 0x000630)
class ADelMarDriverMannequin : public AFortPlayerMannequin
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1584;

public:
};

/// Class /Script/DelMarDiorama.DelMarIntercomComponent
/// Size: 0x00C0 (0x0000A0 - 0x000160)
class UDelMarIntercomComponent : public UControllerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:
	CMember(class UClass*)                             GuestChannelClass                                           OFFSET(get<T>, {0xB8, 8, 0, 0})
	CMember(class UDelMarDriverChannel*)               GuestChannel                                                OFFSET(get<T>, {0xC0, 8, 0, 0})
	CMember(TWeakObjectPtr<AFortPlayerPawn*>)          ViewPlayerPawn                                              OFFSET(get<T>, {0xC8, 8, 0, 0})
	CMember(TWeakObjectPtr<ADelMarDioramaActor*>)      MainChannelDiorama                                          OFFSET(get<T>, {0xD0, 8, 0, 0})
	CMember(class APlayerState*)                       ViewPlayerState                                             OFFSET(get<T>, {0xD8, 8, 0, 0})
	CMember(class UDelMarDioramaControllerComponent*)  DioramaControllerComponent                                  OFFSET(get<T>, {0xE0, 8, 0, 0})
	CMember(TArray<class UClass*>)                     ServerEventClasses                                          OFFSET(get<T>, {0xE8, 16, 0, 0})
	CMember(TArray<class UDelMarIntercomEvent*>)       ServerEvents                                                OFFSET(get<T>, {0xF8, 16, 0, 0})
	CMember(TMap<FGameplayTag, FDelMarInteractionTagData>) InteractionTagTable                                     OFFSET(get<T>, {0x108, 80, 0, 0})
	DMember(float)                                     EmoteBroadcastMaxDistanceSq                                 OFFSET(get<float>, {0x158, 4, 0, 0})


	/// Functions
	// Function /Script/DelMarDiorama.DelMarIntercomComponent.ServerReceiveInteraction
	// void ServerReceiveInteraction(FGameplayTag EmoteTag, class APlayerState* Receiver);                                      // [0xb05e824] Net|Native|Event|Public|NetServer 
	// Function /Script/DelMarDiorama.DelMarIntercomComponent.ServerReceiveEmote
	// void ServerReceiveEmote(FGameplayTag EmoteTag);                                                                          // [0xb05e6f0] Net|Native|Event|Protected|NetServer 
	// Function /Script/DelMarDiorama.DelMarIntercomComponent.HandleViewTargetChanged
	// void HandleViewTargetChanged(class AFortPlayerController* InController, class AActor* OldViewTarget, class AActor* NewViewTarget); // [0xb05e5d4] Final|Native|Protected 
	// Function /Script/DelMarDiorama.DelMarIntercomComponent.ClientReceiveInteraction
	// void ClientReceiveInteraction(FGameplayTag InteractionTag, class APlayerState* Instigator, class APlayerState* Receiver); // [0xb05da64] Net|Native|Event|Protected|NetClient 
	// Function /Script/DelMarDiorama.DelMarIntercomComponent.ClientReceiveEmote
	// void ClientReceiveEmote(FGameplayTag EmoteTag, class APlayerState* Instigator);                                          // [0xb05d854] Net|Native|Event|Protected|NetClient 
};

/// Struct /Script/DelMarDiorama.DelMarDriverSequenceDataList
/// Size: 0x0018 (0x000000 - 0x000018)
class FDelMarDriverSequenceDataList : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(TArray<class UDelMarDriverSequenceData*>)  SequenceDataList                                            OFFSET(get<T>, {0x0, 16, 0, 0})
	DMember(float)                                     Cooldown                                                    OFFSET(get<float>, {0x10, 4, 0, 0})
};

/// Struct /Script/DelMarDiorama.DelMarEvent_DioramaControllerAdded
/// Size: 0x0008 (0x000000 - 0x000008)
class FDelMarEvent_DioramaControllerAdded : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/DelMarDiorama.DelMarEvent_DriverChannelOpened
/// Size: 0x0008 (0x000000 - 0x000008)
class FDelMarEvent_DriverChannelOpened : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/DelMarDiorama.DelMarInteractionTagData
/// Size: 0x0008 (0x000000 - 0x000008)
class FDelMarInteractionTagData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FGameplayTag)                              InstigatorReactionTag                                       OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FGameplayTag)                              ReceiverReactionTag                                         OFFSET(getStruct<T>, {0x4, 4, 0, 0})
};

