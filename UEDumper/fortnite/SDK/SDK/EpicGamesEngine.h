
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: EntityActor
/// dependency: EntityCore
/// dependency: InputCore
/// dependency: NetCore

/// Struct /Script/EpicGamesEngine.VerseActionMapping
/// Size: 0x0024 (0x00000C - 0x000030)
struct FVerseActionMapping : FFastArraySerializerItem
{ 
	FName                                              Name;                                                       // 0x000C   (0x0004)  
	SDK_UNDEFINED(16,9324) /* FString */               __um(UIText);                                               // 0x0010   (0x0010)  
	TArray<FKey>                                       Keys;                                                       // 0x0020   (0x0010)  
};

/// Struct /Script/EpicGamesEngine.VerseActionMappingArray
/// Size: 0x0018 (0x000108 - 0x000120)
struct FVerseActionMappingArray : FFastArraySerializer
{ 
	TArray<FVerseActionMapping>                        ActionMappingArray;                                         // 0x0108   (0x0010)  
	class UVerseUEInputComponentBase*                  OwningComponent;                                            // 0x0118   (0x0008)  
};

/// Struct /Script/EpicGamesEngine.VerseAxisMapping
/// Size: 0x002C (0x00000C - 0x000038)
struct FVerseAxisMapping : FFastArraySerializerItem
{ 
	FName                                              AxisName;                                                   // 0x000C   (0x0004)  
	float                                              Scale;                                                      // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0014   (0x0004)  MISSED
	SDK_UNDEFINED(16,9325) /* FString */               __um(UIText);                                               // 0x0018   (0x0010)  
	TArray<FKey>                                       Keys;                                                       // 0x0028   (0x0010)  
};

/// Struct /Script/EpicGamesEngine.VerseAxisMappingArray
/// Size: 0x0018 (0x000108 - 0x000120)
struct FVerseAxisMappingArray : FFastArraySerializer
{ 
	TArray<FVerseAxisMapping>                          AxisMappingArray;                                           // 0x0108   (0x0010)  
	class UVerseUEInputComponentBase*                  OwningComponent;                                            // 0x0118   (0x0008)  
};

/// Struct /Script/EpicGamesEngine.VerseInputBinding
/// Size: 0x0010 (0x00000C - 0x00001C)
struct FVerseInputBinding : FFastArraySerializerItem
{ 
	FName                                              Name;                                                       // 0x000C   (0x0004)  
	SDK_UNDEFINED(1,9326) /* TEnumAsByte<EInputEvent> */ __um(InputEvent);                                         // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0xB];                                       // 0x0011   (0x000B)  MISSED
};

/// Struct /Script/EpicGamesEngine.VerseInputBindingArray
/// Size: 0x0018 (0x000108 - 0x000120)
struct FVerseInputBindingArray : FFastArraySerializer
{ 
	TArray<FVerseInputBinding>                         InputBindingArray;                                          // 0x0108   (0x0010)  
	class UVerseUEInputComponentBase*                  OwningComponent;                                            // 0x0118   (0x0008)  
};

/// Class /Script/EpicGamesEngine.VerseUEInputComponentBase
/// Size: 0x0370 (0x0000D0 - 0x000440)
class UVerseUEInputComponentBase : public UEntityActorPlayerComponent
{ 
public:
	class UInputComponent*                             InputComponent;                                             // 0x00D0   (0x0008)  
	FVerseActionMappingArray                           ReplicatedActionMappingArray;                               // 0x00D8   (0x0120)  
	FVerseAxisMappingArray                             ReplicatedAxisMappingArray;                                 // 0x01F8   (0x0120)  
	FVerseInputBindingArray                            ReplicatedInputBindingArray;                                // 0x0318   (0x0120)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0438   (0x0008)  MISSED


	/// Functions
	// Function /Script/EpicGamesEngine.VerseUEInputComponentBase.ServerTriggerAxis
	// void ServerTriggerAxis(FName AxisName, float Value);                                                                  // [0xa0507a4] Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate 
	// Function /Script/EpicGamesEngine.VerseUEInputComponentBase.ServerTriggerAction
	// void ServerTriggerAction(FName ActionName, TEnumAsByte<EInputEvent> InputEvent);                                      // [0xa0506b8] Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate 
};

