
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject

/// Class /Script/CosmeticsFrameworkFlowgraph.OrderedOperation
/// Size: 0x0000 (0x000028 - 0x000028)
class UOrderedOperation : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Struct /Script/CosmeticsFrameworkFlowgraph.CosmeticFlowData
/// Size: 0x0050 (0x000000 - 0x000050)
class FCosmeticFlowData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TMap<FName, FInstancedStruct>)             NamedData                                                   OFFSET(get<T>, {0x0, 80, 0, 0})
};

/// Struct /Script/CosmeticsFrameworkFlowgraph.OperationSequenceHandle
/// Size: 0x0010 (0x000000 - 0x000010)
class FOperationSequenceHandle : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

