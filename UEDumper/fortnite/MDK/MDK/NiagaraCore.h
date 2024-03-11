
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject

/// Class /Script/NiagaraCore.NiagaraMergeable
/// Size: 0x0000 (0x000028 - 0x000028)
class UNiagaraMergeable : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/NiagaraCore.NiagaraDataInterfaceBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UNiagaraDataInterfaceBase : public UNiagaraMergeable
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Struct /Script/NiagaraCore.NiagaraVariableCommonReference
/// Size: 0x0010 (0x000000 - 0x000010)
class FNiagaraVariableCommonReference : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(class UObject*)                            UnderlyingType                                              OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/NiagaraCore.NiagaraCompileHash
/// Size: 0x0010 (0x000000 - 0x000010)
class FNiagaraCompileHash : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<char>)                              DataHash                                                    OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Enum /Script/NiagaraCore.ENiagaraIterationSource
/// Size: 0x04
enum class ENiagaraIterationSource : uint8_t
{
	ENiagaraIterationSource__Particles                                               = 0,
	ENiagaraIterationSource__DataInterface                                           = 1,
	ENiagaraIterationSource__DirectSet                                               = 2,
	ENiagaraIterationSource__ENiagaraIterationSource_MAX                             = 3
};

