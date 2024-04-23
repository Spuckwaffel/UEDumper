
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CommonUI
/// dependency: CommonUILegacy
/// dependency: CoreUObject
/// dependency: DynamicUI
/// dependency: Engine
/// dependency: FortniteUI
/// dependency: GameplayTags
/// dependency: JunoAIRuntime
/// dependency: JunoCreature_TamingRuntime
/// dependency: JunoGameNative
/// dependency: JunoUI
/// dependency: UMG

/// Class /Script/JunoCreature_TamingUI.JunoBarnAssignmentListEntry
/// Size: 0x0010 (0x0014D0 - 0x0014E0)
class UJunoBarnAssignmentListEntry : public UCommonButtonLegacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5344;

public:
	CMember(class UJunoBarnAssignmentListObject*)      BarnAssignmentListObject                                    OFFSET(get<T>, {0x14D8, 8, 0, 0})


	/// Functions
	// Function /Script/JunoCreature_TamingUI.JunoBarnAssignmentListEntry.OnBarnAssignmentObjectSet
	// void OnBarnAssignmentObjectSet(class UJunoBarnAssignmentListObject* NewBarnAssignmentListObject);                        // [0x1340978] Event|Protected|BlueprintEvent 
};

/// Class /Script/JunoCreature_TamingUI.JunoBarnAssignmentListObject
/// Size: 0x0058 (0x000028 - 0x000080)
class UJunoBarnAssignmentListObject : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(TWeakObjectPtr<UTexture2D*>)               Icon                                                        OFFSET(get<T>, {0x50, 32, 0, 0})
	CMember(TWeakObjectPtr<AActor*>)                   AnimalActor                                                 OFFSET(get<T>, {0x74, 8, 0, 0})


	/// Functions
	// Function /Script/JunoCreature_TamingUI.JunoBarnAssignmentListObject.IsSelectable
	// bool IsSelectable();                                                                                                     // [0xcccb9ac] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoCreature_TamingUI.JunoBarnAssignmentListObject.GetUniqueAIIdentifier
	// FGameplayTag GetUniqueAIIdentifier();                                                                                    // [0xba499c4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoCreature_TamingUI.JunoBarnAssignmentListObject.GetIsNoVillageSlot
	// bool GetIsNoVillageSlot();                                                                                               // [0xcccb81c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoCreature_TamingUI.JunoBarnAssignmentListObject.GetIsNoNearbyAnimalEntry
	// bool GetIsNoNearbyAnimalEntry();                                                                                         // [0x3eb200c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoCreature_TamingUI.JunoBarnAssignmentListObject.GetIsGlobalLimitReachedEntry
	// bool GetIsGlobalLimitReachedEntry();                                                                                     // [0xa84fa98] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoCreature_TamingUI.JunoBarnAssignmentListObject.GetIsFollowingEntry
	// bool GetIsFollowingEntry();                                                                                              // [0xba51f10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoCreature_TamingUI.JunoBarnAssignmentListObject.GetIcon
	// TWeakObjectPtr<UTexture2D*> GetIcon();                                                                                   // [0xcccb77c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoCreature_TamingUI.JunoBarnAssignmentListObject.GetHasBed
	// bool GetHasBed();                                                                                                        // [0xcccb768] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoCreature_TamingUI.JunoBarnAssignmentListObject.GetFriendshipValue
	// float GetFriendshipValue();                                                                                              // [0x3d10d98] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoCreature_TamingUI.JunoBarnAssignmentListObject.GetFriendshipStateTag
	// FGameplayTag GetFriendshipStateTag();                                                                                    // [0x3eb253c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoCreature_TamingUI.JunoBarnAssignmentListObject.GetDisplayName
	// FText GetDisplayName();                                                                                                  // [0xcccb704] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoCreature_TamingUI.JunoBarnAssignmentListObject.GetDescriptorTag
	// FGameplayTag GetDescriptorTag();                                                                                         // [0x39cb4bc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/JunoCreature_TamingUI.JunoVillageTamingHubScreen
/// Size: 0x00E0 (0x000678 - 0x000758)
class UJunoVillageTamingHubScreen : public UJunoVillageScreenBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1880;

