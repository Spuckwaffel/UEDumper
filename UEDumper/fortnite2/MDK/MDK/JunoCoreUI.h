
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CommonUI
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: FortniteUI
/// dependency: JunoWorldManagement
/// dependency: ModelViewViewModel
/// dependency: UMG

/// Class /Script/JunoCoreUI.JunoPlayerAvatarContainer
/// Size: 0x0008 (0x000330 - 0x000338)
class UJunoPlayerAvatarContainer : public UFortHUDElementWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 824;

public:
	CMember(class UFortPlayerAvatarViewModel*)         PlayerAvatarViewModel                                       OFFSET(get<T>, {0x330, 8, 0, 0})


	/// Functions
	// Function /Script/JunoCoreUI.JunoPlayerAvatarContainer.RepresentRemotePlayer
	// void RepresentRemotePlayer(FUniqueNetIdRepl& UniqueID, class UFortPlayerAvatarViewModel* InPlayerAvatarViewModel);       // [0xcd7f214] Final|Native|Protected|HasOutParms|BlueprintCallable 
	// Function /Script/JunoCoreUI.JunoPlayerAvatarContainer.RepresentLocalPlayer
	// void RepresentLocalPlayer(class UFortPlayerAvatarViewModel* InPlayerAvatarViewModel);                                    // [0xcd7f0f4] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/JunoCoreUI.JunoPlayerCardViewModel
