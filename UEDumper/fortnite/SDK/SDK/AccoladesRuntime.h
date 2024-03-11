
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
/// dependency: GameFeatures
/// dependency: GameplayTags
/// dependency: ModularGameplay
/// dependency: NetCore
/// dependency: StructUtils

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

/// Class /Script/AccoladesRuntime.PFWAccoladeCollection_Container
/// Size: 0x0020 (0x000140 - 0x000160)
class UPFWAccoladeCollection_Container : public UPersistenceFrameworkContainer
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0140   (0x0020)  MISSED
};

/// Class /Script/AccoladesRuntime.PFWAccoladeCollection_Module
/// Size: 0x0000 (0x0000E0 - 0x0000E0)
class UPFWAccoladeCollection_Module : public UPersistenceFrameworkModule
{ 
public:
};

/// Class /Script/AccoladesRuntime.PFWAccoladeCollection_Trigger
/// Size: 0x0000 (0x0000C0 - 0x0000C0)
class UPFWAccoladeCollection_Trigger : public UPersistenceFrameworkSaveTrigger_Manual
{ 
public:
};

/// Class /Script/AccoladesRuntime.PFWAccoladeCollection_FilteredListContainer
/// Size: 0x0010 (0x000150 - 0x000160)
class UPFWAccoladeCollection_FilteredListContainer : public UPersistenceFrameworkFilteredListContainer
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0150   (0x0010)  MISSED
};

/// Class /Script/AccoladesRuntime.FortAccoladeCollectionFeatureCollector
/// Size: 0x0010 (0x000028 - 0x000038)
class UFortAccoladeCollectionFeatureCollector : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x38];                                      // 0x0000   (0x0038)  MISSED
};

/// Class /Script/AccoladesRuntime.GameFeatureAction_AddAccoladeTable
/// Size: 0x0020 (0x000028 - 0x000048)
class UGameFeatureAction_AddAccoladeTable : public UGameFeatureAction
{ 
public:
	SDK_UNDEFINED(32,11714) /* TWeakObjectPtr<UDataTable*> */ __um(AccoladeTable);                                 // 0x0028   (0x0020)  
};

/// Class /Script/AccoladesRuntime.FortCheatManager_Accolades
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortCheatManager_Accolades : public UChildCheatManager
{ 
public:


	/// Functions
	// Function /Script/AccoladesRuntime.FortCheatManager_Accolades.TriggerAccolade
	// void TriggerAccolade(FString AccoladeName);                                                                           // [0x6b8287c] Final|BlueprintAuthorityOnly|Exec|Native|Private 
	// Function /Script/AccoladesRuntime.FortCheatManager_Accolades.ResetAccoladeData
	// void ResetAccoladeData();                                                                                             // [0x36203b0] Final|BlueprintAuthorityOnly|Exec|Native|Private 
};

/// Struct /Script/AccoladesRuntime.FortAccoladeCollectionData
/// Size: 0x0008 (0x000000 - 0x000008)
struct FFortAccoladeCollectionData
{ 
	uint32_t                                           AchievedCount;                                              // 0x0000   (0x0004)  
	bool                                               bAcknowledged;                                              // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0005   (0x0003)  MISSED
};

/// Struct /Script/AccoladesRuntime.FortAccoladeCollectionDataItem
/// Size: 0x000C (0x00000C - 0x000018)
struct FFortAccoladeCollectionDataItem : FFastArraySerializerItem
{ 
	FName                                              AccoladeName;                                               // 0x000C   (0x0004)  
	FFortAccoladeCollectionData                        CollectionData;                                             // 0x0010   (0x0008)  
};

/// Struct /Script/AccoladesRuntime.FortAccoladeCollectionDataArray
/// Size: 0x0018 (0x000108 - 0x000120)
struct FFortAccoladeCollectionDataArray : FFastArraySerializer
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0108   (0x0008)  MISSED
	TArray<FFortAccoladeCollectionDataItem>            AccoladeCollectionData;                                     // 0x0110   (0x0010)  
};

