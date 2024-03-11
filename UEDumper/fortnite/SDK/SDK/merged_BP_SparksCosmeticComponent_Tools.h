
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
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
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0460   (0x0008)  
	class UGameplayEventRouterComponent*               Event_Router;                                               // 0x0468   (0x0008)  
	class UWBP_Sparks_Dbg_CosmeticPicker_C*            DebugWidget;                                                // 0x0470   (0x0008)  


	/// Functions
	// Function /SparksCosmetics/BP_SparksCosmeticComponent.BP_SparksCosmeticComponent_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                              // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /SparksCosmetics/BP_SparksCosmeticComponent.BP_SparksCosmeticComponent_C.Debug_BP_ShowCosmeticPicker
	// void Debug_BP_ShowCosmeticPicker(bool bShow);                                                                         // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /SparksCosmetics/BP_SparksCosmeticComponent.BP_SparksCosmeticComponent_C.ExecuteUbergraph_BP_SparksCosmeticComponent
	// void ExecuteUbergraph_BP_SparksCosmeticComponent(int32_t EntryPoint);                                                 // [0x18a39e4] Final                
};

/// Class /Game/Tools/Turntable_2/SunDirectionandColorSet.SunDirectionandColorSet_C
/// Size: 0x0028 (0x000290 - 0x0002B8)
class ASunDirectionandColorSet_C : public AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0290   (0x0008)  
	class USceneComponent*                             Scene;                                                      // 0x0298   (0x0008)  
	class UArrowComponent*                             Arrow;                                                      // 0x02A0   (0x0008)  
	FLinearColor                                       SunLightColor;                                              // 0x02A8   (0x0010)  


	/// Functions
	// Function /Game/Tools/Turntable_2/SunDirectionandColorSet.SunDirectionandColorSet_C.UserConstructionScript
	// void UserConstructionScript();                                                                                        // [0x18a39e4] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Tools/Turntable_2/SunDirectionandColorSet.SunDirectionandColorSet_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                              // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Game/Tools/Turntable_2/SunDirectionandColorSet.SunDirectionandColorSet_C.ReceiveTick
	// void ReceiveTick(float DeltaSeconds);                                                                                 // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Game/Tools/Turntable_2/SunDirectionandColorSet.SunDirectionandColorSet_C.ExecuteUbergraph_SunDirectionandColorSet
	// void ExecuteUbergraph_SunDirectionandColorSet(int32_t EntryPoint);                                                    // [0x18a39e4] Final                
};

