
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CommonConversationRuntime
/// dependency: CommonUI
/// dependency: CommonUILegacy
/// dependency: CoreUObject
/// dependency: CraftingRuntime
/// dependency: DataRegistry
/// dependency: DynamicUI
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: FortniteUI
/// dependency: GameFeatures
/// dependency: GameplayTags
/// dependency: JunoCraftingBaseRuntime
/// dependency: JunoGameNative
/// dependency: JunoLowMemoryFallbackRuntime
/// dependency: ModelViewViewModel
/// dependency: ModularGameplay
/// dependency: SlateCore
/// dependency: UMG

/// Class /Script/JunoUI.GameStateComponent_JunoFeedback
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UGameStateComponent_JunoFeedback : public UGameStateComponent_PlayerFeedback
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
};

/// Class /Script/JunoUI.JunoBangWidget
/// Size: 0x0020 (0x0002C0 - 0x0002E0)
class UJunoBangWidget : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 736;

public:


	/// Functions
	// Function /Script/JunoUI.JunoBangWidget.SetBangVisibility
	// void SetBangVisibility(EJunoBangVisibility BangVisibility);                                                              // [0x18a39e4] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/JunoUI.JunoBangWidget.SetBangCount
	// void SetBangCount(int32_t NewCount);                                                                                     // [0x18a39e4] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/JunoUI.JunoBangWidget.OnFreeBuildToggled
	// void OnFreeBuildToggled(bool bFreeBuildEnabled);                                                                         // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/JunoUI.JunoBangWidget.IsFreeBuildEnabled
	// bool IsFreeBuildEnabled();                                                                                               // [0xb5148b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/JunoUI.JunoBedAssignmentListEntry
/// Size: 0x0010 (0x0014E0 - 0x0014F0)
class UJunoBedAssignmentListEntry : public UCommonButtonLegacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5360;

public:
	CMember(class UJunoBedAssignmentListObject*)       BedAssignmentListObject                                     OFFSET(get<T>, {0x14E8, 8, 0, 0})


	/// Functions
	// Function /Script/JunoUI.JunoBedAssignmentListEntry.OnBedAssignmentObjectSet
	// void OnBedAssignmentObjectSet(class UJunoBedAssignmentListObject* NewBedAssignmentListObject);                           // [0x18a39e4] Event|Protected|BlueprintEvent 
};

/// Class /Script/JunoUI.JunoBedAssignmentListObject
/// Size: 0x0080 (0x000028 - 0x0000A8)
class UJunoBedAssignmentListObject : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	SMember(FGameplayTag)                              NPCGameplayTag                                              OFFSET(getStruct<T>, {0x28, 4, 0, 0})
	SMember(FText)                                     NPCDisplayName                                              OFFSET(getStruct<T>, {0x30, 24, 0, 0})
	CMember(TWeakObjectPtr<UTexture2D*>)               NPCIcon                                                     OFFSET(get<T>, {0x48, 32, 0, 0})
	DMember(bool)                                      bHasBed                                                     OFFSET(get<bool>, {0x68, 1, 0, 0})
	SMember(FUniqueNetIdRepl)                          PlayerNetId                                                 OFFSET(getStruct<T>, {0x70, 48, 0, 0})
	DMember(bool)                                      bIsBed                                                      OFFSET(get<bool>, {0xA0, 1, 0, 0})


	/// Functions
	// Function /Script/JunoUI.JunoBedAssignmentListObject.IsSelectable
	// bool IsSelectable();                                                                                                     // [0xb51491c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoUI.JunoBedAssignmentListObject.IsPlayer
	// bool IsPlayer();                                                                                                         // [0xb5148f8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoUI.JunoBedAssignmentListObject.IsNPC
	// bool IsNPC();                                                                                                            // [0xb5148e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoUI.JunoBedAssignmentListObject.IsEmpty
	// bool IsEmpty();                                                                                                          // [0xb51488c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoUI.JunoBedAssignmentListObject.GetNPCIcon
	// TWeakObjectPtr<UTexture2D*> GetNPCIcon();                                                                                // [0xb51463c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoUI.JunoBedAssignmentListObject.GetNPCGameplayTag
	// FGameplayTag GetNPCGameplayTag();                                                                                        // [0x3ee14d8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoUI.JunoBedAssignmentListObject.GetNPCDisplayName
	// FText GetNPCDisplayName();                                                                                               // [0xb5145f8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoUI.JunoBedAssignmentListObject.GetIsBed
	// bool GetIsBed();                                                                                                         // [0x81ea0ec] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoUI.JunoBedAssignmentListObject.GetHasBed
	// bool GetHasBed();                                                                                                        // [0x95d12f4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/JunoUI.JunoBiomeUIData
/// Size: 0x0050 (0x000030 - 0x000080)
class UJunoBiomeUIData : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(TMap<EJunoBiome, FJunoBiomeUIDisplayData>) BiomeUIDisplayData                                          OFFSET(get<T>, {0x30, 80, 0, 0})


	/// Functions
	// Function /Script/JunoUI.JunoBiomeUIData.GetJunoBIomeUIData
	// class UJunoBiomeUIData* GetJunoBIomeUIData();                                                                            // [0xb5145b8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoUI.JunoBiomeUIData.FindBiomeTypeUIData
	// bool FindBiomeTypeUIData(EJunoBiome& Biome, FJunoBiomeUIDisplayData& OutBiomeUIDisplayData);                             // [0xb514420] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/JunoUI.JunoBuildingBarAssignScreen
/// Size: 0x0048 (0x000400 - 0x000448)
class UJunoBuildingBarAssignScreen : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1096;

public:
	CMember(class UJunoBuildingBarMenu*)               BuildingBarMenuWidget                                       OFFSET(get<T>, {0x400, 8, 0, 0})
	SMember(FJunoBuildingSlotData)                     PreviewSlotData                                             OFFSET(getStruct<T>, {0x408, 64, 0, 0})


	/// Functions
	// Function /Script/JunoUI.JunoBuildingBarAssignScreen.SetRecipeToAssign
	// void SetRecipeToAssign(FName InRecipeToAssign);                                                                          // [0xb5149d4] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/JunoUI.JunoBuildingBarHud
/// Size: 0x0060 (0x000328 - 0x000388)
class UJunoBuildingBarHud : public UFortHUDElementWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 904;

public:
	CMember(class UDynamicEntryBox*)                   EntryBox_Slots                                              OFFSET(get<T>, {0x328, 8, 0, 0})
	CMember(EJunoBuildModeType)                        BuildBarType                                                OFFSET(get<T>, {0x330, 1, 0, 0})
};

/// Class /Script/JunoUI.JunoBuildingBarHudSlot
/// Size: 0x0018 (0x0002E8 - 0x000300)
class UJunoBuildingBarHudSlot : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 768;

public:
	CMember(class UJunoBuildingDisplaySlot*)           DisplaySlotWidget                                           OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(class UFortKeybindWidget*)                 KeyBind_Keyboard                                            OFFSET(get<T>, {0x2F0, 8, 0, 0})
	DMember(bool)                                      bCollapseOnEmpty                                            OFFSET(get<bool>, {0x2F8, 1, 0, 0})


	/// Functions
	// Function /Script/JunoUI.JunoBuildingBarHudSlot.OnSelectionChanged
	// void OnSelectionChanged(bool bInSelected, FJunoBuildingSlotData& BuildingSlotInitData);                                  // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/JunoUI.JunoBuildingBarHudSlot.OnBuildingSlotPinned
	// void OnBuildingSlotPinned(bool bIsPinned);                                                                               // [0x18a39e4] Event|Public|BlueprintEvent 
};

/// Class /Script/JunoUI.JunoBuildingBarMenu
/// Size: 0x0088 (0x0002E8 - 0x000370)
class UJunoBuildingBarMenu : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 880;

public:
	DMember(bool)                                      bClickableSlots                                             OFFSET(get<bool>, {0x2F8, 1, 0, 0})
	CMember(EJunoBuildModeType)                        BuildBarType                                                OFFSET(get<T>, {0x2F9, 1, 0, 0})
	CMember(class UDynamicEntryBox*)                   EntryBox_Slots                                              OFFSET(get<T>, {0x308, 8, 0, 0})
	SMember(FJunoBuildingSlotData)                     PreviewData                                                 OFFSET(getStruct<T>, {0x310, 64, 0, 0})
};

/// Class /Script/JunoUI.JunoBuildingBarMenuSlot
/// Size: 0x0010 (0x001490 - 0x0014A0)
class UJunoBuildingBarMenuSlot : public UCommonButtonBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5280;

public:
	CMember(class UJunoBuildingDisplaySlot*)           DisplaySlotWidget                                           OFFSET(get<T>, {0x1490, 8, 0, 0})


	/// Functions
	// Function /Script/JunoUI.JunoBuildingBarMenuSlot.OnLeavePreview
	// void OnLeavePreview();                                                                                                   // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/JunoUI.JunoBuildingBarMenuSlot.OnEnterPreview
	// void OnEnterPreview(FJunoBuildingSlotData& InPreviewSlotData);                                                           // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
};

/// Class /Script/JunoUI.JunoBuildingDisplaySlot
/// Size: 0x0040 (0x0002E8 - 0x000328)
class UJunoBuildingDisplaySlot : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 808;

public:
	SMember(FJunoBuildingSlotData)                     BuildingSlotData                                            OFFSET(getStruct<T>, {0x2E8, 64, 0, 0})


	/// Functions
	// Function /Script/JunoUI.JunoBuildingDisplaySlot.OnSetBuildingSlotInitData
	// void OnSetBuildingSlotInitData(FJunoBuildingSlotData& BuildingSlotInitData);                                             // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/JunoUI.JunoBuildingDisplaySlot.OnSelectionChanged
	// void OnSelectionChanged(bool bInSelected);                                                                               // [0x18a39e4] Event|Protected|BlueprintEvent 
};

/// Class /Script/JunoUI.JunoBuildingIngredientsGroup
/// Size: 0x0078 (0x000328 - 0x0003A0)
class UJunoBuildingIngredientsGroup : public UFortHUDElementWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 928;

public:
	CMember(class UDynamicEntryBox*)                   EntryBox_Ingredients                                        OFFSET(get<T>, {0x328, 8, 0, 0})
	SMember(FGameplayTagContainer)                     FilteredTags                                                OFFSET(getStruct<T>, {0x330, 32, 0, 0})


	/// Functions
	// Function /Script/JunoUI.JunoBuildingIngredientsGroup.OnRecipeDisplayDataChanged
	// void OnRecipeDisplayDataChanged(FText& RecipeDisplayName, class UJunoBuildInstructionsItemDefinition* BuildingItemDefinition); // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/JunoUI.JunoBuildingIngredientsGroup.OnCanCraftChanged
	// void OnCanCraftChanged(bool bCanCraft);                                                                                  // [0x18a39e4] Event|Protected|BlueprintEvent 
};

/// Class /Script/JunoUI.JunoBuildingMemoryComponent
/// Size: 0x0028 (0x0000A0 - 0x0000C8)
class UJunoBuildingMemoryComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	CMember(class UDataTable*)                         Thresholds                                                  OFFSET(get<T>, {0xA0, 8, 0, 0})
};

/// Class /Script/JunoUI.JunoRecipeDetailsWidget
/// Size: 0x0048 (0x0002E8 - 0x000330)
class UJunoRecipeDetailsWidget : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 816;

public:
	DMember(bool)                                      bCanCraft                                                   OFFSET(get<bool>, {0x2E8, 1, 0, 0})
	DMember(bool)                                      bDisableInfiniteIcon                                        OFFSET(get<bool>, {0x2E9, 1, 0, 0})
	CMember(TArray<FCraftingIngredientRequirement>)    IngredientRequirements                                      OFFSET(get<T>, {0x300, 16, 0, 0})
	CMember(TWeakObjectPtr<AActor*>)                   CraftingObject                                              OFFSET(get<T>, {0x310, 8, 0, 0})
	SMember(FName)                                     CurrentRecipe                                               OFFSET(getStruct<T>, {0x318, 4, 0, 0})
	CMember(class UDynamicEntryBox*)                   EntryBox_Ingredients                                        OFFSET(get<T>, {0x320, 8, 0, 0})
	CMember(class UScrollBox*)                         ScrollBox_Ingredients                                       OFFSET(get<T>, {0x328, 8, 0, 0})


	/// Functions
	// Function /Script/JunoUI.JunoRecipeDetailsWidget.UpdateRecipeFocus
	// void UpdateRecipeFocus(FName& Recipe);                                                                                   // [0xb54689c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoUI.JunoRecipeDetailsWidget.SetCraftingObject
	// void SetCraftingObject(class AActor* InCraftingObject);                                                                  // [0xb54679c] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoUI.JunoRecipeDetailsWidget.OnSetRecipeDetails
	// void OnSetRecipeDetails(FText& Name, EJunoKnowledgeState KnowledgeState, int32_t CraftCount, class UItemDefinitionBase* CraftedItemDef, FText& SourceName, FSlateBrush SourceIcon); // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/JunoUI.JunoRecipeDetailsWidget.NotifyParentDeactivated
	// void NotifyParentDeactivated();                                                                                          // [0x18fda34] Native|Public|BlueprintCallable 
	// Function /Script/JunoUI.JunoRecipeDetailsWidget.NotifyParentActivated
	// void NotifyParentActivated();                                                                                            // [0x248ecf4] Native|Public|BlueprintCallable 
	// Function /Script/JunoUI.JunoRecipeDetailsWidget.HandleInventoryChanged
	// void HandleInventoryChanged(FJunoItemSlot& Item, EJunoItemChangeType ChangeType);                                        // [0xb5462d8] Final|Native|Protected|HasOutParms 
	// Function /Script/JunoUI.JunoRecipeDetailsWidget.HandleCraftingSuccess
	// void HandleCraftingSuccess(FCraftingObjectSuccessEvent& Event);                                                          // [0xb546230] Final|Native|Protected|HasOutParms 
	// Function /Script/JunoUI.JunoRecipeDetailsWidget.GetCurrentRecipe
	// FName GetCurrentRecipe();                                                                                                // [0xb545a84] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/JunoUI.JunoBuildingRecipeDetails
/// Size: 0x0050 (0x000330 - 0x000380)
class UJunoBuildingRecipeDetails : public UJunoRecipeDetailsWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 896;

public:
	CMember(class UDynamicEntryBox*)                   EntryBox_GuidedBuildingIngredients                          OFFSET(get<T>, {0x338, 8, 0, 0})
	DMember(float)                                     LoadingMinimumWaitTimeSeconds                               OFFSET(get<float>, {0x340, 4, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   ActorClassToBuild                                           OFFSET(get<T>, {0x348, 32, 0, 0})
	CMember(class UScrollBox*)                         ScrollBox_Requirements                                      OFFSET(get<T>, {0x378, 8, 0, 0})


	/// Functions
	// Function /Script/JunoUI.JunoBuildingRecipeDetails.SetGuidedBuildIngredientsToPreviewCount
	// void SetGuidedBuildIngredientsToPreviewCount(int32_t InGuidedBuildIngredientsToPreviewCount);                            // [0xb514958] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoUI.JunoBuildingRecipeDetails.OnLoadingBuildingActorAssetComplete
	// void OnLoadingBuildingActorAssetComplete(FJunoGuidedBuildingUIData GuidedBuildingUIData);                                // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/JunoUI.JunoBuildingRecipeDetails.OnLoadingBuildingActorAsset
	// void OnLoadingBuildingActorAsset();                                                                                      // [0x18a39e4] Event|Protected|BlueprintEvent 
};

/// Class /Script/JunoUI.JunoCompassWidget
/// Size: 0x0130 (0x000490 - 0x0005C0)
class UJunoCompassWidget : public UFortCompassWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1472;

public:
	DMember(float)                                     CompassWidth                                                OFFSET(get<float>, {0x498, 4, 0, 0})
	SMember(FVector2f)                                 MarkerSize                                                  OFFSET(getStruct<T>, {0x49C, 8, 0, 0})
	SMember(FVector2f)                                 MobileMarkerSize                                            OFFSET(getStruct<T>, {0x4A4, 8, 0, 0})
	DMember(float)                                     MarkerDistanceCutOff                                        OFFSET(get<float>, {0x4AC, 4, 0, 0})
	DMember(float)                                     MarkerDistanceOffset                                        OFFSET(get<float>, {0x4B0, 4, 0, 0})
	SMember(FGameplayTag)                              AdvancedCompassTag                                          OFFSET(getStruct<T>, {0x4B4, 4, 0, 0})
	SMember(FSlateFontInfo)                            MarkerDistanceTextFont                                      OFFSET(getStruct<T>, {0x4B8, 88, 0, 0})
	CMember(TMap<FGuid, UMaterialInstanceDynamic*>)    ActiveMarkers                                               OFFSET(get<T>, {0x510, 80, 0, 0})
	CMember(TMap<FSoftObjectPath, FJunoMarkerMaterialInstances>) AvailableMaterialInstances                        OFFSET(get<T>, {0x560, 80, 0, 0})


	/// Functions
	// Function /Script/JunoUI.JunoCompassWidget.UpdateHasAdvancedCompassFlag
	// void UpdateHasAdvancedCompassFlag();                                                                                     // [0xb514a80] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/JunoUI.JunoConversationMarker
/// Size: 0x0138 (0x0003D0 - 0x000508)
class UJunoConversationMarker : public UFortActorIndicatorWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1288;

public:
	CMember(class UFortKeybindWidget*)                 Keybind_Interact                                            OFFSET(get<T>, {0x3D8, 8, 0, 0})
	DMember(float)                                     MessageBubbleDuration                                       OFFSET(get<float>, {0x3E0, 4, 0, 0})
	DMember(float)                                     LastTextBubbleDuration                                      OFFSET(get<float>, {0x3E4, 4, 0, 0})
	DMember(bool)                                      bSetCustomInteractionWidgetOnlyWhenNeeded                   OFFSET(get<bool>, {0x3E8, 1, 0, 0})
	CMember(TMap<FGameplayTag, FJunoNPCStateUIData>)   CachedNPCStateMap                                           OFFSET(get<T>, {0x408, 80, 0, 0})
	CMember(TMap<FGameplayTag, FJunoNPCStateUIData>)   ActiveNPCStateMap                                           OFFSET(get<T>, {0x458, 80, 0, 0})


	/// Functions
	// Function /Script/JunoUI.JunoConversationMarker.SetNPCStatus
	// void SetNPCStatus(FJunoNPCStateUIData& NPCStateData);                                                                    // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/JunoUI.JunoConversationMarker.OnParticipantNameChanged
	// void OnParticipantNameChanged(FText& InParticipantName);                                                                 // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/JunoUI.JunoConversationMarker.OnMessageUpdated
	// void OnMessageUpdated(FText& MessageText);                                                                               // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/JunoUI.JunoConversationMarker.OnConversationInteractionUpdated
	// void OnConversationInteractionUpdated(EDialogMarkerInteractionState NewInteractionState, bool bNewCanInteract);          // [0x18a39e4] Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /Script/JunoUI.JunoConversationMarker.OnCanInteract
	// bool OnCanInteract();                                                                                                    // [0xb514940] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoUI.JunoConversationMarker.GetInteractionState
	// EDialogMarkerInteractionState GetInteractionState();                                                                     // [0xb5145a0] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoUI.JunoConversationMarker.ClearNPCStatus
	// void ClearNPCStatus();                                                                                                   // [0x18a39e4] Event|Protected|BlueprintEvent 
};

/// Class /Script/JunoUI.JunoConversationOption
/// Size: 0x0080 (0x001490 - 0x001510)
class UJunoConversationOption : public UCommonButtonBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5392;

public:
	SMember(FClientConversationOptionEntry)            RepresentedOption                                           OFFSET(getStruct<T>, {0x1498, 112, 0, 0})


	/// Functions
	// Function /Script/JunoUI.JunoConversationOption.OnDisplayItemDefLoaded
	// void OnDisplayItemDefLoaded(class UItemDefinitionBase* ResolvedItemDef);                                                 // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/JunoUI.JunoConversationOption.OnDisplayAssetLoaded
	// void OnDisplayAssetLoaded(class UObject* ResolvedAsset);                                                                 // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/JunoUI.JunoConversationOption.OnConversationOptionUpdated
	// void OnConversationOptionUpdated(FClientConversationOptionEntry& InOption);                                              // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/JunoUI.JunoConversationOption.GetConversationOption
	// FClientConversationOptionEntry GetConversationOption();                                                                  // [0xb514584] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/JunoUI.JunoConversationScreen