/// Class /Script/AccoladesRuntime.FortControllerComponent_AccoladeCollection
/// Size: 0x0228 (0x0000A8 - 0x0002D0)
class UFortControllerComponent_AccoladeCollection : public UFortControllerComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0xD0];                                      // 0x00A8   (0x00D0)  MISSED
	FName                                              PinnedAccoladeName;                                         // 0x0178   (0x0004)  
	unsigned char                                      UnknownData01_5[0x24];                                      // 0x017C   (0x0024)  MISSED
	FPersistenceFrameworkSaveControl                   SaveControl;                                                // 0x01A0   (0x0010)  
	FFortAccoladeCollectionDataArray                   AccoladeCollectionDataArray;                                // 0x01B0   (0x0120)  


	/// Functions
	// Function /Script/AccoladesRuntime.FortControllerComponent_AccoladeCollection.ServerPinAccolade
	// void ServerPinAccolade(FName AccoladeName);                                                                           // [0xa175e94] Final|Net|NetReliableNative|Event|Private|NetServer 
	// Function /Script/AccoladesRuntime.FortControllerComponent_AccoladeCollection.ServerMarkAccoladesAsSeen
	// void ServerMarkAccoladesAsSeen(TArray<FName> AccoladeNames);                                                          // [0x8af0184] Final|Net|NetReliableNative|Event|Private|NetServer 
	// Function /Script/AccoladesRuntime.FortControllerComponent_AccoladeCollection.HandlePlayerProfileInitialized
	// void HandlePlayerProfileInitialized();                                                                                // [0xa175e48] Final|Native|Private 
	// Function /Script/AccoladesRuntime.FortControllerComponent_AccoladeCollection.HandlePinnedQuestChanged
	// void HandlePinnedQuestChanged(FAthenaPinnedQuestData& PinnedQuestData);                                               // [0xa175dbc] Final|Native|Private|HasOutParms 
	// Function /Script/AccoladesRuntime.FortControllerComponent_AccoladeCollection.ClientResetAccoladeData
	// void ClientResetAccoladeData();                                                                                       // [0x81db0dc] Final|Net|NetReliableNative|Event|Private|NetClient 
};

/// Struct /Script/AccoladesRuntime.FortUpdatedTrackedAccoladeData
/// Size: 0x0008 (0x00000C - 0x000014)
struct FFortUpdatedTrackedAccoladeData : FFastArraySerializerItem
{ 
	FName                                              AccoladeRowName;                                            // 0x000C   (0x0004)  
	uint32_t                                           Count;                                                      // 0x0010   (0x0004)  
};

/// Struct /Script/AccoladesRuntime.FortUpdatedTrackedAccoladeDataArray
/// Size: 0x0018 (0x000108 - 0x000120)
struct FFortUpdatedTrackedAccoladeDataArray : FFastArraySerializer
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0108   (0x0008)  MISSED
	TArray<FFortUpdatedTrackedAccoladeData>            UpdatedTrackedAccolades;                                    // 0x0110   (0x0010)  
};

/// Struct /Script/AccoladesRuntime.FortCompletedAccoladeData
/// Size: 0x000C (0x00000C - 0x000018)
struct FFortCompletedAccoladeData : FFastArraySerializerItem
{ 
	FName                                              AccoladeRowName;                                            // 0x000C   (0x0004)  
	uint32_t                                           XPAwarded;                                                  // 0x0010   (0x0004)  
	EFortAccoladeType                                  AccoladeType;                                               // 0x0014   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0015   (0x0003)  MISSED
};

/// Struct /Script/AccoladesRuntime.FortCompletedAccoladeDataArray
/// Size: 0x0018 (0x000108 - 0x000120)
struct FFortCompletedAccoladeDataArray : FFastArraySerializer
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0108   (0x0008)  MISSED
	TArray<FFortCompletedAccoladeData>                 CompletedAccolades;                                         // 0x0110   (0x0010)  
};

/// Class /Script/AccoladesRuntime.FortControllerComponent_Accolades
/// Size: 0x0478 (0x0000A8 - 0x000520)
class UFortControllerComponent_Accolades : public UFortControllerComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x1E8];                                     // 0x00A8   (0x01E8)  MISSED
	FFortUpdatedTrackedAccoladeDataArray               UpdatedTrackedAccoladeDataArray;                            // 0x0290   (0x0120)  
	FFortCompletedAccoladeDataArray                    CompletedAccoladeDataArray;                                 // 0x03B0   (0x0120)  
	unsigned char                                      UnknownData01_6[0x50];                                      // 0x04D0   (0x0050)  MISSED
};

/// Class /Script/AccoladesRuntime.FortGameStateComponent_AccoladeCollection
/// Size: 0x0010 (0x0000A0 - 0x0000B0)
class UFortGameStateComponent_AccoladeCollection : public UFortGameStateComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x00A0   (0x0010)  MISSED
};

/// Class /Script/AccoladesRuntime.FortGameStateComponent_Accolades
/// Size: 0x00B0 (0x0000A0 - 0x000150)
class UFortGameStateComponent_Accolades : public UFortGameStateComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0xB0];                                      // 0x00A0   (0x00B0)  MISSED
};

