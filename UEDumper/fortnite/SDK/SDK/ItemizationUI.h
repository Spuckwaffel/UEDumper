
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
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
public:
	SDK_UNDEFINED(16,14340) /* FMulticastInlineDelegate */ __um(OnDropItemInputDelegate);                          // 0x0400   (0x0010)  
	SDK_UNDEFINED(16,14341) /* FMulticastInlineDelegate */ __um(OnDropAllInputDelegate);                           // 0x0410   (0x0010)  
	SDK_UNDEFINED(16,14342) /* FMulticastInlineDelegate */ __um(OnDropStackInputDelegate);                         // 0x0420   (0x0010)  
	SDK_UNDEFINED(16,14343) /* FMulticastInlineDelegate */ __um(OnDropHalfInputDelegate);                          // 0x0430   (0x0010)  
	SDK_UNDEFINED(16,14344) /* FMulticastInlineDelegate */ __um(OnMakeItemActiveInputDelegate);                    // 0x0440   (0x0010)  
	SDK_UNDEFINED(16,14345) /* FMulticastInlineDelegate */ __um(OnMakeItemInactiveInputDelegate);                  // 0x0450   (0x0010)  
	FDataTableRowHandle                                BackInputRowHandle;                                         // 0x0460   (0x0010)  
	FDataTableRowHandle                                DropItemInputRowHandle;                                     // 0x0470   (0x0010)  
	FDataTableRowHandle                                DropAllInputRowHandle;                                      // 0x0480   (0x0010)  
	FDataTableRowHandle                                DropStackInputRowHandle;                                    // 0x0490   (0x0010)  
	FDataTableRowHandle                                DropHalfInputRowHandle;                                     // 0x04A0   (0x0010)  
	FDataTableRowHandle                                MakeItemActiveInputRowHandle;                               // 0x04B0   (0x0010)  
	FDataTableRowHandle                                MakeItemInactiveInputRowHandle;                             // 0x04C0   (0x0010)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x04D0   (0x0018)  MISSED


	/// Functions
	// Function /Script/ItemizationUI.GenericInventoryPanel.UpdateMakeItemInactiveInput
	// void UpdateMakeItemInactiveInput(bool bCanItemBeMadeInactive);                                                        // [0xacac8b4] Final|Native|Public|BlueprintCallable 
	// Function /Script/ItemizationUI.GenericInventoryPanel.UpdateMakeItemActiveInput
	// void UpdateMakeItemActiveInput(bool bCanItemBeMadeActive);                                                            // [0xacac7f8] Final|Native|Public|BlueprintCallable 
	// Function /Script/ItemizationUI.GenericInventoryPanel.UpdateDropInputs
	// void UpdateDropInputs(int32_t AmountOfSelectedItem);                                                                  // [0xacac67c] Final|Native|Public|BlueprintCallable 
	// Function /Script/ItemizationUI.GenericInventoryPanel.OnMakeItemInactiveInput
	// void OnMakeItemInactiveInput();                                                                                       // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/ItemizationUI.GenericInventoryPanel.OnMakeItemActiveInput
	// void OnMakeItemActiveInput();                                                                                         // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/ItemizationUI.GenericInventoryPanel.OnInputDelegate__DelegateSignature
	// void OnInputDelegate__DelegateSignature();                                                                            // [0x18a39e4] MulticastDelegate|Public|Delegate 
	// Function /Script/ItemizationUI.GenericInventoryPanel.OnDropStackInput
	// void OnDropStackInput();                                                                                              // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/ItemizationUI.GenericInventoryPanel.OnDropItemInput
	// void OnDropItemInput();                                                                                               // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/ItemizationUI.GenericInventoryPanel.OnDropHalfInput
	// void OnDropHalfInput();                                                                                               // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/ItemizationUI.GenericInventoryPanel.OnDropAllInput
	// void OnDropAllInput();                                                                                                // [0x18a39e4] Event|Protected|BlueprintEvent 
};

/// Class /Script/ItemizationUI.ItemizationDynamicUIDirector
/// Size: 0x0040 (0x0002B0 - 0x0002F0)
class AItemizationDynamicUIDirector : public ADynamicUIDirectorBase
{ 
public:
	TArray<class UDynamicUIScene*>                     ItemizationScenes;                                          // 0x02B0   (0x0010)  
	SDK_UNDEFINED(32,14346) /* TWeakObjectPtr<UClass*> */ __um(SoftInventoryScreenWidgetClass);                    // 0x02C0   (0x0020)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x02E0   (0x0010)  MISSED


	/// Functions
	// Function /Script/ItemizationUI.ItemizationDynamicUIDirector.HandleInventorySwitched
	// void HandleInventorySwitched(class AFortPlayerController* PlayerController);                                          // [0xacac600] Final|Native|Private 
};