/// Size: 0x0080 (0x000400 - 0x000480)
class UJunoConversationScreen : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1152;

public:
	CMember(class UCommonButtonGroupBase*)             Group_Options                                               OFFSET(get<T>, {0x400, 8, 0, 0})
	CMember(TWeakObjectPtr<UTexture2D*>)               ParticipantIconSmall                                        OFFSET(get<T>, {0x408, 32, 0, 0})
	CMember(class UDynamicEntryBox*)                   EntryBox_Options                                            OFFSET(get<T>, {0x428, 8, 0, 0})
	CMember(class UJunoConversationOption*)            LastEntryHovered                                            OFFSET(get<T>, {0x430, 8, 0, 0})
	SMember(FDataTableRowHandle)                       CloseScreenAction                                           OFFSET(getStruct<T>, {0x438, 16, 0, 0})


	/// Functions
	// Function /Script/JunoUI.JunoConversationScreen.OnParticipantIconChanged
	// void OnParticipantIconChanged(TWeakObjectPtr<UTexture2D*>& Icon);                                                        // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/JunoUI.JunoConversationScreen.OnConversationStarted
	// void OnConversationStarted();                                                                                            // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/JunoUI.JunoConversationScreen.OnConversationOptionsUpdated
	// void OnConversationOptionsUpdated();                                                                                     // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/JunoUI.JunoConversationScreen.OnConversationMessageUpdated
	// void OnConversationMessageUpdated(FClientConversationMessage& ConversationMessage);                                      // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/JunoUI.JunoConversationScreen.HandleParticipantIconChanged
	// void HandleParticipantIconChanged(TWeakObjectPtr<UTexture2D*>& Icon);                                                    // [0xb5147ec] Final|Native|Private|HasOutParms 
	// Function /Script/JunoUI.JunoConversationScreen.EndConversation
	// void EndConversation();                                                                                                  // [0xb51440c] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/JunoUI.JunoDebugWatermark
/// Size: 0x0000 (0x000328 - 0x000328)
class UJunoDebugWatermark : public UFortHUDElementWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 808;

public:


	/// Functions
	// Function /Script/JunoUI.JunoDebugWatermark.ShouldShowSeed
	// bool ShouldShowSeed();                                                                                                   // [0xb514a54] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoUI.JunoDebugWatermark.GetWorldID
	// FString GetWorldID();                                                                                                    // [0xb5146dc] Final|Native|Public|BlueprintCallable|Const 
};

/// Class /Script/JunoUI.JunoDisassemblingScreen
/// Size: 0x0140 (0x000400 - 0x000540)
class UJunoDisassemblingScreen : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1344;