public:
	CMember(class UScrollBox*)                         ScrollBox_Ingredients                                       OFFSET(get<T>, {0x678, 8, 0, 0})
	CMember(class UDynamicEntryBox*)                   EntryBox_Ingredients                                        OFFSET(get<T>, {0x680, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_Upgrade                                              OFFSET(get<T>, {0x688, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_RemoveVillage                                        OFFSET(get<T>, {0x690, 8, 0, 0})
	CMember(class UDynamicUIScene*)                    RemoveVillageModalScene                                     OFFSET(get<T>, {0x698, 8, 0, 0})
	SMember(FText)                                     RemoveVillageConfirmationTitle                              OFFSET(getStruct<T>, {0x6A0, 16, 0, 0})
	SMember(FText)                                     RemoveVillageConfirmationDescription                        OFFSET(getStruct<T>, {0x6B0, 16, 0, 0})
	SMember(FText)                                     RemoveVillageConfirmButtonText                              OFFSET(getStruct<T>, {0x6C0, 16, 0, 0})
	SMember(FText)                                     RemoveVillageCancelButtonText                               OFFSET(getStruct<T>, {0x6D0, 16, 0, 0})
	SMember(FDataTableRowHandle)                       RemoveModalConfirmAction                                    OFFSET(getStruct<T>, {0x6E0, 16, 0, 0})
	SMember(FDataTableRowHandle)                       RemoveModalCancelAction                                     OFFSET(getStruct<T>, {0x6F0, 16, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_EditVillage                                          OFFSET(get<T>, {0x700, 8, 0, 0})
	CMember(TMap<FGameplayTag, TWeakObjectPtr<UTexture2D*>>) JobToIconMap                                          OFFSET(get<T>, {0x708, 80, 0, 0})


	/// Functions
	// Function /Script/JunoCreature_TamingUI.JunoVillageTamingHubScreen.UpdateVillageInfo
	// void UpdateVillageInfo();                                                                                                // [0x77bf9d4] Native|Event|Protected|BlueprintEvent 
	// Function /Script/JunoCreature_TamingUI.JunoVillageTamingHubScreen.HandleRemoveVillageConfirmed
	// void HandleRemoveVillageConfirmed();                                                                                     // [0xccbd800] Final|Native|Protected 
	// Function /Script/JunoCreature_TamingUI.JunoVillageTamingHubScreen.HandleRemoveVillageCancelled
	// void HandleRemoveVillageCancelled();                                                                                     // [0xcc8729c] Final|Native|Protected 
};

/// Class /Script/JunoCreature_TamingUI.JunoVillageTamingLevelRewardsColumn
/// Size: 0x0240 (0x001480 - 0x0016C0)
class UJunoVillageTamingLevelRewardsColumn : public UCommonButtonBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5824;

public:
	CMember(class UDynamicEntryBox*)                   EntriesList                                                 OFFSET(get<T>, {0x1488, 8, 0, 0})
	SMember(FJunoVillageTamingLevelRewardsColumnInfo)  VillageRewardsColumnInfo                                    OFFSET(getStruct<T>, {0x1490, 24, 0, 0})
	SMember(FJunoVillageUIData)                        ParentVillageUIData                                         OFFSET(getStruct<T>, {0x14A8, 536, 0, 0})


	/// Functions
	// Function /Script/JunoCreature_TamingUI.JunoVillageTamingLevelRewardsColumn.SetVillageRewardEntryInfo
	// void SetVillageRewardEntryInfo(FJunoVillageTamingLevelRewardsColumnInfo& InVillageTamingLevelRewardsColumnInfo, FJunoVillageUIData& InParentVillageUIData); // [0xcccb9cc] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/JunoCreature_TamingUI.JunoVillageTamingLevelRewardsColumn.SetIsExpanded
	// void SetIsExpanded(bool bIsExpanded);                                                                                    // [0x1340978] Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/JunoCreature_TamingUI.JunoVillageTamingLevelRewardsEntry
/// Size: 0x0278 (0x0002F0 - 0x000568)
class UJunoVillageTamingLevelRewardsEntry : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1384;

public:
	SMember(FJunoVillageTamingLevelRewardsEntryInfo)   VillageRewardsEntryInfo                                     OFFSET(getStruct<T>, {0x2F0, 96, 0, 0})
	SMember(FJunoVillageUIData)                        ParentVillageUIData                                         OFFSET(getStruct<T>, {0x350, 536, 0, 0})


	/// Functions
	// Function /Script/JunoCreature_TamingUI.JunoVillageTamingLevelRewardsEntry.SetVillageRewardEntryInfo
	// void SetVillageRewardEntryInfo(FJunoVillageTamingLevelRewardsEntryInfo& InVillageTamingLevelRewardsEntryInfo, FJunoVillageUIData& InParentVillageUIData); // [0xcccbb08] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/JunoCreature_TamingUI.JunoVillageTamingLevelRewardsEntry.SetExpanded
	// void SetExpanded(bool bInIsExpanded);                                                                                    // [0x1340978] Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/JunoCreature_TamingUI.JunoVillageTamingLevelRewardsScreen
/// Size: 0x0030 (0x000678 - 0x0006A8)
class UJunoVillageTamingLevelRewardsScreen : public UJunoVillageScreenBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1704;

public:
	CMember(class UDynamicEntryBox*)                   RewardsList                                                 OFFSET(get<T>, {0x678, 8, 0, 0})
	CMember(class UJunoVillageTamingLevelRewardsColumn*) LastHoveredEntry                                          OFFSET(get<T>, {0x680, 8, 0, 0})
	CMember(class UCommonButtonGroupBase*)             ButtonGroup_AllRewards                                      OFFSET(get<T>, {0x688, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_Previous                                             OFFSET(get<T>, {0x690, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_Next                                                 OFFSET(get<T>, {0x698, 8, 0, 0})
	CMember(class UScrollBox*)                         ScrollBox                                                   OFFSET(get<T>, {0x6A0, 8, 0, 0})


	/// Functions
	// Function /Script/JunoCreature_TamingUI.JunoVillageTamingLevelRewardsScreen.RefreshPointsProgressBars
	// void RefreshPointsProgressBars();                                                                                        // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Script/JunoCreature_TamingUI.JunoVillageTamingLevelRewardsScreen.OnRewardsFilledOut
	// void OnRewardsFilledOut();                                                                                               // [0x1340978] Event|Protected|BlueprintEvent 
};

/// Class /Script/JunoCreature_TamingUI.JunoVillageTamingMenuContainer
/// Size: 0x0010 (0x000440 - 0x000450)
class UJunoVillageTamingMenuContainer : public UJunoHudMenuBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1104;

public:
	SMember(FName)                                     VillagersTabName                                            OFFSET(getStruct<T>, {0x440, 4, 0, 0})
	SMember(FName)                                     HubTabName                                                  OFFSET(getStruct<T>, {0x444, 4, 0, 0})
	SMember(FName)                                     RewardsTabName                                              OFFSET(getStruct<T>, {0x448, 4, 0, 0})
};

/// Class /Script/JunoCreature_TamingUI.JunoVillageTamingVillagerEntry
/// Size: 0x0140 (0x001480 - 0x0015C0)
class UJunoVillageTamingVillagerEntry : public UCommonButtonBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5568;

public:
	SMember(FJunoVillageTamingVillagerEntryInfo)       VillagerInfo                                                OFFSET(getStruct<T>, {0x1488, 304, 0, 0})


	/// Functions
	// Function /Script/JunoCreature_TamingUI.JunoVillageTamingVillagerEntry.SetVillagerInfo
	// void SetVillagerInfo(FJunoVillageTamingVillagerEntryInfo& InVillagerInfo);                                               // [0xcccbc40] Native|Event|Public|HasOutParms|BlueprintEvent 
};

/// Class /Script/JunoCreature_TamingUI.JunoBarnAssignmentMenuContainer
/// Size: 0x0028 (0x000408 - 0x000430)
class UJunoBarnAssignmentMenuContainer : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1072;

public:
	CMember(class UJunoBarnAssignmentScreen*)          BarnAssignmentScreen                                        OFFSET(get<T>, {0x410, 8, 0, 0})
	CMember(class UJunoBarnNameAnimalScreen*)          BarnNameAnimalScreen                                        OFFSET(get<T>, {0x418, 8, 0, 0})
	CMember(class UCommonActivatableWidgetSwitcher*)   WidgetSwitcher_Screens                                      OFFSET(get<T>, {0x420, 8, 0, 0})
	CMember(class UJunoBarnAssignmentMenuInitData*)    JunoBarnAssignmentMenuInitData                              OFFSET(get<T>, {0x428, 8, 0, 0})
};

/// Class /Script/JunoCreature_TamingUI.JunoBarnAssignmentScreen
/// Size: 0x00D0 (0x000408 - 0x0004D8)
class UJunoBarnAssignmentScreen : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1240;

public:
	CMember(class UCommonButtonBase*)                  BackButton                                                  OFFSET(get<T>, {0x440, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  CloseButton                                                 OFFSET(get<T>, {0x448, 8, 0, 0})
	CMember(class UCommonListView*)                    List_Characters                                             OFFSET(get<T>, {0x450, 8, 0, 0})
	CMember(class UJunoBarnAssignmentListObject*)      ThisBedListObject                                           OFFSET(get<T>, {0x458, 8, 0, 0})
	CMember(class AActor*)                             BarnObject                                                  OFFSET(get<T>, {0x460, 8, 0, 0})
	CMember(class UJunoCampRecruitmentComponent*)      JunoCampRecruitmentComponent                                OFFSET(get<T>, {0x468, 8, 0, 0})
	CMember(class UJunoCampAIManagementComponent*)     JunoCampAIManagementComponent                               OFFSET(get<T>, {0x470, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_Assign                                               OFFSET(get<T>, {0x478, 8, 0, 0})
	SMember(FText)                                     AssignedHeaderText                                          OFFSET(getStruct<T>, {0x480, 16, 0, 0})
	SMember(FText)                                     NoBarnHeaderText                                            OFFSET(getStruct<T>, {0x490, 16, 0, 0})
	SMember(FText)                                     NearbyAnimalsHeaderText                                     OFFSET(getStruct<T>, {0x4A0, 16, 0, 0})
	SMember(FText)                                     AssignButtonText                                            OFFSET(getStruct<T>, {0x4B0, 16, 0, 0})
	SMember(FText)                                     ReassignButtonText                                          OFFSET(getStruct<T>, {0x4C0, 16, 0, 0})
	CMember(class UClass*)                             ListHeaderClass                                             OFFSET(get<T>, {0x4D0, 8, 0, 0})


	/// Functions
	// Function /Script/JunoCreature_TamingUI.JunoBarnAssignmentScreen.OnSelectionChanged
	// void OnSelectionChanged(class UJunoBarnAssignmentListObject* InSelectedListObject);                                      // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Script/JunoCreature_TamingUI.JunoBarnAssignmentScreen.GetVillageHasSlotForAnimal
	// bool GetVillageHasSlotForAnimal();                                                                                       // [0xcccb830] Final|Native|Protected|BlueprintCallable|Const 
	// Function /Script/JunoCreature_TamingUI.JunoBarnAssignmentScreen.GetGlobalHasSlotForAnimal
	// bool GetGlobalHasSlotForAnimal();                                                                                        // [0xcccb748] Final|Native|Protected|BlueprintCallable|Const 
};

/// Class /Script/JunoCreature_TamingUI.JunoBarnNameAnimalScreen
/// Size: 0x0090 (0x000408 - 0x000498)
class UJunoBarnNameAnimalScreen : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1176;

public:
	CMember(class AActor*)                             BarnObject                                                  OFFSET(get<T>, {0x440, 8, 0, 0})
	CMember(class UJunoBarnAssignmentMenuInitData*)    JunoBarnAssignmentMenuInitData                              OFFSET(get<T>, {0x448, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_RandomName                                           OFFSET(get<T>, {0x450, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  BackButton                                                  OFFSET(get<T>, {0x458, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  CloseButton                                                 OFFSET(get<T>, {0x460, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_Assign                                               OFFSET(get<T>, {0x468, 8, 0, 0})
	CMember(class UEditableTextBox*)                   Debug_EditableTextBox                                       OFFSET(get<T>, {0x470, 8, 0, 0})
	SMember(FGameplayTag)                              AllAnimalNamesGameplayTag                                   OFFSET(getStruct<T>, {0x488, 4, 0, 0})
	SMember(FName)                                     AnimalNameRegistryName                                      OFFSET(getStruct<T>, {0x48C, 4, 0, 0})
};

/// Class /Script/JunoCreature_TamingUI.JunoBarnProcessorScreen
/// Size: 0x0008 (0x000560 - 0x000568)
class UJunoBarnProcessorScreen : public UJunoDisassemblingScreen
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1384;

public:
	CMember(class UJunoCampRecruitmentComponent*)      JunoCampRecruitmentComponent                                OFFSET(get<T>, {0x560, 8, 0, 0})


	/// Functions
	// Function /Script/JunoCreature_TamingUI.JunoBarnProcessorScreen.SetupAnimalInfo
	// void SetupAnimalInfo(FActiveCampCreatureEntry& Data);                                                                    // [0x1340978] Event|Protected|HasOutParms|BlueprintEvent 
};

/// Class /Script/JunoCreature_TamingUI.JunoTamingMapMarkerIconScreen
/// Size: 0x0068 (0x000408 - 0x000470)
class UJunoTamingMapMarkerIconScreen : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1136;

public:
	CMember(class UClass*)                             EntryClass                                                  OFFSET(get<T>, {0x410, 8, 0, 0})
	SMember(FName)                                     ColorParamName                                              OFFSET(getStruct<T>, {0x418, 4, 0, 0})
	CMember(class UDynamicEntryBox*)                   ColorPanel                                                  OFFSET(get<T>, {0x420, 8, 0, 0})
	CMember(class UDynamicEntryBox*)                   IconPanel                                                   OFFSET(get<T>, {0x428, 8, 0, 0})
	CMember(class UCommonButtonGroupBase*)             ButtonGroup_AllIconSlots                                    OFFSET(get<T>, {0x430, 8, 0, 0})
	CMember(class UCommonButtonGroupBase*)             ButtonGroup_AllColorSlots                                   OFFSET(get<T>, {0x438, 8, 0, 0})
	CMember(class UFortLazyImage*)                     Image_PreviewMarker                                         OFFSET(get<T>, {0x440, 8, 0, 0})
	CMember(class UJunoMapMarkerCustomizationEntry*)   SelectedColor                                               OFFSET(get<T>, {0x448, 8, 0, 0})
	CMember(class UJunoMapMarkerCustomizationEntry*)   SelectedIcon                                                OFFSET(get<T>, {0x450, 8, 0, 0})
	CMember(class UJunoMapMarkerCustomizationInitData*) InitData                                                   OFFSET(get<T>, {0x458, 8, 0, 0})
	SMember(FDataTableRowHandle)                       CampRow                                                     OFFSET(getStruct<T>, {0x460, 16, 0, 0})


	/// Functions
	// Function /Script/JunoCreature_TamingUI.JunoTamingMapMarkerIconScreen.SetPreviewMarkerMaterial
	// void SetPreviewMarkerMaterial(bool bIsTown);                                                                             // [0x1340978] Event|Public|BlueprintEvent 
	// Function /Script/JunoCreature_TamingUI.JunoTamingMapMarkerIconScreen.SetMarkerNameText
	// void SetMarkerNameText(bool bIsTown, FText& Name);                                                                       // [0x1340978] Event|Public|HasOutParms|BlueprintEvent 
};

/// Class /Script/JunoCreature_TamingUI.JunoTamingMapMarkerMenuContainer
/// Size: 0x0060 (0x000408 - 0x000468)
class UJunoTamingMapMarkerMenuContainer : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1128;

public:
	CMember(class UCommonButtonBase*)                  Button_Next                                                 OFFSET(get<T>, {0x410, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_Confirm                                              OFFSET(get<T>, {0x418, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_Close                                                OFFSET(get<T>, {0x420, 8, 0, 0})
	CMember(class UJunoMapMarkerCustomizationInitData*) InitData                                                   OFFSET(get<T>, {0x428, 8, 0, 0})
	SMember(FName)                                     NameScreenTabName                                           OFFSET(getStruct<T>, {0x430, 4, 0, 0})
	SMember(FName)                                     IconScreenTabName                                           OFFSET(getStruct<T>, {0x434, 4, 0, 0})
	CMember(class UFortTabListWidgetBase*)             TabList_MenuTabs                                            OFFSET(get<T>, {0x438, 8, 0, 0})
	CMember(class UCommonActivatableWidgetSwitcher*)   Switcher_Tabs                                               OFFSET(get<T>, {0x440, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   Text_Title                                                  OFFSET(get<T>, {0x448, 8, 0, 0})
	SMember(FDataTableRowHandle)                       CampRow                                                     OFFSET(getStruct<T>, {0x450, 16, 0, 0})


	/// Functions
	// Function /Script/JunoCreature_TamingUI.JunoTamingMapMarkerMenuContainer.HandleTabSelected
	// void HandleTabSelected(FName SelectedTabId);                                                                             // [0xcccb864] Final|Native|Private 
};

/// Class /Script/JunoCreature_TamingUI.JunoTamingMapMarkerNameScreen
/// Size: 0x0038 (0x000408 - 0x000440)
class UJunoTamingMapMarkerNameScreen : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1088;

public:
	CMember(class UCommonButtonBase*)                  RandomizeButton                                             OFFSET(get<T>, {0x410, 8, 0, 0})
	CMember(class UJunoMapMarkerCustomizationInitData*) InitData                                                   OFFSET(get<T>, {0x418, 8, 0, 0})
	CMember(class UEditableTextBox*)                   Debug_EditableTextBox                                       OFFSET(get<T>, {0x438, 8, 0, 0})


	/// Functions
	// Function /Script/JunoCreature_TamingUI.JunoTamingMapMarkerNameScreen.SetMarkerNameText
	// void SetMarkerNameText(FText& Name);                                                                                     // [0x1340978] Event|Public|HasOutParms|BlueprintEvent 
};

/// Class /Script/JunoCreature_TamingUI.JunoVillageTamingVillagersScreen
/// Size: 0x0090 (0x000678 - 0x000708)
class UJunoVillageTamingVillagersScreen : public UJunoVillageScreenBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1800;

public:
	CMember(class UDynamicEntryBox*)                   VillageInhabitantsList                                      OFFSET(get<T>, {0x678, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_AskToLeave                                           OFFSET(get<T>, {0x680, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_ChangeName                                           OFFSET(get<T>, {0x688, 8, 0, 0})
	CMember(class UCommonButtonGroupBase*)             ButtonGroup_AllVillagers                                    OFFSET(get<T>, {0x690, 8, 0, 0})
	CMember(class UJunoVillageTamingVillagerEntry*)    LastHoveredEntry                                            OFFSET(get<T>, {0x698, 8, 0, 0})
	CMember(class UDynamicUIScene*)                    AskToLeaveModalScene                                        OFFSET(get<T>, {0x6A0, 8, 0, 0})
	SMember(FText)                                     AskToLeaveConfirmationTitle                                 OFFSET(getStruct<T>, {0x6A8, 16, 0, 0})
	SMember(FText)                                     AskToLeaveConfirmationDescription                           OFFSET(getStruct<T>, {0x6B8, 16, 0, 0})
	SMember(FText)                                     AskToLeaveConfirmButtonText                                 OFFSET(getStruct<T>, {0x6C8, 16, 0, 0})
	SMember(FText)                                     AskToLeaveCancelButtonText                                  OFFSET(getStruct<T>, {0x6D8, 16, 0, 0})
	SMember(FDataTableRowHandle)                       ModalConfirmAction                                          OFFSET(getStruct<T>, {0x6E8, 16, 0, 0})
	SMember(FDataTableRowHandle)                       ModalCancelAction                                           OFFSET(getStruct<T>, {0x6F8, 16, 0, 0})


	/// Functions
	// Function /Script/JunoCreature_TamingUI.JunoVillageTamingVillagersScreen.OnEntryHovered
	// void OnEntryHovered(class UJunoVillageTamingVillagerEntry* Entry);                                                       // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Script/JunoCreature_TamingUI.JunoVillageTamingVillagersScreen.HandleAskToLeaveConfirmed
	// void HandleAskToLeaveConfirmed();                                                                                        // [0xcccb850] Final|Native|Protected 
	// Function /Script/JunoCreature_TamingUI.JunoVillageTamingVillagersScreen.HandleAskToLeaveCancelled
	// void HandleAskToLeaveCancelled();                                                                                        // [0xcc8729c] Final|Native|Protected 
};

/// Struct /Script/JunoCreature_TamingUI.JunoAnimalHappinessRow
/// Size: 0x00A0 (0x000008 - 0x0000A8)
class FJunoAnimalHappinessRow : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	SMember(FGameplayTag)                              AnimalHappinessTag                                          OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	SMember(FText)                                     Title                                                       OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FText)                                     Description                                                 OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	SMember(FFloatRange)                               ValueRange                                                  OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	DMember(float)                                     ProductionMultiplier                                        OFFSET(get<float>, {0x40, 4, 0, 0})
	SMember(FText)                                     ProductionMultiplierLabel                                   OFFSET(getStruct<T>, {0x48, 16, 0, 0})
	CMember(TWeakObjectPtr<UTexture2D*>)               ArrowIcon                                                   OFFSET(get<T>, {0x58, 32, 0, 0})
	CMember(TWeakObjectPtr<UMaterialInstance*>)        FaceIcon                                                    OFFSET(get<T>, {0x78, 32, 0, 0})
	SMember(FLinearColor)                              Color                                                       OFFSET(getStruct<T>, {0x98, 16, 0, 0})
};

/// Struct /Script/JunoCreature_TamingUI.JunoJobDetailsRow
/// Size: 0x0048 (0x000008 - 0x000050)
class FJunoJobDetailsRow : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FGameplayTag)                              RoleTag                                                     OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	SMember(FText)                                     Title                                                       OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FText)                                     Description                                                 OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	CMember(TWeakObjectPtr<UTexture2D*>)               Icon                                                        OFFSET(get<T>, {0x30, 32, 0, 0})
};

/// Struct /Script/JunoCreature_TamingUI.JunoNPCDetailsRow
/// Size: 0x0018 (0x000008 - 0x000020)
class FJunoNPCDetailsRow : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FGameplayTag)                              UniqueAIIdentifier                                          OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	SMember(FText)                                     NPCDescription                                              OFFSET(getStruct<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/JunoCreature_TamingUI.JunoVillageTamingLevelRewardsColumnInfo
/// Size: 0x0018 (0x000000 - 0x000018)
class FJunoVillageTamingLevelRewardsColumnInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(int32_t)                                   AwesomeLevel                                                OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	CMember(TArray<FJunoVillageTamingLevelRewardsEntryInfo>) EntryInfo                                             OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/JunoCreature_TamingUI.JunoVillageTamingLevelRewardsEntryInfo
/// Size: 0x0060 (0x000000 - 0x000060)
class FJunoVillageTamingLevelRewardsEntryInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FAwesomePerkReward)                        AwesomePerkReward                                           OFFSET(getStruct<T>, {0x0, 64, 0, 0})
	DMember(int32_t)                                   NewSharedSlotCount                                          OFFSET(get<int32_t>, {0x40, 4, 0, 0})
	DMember(int32_t)                                   NewVillagerSlotCount                                        OFFSET(get<int32_t>, {0x44, 4, 0, 0})
	DMember(int32_t)                                   NewAnimalSlotCountSlotCount                                 OFFSET(get<int32_t>, {0x48, 4, 0, 0})
	CMember(EJunoBiome)                                BiomeRewardType                                             OFFSET(get<T>, {0x4C, 1, 0, 0})
	CMember(TArray<class UJunoKnowledgeBundle*>)       KnowledgeBundles                                            OFFSET(get<T>, {0x50, 16, 0, 0})
};

/// Struct /Script/JunoCreature_TamingUI.JunoVillageTamingLevelRewardKnowledgeBundleGroup
/// Size: 0x0010 (0x000000 - 0x000010)
class FJunoVillageTamingLevelRewardKnowledgeBundleGroup : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<class UJunoKnowledgeBundle*>)       KnowledgeBundles                                            OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/JunoCreature_TamingUI.JunoVillageTamingVillagerEntryInfo
/// Size: 0x0130 (0x000000 - 0x000130)
class FJunoVillageTamingVillagerEntryInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	DMember(int32_t)                                   ButtonIndex                                                 OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(bool)                                      bHasNPC                                                     OFFSET(get<bool>, {0x4, 1, 0, 0})
	SMember(FActiveCampNPCEntry)                       NPCInfo                                                     OFFSET(getStruct<T>, {0x8, 128, 0, 0})
	DMember(bool)                                      bHasCreature                                                OFFSET(get<bool>, {0x88, 1, 0, 0})
	SMember(FActiveCampCreatureEntry)                  CreatureInfo                                                OFFSET(getStruct<T>, {0x90, 152, 0, 0})
	DMember(bool)                                      bSlotAllowsNPCs                                             OFFSET(get<bool>, {0x128, 1, 0, 0})
	DMember(bool)                                      bSlotAllowsCreatures                                        OFFSET(get<bool>, {0x129, 1, 0, 0})
	DMember(bool)                                      bIsLocked                                                   OFFSET(get<bool>, {0x12A, 1, 0, 0})
};

