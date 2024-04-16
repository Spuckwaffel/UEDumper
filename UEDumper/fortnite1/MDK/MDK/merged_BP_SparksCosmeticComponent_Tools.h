
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CommonUI
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: GameplayEventRouter
/// dependency: GameplayTags
/// dependency: ModularGameplay
/// dependency: SparksCoreRuntime
/// dependency: SparksCosmeticsRuntime
/// dependency: UI
/// dependency: UMG

/// Class /SparksCosmetics/BP_SparksCosmeticComponent.BP_SparksCosmeticComponent_C
/// Size: 0x0018 (0x000460 - 0x000478)
class UBP_SparksCosmeticComponent_C : public USparksCosmeticComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1144;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x460, 8, 0, 0})
	CMember(class UGameplayEventRouterComponent*)      Event_Router                                                OFFSET(get<T>, {0x468, 8, 0, 0})
	CMember(class UWBP_Sparks_Dbg_CosmeticPicker_C*)   DebugWidget                                                 OFFSET(get<T>, {0x470, 8, 0, 0})


	/// Functions
	// Function /SparksCosmetics/BP_SparksCosmeticComponent.BP_SparksCosmeticComponent_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x246f7d8] Event|Public|BlueprintEvent 
	// Function /SparksCosmetics/BP_SparksCosmeticComponent.BP_SparksCosmeticComponent_C.Debug_BP_ShowCosmeticPicker
	// void Debug_BP_ShowCosmeticPicker(bool bShow);                                                                            // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /SparksCosmetics/BP_SparksCosmeticComponent.BP_SparksCosmeticComponent_C.ExecuteUbergraph_BP_SparksCosmeticComponent
	// void ExecuteUbergraph_BP_SparksCosmeticComponent(int32_t EntryPoint);                                                    // [0x246f7d8] Final                
};

/// Class /Game/Tools/Turntable_2/SunDirectionandColorSet.SunDirectionandColorSet_C
/// Size: 0x0028 (0x000290 - 0x0002B8)
class ASunDirectionandColorSet_C : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 696;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x290, 8, 0, 0})
	CMember(class USceneComponent*)                    Scene                                                       OFFSET(get<T>, {0x298, 8, 0, 0})
	CMember(class UArrowComponent*)                    Arrow                                                       OFFSET(get<T>, {0x2A0, 8, 0, 0})
	SMember(FLinearColor)                              SunLightColor                                               OFFSET(getStruct<T>, {0x2A8, 16, 0, 0})


	/// Functions
	// Function /Game/Tools/Turntable_2/SunDirectionandColorSet.SunDirectionandColorSet_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x246f7d8] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Tools/Turntable_2/SunDirectionandColorSet.SunDirectionandColorSet_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Game/Tools/Turntable_2/SunDirectionandColorSet.SunDirectionandColorSet_C.ReceiveTick
	// void ReceiveTick(float DeltaSeconds);                                                                                    // [0x246f7d8] Event|Public|BlueprintEvent 
	// Function /Game/Tools/Turntable_2/SunDirectionandColorSet.SunDirectionandColorSet_C.ExecuteUbergraph_SunDirectionandColorSet
	// void ExecuteUbergraph_SunDirectionandColorSet(int32_t EntryPoint);                                                       // [0x246f7d8] Final                
};

