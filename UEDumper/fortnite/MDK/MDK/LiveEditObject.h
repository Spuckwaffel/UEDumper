
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/LiveEditObject.LiveEditNetworkStreamChannel
/// Size: 0x0000 (0x000068 - 0x000068)
class ULiveEditNetworkStreamChannel : public UChannel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
};

/// Class /Script/LiveEditObject.LiveEditLargeNetworkMessageChannel
/// Size: 0x0048 (0x000068 - 0x0000B0)
class ULiveEditLargeNetworkMessageChannel : public ULiveEditNetworkStreamChannel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
};

/// Class /Script/LiveEditObject.LiveEditObjectChannel
/// Size: 0x00F8 (0x0000B0 - 0x0001A8)
class ULiveEditObjectChannel : public ULiveEditLargeNetworkMessageChannel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 424;

public:
};

/// Class /Script/LiveEditObject.LiveEditObjectConnection
/// Size: 0x0378 (0x000028 - 0x0003A0)
class ULiveEditObjectConnection : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 928;

public:
};

/// Class /Script/LiveEditObject.LiveEditObjectSubsystemState
/// Size: 0x0280 (0x000028 - 0x0002A8)
class ULiveEditObjectSubsystemState : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 680;

public:
	CMember(TArray<class ULiveEditObjectConnection*>)  Connections                                                 OFFSET(get<T>, {0x38, 16, 0, 0})
};

/// Class /Script/LiveEditObject.LiveEditObjectSubsystem
/// Size: 0x0170 (0x000030 - 0x0001A0)
class ULiveEditObjectSubsystem : public UEngineSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
	DMember(int32_t)                                   MaxBytesQueuedForReplication                                OFFSET(get<int32_t>, {0x38, 4, 0, 0})
	DMember(int32_t)                                   NumPackageMapBunchesToDelayTickFor                          OFFSET(get<int32_t>, {0x3C, 4, 0, 0})
	CMember(TArray<class ULiveEditObjectSubsystemState*>) NetDriverStates                                          OFFSET(get<T>, {0x40, 16, 0, 0})
};

/// Class /Script/LiveEditObject.LiveEditObjectTestObject
/// Size: 0x0150 (0x000028 - 0x000178)
class ULiveEditObjectTestObject : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 376;

public:
	DMember(int32_t)                                   int32                                                       OFFSET(get<int32_t>, {0x28, 12, 0, 0})
	SMember(FLiveEditObjectTestStruct)                 StructProperty                                              OFFSET(getStruct<T>, {0x38, 320, 0, 0})
};

/// Struct /Script/LiveEditObject.LiveEditObjectTestStruct
/// Size: 0x0140 (0x000000 - 0x000140)
class FLiveEditObjectTestStruct : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
	DMember(bool)                                      bool_                                                       OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(int8_t)                                    Int8                                                        OFFSET(get<int8_t>, {0x1, 1, 0, 0})
	DMember(int16_t)                                   Int16                                                       OFFSET(get<int16_t>, {0x2, 2, 0, 0})
	DMember(int32_t)                                   int32                                                       OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int64_t)                                   Int64                                                       OFFSET(get<int64_t>, {0x8, 8, 0, 0})
	DMember(float)                                     float_                                                      OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(double)                                    Double                                                      OFFSET(get<double>, {0x18, 8, 0, 0})
	SMember(FString)                                   String                                                      OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	SMember(FText)                                     Text                                                        OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x40, 4, 0, 0})
	CMember(class UObject*)                            RawObjectPtr                                                OFFSET(get<T>, {0x48, 8, 0, 0})
	CMember(class UObject*)                            ObjectPtr                                                   OFFSET(get<T>, {0x50, 8, 0, 0})
	SMember(FSoftObjectPath)                           SoftObjectPath                                              OFFSET(getStruct<T>, {0x58, 24, 0, 0})
	SMember(FVector2D)                                 Struct                                                      OFFSET(getStruct<T>, {0x70, 16, 0, 0})
	DMember(int32_t)                                   FixedArray                                                  OFFSET(get<int32_t>, {0x80, 16, 0, 0})
	CMember(TArray<int32_t>)                           DynamicArray                                                OFFSET(get<T>, {0x90, 16, 0, 0})
	CMember(TSet<int32_t>)                             Set                                                         OFFSET(get<T>, {0xA0, 80, 0, 0})
	CMember(TMap<int32_t, int32_t>)                    Map                                                         OFFSET(get<T>, {0xF0, 80, 0, 0})
};

