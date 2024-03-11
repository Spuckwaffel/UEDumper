
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
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
public:
	class USkeletalMeshComponent*                      CockpitMeshComponent;                                       // 0x0290   (0x0008)  
	class ADelMarVehicle*                              BoundVehicle;                                               // 0x0298   (0x0008)  


	/// Functions
	// Function /Script/DelMarDiorama.DelMarCockpitActor.BP_OnBoundVehicleChanged
	// void BP_OnBoundVehicleChanged(class ADelMarVehicle* NewVehicle);                                                      // [0x18a39e4] Event|Protected|BlueprintEvent 
};

/// Class /Script/DelMarDiorama.DelMarDioramaActor
/// Size: 0x0158 (0x000290 - 0x0003E8)
class ADelMarDioramaActor : public AActor
{ 
public:
	class USkeletalMeshComponent*                      VehicleInteriorMeshComponent;                               // 0x0290   (0x0008)  
	SDK_UNDEFINED(80,13180) /* TMap<FGameplayTag, FDelMarDriverSequenceDataList> */ __um(CustomSequenceListTable); // 0x0298   (0x0050)  
	unsigned char                                      UnknownData00_5[0x18];                                      // 0x02E8   (0x0018)  MISSED
	class UClass*                                      DriverMannequinClass;                                       // 0x0300   (0x0008)  
	class UClass*                                      LevelSequenceActorClass;                                    // 0x0308   (0x0008)  
	class UClass*                                      CineCameraClass;                                            // 0x0310   (0x0008)  
	class UClass*                                      CockpitClass;                                               // 0x0318   (0x0008)  
	class UDelMarDioramaConfigData*                    ConfigData;                                                 // 0x0320   (0x0008)  
	FVector                                            DefaultCameraOffset;                                        // 0x0328   (0x0018)  
	FRotator                                           DefaultCameraRotation;                                      // 0x0340   (0x0018)  
	class ALevelSequenceActor*                         SequenceActor;                                              // 0x0358   (0x0008)  
	class ADelMarDriverCameraActor*                    CameraActor;                                                // 0x0360   (0x0008)  
	class ADelMarDriverMannequin*                      DriverMannequin;                                            // 0x0368   (0x0008)  
	class ADelMarCockpitActor*                         CockpitActor;                                               // 0x0370   (0x0008)  
	class APlayerState*                                BoundPlayer;                                                // 0x0378   (0x0008)  
	class UDelMarDriverSequenceData*                   LastPlayedSequenceData;                                     // 0x0380   (0x0008)  
	SDK_UNDEFINED(80,13181) /* TSet<UDelMarDriverSequenceDataTable*> */ __um(BoundSequencesTables);                // 0x0388   (0x0050)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x03D8   (0x0004)  MISSED
	int32_t                                            DefaultCameraSocketIndex;                                   // 0x03DC   (0x0004)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x03E0   (0x0008)  MISSED


	/// Functions
	// Function /Script/DelMarDiorama.DelMarDioramaActor.HandleSequenceFinished
	// void HandleSequenceFinished();                                                                                        // [0xb05de58] Final|Native|Protected 
};

/// Class /Script/DelMarDiorama.DelMarDioramaConfigData
/// Size: 0x0028 (0x000030 - 0x000058)
class UDelMarDioramaConfigData : public UDataAsset
{ 
public:
	FName                                              CameraActorTag;                                             // 0x0030   (0x0004)  
	FName                                              DriverMannequinTag;                                         // 0x0034   (0x0004)  
	FName                                              CockpitActorTag;                                            // 0x0038   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x003C   (0x0004)  MISSED
	TArray<FName>                                      CockpitCameraCutSockets;                                    // 0x0040   (0x0010)  
	FName                                              CockpitCameraIdleSocket;                                    // 0x0050   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0054   (0x0004)  MISSED
};

/// Class /Script/DelMarDiorama.DelMarDriverCameraActor
/// Size: 0x0010 (0x000A20 - 0x000A30)
class ADelMarDriverCameraActor : public ACineCameraActor
{ 
public:
	class USceneCaptureComponent2D*                    CaptureComponent;                                           // 0x0A20   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0A28   (0x0008)  MISSED
};

/// Class /Script/DelMarDiorama.DelMarDriverCheatManager
/// Size: 0x0000 (0x000028 - 0x000028)
class UDelMarDriverCheatManager : public UChildCheatManager
{ 
public:


