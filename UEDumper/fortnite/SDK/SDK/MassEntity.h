
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine
/// dependency: StructUtils

/// Enum /Script/MassEntity.EMassCommandOperationType
/// Size: 0x08
enum class EMassCommandOperationType : uint8_t
{
	EMassCommandOperationType__None                                                  = 0,
	EMassCommandOperationType__Create                                                = 1,
	EMassCommandOperationType__Add                                                   = 2,
	EMassCommandOperationType__Remove                                                = 3,
	EMassCommandOperationType__ChangeComposition                                     = 4,
	EMassCommandOperationType__Set                                                   = 5,
	EMassCommandOperationType__Destroy                                               = 6,
	EMassCommandOperationType__MAX                                                   = 7
};

/// Enum /Script/MassEntity.EMassObservedOperation
/// Size: 0x03
enum class EMassObservedOperation : uint8_t
{
	EMassObservedOperation__Add                                                      = 0,
	EMassObservedOperation__Remove                                                   = 1,
	EMassObservedOperation__MAX                                                      = 2
};

/// Enum /Script/MassEntity.EProcessorExecutionFlags
/// Size: 0x08
enum class EProcessorExecutionFlags : uint8_t
{
	EProcessorExecutionFlags__None                                                   = 0,
	EProcessorExecutionFlags__Standalone                                             = 1,
	EProcessorExecutionFlags__Server                                                 = 2,
	EProcessorExecutionFlags__Client                                                 = 4,
	EProcessorExecutionFlags__Editor                                                 = 8,
	EProcessorExecutionFlags__AllNetModes                                            = 7,
	EProcessorExecutionFlags__All                                                    = 15,
	EProcessorExecutionFlags__EProcessorExecutionFlags_MAX                           = 16
};

/// Enum /Script/MassEntity.EMassProcessingPhase
/// Size: 0x07
enum class EMassProcessingPhase : uint8_t
{
	EMassProcessingPhase__PrePhysics                                                 = 0,
	EMassProcessingPhase__StartPhysics                                               = 1,
	EMassProcessingPhase__DuringPhysics                                              = 2,
	EMassProcessingPhase__EndPhysics                                                 = 3,
	EMassProcessingPhase__PostPhysics                                                = 4,
	EMassProcessingPhase__FrameEnd                                                   = 5,
	EMassProcessingPhase__MAX                                                        = 6
};

/// Enum /Script/MassEntity.EMassFragmentAccess
/// Size: 0x04
enum class EMassFragmentAccess : uint8_t
{
	EMassFragmentAccess__None                                                        = 0,
	EMassFragmentAccess__ReadOnly                                                    = 1,
	EMassFragmentAccess__ReadWrite                                                   = 2,
	EMassFragmentAccess__MAX                                                         = 3
};

/// Enum /Script/MassEntity.EMassFragmentPresence
/// Size: 0x05
enum class EMassFragmentPresence : uint8_t
{
	EMassFragmentPresence__All                                                       = 0,
	EMassFragmentPresence__Any                                                       = 1,
	EMassFragmentPresence__None                                                      = 2,
	EMassFragmentPresence__Optional                                                  = 3,
	EMassFragmentPresence__MAX                                                       = 4
};

/// Class /Script/MassEntity.MassSubsystemBase
/// Size: 0x0008 (0x000030 - 0x000038)
class UMassSubsystemBase : public UWorldSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0030   (0x0008)  MISSED
};

/// Class /Script/MassEntity.MassTickableSubsystemBase
/// Size: 0x0008 (0x000040 - 0x000048)
class UMassTickableSubsystemBase : public UTickableWorldSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0040   (0x0008)  MISSED
};

/// Class /Script/MassEntity.MassModuleSettings
/// Size: 0x0000 (0x000028 - 0x000028)
class UMassModuleSettings : public UObject
{ 
public:
};

/// Struct /Script/MassEntity.MassProcessingPhaseConfig
/// Size: 0x0020 (0x000000 - 0x000020)
struct FMassProcessingPhaseConfig
{ 
	FName                                              PhaseName;                                                  // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	class UClass*                                      PhaseGroupClass;                                            // 0x0008   (0x0008)  
	TArray<class UMassProcessor*>                      ProcessorCDOs;                                              // 0x0010   (0x0010)  
};