public:
	CMember(EDisassemblingStationInventoryState)       StationInventoryState                                       OFFSET(get<T>, {0x430, 1, 0, 0})
	CMember(class AJunoCraftingObjectBGA*)             CraftingObject                                              OFFSET(get<T>, {0x458, 8, 0, 0})
	CMember(class UJunoPlayerInventoryContainer*)      Container_PlayerInventory                                   OFFSET(get<T>, {0x460, 8, 0, 0})
	CMember(class UJunoInventoryGroup*)                InventoryGroup_Input                                        OFFSET(get<T>, {0x468, 8, 0, 0})
	CMember(class UJunoInventoryGroup*)                InventoryGroup_Output                                       OFFSET(get<T>, {0x470, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_Back                                                 OFFSET(get<T>, {0x478, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_CloseTouch                                           OFFSET(get<T>, {0x480, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_TakeStack                                            OFFSET(get<T>, {0x488, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_DepositStack                                         OFFSET(get<T>, {0x490, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_MoreActions                                          OFFSET(get<T>, {0x498, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_TakeAll                                              OFFSET(get<T>, {0x4A0, 8, 0, 0})
	CMember(class UCommonButtonGroupBase*)             ButtonGroup_AllSlots                                        OFFSET(get<T>, {0x4A8, 8, 0, 0})
	SMember(FDataTableRowHandle)                       CancelAction                                                OFFSET(getStruct<T>, {0x4B0, 16, 0, 0})
	SMember(FDataTableRowHandle)                       BackAction                                                  OFFSET(getStruct<T>, {0x4C0, 16, 0, 0})
	CMember(class UJunoInventorySlot*)                 LastSelectedSlot                                            OFFSET(get<T>, {0x4D0, 8, 0, 0})
	CMember(class UJunoInventorySlot*)                 LastHoveredSlot                                             OFFSET(get<T>, {0x4D8, 8, 0, 0})
	CMember(class UJunoPassiveCraftingComponent*)      JunoPassiveCraftingComponent                                OFFSET(get<T>, {0x4E0, 8, 0, 0})
	CMember(class UJunoInventoryDragAndDropHandler*)   JunoInventoryDragAndDropHandler                             OFFSET(get<T>, {0x4E8, 8, 0, 0})


	/// Functions
	// Function /Script/JunoUI.JunoDisassemblingScreen.OnUpdateStationCraftingState
	// void OnUpdateStationCraftingState(EDisassemblingStationInventoryState NewState);                                         // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/JunoUI.JunoDisassemblingScreen.OnSlotItemSelected
	// void OnSlotItemSelected(class UFortItem* Item);                                                                          // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/JunoUI.JunoDisassemblingScreen.OnDisabledInventoryItemHovered
	// void OnDisabledInventoryItemHovered();                                                                                   // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/JunoUI.JunoDisassemblingScreen.OnCrafringFormulaResultsChanged
	// void OnCrafringFormulaResultsChanged(TArray<FItemAndCount>& CraftingResults);                                            // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/JunoUI.JunoDisassemblingScreen.HandleCraftingFormulaChanged
	// void HandleCraftingFormulaChanged(class AActor* CraftingObjectActor, FName& NewFormula);                                 // [0xb51471c] Final|Native|Private|HasOutParms 
};

/// Class /Script/JunoUI.JunoDynamicControlPromptsWidget
/// Size: 0x0008 (0x000328 - 0x000330)
class UJunoDynamicControlPromptsWidget : public UFortHUDElementWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 816;

public:
	CMember(class UDynamicEntryBox*)                   EntryBox                                                    OFFSET(get<T>, {0x328, 8, 0, 0})


	/// Functions
	// Function /Script/JunoUI.JunoDynamicControlPromptsWidget.InitializeEntry
	// void InitializeEntry(FJunoInputAlternateDisplayText& DisplayText, class UUserWidget* EntryWidget);                       // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/JunoUI.JunoDynamicControlPromptsWidget.AddEntry
	// void AddEntry(FJunoInputAlternateDisplayText& DisplayText);                                                              // [0xb5159e8] Final|Native|Protected|HasOutParms|BlueprintCallable 
};

/// Class /Script/JunoUI.JunoEnchantmentScreen
/// Size: 0x0088 (0x000400 - 0x000488)
class UJunoEnchantmentScreen : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1160;

public:
	CMember(class UJunoPlayerInventoryContainer*)      Container_PlayerInventory                                   OFFSET(get<T>, {0x408, 8, 0, 0})
	CMember(class UGridListView*)                      RecipeList_Enchantments                                     OFFSET(get<T>, {0x410, 8, 0, 0})
	CMember(class UDynamicEntryBox*)                   EntryBox_RecipeIngredients                                  OFFSET(get<T>, {0x418, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_Enchant                                              OFFSET(get<T>, {0x420, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_TouchSelect                                          OFFSET(get<T>, {0x428, 8, 0, 0})
	CMember(class AJunoCraftingObjectBGA*)             CraftingObject                                              OFFSET(get<T>, {0x430, 8, 0, 0})
	CMember(class UJunoInventorySlot*)                 LastInventorySlot                                           OFFSET(get<T>, {0x438, 8, 0, 0})
	CMember(class UFortItem*)                          ChosenItem                                                  OFFSET(get<T>, {0x440, 8, 0, 0})
	CMember(TArray<FFortAlterationSlotStatus>)         ChosenItemAlterations                                       OFFSET(get<T>, {0x448, 16, 0, 0})
	CMember(class UJunoInventorySlot*)                 HoveredInventorySlot                                        OFFSET(get<T>, {0x460, 8, 0, 0})


	/// Functions
	// Function /Script/JunoUI.JunoEnchantmentScreen.SelectInventorySlot
	// void SelectInventorySlot(class UJunoInventorySlot* InventorySlot);                                                       // [0xb515dd4] Final|Native|Private 
	// Function /Script/JunoUI.JunoEnchantmentScreen.RequestBackout
	// void RequestBackout();                                                                                                   // [0xb515d6c] Final|Native|Protected|BlueprintCallable 
	// Function /Script/JunoUI.JunoEnchantmentScreen.OnRecipeEntrySelected
	// void OnRecipeEntrySelected(class UFortAlterationItemDefinition* PreviewEnchantment);                                     // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/JunoUI.JunoEnchantmentScreen.OnRecipeEntryHovered
	// void OnRecipeEntryHovered(class UFortAlterationItemDefinition* PreviewEnchantment);                                      // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/JunoUI.JunoEnchantmentScreen.OnItemEnchanted
	// void OnItemEnchanted(class UFortItem* Item, class UFortItemDefinition* PreviewAlteration, int32_t UpdatedAlterationIndex); // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/JunoUI.JunoEnchantmentScreen.OnInventoryItemHovered
	// void OnInventoryItemHovered(class UFortItem* HoveredInventoryItem);                                                      // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/JunoUI.JunoEnchantmentScreen.OnInventoryItemChosen
	// void OnInventoryItemChosen(class UFortItem* ChosenInventoryItem);                                                        // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/JunoUI.JunoEnchantmentScreen.OnInputMethodChanged
	// void OnInputMethodChanged(ECommonInputType NewInputType);                                                                // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/JunoUI.JunoEnchantmentScreen.OnEnchantmentStationHeaderData
	// void OnEnchantmentStationHeaderData(FJunoCraftingStationUIDataEntry& InEntry);                                           // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/JunoUI.JunoEnchantmentScreen.OnEnchantButtonStateChanged
	// void OnEnchantButtonStateChanged(EJunoEnchantButtonState InButtonState);                                                 // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/JunoUI.JunoEnchantmentScreen.OnEnchantableItemSlotsCreated
	// void OnEnchantableItemSlotsCreated(bool bNothingToEnchant);                                                              // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/JunoUI.JunoEnchantmentScreen.OnDisabledInventoryItemHovered
	// void OnDisabledInventoryItemHovered();                                                                                   // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/JunoUI.JunoEnchantmentScreen.HandleCraftingSuccess
	// void HandleCraftingSuccess(FCraftingObjectSuccessEvent& Event);                                                          // [0xb515b34] Final|Native|Private|HasOutParms 
	// Function /Script/JunoUI.JunoEnchantmentScreen.GetCurrentScreenState
	// EJunoEnchantmentScreenState GetCurrentScreenState();                                                                     // [0xb515b1c] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoUI.JunoEnchantmentScreen.CancelEnchanting
	// void CancelEnchanting();                                                                                                 // [0xb515a84] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/JunoUI.JunoEnchantmentsWidget
/// Size: 0x0010 (0x0002E8 - 0x0002F8)
class UJunoEnchantmentsWidget : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 760;

public:
	CMember(class UDynamicEntryBox*)                   EntryBox_Enchantments                                       OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(class UFortItem*)                          RepresentedItem                                             OFFSET(get<T>, {0x2F0, 8, 0, 0})


	/// Functions
	// Function /Script/JunoUI.JunoEnchantmentsWidget.SetUpdatedEnchantmentIndex
	// void SetUpdatedEnchantmentIndex(int32_t UpdatedIndex);                                                                   // [0xb516204] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoUI.JunoEnchantmentsWidget.SetRepresentedItem
	// void SetRepresentedItem(class UFortItem* InRepresentedItem);                                                             // [0xb51600c] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoUI.JunoEnchantmentsWidget.SetPreviewEnchantment
	// void SetPreviewEnchantment(class UFortAlterationItemDefinition* InEnchantment);                                          // [0xb515f38] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoUI.JunoEnchantmentsWidget.OnEnchantmentsUpdated
	// void OnEnchantmentsUpdated(bool bHasEnchantments);                                                                       // [0x18a39e4] Event|Protected|BlueprintEvent 
};

/// Class /Script/JunoUI.JunoEnchantmentWidget
/// Size: 0x0010 (0x0002E8 - 0x0002F8)
class UJunoEnchantmentWidget : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 760;

public:
	CMember(class UFortAlterationItemDefinition*)      Enchantment                                                 OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(EJunoEnchantmentState)                     EnchantmentState                                            OFFSET(get<T>, {0x2F0, 1, 0, 0})


	/// Functions
	// Function /Script/JunoUI.JunoEnchantmentWidget.OnRepresentedItemChanged
	// void OnRepresentedItemChanged();                                                                                         // [0x18a39e4] Event|Protected|BlueprintEvent 
};

/// Class /Script/JunoUI.JunoFullScreenMap
/// Size: 0x0150 (0x000400 - 0x000550)
class UJunoFullScreenMap : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1360;

public:
	SMember(FDataTableRowHandle)                       CloseScreenAction                                           OFFSET(getStruct<T>, {0x428, 16, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_Back                                                 OFFSET(get<T>, {0x438, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_CloseTouch                                           OFFSET(get<T>, {0x440, 8, 0, 0})
	CMember(class UJunoMapWidget*)                     MapWidget                                                   OFFSET(get<T>, {0x448, 8, 0, 0})
	DMember(float)                                     ZoomMouseWheelScale                                         OFFSET(get<float>, {0x450, 4, 0, 0})
	SMember(FJunoMapZoomBounds)                        ZoomBounds                                                  OFFSET(getStruct<T>, {0x454, 8, 0, 0})
	DMember(float)                                     WorldMetersInWidth                                          OFFSET(get<float>, {0x45C, 4, 0, 0})
	DMember(float)                                     TouchZoomSpeed                                              OFFSET(get<float>, {0x460, 4, 0, 0})
	DMember(float)                                     GamepadZoomSpeed                                            OFFSET(get<float>, {0x464, 4, 0, 0})
	DMember(float)                                     GamepadPanSpeed                                             OFFSET(get<float>, {0x468, 4, 0, 0})
	DMember(float)                                     GamepadDeadZone                                             OFFSET(get<float>, {0x46C, 4, 0, 0})
	DMember(bool)                                      bLockPanningToPlayerVisibility                              OFFSET(get<bool>, {0x470, 1, 0, 0})
	DMember(float)                                     PlayerVisibilityPadding                                     OFFSET(get<float>, {0x474, 4, 0, 0})
	CMember(TWeakObjectPtr<UMaterialInterface*>)       PlayerIconMaterial                                          OFFSET(get<T>, {0x478, 32, 0, 0})
	DMember(int32_t)                                   PlayerIconSize                                              OFFSET(get<int32_t>, {0x498, 4, 0, 0})
	CMember(TWeakObjectPtr<UMaterialInterface*>)       AnchoringArrowIconMaterial                                  OFFSET(get<T>, {0x4A0, 32, 0, 0})
	DMember(int32_t)                                   AnchoringArrowIconSize                                      OFFSET(get<int32_t>, {0x4C0, 4, 0, 0})
	DMember(float)                                     AnchorMapPadding                                            OFFSET(get<float>, {0x4C4, 4, 0, 0})
	DMember(float)                                     MarkerCyclingDisplayDuration                                OFFSET(get<float>, {0x4C8, 4, 0, 0})
	DMember(float)                                     InContainerIconDistance                                     OFFSET(get<float>, {0x4CC, 4, 0, 0})
	SMember(FName)                                     FogOfWarMaterialParameterName                               OFFSET(getStruct<T>, {0x4D0, 4, 0, 0})
	SMember(FName)                                     FogOfWarScaleParameterName                                  OFFSET(getStruct<T>, {0x4D4, 4, 0, 0})
	SMember(FName)                                     FogOfWarOffsetParameterName                                 OFFSET(getStruct<T>, {0x4D8, 4, 0, 0})
	SMember(FName)                                     FogOfWarRandomSignParameterName                             OFFSET(getStruct<T>, {0x4DC, 4, 0, 0})
	SMember(FName)                                     FogOfWarRandomIntensityParameterName                        OFFSET(getStruct<T>, {0x4E0, 4, 0, 0})
	CMember(TWeakObjectPtr<UMaterialInterface*>)       MapTileMaterial                                             OFFSET(get<T>, {0x4E8, 32, 0, 0})
	SMember(FName)                                     TerrainMaterialParameterName                                OFFSET(getStruct<T>, {0x508, 4, 0, 0})
	SMember(FName)                                     ZoomLevelMaterialParameterName                              OFFSET(getStruct<T>, {0x50C, 4, 0, 0})
	SMember(FName)                                     MapContainerSizeXParameterName                              OFFSET(getStruct<T>, {0x510, 4, 0, 0})
	SMember(FName)                                     MapContainerSizeYParameterName                              OFFSET(getStruct<T>, {0x514, 4, 0, 0})
	SMember(FName)                                     MapContainerVerticalOffsetParameterName                     OFFSET(getStruct<T>, {0x518, 4, 0, 0})
	CMember(TWeakObjectPtr<UJunoMapViewModel*>)        MapViewModel                                                OFFSET(get<T>, {0x51C, 8, 0, 0})


	/// Functions
	// Function /Script/JunoUI.JunoFullScreenMap.ResetFocusToPlayer
	// void ResetFocusToPlayer();                                                                                               // [0xb515db0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/JunoUI.JunoFullScreenMap.IsMapTabAllowed
	// bool IsMapTabAllowed();                                                                                                  // [0xb515cdc] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/JunoUI.JunoHudMenuBaseInitData
/// Size: 0x0008 (0x000028 - 0x000030)
class UJunoHudMenuBaseInitData : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FName)                                     InitialHudMenuBaseTab                                       OFFSET(getStruct<T>, {0x28, 4, 0, 0})
};

/// Class /Script/JunoUI.JunoHudMenuBase
/// Size: 0x0038 (0x000400 - 0x000438)
class UJunoHudMenuBase : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1080;

public:
	CMember(class UFortTabListWidgetBase*)             TabList_MenuTabs                                            OFFSET(get<T>, {0x410, 8, 0, 0})
	CMember(class UCommonActivatableWidgetSwitcher*)   Switcher_Tabs                                               OFFSET(get<T>, {0x418, 8, 0, 0})
	SMember(FDataTableRowHandle)                       CloseHUDMenuAction                                          OFFSET(getStruct<T>, {0x420, 16, 0, 0})
	CMember(class UJunoHudMenuBaseInitData*)           HudMenuBaseInitData                                         OFFSET(get<T>, {0x430, 8, 0, 0})


	/// Functions
	// Function /Script/JunoUI.JunoHudMenuBase.OnInitDataSet
	// void OnInitDataSet(class UJunoHudMenuBaseInitData* InInitData);                                                          // [0x18a39e4] Event|Protected|BlueprintEvent 
};

/// Class /Script/JunoUI.JunoHudMenuContentInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoHudMenuContentInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/JunoUI.JunoHUDMenuTabButton
/// Size: 0x0000 (0x001490 - 0x001490)
class UJunoHUDMenuTabButton : public UCommonButtonBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5264;

public:


	/// Functions
	// Function /Script/JunoUI.JunoHUDMenuTabButton.GetNumUnviewedItems
	// int32_t GetNumUnviewedItems();                                                                                           // [0x81165c8] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
};

/// Class /Script/JunoUI.JunoIngredientWidget
/// Size: 0x0040 (0x0002E8 - 0x000328)
class UJunoIngredientWidget : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 808;

public:
	SMember(FJunoIngredientInfo)                       CachedInfo                                                  OFFSET(getStruct<T>, {0x2F0, 40, 0, 0})
	CMember(class UCommonTextBlock*)                   Text_Name                                                   OFFSET(get<T>, {0x318, 8, 0, 0})
	DMember(bool)                                      bDisableInfiniteIcon                                        OFFSET(get<bool>, {0x320, 1, 0, 0})


	/// Functions
	// Function /Script/JunoUI.JunoIngredientWidget.OnSetIngredientData
	// void OnSetIngredientData(TWeakObjectPtr<UTexture2D*>& Icon, EFortRarity ItemRarity, int32_t EntryIndex, FText& ItemDescription); // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/JunoUI.JunoIngredientWidget.OnSetIngredientCounts
	// void OnSetIngredientCounts(int32_t OwnedCount, int32_t RequiredCount);                                                   // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/JunoUI.JunoIngredientWidget.OnSetHasEnough
	// void OnSetHasEnough(bool bHasEnough);                                                                                    // [0x18a39e4] Event|Protected|BlueprintEvent 
};

/// Class /Script/JunoUI.JunoInventoryUIData
/// Size: 0x0050 (0x000030 - 0x000080)
class UJunoInventoryUIData : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(TMap<FGameplayTag, FJunoInventoryGroupUIDataList>) IndividualInventoryGroupUIData                      OFFSET(get<T>, {0x30, 80, 0, 0})
};

/// Class /Script/JunoUI.JunoItemSpawnerEntrySlot
/// Size: 0x0050 (0x001490 - 0x0014E0)
class UJunoItemSpawnerEntrySlot : public UCommonButtonBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5344;

public:
	CMember(class UMenuAnchor*)                        ContextMenuAnchor                                           OFFSET(get<T>, {0x1498, 8, 0, 0})
	DMember(int32_t)                                   StackSizeMultiplier                                         OFFSET(get<int32_t>, {0x14A4, 4, 0, 0})
	CMember(class UJunoItemSpawnerListEntry*)          ListEntry                                                   OFFSET(get<T>, {0x14A8, 8, 0, 0})
	CMember(class UClass*)                             ContextMenuClass                                            OFFSET(get<T>, {0x14B0, 8, 0, 0})


	/// Functions
	// Function /Script/JunoUI.JunoItemSpawnerEntrySlot.UpdateItemDisplay
	// void UpdateItemDisplay(class UFortItemDefinition* FortItemDefinition);                                                   // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/JunoUI.JunoItemSpawnerEntrySlot.OnLeaveContextMenuMode
	// void OnLeaveContextMenuMode();                                                                                           // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/JunoUI.JunoItemSpawnerEntrySlot.OnEnterContextMenuMode
	// void OnEnterContextMenuMode(bool bIsCurrentlySelectedSlot);                                                              // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/JunoUI.JunoItemSpawnerEntrySlot.HandleOnMenuOpenChanged
	// void HandleOnMenuOpenChanged(bool bIsOpen);                                                                              // [0xb515bdc] Final|Native|Private 
	// Function /Script/JunoUI.JunoItemSpawnerEntrySlot.GetContextMenu
	// class UUserWidget* GetContextMenu();                                                                                     // [0xb515af8] Final|Native|Private 
};

/// Class /Script/JunoUI.JunoItemSpawnerSubCategoryHeader
/// Size: 0x0020 (0x001490 - 0x0014B0)
class UJunoItemSpawnerSubCategoryHeader : public UCommonButtonBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5296;

public:
	CMember(class UCommonTextBlock*)                   Text_Name                                                   OFFSET(get<T>, {0x1498, 8, 0, 0})
	CMember(class UJunoItemSpawnerListEntry*)          ListEntry                                                   OFFSET(get<T>, {0x14A0, 8, 0, 0})
};

/// Class /Script/JunoUI.JunoItemSpawnerScreen
/// Size: 0x0230 (0x000400 - 0x000630)
class UJunoItemSpawnerScreen : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1584;

public:
	CMember(class UFortTabListWidgetBase*)             TabList_FilterTabs                                          OFFSET(get<T>, {0x428, 8, 0, 0})
	CMember(class UClass*)                             FilterTabWidget                                             OFFSET(get<T>, {0x430, 8, 0, 0})
	CMember(TMap<FGameplayTag, FJunoItemSpawnerItemTagOrder>) SubCategoryTagOrderByCategoryTag                     OFFSET(get<T>, {0x438, 80, 0, 0})
	CMember(TMap<FGameplayTag, FJunoItemSpawnerItemTagOrder>) ItemTypeTagOrderBySubCategoryTag                     OFFSET(get<T>, {0x488, 80, 0, 0})
	CMember(class UGridListView*)                      GridListView_SubCategories                                  OFFSET(get<T>, {0x4D8, 8, 0, 0})
	SMember(FName)                                     SubCategoryItemType                                         OFFSET(getStruct<T>, {0x4E0, 4, 0, 0})
	SMember(FName)                                     EntrySlotItemType                                           OFFSET(getStruct<T>, {0x4E4, 4, 0, 0})
	CMember(TMap<FName, FGameplayTag>)                 TabIDToCategoryTagMap                                       OFFSET(get<T>, {0x4F0, 80, 0, 0})
	CMember(class UJunoItemSpawnerListEntry*)          SelectedListEntry                                           OFFSET(get<T>, {0x540, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_Back                                                 OFFSET(get<T>, {0x548, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_Close                                                OFFSET(get<T>, {0x550, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_Spawn                                                OFFSET(get<T>, {0x558, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_SpawnMultiple                                        OFFSET(get<T>, {0x560, 8, 0, 0})
	CMember(class UJunoNotificationWidget*)            ItemSpawnedNotification                                     OFFSET(get<T>, {0x568, 8, 0, 0})


	/// Functions
	// Function /Script/JunoUI.JunoItemSpawnerScreen.UpdateItemDetails
	// void UpdateItemDetails(class UFortItemDefinition* FortItemDefinition);                                                   // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/JunoUI.JunoItemSpawnerScreen.HandleTabSelected
	// void HandleTabSelected(FName TabID);                                                                                     // [0xb515c5c] Final|Native|Private 
};

/// Class /Script/JunoUI.JunoItemSpawnerListEntry
/// Size: 0x0030 (0x000028 - 0x000058)
class UJunoItemSpawnerListEntry : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(class UFortItemDefinition*)                ItemDefinition                                              OFFSET(get<T>, {0x40, 8, 0, 0})
};

/// Class /Script/JunoUI.JunoListViewHeaderObject
/// Size: 0x0018 (0x000028 - 0x000040)
class UJunoListViewHeaderObject : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FText)                                     HeaderText                                                  OFFSET(getStruct<T>, {0x28, 24, 0, 0})
};

/// Class /Script/JunoUI.JunoLocalPlayerUIMapState
/// Size: 0x00C0 (0x000028 - 0x0000E8)
class UJunoLocalPlayerUIMapState : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
	CMember(TWeakObjectPtr<UMaterialInterface*>)       PlayerIconMaterial                                          OFFSET(get<T>, {0x28, 32, 0, 0})
	CMember(TWeakObjectPtr<UMaterialInterface*>)       AnchoringArrowIconMaterial                                  OFFSET(get<T>, {0x48, 32, 0, 0})
	CMember(TWeakObjectPtr<UMaterialInterface*>)       MapTileMaterial                                             OFFSET(get<T>, {0x68, 32, 0, 0})
	CMember(TWeakObjectPtr<UJunoMapViewModel*>)        MapViewModel                                                OFFSET(get<T>, {0x88, 8, 0, 0})
};

/// Class /Script/JunoUI.JunoMiniMapIndicator
/// Size: 0x0008 (0x000140 - 0x000148)
class UJunoMiniMapIndicator : public UFortMiniMapIndicator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 328;

public:
};

/// Class /Script/JunoUI.JunoMapMarkerIndicators
/// Size: 0x0008 (0x000148 - 0x000150)
class UJunoMapMarkerIndicators : public UJunoMiniMapIndicator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
};

/// Class /Script/JunoUI.JunoMapTeamIndicators
/// Size: 0x00F8 (0x000148 - 0x000240)
class UJunoMapTeamIndicators : public UJunoMiniMapIndicator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 576;

public:
	SMember(FName)                                     RotationParamName                                           OFFSET(getStruct<T>, {0x148, 4, 0, 0})
	SMember(FName)                                     AvatarParamName                                             OFFSET(getStruct<T>, {0x14C, 4, 0, 0})
	SMember(FName)                                     ShowDirectionParamName                                      OFFSET(getStruct<T>, {0x150, 4, 0, 0})
	SMember(FSlateBrush)                               TeamIcon                                                    OFFSET(getStruct<T>, {0x160, 192, 0, 0})
	CMember(TArray<class UMaterialInstanceDynamic*>)   MIDTeamIcons                                                OFFSET(get<T>, {0x228, 16, 0, 0})
};

/// Class /Script/JunoUI.JunoMapWidget
/// Size: 0x0020 (0x000178 - 0x000198)
class UJunoMapWidget : public UWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 408;

public:
	SMember(FMulticastInlineDelegate)                  OnMapDragBlocked                                            OFFSET(getStruct<T>, {0x188, 16, 0, 0})
};

/// Class /Script/JunoUI.JunoModalSelectionContext
/// Size: 0x0040 (0x000028 - 0x000068)
class UJunoModalSelectionContext : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FText)                                     Title                                                       OFFSET(getStruct<T>, {0x28, 24, 0, 0})
	SMember(FText)                                     Description                                                 OFFSET(getStruct<T>, {0x40, 24, 0, 0})
	CMember(TArray<FJunoModalSelectionChoice>)         Choices                                                     OFFSET(get<T>, {0x58, 16, 0, 0})
};

/// Class /Script/JunoUI.JunoSelectionModal
/// Size: 0x0030 (0x000400 - 0x000430)
class UJunoSelectionModal : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1072;

public:
	CMember(class UClass*)                             SelectionButtonClass                                        OFFSET(get<T>, {0x400, 8, 0, 0})
	CMember(class UJunoModalSelectionContext*)         SelectionContext                                            OFFSET(get<T>, {0x408, 8, 0, 0})


	/// Functions
	// Function /Script/JunoUI.JunoSelectionModal.OnSetTitleAndDescription
	// void OnSetTitleAndDescription(FText& Title, FText& Description);                                                         // [0x18a39e4] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/JunoUI.JunoSelectionModal.OnSelectionButtonCreated
	// void OnSelectionButtonCreated(class UCommonButtonBase* NewButton, FText& SelectionTitle);                                // [0x18a39e4] Event|Public|HasOutParms|BlueprintEvent 
};

/// Class /Script/JunoUI.JunoNPCStatusWidgetBase
/// Size: 0x0010 (0x0003D0 - 0x0003E0)
class UJunoNPCStatusWidgetBase : public UFortActorIndicatorWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 992;

public:


	/// Functions
	// Function /Script/JunoUI.JunoNPCStatusWidgetBase.OnBuildingHealthChanged
	// void OnBuildingHealthChanged();                                                                                          // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/JunoUI.JunoNPCStatusWidgetBase.OnActorHealthChanged
	// void OnActorHealthChanged(float NewHealth, float NewMaxHealth);                                                          // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/JunoUI.JunoNPCStatusWidgetBase.InitializeHealthBar
	// void InitializeHealthBar(float StartingHealth, float StartingMaxHealth);                                                 // [0x18a39e4] Event|Protected|BlueprintEvent 
};

/// Class /Script/JunoUI.JunoPlayerInventoryContainer
/// Size: 0x0040 (0x0002E8 - 0x000328)
class UJunoPlayerInventoryContainer : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 808;

public:
	CMember(TWeakObjectPtr<AFortPlayerController*>)    OwningPlayer                                                OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(class UJunoInventoryGroup*)                Group_MainInventory                                         OFFSET(get<T>, {0x2F0, 8, 0, 0})
	CMember(class UJunoInventoryGroup*)                Group_MainHand                                              OFFSET(get<T>, {0x2F8, 8, 0, 0})
	CMember(class UJunoInventoryGroup*)                Group_OffHand                                               OFFSET(get<T>, {0x300, 8, 0, 0})
	CMember(TArray<class UJunoInventoryGroup*>)        GroupList                                                   OFFSET(get<T>, {0x308, 16, 0, 0})
};

/// Class /Script/JunoUI.JunoPlayerManagementScreen
/// Size: 0x0048 (0x000400 - 0x000448)
class UJunoPlayerManagementScreen : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1096;

public:


	/// Functions
	// Function /Script/JunoUI.JunoPlayerManagementScreen.OpenSidebar
	// void OpenSidebar();                                                                                                      // [0xb51860c] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoUI.JunoPlayerManagementScreen.HandleBackButtonClicked
	// void HandleBackButtonClicked();                                                                                          // [0xb517af8] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/JunoUI.JunoQuickBuildRadialPicker
/// Size: 0x0020 (0x000400 - 0x000420)
class UJunoQuickBuildRadialPicker : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1056;

public:
	CMember(class UFortPickerOverlay*)                 PickerOverlay_QuickBuildItems                               OFFSET(get<T>, {0x408, 8, 0, 0})
	CMember(class UDynamicEntryBox*)                   EntryBox_Ingredients                                        OFFSET(get<T>, {0x410, 8, 0, 0})
	CMember(class UJunoQuickBuildSelectionData*)       QuickBuildSelectionData                                     OFFSET(get<T>, {0x418, 8, 0, 0})


	/// Functions
	// Function /Script/JunoUI.JunoQuickBuildRadialPicker.OnQuickBuildSlotSelected
	// void OnQuickBuildSlotSelected(FJunoQuickBuildSlotData& SelectedQuickBuildSlotData);                                      // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/JunoUI.JunoQuickBuildRadialPicker.CancelSelection
	// void CancelSelection();                                                                                                  // [0x3ee1514] Final|Native|Protected|BlueprintCallable 
	// Function /Script/JunoUI.JunoQuickBuildRadialPicker.ApplyCurrentSelection
	// void ApplyCurrentSelection();                                                                                            // [0xb517600] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/JunoUI.JunoRecipeFilterButton
/// Size: 0x0040 (0x001490 - 0x0014D0)
class UJunoRecipeFilterButton : public UCommonButtonBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5328;

public:
	CMember(TWeakObjectPtr<AActor*>)                   CraftingObject                                              OFFSET(get<T>, {0x1490, 8, 0, 0})
	CMember(class UJunoBangWidget*)                    JunoBangWidget                                              OFFSET(get<T>, {0x14A8, 8, 0, 0})
};

/// Class /Script/JunoUI.JunoRecipeListEntry
/// Size: 0x00C0 (0x001490 - 0x001550)
class UJunoRecipeListEntry : public UCommonButtonBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5456;

public:
	CMember(class UMenuAnchor*)                        ContextMenuAnchor                                           OFFSET(get<T>, {0x1498, 8, 0, 0})
	CMember(class UJunoBangWidget*)                    JunoBangWidget                                              OFFSET(get<T>, {0x14A0, 8, 0, 0})
	CMember(class UJunoRecipeListObject*)              RecipeListObject                                            OFFSET(get<T>, {0x14A8, 8, 0, 0})
	CMember(class UClass*)                             ContextMenuClass                                            OFFSET(get<T>, {0x14B0, 8, 0, 0})
	DMember(int32_t)                                   MaxCraftCount                                               OFFSET(get<int32_t>, {0x1508, 4, 0, 0})
	DMember(bool)                                      bCanCraft                                                   OFFSET(get<bool>, {0x150C, 1, 0, 0})


	/// Functions
	// Function /Script/JunoUI.JunoRecipeListEntry.ViewRecipe
	// void ViewRecipe();                                                                                                       // [0xb518a8c] Final|Native|Protected|BlueprintCallable 
	// Function /Script/JunoUI.JunoRecipeListEntry.SetPartsRemaining
	// void SetPartsRemaining(FJunoGuidedBuildRemainingPartsInfo& RemainingParts);                                              // [0xb5187f8] Native|Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/JunoUI.JunoRecipeListEntry.OnUpdateListEntryVisuals
	// void OnUpdateListEntryVisuals();                                                                                         // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/JunoUI.JunoRecipeListEntry.OnUpdateBangVisibility
	// void OnUpdateBangVisibility(EJunoBangVisibility BangType);                                                               // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/JunoUI.JunoRecipeListEntry.OnSetRecipeInfo
	// void OnSetRecipeInfo(class UItemDefinitionBase* CraftedItemDef, int32_t CraftCount, FSlateBrush& SourceIcon);            // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/JunoUI.JunoRecipeListEntry.OnRecipePinned
	// void OnRecipePinned(bool bIsPinned);                                                                                     // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/JunoUI.JunoRecipeListEntry.OnLeaveContextMenuMode
	// void OnLeaveContextMenuMode(bool bUnselectSlot);                                                                         // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/JunoUI.JunoRecipeListEntry.OnInitWidgetComplete
	// void OnInitWidgetComplete();                                                                                             // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/JunoUI.JunoRecipeListEntry.OnEnterContextMenuMode
	// void OnEnterContextMenuMode(bool bIsCurrentlySelectedSlot);                                                              // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/JunoUI.JunoRecipeListEntry.OnCurrentStageUpdate
	// void OnCurrentStageUpdate(FGuidedBuildingUpdate& UpdateData);                                                            // [0xb5183b8] Native|Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/JunoUI.JunoRecipeListEntry.GetPopupMenu
	// class UUserWidget* GetPopupMenu();                                                                                       // [0xb517698] Final|Native|Protected 
	// Function /Script/JunoUI.JunoRecipeListEntry.GetKnowledgeState
	// EJunoKnowledgeState GetKnowledgeState();                                                                                 // [0xb517634] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoUI.JunoRecipeListEntry.GetCanCraft
	// bool GetCanCraft();                                                                                                      // [0xb51761c] Final|Native|Protected|BlueprintCallable|BlueprintPure 
};

/// Class /Script/JunoUI.JunoRecipeHeaderWidget
/// Size: 0x0020 (0x001490 - 0x0014B0)
class UJunoRecipeHeaderWidget : public UCommonButtonBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5296;

public:
	CMember(class UCommonTextBlock*)                   Text_Name                                                   OFFSET(get<T>, {0x1498, 8, 0, 0})
	CMember(class UJunoRecipeListObject*)              RecipeListObject                                            OFFSET(get<T>, {0x14A0, 8, 0, 0})
};

/// Class /Script/JunoUI.JunoStandaloneCraftingInitData
/// Size: 0x0008 (0x000030 - 0x000038)
class UJunoStandaloneCraftingInitData : public UJunoHudMenuBaseInitData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TWeakObjectPtr<AJunoCraftingObjectBGA*>)   CraftingObject                                              OFFSET(get<T>, {0x30, 8, 0, 0})
};

/// Class /Script/JunoUI.JunoStandaloneCraftingContainer
/// Size: 0x0008 (0x000438 - 0x000440)
class UJunoStandaloneCraftingContainer : public UJunoHudMenuBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1088;

public:
	SMember(FName)                                     UpgradeTab                                                  OFFSET(getStruct<T>, {0x438, 4, 0, 0})
	SMember(FName)                                     JobTab                                                      OFFSET(getStruct<T>, {0x43C, 4, 0, 0})


	/// Functions
	// Function /Script/JunoUI.JunoStandaloneCraftingContainer.OnUpdateCraftingStationAttachedRecipe
	// void OnUpdateCraftingStationAttachedRecipe(FText& NewAttachedRecipe);                                                    // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/JunoUI.JunoStandaloneCraftingContainer.OnSetCraftingStationUIEntry
	// void OnSetCraftingStationUIEntry(FJunoCraftingStationUIDataEntry CraftingStationUIEntry);                                // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/JunoUI.JunoStandaloneCraftingContainer.OnRecipeCraftingComplete
	// void OnRecipeCraftingComplete(class UItemDefinitionBase* Item);                                                          // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/JunoUI.JunoStandaloneCraftingContainer.HandleCraftingSuccess
	// void HandleCraftingSuccess(FCraftingObjectSuccessEvent& Event);                                                          // [0xb517c68] Final|Native|Private|HasOutParms 
	// Function /Script/JunoUI.JunoStandaloneCraftingContainer.HandleCraftingStationRecipeChanged
	// void HandleCraftingStationRecipeChanged(FName FormulaRowName);                                                           // [0xb517be8] Final|Native|Private 
	// Function /Script/JunoUI.JunoStandaloneCraftingContainer.HandleCraftingObjectEndPlay
	// void HandleCraftingObjectEndPlay(class AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason);                        // [0xb517b2c] Final|Native|Private 
};

