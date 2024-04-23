
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CommonUI
/// dependency: CommonUILegacy
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: FortniteUI
/// dependency: GameFeatures
/// dependency: UMG

/// Class /Script/KoalaUI.FortGameSettingRegistryExtension_Koala
/// Size: 0x0040 (0x000028 - 0x000068)
class UFortGameSettingRegistryExtension_Koala : public UFortGameSettingRegistryExtension
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FFortSettingNameExtensions)                SettingExtensions                                           OFFSET(getStruct<T>, {0x30, 24, 0, 0})
};

/// Class /Script/KoalaUI.FortSidebarPanelKoala
/// Size: 0x0038 (0x000408 - 0x000440)
class UFortSidebarPanelKoala : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1088;

public:
	CMember(class UCommonButtonBase*)                  Button_KoalaDummy                                           OFFSET(get<T>, {0x420, 8, 0, 0})
	CMember(class UFortLazyImage*)                     QrCodeImage                                                 OFFSET(get<T>, {0x428, 8, 0, 0})
	SMember(FString)                                   QRCodeURL                                                   OFFSET(getStruct<T>, {0x430, 16, 0, 0})


	/// Functions
	// Function /Script/KoalaUI.FortSidebarPanelKoala.OnConnectionChanged
	// void OnConnectionChanged(bool bConnected);                                                                               // [0x1340978] Event|Protected|BlueprintEvent 
};

/// Class /Script/KoalaUI.FortUIGameFeatureAction_AttemptKoalaModal
/// Size: 0x0038 (0x000030 - 0x000068)
class UFortUIGameFeatureAction_AttemptKoalaModal : public UFortUIGameFeatureAction_PostFrontendFlowActions
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	CMember(TWeakObjectPtr<UClass*>)                   KoalaGraphicsModalClass                                     OFFSET(get<T>, {0x30, 32, 0, 0})
};

/// Class /Script/KoalaUI.KoalaGraphicsModal
/// Size: 0x0028 (0x000408 - 0x000430)
class UKoalaGraphicsModal : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1072;

