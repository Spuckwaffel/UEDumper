
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: AudioGameplay
/// dependency: AudioShapes
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: ItemizationCoreRuntime
/// dependency: McpProfileSys
/// dependency: MediaAssets
/// dependency: ModularGameplay

/// Class /Script/SrirachaRanch.StreamingRadioAudioShapeComponent
/// Size: 0x0058 (0x000148 - 0x0001A0)
class UStreamingRadioAudioShapeComponent : public UFortAudioShapeComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
	DMember(float)                                     Radius                                                      OFFSET(get<float>, {0x148, 4, 0, 0})
	CMember(class UStreamingRadioPlayerComponent*)     RadioPlayer                                                 OFFSET(get<T>, {0x150, 8, 0, 0})
};

/// Class /Script/SrirachaRanch.SrirachaRanchComponentTemplateWrapper
/// Size: 0x0008 (0x000030 - 0x000038)
class USrirachaRanchComponentTemplateWrapper : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(class UMediaSoundComponent*)               MediaSoundPlayerTemplate                                    OFFSET(get<T>, {0x30, 8, 0, 0})
};

/// Class /Script/SrirachaRanch.StreamingRadioPlayerComponent
/// Size: 0x03B8 (0x0000A8 - 0x000460)
class UStreamingRadioPlayerComponent : public UFortPawnComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1120;

