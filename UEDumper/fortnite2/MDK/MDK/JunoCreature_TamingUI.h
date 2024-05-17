
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
/// Size: 0x0010 (0x0014F0 - 0x001500)
class UJunoBarnAssignmentListEntry : public UCommonButtonLegacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5376;

public:
	CMember(class UJunoBarnAssignmentListObject*)      BarnAssignmentListObject                                    OFFSET(get<T>, {0x14F8, 8, 0, 0})


	/// Functions
	// Function /Script/JunoCreature_TamingUI.JunoBarnAssignmentListEntry.OnBarnAssignmentObjectSet
	// void OnBarnAssignmentObjectSet(class UJunoBarnAssignmentListObject* NewBarnAssignmentListObject);                        // [0x228deb8] Event|Protected|BlueprintEvent 
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
	// bool IsSelectable();                                                                                                     // [0xce053c4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoCreature_TamingUI.JunoBarnAssignmentListObject.GetUniqueAIIdentifier
	// FGameplayTag GetUniqueAIIdentifier();                                                                                    // [0xbb848e8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoCreature_TamingUI.JunoBarnAssignmentListObject.GetIsNoVillageSlot
	// bool GetIsNoVillageSlot();                                                                                               // [0xce05240] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoCreature_TamingUI.JunoBarnAssignmentListObject.GetIsNoNearbyAnimalEntry
	// bool GetIsNoNearbyAnimalEntry();                                                                                         // [0x3f182cc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoCreature_TamingUI.JunoBarnAssignmentListObject.GetIsGlobalLimitReachedEntry
	// bool GetIsGlobalLimitReachedEntry();                                                                                     // [0xa955ac0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoCreature_TamingUI.JunoBarnAssignmentListObject.GetIsFollowingEntry
	// bool GetIsFollowingEntry();                                                                                              // [0xbb8cc2c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoCreature_TamingUI.JunoBarnAssignmentListObject.GetIcon
	// TWeakObjectPtr<UTexture2D*> GetIcon();                                                                                   // [0xce051a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoCreature_TamingUI.JunoBarnAssignmentListObject.GetHasBed
	// bool GetHasBed();                                                                                                        // [0xce0518c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoCreature_TamingUI.JunoBarnAssignmentListObject.GetFriendshipValue
	// float GetFriendshipValue();                                                                                              // [0x3d911e8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoCreature_TamingUI.JunoBarnAssignmentListObject.GetFriendshipStateTag
	// FGameplayTag GetFriendshipStateTag();                                                                                    // [0x3f187fc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoCreature_TamingUI.JunoBarnAssignmentListObject.GetDisplayName
	// FText GetDisplayName();                                                                                                  // [0xce05128] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoCreature_TamingUI.JunoBarnAssignmentListObject.GetDescriptorTag
	// FGameplayTag GetDescriptorTag();                                                                                         // [0x3aa4f70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/JunoCreature_TamingUI.JunoVillageTamingHubScreen
/// Size: 0x0110 (0x000690 - 0x0007A0)
class UJunoVillageTamingHubScreen : public UJunoVillageScreenBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1952;

