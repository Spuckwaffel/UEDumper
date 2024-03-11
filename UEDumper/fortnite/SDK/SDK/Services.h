
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: Athena
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: Niagara

/// Class /BattlePassS29_Quests/Services/BP_VendAISpawner_Base.BP_VendAISpawner_Base_C
/// Size: 0x0028 (0x000290 - 0x0002B8)
class ABP_VendAISpawner_Base_C : public AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0290   (0x0008)  
	class UNiagaraComponent*                           Niagara;                                                    // 0x0298   (0x0008)  
	double                                             SpawnDelay;                                                 // 0x02A0   (0x0008)  
	FDataTableRowHandle                                EventRowHandle;                                             // 0x02A8   (0x0010)  


	/// Functions
	// Function /BattlePassS29_Quests/Services/BP_VendAISpawner_Base.BP_VendAISpawner_Base_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                              // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /BattlePassS29_Quests/Services/BP_VendAISpawner_Base.BP_VendAISpawner_Base_C.ExecuteUbergraph_BP_VendAISpawner_Base
	// void ExecuteUbergraph_BP_VendAISpawner_Base(int32_t EntryPoint);                                                      // [0x18a39e4] Final|HasDefaults    
};

/// Class /BattlePassS29_Quests/Services/BP_VendAISpawner_Nug.BP_VendAISpawner_Nug_C
/// Size: 0x0000 (0x0002B8 - 0x0002B8)
class ABP_VendAISpawner_Nug_C : public ABP_VendAISpawner_Base_C
{ 
public:
};

/// Class /BattlePassS29_Quests/Services/BGA_Rift_Portal_VM.BGA_Rift_Portal_VM_C
/// Size: 0x0000 (0x000C88 - 0x000C88)
class ABGA_Rift_Portal_VM_C : public ABGA_RiftPortal_Item_Athena_C
{ 
public:
};