public:
	CMember(TMap<FName, FSrirachaInputMappingData>)    InputMappingData                                            OFFSET(get<T>, {0xB8, 80, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnSourceLoading                                             OFFSET(getStruct<T>, {0x108, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnSourcePlayed                                              OFFSET(getStruct<T>, {0x118, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnSourceStopped                                             OFFSET(getStruct<T>, {0x128, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnSourceFailed                                              OFFSET(getStruct<T>, {0x138, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnMetadataChanged                                           OFFSET(getStruct<T>, {0x148, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnRadioExplicitStop                                         OFFSET(getStruct<T>, {0x158, 16, 0, 0})
	DMember(float)                                     PercentAutostartRadio                                       OFFSET(get<float>, {0x168, 4, 0, 0})
	CMember(TArray<FName>)                             DisabledVehicleList                                         OFFSET(get<T>, {0x170, 16, 0, 0})
	CMember(TMap<FName, float>)                        ExteriorVolumeMultiplierMap                                 OFFSET(get<T>, {0x180, 80, 0, 0})
	CMember(TMap<FName, float>)                        InteriorVolumeMultiplierMap                                 OFFSET(get<T>, {0x1D0, 80, 0, 0})
	DMember(bool)                                      bMinimalStateOnPlatform                                     OFFSET(get<bool>, {0x220, 1, 0, 0})
	CMember(TArray<FString>)                           DisabledStationList                                         OFFSET(get<T>, {0x228, 16, 0, 0})
	DMember(bool)                                      bAutostartOnEntry                                           OFFSET(get<bool>, {0x238, 1, 0, 0})
	DMember(bool)                                      bDisabledForCurrentPlayerState                              OFFSET(get<bool>, {0x239, 1, 0, 0})
	SMember(FStreamingRadioSourceData)                 ReplicatedRadioSourceData                                   OFFSET(getStruct<T>, {0x240, 96, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnReplicatedStateChangedDelegate                            OFFSET(getStruct<T>, {0x2A0, 16, 0, 0})
	CMember(class UMediaSoundComponent*)               SoundComponent                                              OFFSET(get<T>, {0x2B0, 8, 0, 0})
	CMember(class UStreamingRadioAudioShapeComponent*) AudioShape                                                  OFFSET(get<T>, {0x2B8, 8, 0, 0})
	CMember(class USrirachaRanchComponentTemplateWrapper*) SoundCompTemplateSource                                 OFFSET(get<T>, {0x2C0, 8, 0, 0})
	SMember(FAthenaRadioStation)                       LastSource                                                  OFFSET(getStruct<T>, {0x2C8, 80, 0, 0})
	CMember(TArray<class URadioContentSourceItemDefinition*>) Sources                                              OFFSET(get<T>, {0x318, 16, 0, 0})
	SMember(FAthenaRadioStation)                       FallbackSource                                              OFFSET(getStruct<T>, {0x328, 80, 0, 0})
	CMember(TMap<FGameplayTag, FSrirachaPerClassSpecialSeats>) SpecialSeatList                                     OFFSET(get<T>, {0x378, 80, 0, 0})
	CMember(class UFortBaseStreamingVideo*)            BasePlayerInstance                                          OFFSET(get<T>, {0x3C8, 8, 0, 0})
	CMember(class USoundSubmixBase*)                   DefaultSoundSubmix                                          OFFSET(get<T>, {0x3D0, 8, 0, 0})
	CMember(class USoundSubmixBase*)                   LicensedSoundSubmix                                         OFFSET(get<T>, {0x3D8, 8, 0, 0})
	CMember(ERadioSource)                              CurrentMode                                                 OFFSET(get<T>, {0x3E0, 1, 0, 0})
	DMember(int32_t)                                   MaximumRetries                                              OFFSET(get<int32_t>, {0x3E4, 4, 0, 0})
	DMember(int32_t)                                   FadeoutWhenUnpoweredInMS                                    OFFSET(get<int32_t>, {0x3E8, 4, 0, 0})
	DMember(int32_t)                                   FadeoutWhenOwnerBeingDestroyedInMS                          OFFSET(get<int32_t>, {0x3EC, 4, 0, 0})
	DMember(int32_t)                                   MaxFadeoutTimeMS                                            OFFSET(get<int32_t>, {0x3F0, 4, 0, 0})
	DMember(int32_t)                                   DefaultPlayingIndex                                         OFFSET(get<int32_t>, {0x3F4, 4, 0, 0})
	CMember(class USoundMix*)                          SoundMixInside                                              OFFSET(get<T>, {0x3F8, 8, 0, 0})
	CMember(class USoundMix*)                          SoundMixOutside                                             OFFSET(get<T>, {0x400, 8, 0, 0})
	DMember(float)                                     ActivationRadius                                            OFFSET(get<float>, {0x40C, 4, 0, 0})
	SMember(FName)                                     ComponentToAttachTo                                         OFFSET(getStruct<T>, {0x410, 4, 0, 0})
	SMember(FName)                                     ComponentSocketAttachTo                                     OFFSET(getStruct<T>, {0x414, 4, 0, 0})
	CMember(class UFortStreamMediaSource*)             MediaSource                                                 OFFSET(get<T>, {0x418, 8, 0, 0})
	CMember(TArray<FAthenaRadioStation>)               RadioStationList                                            OFFSET(get<T>, {0x420, 16, 0, 0})
	CMember(class UObject*)                            DelegateContextObject                                       OFFSET(get<T>, {0x430, 8, 0, 0})
	DMember(float)                                     MediaStartTimeFromInit                                      OFFSET(get<float>, {0x438, 4, 0, 0})


	/// Functions
	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.ToggleRadioActive
	// void ToggleRadioActive();                                                                                                // [0xb4838dc] Final|Native|Public|BlueprintCallable 
	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.StopRadioWithFadeout
	// void StopRadioWithFadeout(int32_t Milliseconds);                                                                         // [0xb48385c] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.StopRadio
	// void StopRadio();                                                                                                        // [0xb483848] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.StopIfNoDriver
	// void StopIfNoDriver(TScriptInterface<Class>& Vehicle);                                                                   // [0xb4837b8] Final|Native|Protected|HasOutParms 
	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.StartRadio
	// void StartRadio(int32_t IdxToPlay, bool bFallbackOverride);                                                              // [0xb4836f4] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.SoundMixUpdateWeaponState
	// void SoundMixUpdateWeaponState(class AFortWeapon* NewWeapon, class AFortWeapon* PrevWeapon);                             // [0xb483584] Final|Native|Private 
	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.SoundMixUpdateTargetingState
	// void SoundMixUpdateTargetingState(bool bNewIsTargeting);                                                                 // [0xb4834fc] Final|Native|Private 
	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.SetInteriorVolume
	// void SetInteriorVolume(TScriptInterface<Class>& Vehicle);                                                                // [0xb48346c] Final|Native|Protected|HasOutParms 
	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.SetExteriorVolume
	// void SetExteriorVolume(TScriptInterface<Class>& Vehicle);                                                                // [0xb4833dc] Final|Native|Protected|HasOutParms 
	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.SetActivationRadius
	// void SetActivationRadius(float InRadius);                                                                                // [0xb483350] Final|Native|Public|BlueprintCallable 
	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.ServerStopRadio
	// void ServerStopRadio();                                                                                                  // [0x14b0af0] Net|NetReliableNative|Event|Public|NetServer 
	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.ServerSetDisabledForCurrentPlayerState
	// void ServerSetDisabledForCurrentPlayerState(bool bInDisableForCurrentPlayerState);                                       // [0xb4832cc] Net|NetReliableNative|Event|Public|NetServer 
	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.ServerSaveFadeOutTime
	// void ServerSaveFadeOutTime(float InFadeOutSeconds);                                                                      // [0xb2d6808] Net|NetReliableNative|Event|Public|NetServer 
	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.ServerSavedSource
	// void ServerSavedSource(FAthenaRadioStation InSource);                                                                    // [0xb483238] Net|NetReliableNative|Event|Public|NetServer 
	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.ServerSaveAutoStart
	// void ServerSaveAutoStart(bool bInAutoStart);                                                                             // [0xb4831b4] Net|NetReliableNative|Event|Public|NetServer 
	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.ServerPlayIndex
	// void ServerPlayIndex(int32_t InIndex, EStreamingRadioSourceState InState);                                               // [0xb4830ec] Net|NetReliableNative|Event|Public|NetServer 
	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.PlayPrevIndex
	// void PlayPrevIndex();                                                                                                    // [0xb4830d8] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.PlayNextIndex
	// void PlayNextIndex();                                                                                                    // [0xb4830c4] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.PlayIndex
	// void PlayIndex(int32_t Index);                                                                                           // [0xb483044] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.PlayDefaultIndex
	// void PlayDefaultIndex();                                                                                                 // [0xb483030] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.OnRep_RadioSourceData
	// void OnRep_RadioSourceData();                                                                                            // [0x2a6a7bc] Final|Native|Protected 
	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.OnPiPPlayerBlockedChanged
	// void OnPiPPlayerBlockedChanged(bool bPiPPlayerBlocking);                                                                 // [0xb482fb0] Final|Native|Protected 
	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.OnPawnExitVehicle
	// void OnPawnExitVehicle(TScriptInterface<Class>& Vehicle, class AFortPawn* PlayerPawn, int32_t SeatIndex);                // [0x1340978] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.OnPawnExitSeat
	// void OnPawnExitSeat(TScriptInterface<Class>& Vehicle, class AFortPawn* PlayerPawn, int32_t SeatIndex);                   // [0x1340978] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.OnPawnEnterVehicle
	// void OnPawnEnterVehicle(TScriptInterface<Class>& Vehicle, class AFortPawn* PlayerPawn, int32_t SeatIndex);               // [0x1340978] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.OnPawnEnterSeat
	// void OnPawnEnterSeat(TScriptInterface<Class>& Vehicle, class AFortPawn* PlayerPawn, int32_t SeatIndex);                  // [0x1340978] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.OnOwningVehicleDied
	// void OnOwningVehicleDied(class AFortAthenaVehicle* DeadVehicle, FGameplayTagContainer& InTags, class AController* EventInstigator, class AActor* DamageCauser); // [0xb482da8] Final|Native|Protected|HasOutParms 
	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.OnOwnerUnpowered
	// void OnOwnerUnpowered();                                                                                                 // [0xb482d90] Final|Native|Protected 
	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.OnOwnerReFueled
	// void OnOwnerReFueled();                                                                                                  // [0x306d6ec] Final|Native|Protected 
	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.OnOwnerOutOfFuel
	// void OnOwnerOutOfFuel();                                                                                                 // [0xb482d7c] Final|Native|Protected 
	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.OnOwnerExploded
	// void OnOwnerExploded();                                                                                                  // [0xb482d64] Final|Native|Protected 
	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.OnOwnerDisabledChanged
	// void OnOwnerDisabledChanged(bool bDisabled);                                                                             // [0xb482ce4] Final|Native|Protected 
	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.NativeOnVehicleOwnerChanged
	// void NativeOnVehicleOwnerChanged(TScriptInterface<Class>& Vehicle, class AActor* NewOwner, class AActor* PrevOwner);     // [0xb482a54] Final|Native|Protected|HasOutParms 
	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.NativeOnPawnExitVehicle
	// void NativeOnPawnExitVehicle(TScriptInterface<Class>& Vehicle, class AFortPawn* PlayerPawn, int32_t SeatIndex);          // [0x35e1138] Final|Native|Protected|HasOutParms 
	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.NativeOnPawnExitSeat
	// void NativeOnPawnExitSeat(TScriptInterface<Class>& Vehicle, class AFortPawn* PlayerPawn, int32_t SeatIndex);             // [0x36237b0] Final|Native|Protected|HasOutParms 
	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.NativeOnPawnEnterVehicle
	// void NativeOnPawnEnterVehicle(TScriptInterface<Class>& Vehicle, class AFortPawn* PlayerPawn, int32_t SeatIndex);         // [0x219a6e8] Final|Native|Protected|HasOutParms 
	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.NativeOnPawnEnterSeat
	// void NativeOnPawnEnterSeat(TScriptInterface<Class>& Vehicle, class AFortPawn* PlayerPawn, int32_t SeatIndex);            // [0x219a438] Final|Native|Protected|HasOutParms 
	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.MetadataChanged
	// void MetadataChanged(FFortMediaInBandMetadata MetaData);                                                                 // [0x214f890] Final|Native|Protected 
	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.MediaTerminalError
	// void MediaTerminalError(EBaseMediaTerminalErrorReason Reason);                                                           // [0xb4829d4] Final|Native|Protected 
	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.MediaResumed
	// void MediaResumed();                                                                                                     // [0x256ac00] Final|Native|Protected 
	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.MediaOnSuccess
	// void MediaOnSuccess();                                                                                                   // [0x42c3cd4] Final|Native|Protected 
	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.MediaEnded
	// void MediaEnded();                                                                                                       // [0xb4829c0] Final|Native|Protected 
	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.MediaClosed
	// void MediaClosed();                                                                                                      // [0xb4829ac] Final|Native|Protected 
	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.MediaClose
	// void MediaClose();                                                                                                       // [0xb482998] Final|Native|Protected 
	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.IsRadioOn
	// bool IsRadioOn();                                                                                                        // [0xb482974] Final|Native|Protected|Const 
	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.IsPlayingLiveFeed
	// bool IsPlayingLiveFeed();                                                                                                // [0xb482940] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.IsExternalSeat
	// bool IsExternalSeat(int32_t SeatIdx);                                                                                    // [0xb4828b4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.HandleLicensedAudioTreatmentChanged
	// void HandleLicensedAudioTreatmentChanged(UCPTypes UCPType);                                                              // [0xb48280c] Final|Native|Protected 
	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.GetOptionAt
	// FAthenaRadioStation GetOptionAt(int32_t idx);                                                                            // [0xb48275c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.GetMediaMetadata
	// FFortMediaInBandMetadata GetMediaMetadata();                                                                             // [0xb482718] Final|Native|Public|BlueprintCallable 
	// Function /Script/SrirachaRanch.StreamingRadioPlayerComponent.GetBaseStreamingVideo
	// class UFortBaseStreamingVideo* GetBaseStreamingVideo();                                                                  // [0xb482700] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/SrirachaRanch.RadioContentSourceItemDefinition
/// Size: 0x0018 (0x000200 - 0x000218)
class URadioContentSourceItemDefinition : public UFortAccountItemDefinition
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 536;

public:
	SMember(FString)                                   ResourceID                                                  OFFSET(getStruct<T>, {0x200, 16, 0, 0})
	CMember(class UFortStreamMediaSource*)             MediaSource                                                 OFFSET(get<T>, {0x210, 8, 0, 0})
};

/// Struct /Script/SrirachaRanch.AthenaRadioStation
/// Size: 0x0050 (0x000000 - 0x000050)
class FAthenaRadioStation : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FText)                                     Title                                                       OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   StationImage                                                OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FString)                                   ResourceID                                                  OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	CMember(TArray<FString>)                           GameplayTagDenylist                                         OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TArray<FString>)                           GameplayTagAllowlist                                        OFFSET(get<T>, {0x40, 16, 0, 0})
};

/// Struct /Script/SrirachaRanch.SrirachaPerClassSpecialSeats
/// Size: 0x0010 (0x000000 - 0x000010)
class FSrirachaPerClassSpecialSeats : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<int32_t>)                           OutsideSeatIndices                                          OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/SrirachaRanch.StreamingRadioSourceData
/// Size: 0x0060 (0x000000 - 0x000060)
class FStreamingRadioSourceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(EStreamingRadioSourceState)                State                                                       OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(int32_t)                                   PlayingIndex                                                OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(float)                                     FadeoutSeconds                                              OFFSET(get<float>, {0x8, 4, 0, 0})
	SMember(FAthenaRadioStation)                       SourceOverride                                              OFFSET(getStruct<T>, {0x10, 80, 0, 0})
};

/// Struct /Script/SrirachaRanch.SrirachaInputMappingData
/// Size: 0x0018 (0x000000 - 0x000018)
class FSrirachaInputMappingData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FName)                                     MainActionName                                              OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FName)                                     GamepadActionName                                           OFFSET(getStruct<T>, {0x4, 4, 0, 0})
	SMember(FText)                                     DisplayName                                                 OFFSET(getStruct<T>, {0x8, 16, 0, 0})
};

/// Enum /Script/SrirachaRanch.EStreamingRadioSourceState
/// Size: 0x05
enum class EStreamingRadioSourceState : uint8_t
{
	EStreamingRadioSourceState__None                                                 = 0,
	EStreamingRadioSourceState__LoadingPlayer                                        = 1,
	EStreamingRadioSourceState__LoadedPlayer                                         = 2,
	EStreamingRadioSourceState__Playing                                              = 3,
	EStreamingRadioSourceState__EStreamingRadioSourceState_MAX                       = 4
};

/// Enum /Script/SrirachaRanch.EOnlineRadioSourceType
/// Size: 0x02
enum class EOnlineRadioSourceType : uint8_t
{
	EOnlineRadioSourceType__Epic                                                     = 0,
	EOnlineRadioSourceType__EOnlineRadioSourceType_MAX                               = 1
};

/// Enum /Script/SrirachaRanch.ERadioSource
/// Size: 0x03
enum class ERadioSource : uint8_t
{
	ERadioSource__Invalid                                                            = 0,
	ERadioSource__Vehicle                                                            = 1,
	ERadioSource__ERadioSource_MAX                                                   = 2
};