/// Size: 0x00A0 (0x000068 - 0x000108)
class UJunoPlayerCardViewModel : public UMVVMViewModelBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:
	SMember(FText)                                     PlayerName                                                  OFFSET(getStruct<T>, {0x68, 16, 0, 0})
	CMember(EJunoWorldOccupantKind)                    PlayerRole                                                  OFFSET(get<T>, {0x78, 1, 0, 0})
	CMember(EJunoPlayerCardStatus)                     PlayerStatus                                                OFFSET(get<T>, {0x79, 1, 0, 0})
	DMember(bool)                                      IsInParty                                                   OFFSET(get<bool>, {0x7A, 1, 0, 0})
	DMember(bool)                                      IsViewOnly                                                  OFFSET(get<bool>, {0x7B, 1, 0, 0})
	DMember(bool)                                      IsFriendsWithWorldOwner                                     OFFSET(get<bool>, {0x7C, 1, 0, 0})
	DMember(int32_t)                                   NumKeysLeft                                                 OFFSET(get<int32_t>, {0x80, 4, 0, 0})
	SMember(FUniqueNetIdRepl)                          UniqueNetId                                                 OFFSET(getStruct<T>, {0x88, 48, 0, 0})
	CMember(class AFortPlayerControllerAthena*)        OwningPlayerController                                      OFFSET(get<T>, {0xB8, 8, 0, 0})
	CMember(class UClass*)                             OpenProfileActionMenuClass                                  OFFSET(get<T>, {0xC0, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnWorldKeyGranted                                           OFFSET(getStruct<T>, {0xE8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnWorldKeyRevoked                                           OFFSET(getStruct<T>, {0xF8, 16, 0, 0})


	/// Functions
	// Function /Script/JunoCoreUI.JunoPlayerCardViewModel.ShowNotificationToast
	// void ShowNotificationToast(class AFortPlayerController* FortPlayerController, FText& Title, FText& Description, EFortNotificationType NotificationType); // [0xcd7f56c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoCoreUI.JunoPlayerCardViewModel.RevokeWorldKey
	// void RevokeWorldKey();                                                                                                   // [0xcd7f444] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoCoreUI.JunoPlayerCardViewModel.OpenSidebarUserProfile
	// void OpenSidebarUserProfile(class UCommonActivatableWidget* CurrentStateWidget, class ULocalPlayer* LocalPlayer);        // [0xcd7f020] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoCoreUI.JunoPlayerCardViewModel.OnWorldKeyRevoked__DelegateSignature
	// void OnWorldKeyRevoked__DelegateSignature();                                                                             // [0x228deb8] MulticastDelegate|Public|Delegate 
	// Function /Script/JunoCoreUI.JunoPlayerCardViewModel.OnWorldKeyGranted__DelegateSignature
	// void OnWorldKeyGranted__DelegateSignature();                                                                             // [0x228deb8] MulticastDelegate|Public|Delegate 
	// Function /Script/JunoCoreUI.JunoPlayerCardViewModel.KickWorldUser
	// void KickWorldUser();                                                                                                    // [0xcd7f00c] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoCoreUI.JunoPlayerCardViewModel.GrantWorldKey
	// void GrantWorldKey();                                                                                                    // [0xcd7ed64] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/JunoCoreUI.JunoPlayerManagementViewModel
/// Size: 0x0078 (0x000068 - 0x0000E0)
class UJunoPlayerManagementViewModel : public UMVVMViewModelBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	CMember(TArray<class UJunoPlayerCardViewModel*>)   NeedsInvitePlayerCards                                      OFFSET(get<T>, {0x68, 16, 0, 0})
	CMember(TArray<class UJunoPlayerCardViewModel*>)   InWorldPlayerCards                                          OFFSET(get<T>, {0x78, 16, 0, 0})
	CMember(TArray<class UJunoPlayerCardViewModel*>)   NotInWorldPlayerCards                                       OFFSET(get<T>, {0x88, 16, 0, 0})
	CMember(class UJunoPlayerCardViewModel*)           SelectedPlayerCard                                          OFFSET(get<T>, {0x98, 8, 0, 0})
	CMember(EJunoWorldSanctionType)                    WorldSanctionType                                           OFFSET(get<T>, {0xA0, 1, 0, 0})
	DMember(int32_t)                                   NumKeysLeft                                                 OFFSET(get<int32_t>, {0xA4, 4, 0, 0})
	DMember(int32_t)                                   NumSpotsLeft                                                OFFSET(get<int32_t>, {0xA8, 4, 0, 0})
	SMember(FText)                                     WorldName                                                   OFFSET(getStruct<T>, {0xB0, 16, 0, 0})
	SMember(FText)                                     OwnerName                                                   OFFSET(getStruct<T>, {0xC0, 16, 0, 0})
	DMember(bool)                                      IsWorldOwner                                                OFFSET(get<bool>, {0xD0, 1, 0, 0})
	DMember(bool)                                      IsViewOnly                                                  OFFSET(get<bool>, {0xD1, 1, 0, 0})
	DMember(int32_t)                                   MaxNumOfPlayers                                             OFFSET(get<int32_t>, {0xD4, 4, 0, 0})
	DMember(int32_t)                                   MaxNumOfKeys                                                OFFSET(get<int32_t>, {0xD8, 4, 0, 0})


	/// Functions
	// Function /Script/JunoCoreUI.JunoPlayerManagementViewModel.UpdateFromData
	// void UpdateFromData(class APlayerController* WidgetOwner, class UJunoWorld* JunoWorld);                                  // [0xcd7f730] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoCoreUI.JunoPlayerManagementViewModel.SetupDummyData
	// void SetupDummyData();                                                                                                   // [0xcd7f558] Final|Native|Private|BlueprintCallable 
	// Function /Script/JunoCoreUI.JunoPlayerManagementViewModel.IsInGame
	// bool IsInGame();                                                                                                         // [0xcd7efe8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/JunoCoreUI.JunoUGCViewModel
/// Size: 0x0048 (0x000068 - 0x0000B0)
class UJunoUGCViewModel : public UMVVMViewModelBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	SMember(FText)                                     CurrentText                                                 OFFSET(getStruct<T>, {0x68, 16, 0, 0})
	SMember(FText)                                     DefaultText                                                 OFFSET(getStruct<T>, {0x78, 16, 0, 0})
	DMember(bool)                                      bPendingSave                                                OFFSET(get<bool>, {0x88, 1, 0, 0})
	DMember(bool)                                      bCharLimitReached                                           OFFSET(get<bool>, {0x89, 1, 0, 0})
	DMember(bool)                                      bContainsSpecialChar                                        OFFSET(get<bool>, {0x8A, 1, 0, 0})
	DMember(bool)                                      bContainsProfanity                                          OFFSET(get<bool>, {0x8B, 1, 0, 0})
	DMember(bool)                                      bCustomValidationFailed                                     OFFSET(get<bool>, {0x8C, 1, 0, 0})
	DMember(bool)                                      bTextIsValid                                                OFFSET(get<bool>, {0x8D, 1, 0, 0})


	/// Functions
	// Function /Script/JunoCoreUI.JunoUGCViewModel.SetTextIfValid
	// void SetTextIfValid(bool bIsValid, FText& ValidText);                                                                    // [0xcd7f46c] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/JunoCoreUI.JunoWorldDataViewModel
/// Size: 0x0128 (0x000068 - 0x000190)
class UJunoWorldDataViewModel : public UMVVMViewModelBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
	SMember(FText)                                     WorldName                                                   OFFSET(getStruct<T>, {0x68, 16, 0, 0})
	DMember(int32_t)                                   WorldSlotNumber                                             OFFSET(get<int32_t>, {0x78, 4, 0, 0})
	SMember(FText)                                     WorldOwner                                                  OFFSET(getStruct<T>, {0x80, 16, 0, 0})
	SMember(FUniqueNetIdRepl)                          WorldOwnerId                                                OFFSET(getStruct<T>, {0x90, 48, 0, 0})
	SMember(FDateTime)                                 CreationDate                                                OFFSET(getStruct<T>, {0xC0, 8, 0, 0})
	SMember(FDateTime)                                 LastPlayed                                                  OFFSET(getStruct<T>, {0xC8, 8, 0, 0})
	SMember(FText)                                     TimePlayed                                                  OFFSET(getStruct<T>, {0xD0, 16, 0, 0})
	DMember(bool)                                      bIsCreateFlow                                               OFFSET(get<bool>, {0xE0, 1, 0, 0})
	DMember(bool)                                      bIsEmptyWorldSlot                                           OFFSET(get<bool>, {0xE1, 1, 0, 0})
	DMember(bool)                                      bIsNewInvitation                                            OFFSET(get<bool>, {0xE2, 1, 0, 0})
	CMember(class UJunoWorldImageObject*)              WorldImageObj                                               OFFSET(get<T>, {0xE8, 8, 0, 0})
	DMember(int32_t)                                   ActivePlayers                                               OFFSET(get<int32_t>, {0xF0, 4, 0, 0})
	DMember(int32_t)                                   GrantedKeys                                                 OFFSET(get<int32_t>, {0xF4, 4, 0, 0})
	CMember(class UJunoWorldSettingViewModel*)         NameVM                                                      OFFSET(get<T>, {0xF8, 8, 0, 0})
	CMember(class UJunoWorldSettingViewModel*)         ModeVM                                                      OFFSET(get<T>, {0x100, 8, 0, 0})
	CMember(class UJunoWorldSettingViewModel*)         ImageVM                                                     OFFSET(get<T>, {0x108, 8, 0, 0})
	CMember(class UJunoWorldSettingViewModel*)         SeedVM                                                      OFFSET(get<T>, {0x110, 8, 0, 0})
	DMember(bool)                                      bSettingsLocked                                             OFFSET(get<bool>, {0x118, 1, 0, 0})
	DMember(bool)                                      bSettingsChangedAfterGeneration                             OFFSET(get<bool>, {0x119, 1, 0, 0})
	DMember(int32_t)                                   MaxPlayersInWorld                                           OFFSET(get<int32_t>, {0x11C, 4, 0, 0})
	CMember(EMatchmakingErrorType)                     MatchmakingError                                            OFFSET(get<T>, {0x120, 1, 0, 0})
	CMember(ESanctionType)                             SanctionType                                                OFFSET(get<T>, {0x121, 1, 0, 0})
	DMember(bool)                                      bIsSharedWorld                                              OFFSET(get<bool>, {0x122, 1, 0, 0})
	DMember(bool)                                      bIsCustom                                                   OFFSET(get<bool>, {0x123, 1, 0, 0})
	DMember(bool)                                      bCanBeSaved                                                 OFFSET(get<bool>, {0x124, 1, 0, 0})
	DMember(bool)                                      bAllowWorldUGCCreation                                      OFFSET(get<bool>, {0x125, 1, 0, 0})
	DMember(bool)                                      bIsInCabinMode                                              OFFSET(get<bool>, {0x126, 1, 0, 0})
	CMember(TArray<class UJunoWorldSettingViewModel*>) AdvancedSettingsList                                        OFFSET(get<T>, {0x130, 16, 0, 0})
	CMember(TArray<class UJunoWorldImageObject*>)      WorldImageList                                              OFFSET(get<T>, {0x140, 16, 0, 0})
	DMember(bool)                                      bRequestResult                                              OFFSET(get<bool>, {0x150, 1, 0, 0})
	SMember(FText)                                     RequestMessage                                              OFFSET(getStruct<T>, {0x158, 16, 0, 0})
	SMember(FString)                                   WorldId                                                     OFFSET(getStruct<T>, {0x170, 16, 0, 0})
	CMember(class UJunoUserWorldView*)                 OriginalData                                                OFFSET(get<T>, {0x180, 8, 0, 0})
	CMember(class AFortPlayerController*)              WidgetOwnerPC                                               OFFSET(get<T>, {0x188, 8, 0, 0})


	/// Functions
	// Function /Script/JunoCoreUI.JunoWorldDataViewModel.SaveChanges
	// void SaveChanges();                                                                                                      // [0xcd7f458] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoCoreUI.JunoWorldDataViewModel.RemoveSharedWorld
	// void RemoveSharedWorld();                                                                                                // [0xcd7f0e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoCoreUI.JunoWorldDataViewModel.HandlePlayClicked
	// void HandlePlayClicked();                                                                                                // [0xcd7eed4] Final|Native|Protected|BlueprintCallable 
	// Function /Script/JunoCoreUI.JunoWorldDataViewModel.GetTagNames
	// TArray<FText> GetTagNames();                                                                                             // [0xcd7ece4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoCoreUI.JunoWorldDataViewModel.GetSelectedWorldImageIndex
	// int32_t GetSelectedWorldImageIndex();                                                                                    // [0xcd7ec94] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoCoreUI.JunoWorldDataViewModel.GetLastPlayedFormatted
	// FText GetLastPlayedFormatted();                                                                                          // [0xcd7ebf8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoCoreUI.JunoWorldDataViewModel.GetCreationDateFormatted
	// FText GetCreationDateFormatted();                                                                                        // [0xcd7eb94] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoCoreUI.JunoWorldDataViewModel.DeleteWorld
	// void DeleteWorld();                                                                                                      // [0xcd7eb80] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoCoreUI.JunoWorldDataViewModel.CheckWorldMatchmakingAvailability
	// bool CheckWorldMatchmakingAvailability();                                                                                // [0xcd7eb5c] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoCoreUI.JunoWorldDataViewModel.CancelChanges
	// void CancelChanges();                                                                                                    // [0xcd7eb38] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/JunoCoreUI.JunoWorldImageObject
/// Size: 0x0020 (0x000028 - 0x000048)
class UJunoWorldImageObject : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FMulticastInlineDelegate)                  OnTextureUpdated                                            OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	SMember(FDataTableRowHandle)                       RowHandle                                                   OFFSET(getStruct<T>, {0x38, 16, 0, 0})


	/// Functions
	// Function /Script/JunoCoreUI.JunoWorldImageObject.UpdateImageReference
	// void UpdateImageReference(FName& NewRowName);                                                                            // [0xcd7f7f4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoCoreUI.JunoWorldImageObject.GetTexture
	// TWeakObjectPtr<UTexture2D*> GetTexture();                                                                                // [0xcd7ed20] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoCoreUI.JunoWorldImageObject.GetImageReferenceName
	// FName GetImageReferenceName();                                                                                           // [0x3aa4f70] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/JunoCoreUI.JunoWorldSettingViewModel
/// Size: 0x00A0 (0x000068 - 0x000108)
class UJunoWorldSettingViewModel : public UMVVMViewModelBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:
	SMember(FString)                                   SettingId                                                   OFFSET(getStruct<T>, {0x68, 16, 0, 0})
	SMember(FText)                                     SettingName                                                 OFFSET(getStruct<T>, {0x78, 16, 0, 0})
	CMember(EJunoWorldSettingCategory)                 SettingCategory                                             OFFSET(get<T>, {0x88, 1, 0, 0})
	DMember(int32_t)                                   SelectedOption                                              OFFSET(get<int32_t>, {0x8C, 4, 0, 0})
	DMember(int32_t)                                   SelectedModeIndex                                           OFFSET(get<int32_t>, {0x90, 4, 0, 0})
	CMember(TArray<int32_t>)                           DefaultOptionPerMode                                        OFFSET(get<T>, {0x98, 16, 0, 0})
	DMember(int32_t)                                   NumericValue                                                OFFSET(get<int32_t>, {0xA8, 4, 0, 0})
	CMember(class UJunoUGCViewModel*)                  UGCViewModel                                                OFFSET(get<T>, {0xB0, 8, 0, 0})
	DMember(bool)                                      bContainsUGC                                                OFFSET(get<bool>, {0xB8, 1, 0, 0})
	CMember(TArray<FJunoSettingOptionRow>)             OptionList                                                  OFFSET(get<T>, {0xC0, 16, 0, 0})
	CMember(TWeakObjectPtr<UTexture2D*>)               SettingImage                                                OFFSET(get<T>, {0xD0, 32, 0, 0})
	DMember(bool)                                      bShowDefaultTag                                             OFFSET(get<bool>, {0xF0, 1, 0, 0})
	DMember(bool)                                      bIsCustom                                                   OFFSET(get<bool>, {0xF1, 1, 0, 0})
	DMember(bool)                                      bIsLocked                                                   OFFSET(get<bool>, {0xF2, 1, 0, 0})
	DMember(bool)                                      bCanBeLocked                                                OFFSET(get<bool>, {0xF3, 1, 0, 0})


	/// Functions
	// Function /Script/JunoCoreUI.JunoWorldSettingViewModel.IsDefaultOptionSelected
	// bool IsDefaultOptionSelected();                                                                                          // [0xcd7efbc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoCoreUI.JunoWorldSettingViewModel.GetOptionName
	// FText GetOptionName();                                                                                                   // [0xcd7ec64] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoCoreUI.JunoWorldSettingViewModel.GetOptionDescription
	// FText GetOptionDescription();                                                                                            // [0xcd7ec34] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoCoreUI.JunoWorldSettingViewModel.GetCurrentDefaultIndex
	// int32_t GetCurrentDefaultIndex();                                                                                        // [0xcd7ebd0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/JunoCoreUI.JunoDropSplitModal
/// Size: 0x0028 (0x000408 - 0x000430)
class UJunoDropSplitModal : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1072;

public:
	CMember(class UCommonButtonBase*)                  Button_Confirm                                              OFFSET(get<T>, {0x428, 8, 0, 0})


	/// Functions
	// Function /Script/JunoCoreUI.JunoDropSplitModal.OnOperationSet
	// void OnOperationSet(EJunoContextMenuAction ActionType, FText& ActionText, int32_t StackCount, int32_t QuantityDisplayMultiplier); // [0x228deb8] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/JunoCoreUI.JunoDropSplitModal.HandleQuantityChanged
	// void HandleQuantityChanged(EJunoContextMenuAction InActionType, int32_t InUpdatedCount);                                 // [0xcd7eee8] Final|Native|Protected|BlueprintCallable 
	// Function /Script/JunoCoreUI.JunoDropSplitModal.HandleConfirmOperation
	// void HandleConfirmOperation(EJunoContextMenuAction InActionType, int32_t InDesiredCount);                                // [0xcd7ed78] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/JunoCoreUI.JunoContextMenu
/// Size: 0x00A0 (0x000408 - 0x0004A8)
class UJunoContextMenu : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1192;

public:
	CMember(TMap<EJunoContextMenuAction, FText>)       MenuActionToDisplayText                                     OFFSET(get<T>, {0x440, 80, 0, 0})
	CMember(class UJunoDropSplitModal*)                Widget_QuantitySelector                                     OFFSET(get<T>, {0x490, 8, 0, 0})
	SMember(FDataTableRowHandle)                       BackAction                                                  OFFSET(getStruct<T>, {0x498, 16, 0, 0})


	/// Functions
	// Function /Script/JunoCoreUI.JunoContextMenu.OnShowQuantitySelectorState
	// void OnShowQuantitySelectorState();                                                                                      // [0x228deb8] Event|Protected|BlueprintEvent 
	// Function /Script/JunoCoreUI.JunoContextMenu.OnAddMenuEntry
	// void OnAddMenuEntry(EJunoContextMenuAction MenuAction, bool bDisabled);                                                  // [0x228deb8] Event|Protected|BlueprintEvent 
	// Function /Script/JunoCoreUI.JunoContextMenu.HandleContextEntrySelected
	// void HandleContextEntrySelected(EJunoContextMenuAction MenuAction);                                                      // [0xcd7ee54] Final|Native|Protected|BlueprintCallable 
	// Function /Script/JunoCoreUI.JunoContextMenu.GetAllAvailableActions
	// TSet<EJunoContextMenuAction> GetAllAvailableActions();                                                                   // [0x228deb8] Event|Protected|BlueprintEvent 
};

/// Struct /Script/JunoCoreUI.JunoContextMenuInfo
/// Size: 0x0008 (0x000000 - 0x000008)
class FJunoContextMenuInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(EJunoContextMenuAction)                    MenuAction                                                  OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(int32_t)                                   QuantityCount                                               OFFSET(get<int32_t>, {0x4, 4, 0, 0})
};

/// Struct /Script/JunoCoreUI.JunoContextMenuQuantityChange
/// Size: 0x0008 (0x000000 - 0x000008)
class FJunoContextMenuQuantityChange : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(EJunoContextMenuAction)                    MenuAction                                                  OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(int32_t)                                   QuantityCount                                               OFFSET(get<int32_t>, {0x4, 4, 0, 0})
};

