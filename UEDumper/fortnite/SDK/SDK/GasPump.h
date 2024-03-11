
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: ModularGameplay

/// Class /Valet/GasPump/Valet_GasPumpIndicatorManagerV2.Valet_GasPumpIndicatorManagerV2_C
/// Size: 0x0030 (0x0000A0 - 0x0000D0)
class UValet_GasPumpIndicatorManagerV2_C : public UFortGameStateComponent
{ 
public:
	class UClass*                                      FuelIndicatorClass;                                         // 0x00A0   (0x0008)  
	TArray<class UB_GasPump_Valet_Component_C*>        GasPumpList;                                                // 0x00A8   (0x0010)  
	TArray<class AFuelIndicator_C*>                    FuelIndicatorList;                                          // 0x00B8   (0x0010)  
	double                                             FuelIndicatorRangeSquared;                                  // 0x00C8   (0x0008)  


	/// Functions
	// Function /Valet/GasPump/Valet_GasPumpIndicatorManagerV2.Valet_GasPumpIndicatorManagerV2_C.RemoveGasPump
	// void RemoveGasPump(class UB_GasPump_Valet_Component_C* Gas Pump);                                                     // [0x18a39e4] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Valet/GasPump/Valet_GasPumpIndicatorManagerV2.Valet_GasPumpIndicatorManagerV2_C.AddGasPump
	// void AddGasPump(class UB_GasPump_Valet_Component_C* Gas Pump);                                                        // [0x18a39e4] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
};

/// Class /Valet/GasPump/B_GasPump_Valet_Component.B_GasPump_Valet_Component_C
/// Size: 0x0020 (0x0000A0 - 0x0000C0)
class UB_GasPump_Valet_Component_C : public UGameFrameworkComponent
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x00A0   (0x0008)  
	FName                                              Gas_Pump_Icon_Enabled;                                      // 0x00A8   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00AC   (0x0004)  MISSED
	class UClass*                                      Gas_Pump_IndicatorManager_Class;                            // 0x00B0   (0x0008)  
	class UValet_GasPumpIndicatorManagerV2_C*          Gas_Pump_IndicatorManager;                                  // 0x00B8   (0x0008)  


	/// Functions
	// Function /Valet/GasPump/B_GasPump_Valet_Component.B_GasPump_Valet_Component_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                              // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Valet/GasPump/B_GasPump_Valet_Component.B_GasPump_Valet_Component_C.ReceiveEndPlay
	// void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);                                                       // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Valet/GasPump/B_GasPump_Valet_Component.B_GasPump_Valet_Component_C.ExecuteUbergraph_B_GasPump_Valet_Component
	// void ExecuteUbergraph_B_GasPump_Valet_Component(int32_t EntryPoint);                                                  // [0x18a39e4] Final                
};

