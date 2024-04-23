
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: Athena
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: Niagara

/// Class /BattlePassS29_Quests/Services/BP_VendAISpawner_Base.BP_VendAISpawner_Base_C
/// Size: 0x0028 (0x000290 - 0x0002B8)
class ABP_VendAISpawner_Base_C : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 696;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x290, 8, 0, 0})
	CMember(class UNiagaraComponent*)                  Niagara                                                     OFFSET(get<T>, {0x298, 8, 0, 0})
	DMember(double)                                    SpawnDelay                                                  OFFSET(get<double>, {0x2A0, 8, 0, 0})
	SMember(FDataTableRowHandle)                       EventRowHandle                                              OFFSET(getStruct<T>, {0x2A8, 16, 0, 0})


	/// Functions
	// Function /BattlePassS29_Quests/Services/BP_VendAISpawner_Base.BP_VendAISpawner_Base_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /BattlePassS29_Quests/Services/BP_VendAISpawner_Base.BP_VendAISpawner_Base_C.ExecuteUbergraph_BP_VendAISpawner_Base
	// void ExecuteUbergraph_BP_VendAISpawner_Base(int32_t EntryPoint);                                                         // [0x1340978] Final|HasDefaults    
};

/// Class /BattlePassS29_Quests/Services/BP_VendAISpawner_Nug.BP_VendAISpawner_Nug_C
/// Size: 0x0000 (0x0002B8 - 0x0002B8)
class ABP_VendAISpawner_Nug_C : public ABP_VendAISpawner_Base_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 696;

public:
};

/// Class /BattlePassS29_Quests/Services/BGA_Rift_Portal_VM.BGA_Rift_Portal_VM_C
/// Size: 0x0000 (0x000C88 - 0x000C88)
class ABGA_Rift_Portal_VM_C : public ABGA_RiftPortal_Item_Athena_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3208;

public:
};

