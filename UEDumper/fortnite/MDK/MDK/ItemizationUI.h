
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CommonUI
/// dependency: CoreUObject
/// dependency: DynamicUI
/// dependency: Engine
/// dependency: UMG

/// Class /Script/ItemizationUI.GenericInventoryPanel
/// Size: 0x00E8 (0x000400 - 0x0004E8)
class UGenericInventoryPanel : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1256;

public:
	SMember(FMulticastInlineDelegate)                  OnDropItemInputDelegate                                     OFFSET(getStruct<T>, {0x400, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnDropAllInputDelegate                                      OFFSET(getStruct<T>, {0x410, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnDropStackInputDelegate                                    OFFSET(getStruct<T>, {0x420, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnDropHalfInputDelegate                                     OFFSET(getStruct<T>, {0x430, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnMakeItemActiveInputDelegate                               OFFSET(getStruct<T>, {0x440, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnMakeItemInactiveInputDelegate                             OFFSET(getStruct<T>, {0x450, 16, 0, 0})
	SMember(FDataTableRowHandle)                       BackInputRowHandle                                          OFFSET(getStruct<T>, {0x460, 16, 0, 0})
	SMember(FDataTableRowHandle)                       DropItemInputRowHandle                                      OFFSET(getStruct<T>, {0x470, 16, 0, 0})
	SMember(FDataTableRowHandle)                       DropAllInputRowHandle                                       OFFSET(getStruct<T>, {0x480, 16, 0, 0})
	SMember(FDataTableRowHandle)                       DropStackInputRowHandle                                     OFFSET(getStruct<T>, {0x490, 16, 0, 0})
	SMember(FDataTableRowHandle)                       DropHalfInputRowHandle                                      OFFSET(getStruct<T>, {0x4A0, 16, 0, 0})
	SMember(FDataTableRowHandle)                       MakeItemActiveInputRowHandle                                OFFSET(getStruct<T>, {0x4B0, 16, 0, 0})
	SMember(FDataTableRowHandle)                       MakeItemInactiveInputRowHandle                              OFFSET(getStruct<T>, {0x4C0, 16, 0, 0})


	/// Functions
	// Function /Script/ItemizationUI.GenericInventoryPanel.UpdateMakeItemInactiveInput
	// void UpdateMakeItemInactiveInput(bool bCanItemBeMadeInactive);                                                           // [0xacac8b4] Final|Native|Public|BlueprintCallable 
	// Function /Script/ItemizationUI.GenericInventoryPanel.UpdateMakeItemActiveInput
	// void UpdateMakeItemActiveInput(bool bCanItemBeMadeActive);                                                               // [0xacac7f8] Final|Native|Public|BlueprintCallable 
	// Function /Script/ItemizationUI.GenericInventoryPanel.UpdateDropInputs
	// void UpdateDropInputs(int32_t AmountOfSelectedItem);                                                                     // [0xacac67c] Final|Native|Public|BlueprintCallable 
	// Function /Script/ItemizationUI.GenericInventoryPanel.OnMakeItemInactiveInput
	// void OnMakeItemInactiveInput();                                                                                          // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/ItemizationUI.GenericInventoryPanel.OnMakeItemActiveInput
	// void OnMakeItemActiveInput();                                                                                            // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/ItemizationUI.GenericInventoryPanel.OnInputDelegate__DelegateSignature
	// void OnInputDelegate__DelegateSignature();                                                                               // [0x18a39e4] MulticastDelegate|Public|Delegate 
	// Function /Script/ItemizationUI.GenericInventoryPanel.OnDropStackInput
	// void OnDropStackInput();                                                                                                 // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/ItemizationUI.GenericInventoryPanel.OnDropItemInput
	// void OnDropItemInput();                                                                                                  // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/ItemizationUI.GenericInventoryPanel.OnDropHalfInput
	// void OnDropHalfInput();                                                                                                  // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/ItemizationUI.GenericInventoryPanel.OnDropAllInput
	// void OnDropAllInput();                                                                                                   // [0x18a39e4] Event|Protected|BlueprintEvent 
};

/// Class /Script/ItemizationUI.ItemizationDynamicUIDirector
/// Size: 0x0040 (0x0002B0 - 0x0002F0)
class AItemizationDynamicUIDirector : public ADynamicUIDirectorBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 752;

public:
	CMember(TArray<class UDynamicUIScene*>)            ItemizationScenes                                           OFFSET(get<T>, {0x2B0, 16, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   SoftInventoryScreenWidgetClass                              OFFSET(get<T>, {0x2C0, 32, 0, 0})


	/// Functions
	// Function /Script/ItemizationUI.ItemizationDynamicUIDirector.HandleInventorySwitched
	// void HandleInventorySwitched(class AFortPlayerController* PlayerController);                                             // [0xacac600] Final|Native|Private 
};