/// Class /Script/JunoUI.JunoStationUpgradeScreen
/// Size: 0x00A8 (0x000400 - 0x0004A8)
class UJunoStationUpgradeScreen : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1192;

public:
	CMember(TWeakObjectPtr<AJunoCraftingObjectBGA*>)   CraftingObject                                              OFFSET(get<T>, {0x430, 8, 0, 0})
	CMember(class UJunoRecipeDetailsWidget*)           RecipeDetailsWidget                                         OFFSET(get<T>, {0x438, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_Craft                                                OFFSET(get<T>, {0x440, 8, 0, 0})
	SMember(FName)                                     RecipeToCraft                                               OFFSET(getStruct<T>, {0x448, 4, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_Close                                                OFFSET(get<T>, {0x450, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_TouchClose                                           OFFSET(get<T>, {0x458, 8, 0, 0})


	/// Functions
	// Function /Script/JunoUI.JunoStationUpgradeScreen.OnUpdateCraftButton
	// void OnUpdateCraftButton(EJunoCraftButtonState InButtonState, bool bIsStationUpgrade);                                   // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/JunoUI.JunoStationUpgradeScreen.OnSetCurrentCraftingRecipeIcon
	// void OnSetCurrentCraftingRecipeIcon(TWeakObjectPtr<UTexture2D*>& UpgradeIcon);                                           // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/JunoUI.JunoStationUpgradeScreen.HandleCraftingSuccess
	// void HandleCraftingSuccess(FCraftingObjectSuccessEvent& Event);                                                          // [0xb517d10] Native|Protected|HasOutParms 
};

/// Class /Script/JunoUI.JunoUIFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoUIFunctionLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/JunoUI.JunoUIFunctionLibrary.ShouldShowUnacquiredBang
	// bool ShouldShowUnacquiredBang(class APlayerController* PlayerController, FName RecipeRowName);                           // [0xb5189cc] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoUI.JunoUIFunctionLibrary.RemoveModalScene
	// void RemoveModalScene(class APlayerController* PlayerController);                                                        // [0xb518690] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoUI.JunoUIFunctionLibrary.OpenItemShop
	// void OpenItemShop(class AFortPlayerController* PC);                                                                      // [0xb51844c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoUI.JunoUIFunctionLibrary.NumUnviewedRecipesInCategory
	// int32_t NumUnviewedRecipesInCategory(FCountUnviewedRecipesInCategoryArgs& InArgs);                                       // [0xb51829c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoUI.JunoUIFunctionLibrary.NumUnviewedItemsInInventory
	// int32_t NumUnviewedItemsInInventory(class AFortPlayerController* PlayerController);                                      // [0xb517f60] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoUI.JunoUIFunctionLibrary.NumUnviewedItemsInGroup
	// int32_t NumUnviewedItemsInGroup(class AFortPlayerController* PlayerController, FGameplayTag& GroupTag);                  // [0xb517dbc] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoUI.JunoUIFunctionLibrary.GetRecipesFromCraftingObject
	// TArray<FName> GetRecipesFromCraftingObject(class AFortPlayerController* PlayerController, class AActor* CraftingObject, FGameplayTag& CategoryTag, FGameplayTag& SubCategoryTag, bool bOnlyKnownRecipes, bool bOnlyOwnedRecipes); // [0xb5177e4] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoUI.JunoUIFunctionLibrary.GetRecipeCategoryUIData
	// FJunoCraftingCategoryUIDataEntry GetRecipeCategoryUIData(FGameplayTag& CategoryTag);                                     // [0xb5176bc] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/JunoUI.JunoUIFunctionLibrary.AddModalScene
	// void AddModalScene(class APlayerController* PlayerController, FJunoModalSceneOperation& ModalScene);                     // [0xb51753c] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/JunoUI.JunoUIGameFeatureData
/// Size: 0x00F8 (0x000530 - 0x000628)
class UJunoUIGameFeatureData : public UFortGameFeatureData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1576;

public:
	CMember(TWeakObjectPtr<UJunoRecipeCraftingCategoryUIData*>) CraftingCategoryUIData                             OFFSET(get<T>, {0x530, 32, 0, 0})
	CMember(TWeakObjectPtr<UJunoFreeBuildCategoryUIData*>) FreeBuildCategoryUIData                                 OFFSET(get<T>, {0x550, 32, 0, 0})
	CMember(TWeakObjectPtr<UJunoInventoryUIData*>)     InventoryUIData                                             OFFSET(get<T>, {0x570, 32, 0, 0})
	CMember(TWeakObjectPtr<UJunoBiomeUIData*>)         BiomeUIData                                                 OFFSET(get<T>, {0x590, 32, 0, 0})
	CMember(TWeakObjectPtr<UJunoVillageUIDataAsset*>)  VillageUIData                                               OFFSET(get<T>, {0x5B0, 32, 0, 0})
	CMember(TMap<FGameplayTag, FJunoNPCStateUIData>)   NPCStateUIDataMap                                           OFFSET(get<T>, {0x5D0, 80, 0, 0})
	SMember(FDataRegistryType)                         WeaponEssenceDataRegistryType                               OFFSET(getStruct<T>, {0x620, 4, 0, 0})
};

/// Class /Script/JunoUI.JunoVillageAwesomePointsIngredientWidget
/// Size: 0x0000 (0x000328 - 0x000328)
class UJunoVillageAwesomePointsIngredientWidget : public UJunoIngredientWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 808;

public:


	/// Functions
	// Function /Script/JunoUI.JunoVillageAwesomePointsIngredientWidget.SetAwesomePointsInfo
	// void SetAwesomePointsInfo(int32_t CurrentAwesomePoints, int32_t RequiredAwesomePoints, int32_t InEntryIndex);            // [0xb518700] Native|Event|Public|BlueprintEvent 
};

/// Class /Script/JunoUI.JunoVillageMenuInitData
/// Size: 0x0018 (0x000030 - 0x000048)
class UJunoVillageMenuInitData : public UJunoHudMenuBaseInitData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(class AJunoCampActor*)                     CampActor                                                   OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(class UJunoCampMembershipActorComponent*)  CampActorMembershipActorComponent                           OFFSET(get<T>, {0x38, 8, 0, 0})
	CMember(class UJunoAwesomeLevelComponent*)         AwesomeLevelComponent                                       OFFSET(get<T>, {0x40, 8, 0, 0})
};

/// Class /Script/JunoUI.JunoVillageMenuContainer
/// Size: 0x0010 (0x000438 - 0x000448)
class UJunoVillageMenuContainer : public UJunoHudMenuBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1096;

public:
	SMember(FName)                                     DetailsTabName                                              OFFSET(getStruct<T>, {0x438, 4, 0, 0})
	SMember(FName)                                     UpgradeTabName                                              OFFSET(getStruct<T>, {0x43C, 4, 0, 0})
	CMember(class UJunoAwesomeLevelComponent*)         AwesomeLevelComponent                                       OFFSET(get<T>, {0x440, 8, 0, 0})


	/// Functions
	// Function /Script/JunoUI.JunoVillageMenuContainer.OnAwesomeLevelChanged
	// void OnAwesomeLevelChanged(FJunoAwesomeLevelChangeData& LevelChangeData);                                                // [0xb518334] Final|Native|Protected|HasOutParms 
};

/// Class /Script/JunoUI.JunoVillageRewardEntry
/// Size: 0x01C0 (0x001490 - 0x001650)
class UJunoVillageRewardEntry : public UCommonButtonBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5712;

public:
	SMember(FJunoVillageRewardEntryInfo)               VillageRewardEntryInfo                                      OFFSET(getStruct<T>, {0x1498, 128, 0, 0})
	SMember(FJunoVillageUIData)                        ParentVillageUIData                                         OFFSET(getStruct<T>, {0x1518, 312, 0, 0})


	/// Functions
	// Function /Script/JunoUI.JunoVillageRewardEntry.SetVillageRewardEntryInfo
	// void SetVillageRewardEntryInfo(FJunoVillageRewardEntryInfo& InVillageRewardEntryInfo, FJunoVillageUIData& InParentVillageUIData); // [0xb518894] Native|Event|Public|HasOutParms|BlueprintEvent 
};

/// Class /Script/JunoUI.JunoWorldManagementUIComponent
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UJunoWorldManagementUIComponent : public UFortControllerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
};

/// Class /Script/JunoUI.JunoWorldSettingsScreen
/// Size: 0x0028 (0x000400 - 0x000428)
class UJunoWorldSettingsScreen : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1064;

public:


	/// Functions
	// Function /Script/JunoUI.JunoWorldSettingsScreen.HandleBackButtonClicked
	// void HandleBackButtonClicked();                                                                                          // [0xb517af8] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/JunoUI.GridListDataInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UGridListDataInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/JunoUI.JunoFreeBuildCategoryUIData
/// Size: 0x0020 (0x000030 - 0x000050)
class UJunoFreeBuildCategoryUIData : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TArray<FJunoFreeBuildCategoryUIDataEntry>) Categories                                                  OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TArray<FJunoFreeBuildSubCategoryUIDataEntry>) Subcategories                                            OFFSET(get<T>, {0x40, 16, 0, 0})
};

/// Class /Script/JunoUI.GridListView
/// Size: 0x0040 (0x000C00 - 0x000C40)
class UGridListView : public UCommonTileView
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3136;

public:
	CMember(TArray<FGridListViewInfo>)                 GridListViewInfo                                            OFFSET(get<T>, {0xBF8, 16, 0, 0})
	DMember(bool)                                      bAlwaysShowScrollbar                                        OFFSET(get<bool>, {0xC08, 1, 0, 0})
	DMember(bool)                                      bAlwaysShowScrollbarTrack                                   OFFSET(get<bool>, {0xC09, 1, 0, 0})
	SMember(FVector2D)                                 ScrollbarThickness                                          OFFSET(getStruct<T>, {0xC10, 16, 0, 0})
	SMember(FGridListSlotInfoContainer)                GeneratedGridListSlotInfo                                   OFFSET(getStruct<T>, {0xC20, 16, 0, 0})
};

/// Class /Script/JunoUI.JunoAdjustableInventorySlot
/// Size: 0x0048 (0x0002E8 - 0x000330)
class UJunoAdjustableInventorySlot : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 816;

public:
	CMember(class UCommonButtonBase*)                  Button_Increase                                             OFFSET(get<T>, {0x318, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_Decrease                                             OFFSET(get<T>, {0x320, 8, 0, 0})
	CMember(class UJunoInventorySlot*)                 Container_InventorySlot                                     OFFSET(get<T>, {0x328, 8, 0, 0})


	/// Functions
	// Function /Script/JunoUI.JunoAdjustableInventorySlot.OnIncreaseEventHandled
	// void OnIncreaseEventHandled();                                                                                           // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/JunoUI.JunoAdjustableInventorySlot.OnDecreaseEventHandled
	// void OnDecreaseEventHandled();                                                                                           // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/JunoUI.JunoAdjustableInventorySlot.OnButtonsStateUpdated
	// void OnButtonsStateUpdated();                                                                                            // [0x18a39e4] Event|Public|BlueprintEvent 
};

/// Class /Script/JunoUI.JunoInventorySlot
/// Size: 0x0170 (0x001490 - 0x001600)
class UJunoInventorySlot : public UCommonButtonBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5632;

public:
	CMember(class UMenuAnchor*)                        ContextMenuAnchor                                           OFFSET(get<T>, {0x1510, 8, 0, 0})
	CMember(class UJunoBangWidget*)                    JunoBangWidget                                              OFFSET(get<T>, {0x1518, 8, 0, 0})
	DMember(bool)                                      bCanShowItemDetails                                         OFFSET(get<bool>, {0x1520, 1, 0, 0})
	DMember(bool)                                      bSupportsTooltipDisplay                                     OFFSET(get<bool>, {0x1521, 1, 0, 0})
	DMember(bool)                                      bDragAndDropAllowed                                         OFFSET(get<bool>, {0x1522, 1, 0, 0})
	CMember(class UClass*)                             ContextMenuClass                                            OFFSET(get<T>, {0x1528, 8, 0, 0})
	CMember(class AActor*)                             InventoryOwner                                              OFFSET(get<T>, {0x1538, 8, 0, 0})
	CMember(TWeakObjectPtr<UObject*>)                  InventoryGroupIcon                                          OFFSET(get<T>, {0x1540, 32, 0, 0})
	CMember(TWeakObjectPtr<UTexture2D*>)               MatchingItemIcon                                            OFFSET(get<T>, {0x1560, 32, 0, 0})
	SMember(FJunoItemSlot)                             SlotData                                                    OFFSET(getStruct<T>, {0x1588, 80, 0, 0})


	/// Functions
	// Function /Script/JunoUI.JunoInventorySlot.ShowItemDetails
	// void ShowItemDetails(bool bShow);                                                                                        // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/JunoUI.JunoInventorySlot.OnStackCountChanged
	// void OnStackCountChanged(int32_t StackCount, int32_t MaxStackCount);                                                     // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/JunoUI.JunoInventorySlot.OnShowSelected
	// void OnShowSelected(bool bInSelected);                                                                                   // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/JunoUI.JunoInventorySlot.OnPreviewImageChanged
	// void OnPreviewImageChanged(TWeakObjectPtr<UTexture2D*>& SlotImage, bool bIsValidItem, TWeakObjectPtr<UObject*>& InInventoryGroupIcon, TWeakObjectPtr<UTexture2D*>& InMatchingItemIcon, EFortRarity ItemRarity); // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/JunoUI.JunoInventorySlot.OnLeaveSwappingMode
	// void OnLeaveSwappingMode();                                                                                              // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/JunoUI.JunoInventorySlot.OnLeaveContextMenuMode
	// void OnLeaveContextMenuMode(bool bUnselectSlot);                                                                         // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/JunoUI.JunoInventorySlot.OnItemHasBeenViewed
	// void OnItemHasBeenViewed(bool bHasBeenPreviouslyViewed);                                                                 // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/JunoUI.JunoInventorySlot.OnEnterSwappingMode
	// void OnEnterSwappingMode(EJunoSwapItemType InSwapItemType, class UFortItem* Item);                                       // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/JunoUI.JunoInventorySlot.OnEnterContextMenuMode
	// void OnEnterContextMenuMode(bool bIsCurrentlySelectedSlot);                                                              // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/JunoUI.JunoInventorySlot.OnEnchantmentsChanged
	// void OnEnchantmentsChanged(int32_t TotalSlots, int32_t OccupiedSlots);                                                   // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/JunoUI.JunoInventorySlot.OnEnabledForScreenChanged
	// void OnEnabledForScreenChanged(bool bEnabledForScreen);                                                                  // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/JunoUI.JunoInventorySlot.OnDurabilityChanged
	// void OnDurabilityChanged(float CurrentDurability, float MaxDurability, float NormalizedDurability, bool bFromItemInitializtion); // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/JunoUI.JunoInventorySlot.HandleOnMenuOpenChanged
	// void HandleOnMenuOpenChanged(bool bIsOpen);                                                                              // [0xb54649c] Final|Native|Private 
	// Function /Script/JunoUI.JunoInventorySlot.GetSlotTags
	// FGameplayTagContainer GetSlotTags();                                                                                     // [0xb545f10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoUI.JunoInventorySlot.GetRepresentedItem
	// class UFortItem* GetRepresentedItem();                                                                                   // [0xb545dcc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoUI.JunoInventorySlot.GetPopupMenu
	// class UUserWidget* GetPopupMenu();                                                                                       // [0xb545c98] Final|Native|Private 
	// Function /Script/JunoUI.JunoInventorySlot.GetMatchingItemGameplayTags
	// FGameplayTagContainer GetMatchingItemGameplayTags();                                                                     // [0xb545b80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoUI.JunoInventorySlot.GetIsEnabledForScreen
	// bool GetIsEnabledForScreen();                                                                                            // [0x339f0d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/JunoUI.JunoInventorySlotsInfo
/// Size: 0x0008 (0x0002E8 - 0x0002F0)
class UJunoInventorySlotsInfo : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 752;

public:
	CMember(TWeakObjectPtr<AActor*>)                   WeakOptionalInventoryObject                                 OFFSET(get<T>, {0x2E8, 8, 0, 0})


	/// Functions
	// Function /Script/JunoUI.JunoInventorySlotsInfo.OnInventorySlotChanged
	// void OnInventorySlotChanged();                                                                                           // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/JunoUI.JunoInventorySlotsInfo.GetNumInventorySlots
	// int32_t GetNumInventorySlots(bool bOccupied);                                                                            // [0xb545c08] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoUI.JunoInventorySlotsInfo.GetMaxInventorySlotsAvailable
	// int32_t GetMaxInventorySlotsAvailable();                                                                                 // [0xb545bbc] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/JunoUI.JunoRecipeCraftingCategoryUIData
/// Size: 0x0038 (0x000030 - 0x000068)
class UJunoRecipeCraftingCategoryUIData : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	CMember(class UJunoCraftingCategoryUIData*)        CraftingCategoryUIData                                      OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(TArray<FJunoCraftingStationUIDataEntry>)   Stations                                                    OFFSET(get<T>, {0x38, 16, 0, 0})
	SMember(FGameplayTagContainer)                     IgnoredCraftingCategories                                   OFFSET(getStruct<T>, {0x48, 32, 0, 0})
};

/// Class /Script/JunoUI.JunoRecipeListObject
/// Size: 0x0030 (0x000028 - 0x000058)
class UJunoRecipeListObject : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(TWeakObjectPtr<AActor*>)                   CraftingObject                                              OFFSET(get<T>, {0x48, 8, 0, 0})
	CMember(TWeakObjectPtr<UJunoRecipeScreenBase*>)    RecipeScreen                                                OFFSET(get<T>, {0x50, 8, 0, 0})


	/// Functions
	// Function /Script/JunoUI.JunoRecipeListObject.GetIsRecipeBeingCrafted
	// bool GetIsRecipeBeingCrafted();                                                                                          // [0xb0c97b8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/JunoUI.JunoRecipeScreenBase
/// Size: 0x00D0 (0x000400 - 0x0004D0)
class UJunoRecipeScreenBase : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1232;

