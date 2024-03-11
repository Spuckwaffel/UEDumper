
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: GameFeatures
/// dependency: GameplayTags
/// dependency: ModularGameplay
/// dependency: NetCore
/// dependency: StructUtils

/// Class /Script/AccoladesRuntime.PFWAccoladeCollection_Container
/// Size: 0x0020 (0x000140 - 0x000160)
class UPFWAccoladeCollection_Container : public UPersistenceFrameworkContainer
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:
};

/// Class /Script/AccoladesRuntime.PFWAccoladeCollection_Module
/// Size: 0x0000 (0x0000E0 - 0x0000E0)
class UPFWAccoladeCollection_Module : public UPersistenceFrameworkModule
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
};

/// Class /Script/AccoladesRuntime.PFWAccoladeCollection_Trigger
/// Size: 0x0000 (0x0000C0 - 0x0000C0)
class UPFWAccoladeCollection_Trigger : public UPersistenceFrameworkSaveTrigger_Manual
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
};

/// Class /Script/AccoladesRuntime.PFWAccoladeCollection_FilteredListContainer
/// Size: 0x0010 (0x000150 - 0x000160)
class UPFWAccoladeCollection_FilteredListContainer : public UPersistenceFrameworkFilteredListContainer
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:
};

/// Class /Script/AccoladesRuntime.FortAccoladeCollectionFeatureCollector
/// Size: 0x0010 (0x000028 - 0x000038)
class UFortAccoladeCollectionFeatureCollector : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Script/AccoladesRuntime.GameFeatureAction_AddAccoladeTable
/// Size: 0x0020 (0x000028 - 0x000048)
class UGameFeatureAction_AddAccoladeTable : public UGameFeatureAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(TWeakObjectPtr<UDataTable*>)               AccoladeTable                                               OFFSET(get<T>, {0x28, 32, 0, 0})
};

/// Class /Script/AccoladesRuntime.FortCheatManager_Accolades
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortCheatManager_Accolades : public UChildCheatManager
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/AccoladesRuntime.FortCheatManager_Accolades.TriggerAccolade
	// void TriggerAccolade(FString AccoladeName);                                                                              // [0x6b8287c] Final|BlueprintAuthorityOnly|Exec|Native|Private 
	// Function /Script/AccoladesRuntime.FortCheatManager_Accolades.ResetAccoladeData
	// void ResetAccoladeData();                                                                                                // [0x36203b0] Final|BlueprintAuthorityOnly|Exec|Native|Private 
};

/// Class /Script/AccoladesRuntime.FortControllerComponent_AccoladeCollection
/// Size: 0x0228 (0x0000A8 - 0x0002D0)
class UFortControllerComponent_AccoladeCollection : public UFortControllerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 720;

public:
	SMember(FName)                                     PinnedAccoladeName                                          OFFSET(getStruct<T>, {0x178, 4, 0, 0})
	SMember(FPersistenceFrameworkSaveControl)          SaveControl                                                 OFFSET(getStruct<T>, {0x1A0, 16, 0, 0})
	SMember(FFortAccoladeCollectionDataArray)          AccoladeCollectionDataArray                                 OFFSET(getStruct<T>, {0x1B0, 288, 0, 0})


	/// Functions
	// Function /Script/AccoladesRuntime.FortControllerComponent_AccoladeCollection.ServerPinAccolade
	// void ServerPinAccolade(FName AccoladeName);                                                                              // [0xa175e94] Final|Net|NetReliableNative|Event|Private|NetServer 
	// Function /Script/AccoladesRuntime.FortControllerComponent_AccoladeCollection.ServerMarkAccoladesAsSeen
	// void ServerMarkAccoladesAsSeen(TArray<FName> AccoladeNames);                                                             // [0x8af0184] Final|Net|NetReliableNative|Event|Private|NetServer 
	// Function /Script/AccoladesRuntime.FortControllerComponent_AccoladeCollection.HandlePlayerProfileInitialized
	// void HandlePlayerProfileInitialized();                                                                                   // [0xa175e48] Final|Native|Private 
	// Function /Script/AccoladesRuntime.FortControllerComponent_AccoladeCollection.HandlePinnedQuestChanged
	// void HandlePinnedQuestChanged(FAthenaPinnedQuestData& PinnedQuestData);                                                  // [0xa175dbc] Final|Native|Private|HasOutParms 
	// Function /Script/AccoladesRuntime.FortControllerComponent_AccoladeCollection.ClientResetAccoladeData
	// void ClientResetAccoladeData();                                                                                          // [0x81db0dc] Final|Net|NetReliableNative|Event|Private|NetClient 
};

