
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: JunoGameNative
/// dependency: ModularGameplay

/// Class /Script/JunoControlUnitRuntime.JunoControlUnitAnalytics
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoControlUnitAnalytics : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/JunoControlUnitRuntime.JunoControlUnitBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoControlUnitBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/JunoControlUnitRuntime.JunoControlUnitBlueprintLibrary.FireEvent_EndControlUnitSession
	// void FireEvent_EndControlUnitSession(class AController* PlayerController, class AActor* ControlUnitActor);               // [0xcd35d2c] Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoControlUnitRuntime.JunoControlUnitBlueprintLibrary.FireEvent_BeginControlUnitSession
	// void FireEvent_BeginControlUnitSession(class AController* PlayerController, class AActor* ControlUnitActor);             // [0xcd35ae4] Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/JunoControlUnitRuntime.JunoPlayerControllerComponent_ControlUnitAnalytics
/// Size: 0x0030 (0x0000A0 - 0x0000D0)
class UJunoPlayerControllerComponent_ControlUnitAnalytics : public UControllerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	SMember(FJunoControlUnitSessionData)               ControlUnitSessionData                                      OFFSET(getStruct<T>, {0xA0, 48, 0, 0})
};

/// Struct /Script/JunoControlUnitRuntime.JunoEvent_HUDControlUnitMessage
/// Size: 0x0008 (0x000000 - 0x000008)
class FJunoEvent_HUDControlUnitMessage : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(class AJunoPhysicsToyActor*)               ControlUnitActor                                            OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/JunoControlUnitRuntime.JunoControlUnitSessionData
/// Size: 0x0030 (0x000000 - 0x000030)
class FJunoControlUnitSessionData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(TWeakObjectPtr<AActor*>)                   ControlUnitActor                                            OFFSET(get<T>, {0x0, 8, 0, 0})
};