public:
	CMember(class UCommonButtonBase*)                  Button_KeepEnabled                                          OFFSET(get<T>, {0x420, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_Disable                                              OFFSET(get<T>, {0x428, 8, 0, 0})
};

/// Class /Script/KoalaUI.KoalaHUDWidget
/// Size: 0x0158 (0x000408 - 0x000560)
class UKoalaHUDWidget : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1376;

public:
	DMember(float)                                     ClipDebounceTime                                            OFFSET(get<float>, {0x410, 4, 0, 0})
	DMember(float)                                     PlayerKilledPlayerReminderTime                              OFFSET(get<float>, {0x414, 4, 0, 0})
	DMember(float)                                     MatchEndedReminderTime                                      OFFSET(get<float>, {0x418, 4, 0, 0})
	DMember(float)                                     ClipReminderCooldownTime                                    OFFSET(get<float>, {0x41C, 4, 0, 0})
	DMember(float)                                     EliminationClipReminderDelayTime                            OFFSET(get<float>, {0x420, 4, 0, 0})
	CMember(class USoundSubmix*)                       ClipAudioSubmix                                             OFFSET(get<T>, {0x428, 8, 0, 0})
	CMember(class UCommonActionWidget*)                ClipActionWidget                                            OFFSET(get<T>, {0x430, 8, 0, 0})
	SMember(FDataTableRowHandle)                       ClipObjectInputAction                                       OFFSET(getStruct<T>, {0x438, 16, 0, 0})
	CMember(TMap<int32_t, FKoalaClipInfo>)             ClipTracker                                                 OFFSET(get<T>, {0x450, 80, 0, 0})
	DMember(int32_t)                                   LastClipID                                                  OFFSET(get<int32_t>, {0x4A8, 4, 0, 0})
	CMember(EKoalaMockClipMode)                        MockClipMode                                                OFFSET(get<T>, {0x4C2, 1, 0, 0})
	DMember(int32_t)                                   MockClipUploadShortTime                                     OFFSET(get<int32_t>, {0x4C4, 4, 0, 0})
	DMember(int32_t)                                   MockClipUploadLongTime                                      OFFSET(get<int32_t>, {0x4C8, 4, 0, 0})
	DMember(int32_t)                                   MockClipCreateShortTime                                     OFFSET(get<int32_t>, {0x4CC, 4, 0, 0})
	DMember(int32_t)                                   MockClipCreateLongTime                                      OFFSET(get<int32_t>, {0x4D0, 4, 0, 0})


	/// Functions
	// Function /Script/KoalaUI.KoalaHUDWidget.UnregisterClipButtonInput
	// void UnregisterClipButtonInput();                                                                                        // [0xbcab678] Final|Native|Private 
	// Function /Script/KoalaUI.KoalaHUDWidget.RegisterClipButtonInput
	// void RegisterClipButtonInput();                                                                                          // [0xbcab664] Final|Native|Private 
	// Function /Script/KoalaUI.KoalaHUDWidget.OnTouchAreaMouseDown
	// void OnTouchAreaMouseDown();                                                                                             // [0xbcab650] Final|Native|Protected|BlueprintCallable 
	// Function /Script/KoalaUI.KoalaHUDWidget.OnReminderTimerStarted
	// void OnReminderTimerStarted(float Time);                                                                                 // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Script/KoalaUI.KoalaHUDWidget.OnReminderEnded
	// void OnReminderEnded();                                                                                                  // [0xbcab638] Final|Native|Protected|BlueprintCallable 
	// Function /Script/KoalaUI.KoalaHUDWidget.OnRecordingStatusChanged
	// void OnRecordingStatusChanged(EKoalaRecording InRecordingStatus);                                                        // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Script/KoalaUI.KoalaHUDWidget.OnInputProgress
	// void OnInputProgress(float Progress);                                                                                    // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Script/KoalaUI.KoalaHUDWidget.OnInputComplete
	// void OnInputComplete();                                                                                                  // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Script/KoalaUI.KoalaHUDWidget.OnConnectionChanged
	// void OnConnectionChanged(EKoalaConnectionStatus InStatus);                                                               // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Script/KoalaUI.KoalaHUDWidget.OnClipStatusChanged
	// void OnClipStatusChanged(int32_t InClipID, EKoalaClipStatus InClipStatus, float InUploadProgress);                       // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Script/KoalaUI.KoalaHUDWidget.OnAvailabilityChanged
	// void OnAvailabilityChanged(EKoalaAvailability Availability);                                                             // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Script/KoalaUI.KoalaHUDWidget.HandlePlayerPawnEmoteStopped
	// void HandlePlayerPawnEmoteStopped(class UFortItemDefinition* MontageItemDef, class AFortPawn* PawnEmoting);              // [0xbcab4cc] Final|Native|Private 
	// Function /Script/KoalaUI.KoalaHUDWidget.HandlePlayerMatchWon
	// void HandlePlayerMatchWon();                                                                                             // [0xbcab4b8] Final|Native|Private 
	// Function /Script/KoalaUI.KoalaHUDWidget.HandleLocalPlayerKilledPlayer
	// void HandleLocalPlayerKilledPlayer(class AFortPlayerStateAthena* Player);                                                // [0xbcab438] Final|Native|Private 
	// Function /Script/KoalaUI.KoalaHUDWidget.GetUploadingClipCount
	// int32_t GetUploadingClipCount();                                                                                         // [0xbcab414] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/KoalaUI.KoalaHUDWidget.GetTrackedClipCount
	// int32_t GetTrackedClipCount();                                                                                           // [0xab8da50] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/KoalaUI.KoalaMainMenuButton
/// Size: 0x0010 (0x0015F0 - 0x001600)
class UKoalaMainMenuButton : public UFortMainMenuButtonExtension
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5632;

public:
};

