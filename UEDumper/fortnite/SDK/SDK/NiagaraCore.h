
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject

/// Enum /Script/NiagaraCore.ENiagaraIterationSource
/// Size: 0x04
enum class ENiagaraIterationSource : uint8_t
{
	ENiagaraIterationSource__Particles                                               = 0,
	ENiagaraIterationSource__DataInterface                                           = 1,
	ENiagaraIterationSource__DirectSet                                               = 2,
	ENiagaraIterationSource__ENiagaraIterationSource_MAX                             = 3
};

/// Class /Script/NiagaraCore.NiagaraMergeable
/// Size: 0x0000 (0x000028 - 0x000028)
class UNiagaraMergeable : public UObject
{ 
public:
};

/// Class /Script/NiagaraCore.NiagaraDataInterfaceBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UNiagaraDataInterfaceBase : public UNiagaraMergeable
{ 
public:
};

/// Struct /Script/NiagaraCore.NiagaraVariableCommonReference
/// Size: 0x0010 (0x000000 - 0x000010)
struct FNiagaraVariableCommonReference
{ 
	FName                                              Name;                                                       // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	class UObject*                                     UnderlyingType;                                             // 0x0008   (0x0008)  
};

/// Struct /Script/NiagaraCore.NiagaraCompileHash
/// Size: 0x0010 (0x000000 - 0x000010)
struct FNiagaraCompileHash
{ 
	TArray<char>                                       DataHash;                                                   // 0x0000   (0x0010)  
};

