
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/LiveEditObject.LiveEditNetworkStreamChannel
/// Size: 0x0000 (0x000068 - 0x000068)
class ULiveEditNetworkStreamChannel : public UChannel
{ 
public:
};

/// Class /Script/LiveEditObject.LiveEditLargeNetworkMessageChannel
/// Size: 0x0048 (0x000068 - 0x0000B0)
class ULiveEditLargeNetworkMessageChannel : public ULiveEditNetworkStreamChannel
{ 
public:
	unsigned char                                      UnknownData00_1[0x48];                                      // 0x0068   (0x0048)  MISSED
};

/// Class /Script/LiveEditObject.LiveEditObjectChannel
/// Size: 0x00F8 (0x0000B0 - 0x0001A8)
class ULiveEditObjectChannel : public ULiveEditLargeNetworkMessageChannel
{ 
public:
	unsigned char                                      UnknownData00_1[0xF8];                                      // 0x00B0   (0x00F8)  MISSED
};

/// Class /Script/LiveEditObject.LiveEditObjectConnection
/// Size: 0x0378 (0x000028 - 0x0003A0)
class ULiveEditObjectConnection : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x3A0];                                     // 0x0000   (0x03A0)  MISSED
};

/// Class /Script/LiveEditObject.LiveEditObjectSubsystemState
/// Size: 0x0280 (0x000028 - 0x0002A8)
class ULiveEditObjectSubsystemState : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x38];                                      // 0x0000   (0x0038)  MISSED
	TArray<class ULiveEditObjectConnection*>           Connections;                                                // 0x0038   (0x0010)  
	unsigned char                                      UnknownData01_6[0x260];                                     // 0x0048   (0x0260)  MISSED
};

/// Class /Script/LiveEditObject.LiveEditObjectSubsystem
/// Size: 0x0158 (0x000030 - 0x000188)
class ULiveEditObjectSubsystem : public UEngineSubsystem
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0030   (0x0008)  MISSED
	int32_t                                            MaxBytesQueuedForReplication;                               // 0x0038   (0x0004)  
	int32_t                                            NumPackageMapBunchesToDelayTickFor;                         // 0x003C   (0x0004)  
	TArray<class ULiveEditObjectSubsystemState*>       NetDriverStates;                                            // 0x0040   (0x0010)  
	unsigned char                                      UnknownData01_6[0x138];                                     // 0x0050   (0x0138)  MISSED
};

/// Struct /Script/LiveEditObject.LiveEditObjectTestStruct
/// Size: 0x0148 (0x000000 - 0x000148)
struct FLiveEditObjectTestStruct
{ 
	bool                                               bool0;                                                      // 0x0000   (0x0001)  
	int8_t                                             Int8;                                                       // 0x0001   (0x0001)  
	int16_t                                            Int16;                                                      // 0x0002   (0x0002)  
	int32_t                                            int32;                                                      // 0x0004   (0x0004)  
	int64_t                                            Int64;                                                      // 0x0008   (0x0008)  
	float                                              float1;                                                     // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0014   (0x0004)  MISSED
	double                                             Double;                                                     // 0x0018   (0x0008)  
	SDK_UNDEFINED(16,14887) /* FString */              __um(String);                                               // 0x0020   (0x0010)  
	SDK_UNDEFINED(24,14888) /* FText */                __um(Text);                                                 // 0x0030   (0x0018)  
	FName                                              Name;                                                       // 0x0048   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x004C   (0x0004)  MISSED
	class UObject*                                     RawObjectPtr;                                               // 0x0050   (0x0008)  
	class UObject*                                     ObjectPtr;                                                  // 0x0058   (0x0008)  
	FSoftObjectPath                                    SoftObjectPath;                                             // 0x0060   (0x0018)  
	FVector2D                                          Struct;                                                     // 0x0078   (0x0010)  
	int32_t                                            FixedArray;                                                 // 0x0088   (0x0010)  
	TArray<int32_t>                                    DynamicArray;                                               // 0x0098   (0x0010)  
	SDK_UNDEFINED(80,14889) /* TSet<int32_t> */        __um(Set);                                                  // 0x00A8   (0x0050)  
	SDK_UNDEFINED(80,14890) /* TMap<int32_t, int32_t> */ __um(Map);                                                // 0x00F8   (0x0050)  
};

/// Class /Script/LiveEditObject.LiveEditObjectTestObject
/// Size: 0x0158 (0x000028 - 0x000180)
class ULiveEditObjectTestObject : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	int32_t                                            int32;                                                      // 0x0028   (0x000C)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0034   (0x0004)  MISSED
	FLiveEditObjectTestStruct                          StructProperty;                                             // 0x0038   (0x0148)  
};

