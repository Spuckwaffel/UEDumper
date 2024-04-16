
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: ModularGameplay

/// Class /Valet/GasPump/B_GasPump_Valet_Component.B_GasPump_Valet_Component_C
/// Size: 0x0020 (0x0000A0 - 0x0000C0)
class UB_GasPump_Valet_Component_C : public UGameFrameworkComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0xA0, 8, 0, 0})
	SMember(FName)                                     Gas_Pump_Icon_Enabled                                       OFFSET(getStruct<T>, {0xA8, 4, 0, 0})
	CMember(class UClass*)                             Gas_Pump_IndicatorManager_Class                             OFFSET(get<T>, {0xB0, 8, 0, 0})
	CMember(class UValet_GasPumpIndicatorManagerV2_C*) Gas_Pump_IndicatorManager                                   OFFSET(get<T>, {0xB8, 8, 0, 0})


	/// Functions
	// Function /Valet/GasPump/B_GasPump_Valet_Component.B_GasPump_Valet_Component_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x246f7d8] Event|Public|BlueprintEvent 
	// Function /Valet/GasPump/B_GasPump_Valet_Component.B_GasPump_Valet_Component_C.ReceiveEndPlay
	// void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);                                                          // [0x246f7d8] Event|Public|BlueprintEvent 
	// Function /Valet/GasPump/B_GasPump_Valet_Component.B_GasPump_Valet_Component_C.ExecuteUbergraph_B_GasPump_Valet_Component
	// void ExecuteUbergraph_B_GasPump_Valet_Component(int32_t EntryPoint);                                                     // [0x246f7d8] Final                
};

/// Class /Valet/GasPump/Valet_GasPumpIndicatorManagerV2.Valet_GasPumpIndicatorManagerV2_C
/// Size: 0x0030 (0x0000A0 - 0x0000D0)
class UValet_GasPumpIndicatorManagerV2_C : public UFortGameStateComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	CMember(class UClass*)                             FuelIndicatorClass                                          OFFSET(get<T>, {0xA0, 8, 0, 0})
	CMember(TArray<class UB_GasPump_Valet_Component_C*>) GasPumpList                                               OFFSET(get<T>, {0xA8, 16, 0, 0})
	CMember(TArray<class AFuelIndicator_C*>)           FuelIndicatorList                                           OFFSET(get<T>, {0xB8, 16, 0, 0})
	DMember(double)                                    FuelIndicatorRangeSquared                                   OFFSET(get<double>, {0xC8, 8, 0, 0})


	/// Functions
	// Function /Valet/GasPump/Valet_GasPumpIndicatorManagerV2.Valet_GasPumpIndicatorManagerV2_C.RemoveGasPump
	// void RemoveGasPump(class UB_GasPump_Valet_Component_C* Gas Pump);                                                        // [0x246f7d8] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Valet/GasPump/Valet_GasPumpIndicatorManagerV2.Valet_GasPumpIndicatorManagerV2_C.AddGasPump
	// void AddGasPump(class UB_GasPump_Valet_Component_C* Gas Pump);                                                           // [0x246f7d8] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
};