	/// Functions
	// Function /Script/DelMarDiorama.DelMarDriverCheatManager.DelMarIntercomPlayInteraction
	// void DelMarIntercomPlayInteraction(FString InteractionTag);                                                           // [0x6b8287c] Final|Exec|Native|Protected 
	// Function /Script/DelMarDiorama.DelMarDriverCheatManager.DelMarIntercomBroadcastEmote
	// void DelMarIntercomBroadcastEmote(FString EmoteTag);                                                                  // [0x6b8287c] Final|Exec|Native|Protected 
	// Function /Script/DelMarDiorama.DelMarDriverCheatManager.DelMarDioramaSetVisibleInSceneCaptureOnly
	// void DelMarDioramaSetVisibleInSceneCaptureOnly(bool bOnly);                                                           // [0x63fe5cc] Final|Exec|Native|Protected 
	// Function /Script/DelMarDiorama.DelMarDriverCheatManager.DelMarDioramaSetLocation
	// void DelMarDioramaSetLocation(float X, float Y, float Z);                                                             // [0x8b74074] Final|Exec|Native|Protected 
	// Function /Script/DelMarDiorama.DelMarDriverCheatManager.DelMarDioramaSetLightingChannel
	// void DelMarDioramaSetLightingChannel(bool bMainChannel);                                                              // [0x63fe5cc] Final|Exec|Native|Protected 
	// Function /Script/DelMarDiorama.DelMarDriverCheatManager.DelMarDioramaSetEnabled
	// void DelMarDioramaSetEnabled(bool bEnabled);                                                                          // [0x63fe5cc] Final|Exec|Native|Protected 
	// Function /Script/DelMarDiorama.DelMarDriverCheatManager.DelMarDioramaSetDriverReaction
	// void DelMarDioramaSetDriverReaction(FString ReactionTag);                                                             // [0x6b8287c] Final|Exec|Native|Protected 
	// Function /Script/DelMarDiorama.DelMarDriverCheatManager.DelMarDioramaOpenChannel
	// void DelMarDioramaOpenChannel(bool bOpened);                                                                          // [0x63fe5cc] Final|Exec|Native|Protected 
};

/// Class /Script/DelMarDiorama.DelMarDriverSequenceData
/// Size: 0x0010 (0x000030 - 0x000040)
class UDelMarDriverSequenceData : public UDataAsset
{ 
public:
	class ULevelSequence*                              Sequence;                                                   // 0x0030   (0x0008)  
	int32_t                                            PriorityLevel;                                              // 0x0038   (0x0004)  
	bool                                               bLoop;                                                      // 0x003C   (0x0001)  
	bool                                               bTriggerReactiveWidget;                                     // 0x003D   (0x0001)  
	bool                                               bCameraCut;                                                 // 0x003E   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x003F   (0x0001)  MISSED
};

/// Class /Script/DelMarDiorama.DelMarDriverSequenceDataTable
/// Size: 0x0050 (0x000030 - 0x000080)
class UDelMarDriverSequenceDataTable : public UDataAsset
{ 
public:
	SDK_UNDEFINED(80,13182) /* TMap<FGameplayTag, FDelMarDriverSequenceDataList> */ __um(SequenceListTable);       // 0x0030   (0x0050)  
};

/// Class /Script/DelMarDiorama.DelMarIntercomEvent
/// Size: 0x0018 (0x000028 - 0x000040)
class UDelMarIntercomEvent : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	class AFortPlayerState*                            OwningPlayerState;                                          // 0x0028   (0x0008)  
	class ADelMarVehicle*                              OwningVehicle;                                              // 0x0030   (0x0008)  
	class UDelMarIntercomComponent*                    IntercomComponent;                                          // 0x0038   (0x0008)  
};

/// Class /Script/DelMarDiorama.DelMarIntercomEvent_TurboPassing
/// Size: 0x0010 (0x000040 - 0x000050)
class UDelMarIntercomEvent_TurboPassing : public UDelMarIntercomEvent
{ 
public:
	SDK_UNDEFINED(8,13183) /* TWeakObjectPtr<AFortPlayerState*> */ __um(PlayerAhead);                              // 0x0040   (0x0008)  
	class UDelMarPlayerRaceDataComponent*              RaceData;                                                   // 0x0048   (0x0008)  
};