/// Class /Script/MassEntity.MassEntitySettings
/// Size: 0x0108 (0x000028 - 0x000130)
class UMassEntitySettings : public UMassModuleSettings
{ 
public:
	int32_t                                            ChunkMemorySize;                                            // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x002C   (0x0004)  MISSED
	SDK_UNDEFINED(16,11948) /* FString */              __um(DumpDependencyGraphFileName);                          // 0x0030   (0x0010)  
	FMassProcessingPhaseConfig                         ProcessingPhasesConfig;                                     // 0x0040   (0x00C0)  
	TArray<class UMassProcessor*>                      ProcessorCDOs;                                              // 0x0100   (0x0010)  
	unsigned char                                      UnknownData01_6[0x20];                                      // 0x0110   (0x0020)  MISSED
};

/// Class /Script/MassEntity.MassEntitySubsystem
/// Size: 0x0010 (0x000038 - 0x000048)
class UMassEntitySubsystem : public UMassSubsystemBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0038   (0x0010)  MISSED
};

/// Struct /Script/MassEntity.MassProcessorExecutionOrder
/// Size: 0x0028 (0x000000 - 0x000028)
struct FMassProcessorExecutionOrder
{ 
	FName                                              ExecuteInGroup;                                             // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	TArray<FName>                                      ExecuteBefore;                                              // 0x0008   (0x0010)  
	TArray<FName>                                      ExecuteAfter;                                               // 0x0018   (0x0010)  
};

/// Class /Script/MassEntity.MassProcessor
/// Size: 0x0098 (0x000028 - 0x0000C0)
class UMassProcessor : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	int32_t                                            ExecutionFlags;                                             // 0x0028   (0x0004)  
	EMassProcessingPhase                               ProcessingPhase;                                            // 0x002C   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x002D   (0x0003)  MISSED
	FMassProcessorExecutionOrder                       ExecutionOrder;                                             // 0x0030   (0x0028)  
	bool                                               bAutoRegisterWithProcessingPhases;                          // 0x0058   (0x0001)  
	unsigned char                                      UnknownData02_5[0x2];                                       // 0x0059   (0x0002)  MISSED
	bool                                               bRequiresGameThreadExecution;                               // 0x005B   (0x0001)  
	unsigned char                                      UnknownData03_6[0x64];                                      // 0x005C   (0x0064)  MISSED
};

/// Class /Script/MassEntity.MassObserverProcessor
/// Size: 0x0018 (0x0000C0 - 0x0000D8)
class UMassObserverProcessor : public UMassProcessor
{ 
public:
	bool                                               bAutoRegisterWithObserverRegistry;                          // 0x00C0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x00C1   (0x0007)  MISSED
	class UScriptStruct*                               ObservedType;                                               // 0x00C8   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x00D0   (0x0008)  MISSED
};

/// Struct /Script/MassEntity.MassEntityObserverClassesMap
/// Size: 0x0050 (0x000000 - 0x000050)
struct FMassEntityObserverClassesMap
{ 
	SDK_UNDEFINED(80,11949) /* TMap<UScriptStruct*, FMassProcessorClassCollection> */ __um(Container);             // 0x0000   (0x0050)  
};

/// Class /Script/MassEntity.MassObserverRegistry
/// Size: 0x0140 (0x000028 - 0x000168)
class UMassObserverRegistry : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	FMassEntityObserverClassesMap                      FragmentObservers;                                          // 0x0028   (0x00A0)  
	FMassEntityObserverClassesMap                      TagObservers;                                               // 0x00C8   (0x00A0)  
};

/// Struct /Script/MassEntity.MassRuntimePipeline
/// Size: 0x0018 (0x000000 - 0x000018)
struct FMassRuntimePipeline
{ 
	TArray<class UMassProcessor*>                      Processors;                                                 // 0x0000   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0010   (0x0008)  MISSED
};

/// Class /Script/MassEntity.MassCompositeProcessor
/// Size: 0x0040 (0x0000C0 - 0x000100)
class UMassCompositeProcessor : public UMassProcessor
{ 
public:
	FMassRuntimePipeline                               ChildPipeline;                                              // 0x00C0   (0x0018)  
	FName                                              GroupName;                                                  // 0x00D8   (0x0004)  
	unsigned char                                      UnknownData00_6[0x24];                                      // 0x00DC   (0x0024)  MISSED
};