public:
	CMember(TWeakObjectPtr<AActor*>)                   CraftingObject                                              OFFSET(get<T>, {0x430, 8, 0, 0})
	CMember(class UJunoRecipeDetailsWidget*)           RecipeDetailsWidget                                         OFFSET(get<T>, {0x438, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_TouchSelect                                          OFFSET(get<T>, {0x440, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_Back                                                 OFFSET(get<T>, {0x448, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_TouchClose                                           OFFSET(get<T>, {0x450, 8, 0, 0})
	CMember(class UGridListView*)                      RecipeList                                                  OFFSET(get<T>, {0x458, 8, 0, 0})
	SMember(FGameplayTag)                              HeaderPrefix                                                OFFSET(getStruct<T>, {0x460, 4, 0, 0})
	DMember(bool)                                      UpdateRecipeDetailsOnHover                                  OFFSET(get<bool>, {0x464, 1, 0, 0})
	DMember(bool)                                      SkipSortOnInventoryChange                                   OFFSET(get<bool>, {0x465, 1, 0, 0})
	CMember(TWeakObjectPtr<UObject*>)                  WeakSelectedRecipe                                          OFFSET(get<T>, {0x468, 8, 0, 0})
	CMember(TArray<class UJunoRecipeListObject*>)      CurrentRecipes                                              OFFSET(get<T>, {0x470, 16, 0, 0})
	CMember(class UClass*)                             FilterTabWidget                                             OFFSET(get<T>, {0x480, 8, 0, 0})
	SMember(FName)                                     HeaderEntryType                                             OFFSET(getStruct<T>, {0x488, 4, 0, 0})
	SMember(FName)                                     RecipeEntryType                                             OFFSET(getStruct<T>, {0x48C, 4, 0, 0})


	/// Functions
	// Function /Script/JunoUI.JunoRecipeScreenBase.OnRecipeListUpdated
	// void OnRecipeListUpdated();                                                                                              // [0x18a39e4] Event|Protected|BlueprintEvent 
};

/// Class /Script/JunoUI.JunoUIGameFeatureAction_AddHUDMenuTab
/// Size: 0x0070 (0x000028 - 0x000098)
class UJunoUIGameFeatureAction_AddHUDMenuTab : public UFortUIGameFeatureAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	SMember(FName)                                     TabNameID                                                   OFFSET(getStruct<T>, {0x28, 4, 0, 0})
	SMember(FText)                                     TabDisplayName                                              OFFSET(getStruct<T>, {0x30, 24, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   TabButtonType                                               OFFSET(get<T>, {0x48, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   TabContentType                                              OFFSET(get<T>, {0x68, 32, 0, 0})
	SMember(FString)                                   OptionalBooleanGatingCVar                                   OFFSET(getStruct<T>, {0x88, 16, 0, 0})
};

/// Class /Script/JunoUI.JunoBedAssignmentScreen
/// Size: 0x0178 (0x000400 - 0x000578)
class UJunoBedAssignmentScreen : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1400;

public:
	SMember(FText)                                     AssignPlayerCharacterDisplayText                            OFFSET(getStruct<T>, {0x408, 24, 0, 0})
	CMember(TWeakObjectPtr<UTexture2D*>)               AssignPlayerCharacterIcon                                   OFFSET(get<T>, {0x420, 32, 0, 0})
	CMember(class UCommonButtonBase*)                  BackButton                                                  OFFSET(get<T>, {0x440, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  CloseButton                                                 OFFSET(get<T>, {0x448, 8, 0, 0})
	CMember(class UCommonListView*)                    List_Characters                                             OFFSET(get<T>, {0x450, 8, 0, 0})
	CMember(class UJunoBedAssignmentListObject*)       ThisBedListObject                                           OFFSET(get<T>, {0x458, 8, 0, 0})
	CMember(class AActor*)                             BedObject                                                   OFFSET(get<T>, {0x460, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_Assign                                               OFFSET(get<T>, {0x468, 8, 0, 0})
	SMember(FText)                                     AssignButtonText                                            OFFSET(getStruct<T>, {0x470, 24, 0, 0})
	SMember(FText)                                     UnassignButtonText                                          OFFSET(getStruct<T>, {0x488, 24, 0, 0})
	SMember(FText)                                     ReassignButtonText                                          OFFSET(getStruct<T>, {0x4A0, 24, 0, 0})
	SMember(FJunoModalDescription)                     ModalDescription                                            OFFSET(getStruct<T>, {0x4B8, 136, 0, 0})
	CMember(class UClass*)                             ListHeaderClass                                             OFFSET(get<T>, {0x540, 8, 0, 0})
	SMember(FText)                                     ThisBedHeaderText                                           OFFSET(getStruct<T>, {0x548, 24, 0, 0})
	SMember(FText)                                     VillagersHeaderText                                         OFFSET(getStruct<T>, {0x560, 24, 0, 0})


	/// Functions
	// Function /Script/JunoUI.JunoBedAssignmentScreen.OnStartLoadingData
	// void OnStartLoadingData();                                                                                               // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/JunoUI.JunoBedAssignmentScreen.OnSelectionChanged
	// void OnSelectionChanged(class UJunoBedAssignmentListObject* InSelectedListObject);                                       // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/JunoUI.JunoBedAssignmentScreen.OnModalConfirmed
	// void OnModalConfirmed();                                                                                                 // [0xb546788] Final|Native|Protected 
	// Function /Script/JunoUI.JunoBedAssignmentScreen.OnModalCancelled
	// void OnModalCancelled();                                                                                                 // [0xb5460e0] Final|Native|Protected 
	// Function /Script/JunoUI.JunoBedAssignmentScreen.OnDataLoadingComplete
	// void OnDataLoadingComplete();                                                                                            // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/JunoUI.JunoBedAssignmentScreen.GetTypeFromListObject
	// EJunoBedAssignmentActionType GetTypeFromListObject(class UJunoBedAssignmentListObject* InSelectedListObject);            // [0xb545f54] Native|Event|Protected|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/JunoUI.JunoBedAssignmentScreen.GetShouldShowModal
	// bool GetShouldShowModal(class UJunoBedAssignmentListObject* InSelectedListObject);                                       // [0x8aec49c] Native|Event|Protected|BlueprintEvent|Const 
};

/// Class /Script/JunoUI.JunoBuildingScreen
/// Size: 0x0218 (0x0004D0 - 0x0006E8)
class UJunoBuildingScreen : public UJunoRecipeScreenBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1768;

public:
	SMember(FName)                                     PreviewRecipe                                               OFFSET(getStruct<T>, {0x4D0, 4, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_ItemShop                                             OFFSET(get<T>, {0x4D8, 8, 0, 0})
	SMember(FGameplayTag)                              PrimaryCategoryPrefix                                       OFFSET(getStruct<T>, {0x4E0, 4, 0, 0})
	SMember(FGameplayTag)                              SecondaryCategoryPrefix                                     OFFSET(getStruct<T>, {0x4E4, 4, 0, 0})
	DMember(bool)                                      bSortPriorityAscending                                      OFFSET(get<bool>, {0x4E8, 1, 0, 0})
	CMember(class UFortTabListWidgetBase*)             TabList_PrimaryCategories                                   OFFSET(get<T>, {0x4F0, 8, 0, 0})
	CMember(class UFortTabListWidgetBase*)             TabList_SecondaryCategories                                 OFFSET(get<T>, {0x4F8, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_AssignBuildingBarSlot                                OFFSET(get<T>, {0x500, 8, 0, 0})
	SMember(FDataTableRowHandle)                       CloseScreenAction                                           OFFSET(getStruct<T>, {0x508, 16, 0, 0})
	DMember(float)                                     PreviewWaitTime                                             OFFSET(get<float>, {0x518, 4, 0, 0})
	CMember(TArray<EJunoRecipeSortType>)               DefaultSortingPreferences                                   OFFSET(get<T>, {0x520, 16, 0, 0})


	/// Functions
	// Function /Script/JunoUI.JunoBuildingScreen.OnSecondaryCategoriesChanged
	// void OnSecondaryCategoriesChanged(bool bHasSecondaryCategories);                                                         // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/JunoUI.JunoBuildingScreen.OnRecipeHovered
	// void OnRecipeHovered();                                                                                                  // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/JunoUI.JunoBuildingScreen.OnGuidedBuildingSnapsUpdated
	// void OnGuidedBuildingSnapsUpdated(TArray<int32_t>& UpdatedSnaps);                                                        // [0xb5466f4] Final|Native|Private|HasOutParms 
	// Function /Script/JunoUI.JunoBuildingScreen.OnGuidedBuildingSetComplete
	// void OnGuidedBuildingSetComplete(FGuidedBuildingUpdate& UpdateData);                                                     // [0xb546670] Final|Native|Private|HasOutParms 
	// Function /Script/JunoUI.JunoBuildingScreen.HasPreviewRecipe
	// bool HasPreviewRecipe();                                                                                                 // [0xb546654] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoUI.JunoBuildingScreen.HandleShopClicked
	// void HandleShopClicked();                                                                                                // [0xb546640] Final|Native|Private 
	// Function /Script/JunoUI.JunoBuildingScreen.HandleSecondaryTabTransitionComplete
	// void HandleSecondaryTabTransitionComplete();                                                                             // [0xb54661c] Final|Native|Protected|BlueprintCallable 
	// Function /Script/JunoUI.JunoBuildingScreen.HandleSecondaryCategorySelected
	// void HandleSecondaryCategorySelected(FName TabID);                                                                       // [0xb54659c] Final|Native|Private 
	// Function /Script/JunoUI.JunoBuildingScreen.HandlePrimaryCategorySelected
	// void HandlePrimaryCategorySelected(FName TabID);                                                                         // [0xb54651c] Final|Native|Private 
	// Function /Script/JunoUI.JunoBuildingScreen.HandleBackClicked
	// void HandleBackClicked();                                                                                                // [0x7905d9c] Native|Protected|BlueprintCallable 
	// Function /Script/JunoUI.JunoBuildingScreen.GetWidgetFromItem
	// class UJunoRecipeListEntry* GetWidgetFromItem(class UObject* Item);                                                      // [0xb545fe8] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoUI.JunoBuildingScreen.GetSecondaryCategoryUIData
	// bool GetSecondaryCategoryUIData(FName PrimaryTabId, FName SecondaryTabId, FJunoCraftingSubCategoryUIDataEntry& OutSecondaryCategoryUIData); // [0xb545de4] Final|Native|Protected|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoUI.JunoBuildingScreen.GetPrimaryCategoryUIData
	// bool GetPrimaryCategoryUIData(FName PrimaryTabId, FJunoCraftingCategoryUIDataEntry& OutPrimaryCategoryUIData);           // [0xb545cbc] Final|Native|Protected|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoUI.JunoBuildingScreen.GetCraftingObject
	// class AActor* GetCraftingObject();                                                                                       // [0xb545a44] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/JunoUI.JunoCraftingScreen
/// Size: 0x01D8 (0x0004D0 - 0x0006A8)
class UJunoCraftingScreen : public UJunoRecipeScreenBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1704;

public:
	SMember(FName)                                     SelectedRecipe                                              OFFSET(getStruct<T>, {0x4E0, 4, 0, 0})
	SMember(FName)                                     AttachedRecipe                                              OFFSET(getStruct<T>, {0x4E4, 4, 0, 0})
	CMember(ECraftingStationsInventoryState)           CraftingStationInventoryState                               OFFSET(get<T>, {0x4E8, 1, 0, 0})
	CMember(class UDynamicUIScene*)                    ConfirmationModalScene                                      OFFSET(get<T>, {0x4F0, 8, 0, 0})
	SMember(FText)                                     CancelJobConfirmationTitle                                  OFFSET(getStruct<T>, {0x4F8, 24, 0, 0})
	SMember(FText)                                     CancelJobConfirmationDescription                            OFFSET(getStruct<T>, {0x510, 24, 0, 0})
	SMember(FText)                                     CancelJobConfirmButtonText                                  OFFSET(getStruct<T>, {0x528, 24, 0, 0})
	SMember(FText)                                     CancelJobCancelButtonText                                   OFFSET(getStruct<T>, {0x540, 24, 0, 0})
	SMember(FGameplayTag)                              CategoryTagPrefix                                           OFFSET(getStruct<T>, {0x558, 4, 0, 0})
	SMember(FGameplayTag)                              TypeTagPrefix                                               OFFSET(getStruct<T>, {0x55C, 4, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_Craft                                                OFFSET(get<T>, {0x560, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_SelectRecipe                                         OFFSET(get<T>, {0x568, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_QuickDeposit                                         OFFSET(get<T>, {0x570, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_RemoveAll                                            OFFSET(get<T>, {0x578, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_WithdrawOutput                                       OFFSET(get<T>, {0x580, 8, 0, 0})
	CMember(class UFortTabListWidgetBase*)             TabList_Categories                                          OFFSET(get<T>, {0x588, 8, 0, 0})
	CMember(class UWidget*)                            Container_PassiveSlots                                      OFFSET(get<T>, {0x630, 8, 0, 0})
	CMember(class UJunoInventoryGroup*)                InventoryGroup_Input                                        OFFSET(get<T>, {0x638, 8, 0, 0})
	CMember(class UJunoInventoryGroup*)                InventoryGroup_Output                                       OFFSET(get<T>, {0x640, 8, 0, 0})
	SMember(FDataTableRowHandle)                       ModalConfirmAction                                          OFFSET(getStruct<T>, {0x648, 16, 0, 0})
	SMember(FDataTableRowHandle)                       ModalCancelAction                                           OFFSET(getStruct<T>, {0x658, 16, 0, 0})
	CMember(class UJunoPassiveCraftingComponent*)      JunoPassiveCraftingComponent                                OFFSET(get<T>, {0x668, 8, 0, 0})
	CMember(class UJunoControllerComponent_CraftingNetworkEvents*) CraftingEventComp                               OFFSET(get<T>, {0x670, 8, 0, 0})


	/// Functions
	// Function /Script/JunoUI.JunoCraftingScreen.OnWithdrawStateUpdated
	// void OnWithdrawStateUpdated(bool bWithdrawEnabled);                                                                      // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/JunoUI.JunoCraftingScreen.OnUpdateSelectRecipeButton
	// void OnUpdateSelectRecipeButton(ESelectRecipeButtonState InButtonState);                                                 // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/JunoUI.JunoCraftingScreen.OnUpdatePassiveCraftingProgress
	// void OnUpdatePassiveCraftingProgress(int32_t ItemsToCraft);                                                              // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/JunoUI.JunoCraftingScreen.OnUpdateCraftingStationInventoryState
	// void OnUpdateCraftingStationInventoryState(ECraftingStationsInventoryState StationInventoryState);                       // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/JunoUI.JunoCraftingScreen.OnUpdateCraftButton
	// void OnUpdateCraftButton(EJunoCraftButtonState InButtonState);                                                           // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/JunoUI.JunoCraftingScreen.OnPassiveScreenFocusChange
	// void OnPassiveScreenFocusChange(bool bInputSlotsFocused);                                                                // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/JunoUI.JunoCraftingScreen.HandleCraftingSuccess
	// void HandleCraftingSuccess(FCraftingObjectSuccessEvent& Event);                                                          // [0xb546188] Final|Native|Protected|HasOutParms 
	// Function /Script/JunoUI.JunoCraftingScreen.HandleCategorySelected
	// void HandleCategorySelected(FName TabID);                                                                                // [0xb546108] Final|Native|Protected 
	// Function /Script/JunoUI.JunoCraftingScreen.HandleAttachNewRecipeConfirmed
	// void HandleAttachNewRecipeConfirmed();                                                                                   // [0xb5460f4] Final|Native|Private 
	// Function /Script/JunoUI.JunoCraftingScreen.HandleAttachNewRecipeCancelled
	// void HandleAttachNewRecipeCancelled();                                                                                   // [0xb5460e0] Final|Native|Private 
};

/// Class /Script/JunoUI.JunoInventoryGroup
/// Size: 0x0080 (0x0002E8 - 0x000368)
class UJunoInventoryGroup : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 872;

public:
	CMember(TArray<class UJunoInventorySlot*>)         TrackedInventorySlots                                       OFFSET(get<T>, {0x2E8, 16, 0, 0})
	CMember(TArray<class UJunoAdjustableInventorySlot*>) CraftingInputInventorySlots                               OFFSET(get<T>, {0x2F8, 16, 0, 0})
	CMember(TWeakObjectPtr<UObject*>)                  GroupIcon                                                   OFFSET(get<T>, {0x320, 32, 0, 0})
	CMember(class UUniformGridPanel*)                  GridPanel_Slots                                             OFFSET(get<T>, {0x350, 8, 0, 0})
	CMember(class UClass*)                             InventorySlotClass                                          OFFSET(get<T>, {0x358, 8, 0, 0})
	CMember(class UClass*)                             CraftingInputInventorySlotClass                             OFFSET(get<T>, {0x360, 8, 0, 0})


	/// Functions
	// Function /Script/JunoUI.JunoInventoryGroup.OnSetGroupName
	// void OnSetGroupName(FText& InGroupName);                                                                                 // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/JunoUI.JunoInventoryGroup.GetInventorySlot
	// class UJunoInventorySlot* GetInventorySlot(int32_t RowIndex, int32_t ColumnIndex);                                       // [0xb545ac0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoUI.JunoInventoryGroup.GetFirstSlot
	// class UJunoInventorySlot* GetFirstSlot();                                                                                // [0xb545a9c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/JunoUI.JunoInventoryScreen
/// Size: 0x01E8 (0x000400 - 0x0005E8)
class UJunoInventoryScreen : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1512;

public:
	SMember(FText)                                     MoveAllProgressTitle                                        OFFSET(getStruct<T>, {0x430, 24, 0, 0})
	SMember(FText)                                     MoveAllProgressDescription                                  OFFSET(getStruct<T>, {0x448, 24, 0, 0})
	SMember(FText)                                     MergeAllProgressTitle                                       OFFSET(getStruct<T>, {0x460, 24, 0, 0})
	SMember(FText)                                     MergeAllProgressDescription                                 OFFSET(getStruct<T>, {0x478, 24, 0, 0})
	CMember(class UJunoInventorySlot*)                 LastSelectedSlot                                            OFFSET(get<T>, {0x498, 8, 0, 0})
	CMember(class UJunoInventorySlot*)                 LastHoveredSlot                                             OFFSET(get<T>, {0x4A0, 8, 0, 0})
	CMember(TWeakObjectPtr<AActor*>)                   WeakOtherInventoryActor                                     OFFSET(get<T>, {0x4A8, 8, 0, 0})
	CMember(class UJunoInventoryGroup*)                Group_ObjectInventory                                       OFFSET(get<T>, {0x4B0, 8, 0, 0})
	CMember(class UCommonButtonGroupBase*)             ButtonGroup_AllSlots                                        OFFSET(get<T>, {0x4B8, 8, 0, 0})
	CMember(class UClass*)                             InventoryGroupClass                                         OFFSET(get<T>, {0x4C0, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_Back                                                 OFFSET(get<T>, {0x4C8, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  WBP_Juno_CloseButton_Touch                                  OFFSET(get<T>, {0x4D0, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_MoreActions                                          OFFSET(get<T>, {0x4D8, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_Equip                                                OFFSET(get<T>, {0x4E0, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_Unequip                                              OFFSET(get<T>, {0x4E8, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_MoveToInventory                                      OFFSET(get<T>, {0x4F0, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_MoveToMainHand                                       OFFSET(get<T>, {0x4F8, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_MoveToOffHand                                        OFFSET(get<T>, {0x500, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_Drop                                                 OFFSET(get<T>, {0x508, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_TakeAll                                              OFFSET(get<T>, {0x510, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_Merge                                                OFFSET(get<T>, {0x518, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_TakeStack                                            OFFSET(get<T>, {0x520, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_DepositStack                                         OFFSET(get<T>, {0x528, 8, 0, 0})
	CMember(class UDynamicUIScene*)                    ModalProgressScene                                          OFFSET(get<T>, {0x530, 8, 0, 0})
	SMember(FDataTableRowHandle)                       CancelAction                                                OFFSET(getStruct<T>, {0x538, 16, 0, 0})
	SMember(FDataTableRowHandle)                       BackAction                                                  OFFSET(getStruct<T>, {0x548, 16, 0, 0})
	SMember(FDataTableRowHandle)                       CloseScreenAction                                           OFFSET(getStruct<T>, {0x558, 16, 0, 0})
	CMember(class UJunoPlayerInventoryContainer*)      Container_PlayerInventory                                   OFFSET(get<T>, {0x568, 8, 0, 0})
	CMember(class UJunoInventoryGroup*)                Group_PlayerGear                                            OFFSET(get<T>, {0x570, 8, 0, 0})
	CMember(class UNamedSlot*)                         NamedSlot_ObjectInventory                                   OFFSET(get<T>, {0x578, 8, 0, 0})
	DMember(float)                                     ItemsModificationProgressMinimumWaitTimeSeconds             OFFSET(get<float>, {0x580, 4, 0, 0})
	CMember(class UJunoInventoryDragAndDropHandler*)   JunoInventoryDragAndDropHandler                             OFFSET(get<T>, {0x5E0, 8, 0, 0})


	/// Functions
	// Function /Script/JunoUI.JunoInventoryScreen.OnSlotItemSelected
	// void OnSlotItemSelected(class UFortItem* Item);                                                                          // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/JunoUI.JunoInventoryScreen.OnMoveAllItemsStatusChanged
	// void OnMoveAllItemsStatusChanged(bool bStarted);                                                                         // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/JunoUI.JunoInventoryScreen.OnMergeAllItemsStatusChanged
	// void OnMergeAllItemsStatusChanged(bool bStarted);                                                                        // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/JunoUI.JunoInventoryScreen.OnInventoryObjectUpdated
	// void OnInventoryObjectUpdated(bool bInventoryObjectPresent);                                                             // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/JunoUI.JunoInventoryScreen.GetCurrentModalOperation
	// EJunoInventoryModalOperation GetCurrentModalOperation();                                                                 // [0xb545a6c] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/JunoUI.JunoHudMenu
/// Size: 0x0008 (0x000438 - 0x000440)
class UJunoHudMenu : public UJunoHudMenuBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1088;

public:
	CMember(class UCommonButtonBase*)                  Button_ItemShop                                             OFFSET(get<T>, {0x438, 8, 0, 0})


	/// Functions
	// Function /Script/JunoUI.JunoHudMenu.ShouldShowPlayersTab
	// bool ShouldShowPlayersTab();                                                                                             // [0xb514a54] Final|Native|Public|BlueprintCallable|Const 
};

/// Class /Script/JunoUI.JunoInventoryDragAndDropHandler
/// Size: 0x0068 (0x000028 - 0x000090)
class UJunoInventoryDragAndDropHandler : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	CMember(TWeakObjectPtr<UCommonButtonGroupBase*>)   WeakButtonGroup_InventorySlots                              OFFSET(get<T>, {0x68, 8, 0, 0})
	CMember(TWeakObjectPtr<AFortPlayerController*>)    WeakOwningPlayer                                            OFFSET(get<T>, {0x70, 8, 0, 0})
	CMember(class UJunoInventorySlot*)                 SourceInventorySlot                                         OFFSET(get<T>, {0x80, 8, 0, 0})
	CMember(class UJunoInventorySlot*)                 DestinationInventorySlot                                    OFFSET(get<T>, {0x88, 8, 0, 0})
};

/// Class /Script/JunoUI.JunoMapLegendWidget
/// Size: 0x0010 (0x0002E8 - 0x0002F8)
class UJunoMapLegendWidget : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 760;

public:
	DMember(int32_t)                                   MaxDisplayedTeamPlayers                                     OFFSET(get<int32_t>, {0x2E8, 4, 0, 0})
	CMember(class UDynamicEntryBox*)                   EntryBox_TeamPlayers                                        OFFSET(get<T>, {0x2F0, 8, 0, 0})


	/// Functions
	// Function /Script/JunoUI.JunoMapLegendWidget.OnUpdateTeamPlayerEntry
	// void OnUpdateTeamPlayerEntry(class UUserWidget* EntryWidget, FUniqueNetIdRepl PlayerUniqueNetId, FString PlayerName);    // [0x18a39e4] Event|Protected|BlueprintEvent 
};

/// Class /Script/JunoUI.JunoMapMarkerCustomizationEntry
/// Size: 0x0070 (0x001490 - 0x001500)
class UJunoMapMarkerCustomizationEntry : public UCommonButtonBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5376;

public:
	CMember(TWeakObjectPtr<UTexture*>)                 Icon                                                        OFFSET(get<T>, {0x14A0, 32, 0, 0})
	CMember(class UFortLazyImage*)                     Image_MarkerIcon                                            OFFSET(get<T>, {0x14D0, 8, 0, 0})
	CMember(class UBorder*)                            ColorBorder                                                 OFFSET(get<T>, {0x14D8, 8, 0, 0})
	CMember(class UImage*)                             Checkmark                                                   OFFSET(get<T>, {0x14E0, 8, 0, 0})
	SMember(FLinearColor)                              IconEntryBackgroundColor                                    OFFSET(getStruct<T>, {0x14E8, 16, 0, 0})


	/// Functions
	// Function /Script/JunoUI.JunoMapMarkerCustomizationEntry.OnEntryInitialized
	// void OnEntryInitialized(FJunoMapMarkerEntryInitData EntryInitData);                                                      // [0x18a39e4] Event|Protected|BlueprintEvent 
};

/// Class /Script/JunoUI.JunoMapMarkerCustomizationScreen
/// Size: 0x0060 (0x000400 - 0x000460)
class UJunoMapMarkerCustomizationScreen : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1120;

public:
	CMember(class UJunoMapMarkerCustomizationEntry*)   SelectedColor                                               OFFSET(get<T>, {0x408, 8, 0, 0})
	CMember(class UJunoMapMarkerCustomizationEntry*)   SelectedIcon                                                OFFSET(get<T>, {0x410, 8, 0, 0})
	CMember(class UClass*)                             EntryClass                                                  OFFSET(get<T>, {0x418, 8, 0, 0})
	SMember(FName)                                     ColorParamName                                              OFFSET(getStruct<T>, {0x420, 4, 0, 0})
	CMember(class UDynamicEntryBox*)                   ColorPanel                                                  OFFSET(get<T>, {0x428, 8, 0, 0})
	CMember(class UDynamicEntryBox*)                   IconPanel                                                   OFFSET(get<T>, {0x430, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  ConfirmButton                                               OFFSET(get<T>, {0x438, 8, 0, 0})
	CMember(class UCommonButtonGroupBase*)             ButtonGroup_AllIconSlots                                    OFFSET(get<T>, {0x440, 8, 0, 0})
	CMember(class UCommonButtonGroupBase*)             ButtonGroup_AllColorSlots                                   OFFSET(get<T>, {0x448, 8, 0, 0})
	CMember(class UFortLazyImage*)                     Image_PreviewMarker                                         OFFSET(get<T>, {0x450, 8, 0, 0})
	CMember(class UJunoMapMarkerCustomizationInitData*) InitData                                                   OFFSET(get<T>, {0x458, 8, 0, 0})


	/// Functions
	// Function /Script/JunoUI.JunoMapMarkerCustomizationScreen.SetPreviewMarkerMaterial
	// void SetPreviewMarkerMaterial();                                                                                         // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/JunoUI.JunoMapMarkerCustomizationScreen.SetMarkerNameText
	// void SetMarkerNameText(FText& Name);                                                                                     // [0x18a39e4] Event|Public|HasOutParms|BlueprintEvent 
};

/// Class /Script/JunoUI.JunoVillageScreenBase
/// Size: 0x0190 (0x000400 - 0x000590)
class UJunoVillageScreenBase : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1424;

public:
	CMember(class UCommonButtonBase*)                  Button_Back                                                 OFFSET(get<T>, {0x430, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_Close                                                OFFSET(get<T>, {0x438, 8, 0, 0})
	SMember(FJunoVillageUIData)                        VillageUIData                                               OFFSET(getStruct<T>, {0x440, 312, 0, 0})
	CMember(class AJunoCampActor*)                     CampActor                                                   OFFSET(get<T>, {0x578, 8, 0, 0})
	CMember(class UJunoCampMembershipActorComponent*)  CampMembershipActorComponent                                OFFSET(get<T>, {0x580, 8, 0, 0})
	CMember(class UJunoAwesomeLevelComponent*)         AwesomeLevelComponent                                       OFFSET(get<T>, {0x588, 8, 0, 0})


	/// Functions
	// Function /Script/JunoUI.JunoVillageScreenBase.OnVillageDataChanged
	// void OnVillageDataChanged();                                                                                             // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/JunoUI.JunoVillageScreenBase.OnAwesomePointsModified
	// void OnAwesomePointsModified(FJunoAwesomePointModificationData& PointModificationData);                                  // [0xb569d84] Native|Protected|HasOutParms 
	// Function /Script/JunoUI.JunoVillageScreenBase.OnAwesomeLevelChanged
	// void OnAwesomeLevelChanged(FJunoAwesomeLevelChangeData& LevelChangeData);                                                // [0xb569cf0] Native|Protected|HasOutParms 
	// Function /Script/JunoUI.JunoVillageScreenBase.BP_OnAwesomePointsChanged
	// void BP_OnAwesomePointsChanged(FJunoAwesomePointModificationData& Data);                                                 // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/JunoUI.JunoVillageScreenBase.BP_OnAwesomeLevelChanged
	// void BP_OnAwesomeLevelChanged(FJunoAwesomeLevelChangeData& Data);                                                        // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
};

/// Class /Script/JunoUI.JunoVillageDetailsScreen
/// Size: 0x00A8 (0x000590 - 0x000638)
class UJunoVillageDetailsScreen : public UJunoVillageScreenBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1592;

public:
	CMember(class UCommonButtonBase*)                  Button_RemoveVillage                                        OFFSET(get<T>, {0x590, 8, 0, 0})
	CMember(class UCommonButtonGroupBase*)             ButtonGroup_AllRewards                                      OFFSET(get<T>, {0x598, 8, 0, 0})
	CMember(class UDynamicEntryBox*)                   RewardList                                                  OFFSET(get<T>, {0x5A0, 8, 0, 0})
	CMember(class UJunoVillageRewardEntry*)            LastHoveredEntry                                            OFFSET(get<T>, {0x5A8, 8, 0, 0})
	CMember(class UDynamicUIScene*)                    RemoveVillageModalScene                                     OFFSET(get<T>, {0x5B0, 8, 0, 0})
	SMember(FText)                                     RemoveVillageConfirmationTitle                              OFFSET(getStruct<T>, {0x5B8, 24, 0, 0})
	SMember(FText)                                     RemoveVillageConfirmationDescription                        OFFSET(getStruct<T>, {0x5D0, 24, 0, 0})
	SMember(FText)                                     RemoveVillageConfirmButtonText                              OFFSET(getStruct<T>, {0x5E8, 24, 0, 0})
	SMember(FText)                                     RemoveVillageCancelButtonText                               OFFSET(getStruct<T>, {0x600, 24, 0, 0})
	SMember(FDataTableRowHandle)                       ModalConfirmAction                                          OFFSET(getStruct<T>, {0x618, 16, 0, 0})
	SMember(FDataTableRowHandle)                       ModalCancelAction                                           OFFSET(getStruct<T>, {0x628, 16, 0, 0})


	/// Functions
	// Function /Script/JunoUI.JunoVillageDetailsScreen.OnEntryHovered
	// void OnEntryHovered(class UJunoVillageRewardEntry* Entry);                                                               // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/JunoUI.JunoVillageDetailsScreen.HandleRemoveVillageConfirmed
	// void HandleRemoveVillageConfirmed();                                                                                     // [0xb569cdc] Final|Native|Protected 
	// Function /Script/JunoUI.JunoVillageDetailsScreen.HandleRemoveVillageCancelled
	// void HandleRemoveVillageCancelled();                                                                                     // [0xb5460e0] Final|Native|Protected 
};

/// Class /Script/JunoUI.JunoVillageUIDataAsset
/// Size: 0x0050 (0x000030 - 0x000080)
class UJunoVillageUIDataAsset : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(TMap<FGameplayTag, TWeakObjectPtr<UTexture2D*>>) PerkTagToIcon                                         OFFSET(get<T>, {0x30, 80, 0, 0})


	/// Functions
	// Function /Script/JunoUI.JunoVillageUIDataAsset.FindPerkImage
	// TWeakObjectPtr<UTexture2D*> FindPerkImage(FGameplayTagContainer& InTagContainer);                                        // [0xb569928] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
};

/// Class /Script/JunoUI.JunoVillageUpgradeCelebrationScreen
/// Size: 0x0000 (0x000328 - 0x000328)
class UJunoVillageUpgradeCelebrationScreen : public UFortHUDElementWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 808;

public:
};

/// Class /Script/JunoUI.JunoVillageUpgradeScreen
/// Size: 0x0028 (0x000590 - 0x0005B8)
class UJunoVillageUpgradeScreen : public UJunoVillageScreenBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1464;

public:
	CMember(class UCommonButtonBase*)                  Button_Upgrade                                              OFFSET(get<T>, {0x590, 8, 0, 0})
	CMember(class UDynamicEntryBox*)                   EntryBox_Ingredients                                        OFFSET(get<T>, {0x598, 8, 0, 0})
	CMember(class UDynamicEntryBox*)                   EntryBox_Perks                                              OFFSET(get<T>, {0x5A0, 8, 0, 0})
	CMember(class UScrollBox*)                         ScrollBox_Rewards                                           OFFSET(get<T>, {0x5A8, 8, 0, 0})
	CMember(class UScrollBox*)                         ScrollBox_Requirements                                      OFFSET(get<T>, {0x5B0, 8, 0, 0})


	/// Functions
	// Function /Script/JunoUI.JunoVillageUpgradeScreen.OnUpgrade
	// void OnUpgrade();                                                                                                        // [0x18a39e4] Event|Protected|BlueprintEvent 
};

/// Class /Script/JunoUI.JunoGuidedBuildingHudBar
/// Size: 0x0000 (0x000388 - 0x000388)
class UJunoGuidedBuildingHudBar : public UJunoBuildingBarHud
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 904;

public:
};

/// Class /Script/JunoUI.JunoGuidedBuildingHudBarSlot
/// Size: 0x0000 (0x000300 - 0x000300)
class UJunoGuidedBuildingHudBarSlot : public UJunoBuildingBarHudSlot
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 768;

public:
};

/// Class /Script/JunoUI.JunoGuidedBuildingHudStateWidget
/// Size: 0x0050 (0x0002E8 - 0x000338)
class UJunoGuidedBuildingHudStateWidget : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 824;

public:
	CMember(TWeakObjectPtr<AJunoGuidedBuildingActor*>) CurrentGuidedBuildingActor                                  OFFSET(get<T>, {0x2E8, 8, 0, 0})
	DMember(float)                                     AutoHideTimeLength                                          OFFSET(get<float>, {0x2F0, 4, 0, 0})


	/// Functions
	// Function /Script/JunoUI.JunoGuidedBuildingHudStateWidget.ShowWidget
	// void ShowWidget();                                                                                                       // [0x9a8c354] Native|Event|Protected|BlueprintEvent 
	// Function /Script/JunoUI.JunoGuidedBuildingHudStateWidget.OnStageComplete
	// void OnStageComplete(FGuidedBuildingUpdate& UpdateData);                                                                 // [0xb56a094] Native|Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/JunoUI.JunoGuidedBuildingHudStateWidget.OnSnapsUpdated
	// void OnSnapsUpdated(TArray<int32_t>& UpdatedSnaps);                                                                      // [0xb569ff4] Native|Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/JunoUI.JunoGuidedBuildingHudStateWidget.OnSetComplete
	// void OnSetComplete(FGuidedBuildingUpdate& UpdateData);                                                                   // [0xb569f60] Native|Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/JunoUI.JunoGuidedBuildingHudStateWidget.OnSectionComplete
	// void OnSectionComplete(FGuidedBuildingUpdate& UpdateData);                                                               // [0xb569ecc] Native|Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/JunoUI.JunoGuidedBuildingHudStateWidget.OnCurrentStageUpdate
	// void OnCurrentStageUpdate(FGuidedBuildingUpdate& UpdateData);                                                            // [0xb569e24] Native|Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/JunoUI.JunoGuidedBuildingHudStateWidget.OnAutoHideTimereFinished
	// void OnAutoHideTimereFinished();                                                                                         // [0x248ecf4] Native|Event|Protected|BlueprintEvent 
	// Function /Script/JunoUI.JunoGuidedBuildingHudStateWidget.HideWidget
	// void HideWidget();                                                                                                       // [0x231e58c] Native|Event|Protected|BlueprintEvent 
};

/// Class /Script/JunoUI.JunoEquipmentWidget
/// Size: 0x0060 (0x000328 - 0x000388)
class UJunoEquipmentWidget : public UFortHUDElementWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 904;

public:
	CMember(class UJunoInventorySlot*)                 InventorySlot_Item                                          OFFSET(get<T>, {0x328, 8, 0, 0})
	SMember(FJunoItemSlot)                             ItemSlotData                                                OFFSET(getStruct<T>, {0x330, 80, 0, 0})


	/// Functions
	// Function /Script/JunoUI.JunoEquipmentWidget.OnSlotItemChanged
	// void OnSlotItemChanged(EJunoItemChangeType ChangeType, class UFortItem* SlotItem);                                       // [0x18a39e4] Event|Protected|BlueprintEvent 
};

/// Class /Script/JunoUI.JunoGliderWidget
/// Size: 0x0018 (0x000328 - 0x000340)
class UJunoGliderWidget : public UFortHUDElementWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 832;

public:
	CMember(class UWidget*)                            MainContent                                                 OFFSET(get<T>, {0x328, 8, 0, 0})
	CMember(class UOverlay*)                           Overlay_MainContent                                         OFFSET(get<T>, {0x330, 8, 0, 0})
};

/// Class /Script/JunoUI.JunoIndicatorLayerManagerWidget
/// Size: 0x0190 (0x000328 - 0x0004B8)
class UJunoIndicatorLayerManagerWidget : public UFortHUDElementWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1208;

public:
	CMember(class UFortActorCanvas*)                   GeneralIndicators                                           OFFSET(get<T>, {0x330, 8, 0, 0})
	DMember(int32_t)                                   PlayerIndicatorPoolSize                                     OFFSET(get<int32_t>, {0x340, 4, 0, 0})
	SMember(FUserWidgetPool)                           IndicatorPool                                               OFFSET(getStruct<T>, {0x348, 136, 0, 0})
	CMember(class UJunoLocalPlayerViewModel*)          LocalPlayerViewModel                                        OFFSET(get<T>, {0x3D0, 8, 0, 0})
	CMember(class UClass*)                             PlayerIndicatorClass                                        OFFSET(get<T>, {0x3D8, 8, 0, 0})
	CMember(class UFortActorCanvas*)                   PlayerIndicators                                            OFFSET(get<T>, {0x3E0, 8, 0, 0})
	DMember(float)                                     MinimumInFocusRadius                                        OFFSET(get<float>, {0x3E8, 4, 0, 0})
	CMember(TMap<FGameplayTag, UClass*>)               NPCIndicatorClasses                                         OFFSET(get<T>, {0x3F0, 80, 0, 0})
	DMember(int32_t)                                   NPCHealthPoolSize                                           OFFSET(get<int32_t>, {0x440, 4, 0, 0})
	CMember(class UClass*)                             NPCHealthWidgetClass                                        OFFSET(get<T>, {0x448, 8, 0, 0})
	CMember(class UClass*)                             BuildingHealthWidgetClass                                   OFFSET(get<T>, {0x450, 8, 0, 0})
	DMember(float)                                     BuildingHealthDisplayDuration                               OFFSET(get<float>, {0x458, 4, 0, 0})
	CMember(TSet<AActor*>)                             KnownNPCHealthOwners                                        OFFSET(get<T>, {0x460, 80, 0, 0})
	CMember(class UFortActorIndicatorWidget*)          BuildingHealthIndicatorWidget                               OFFSET(get<T>, {0x4B0, 8, 0, 0})
};

/// Class /Script/JunoUI.JunoInteractionIndicatorWidget
/// Size: 0x0018 (0x0003D0 - 0x0003E8)
class UJunoInteractionIndicatorWidget : public UFortActorIndicatorWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1000;

public:
	CMember(class UFortInteractContextInfo*)           CurrentContextInfo                                          OFFSET(get<T>, {0x3D0, 8, 0, 0})
	CMember(class UFortKeybindWidget*)                 KeybindWidget                                               OFFSET(get<T>, {0x3D8, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   Text_KeyBindName                                            OFFSET(get<T>, {0x3E0, 8, 0, 0})


	/// Functions
	// Function /Script/JunoUI.JunoInteractionIndicatorWidget.OnShowPickup
	// void OnShowPickup(class AFortPickup* InCurrentPickup);                                                                   // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/JunoUI.JunoInteractionIndicatorWidget.OnShowBasicInteraction
	// void OnShowBasicInteraction(FText& Description, FLinearColor DescriptionColor, int32_t InteractionCount);                // [0x18a39e4] Event|Protected|HasOutParms|HasDefaults|BlueprintEvent 
};

/// Class /Script/JunoUI.JunoLocalPlayerViewModel
/// Size: 0x0038 (0x000188 - 0x0001C0)
class UJunoLocalPlayerViewModel : public UFortPlayerViewModel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 448;

public:
	CMember(TWeakObjectPtr<AFortPlayerControllerAthena*>) TrackedPlayerController                                  OFFSET(get<T>, {0x188, 8, 0, 0})
	CMember(TArray<TWeakObjectPtr<AFortPlayerState*>>) CachedPlayerStates                                          OFFSET(get<T>, {0x190, 16, 0, 0})
};

/// Class /Script/JunoUI.JunoMapViewModel
/// Size: 0x0058 (0x000070 - 0x0000C8)
class UJunoMapViewModel : public UFortPerUserViewModel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	CMember(TMap<FUniqueNetIdRepl, UFortPlayerAvatarViewModel*>) TeamPlayerAvatarViewModels                        OFFSET(get<T>, {0x70, 80, 0, 0})
	CMember(class UFortPlayerAvatarViewModel*)         LocalPlayerAvatarViewModel                                  OFFSET(get<T>, {0xC0, 8, 0, 0})
};

/// Class /Script/JunoUI.JunoNotificationWidget
/// Size: 0x0058 (0x000400 - 0x000458)
class UJunoNotificationWidget : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1112;

public:
	SMember(FFortPrioritizedWidgetData)                PrioData                                                    OFFSET(getStruct<T>, {0x440, 2, 0, 0})
	CMember(TArray<FJunoNotificationData>)             QueuedNotifications                                         OFFSET(get<T>, {0x448, 16, 0, 0})


	/// Functions
	// Function /Script/JunoUI.JunoNotificationWidget.OnNotificationFinished
	// void OnNotificationFinished();                                                                                           // [0xb569eb8] Final|Native|Protected|BlueprintCallable 
	// Function /Script/JunoUI.JunoNotificationWidget.BP_DisplayNotification
	// void BP_DisplayNotification(FJunoNotificationData& NotificationData);                                                    // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
};

/// Class /Script/JunoUI.JunoNotificationHostWidget
/// Size: 0x00D0 (0x000328 - 0x0003F8)
class UJunoNotificationHostWidget : public UFortHUDElementWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1016;

public:
	CMember(class UFortPrioritizedWidgetSwitcher*)     WidgetSwitcher                                              OFFSET(get<T>, {0x330, 8, 0, 0})
	CMember(TMap<FGameplayTag, UClass*>)               TagToWidgetClassMap                                         OFFSET(get<T>, {0x338, 80, 0, 0})
	CMember(TMap<FGameplayTag, UJunoNotificationWidget*>) TagToWidgetMap                                           OFFSET(get<T>, {0x388, 80, 0, 0})
	SMember(FGameplayTagContainer)                     RecipeFilterTags                                            OFFSET(getStruct<T>, {0x3D8, 32, 0, 0})
};

/// Class /Script/JunoUI.JunoOffhandWidget
/// Size: 0x0040 (0x000328 - 0x000368)
class UJunoOffhandWidget : public UFortHUDElementWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 872;

public:
	CMember(class UDynamicEntryBox*)                   EntryBox_Slots                                              OFFSET(get<T>, {0x340, 8, 0, 0})
	CMember(TArray<class UJunoOffhandWidgetSlot*>)     CachedOffhandWidgetSlots                                    OFFSET(get<T>, {0x348, 16, 0, 0})
};

/// Class /Script/JunoUI.JunoOffhandWidgetSlot
/// Size: 0x0068 (0x000328 - 0x000390)
class UJunoOffhandWidgetSlot : public UFortHUDElementWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 912;

public:
	SMember(FJunoItemSlot)                             ItemSlotData                                                OFFSET(getStruct<T>, {0x338, 80, 0, 0})
	CMember(class UJunoInventorySlot*)                 InventorySlot_Item                                          OFFSET(get<T>, {0x388, 8, 0, 0})


	/// Functions
	// Function /Script/JunoUI.JunoOffhandWidgetSlot.OnSlotItemChanged
	// void OnSlotItemChanged(EJunoItemChangeType ChangeType, class UFortItem* SlotItem);                                       // [0x18a39e4] Event|Protected|BlueprintEvent 
};

/// Class /Script/JunoUI.JunoPickupStream
/// Size: 0x00B8 (0x000328 - 0x0003E0)
class UJunoPickupStream : public UFortHUDElementWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 992;

public:
	SMember(FUserWidgetPool)                           PickupDisplayPool                                           OFFSET(getStruct<T>, {0x328, 136, 0, 0})
	DMember(int32_t)                                   MaxDisplayedItems                                           OFFSET(get<int32_t>, {0x3C0, 4, 0, 0})
	CMember(class UClass*)                             PickupEntryWidgetClass                                      OFFSET(get<T>, {0x3C8, 8, 0, 0})
	DMember(float)                                     ExpirationTime                                              OFFSET(get<float>, {0x3D0, 4, 0, 0})
	CMember(class UVerticalBox*)                       VerticalBox_PickupMessages                                  OFFSET(get<T>, {0x3D8, 8, 0, 0})


	/// Functions
	// Function /Script/JunoUI.JunoPickupStream.RefreshPickupEntry
	// void RefreshPickupEntry(class UUserWidget* EntryWidget, TWeakObjectPtr<UTexture2D*>& Icon, FText& DisplayName, int32_t Count, int32_t TotalInventoryCount, EFortRarity ItemRarity, EJunoPickupStreamAnim AnimType); // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/JunoUI.JunoPickupStream.OnHideExpiredPickup
	// void OnHideExpiredPickup(class UUserWidget* EntryWidget);                                                                // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/JunoUI.JunoPickupStream.OnActivePickupsPresent
	// void OnActivePickupsPresent(bool bHasActivePickups);                                                                     // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/JunoUI.JunoPickupStream.HandleItemPickedUp
	// void HandleItemPickedUp(class UFortWorldItem* WorldItem, int32_t Count);                                                 // [0xb569b58] Final|Native|Protected 
	// Function /Script/JunoUI.JunoPickupStream.HandleEntryHideAnimComplete
	// void HandleEntryHideAnimComplete(class UUserWidget* EntryWidget);                                                        // [0xb569ab0] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/JunoUI.JunoPlayerHitpointWidget
/// Size: 0x0018 (0x000328 - 0x000340)
class UJunoPlayerHitpointWidget : public UFortHUDElementWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 832;

public:
	CMember(EJunoHealthBarType)                        BarType                                                     OFFSET(get<T>, {0x328, 1, 0, 0})
	DMember(float)                                     ValueCurrent                                                OFFSET(get<float>, {0x32C, 4, 0, 0})
	DMember(float)                                     ValueLast                                                   OFFSET(get<float>, {0x330, 4, 0, 0})
	DMember(float)                                     ValueMax                                                    OFFSET(get<float>, {0x334, 4, 0, 0})
	CMember(class UJunoLocalPlayerViewModel*)          JunoPlayerViewModel                                         OFFSET(get<T>, {0x338, 8, 0, 0})


	/// Functions
	// Function /Script/JunoUI.JunoPlayerHitpointWidget.OnValueChangedWithReason
	// void OnValueChangedWithReason(EFortHitPointModificationReason Reason);                                                   // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/JunoUI.JunoPlayerHitpointWidget.OnMaxValueChanged
	// void OnMaxValueChanged(float Value);                                                                                     // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/JunoUI.JunoPlayerHitpointWidget.OnDeltaChanged
	// void OnDeltaChanged();                                                                                                   // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/JunoUI.JunoPlayerHitpointWidget.GetLastValuePercentage
	// float GetLastValuePercentage();                                                                                          // [0xb569a34] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoUI.JunoPlayerHitpointWidget.GetCurrentValuePercentage
	// float GetCurrentValuePercentage();                                                                                       // [0xb569a04] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/JunoUI.JunoPlayerIndicatorWidget
/// Size: 0x0030 (0x0003D0 - 0x000400)
class UJunoPlayerIndicatorWidget : public UFortActorIndicatorWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1024;

public:
	DMember(bool)                                      bCollapseInfoOnClamp                                        OFFSET(get<bool>, {0x3D0, 1, 0, 0})
	DMember(float)                                     MinDistanceToDisplayInfo                                    OFFSET(get<float>, {0x3D4, 4, 0, 0})
	CMember(class UCommonTextBlock*)                   Text_Distance                                               OFFSET(get<T>, {0x3E0, 8, 0, 0})


	/// Functions
	// Function /Script/JunoUI.JunoPlayerIndicatorWidget.OnPlayerDataUpdated
	// void OnPlayerDataUpdated(FJunoPlayerIndicatorData& PlayerIndicatorData);                                                 // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/JunoUI.JunoPlayerIndicatorWidget.OnInFocusStateChanged
	// void OnInFocusStateChanged(bool bInInFocus);                                                                             // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/JunoUI.JunoPlayerIndicatorWidget.OnClampedStatusChanged
	// void OnClampedStatusChanged(bool bInIsClamped);                                                                          // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/JunoUI.JunoPlayerIndicatorWidget.HandlePlayerStatePawnDied
	// void HandlePlayerStatePawnDied(FPawnDamageData& PawnDamageInfo);                                                         // [0xb569c1c] Final|Native|Private|HasOutParms 
	// Function /Script/JunoUI.JunoPlayerIndicatorWidget.HandleCurrentPawnChanged
	// void HandleCurrentPawnChanged();                                                                                         // [0xb569a9c] Final|Native|Private 
};

/// Class /Script/JunoUI.JunoQuickbar
/// Size: 0x00A8 (0x000328 - 0x0003D0)
class UJunoQuickbar : public UFortHUDElementWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 976;

public:
	CMember(class UDynamicEntryBox*)                   EntryBox_Slots                                              OFFSET(get<T>, {0x348, 8, 0, 0})
	CMember(TArray<class UJunoQuickbarSlot*>)          CachedQuickbarSlots                                         OFFSET(get<T>, {0x350, 16, 0, 0})


	/// Functions
	// Function /Script/JunoUI.JunoQuickbar.OnQuickbarSlotChanged
	// void OnQuickbarSlotChanged(int32_t SelectedSlotIndex);                                                                   // [0x18a39e4] Event|Protected|BlueprintEvent 
};

/// Class /Script/JunoUI.JunoQuickbarMobileContainer
/// Size: 0x0020 (0x000350 - 0x000370)
class UJunoQuickbarMobileContainer : public UFortMobileHUDElement
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 880;

public:
	CMember(class UJunoQuickbar*)                      JunoQuickbar                                                OFFSET(get<T>, {0x350, 8, 0, 0})
	CMember(class UJunoOffhandWidget*)                 JunoOffhandWidget                                           OFFSET(get<T>, {0x358, 8, 0, 0})
	CMember(class UJunoInventoryDragAndDropHandler*)   JunoInventoryDragAndDropHandler                             OFFSET(get<T>, {0x360, 8, 0, 0})
	CMember(class UCommonButtonGroupBase*)             ButtonGroup_AllSlots                                        OFFSET(get<T>, {0x368, 8, 0, 0})
};

/// Class /Script/JunoUI.JunoQuickbarSlot
/// Size: 0x0028 (0x0002E8 - 0x000310)
class UJunoQuickbarSlot : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 784;

public:
	CMember(class UJunoInventorySlot*)                 InventorySlot_Item                                          OFFSET(get<T>, {0x2F8, 8, 0, 0})
	CMember(class UFortKeybindWidget*)                 KeyBind_Keyboard                                            OFFSET(get<T>, {0x300, 8, 0, 0})


	/// Functions
	// Function /Script/JunoUI.JunoQuickbarSlot.OnSlotItemChangeFailed
	// void OnSlotItemChangeFailed();                                                                                           // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/JunoUI.JunoQuickbarSlot.OnSlotItemChanged
	// void OnSlotItemChanged(EJunoItemChangeType ChangeType);                                                                  // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/JunoUI.JunoQuickbarSlot.OnSlotInitialized
	// void OnSlotInitialized();                                                                                                // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/JunoUI.JunoQuickbarSlot.OnSetQuickbarSlotSelected
	// void OnSetQuickbarSlotSelected(bool bInSelected, FText& ItemName);                                                       // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/JunoUI.JunoQuickbarSlot.OnPrebuildStateChanged
	// void OnPrebuildStateChanged(bool bInEnabled);                                                                            // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/JunoUI.JunoQuickbarSlot.GetSlotItem
	// class UFortItem* GetSlotItem();                                                                                          // [0xb569a7c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/JunoUI.JunoDynamicUIDirector
/// Size: 0x0160 (0x0002B0 - 0x000410)
class AJunoDynamicUIDirector : public ADynamicUIDirectorBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1040;

public:
	CMember(class UJunoLocalPlayerViewModel*)          PlayerViewModel                                             OFFSET(get<T>, {0x2B0, 8, 0, 0})
	CMember(class UFortPlaylist*)                      CurrentPlaylist                                             OFFSET(get<T>, {0x2B8, 8, 0, 0})
	CMember(class UJunoAsyncAction_WaitForEventRouter*) WaitForEventRouterAction                                   OFFSET(get<T>, {0x2C0, 8, 0, 0})
	CMember(class UClass*)                             LocalPlayerUIMapStateClass                                  OFFSET(get<T>, {0x2C8, 8, 0, 0})
	CMember(class UJunoLocalPlayerUIMapState*)         LocalPlayerUIMapState                                       OFFSET(get<T>, {0x2D0, 8, 0, 0})
	CMember(class UClass*)                             TeamMapIndicatorsClass                                      OFFSET(get<T>, {0x2D8, 8, 0, 0})
	CMember(class UJunoMapTeamIndicators*)             TeamMapIndicators                                           OFFSET(get<T>, {0x2E0, 8, 0, 0})
	CMember(class UClass*)                             MarkerMapIndicatorsClass                                    OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(class UJunoMapMarkerIndicators*)           MarkerMapIndicators                                         OFFSET(get<T>, {0x2F0, 8, 0, 0})
	SMember(FGameplayTag)                              LastBuildingRecipeTag                                       OFFSET(getStruct<T>, {0x300, 4, 0, 0})
	SMember(FGameplayTagContainer)                     HideWithMenuTags                                            OFFSET(getStruct<T>, {0x308, 32, 0, 0})
	SMember(FGameplayTagContainer)                     DisallowMenuTags                                            OFFSET(getStruct<T>, {0x328, 32, 0, 0})


	/// Functions
	// Function /Script/JunoUI.JunoDynamicUIDirector.StartRegisteringUI
	// void StartRegisteringUI();                                                                                               // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/JunoUI.JunoDynamicUIDirector.OpenStandaloneMenuScene
	// void OpenStandaloneMenuScene(FJunoWidgetSceneAndIndex WidgetSceneAndIndex, class UObject* BoundObject);                  // [0xb56a350] Final|Native|Protected|BlueprintCallable 
	// Function /Script/JunoUI.JunoDynamicUIDirector.OpenHudMenuScene
	// void OpenHudMenuScene(FJunoWidgetSceneAndIndex WidgetSceneAndIndex, class UJunoHudMenuBaseInitData* HudMenuData);        // [0xb56a128] Final|Native|Protected|BlueprintCallable 
	// Function /Script/JunoUI.JunoDynamicUIDirector.OnShouldShowMobileHUDChanged
	// void OnShouldShowMobileHUDChanged();                                                                                     // [0x18a39e4] Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /Script/JunoUI.JunoDynamicUIDirector.OnEnteredConversation
	// void OnEnteredConversation();                                                                                            // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/JunoUI.JunoDynamicUIDirector.HandleHudMenuSceneClosed
	// void HandleHudMenuSceneClosed();                                                                                         // [0xb569b30] Final|Native|Protected|BlueprintCallable 
	// Function /Script/JunoUI.JunoDynamicUIDirector.GetShouldShowMobileHUD
	// bool GetShouldShowMobileHUD();                                                                                           // [0xb569a64] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/JunoUI.JunoNullHUD
/// Size: 0x0000 (0x000458 - 0x000458)
class UJunoNullHUD : public UFortNullHUD
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1112;

public:
};

/// Struct /Script/JunoUI.RecipeFocus
/// Size: 0x0008 (0x000000 - 0x000008)
class FRecipeFocus : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/JunoUI.RecipeCategoryChange
/// Size: 0x0020 (0x000000 - 0x000020)
class FRecipeCategoryChange : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FGameplayTagContainer)                     FilterTags                                                  OFFSET(getStruct<T>, {0x0, 32, 0, 0})
};

/// Struct /Script/JunoUI.CanCraftRecipeChange
/// Size: 0x0001 (0x000000 - 0x000001)
class FCanCraftRecipeChange : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/JunoUI.JunoBiomeUIDisplayData
/// Size: 0x0038 (0x000000 - 0x000038)
class FJunoBiomeUIDisplayData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FText)                                     DisplayText                                                 OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	CMember(TWeakObjectPtr<UObject*>)                  Icon                                                        OFFSET(get<T>, {0x18, 32, 0, 0})
};

/// Struct /Script/JunoUI.JunoMemoryMessage
/// Size: 0x0001 (0x000000 - 0x000001)
class FJunoMemoryMessage : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
	CMember(EBuildingLimitationState)                  BuildingLimitationState                                     OFFSET(get<T>, {0x0, 1, 0, 0})
};

/// Struct /Script/JunoUI.JunoBuildingMemoryThreshold
/// Size: 0x0008 (0x000008 - 0x000010)
class FJunoBuildingMemoryThreshold : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(int32_t)                                   BuildingPercentLimit                                        OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	CMember(EJunoLowMemoryState)                       MemoryStateLimit                                            OFFSET(get<T>, {0xC, 1, 0, 0})
	CMember(EBuildingLimitationState)                  LimitationState                                             OFFSET(get<T>, {0xD, 1, 0, 0})
};

/// Struct /Script/JunoUI.JunoGuidedBuildingUIData
/// Size: 0x000C (0x000000 - 0x00000C)
class FJunoGuidedBuildingUIData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(bool)                                      bIsGuidedBuildingSet                                        OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(int32_t)                                   TotalStagesInSet                                            OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   ExtraIngredientsInSet                                       OFFSET(get<int32_t>, {0x8, 4, 0, 0})
};

/// Struct /Script/JunoUI.JunoMarkerMaterialInstances
/// Size: 0x0010 (0x000000 - 0x000010)
class FJunoMarkerMaterialInstances : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<class UMaterialInstanceDynamic*>)   Instances                                                   OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/JunoUI.TrackedTouchData
/// Size: 0x000C (0x000000 - 0x00000C)
class FTrackedTouchData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
};

/// Struct /Script/JunoUI.JunoMapZoomBounds
/// Size: 0x0008 (0x000000 - 0x000008)
class FJunoMapZoomBounds : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(float)                                     MinZoom                                                     OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     MaximumZoom                                                 OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Struct /Script/JunoUI.JunoHudMenuTabRequest
/// Size: 0x0030 (0x000000 - 0x000030)
class FJunoHudMenuTabRequest : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FName)                                     NameId                                                      OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FText)                                     DisplayName                                                 OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	CMember(class UClass*)                             ButtonType                                                  OFFSET(get<T>, {0x20, 8, 0, 0})
	CMember(class UClass*)                             ContentType                                                 OFFSET(get<T>, {0x28, 8, 0, 0})
};

/// Struct /Script/JunoUI.JunoIngredientInfo
/// Size: 0x0028 (0x000000 - 0x000028)
class FJunoIngredientInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(TWeakObjectPtr<UItemDefinitionBase*>)      Ingredient                                                  OFFSET(get<T>, {0x0, 32, 0, 0})
	DMember(int32_t)                                   RequiredCount                                               OFFSET(get<int32_t>, {0x20, 4, 0, 0})
	DMember(int32_t)                                   OwnedCount                                                  OFFSET(get<int32_t>, {0x24, 4, 0, 0})
};

/// Struct /Script/JunoUI.JunoInventoryGroupUIData
/// Size: 0x0040 (0x000000 - 0x000040)
class FJunoInventoryGroupUIData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FGameplayTag)                              GroupTag                                                    OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FText)                                     DisplayName                                                 OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	CMember(TWeakObjectPtr<UObject*>)                  OptionalIcon                                                OFFSET(get<T>, {0x20, 32, 0, 0})
};

/// Struct /Script/JunoUI.JunoInventoryGroupUIDataList
/// Size: 0x0010 (0x000000 - 0x000010)
class FJunoInventoryGroupUIDataList : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FJunoInventoryGroupUIData>)         GroupDataList                                               OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/JunoUI.JunoItemSpawnerListEntries
/// Size: 0x0010 (0x000000 - 0x000010)
class FJunoItemSpawnerListEntries : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<class UJunoItemSpawnerListEntry*>)  ListEntries                                                 OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/JunoUI.JunoItemSpawnerItemTagOrder
/// Size: 0x0010 (0x000000 - 0x000010)
class FJunoItemSpawnerItemTagOrder : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FGameplayTag>)                      ItemTags                                                    OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/JunoUI.JunoModalSceneOperation
/// Size: 0x0010 (0x000000 - 0x000010)
class FJunoModalSceneOperation : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class UDynamicUIScene*)                    ModalScene                                                  OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class UObject*)                            Payload                                                     OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/JunoUI.JunoModalSelectionChoice
/// Size: 0x0038 (0x000000 - 0x000038)
class FJunoModalSelectionChoice : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FText)                                     SelectionTitle                                              OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FDataTableRowHandle)                       Action                                                      OFFSET(getStruct<T>, {0x18, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  SelectionDelegate                                           OFFSET(getStruct<T>, {0x28, 16, 0, 0})
};

/// Struct /Script/JunoUI.JunoQuickBuildSlotData
/// Size: 0x0038 (0x000000 - 0x000038)
class FJunoQuickBuildSlotData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TWeakObjectPtr<UTexture2D*>)               Icon                                                        OFFSET(get<T>, {0x0, 32, 0, 0})
	SMember(FText)                                     DisplayName                                                 OFFSET(getStruct<T>, {0x20, 24, 0, 0})
};

/// Struct /Script/JunoUI.CountUnviewedRecipesInCategoryArgs
/// Size: 0x0020 (0x000000 - 0x000020)
class FCountUnviewedRecipesInCategoryArgs : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(class AFortPlayerController*)              PlayerController                                            OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class AActor*)                             CraftingObject                                              OFFSET(get<T>, {0x8, 8, 0, 0})
	SMember(FGameplayTag)                              CategoryTag                                                 OFFSET(getStruct<T>, {0x10, 4, 0, 0})
	SMember(FGameplayTag)                              SubCategoryTag                                              OFFSET(getStruct<T>, {0x14, 4, 0, 0})
	DMember(bool)                                      bOnlyKnownRecipes                                           OFFSET(get<bool>, {0x18, 1, 0, 0})
	DMember(bool)                                      bCountUnacquiredRecipes                                     OFFSET(get<bool>, {0x19, 1, 0, 0})
};

/// Struct /Script/JunoUI.JunoNPCStateUIData
/// Size: 0x0048 (0x000000 - 0x000048)
class FJunoNPCStateUIData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	DMember(int32_t)                                   Priority                                                    OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	CMember(TWeakObjectPtr<UObject*>)                  PrimaryIcon                                                 OFFSET(get<T>, {0x8, 32, 0, 0})
	CMember(TWeakObjectPtr<UObject*>)                  SecondaryIcon                                               OFFSET(get<T>, {0x28, 32, 0, 0})
};

/// Struct /Script/JunoUI.JunoVillageRewardEntryInfo
/// Size: 0x0080 (0x000000 - 0x000080)
class FJunoVillageRewardEntryInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	DMember(int32_t)                                   AwesomeLevel                                                OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	SMember(FAwesomePerkReward)                        AwesomePerkReward                                           OFFSET(getStruct<T>, {0x8, 80, 0, 0})
	DMember(int32_t)                                   NewVillagerSlotCount                                        OFFSET(get<int32_t>, {0x58, 4, 0, 0})
	CMember(TArray<class UJunoKnowledgeBundle*>)       KnowledgeBundles                                            OFFSET(get<T>, {0x60, 16, 0, 0})
	DMember(int32_t)                                   ButtonIndex                                                 OFFSET(get<int32_t>, {0x70, 4, 0, 0})
	DMember(int32_t)                                   IndexWithinGroup                                            OFFSET(get<int32_t>, {0x74, 4, 0, 0})
	DMember(int32_t)                                   ButtonsWithinGroup                                          OFFSET(get<int32_t>, {0x78, 4, 0, 0})
};

/// Struct /Script/JunoUI.JunoFreeBuildCategoryUIDataEntry
/// Size: 0x0058 (0x000000 - 0x000058)
class FJunoFreeBuildCategoryUIDataEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FGameplayTag)                              CategoryTag                                                 OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(TWeakObjectPtr<UTexture2D*>)               CategoryIcon                                                OFFSET(get<T>, {0x8, 32, 0, 0})
	SMember(FText)                                     CategoryTitle                                               OFFSET(getStruct<T>, {0x28, 24, 0, 0})
	SMember(FText)                                     CategoryDescription                                         OFFSET(getStruct<T>, {0x40, 24, 0, 0})
};