/// Class /SparksCosmetics/Tools/WBP_Sparks_Dbg_CosmeticPicker.WBP_Sparks_Dbg_CosmeticPicker_C
/// Size: 0x0060 (0x0002C0 - 0x000320)
class UWBP_Sparks_Dbg_CosmeticPicker_C : public UUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02C0   (0x0008)  
	class UIconTextButton_C*                           btn_Defaults;                                               // 0x02C8   (0x0008)  
	class UIconTextButton_C*                           btn_Reload;                                                 // 0x02D0   (0x0008)  
	class UIconTextButton_C*                           btn_Save;                                                   // 0x02D8   (0x0008)  
	class UCheckBox*                                   chk_Collapse;                                               // 0x02E0   (0x0008)  
	class UImage*                                      Image;                                                      // 0x02E8   (0x0008)  
	class UImage*                                      Image0;                                                     // 0x02F0   (0x0008)  
	class UVerticalBox*                                vb_Items;                                                   // 0x02F8   (0x0008)  
	class UBP_SparksCosmeticComponent_C*               CosmeticComponent;                                          // 0x0300   (0x0008)  
	class UWBP_Sparks_Dbg_CosmeticItem_C*              AuraWidget;                                                 // 0x0308   (0x0008)  
	class UWBP_Sparks_Dbg_Cosmetic_Group_C*            InstrumentWidget;                                           // 0x0310   (0x0008)  
	class UWBP_Sparks_Dbg_Cosmetic_Group_C*            SpotlightWidget;                                            // 0x0318   (0x0008)  


	/// Functions
	// Function /SparksCosmetics/Tools/WBP_Sparks_Dbg_CosmeticPicker.WBP_Sparks_Dbg_CosmeticPicker_C.GetChoice
	// void GetChoice(ESparksAccountItemSubtype Item Subtype, ESparksInstrumentType Instrument type, FGameplayTag Variant Channel, FString& Choice); // [0x18a39e4] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /SparksCosmetics/Tools/WBP_Sparks_Dbg_CosmeticPicker.WBP_Sparks_Dbg_CosmeticPicker_C.OnCosmeticItemChanged
	// void OnCosmeticItemChanged(class USparksAccountItemDefinition* ItemDef);                                              // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /SparksCosmetics/Tools/WBP_Sparks_Dbg_CosmeticPicker.WBP_Sparks_Dbg_CosmeticPicker_C.OnCosmeticChoiceChanged
	// void OnCosmeticChoiceChanged(ESparksAccountItemSubtype Subtype, ESparksInstrumentType InstrumentType);                // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /SparksCosmetics/Tools/WBP_Sparks_Dbg_CosmeticPicker.WBP_Sparks_Dbg_CosmeticPicker_C.SetCosmeticComponent
	// void SetCosmeticComponent(class UBP_SparksCosmeticComponent_C* Component);                                            // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /SparksCosmetics/Tools/WBP_Sparks_Dbg_CosmeticPicker.WBP_Sparks_Dbg_CosmeticPicker_C.ReloadData
	// void ReloadData();                                                                                                    // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /SparksCosmetics/Tools/WBP_Sparks_Dbg_CosmeticPicker.WBP_Sparks_Dbg_CosmeticPicker_C.Construct
	// void Construct();                                                                                                     // [0x18a39e4] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /SparksCosmetics/Tools/WBP_Sparks_Dbg_CosmeticPicker.WBP_Sparks_Dbg_CosmeticPicker_C.BndEvt__WBP_Sparks_CosmeticPicker_chk_Collapse_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature
	// void BndEvt__WBP_Sparks_CosmeticPicker_chk_Collapse_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked); // [0x18a39e4] BlueprintEvent       
	// Function /SparksCosmetics/Tools/WBP_Sparks_Dbg_CosmeticPicker.WBP_Sparks_Dbg_CosmeticPicker_C.BndEvt__WBP_Sparks_CosmeticPicker_btn_Reload_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
	// void BndEvt__WBP_Sparks_CosmeticPicker_btn_Reload_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button); // [0x18a39e4] BlueprintEvent       
	// Function /SparksCosmetics/Tools/WBP_Sparks_Dbg_CosmeticPicker.WBP_Sparks_Dbg_CosmeticPicker_C.BndEvt__WBP_Sparks_Dbg_CosmeticPicker_btn_Defaults_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature
	// void BndEvt__WBP_Sparks_Dbg_CosmeticPicker_btn_Defaults_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button); // [0x18a39e4] BlueprintEvent       
	// Function /SparksCosmetics/Tools/WBP_Sparks_Dbg_CosmeticPicker.WBP_Sparks_Dbg_CosmeticPicker_C.BndEvt__WBP_Sparks_Dbg_CosmeticPicker_btn_Save_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature
	// void BndEvt__WBP_Sparks_Dbg_CosmeticPicker_btn_Save_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button); // [0x18a39e4] BlueprintEvent       
	// Function /SparksCosmetics/Tools/WBP_Sparks_Dbg_CosmeticPicker.WBP_Sparks_Dbg_CosmeticPicker_C.ExecuteUbergraph_WBP_Sparks_Dbg_CosmeticPicker
	// void ExecuteUbergraph_WBP_Sparks_Dbg_CosmeticPicker(int32_t EntryPoint);                                              // [0x18a39e4] Final                
};

