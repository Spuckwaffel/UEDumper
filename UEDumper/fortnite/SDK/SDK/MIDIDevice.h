
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine

/// Enum /Script/MIDIDevice.EMIDIEventType
/// Size: 0x09
enum class EMIDIEventType : uint8_t
{
	EMIDIEventType__Unknown                                                          = 0,
	EMIDIEventType__NoteOff                                                          = 8,
	EMIDIEventType__NoteOn                                                           = 9,
	EMIDIEventType__NoteAfterTouch                                                   = 10,
	EMIDIEventType__ControlChange                                                    = 11,
	EMIDIEventType__ProgramChange                                                    = 12,
	EMIDIEventType__ChannelAfterTouch                                                = 13,
	EMIDIEventType__PitchBend                                                        = 14,
	EMIDIEventType__EMIDIEventType_MAX                                               = 15
};

/// Class /Script/MIDIDevice.MIDIDeviceControllerBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UMIDIDeviceControllerBase : public UObject
{ 
public:
};

/// Class /Script/MIDIDevice.MIDIDeviceController
/// Size: 0x0038 (0x000028 - 0x000060)
class UMIDIDeviceController : public UMIDIDeviceControllerBase
{ 
public:
	SDK_UNDEFINED(16,15048) /* FMulticastInlineDelegate */ __um(OnMIDIEvent);                                      // 0x0028   (0x0010)  
	int32_t                                            DeviceID;                                                   // 0x0038   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x003C   (0x0004)  MISSED
	SDK_UNDEFINED(16,15049) /* FString */              __um(DeviceName);                                           // 0x0040   (0x0010)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x0050   (0x0010)  MISSED
};

/// Class /Script/MIDIDevice.MIDIDeviceInputController
/// Size: 0x00B0 (0x000028 - 0x0000D8)
class UMIDIDeviceInputController : public UMIDIDeviceControllerBase
{ 
public:
	SDK_UNDEFINED(16,15050) /* FMulticastInlineDelegate */ __um(OnMIDINoteOn);                                     // 0x0028   (0x0010)  
	SDK_UNDEFINED(16,15051) /* FMulticastInlineDelegate */ __um(OnMIDINoteOff);                                    // 0x0038   (0x0010)  
	SDK_UNDEFINED(16,15052) /* FMulticastInlineDelegate */ __um(OnMIDIPitchBend);                                  // 0x0048   (0x0010)  
	SDK_UNDEFINED(16,15053) /* FMulticastInlineDelegate */ __um(OnMIDIAftertouch);                                 // 0x0058   (0x0010)  
	SDK_UNDEFINED(16,15054) /* FMulticastInlineDelegate */ __um(OnMIDIControlChange);                              // 0x0068   (0x0010)  
	SDK_UNDEFINED(16,15055) /* FMulticastInlineDelegate */ __um(OnMIDIProgramChange);                              // 0x0078   (0x0010)  
	SDK_UNDEFINED(16,15056) /* FMulticastInlineDelegate */ __um(OnMIDIChannelAftertouch);                          // 0x0088   (0x0010)  
	unsigned char                                      UnknownData00_5[0x18];                                      // 0x0098   (0x0018)  MISSED
	int32_t                                            DeviceID;                                                   // 0x00B0   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x00B4   (0x0004)  MISSED
	SDK_UNDEFINED(16,15057) /* FString */              __um(DeviceName);                                           // 0x00B8   (0x0010)  
	unsigned char                                      UnknownData02_6[0x10];                                      // 0x00C8   (0x0010)  MISSED
};

/// Class /Script/MIDIDevice.MIDIDeviceManager
/// Size: 0x0000 (0x000028 - 0x000028)
class UMIDIDeviceManager : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/MIDIDevice.MIDIDeviceManager.ShutDownAllMIDIDevices
	// void ShutDownAllMIDIDevices();                                                                                        // [0xb8dde20] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MIDIDevice.MIDIDeviceManager.GetMIDIOutputDeviceIDByName
	// void GetMIDIOutputDeviceIDByName(FString DeviceName, int32_t& DeviceID);                                              // [0xb8dd4d4] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MIDIDevice.MIDIDeviceManager.GetMIDIInputDeviceIDByName
	// void GetMIDIInputDeviceIDByName(FString DeviceName, int32_t& DeviceID);                                               // [0xb8dd320] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MIDIDevice.MIDIDeviceManager.GetDefaultMIDIOutputDeviceID
	// void GetDefaultMIDIOutputDeviceID(int32_t& DeviceID);                                                                 // [0xb8dd278] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MIDIDevice.MIDIDeviceManager.GetDefaultMIDIInputDeviceID
	// void GetDefaultMIDIInputDeviceID(int32_t& DeviceID);                                                                  // [0xb8dd1d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MIDIDevice.MIDIDeviceManager.FindMIDIDevices
	// void FindMIDIDevices(TArray<FFoundMIDIDevice>& OutMIDIDevices);                                                       // [0xb8dd144] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MIDIDevice.MIDIDeviceManager.FindAllMIDIDeviceInfo
	// void FindAllMIDIDeviceInfo(TArray<FMIDIDeviceInfo>& OutMIDIInputDevices, TArray<FMIDIDeviceInfo>& OutMIDIOutputDevices); // [0xb8dd030] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MIDIDevice.MIDIDeviceManager.CreateMIDIDeviceOutputController
	// class UMIDIDeviceOutputController* CreateMIDIDeviceOutputController(int32_t DeviceID);                                // [0xb8dcfb0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MIDIDevice.MIDIDeviceManager.CreateMIDIDeviceInputController
	// class UMIDIDeviceInputController* CreateMIDIDeviceInputController(int32_t DeviceID, int32_t MIDIBufferSize);          // [0xb8dcef0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MIDIDevice.MIDIDeviceManager.CreateMIDIDeviceController
	// class UMIDIDeviceController* CreateMIDIDeviceController(int32_t DeviceID, int32_t MIDIBufferSize);                    // [0xb8dce30] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/MIDIDevice.MIDIDeviceOutputController