/// Struct /Script/JunoUI.JunoFreeBuildSubCategoryUIDataEntry
/// Size: 0x0020 (0x000000 - 0x000020)
class FJunoFreeBuildSubCategoryUIDataEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FGameplayTag)                              SubCategoryTag                                              OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FText)                                     SubCategoryTitle                                            OFFSET(getStruct<T>, {0x8, 24, 0, 0})
};

/// Struct /Script/JunoUI.GridListViewInfo
/// Size: 0x0030 (0x000000 - 0x000030)
class FGridListViewInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(class UClass*)                             UserWidgetClass                                             OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FGridListSlotInfo)                         GridListSlotInfo                                            OFFSET(getStruct<T>, {0x8, 36, 0, 0})
};

/// Struct /Script/JunoUI.GridListSlotInfo
/// Size: 0x0024 (0x000000 - 0x000024)
class FGridListSlotInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 36;

public:
	SMember(FName)                                     SlotType                                                    OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(float)                                     Height                                                      OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     Width                                                       OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   ItemsPerRow                                                 OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	SMember(FMargin)                                   ItemPadding                                                 OFFSET(getStruct<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/JunoUI.JunoCraftingStationUIDataEntry
/// Size: 0x00F0 (0x000000 - 0x0000F0)
class FJunoCraftingStationUIDataEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	SMember(FGameplayTag)                              SourceTag                                                   OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   CraftingObjectRef                                           OFFSET(get<T>, {0x8, 32, 0, 0})
	SMember(FSlateBrush)                               CraftStationIcon                                            OFFSET(getStruct<T>, {0x30, 192, 0, 0})
};