/// Class /SparksCosmetics/Tools/WBP_Sparks_Dbg_VariantChannel.WBP_Sparks_Dbg_VariantChannel_C
/// Size: 0x002D (0x0002C0 - 0x0002ED)
class UWBP_Sparks_Dbg_VariantChannel_C : public UUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02C0   (0x0008)  
	class UComboBoxString*                             cb_ItemList;                                                // 0x02C8   (0x0008)  
	class UImage*                                      Image;                                                      // 0x02D0   (0x0008)  
	class UCommonTextBlock*                            txt_Name;                                                   // 0x02D8   (0x0008)  
	class UWBP_Sparks_Dbg_CosmeticItem_C*              ParentItem;                                                 // 0x02E0   (0x0008)  
	FGameplayTag                                       ChannelTag;                                                 // 0x02E8   (0x0004)  
	bool                                               SendUpdates;                                                // 0x02EC   (0x0001)  


	/// Functions
	// Function /SparksCosmetics/Tools/WBP_Sparks_Dbg_VariantChannel.WBP_Sparks_Dbg_VariantChannel_C.ShouldSendUpdates
	// void ShouldSendUpdates(bool ShouldSend);                                                                              // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /SparksCosmetics/Tools/WBP_Sparks_Dbg_VariantChannel.WBP_Sparks_Dbg_VariantChannel_C.SetSelection
	// void SetSelection(FString Choice);                                                                                    // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /SparksCosmetics/Tools/WBP_Sparks_Dbg_VariantChannel.WBP_Sparks_Dbg_VariantChannel_C.SetNameAndChannels
	// void SetNameAndChannels(FGameplayTag tag, FText Channel Name, TArray<FString>& Options);                              // [0x18a39e4] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /SparksCosmetics/Tools/WBP_Sparks_Dbg_VariantChannel.WBP_Sparks_Dbg_VariantChannel_C.BndEvt__WBP_Sparks_Dbg_VariantChannel_cb_ItemList_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature
	// void BndEvt__WBP_Sparks_Dbg_VariantChannel_cb_ItemList_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature(FString SelectedItem, TEnumAsByte<ESelectInfo> SelectionType); // [0x18a39e4] BlueprintEvent       
	// Function /SparksCosmetics/Tools/WBP_Sparks_Dbg_VariantChannel.WBP_Sparks_Dbg_VariantChannel_C.ExecuteUbergraph_WBP_Sparks_Dbg_VariantChannel
	// void ExecuteUbergraph_WBP_Sparks_Dbg_VariantChannel(int32_t EntryPoint);                                              // [0x18a39e4] Final                
};

/// Class /SparksCosmetics/Tools/WBP_Sparks_Dbg_CosmeticItem.WBP_Sparks_Dbg_CosmeticItem_C
/// Size: 0x0040 (0x0002C0 - 0x000300)
class UWBP_Sparks_Dbg_CosmeticItem_C : public UUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02C0   (0x0008)  
	class UComboBoxString*                             cb_ItemList;                                                // 0x02C8   (0x0008)  
	class UImage*                                      Image;                                                      // 0x02D0   (0x0008)  
	class UCommonTextBlock*                            txt_Name;                                                   // 0x02D8   (0x0008)  
	class UVerticalBox*                                vb_Channels;                                                // 0x02E0   (0x0008)  
	class USparksAccountItemDefinition*                AccountItem;                                                // 0x02E8   (0x0008)  
	ESparksAccountItemSubtype                          Subtype;                                                    // 0x02F0   (0x0001)  
	ESparksInstrumentType                              Instrument;                                                 // 0x02F1   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x02F2   (0x0006)  MISSED
	class UWBP_Sparks_Dbg_CosmeticPicker_C*            ParentPicker;                                               // 0x02F8   (0x0008)  


	/// Functions
	// Function /SparksCosmetics/Tools/WBP_Sparks_Dbg_CosmeticItem.WBP_Sparks_Dbg_CosmeticItem_C.RefreshChoices
	// void RefreshChoices();                                                                                                // [0x18a39e4] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /SparksCosmetics/Tools/WBP_Sparks_Dbg_CosmeticItem.WBP_Sparks_Dbg_CosmeticItem_C.ChildSetChoice
	// void ChildSetChoice(FGameplayTag Channel, FString Choice);                                                            // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /SparksCosmetics/Tools/WBP_Sparks_Dbg_CosmeticItem.WBP_Sparks_Dbg_CosmeticItem_C.RefreshData
	// void RefreshData(TMap<FGameplayTag, FString> Choices);                                                                // [0x18a39e4] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /SparksCosmetics/Tools/WBP_Sparks_Dbg_CosmeticItem.WBP_Sparks_Dbg_CosmeticItem_C.SetTypes
	// void SetTypes(ESparksAccountItemSubtype Subtype, ESparksInstrumentType Instrument);                                   // [0x18a39e4] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /SparksCosmetics/Tools/WBP_Sparks_Dbg_CosmeticItem.WBP_Sparks_Dbg_CosmeticItem_C.SetItemInfo
	// void SetItemInfo(class USparksAccountItemDefinition* Item);                                                           // [0x18a39e4] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /SparksCosmetics/Tools/WBP_Sparks_Dbg_CosmeticItem.WBP_Sparks_Dbg_CosmeticItem_C.BndEvt__WBP_Sparks_Dbg_CosmeticItem_cb_ItemList_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature
	// void BndEvt__WBP_Sparks_Dbg_CosmeticItem_cb_ItemList_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature(FString SelectedItem, TEnumAsByte<ESelectInfo> SelectionType); // [0x18a39e4] BlueprintEvent       
	// Function /SparksCosmetics/Tools/WBP_Sparks_Dbg_CosmeticItem.WBP_Sparks_Dbg_CosmeticItem_C.ExecuteUbergraph_WBP_Sparks_Dbg_CosmeticItem
	// void ExecuteUbergraph_WBP_Sparks_Dbg_CosmeticItem(int32_t EntryPoint);                                                // [0x18a39e4] Final|HasDefaults    
};