/// Class /Script/DelMarDiorama.DelMarDriverAnimInstance
/// Size: 0x0020 (0x000460 - 0x000480)
#pragma pack(push, 0x1)
class alignas(0x10) UDelMarDriverAnimInstance : public UFortBaseAnimInstance
{ 
public:
	class ADelMarVehicle*                              BoundVehicle;                                               // 0x0458   (0x0008)  
	bool                                               bDrifting;                                                  // 0x0460   (0x0001)  
	bool                                               bTurboing;                                                  // 0x0461   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0462   (0x0002)  MISSED
	float                                              SteeringAngle;                                              // 0x0464   (0x0004)  
	float                                              SlipAngle;                                                  // 0x0468   (0x0004)  
	float                                              StableSpeed;                                                // 0x046C   (0x0004)  
	float                                              DrivingSpeedThreshold;                                      // 0x0470   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0474   (0x0004)  MISSED


	/// Functions
	// Function /Script/DelMarDiorama.DelMarDriverAnimInstance.IsDrivingSpeed
	// bool IsDrivingSpeed();                                                                                                // [0xb05e6cc] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};
#pragma pack(pop)

/// Class /Script/DelMarDiorama.DelMarCockpitAnimInstance
/// Size: 0x0010 (0x000480 - 0x000490)
class UDelMarCockpitAnimInstance : public UDelMarDriverAnimInstance
{ 
public:
	float                                              DefaultCameraShakeIntensity;                                // 0x0478   (0x0004)  
	float                                              DefaultTerrainAccMultiplier;                                // 0x047C   (0x0004)  
	float                                              DefaultTerrainMaxForwardSpeedPercentage;                    // 0x0480   (0x0004)  
	float                                              CameraShakeIntensity;                                       // 0x0484   (0x0004)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0488   (0x0008)  MISSED
};

/// Class /Script/DelMarDiorama.DelMarDioramaControllerComponent
/// Size: 0x0130 (0x0000A0 - 0x0001D0)
class UDelMarDioramaControllerComponent : public UControllerComponent
{ 
public:
	FVector                                            DioramaOffset;                                              // 0x00A0   (0x0018)  
	class UClass*                                      DioramaClass;                                               // 0x00B8   (0x0008)  
	class UDelMarDriverSequenceDataTable*              CustomizedSequencesTable;                                   // 0x00C0   (0x0008)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x00C8   (0x0008)  MISSED
	FTransform                                         DioramaInitialTransform;                                    // 0x00D0   (0x0060)  
	class UClass*                                      MainChannelClass;                                           // 0x0130   (0x0008)  
	class UDelMarDriverChannel*                        MainChannel;                                                // 0x0138   (0x0008)  
	class UClass*                                      PostRaceChannelClass;                                       // 0x0140   (0x0008)  
	TArray<class UDelMarDriverChannelBase*>            PostRaceChannels;                                           // 0x0148   (0x0010)  
	class APlayerState*                                CachedOwningPlayerState;                                    // 0x0158   (0x0008)  
	class APlayerState*                                ViewTargetPlayer;                                           // 0x0160   (0x0008)  
	SDK_UNDEFINED(8,13184) /* TWeakObjectPtr<ADelMarVehicle*> */ __um(ViewTargetVehicle);                          // 0x0168   (0x0008)  
	SDK_UNDEFINED(80,13185) /* TMap<APlayerState*, ADelMarDioramaActor*> */ __um(PlayerDioramaTable);              // 0x0170   (0x0050)  
	int32_t                                            NumPostRaceChannel;                                         // 0x01C0   (0x0004)  
	unsigned char                                      UnknownData01_6[0xC];                                       // 0x01C4   (0x000C)  MISSED


	/// Functions
	// Function /Script/DelMarDiorama.DelMarDioramaControllerComponent.HandleViewTargetChanged
	// void HandleViewTargetChanged(class AFortPlayerController* PC, class AActor* Old, class AActor* NewViewTarget);        // [0xb05e494] Final|Native|Protected 
};

/// Class /Script/DelMarDiorama.DelMarDriverChannelBase
/// Size: 0x0060 (0x000028 - 0x000088)
class UDelMarDriverChannelBase : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	class UTextureRenderTarget2D*                      ViewRenderTarget;                                           // 0x0028   (0x0008)  
	FIntPoint                                          RenderTargetDim;                                            // 0x0030   (0x0008)  
	unsigned char                                      UnknownData01_5[0x30];                                      // 0x0038   (0x0030)  MISSED
	class UDelMarDriverSequenceDataTable*              SequencesTable;                                             // 0x0068   (0x0008)  
	class APlayerState*                                ViewPlayer;                                                 // 0x0070   (0x0008)  
	class ADelMarDioramaActor*                         ViewDiorama;                                                // 0x0078   (0x0008)  
	class UMovieSceneSequencePlayer*                   SequencePlayer;                                             // 0x0080   (0x0008)  


