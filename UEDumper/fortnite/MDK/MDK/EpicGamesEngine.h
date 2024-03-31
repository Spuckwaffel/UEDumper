
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: EntityActor
/// dependency: EntityCore
/// dependency: InputCore
/// dependency: NetCore

/// Class /Script/EpicGamesEngine.VerseUEInputComponentBase
/// Size: 0x0370 (0x0000D0 - 0x000440)
class UVerseUEInputComponentBase : public UEntityActorPlayerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1088;

public:
	CMember(class UInputComponent*)                    InputComponent                                              OFFSET(get<T>, {0xD0, 8, 0, 0})
	SMember(FVerseActionMappingArray)                  ReplicatedActionMappingArray                                OFFSET(getStruct<T>, {0xD8, 288, 0, 0})
	SMember(FVerseAxisMappingArray)                    ReplicatedAxisMappingArray                                  OFFSET(getStruct<T>, {0x1F8, 288, 0, 0})
	SMember(FVerseInputBindingArray)                   ReplicatedInputBindingArray                                 OFFSET(getStruct<T>, {0x318, 288, 0, 0})


	/// Functions
	// Function /Script/EpicGamesEngine.VerseUEInputComponentBase.ServerTriggerAxis
	// void ServerTriggerAxis(FName AxisName, float Value);                                                                     // [0xad08724] Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate 
	// Function /Script/EpicGamesEngine.VerseUEInputComponentBase.ServerTriggerAction
	// void ServerTriggerAction(FName ActionName, TEnumAsByte<EInputEvent> InputEvent);                                         // [0xad085ac] Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate 
};

/// Struct /Script/EpicGamesEngine.VerseActionMapping
/// Size: 0x0024 (0x00000C - 0x000030)
class FVerseActionMapping : public FFastArraySerializerItem
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0xC, 4, 0, 0})
	SMember(FString)                                   UIText                                                      OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	CMember(TArray<FKey>)                              Keys                                                        OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/EpicGamesEngine.VerseActionMappingArray
/// Size: 0x0018 (0x000108 - 0x000120)
class FVerseActionMappingArray : public FFastArraySerializer
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	CMember(TArray<FVerseActionMapping>)               ActionMappingArray                                          OFFSET(get<T>, {0x108, 16, 0, 0})
	CMember(class UVerseUEInputComponentBase*)         OwningComponent                                             OFFSET(get<T>, {0x118, 8, 0, 0})
};

/// Struct /Script/EpicGamesEngine.VerseAxisMapping
/// Size: 0x002C (0x00000C - 0x000038)
class FVerseAxisMapping : public FFastArraySerializerItem
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FName)                                     AxisName                                                    OFFSET(getStruct<T>, {0xC, 4, 0, 0})
	DMember(float)                                     Scale                                                       OFFSET(get<float>, {0x10, 4, 0, 0})
	SMember(FString)                                   UIText                                                      OFFSET(getStruct<T>, {0x18, 16, 0, 0})
	CMember(TArray<FKey>)                              Keys                                                        OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Struct /Script/EpicGamesEngine.VerseAxisMappingArray
/// Size: 0x0018 (0x000108 - 0x000120)
class FVerseAxisMappingArray : public FFastArraySerializer
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	CMember(TArray<FVerseAxisMapping>)                 AxisMappingArray                                            OFFSET(get<T>, {0x108, 16, 0, 0})
	CMember(class UVerseUEInputComponentBase*)         OwningComponent                                             OFFSET(get<T>, {0x118, 8, 0, 0})
};

/// Struct /Script/EpicGamesEngine.VerseInputBinding
/// Size: 0x0010 (0x00000C - 0x00001C)
class FVerseInputBinding : public FFastArraySerializerItem
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 28;

public:
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0xC, 4, 0, 0})
	CMember(TEnumAsByte<EInputEvent>)                  InputEvent                                                  OFFSET(get<T>, {0x10, 1, 0, 0})
};

/// Struct /Script/EpicGamesEngine.VerseInputBindingArray
/// Size: 0x0018 (0x000108 - 0x000120)
class FVerseInputBindingArray : public FFastArraySerializer
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	CMember(TArray<FVerseInputBinding>)                InputBindingArray                                           OFFSET(get<T>, {0x108, 16, 0, 0})
	CMember(class UVerseUEInputComponentBase*)         OwningComponent                                             OFFSET(get<T>, {0x118, 8, 0, 0})
};