/// Size: 0x0020 (0x000028 - 0x000048)
class UMIDIDeviceOutputController : public UMIDIDeviceControllerBase
{ 
public:
	int32_t                                            DeviceID;                                                   // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x002C   (0x0004)  MISSED
	SDK_UNDEFINED(16,15058) /* FString */              __um(DeviceName);                                           // 0x0030   (0x0010)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0040   (0x0008)  MISSED


	/// Functions
	// Function /Script/MIDIDevice.MIDIDeviceOutputController.SendMIDIProgramChange
	// void SendMIDIProgramChange(int32_t Channel, int32_t ProgramNumber);                                                   // [0xb8ddd5c] Final|Native|Public|BlueprintCallable 
	// Function /Script/MIDIDevice.MIDIDeviceOutputController.SendMIDIPitchBend
	// void SendMIDIPitchBend(int32_t Channel, int32_t pitch);                                                               // [0xb8ddc74] Final|Native|Public|BlueprintCallable 
	// Function /Script/MIDIDevice.MIDIDeviceOutputController.SendMIDINoteOn
	// void SendMIDINoteOn(int32_t Channel, int32_t Note, int32_t Velocity);                                                 // [0xb8ddb78] Final|Native|Public|BlueprintCallable 
	// Function /Script/MIDIDevice.MIDIDeviceOutputController.SendMIDINoteOff
	// void SendMIDINoteOff(int32_t Channel, int32_t Note, int32_t Velocity);                                                // [0xb8dda7c] Final|Native|Public|BlueprintCallable 
	// Function /Script/MIDIDevice.MIDIDeviceOutputController.SendMIDINoteAftertouch
	// void SendMIDINoteAftertouch(int32_t Channel, int32_t Note, float Amount);                                             // [0xb8dd980] Final|Native|Public|BlueprintCallable 
	// Function /Script/MIDIDevice.MIDIDeviceOutputController.SendMIDIEvent
	// void SendMIDIEvent(EMIDIEventType EventType, int32_t Channel, int32_t data1, int32_t data2);                          // [0xb8dd848] Final|Native|Public|BlueprintCallable 
	// Function /Script/MIDIDevice.MIDIDeviceOutputController.SendMIDIControlChange
	// void SendMIDIControlChange(int32_t Channel, int32_t Type, int32_t Value);                                             // [0xb8dd74c] Final|Native|Public|BlueprintCallable 
	// Function /Script/MIDIDevice.MIDIDeviceOutputController.SendMIDIChannelAftertouch
	// void SendMIDIChannelAftertouch(int32_t Channel, float Amount);                                                        // [0xb8dd688] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/MIDIDevice.FoundMIDIDevice
/// Size: 0x0020 (0x000000 - 0x000020)
struct FFoundMIDIDevice
{ 
	int32_t                                            DeviceID;                                                   // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	SDK_UNDEFINED(16,15059) /* FString */              __um(DeviceName);                                           // 0x0008   (0x0010)  
	bool                                               bCanReceiveFrom;                                            // 0x0018   (0x0001)  
	bool                                               bCanSendTo;                                                 // 0x0019   (0x0001)  
	bool                                               bIsAlreadyInUse;                                            // 0x001A   (0x0001)  
	bool                                               bIsDefaultInputDevice;                                      // 0x001B   (0x0001)  
	bool                                               bIsDefaultOutputDevice;                                     // 0x001C   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x001D   (0x0003)  MISSED
};

/// Struct /Script/MIDIDevice.MIDIDeviceInfo
/// Size: 0x0020 (0x000000 - 0x000020)
struct FMIDIDeviceInfo
{ 
	int32_t                                            DeviceID;                                                   // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	SDK_UNDEFINED(16,15060) /* FString */              __um(DeviceName);                                           // 0x0008   (0x0010)  
	bool                                               bIsAlreadyInUse;                                            // 0x0018   (0x0001)  
	bool                                               bIsDefaultDevice;                                           // 0x0019   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x001A   (0x0006)  MISSED
};