	/// Functions
	// Function /Script/DelMarDiorama.DelMarDriverChannelBase.HandleSequenceFinished
	// void HandleSequenceFinished();                                                                                        // [0x17b4428] Native|Protected     
};

/// Class /Script/DelMarDiorama.DelMarDriverChannel
/// Size: 0x00D8 (0x000088 - 0x000160)
class UDelMarDriverChannel : public UDelMarDriverChannelBase
{ 
public:
	class ADelMarVehicle*                              ViewVehicle;                                                // 0x0088   (0x0008)  
	TArray<FGameplayTag>                               QueueReactions;                                             // 0x0090   (0x0010)  
	SDK_UNDEFINED(80,13186) /* TMap<FGameplayTag, FDelMarDriverSequenceDataList> */ __um(SequenceListTableInstance); // 0x00A0   (0x0050)  
	SDK_UNDEFINED(80,13187) /* TMap<FGameplayTag, float> */ __um(ReactionCoolDownTimeStamp);                       // 0x00F0   (0x0050)  
	float                                              LandingForceThreshold;                                      // 0x0140   (0x0004)  
	float                                              SlowDownImpactSpeedThreshold;                               // 0x0144   (0x0004)  
	float                                              HitWallImpactThreshold;                                     // 0x0148   (0x0004)  
	float                                              HitWallImpactHardThreshold;                                 // 0x014C   (0x0004)  
	float                                              DraftBonusPercentageThreshold;                              // 0x0150   (0x0004)  
	float                                              StartlineBoostPercentageEarnedThreshold;                    // 0x0154   (0x0004)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0158   (0x0008)  MISSED


	/// Functions
	// Function /Script/DelMarDiorama.DelMarDriverChannel.HandleVehicleSpawned
	// void HandleVehicleSpawned(bool bFirstCar, bool bPrevCarDemolished);                                                   // [0xb05e3d0] Final|Native|Protected 
	// Function /Script/DelMarDiorama.DelMarDriverChannel.HandleVehicleLanded
	// void HandleVehicleLanded(float LandingForce, bool bLandedKickflip);                                                   // [0xb05e308] Final|Native|Protected 
	// Function /Script/DelMarDiorama.DelMarDriverChannel.HandleVehicleHitWall
	// void HandleVehicleHitWall(float ImpactMagnitude, FVector WorldLocation, float ForwardRotationDegrees);                // [0xb05e0b0] Final|Native|Protected|HasDefaults 
	// Function /Script/DelMarDiorama.DelMarDriverChannel.HandleVehicleDemolished
	// void HandleVehicleDemolished(FGameplayTag CausedByTag);                                                               // [0xb05df80] Final|Native|Protected 
	// Function /Script/DelMarDiorama.DelMarDriverChannel.HandleTurboActivated
	// void HandleTurboActivated();                                                                                          // [0xb05df6c] Final|Native|Protected 
	// Function /Script/DelMarDiorama.DelMarDriverChannel.HandleStartlineBoostActivated
	// void HandleStartlineBoostActivated(float PercentageSpeedEarned);                                                      // [0xb05deec] Final|Native|Protected 
	// Function /Script/DelMarDiorama.DelMarDriverChannel.HandleSpeedChanged
	// void HandleSpeedChanged(float NewSpeed);                                                                              // [0xb05de6c] Final|Native|Protected 
	// Function /Script/DelMarDiorama.DelMarDriverChannel.HandleHazardSpeedLost
	// void HandleHazardSpeedLost();                                                                                         // [0xb05de44] Final|Native|Protected 
	// Function /Script/DelMarDiorama.DelMarDriverChannel.HandleDriftBoostActivated
	// void HandleDriftBoostActivated(float PercentageMaxBoostGained);                                                       // [0xb05ddc4] Final|Native|Protected 
	// Function /Script/DelMarDiorama.DelMarDriverChannel.HandleDraftStateChanged
	// void HandleDraftStateChanged(EDelmarDraftingState DraftState);                                                        // [0xb05dd44] Final|Native|Protected 
};