/// Struct /Script/JunoUI.GridListSlotInfoContainer
/// Size: 0x0010 (0x000000 - 0x000010)
class FGridListSlotInfoContainer : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FGridListSlotInfo>)                 GridListInfo                                                OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/JunoUI.JunoModalDescription
/// Size: 0x0088 (0x000000 - 0x000088)
class FJunoModalDescription : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	CMember(class UDynamicUIScene*)                    ModalScene                                                  OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FText)                                     Title                                                       OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	SMember(FText)                                     Description                                                 OFFSET(getStruct<T>, {0x20, 24, 0, 0})
	SMember(FText)                                     ConfirmButtonText                                           OFFSET(getStruct<T>, {0x38, 24, 0, 0})
	SMember(FText)                                     CancelButtonText                                            OFFSET(getStruct<T>, {0x50, 24, 0, 0})
	SMember(FDataTableRowHandle)                       ConfirmAction                                               OFFSET(getStruct<T>, {0x68, 16, 0, 0})
	SMember(FDataTableRowHandle)                       CancelAction                                                OFFSET(getStruct<T>, {0x78, 16, 0, 0})
};

/// Struct /Script/JunoUI.JunoMapMarkerEntryInitData
/// Size: 0x0038 (0x000000 - 0x000038)
class FJunoMapMarkerEntryInitData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(EJunoMapMarkerCustomizationEntryType)      WidgetEntryType                                             OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(TWeakObjectPtr<UTexture*>)                 EntryIcon                                                   OFFSET(get<T>, {0x8, 32, 0, 0})
	SMember(FLinearColor)                              EntryColor                                                  OFFSET(getStruct<T>, {0x28, 16, 0, 0})
};