/// Struct /Script/JunoCoreUI.JunoSettingOptionRow
/// Size: 0x0028 (0x000000 - 0x000028)
class FJunoSettingOptionRow : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FName)                                     ID                                                          OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FText)                                     Name                                                        OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	SMember(FText)                                     Description                                                 OFFSET(getStruct<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/JunoCoreUI.JunoSettingDataRow
/// Size: 0x0040 (0x000008 - 0x000048)
class FJunoSettingDataRow : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FText)                                     SettingName                                                 OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	CMember(EJunoWorldSettingCategory)                 Category                                                    OFFSET(get<T>, {0x18, 1, 0, 0})
	CMember(TArray<int32_t>)                           DefaultOptionPerMode                                        OFFSET(get<T>, {0x20, 16, 0, 0})
	CMember(TArray<FJunoSettingOptionRow>)             Options                                                     OFFSET(get<T>, {0x30, 16, 0, 0})
	DMember(bool)                                      bCanBeLocked                                                OFFSET(get<bool>, {0x40, 1, 0, 0})
};

/// Struct /Script/JunoCoreUI.JunoWorldImageDataRow
/// Size: 0x0020 (0x000008 - 0x000028)
class FJunoWorldImageDataRow : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(TWeakObjectPtr<UTexture2D*>)               WorldImage                                                  OFFSET(get<T>, {0x8, 32, 0, 0})
};