/// Class /SparksCosmetics/Tools/WBP_Sparks_Dbg_CosmeticPicker.WBP_Sparks_Dbg_CosmeticPicker_C
/// Size: 0x0060 (0x0002C8 - 0x000328)
class UWBP_Sparks_Dbg_CosmeticPicker_C : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 808;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x2C8, 8, 0, 0})
	CMember(class UIconTextButton_C*)                  btn_Defaults                                                OFFSET(get<T>, {0x2D0, 8, 0, 0})
	CMember(class UIconTextButton_C*)                  btn_Reload                                                  OFFSET(get<T>, {0x2D8, 8, 0, 0})
	CMember(class UIconTextButton_C*)                  btn_Save                                                    OFFSET(get<T>, {0x2E0, 8, 0, 0})
	CMember(class UCheckBox*)                          chk_Collapse                                                OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(class UImage*)                             Image                                                       OFFSET(get<T>, {0x2F0, 8, 0, 0})
	CMember(class UImage*)                             Image1                                                      OFFSET(get<T>, {0x2F8, 8, 0, 0})
	CMember(class UVerticalBox*)                       vb_Items                                                    OFFSET(get<T>, {0x300, 8, 0, 0})
	CMember(class UBP_SparksCosmeticComponent_C*)      CosmeticComponent                                           OFFSET(get<T>, {0x308, 8, 0, 0})
	CMember(class UWBP_Sparks_Dbg_CosmeticItem_C*)     AuraWidget                                                  OFFSET(get<T>, {0x310, 8, 0, 0})
	CMember(class UWBP_Sparks_Dbg_Cosmetic_Group_C*)   InstrumentWidget                                            OFFSET(get<T>, {0x318, 8, 0, 0})
	CMember(class UWBP_Sparks_Dbg_Cosmetic_Group_C*)   SpotlightWidget                                             OFFSET(get<T>, {0x320, 8, 0, 0})


	/// Functions
	// Function /SparksCosmetics/Tools/WBP_Sparks_Dbg_CosmeticPicker.WBP_Sparks_Dbg_CosmeticPicker_C.GetChoice
	// void GetChoice(ESparksAccountItemSubtype Item Subtype, ESparksInstrumentType Instrument type, FGameplayTag Variant Channel, FString& Choice); // [0x246f7d8] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /SparksCosmetics/Tools/WBP_Sparks_Dbg_CosmeticPicker.WBP_Sparks_Dbg_CosmeticPicker_C.OnCosmeticItemChanged
	// void OnCosmeticItemChanged(class USparksAccountItemDefinition* ItemDef);                                                 // [0x246f7d8] Public|BlueprintCallable|BlueprintEvent 
	// Function /SparksCosmetics/Tools/WBP_Sparks_Dbg_CosmeticPicker.WBP_Sparks_Dbg_CosmeticPicker_C.OnCosmeticChoiceChanged
	// void OnCosmeticChoiceChanged(ESparksAccountItemSubtype Subtype, ESparksInstrumentType InstrumentType);                   // [0x246f7d8] Public|BlueprintCallable|BlueprintEvent 
	// Function /SparksCosmetics/Tools/WBP_Sparks_Dbg_CosmeticPicker.WBP_Sparks_Dbg_CosmeticPicker_C.SetCosmeticComponent
	// void SetCosmeticComponent(class UBP_SparksCosmeticComponent_C* Component);                                               // [0x246f7d8] Public|BlueprintCallable|BlueprintEvent 
	// Function /SparksCosmetics/Tools/WBP_Sparks_Dbg_CosmeticPicker.WBP_Sparks_Dbg_CosmeticPicker_C.ReloadData
	// void ReloadData();                                                                                                       // [0x246f7d8] Public|BlueprintCallable|BlueprintEvent 
	// Function /SparksCosmetics/Tools/WBP_Sparks_Dbg_CosmeticPicker.WBP_Sparks_Dbg_CosmeticPicker_C.Construct
	// void Construct();                                                                                                        // [0x246f7d8] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /SparksCosmetics/Tools/WBP_Sparks_Dbg_CosmeticPicker.WBP_Sparks_Dbg_CosmeticPicker_C.BndEvt__WBP_Sparks_CosmeticPicker_chk_Collapse_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature
	// void BndEvt__WBP_Sparks_CosmeticPicker_chk_Collapse_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked); // [0x246f7d8] BlueprintEvent       
	// Function /SparksCosmetics/Tools/WBP_Sparks_Dbg_CosmeticPicker.WBP_Sparks_Dbg_CosmeticPicker_C.BndEvt__WBP_Sparks_CosmeticPicker_btn_Reload_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
	// void BndEvt__WBP_Sparks_CosmeticPicker_btn_Reload_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button); // [0x246f7d8] BlueprintEvent       
	// Function /SparksCosmetics/Tools/WBP_Sparks_Dbg_CosmeticPicker.WBP_Sparks_Dbg_CosmeticPicker_C.BndEvt__WBP_Sparks_Dbg_CosmeticPicker_btn_Defaults_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature
	// void BndEvt__WBP_Sparks_Dbg_CosmeticPicker_btn_Defaults_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button); // [0x246f7d8] BlueprintEvent       
	// Function /SparksCosmetics/Tools/WBP_Sparks_Dbg_CosmeticPicker.WBP_Sparks_Dbg_CosmeticPicker_C.BndEvt__WBP_Sparks_Dbg_CosmeticPicker_btn_Save_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature
	// void BndEvt__WBP_Sparks_Dbg_CosmeticPicker_btn_Save_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button); // [0x246f7d8] BlueprintEvent       
	// Function /SparksCosmetics/Tools/WBP_Sparks_Dbg_CosmeticPicker.WBP_Sparks_Dbg_CosmeticPicker_C.ExecuteUbergraph_WBP_Sparks_Dbg_CosmeticPicker
	// void ExecuteUbergraph_WBP_Sparks_Dbg_CosmeticPicker(int32_t EntryPoint);                                                 // [0x246f7d8] Final                
};