/// Struct /Script/JunoUI.JunoVillageUIData
/// Size: 0x0138 (0x000000 - 0x000138)
class FJunoVillageUIData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 312;

public:
	SMember(FText)                                     POIName                                                     OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FJunoMarker)                               Marker                                                      OFFSET(getStruct<T>, {0x18, 152, 0, 0})
	CMember(EJunoBiome)                                BiomeType                                                   OFFSET(get<T>, {0xB0, 1, 0, 0})
	DMember(int32_t)                                   AwesomeLevel                                                OFFSET(get<int32_t>, {0xB4, 4, 0, 0})
	DMember(int32_t)                                   MaxAwesomeLevel                                             OFFSET(get<int32_t>, {0xB8, 4, 0, 0})
	DMember(int32_t)                                   AwesomePoints                                               OFFSET(get<int32_t>, {0xBC, 4, 0, 0})
	DMember(int32_t)                                   AwesomePointGoal                                            OFFSET(get<int32_t>, {0xC0, 4, 0, 0})
	DMember(int32_t)                                   AwesomePointFloor                                           OFFSET(get<int32_t>, {0xC4, 4, 0, 0})
	DMember(int32_t)                                   AwesomePointsNeededForNextLevel                             OFFSET(get<int32_t>, {0xC8, 4, 0, 0})
	DMember(float)                                     AwesomeProgressToNextLevel                                  OFFSET(get<float>, {0xCC, 4, 0, 0})
	DMember(float)                                     AwesomeEffectiveProgressToNextLevel                         OFFSET(get<float>, {0xD0, 4, 0, 0})
	DMember(int32_t)                                   AwesomeLevelFromCurrentPoints                               OFFSET(get<int32_t>, {0xD4, 4, 0, 0})
	CMember(TArray<FAwesomeLevelRewardEntry>)          AwesomeLevelRewardEntries                                   OFFSET(get<T>, {0xD8, 16, 0, 0})
	SMember(FJunoAwesomeUpgradeResourceCostList)       CurrentUpgradeResourceCosts                                 OFFSET(getStruct<T>, {0xE8, 16, 0, 0})
	CMember(TArray<FAwesomePerkReward>)                UnlockedPlayerPerks                                         OFFSET(get<T>, {0xF8, 16, 0, 0})
	CMember(TArray<FActiveCampNPCEntry>)               ActiveNPCEntries                                            OFFSET(get<T>, {0x108, 16, 0, 0})
	DMember(int32_t)                                   MaxNPCs                                                     OFFSET(get<int32_t>, {0x118, 4, 0, 0})
	CMember(TArray<TWeakObjectPtr<UJunoKnowledgeBundle*>>) KnowledgeBundles                                        OFFSET(get<T>, {0x120, 16, 0, 0})
	CMember(class UFortItemDefinition*)                VillageCenterItemDefinition                                 OFFSET(get<T>, {0x130, 8, 0, 0})
};

/// Struct /Script/JunoUI.JunoHUDShowVillageUpgradeCelebrationEvent
/// Size: 0x0020 (0x000000 - 0x000020)
class FJunoHUDShowVillageUpgradeCelebrationEvent : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FText)                                     VillageName                                                 OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	CMember(EJunoBiome)                                Biome                                                       OFFSET(get<T>, {0x18, 1, 0, 0})
	DMember(int32_t)                                   NewLevel                                                    OFFSET(get<int32_t>, {0x1C, 4, 0, 0})
};

/// Struct /Script/JunoUI.JunoNotificationData
/// Size: 0x0050 (0x000000 - 0x000050)
class FJunoNotificationData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FGameplayTag)                              NotificationType                                            OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(TArray<class UItemDefinitionBase*>)        ItemDefinitions                                             OFFSET(get<T>, {0x8, 16, 0, 0})
	SMember(FGameplayTagContainer)                     AdditionalTags                                              OFFSET(getStruct<T>, {0x18, 32, 0, 0})
	SMember(FString)                                   PlayerName                                                  OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	CMember(class UObject*)                            InitObject                                                  OFFSET(get<T>, {0x48, 8, 0, 0})
};

/// Struct /Script/JunoUI.JunoNotificationEvent
/// Size: 0x0030 (0x000000 - 0x000030)
class FJunoNotificationEvent : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FGameplayTag)                              tag                                                         OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   NotificationSoftClass                                       OFFSET(get<T>, {0x8, 32, 0, 0})
	CMember(class UObject*)                            InitObject                                                  OFFSET(get<T>, {0x28, 8, 0, 0})
};

/// Struct /Script/JunoUI.JunoPlayerIndicatorData
/// Size: 0x0048 (0x000000 - 0x000048)
class FJunoPlayerIndicatorData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FString)                                   PlayerName                                                  OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	DMember(bool)                                      bIsAlive                                                    OFFSET(get<bool>, {0x10, 1, 0, 0})
	SMember(FUniqueNetIdRepl)                          UniqueNetId                                                 OFFSET(getStruct<T>, {0x18, 48, 0, 0})
};

/// Struct /Script/JunoUI.JunoWidgetSceneAndIndex
/// Size: 0x0010 (0x000000 - 0x000010)
class FJunoWidgetSceneAndIndex : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class UDynamicUIScene*)                    WidgetScene                                                 OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(int32_t)                                   WidgetAllowedIndex                                          OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(bool)                                      bRemoveOnDeath                                              OFFSET(get<bool>, {0xC, 1, 0, 0})
};

/// Enum /Script/JunoUI.EBlockedDirection
/// Size: 0x05
enum class EBlockedDirection : uint8_t
{
	EBlockedDirection__Top                                                           = 0,
	EBlockedDirection__Right                                                         = 1,
	EBlockedDirection__Bottom                                                        = 2,
	EBlockedDirection__Left                                                          = 3,
	EBlockedDirection__EBlockedDirection_MAX                                         = 4
};

/// Enum /Script/JunoUI.EJunoBangVisibility
/// Size: 0x04
enum class EJunoBangVisibility : uint8_t
{
	EJunoBangVisibility__Hidden                                                      = 0,
	EJunoBangVisibility__UnviewedBang                                                = 1,
	EJunoBangVisibility__UnacquiredBang                                              = 2,
	EJunoBangVisibility__EJunoBangVisibility_MAX                                     = 3
};

/// Enum /Script/JunoUI.EBuildingLimitationState
/// Size: 0x05
enum class EBuildingLimitationState : uint8_t
{
	EBuildingLimitationState__WithinLimits                                           = 0,
	EBuildingLimitationState__ThresholdCrossed                                       = 1,
	EBuildingLimitationState__NearingMaxOut                                          = 2,
	EBuildingLimitationState__MaxedOut                                               = 3,
	EBuildingLimitationState__EBuildingLimitationState_MAX                           = 4
};

/// Enum /Script/JunoUI.EDisassemblingStationInventoryState
/// Size: 0x04
enum class EDisassemblingStationInventoryState : uint8_t
{
	EDisassemblingStationInventoryState__CanCraft                                    = 0,
	EDisassemblingStationInventoryState__InputIsEmpty                                = 1,
	EDisassemblingStationInventoryState__OutputFull                                  = 2,
	EDisassemblingStationInventoryState__EDisassemblingStationInventoryState_MAX     = 3
};

/// Enum /Script/JunoUI.EJunoEnchantmentScreenState
/// Size: 0x04
enum class EJunoEnchantmentScreenState : uint8_t
{
	EJunoEnchantmentScreenState__WeaponSelection                                     = 0,
	EJunoEnchantmentScreenState__EnchantmentSelection                                = 1,
	EJunoEnchantmentScreenState__Count                                               = 2,
	EJunoEnchantmentScreenState__EJunoEnchantmentScreenState_MAX                     = 3
};

/// Enum /Script/JunoUI.EJunoEnchantButtonState
/// Size: 0x06
enum class EJunoEnchantButtonState : uint8_t
{
	EJunoEnchantButtonState__CanEnchant                                              = 0,
	EJunoEnchantButtonState__NotEnoughResources                                      = 1,
	EJunoEnchantButtonState__NoAvailableEnchantments                                 = 2,
	EJunoEnchantButtonState__SlotsFull                                               = 3,
	EJunoEnchantButtonState__CanCancelEnchant                                        = 4,
	EJunoEnchantButtonState__EJunoEnchantButtonState_MAX                             = 5
};

/// Enum /Script/JunoUI.EJunoEnchantmentState
/// Size: 0x05
enum class EJunoEnchantmentState : uint8_t
{
	EJunoEnchantmentState__Empty                                                     = 0,
	EJunoEnchantmentState__Occupied                                                  = 1,
	EJunoEnchantmentState__Preview                                                   = 2,
	EJunoEnchantmentState__Updated                                                   = 3,
	EJunoEnchantmentState__EJunoEnchantmentState_MAX                                 = 4
};

/// Enum /Script/JunoUI.EJunoHudMenuScreen
/// Size: 0x06
enum class EJunoHudMenuScreen : uint8_t
{
	EJunoHudMenuScreen__InventoryScreen                                              = 0,
	EJunoHudMenuScreen__CraftingScreen                                               = 1,
	EJunoHudMenuScreen__CollectionScreen                                             = 2,
	EJunoHudMenuScreen__BuildingScreen                                               = 3,
	EJunoHudMenuScreen__Max_None                                                     = 4,
	EJunoHudMenuScreen__EJunoHudMenuScreen_MAX                                       = 5
};

/// Enum /Script/JunoUI.EJunoSwapItemType
/// Size: 0x06
enum class EJunoSwapItemType : uint8_t
{
	EJunoSwapItemType__None                                                          = 0,
	EJunoSwapItemType__Source                                                        = 1,
	EJunoSwapItemType__SelectedDestination                                           = 2,
	EJunoSwapItemType__PotentialDestination                                          = 3,
	EJunoSwapItemType__GearDestinationInvalid                                        = 4,
	EJunoSwapItemType__EJunoSwapItemType_MAX                                         = 5
};

/// Enum /Script/JunoUI.EJunoBedAssignmentActionType
/// Size: 0x05
enum class EJunoBedAssignmentActionType : uint8_t
{
	EJunoBedAssignmentActionType__None                                               = 0,
	EJunoBedAssignmentActionType__AssignEmpty                                        = 1,
	EJunoBedAssignmentActionType__ReassignExisting                                   = 2,
	EJunoBedAssignmentActionType__UnassignExisting                                   = 3,
	EJunoBedAssignmentActionType__EJunoBedAssignmentActionType_MAX                   = 4
};

/// Enum /Script/JunoUI.EJunoCraftButtonState
/// Size: 0x04
enum class EJunoCraftButtonState : uint8_t
{
	EJunoCraftButtonState__CanCraft                                                  = 0,
	EJunoCraftButtonState__CannotCraft                                               = 1,
	EJunoCraftButtonState__StopCraft                                                 = 2,
	EJunoCraftButtonState__EJunoCraftButtonState_MAX                                 = 3
};

/// Enum /Script/JunoUI.ESelectRecipeButtonState
/// Size: 0x04
enum class ESelectRecipeButtonState : uint8_t
{
	ESelectRecipeButtonState__SelectRecipeHeroState                                  = 0,
	ESelectRecipeButtonState__SelectRecipeCommonState                                = 1,
	ESelectRecipeButtonState__DepositState                                           = 2,
	ESelectRecipeButtonState__ESelectRecipeButtonState_MAX                           = 3
};

/// Enum /Script/JunoUI.ECraftingStationsInventoryState
/// Size: 0x04
enum class ECraftingStationsInventoryState : uint8_t
{
	ECraftingStationsInventoryState__CanCraft                                        = 0,
	ECraftingStationsInventoryState__MissingIngredients                              = 1,
	ECraftingStationsInventoryState__OutputFull                                      = 2,
	ECraftingStationsInventoryState__ECraftingStationsInventoryState_MAX             = 3
};

/// Enum /Script/JunoUI.EJunoInventoryModalOperation
/// Size: 0x04
enum class EJunoInventoryModalOperation : uint8_t
{
	EJunoInventoryModalOperation__None                                               = 0,
	EJunoInventoryModalOperation__MoveAll                                            = 1,
	EJunoInventoryModalOperation__MergeAll                                           = 2,
	EJunoInventoryModalOperation__EJunoInventoryModalOperation_MAX                   = 3
};

/// Enum /Script/JunoUI.EJunoMapMarkerCustomizationEntryType
/// Size: 0x03
enum class EJunoMapMarkerCustomizationEntryType : uint8_t
{
	EJunoMapMarkerCustomizationEntryType__Icon                                       = 0,
	EJunoMapMarkerCustomizationEntryType__Color                                      = 1,
	EJunoMapMarkerCustomizationEntryType__EJunoMapMarkerCustomizationEntryType_MAX   = 2
};

/// Enum /Script/JunoUI.EJunoPickupStreamAnim
/// Size: 0x04
enum class EJunoPickupStreamAnim : uint8_t
{
	EJunoPickupStreamAnim__None                                                      = 0,
	EJunoPickupStreamAnim__Intro                                                     = 1,
	EJunoPickupStreamAnim__Update                                                    = 2,
	EJunoPickupStreamAnim__EJunoPickupStreamAnim_MAX                                 = 3
};

/// Enum /Script/JunoUI.EJunoHealthBarType
/// Size: 0x03
enum class EJunoHealthBarType : uint8_t
{
	EJunoHealthBarType__Health                                                       = 0,
	EJunoHealthBarType__Overshield                                                   = 1,
	EJunoHealthBarType__EJunoHealthBarType_MAX                                       = 2
};

