
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/DeltaFileSystem.DeltaFileSaveHandlerTestContext
/// Size: 0x0008 (0x000028 - 0x000030)
class UDeltaFileSaveHandlerTestContext : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(class UDeltaFileSaveHandler*)              SaveHandler                                                 OFFSET(get<T>, {0x28, 8, 0, 0})
};

/// Class /Script/DeltaFileSystem.DeltaFile
/// Size: 0x0000 (0x000028 - 0x000028)
class UDeltaFile : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/DeltaFileSystem.DeltaFileApplier
/// Size: 0x0000 (0x000028 - 0x000028)
class UDeltaFileApplier : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/DeltaFileSystem.DeltaComponent
/// Size: 0x0010 (0x0000A0 - 0x0000B0)
class UDeltaComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
};

/// Class /Script/DeltaFileSystem.DeltaFileSaveHandler
/// Size: 0x0118 (0x000028 - 0x000140)
class UDeltaFileSaveHandler : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
};

/// Class /Script/DeltaFileSystem.DeltaFileSubsystem
/// Size: 0x00B8 (0x000030 - 0x0000E8)
class UDeltaFileSubsystem : public UEngineSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
	CMember(TMap<UWorld*, FDeltaTrackingHandles>)      WorldToTrackingHandles                                      OFFSET(get<T>, {0x30, 80, 0, 0})
	CMember(TMap<FName, UObject*>)                     DeltaFiles                                                  OFFSET(get<T>, {0x80, 80, 0, 0})
	SMember(FSoftClassPath)                            DefaultDeltaFileClass                                       OFFSET(getStruct<T>, {0xD0, 24, 0, 0})
};

/// Class /Script/DeltaFileSystem.MapDelta
/// Size: 0x00C8 (0x000028 - 0x0000F0)
class UMapDelta : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	SMember(FString)                                   PackageToApplyTo                                            OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	CMember(TMap<FGuid, FAddAction>)                   AddActions                                                  OFFSET(get<T>, {0x40, 80, 0, 0})
	CMember(TArray<FUpdateAction>)                     UpdateActions                                               OFFSET(get<T>, {0x90, 16, 0, 0})
	CMember(TMap<FGuid, FDeleteAction>)                DeleteActions                                               OFFSET(get<T>, {0xA0, 80, 0, 0})
};

/// Class /Script/DeltaFileSystem.MapDeltaApplier
/// Size: 0x00C8 (0x000028 - 0x0000F0)
class UMapDeltaApplier : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
};

/// Struct /Script/DeltaFileSystem.DeltaAction
/// Size: 0x0020 (0x000000 - 0x000020)
class FDeltaAction : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FGuid)                                     ActorGuid                                                   OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FDateTime)                                 CommitTime                                                  OFFSET(getStruct<T>, {0x10, 8, 0, 0})
	DMember(uint32_t)                                  DataHash                                                    OFFSET(get<uint32_t>, {0x18, 4, 0, 0})
};

/// Struct /Script/DeltaFileSystem.AddAction
/// Size: 0x0090 (0x000020 - 0x0000B0)
class FAddAction : public FDeltaAction
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	CMember(TWeakObjectPtr<UClass*>)                   ActorClass                                                  OFFSET(get<T>, {0x20, 32, 0, 0})
	SMember(FString)                                   JsonStringObjectForPropertyData                             OFFSET(getStruct<T>, {0x40, 16, 0, 0})
	SMember(FTransform)                                Transform                                                   OFFSET(getStruct<T>, {0x50, 96, 0, 0})
};

/// Struct /Script/DeltaFileSystem.UpdateAction
/// Size: 0x0010 (0x000020 - 0x000030)
class FUpdateAction : public FDeltaAction
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FString)                                   JsonStringObjectForPropertyData                             OFFSET(getStruct<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/DeltaFileSystem.DeleteAction
/// Size: 0x0070 (0x000020 - 0x000090)
class FDeleteAction : public FDeltaAction
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FString)                                   ActorName                                                   OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	SMember(FTransform)                                Transform                                                   OFFSET(getStruct<T>, {0x30, 96, 0, 0})
};

/// Struct /Script/DeltaFileSystem.DeltaTrackingHandles
/// Size: 0x0050 (0x000000 - 0x000050)
class FDeltaTrackingHandles : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