public:
	CMember(class UScrollBox*)                         ScrollBox_Ingredients                                       OFFSET(get<T>, {0x690, 8, 0, 0})
	CMember(class UDynamicEntryBox*)                   EntryBox_Ingredients                                        OFFSET(get<T>, {0x698, 8, 0, 0})
	CMember(class UClass*)                             SpacerWidgetClass                                           OFFSET(get<T>, {0x6A0, 8, 0, 0})
	CMember(class UClass*)                             BuiltObjectWidgetClass                                      OFFSET(get<T>, {0x6A8, 8, 0, 0})
	CMember(class UClass*)                             PersistentTagWidgetClass                                    OFFSET(get<T>, {0x6B0, 8, 0, 0})
	CMember(class UClass*)                             WorldReactionWidgetClass                                    OFFSET(get<T>, {0x6B8, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_Upgrade                                              OFFSET(get<T>, {0x6C0, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_RemoveVillage                                        OFFSET(get<T>, {0x6C8, 8, 0, 0})
	CMember(class UDynamicUIScene*)                    RemoveVillageModalScene                                     OFFSET(get<T>, {0x6D0, 8, 0, 0})
	SMember(FText)                                     RemoveVillageConfirmationTitle                              OFFSET(getStruct<T>, {0x6D8, 16, 0, 0})
	SMember(FText)                                     RemoveVillageConfirmationDescription                        OFFSET(getStruct<T>, {0x6E8, 16, 0, 0})
	SMember(FText)                                     RemoveVillageConfirmButtonText                              OFFSET(getStruct<T>, {0x6F8, 16, 0, 0})
	SMember(FText)                                     RemoveVillageCancelButtonText                               OFFSET(getStruct<T>, {0x708, 16, 0, 0})
	SMember(FDataTableRowHandle)                       RemoveModalConfirmAction                                    OFFSET(getStruct<T>, {0x718, 16, 0, 0})
	SMember(FDataTableRowHandle)                       RemoveModalCancelAction                                     OFFSET(getStruct<T>, {0x728, 16, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_EditVillage                                          OFFSET(get<T>, {0x738, 8, 0, 0})
	CMember(TMap<FGameplayTag, TWeakObjectPtr<UTexture2D*>>) JobToIconMap                                          OFFSET(get<T>, {0x740, 80, 0, 0})
	SMember(FText)                                     StaticUpgradeItemDescription                                OFFSET(getStruct<T>, {0x790, 16, 0, 0})


	/// Functions
	// Function /Script/JunoCreature_TamingUI.JunoVillageTamingHubScreen.UpdateVillageInfo
	// void UpdateVillageInfo();                                                                                                // [0x78df2d0] Native|Event|Protected|BlueprintEvent 
	// Function /Script/JunoCreature_TamingUI.JunoVillageTamingHubScreen.HandleRemoveVillageConfirmed
	// void HandleRemoveVillageConfirmed();                                                                                     // [0xce05288] Final|Native|Protected 
	// Function /Script/JunoCreature_TamingUI.JunoVillageTamingHubScreen.HandleRemoveVillageCancelled
	// void HandleRemoveVillageCancelled();                                                                                     // [0xcdb3498] Final|Native|Protected 
};

/// Class /Script/JunoCreature_TamingUI.JunoVillageTamingLevelRewardsColumn
/// Size: 0x0260 (0x0014A0 - 0x001700)
class UJunoVillageTamingLevelRewardsColumn : public UCommonButtonBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5888;

public:
	CMember(class UDynamicEntryBox*)                   EntriesList                                                 OFFSET(get<T>, {0x14A8, 8, 0, 0})
	SMember(FJunoVillageTamingLevelRewardsColumnInfo)  VillageRewardsColumnInfo                                    OFFSET(getStruct<T>, {0x14B0, 24, 0, 0})
	SMember(FJunoVillageUIData)                        ParentVillageUIData                                         OFFSET(getStruct<T>, {0x14C8, 560, 0, 0})


	/// Functions
	// Function /Script/JunoCreature_TamingUI.JunoVillageTamingLevelRewardsColumn.SetVillageRewardEntryInfo
	// void SetVillageRewardEntryInfo(FJunoVillageTamingLevelRewardsColumnInfo& InVillageTamingLevelRewardsColumnInfo, FJunoVillageUIData& InParentVillageUIData); // [0xce053e4] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/JunoCreature_TamingUI.JunoVillageTamingLevelRewardsColumn.SetIsExpanded
	// void SetIsExpanded(bool bIsExpanded);                                                                                    // [0x228deb8] Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/JunoCreature_TamingUI.JunoVillageTamingLevelRewardsEntry
/// Size: 0x0298 (0x0002F0 - 0x000588)
class UJunoVillageTamingLevelRewardsEntry : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1416;

public:
	SMember(FJunoVillageTamingLevelRewardsEntryInfo)   VillageRewardsEntryInfo                                     OFFSET(getStruct<T>, {0x2F0, 104, 0, 0})
	SMember(FJunoVillageUIData)                        ParentVillageUIData                                         OFFSET(getStruct<T>, {0x358, 560, 0, 0})


	/// Functions
	// Function /Script/JunoCreature_TamingUI.JunoVillageTamingLevelRewardsEntry.SetVillageRewardEntryInfo
	// void SetVillageRewardEntryInfo(FJunoVillageTamingLevelRewardsEntryInfo& InVillageTamingLevelRewardsEntryInfo, FJunoVillageUIData& InParentVillageUIData); // [0xce05520] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/JunoCreature_TamingUI.JunoVillageTamingLevelRewardsEntry.SetExpanded
	// void SetExpanded(bool bInIsExpanded);                                                                                    // [0x228deb8] Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/JunoCreature_TamingUI.JunoVillageTamingLevelRewardsScreen
/// Size: 0x0030 (0x000690 - 0x0006C0)
class UJunoVillageTamingLevelRewardsScreen : public UJunoVillageScreenBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1728;

public:
	CMember(class UDynamicEntryBox*)                   RewardsList                                                 OFFSET(get<T>, {0x690, 8, 0, 0})
	CMember(class UJunoVillageTamingLevelRewardsColumn*) LastHoveredEntry                                          OFFSET(get<T>, {0x698, 8, 0, 0})
	CMember(class UCommonButtonGroupBase*)             ButtonGroup_AllRewards                                      OFFSET(get<T>, {0x6A0, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_Previous                                             OFFSET(get<T>, {0x6A8, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_Next                                                 OFFSET(get<T>, {0x6B0, 8, 0, 0})
	CMember(class UScrollBox*)                         ScrollBox                                                   OFFSET(get<T>, {0x6B8, 8, 0, 0})


	/// Functions
	// Function /Script/JunoCreature_TamingUI.JunoVillageTamingLevelRewardsScreen.RefreshPointsProgressBars
	// void RefreshPointsProgressBars();                                                                                        // [0x228deb8] Event|Protected|BlueprintEvent 
	// Function /Script/JunoCreature_TamingUI.JunoVillageTamingLevelRewardsScreen.OnRewardsFilledOut
	// void OnRewardsFilledOut();                                                                                               // [0x228deb8] Event|Protected|BlueprintEvent 
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
/// Size: 0x0140 (0x0014A0 - 0x0015E0)
class UJunoVillageTamingVillagerEntry : public UCommonButtonBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5600;

public:
	SMember(FJunoVillageTamingVillagerEntryInfo)       VillagerInfo                                                OFFSET(getStruct<T>, {0x14A8, 304, 0, 0})


	/// Functions
	// Function /Script/JunoCreature_TamingUI.JunoVillageTamingVillagerEntry.SetVillagerInfo
	// void SetVillagerInfo(FJunoVillageTamingVillagerEntryInfo& InVillagerInfo);                                               // [0xce05658] Native|Event|Public|HasOutParms|BlueprintEvent 
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
	// void OnSelectionChanged(class UJunoBarnAssignmentListObject* InSelectedListObject);                                      // [0x228deb8] Event|Protected|BlueprintEvent 
	// Function /Script/JunoCreature_TamingUI.JunoBarnAssignmentScreen.GetVillageHasSlotForAnimal
	// bool GetVillageHasSlotForAnimal();                                                                                       // [0xce05254] Final|Native|Protected|BlueprintCallable|Const 
	// Function /Script/JunoCreature_TamingUI.JunoBarnAssignmentScreen.GetGlobalHasSlotForAnimal
	// bool GetGlobalHasSlotForAnimal();                                                                                        // [0xce0516c] Final|Native|Protected|BlueprintCallable|Const 
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
	// void SetupAnimalInfo(FActiveCampCreatureEntry& Data);                                                                    // [0x228deb8] Event|Protected|HasOutParms|BlueprintEvent 
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
	// void SetPreviewMarkerMaterial(bool bIsTown);                                                                             // [0x228deb8] Event|Public|BlueprintEvent 
	// Function /Script/JunoCreature_TamingUI.JunoTamingMapMarkerIconScreen.SetMarkerNameText
	// void SetMarkerNameText(bool bIsTown, FText& Name);                                                                       // [0x228deb8] Event|Public|HasOutParms|BlueprintEvent 
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
	// void HandleTabSelected(FName SelectedTabId);                                                                             // [0xce0529c] Final|Native|Private 
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
	// void SetMarkerNameText(FText& Name);                                                                                     // [0x228deb8] Event|Public|HasOutParms|BlueprintEvent 
};

/// Class /Script/JunoCreature_TamingUI.JunoVillageTamingVillagersScreen
/// Size: 0x0098 (0x000690 - 0x000728)
class UJunoVillageTamingVillagersScreen : public UJunoVillageScreenBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1832;

public:
	CMember(class UDynamicEntryBox*)                   VillageInhabitantsList                                      OFFSET(get<T>, {0x690, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_AskToLeave                                           OFFSET(get<T>, {0x698, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_ChangeName                                           OFFSET(get<T>, {0x6A0, 8, 0, 0})
	CMember(class UCommonButtonGroupBase*)             ButtonGroup_AllVillagers                                    OFFSET(get<T>, {0x6A8, 8, 0, 0})
	CMember(class UJunoVillageTamingVillagerEntry*)    LastHoveredEntry                                            OFFSET(get<T>, {0x6B0, 8, 0, 0})
	CMember(class UDynamicUIScene*)                    AskToLeaveModalScene                                        OFFSET(get<T>, {0x6B8, 8, 0, 0})
	SMember(FText)                                     AskToLeaveConfirmationTitle                                 OFFSET(getStruct<T>, {0x6C0, 16, 0, 0})
	SMember(FText)                                     AskToLeaveConfirmationDescription                           OFFSET(getStruct<T>, {0x6D0, 16, 0, 0})
	SMember(FText)                                     AskToLeaveConfirmButtonText                                 OFFSET(getStruct<T>, {0x6E0, 16, 0, 0})
	SMember(FText)                                     AskToLeaveCancelButtonText                                  OFFSET(getStruct<T>, {0x6F0, 16, 0, 0})
	SMember(FDataTableRowHandle)                       ModalConfirmAction                                          OFFSET(getStruct<T>, {0x700, 16, 0, 0})
	SMember(FDataTableRowHandle)                       ModalCancelAction                                           OFFSET(getStruct<T>, {0x710, 16, 0, 0})
	DMember(int32_t)                                   OsirisVillagerSlotCount                                     OFFSET(get<int32_t>, {0x720, 4, 0, 0})


	/// Functions
	// Function /Script/JunoCreature_TamingUI.JunoVillageTamingVillagersScreen.OnEntryHovered
	// void OnEntryHovered(class UJunoVillageTamingVillagerEntry* Entry);                                                       // [0x228deb8] Event|Protected|BlueprintEvent 
	// Function /Script/JunoCreature_TamingUI.JunoVillageTamingVillagersScreen.HandleAskToLeaveConfirmed
	// void HandleAskToLeaveConfirmed();                                                                                        // [0xce05274] Final|Native|Protected 
	// Function /Script/JunoCreature_TamingUI.JunoVillageTamingVillagersScreen.HandleAskToLeaveCancelled
	// void HandleAskToLeaveCancelled();                                                                                        // [0xcdb3498] Final|Native|Protected 
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
/// Size: 0x0068 (0x000000 - 0x000068)
class FJunoVillageTamingLevelRewardsEntryInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FAwesomePerkReward)                        AwesomePerkReward                                           OFFSET(getStruct<T>, {0x0, 64, 0, 0})
	DMember(int32_t)                                   NewSharedSlotCount                                          OFFSET(get<int32_t>, {0x40, 4, 0, 0})
	DMember(int32_t)                                   NewVillagerSlotCount                                        OFFSET(get<int32_t>, {0x44, 4, 0, 0})
	DMember(int32_t)                                   NewAnimalSlotCountSlotCount                                 OFFSET(get<int32_t>, {0x48, 4, 0, 0})
	DMember(int32_t)                                   NewMysteryVillagerCount                                     OFFSET(get<int32_t>, {0x4C, 4, 0, 0})
	CMember(EJunoBiome)                                BiomeRewardType                                             OFFSET(get<T>, {0x50, 1, 0, 0})
	DMember(bool)                                      bIsEventReward                                              OFFSET(get<bool>, {0x51, 1, 0, 0})
	CMember(TArray<class UJunoKnowledgeBundle*>)       KnowledgeBundles                                            OFFSET(get<T>, {0x58, 16, 0, 0})
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