/// Class /Script/KoalaUI.KoalaSettingDetailExtension
/// Size: 0x0008 (0x0002D0 - 0x0002D8)
class UKoalaSettingDetailExtension : public UFortSettingDetailExtension
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 728;

public:


	/// Functions
	// Function /Script/KoalaUI.KoalaSettingDetailExtension.OnConnectionChanged
	// void OnConnectionChanged(bool bConnected);                                                                               // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Script/KoalaUI.KoalaSettingDetailExtension.OnAvailabilityChanged
	// void OnAvailabilityChanged(bool bAvailable);                                                                             // [0x1340978] Event|Protected|BlueprintEvent 
};

/// Struct /Script/KoalaUI.KoalaClipInfo
/// Size: 0x0018 (0x000000 - 0x000018)
class FKoalaClipInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Enum /Script/KoalaUI.EKoalaClipEventType
/// Size: 0x06
enum class EKoalaClipEventType : uint8_t
{
	EKoalaClipEventType__Manual                                                      = 0,
	EKoalaClipEventType__Elimination                                                 = 1,
	EKoalaClipEventType__VictoryRoyale                                               = 2,
	EKoalaClipEventType__Emote                                                       = 3,
	EKoalaClipEventType__COUNT                                                       = 4,
	EKoalaClipEventType__EKoalaClipEventType_MAX                                     = 5
};

/// Enum /Script/KoalaUI.EKoalaAvailability
/// Size: 0x05
enum class EKoalaAvailability : uint8_t
{
	EKoalaAvailability__Pending                                                      = 0,
	EKoalaAvailability__NotAvailable                                                 = 1,
	EKoalaAvailability__Available                                                    = 2,
	EKoalaAvailability__COUNT                                                        = 3,
	EKoalaAvailability__EKoalaAvailability_MAX                                       = 4
};

/// Enum /Script/KoalaUI.EKoalaRecording
/// Size: 0x05
enum class EKoalaRecording : uint8_t
{
	EKoalaRecording__Pending                                                         = 0,
	EKoalaRecording__NotRecording                                                    = 1,
	EKoalaRecording__Recording                                                       = 2,
	EKoalaRecording__COUNT                                                           = 3,
	EKoalaRecording__EKoalaRecording_MAX                                             = 4
};

/// Enum /Script/KoalaUI.EKoalaConnectionStatus
/// Size: 0x05
enum class EKoalaConnectionStatus : uint8_t
{
	EKoalaConnectionStatus__Pending                                                  = 0,
	EKoalaConnectionStatus__NotConnected                                             = 1,
	EKoalaConnectionStatus__Connected                                                = 2,
	EKoalaConnectionStatus__COUNT                                                    = 3,
	EKoalaConnectionStatus__EKoalaConnectionStatus_MAX                               = 4
};

/// Enum /Script/KoalaUI.EKoalaClipStatus
/// Size: 0x07
enum class EKoalaClipStatus : uint8_t
{
	EKoalaClipStatus__None                                                           = 0,
	EKoalaClipStatus__Creating                                                       = 1,
	EKoalaClipStatus__Uploading                                                      = 2,
	EKoalaClipStatus__Completed                                                      = 3,
	EKoalaClipStatus__Failed                                                         = 4,
	EKoalaClipStatus__COUNT                                                          = 5,
	EKoalaClipStatus__EKoalaClipStatus_MAX                                           = 6
};

/// Enum /Script/KoalaUI.EKoalaMockClipMode
/// Size: 0x07
enum class EKoalaMockClipMode : uint8_t
{
	EKoalaMockClipMode__None                                                         = 0,
	EKoalaMockClipMode__ShortSuccess                                                 = 1,
	EKoalaMockClipMode__ShortFailure                                                 = 2,
	EKoalaMockClipMode__LongSuccess                                                  = 3,
	EKoalaMockClipMode__LongFailure                                                  = 4,
	EKoalaMockClipMode__COUNT                                                        = 5,
	EKoalaMockClipMode__EKoalaMockClipMode_MAX                                       = 6
};