/// Class /Script/MassEntity.MassSettings
/// Size: 0x0050 (0x000030 - 0x000080)
class UMassSettings : public UDeveloperSettings
{ 
public:
	SDK_UNDEFINED(80,11950) /* TMap<FName, UMassModuleSettings*> */ __um(ModuleSettings);                          // 0x0030   (0x0050)  
};

/// Struct /Script/MassEntity.MassFragmentRequirements
/// Size: 0x01E8 (0x000000 - 0x0001E8)
struct FMassFragmentRequirements
{ 
	unsigned char                                      UnknownData00_2[0x1E8];                                     // 0x0000   (0x01E8)  MISSED
};

/// Struct /Script/MassEntity.MassEntityQuery
/// Size: 0x00B8 (0x0001E8 - 0x0002A0)
struct FMassEntityQuery : FMassFragmentRequirements
{ 
	unsigned char                                      UnknownData00_1[0xB8];                                      // 0x01E8   (0x00B8)  MISSED
};

/// Struct /Script/MassEntity.MassFragment
/// Size: 0x0001 (0x000000 - 0x000001)
struct FMassFragment
{ 
};

/// Struct /Script/MassEntity.MassTag
/// Size: 0x0001 (0x000000 - 0x000001)
struct FMassTag
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/MassEntity.MassChunkFragment
/// Size: 0x0001 (0x000000 - 0x000001)
struct FMassChunkFragment
{ 
};

/// Struct /Script/MassEntity.MassSharedFragment
/// Size: 0x0001 (0x000000 - 0x000001)
struct FMassSharedFragment
{ 
};

/// Struct /Script/MassEntity.MassEntityHandle
/// Size: 0x0008 (0x000000 - 0x000008)
struct FMassEntityHandle
{ 
	int32_t                                            Index;                                                      // 0x0000   (0x0004)  
	int32_t                                            SerialNumber;                                               // 0x0004   (0x0004)  
};

/// Struct /Script/MassEntity.MassEntityView
/// Size: 0x0020 (0x000000 - 0x000020)
struct FMassEntityView
{ 
	unsigned char                                      UnknownData00_2[0x20];                                      // 0x0000   (0x0020)  MISSED
};

/// Struct /Script/MassEntity.MassObserversMap
/// Size: 0x0050 (0x000000 - 0x000050)
struct FMassObserversMap
{ 
	SDK_UNDEFINED(80,11951) /* TMap<UScriptStruct*, FMassRuntimePipeline> */ __um(Container);                      // 0x0000   (0x0050)  
};

/// Struct /Script/MassEntity.MassObserverManager
/// Size: 0x01C8 (0x000000 - 0x0001C8)
struct FMassObserverManager
{ 
	FMassObserversMap                                  FragmentObservers;                                          // 0x0080   (0x00A0)  
	FMassObserversMap                                  TagObservers;                                               // 0x0120   (0x00A0)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x01C0   (0x0008)  MISSED
};

/// Struct /Script/MassEntity.MassProcessorClassCollection
/// Size: 0x0010 (0x000000 - 0x000010)
struct FMassProcessorClassCollection
{ 
	TArray<class UClass*>                              ClassCollection;                                            // 0x0000   (0x0010)  
};

/// Struct /Script/MassEntity.ProcessorAuxDataBase
/// Size: 0x0001 (0x000000 - 0x000001)
struct FProcessorAuxDataBase
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/MassEntity.MassProcessingContext
/// Size: 0x0040 (0x000000 - 0x000040)
struct FMassProcessingContext
{ 
	float                                              DeltaSeconds;                                               // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0014   (0x0004)  MISSED
	FInstancedStruct                                   AuxData;                                                    // 0x0018   (0x0010)  
	bool                                               bFlushCommandBuffer;                                        // 0x0028   (0x0001)  
	unsigned char                                      UnknownData01_6[0x17];                                      // 0x0029   (0x0017)  MISSED
};

/// Struct /Script/MassEntity.MassSubsystemRequirements
/// Size: 0x0048 (0x000000 - 0x000048)
struct FMassSubsystemRequirements
{ 
	unsigned char                                      UnknownData00_2[0x48];                                      // 0x0000   (0x0048)  MISSED
};