/// Enum /Script/JunoCoreUI.EJunoPlayerCardStatus
/// Size: 0x03
enum class EJunoPlayerCardStatus : uint8_t
{
	EJunoPlayerCardStatus__InWorld                                                   = 0,
	EJunoPlayerCardStatus__NotInWorld                                                = 1,
	EJunoPlayerCardStatus__Count                                                     = 2
};

/// Enum /Script/JunoCoreUI.EJunoContextMenuAction
/// Size: 0x18
enum class EJunoContextMenuAction : uint8_t
{
	EJunoContextMenuAction__None                                                     = 0,
	EJunoContextMenuAction__Swap                                                     = 1,
	EJunoContextMenuAction__Drop                                                     = 2,
	EJunoContextMenuAction__Craft                                                    = 3,
	EJunoContextMenuAction__Equip                                                    = 4,
	EJunoContextMenuAction__Unequip                                                  = 5,
	EJunoContextMenuAction__Split                                                    = 6,
	EJunoContextMenuAction__DepositStack                                             = 7,
	EJunoContextMenuAction__Deposit                                                  = 8,
	EJunoContextMenuAction__TakeStack                                                = 9,
	EJunoContextMenuAction__Take                                                     = 10,
	EJunoContextMenuAction__MoveToInventory                                          = 11,
	EJunoContextMenuAction__MoveToMainHand                                           = 12,
	EJunoContextMenuAction__MoveToOffHand                                            = 13,
	EJunoContextMenuAction__SmartTransfer                                            = 14,
	EJunoContextMenuAction__OpenInventory                                            = 15,
	EJunoContextMenuAction__Spawn                                                    = 16,
	EJunoContextMenuAction__SpawnMultiple                                            = 17
};