/// Struct /Script/AccoladesRuntime.FortAccoladesTableRow
/// Size: 0x00D0 (0x000008 - 0x0000D8)
struct FFortAccoladesTableRow : FTableRowBase
{ 
	FInstancedStruct                                   EventConditional;                                           // 0x0008   (0x0010)  
	TArray<FInstancedStruct>                           EventRewards;                                               // 0x0018   (0x0010)  
	TArray<FInstancedStruct>                           OneTimeEventRewards;                                        // 0x0028   (0x0010)  
	SDK_UNDEFINED(24,11715) /* FText */                __um(DisplayName);                                          // 0x0038   (0x0018)  
	SDK_UNDEFINED(24,11716) /* FText */                __um(DisplayDescription);                                   // 0x0050   (0x0018)  
	int32_t                                            DisplayOrder;                                               // 0x0068   (0x0004)  
	EFortAccoladeType                                  AccoladeType;                                               // 0x006C   (0x0001)  
	EXPEventPriorityType                               Priority;                                                   // 0x006D   (0x0001)  
	EFortAccoladeTierType                              AccoladeTier;                                               // 0x006E   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x006F   (0x0001)  MISSED
	SDK_UNDEFINED(32,11717) /* TWeakObjectPtr<USoundCue*> */ __um(AwardedSoundCue);                                // 0x0070   (0x0020)  
	SDK_UNDEFINED(32,11718) /* TWeakObjectPtr<UTexture2D*> */ __um(PreviewImage);                                  // 0x0090   (0x0020)  
	int32_t                                            MaxMatchCount;                                              // 0x00B0   (0x0004)  
	int32_t                                            MaxPlayerCount;                                             // 0x00B4   (0x0004)  
	FGameplayTagContainer                              Tags;                                                       // 0x00B8   (0x0020)  
};

/// Struct /Script/AccoladesRuntime.PFWAccoladeCollection_AchievedAccolade_PersistentInfoData
/// Size: 0x0018 (0x000000 - 0x000018)
struct FPFWAccoladeCollection_AchievedAccolade_PersistentInfoData
{ 
	SDK_UNDEFINED(16,11719) /* FString */              __um(AccoladeName);                                         // 0x0000   (0x0010)  
	uint32_t                                           AccoladeCount;                                              // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/AccoladesRuntime.PFWAccoladeCollection_PinnedAccolade_PersistentInfoData
/// Size: 0x0010 (0x000000 - 0x000010)
struct FPFWAccoladeCollection_PinnedAccolade_PersistentInfoData
{ 
	SDK_UNDEFINED(16,11720) /* FString */              __um(AccoladeName);                                         // 0x0000   (0x0010)  
};

/// Struct /Script/AccoladesRuntime.PFWAccoladeCollection_UnacknowledgedAccolades_PersistentInfoData
/// Size: 0x0010 (0x000000 - 0x000010)
struct FPFWAccoladeCollection_UnacknowledgedAccolades_PersistentInfoData
{ 
	SDK_UNDEFINED(16,11721) /* TArray<FString> */      __um(AccoladeNames);                                        // 0x0000   (0x0010)  
};

/// Struct /Script/AccoladesRuntime.PFWAccoladeCollection_PersistentInfo
/// Size: 0x0030 (0x000000 - 0x000030)
struct FPFWAccoladeCollection_PersistentInfo
{ 
	TArray<FPFWAccoladeCollection_AchievedAccolade_PersistentInfoData> AccoladeCollection_AchievedAccolades;       // 0x0000   (0x0010)  
	FPFWAccoladeCollection_PinnedAccolade_PersistentInfoData AccoladeCollection_PinnedAccolade;                    // 0x0010   (0x0010)  
	FPFWAccoladeCollection_UnacknowledgedAccolades_PersistentInfoData AccoladeCollection_UnacknowledgedAccolades;  // 0x0020   (0x0010)  
};

/// Struct /Script/AccoladesRuntime.FortAccoladeSessionData
/// Size: 0x000C (0x000000 - 0x00000C)
struct FFortAccoladeSessionData
{ 
	unsigned char                                      UnknownData00_2[0xC];                                       // 0x0000   (0x000C)  MISSED
};

/// Struct /Script/AccoladesRuntime.FortTriggeredAccoladeData
/// Size: 0x0080 (0x000000 - 0x000080)
struct FFortTriggeredAccoladeData
{ 
	unsigned char                                      UnknownData00_2[0x80];                                      // 0x0000   (0x0080)  MISSED
};

