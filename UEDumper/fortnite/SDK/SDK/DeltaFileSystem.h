
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/DeltaFileSystem.DeltaFileSaveHandlerTestContext
/// Size: 0x0008 (0x000028 - 0x000030)
class UDeltaFileSaveHandlerTestContext : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	class UDeltaFileSaveHandler*                       SaveHandler;                                                // 0x0028   (0x0008)  
};

/// Class /Script/DeltaFileSystem.DeltaFile
/// Size: 0x0000 (0x000028 - 0x000028)
class UDeltaFile : public UInterface
{ 
public:
};

/// Class /Script/DeltaFileSystem.DeltaFileApplier
/// Size: 0x0000 (0x000028 - 0x000028)
class UDeltaFileApplier : public UInterface
{ 
public:
};

/// Class /Script/DeltaFileSystem.DeltaComponent
/// Size: 0x0010 (0x0000A0 - 0x0000B0)
class UDeltaComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x00A0   (0x0010)  MISSED
};

/// Class /Script/DeltaFileSystem.DeltaFileSaveHandler
/// Size: 0x0118 (0x000028 - 0x000140)
class UDeltaFileSaveHandler : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x140];                                     // 0x0000   (0x0140)  MISSED
};

/// Class /Script/DeltaFileSystem.DeltaFileSubsystem
/// Size: 0x00B8 (0x000030 - 0x0000E8)
class UDeltaFileSubsystem : public UEngineSubsystem
{ 
public:
	SDK_UNDEFINED(80,1979) /* TMap<UWorld*, FDeltaTrackingHandles> */ __um(WorldToTrackingHandles);                // 0x0030   (0x0050)  
	SDK_UNDEFINED(80,1980) /* TMap<FName, UObject*> */ __um(DeltaFiles);                                           // 0x0080   (0x0050)  
	FSoftClassPath                                     DefaultDeltaFileClass;                                      // 0x00D0   (0x0018)  
};

/// Struct /Script/DeltaFileSystem.DeltaAction
/// Size: 0x0020 (0x000000 - 0x000020)
struct FDeltaAction
{ 
	FGuid                                              ActorGuid;                                                  // 0x0000   (0x0010)  
	FDateTime                                          CommitTime;                                                 // 0x0010   (0x0008)  
	uint32_t                                           DataHash;                                                   // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Struct /Script/DeltaFileSystem.UpdateAction
/// Size: 0x0010 (0x000020 - 0x000030)
struct FUpdateAction : FDeltaAction
{ 
	SDK_UNDEFINED(16,1981) /* FString */               __um(JsonStringObjectForPropertyData);                      // 0x0020   (0x0010)  
};

/// Class /Script/DeltaFileSystem.MapDelta
/// Size: 0x00C8 (0x000028 - 0x0000F0)
class UMapDelta : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x30];                                      // 0x0000   (0x0030)  MISSED
	SDK_UNDEFINED(16,1982) /* FString */               __um(PackageToApplyTo);                                     // 0x0030   (0x0010)  
	SDK_UNDEFINED(80,1983) /* TMap<FGuid, FAddAction> */ __um(AddActions);                                         // 0x0040   (0x0050)  
	TArray<FUpdateAction>                              UpdateActions;                                              // 0x0090   (0x0010)  
	SDK_UNDEFINED(80,1984) /* TMap<FGuid, FDeleteAction> */ __um(DeleteActions);                                   // 0x00A0   (0x0050)  
};

/// Class /Script/DeltaFileSystem.MapDeltaApplier
/// Size: 0x00C8 (0x000028 - 0x0000F0)
class UMapDeltaApplier : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0xF0];                                      // 0x0000   (0x00F0)  MISSED
};

/// Struct /Script/DeltaFileSystem.AddAction
/// Size: 0x0090 (0x000020 - 0x0000B0)
struct FAddAction : FDeltaAction
{ 
	SDK_UNDEFINED(32,1985) /* TWeakObjectPtr<UClass*> */ __um(ActorClass);                                         // 0x0020   (0x0020)  
	SDK_UNDEFINED(16,1986) /* FString */               __um(JsonStringObjectForPropertyData);                      // 0x0040   (0x0010)  
	FTransform                                         Transform;                                                  // 0x0050   (0x0060)  
};

/// Struct /Script/DeltaFileSystem.DeleteAction
/// Size: 0x0070 (0x000020 - 0x000090)
struct FDeleteAction : FDeltaAction
{ 
	SDK_UNDEFINED(16,1987) /* FString */               __um(ActorName);                                            // 0x0020   (0x0010)  
	FTransform                                         Transform;                                                  // 0x0030   (0x0060)  
};

/// Struct /Script/DeltaFileSystem.DeltaTrackingHandles
/// Size: 0x0050 (0x000000 - 0x000050)
struct FDeltaTrackingHandles
{ 
	unsigned char                                      UnknownData00_2[0x50];                                      // 0x0000   (0x0050)  MISSED
};

