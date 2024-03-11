
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: Chooser
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: StructUtils

/// Class /Script/ProxyTable.ChooserParameterProxyTable
/// Size: 0x0000 (0x000028 - 0x000028)
class UChooserParameterProxyTable : public UInterface
{ 
public:
};

/// Class /Script/ProxyTable.ProxyAsset
/// Size: 0x0060 (0x000028 - 0x000088)
class UProxyAsset : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x48];                                      // 0x0000   (0x0048)  MISSED
	class UClass*                                      Type;                                                       // 0x0048   (0x0008)  
	EObjectChooserResultType                           ResultType;                                                 // 0x0050   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0054   (0x0004)  MISSED
	TArray<FInstancedStruct>                           ContextData;                                                // 0x0058   (0x0010)  
	FInstancedStruct                                   ProxyTable;                                                 // 0x0068   (0x0010)  
	FGuid                                              Guid;                                                       // 0x0078   (0x0010)  
};

/// Struct /Script/ProxyTable.ProxyStructOutput
/// Size: 0x0038 (0x000000 - 0x000038)
struct FProxyStructOutput
{ 
	FChooserStructPropertyBinding                      Binding;                                                    // 0x0000   (0x0028)  
	FInstancedStruct                                   Value;                                                      // 0x0028   (0x0010)  
};

/// Struct /Script/ProxyTable.RuntimeProxyValue
/// Size: 0x0028 (0x000000 - 0x000028)
struct FRuntimeProxyValue
{ 
	class UProxyAsset*                                 ProxyAsset;                                                 // 0x0000   (0x0008)  
	FInstancedStruct                                   Value;                                                      // 0x0008   (0x0010)  
	TArray<FProxyStructOutput>                         OutputStructData;                                           // 0x0018   (0x0010)  
};

/// Class /Script/ProxyTable.ProxyTable
/// Size: 0x0020 (0x000028 - 0x000048)
class UProxyTable : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	TArray<FGuid>                                      Keys;                                                       // 0x0028   (0x0010)  
	TArray<FRuntimeProxyValue>                         RuntimeValues;                                              // 0x0038   (0x0010)  
};

/// Class /Script/ProxyTable.ProxyTableFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UProxyTableFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/ProxyTable.ProxyTableFunctionLibrary.MakeLookupProxyWithOverrideTable
	// FInstancedStruct MakeLookupProxyWithOverrideTable(class UProxyAsset* Proxy, class UProxyTable* ProxyTable);           // [0x78bd5e4] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/ProxyTable.ProxyTableFunctionLibrary.MakeLookupProxy
	// FInstancedStruct MakeLookupProxy(class UProxyAsset* Proxy);                                                           // [0x78bd518] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/ProxyTable.ProxyTableFunctionLibrary.EvaluateProxyTable
	// class UObject* EvaluateProxyTable(class UObject* ContextObject, class UProxyTable* ProxyTable, FName Key);            // [0x78bd30c] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/ProxyTable.ProxyTableFunctionLibrary.EvaluateProxyAsset
	// class UObject* EvaluateProxyAsset(class UObject* ContextObject, class UProxyAsset* Proxy, class UClass* ObjectClass); // [0x78bd13c] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Struct /Script/ProxyTable.ChooserParameterProxyTableBase
/// Size: 0x0000 (0x000008 - 0x000008)
struct FChooserParameterProxyTableBase : FChooserParameterBase
{ 
};

/// Struct /Script/ProxyTable.ProxyTableContextProperty
/// Size: 0x0028 (0x000008 - 0x000030)
struct FProxyTableContextProperty : FChooserParameterProxyTableBase
{ 
	FChooserPropertyBinding                            Binding;                                                    // 0x0008   (0x0028)  
};

/// Struct /Script/ProxyTable.LookupProxy
/// Size: 0x0018 (0x000008 - 0x000020)
struct FLookupProxy : FObjectChooserBase
{ 
	class UProxyAsset*                                 Proxy;                                                      // 0x0008   (0x0008)  
	FInstancedStruct                                   ProxyTable;                                                 // 0x0010   (0x0010)  
};

/// Struct /Script/ProxyTable.LookupProxyWithOverrideTable
/// Size: 0x0010 (0x000008 - 0x000018)
struct FLookupProxyWithOverrideTable : FObjectChooserBase
{ 
	class UProxyAsset*                                 Proxy;                                                      // 0x0008   (0x0008)  
	class UProxyTable*                                 OverrideProxyTable;                                         // 0x0010   (0x0008)  
};

/// Struct /Script/ProxyTable.ProxyEntry
/// Size: 0x0030 (0x000000 - 0x000030)
struct FProxyEntry
{ 
	class UProxyAsset*                                 Proxy;                                                      // 0x0000   (0x0008)  
	FName                                              Key;                                                        // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	FInstancedStruct                                   ValueStruct;                                                // 0x0010   (0x0010)  
	TArray<FProxyStructOutput>                         OutputStructData;                                           // 0x0020   (0x0010)  
};