/// Class /Script/AccoladesRuntime.FortControllerComponent_Accolades
/// Size: 0x0478 (0x0000A8 - 0x000520)
class UFortControllerComponent_Accolades : public UFortControllerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1312;

public:
	SMember(FFortUpdatedTrackedAccoladeDataArray)      UpdatedTrackedAccoladeDataArray                             OFFSET(getStruct<T>, {0x290, 288, 0, 0})
	SMember(FFortCompletedAccoladeDataArray)           CompletedAccoladeDataArray                                  OFFSET(getStruct<T>, {0x3B0, 288, 0, 0})
};

/// Class /Script/AccoladesRuntime.FortGameStateComponent_AccoladeCollection
/// Size: 0x0010 (0x0000A0 - 0x0000B0)
class UFortGameStateComponent_AccoladeCollection : public UFortGameStateComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
};

/// Class /Script/AccoladesRuntime.FortGameStateComponent_Accolades
/// Size: 0x00B0 (0x0000A0 - 0x000150)
class UFortGameStateComponent_Accolades : public UFortGameStateComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
};

/// Struct /Script/AccoladesRuntime.FortAccoladesTableRow
/// Size: 0x00D0 (0x000008 - 0x0000D8)
class FFortAccoladesTableRow : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	SMember(FInstancedStruct)                          EventConditional                                            OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	CMember(TArray<FInstancedStruct>)                  EventRewards                                                OFFSET(get<T>, {0x18, 16, 0, 0})
	CMember(TArray<FInstancedStruct>)                  OneTimeEventRewards                                         OFFSET(get<T>, {0x28, 16, 0, 0})
	SMember(FText)                                     DisplayName                                                 OFFSET(getStruct<T>, {0x38, 24, 0, 0})
	SMember(FText)                                     DisplayDescription                                          OFFSET(getStruct<T>, {0x50, 24, 0, 0})
	DMember(int32_t)                                   DisplayOrder                                                OFFSET(get<int32_t>, {0x68, 4, 0, 0})
	CMember(EFortAccoladeType)                         AccoladeType                                                OFFSET(get<T>, {0x6C, 1, 0, 0})
	CMember(EXPEventPriorityType)                      Priority                                                    OFFSET(get<T>, {0x6D, 1, 0, 0})
	CMember(EFortAccoladeTierType)                     AccoladeTier                                                OFFSET(get<T>, {0x6E, 1, 0, 0})
	CMember(TWeakObjectPtr<USoundCue*>)                AwardedSoundCue                                             OFFSET(get<T>, {0x70, 32, 0, 0})
	CMember(TWeakObjectPtr<UTexture2D*>)               PreviewImage                                                OFFSET(get<T>, {0x90, 32, 0, 0})
	DMember(int32_t)                                   MaxMatchCount                                               OFFSET(get<int32_t>, {0xB0, 4, 0, 0})
	DMember(int32_t)                                   MaxPlayerCount                                              OFFSET(get<int32_t>, {0xB4, 4, 0, 0})
	SMember(FGameplayTagContainer)                     Tags                                                        OFFSET(getStruct<T>, {0xB8, 32, 0, 0})
};

/// Struct /Script/AccoladesRuntime.PFWAccoladeCollection_AchievedAccolade_PersistentInfoData
/// Size: 0x0018 (0x000000 - 0x000018)
class FPFWAccoladeCollection_AchievedAccolade_PersistentInfoData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FString)                                   AccoladeName                                                OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	DMember(uint32_t)                                  AccoladeCount                                               OFFSET(get<uint32_t>, {0x10, 4, 0, 0})
};