/// Enum /Script/JunoCoreUI.EJunoContextMenuActionState
/// Size: 0x03
enum class EJunoContextMenuActionState : uint8_t
{
	EJunoContextMenuActionState__Shown                                               = 0,
	EJunoContextMenuActionState__Disabled                                            = 1,
	EJunoContextMenuActionState__Hidden                                              = 2
};

/// Enum /Script/JunoCoreUI.EJunoWorldSettingCategory
/// Size: 0x03
enum class EJunoWorldSettingCategory : uint8_t
{
	EJunoWorldSettingCategory__None                                                  = 0,
	EJunoWorldSettingCategory__Basic                                                 = 1,
	EJunoWorldSettingCategory__Advanced                                              = 2
};

/// Enum /Script/JunoCoreUI.EJunoWorldSanctionType
/// Size: 0x03
enum class EJunoWorldSanctionType : uint8_t
{
	EJunoWorldSanctionType__MultiplayerBan                                           = 0,
	EJunoWorldSanctionType__CompleteBan                                              = 1,
	EJunoWorldSanctionType__None                                                     = 2
};

/// Enum /Script/JunoCoreUI.EMatchmakingErrorType
/// Size: 0x04
enum class EMatchmakingErrorType : uint8_t
{
	EMatchmakingErrorType__NotEnoughWorldSpotsForParty                               = 0,
	EMatchmakingErrorType__NotAllPartyMembersHaveWorldAccess                         = 1,
	EMatchmakingErrorType__LookingForPartyIsEnabled                                  = 2,
	EMatchmakingErrorType__None                                                      = 3
};

/// Enum /Script/JunoCoreUI.ESanctionType
/// Size: 0x05
enum class ESanctionType : uint8_t
{
	ESanctionType__OwnerWithoutPartyMultiplayerBan                                   = 0,
	ESanctionType__OwnerWithPartyMultiplayerBan                                      = 1,
	ESanctionType__KeyHolderBan                                                      = 2,
	ESanctionType__CompleteBan                                                       = 3,
	ESanctionType__None                                                              = 4
};