/// Class /SparksCosmetics/Tools/WBP_Sparks_Dbg_CosmeticItem.WBP_Sparks_Dbg_CosmeticItem_C
/// Size: 0x0040 (0x0002C8 - 0x000308)
class UWBP_Sparks_Dbg_CosmeticItem_C : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 776;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x2C8, 8, 0, 0})
	CMember(class UComboBoxString*)                    cb_ItemList                                                 OFFSET(get<T>, {0x2D0, 8, 0, 0})
	CMember(class UImage*)                             Image                                                       OFFSET(get<T>, {0x2D8, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   txt_Name                                                    OFFSET(get<T>, {0x2E0, 8, 0, 0})
	CMember(class UVerticalBox*)                       vb_Channels                                                 OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(class USparksAccountItemDefinition*)       AccountItem                                                 OFFSET(get<T>, {0x2F0, 8, 0, 0})
	CMember(ESparksAccountItemSubtype)                 Subtype                                                     OFFSET(get<T>, {0x2F8, 1, 0, 0})
	CMember(ESparksInstrumentType)                     Instrument                                                  OFFSET(get<T>, {0x2F9, 1, 0, 0})
	CMember(class UWBP_Sparks_Dbg_CosmeticPicker_C*)   ParentPicker                                                OFFSET(get<T>, {0x300, 8, 0, 0})


	/// Functions
	// Function /SparksCosmetics/Tools/WBP_Sparks_Dbg_CosmeticItem.WBP_Sparks_Dbg_CosmeticItem_C.RefreshChoices
	// void RefreshChoices();                                                                                                   // [0x246f7d8] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /SparksCosmetics/Tools/WBP_Sparks_Dbg_CosmeticItem.WBP_Sparks_Dbg_CosmeticItem_C.ChildSetChoice
	// void ChildSetChoice(FGameplayTag Channel, FString Choice);                                                               // [0x246f7d8] Public|BlueprintCallable|BlueprintEvent 
	// Function /SparksCosmetics/Tools/WBP_Sparks_Dbg_CosmeticItem.WBP_Sparks_Dbg_CosmeticItem_C.RefreshData
	// void RefreshData(TMap<FGameplayTag, FString> Choices);                                                                   // [0x246f7d8] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /SparksCosmetics/Tools/WBP_Sparks_Dbg_CosmeticItem.WBP_Sparks_Dbg_CosmeticItem_C.SetTypes
	// void SetTypes(ESparksAccountItemSubtype Subtype, ESparksInstrumentType Instrument);                                      // [0x246f7d8] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /SparksCosmetics/Tools/WBP_Sparks_Dbg_CosmeticItem.WBP_Sparks_Dbg_CosmeticItem_C.SetItemInfo
	// void SetItemInfo(class USparksAccountItemDefinition* Item);                                                              // [0x246f7d8] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /SparksCosmetics/Tools/WBP_Sparks_Dbg_CosmeticItem.WBP_Sparks_Dbg_CosmeticItem_C.BndEvt__WBP_Sparks_Dbg_CosmeticItem_cb_ItemList_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature
	// void BndEvt__WBP_Sparks_Dbg_CosmeticItem_cb_ItemList_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature(FString SelectedItem, TEnumAsByte<ESelectInfo> SelectionType); // [0x246f7d8] BlueprintEvent       
	// Function /SparksCosmetics/Tools/WBP_Sparks_Dbg_CosmeticItem.WBP_Sparks_Dbg_CosmeticItem_C.ExecuteUbergraph_WBP_Sparks_Dbg_CosmeticItem
	// void ExecuteUbergraph_WBP_Sparks_Dbg_CosmeticItem(int32_t EntryPoint);                                                   // [0x246f7d8] Final|HasDefaults    
};

/// Class /SparksCosmetics/Tools/WBP_Sparks_Dbg_Cosmetic_Group.WBP_Sparks_Dbg_Cosmetic_Group_C
/// Size: 0x0088 (0x0002C8 - 0x000350)
class UWBP_Sparks_Dbg_Cosmetic_Group_C : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 848;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x2C8, 8, 0, 0})
	CMember(class UCheckBox*)                          chk_Collapse                                                OFFSET(get<T>, {0x2D0, 8, 0, 0})
	CMember(class UImage*)                             Image                                                       OFFSET(get<T>, {0x2D8, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   txt_Title                                                   OFFSET(get<T>, {0x2E0, 8, 0, 0})
	CMember(class UVerticalBox*)                       vb_Items                                                    OFFSET(get<T>, {0x2E8, 8, 0, 0})
	DMember(bool)                                      Title                                                       OFFSET(get<bool>, {0x2F0, 1, 0, 0})
	CMember(ESparksAccountItemSubtype)                 Item_Type                                                   OFFSET(get<T>, {0x2F1, 1, 0, 0})
	CMember(class UWBP_Sparks_Dbg_CosmeticPicker_C*)   ParentPicker                                                OFFSET(get<T>, {0x2F8, 8, 0, 0})
	CMember(TMap<ESparksInstrumentType, UWBP_Sparks_Dbg_CosmeticItem_C*>) Items                                    OFFSET(get<T>, {0x300, 80, 0, 0})


	/// Functions
	// Function /SparksCosmetics/Tools/WBP_Sparks_Dbg_Cosmetic_Group.WBP_Sparks_Dbg_Cosmetic_Group_C.OnChoiceChanged
	// void OnChoiceChanged(ESparksInstrumentType Instrument);                                                                  // [0x246f7d8] Public|BlueprintCallable|BlueprintEvent 
	// Function /SparksCosmetics/Tools/WBP_Sparks_Dbg_Cosmetic_Group.WBP_Sparks_Dbg_Cosmetic_Group_C.SetItemInfo
	// void SetItemInfo(class USparksAccountItemDefinition* NewItem);                                                           // [0x246f7d8] Public|BlueprintCallable|BlueprintEvent 
	// Function /SparksCosmetics/Tools/WBP_Sparks_Dbg_Cosmetic_Group.WBP_Sparks_Dbg_Cosmetic_Group_C.RefreshAll
	// void RefreshAll();                                                                                                       // [0x246f7d8] Public|BlueprintCallable|BlueprintEvent 
	// Function /SparksCosmetics/Tools/WBP_Sparks_Dbg_Cosmetic_Group.WBP_Sparks_Dbg_Cosmetic_Group_C.SetGroupSubtype
	// void SetGroupSubtype(ESparksAccountItemSubtype ItemType);                                                                // [0x246f7d8] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /SparksCosmetics/Tools/WBP_Sparks_Dbg_Cosmetic_Group.WBP_Sparks_Dbg_Cosmetic_Group_C.BndEvt__WBP_Sparks_Dbg_Cosmetic_Group_chk_Collapse_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature
	// void BndEvt__WBP_Sparks_Dbg_Cosmetic_Group_chk_Collapse_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked); // [0x246f7d8] BlueprintEvent       
	// Function /SparksCosmetics/Tools/WBP_Sparks_Dbg_Cosmetic_Group.WBP_Sparks_Dbg_Cosmetic_Group_C.ExecuteUbergraph_WBP_Sparks_Dbg_Cosmetic_Group
	// void ExecuteUbergraph_WBP_Sparks_Dbg_Cosmetic_Group(int32_t EntryPoint);                                                 // [0x246f7d8] Final                
};

/// Class /SparksCosmetics/Tools/WBP_Sparks_Dbg_VariantChannel.WBP_Sparks_Dbg_VariantChannel_C
/// Size: 0x002D (0x0002C8 - 0x0002F5)
class UWBP_Sparks_Dbg_VariantChannel_C : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 757;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x2C8, 8, 0, 0})
	CMember(class UComboBoxString*)                    cb_ItemList                                                 OFFSET(get<T>, {0x2D0, 8, 0, 0})
	CMember(class UImage*)                             Image                                                       OFFSET(get<T>, {0x2D8, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   txt_Name                                                    OFFSET(get<T>, {0x2E0, 8, 0, 0})
	CMember(class UWBP_Sparks_Dbg_CosmeticItem_C*)     ParentItem                                                  OFFSET(get<T>, {0x2E8, 8, 0, 0})
	SMember(FGameplayTag)                              ChannelTag                                                  OFFSET(getStruct<T>, {0x2F0, 4, 0, 0})
	DMember(bool)                                      SendUpdates                                                 OFFSET(get<bool>, {0x2F4, 1, 0, 0})


	/// Functions
	// Function /SparksCosmetics/Tools/WBP_Sparks_Dbg_VariantChannel.WBP_Sparks_Dbg_VariantChannel_C.ShouldSendUpdates
	// void ShouldSendUpdates(bool ShouldSend);                                                                                 // [0x246f7d8] Public|BlueprintCallable|BlueprintEvent 
	// Function /SparksCosmetics/Tools/WBP_Sparks_Dbg_VariantChannel.WBP_Sparks_Dbg_VariantChannel_C.SetSelection
	// void SetSelection(FString Choice);                                                                                       // [0x246f7d8] Public|BlueprintCallable|BlueprintEvent 
	// Function /SparksCosmetics/Tools/WBP_Sparks_Dbg_VariantChannel.WBP_Sparks_Dbg_VariantChannel_C.SetNameAndChannels
	// void SetNameAndChannels(FGameplayTag tag, FText Channel Name, TArray<FString>& Options);                                 // [0x246f7d8] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /SparksCosmetics/Tools/WBP_Sparks_Dbg_VariantChannel.WBP_Sparks_Dbg_VariantChannel_C.BndEvt__WBP_Sparks_Dbg_VariantChannel_cb_ItemList_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature
	// void BndEvt__WBP_Sparks_Dbg_VariantChannel_cb_ItemList_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature(FString SelectedItem, TEnumAsByte<ESelectInfo> SelectionType); // [0x246f7d8] BlueprintEvent       
	// Function /SparksCosmetics/Tools/WBP_Sparks_Dbg_VariantChannel.WBP_Sparks_Dbg_VariantChannel_C.ExecuteUbergraph_WBP_Sparks_Dbg_VariantChannel
	// void ExecuteUbergraph_WBP_Sparks_Dbg_VariantChannel(int32_t EntryPoint);                                                 // [0x246f7d8] Final                
};