/// Class /Script/DelMarDiorama.DelMarDriverMannequin
/// Size: 0x0000 (0x000630 - 0x000630)
class ADelMarDriverMannequin : public AFortPlayerMannequin
{ 
public:
};

/// Class /Script/DelMarDiorama.DelMarIntercomComponent
/// Size: 0x00C0 (0x0000A0 - 0x000160)
class UDelMarIntercomComponent : public UControllerComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x18];                                      // 0x00A0   (0x0018)  MISSED
	class UClass*                                      GuestChannelClass;                                          // 0x00B8   (0x0008)  
	class UDelMarDriverChannel*                        GuestChannel;                                               // 0x00C0   (0x0008)  
	SDK_UNDEFINED(8,13188) /* TWeakObjectPtr<AFortPlayerPawn*> */ __um(ViewPlayerPawn);                            // 0x00C8   (0x0008)  
	SDK_UNDEFINED(8,13189) /* TWeakObjectPtr<ADelMarDioramaActor*> */ __um(MainChannelDiorama);                    // 0x00D0   (0x0008)  
	class APlayerState*                                ViewPlayerState;                                            // 0x00D8   (0x0008)  
	class UDelMarDioramaControllerComponent*           DioramaControllerComponent;                                 // 0x00E0   (0x0008)  
	TArray<class UClass*>                              ServerEventClasses;                                         // 0x00E8   (0x0010)  
	TArray<class UDelMarIntercomEvent*>                ServerEvents;                                               // 0x00F8   (0x0010)  
	SDK_UNDEFINED(80,13190) /* TMap<FGameplayTag, FDelMarInteractionTagData> */ __um(InteractionTagTable);         // 0x0108   (0x0050)  
	float                                              EmoteBroadcastMaxDistanceSq;                                // 0x0158   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x015C   (0x0004)  MISSED


	/// Functions
	// Function /Script/DelMarDiorama.DelMarIntercomComponent.ServerReceiveInteraction
	// void ServerReceiveInteraction(FGameplayTag EmoteTag, class APlayerState* Receiver);                                   // [0xb05e824] Net|Native|Event|Public|NetServer 
	// Function /Script/DelMarDiorama.DelMarIntercomComponent.ServerReceiveEmote
	// void ServerReceiveEmote(FGameplayTag EmoteTag);                                                                       // [0xb05e6f0] Net|Native|Event|Protected|NetServer 
	// Function /Script/DelMarDiorama.DelMarIntercomComponent.HandleViewTargetChanged
	// void HandleViewTargetChanged(class AFortPlayerController* InController, class AActor* OldViewTarget, class AActor* NewViewTarget); // [0xb05e5d4] Final|Native|Protected 
	// Function /Script/DelMarDiorama.DelMarIntercomComponent.ClientReceiveInteraction
	// void ClientReceiveInteraction(FGameplayTag InteractionTag, class APlayerState* Instigator, class APlayerState* Receiver); // [0xb05da64] Net|Native|Event|Protected|NetClient 
	// Function /Script/DelMarDiorama.DelMarIntercomComponent.ClientReceiveEmote
	// void ClientReceiveEmote(FGameplayTag EmoteTag, class APlayerState* Instigator);                                       // [0xb05d854] Net|Native|Event|Protected|NetClient 
};

/// Struct /Script/DelMarDiorama.DelMarDriverSequenceDataList
/// Size: 0x0018 (0x000000 - 0x000018)
struct FDelMarDriverSequenceDataList
{ 
	TArray<class UDelMarDriverSequenceData*>           SequenceDataList;                                           // 0x0000   (0x0010)  
	float                                              Cooldown;                                                   // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/DelMarDiorama.DelMarEvent_DioramaControllerAdded
/// Size: 0x0008 (0x000000 - 0x000008)
struct FDelMarEvent_DioramaControllerAdded
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/DelMarDiorama.DelMarEvent_DriverChannelOpened
/// Size: 0x0008 (0x000000 - 0x000008)
struct FDelMarEvent_DriverChannelOpened
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/DelMarDiorama.DelMarInteractionTagData
/// Size: 0x0008 (0x000000 - 0x000008)
struct FDelMarInteractionTagData
{ 
	FGameplayTag                                       InstigatorReactionTag;                                      // 0x0000   (0x0004)  
	FGameplayTag                                       ReceiverReactionTag;                                        // 0x0004   (0x0004)  
};