/// Class /SparksCosmetics/Tools/WBP_Sparks_Dbg_Cosmetic_Group.WBP_Sparks_Dbg_Cosmetic_Group_C
/// Size: 0x0088 (0x0002C0 - 0x000348)
class UWBP_Sparks_Dbg_Cosmetic_Group_C : public UUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02C0   (0x0008)  
	class UCheckBox*                                   chk_Collapse;                                               // 0x02C8   (0x0008)  
	class UImage*                                      Image;                                                      // 0x02D0   (0x0008)  
	class UCommonTextBlock*                            txt_Title;                                                  // 0x02D8   (0x0008)  
	class UVerticalBox*                                vb_Items;                                                   // 0x02E0   (0x0008)  
	bool                                               Title;                                                      // 0x02E8   (0x0001)  
	ESparksAccountItemSubtype                          Item_Type;                                                  // 0x02E9   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x02EA   (0x0006)  MISSED
	class UWBP_Sparks_Dbg_CosmeticPicker_C*            ParentPicker;                                               // 0x02F0   (0x0008)  
	SDK_UNDEFINED(80,12365) /* TMap<ESparksInstrumentType, UWBP_Sparks_Dbg_CosmeticItem_C*> */ __um(Items);        // 0x02F8   (0x0050)  


	/// Functions
	// Function /SparksCosmetics/Tools/WBP_Sparks_Dbg_Cosmetic_Group.WBP_Sparks_Dbg_Cosmetic_Group_C.OnChoiceChanged
	// void OnChoiceChanged(ESparksInstrumentType Instrument);                                                               // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /SparksCosmetics/Tools/WBP_Sparks_Dbg_Cosmetic_Group.WBP_Sparks_Dbg_Cosmetic_Group_C.SetItemInfo
	// void SetItemInfo(class USparksAccountItemDefinition* NewItem);                                                        // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /SparksCosmetics/Tools/WBP_Sparks_Dbg_Cosmetic_Group.WBP_Sparks_Dbg_Cosmetic_Group_C.RefreshAll
	// void RefreshAll();                                                                                                    // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /SparksCosmetics/Tools/WBP_Sparks_Dbg_Cosmetic_Group.WBP_Sparks_Dbg_Cosmetic_Group_C.SetGroupSubtype
	// void SetGroupSubtype(ESparksAccountItemSubtype ItemType);                                                             // [0x18a39e4] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /SparksCosmetics/Tools/WBP_Sparks_Dbg_Cosmetic_Group.WBP_Sparks_Dbg_Cosmetic_Group_C.BndEvt__WBP_Sparks_Dbg_Cosmetic_Group_chk_Collapse_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature
	// void BndEvt__WBP_Sparks_Dbg_Cosmetic_Group_chk_Collapse_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked); // [0x18a39e4] BlueprintEvent       
	// Function /SparksCosmetics/Tools/WBP_Sparks_Dbg_Cosmetic_Group.WBP_Sparks_Dbg_Cosmetic_Group_C.ExecuteUbergraph_WBP_Sparks_Dbg_Cosmetic_Group
	// void ExecuteUbergraph_WBP_Sparks_Dbg_Cosmetic_Group(int32_t EntryPoint);                                              // [0x18a39e4] Final                
};