/// Struct /Script/AccoladesRuntime.PFWAccoladeCollection_PinnedAccolade_PersistentInfoData
/// Size: 0x0010 (0x000000 - 0x000010)
class FPFWAccoladeCollection_PinnedAccolade_PersistentInfoData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FString)                                   AccoladeName                                                OFFSET(getStruct<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/AccoladesRuntime.PFWAccoladeCollection_UnacknowledgedAccolades_PersistentInfoData
/// Size: 0x0010 (0x000000 - 0x000010)
class FPFWAccoladeCollection_UnacknowledgedAccolades_PersistentInfoData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FString>)                           AccoladeNames                                               OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/AccoladesRuntime.PFWAccoladeCollection_PersistentInfo
/// Size: 0x0030 (0x000000 - 0x000030)
class FPFWAccoladeCollection_PersistentInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(TArray<FPFWAccoladeCollection_AchievedAccolade_PersistentInfoData>) AccoladeCollection_AchievedAccolades OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FPFWAccoladeCollection_PinnedAccolade_PersistentInfoData) AccoladeCollection_PinnedAccolade            OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FPFWAccoladeCollection_UnacknowledgedAccolades_PersistentInfoData) AccoladeCollection_UnacknowledgedAccolades OFFSET(getStruct<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/AccoladesRuntime.FortAccoladeCollectionDataItem
/// Size: 0x000C (0x00000C - 0x000018)
class FFortAccoladeCollectionDataItem : public FFastArraySerializerItem
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FName)                                     AccoladeName                                                OFFSET(getStruct<T>, {0xC, 4, 0, 0})
	SMember(FFortAccoladeCollectionData)               CollectionData                                              OFFSET(getStruct<T>, {0x10, 8, 0, 0})
};

/// Struct /Script/AccoladesRuntime.FortAccoladeCollectionData
/// Size: 0x0008 (0x000000 - 0x000008)
class FFortAccoladeCollectionData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(uint32_t)                                  AchievedCount                                               OFFSET(get<uint32_t>, {0x0, 4, 0, 0})
	DMember(bool)                                      bAcknowledged                                               OFFSET(get<bool>, {0x4, 1, 0, 0})
};

/// Struct /Script/AccoladesRuntime.FortAccoladeCollectionDataArray
/// Size: 0x0018 (0x000108 - 0x000120)
class FFortAccoladeCollectionDataArray : public FFastArraySerializer
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	CMember(TArray<FFortAccoladeCollectionDataItem>)   AccoladeCollectionData                                      OFFSET(get<T>, {0x110, 16, 0, 0})
};

/// Struct /Script/AccoladesRuntime.FortAccoladeSessionData
/// Size: 0x000C (0x000000 - 0x00000C)
class FFortAccoladeSessionData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
};

/// Struct /Script/AccoladesRuntime.FortUpdatedTrackedAccoladeData
/// Size: 0x0008 (0x00000C - 0x000014)
class FFortUpdatedTrackedAccoladeData : public FFastArraySerializerItem
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	SMember(FName)                                     AccoladeRowName                                             OFFSET(getStruct<T>, {0xC, 4, 0, 0})
	DMember(uint32_t)                                  Count                                                       OFFSET(get<uint32_t>, {0x10, 4, 0, 0})
};

/// Struct /Script/AccoladesRuntime.FortUpdatedTrackedAccoladeDataArray
/// Size: 0x0018 (0x000108 - 0x000120)
class FFortUpdatedTrackedAccoladeDataArray : public FFastArraySerializer
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	CMember(TArray<FFortUpdatedTrackedAccoladeData>)   UpdatedTrackedAccolades                                     OFFSET(get<T>, {0x110, 16, 0, 0})
};

/// Struct /Script/AccoladesRuntime.FortCompletedAccoladeData
/// Size: 0x000C (0x00000C - 0x000018)
class FFortCompletedAccoladeData : public FFastArraySerializerItem
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FName)                                     AccoladeRowName                                             OFFSET(getStruct<T>, {0xC, 4, 0, 0})
	DMember(uint32_t)                                  XPAwarded                                                   OFFSET(get<uint32_t>, {0x10, 4, 0, 0})
	CMember(EFortAccoladeType)                         AccoladeType                                                OFFSET(get<T>, {0x14, 1, 0, 0})
};

/// Struct /Script/AccoladesRuntime.FortCompletedAccoladeDataArray
/// Size: 0x0018 (0x000108 - 0x000120)
class FFortCompletedAccoladeDataArray : public FFastArraySerializer
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	CMember(TArray<FFortCompletedAccoladeData>)        CompletedAccolades                                          OFFSET(get<T>, {0x110, 16, 0, 0})
};

/// Struct /Script/AccoladesRuntime.FortTriggeredAccoladeData
/// Size: 0x0080 (0x000000 - 0x000080)
class FFortTriggeredAccoladeData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
};

/// Enum /Script/AccoladesRuntime.EFortAccoladeTierType
/// Size: 0x05
enum class EFortAccoladeTierType : uint8_t
{
	EFortAccoladeTierType__None                                                      = 0,
	EFortAccoladeTierType__Tier1                                                     = 1,
	EFortAccoladeTierType__Tier2                                                     = 2,
	EFortAccoladeTierType__Tier3                                                     = 3,
	EFortAccoladeTierType__EFortAccoladeTierType_MAX                                 = 4
};

