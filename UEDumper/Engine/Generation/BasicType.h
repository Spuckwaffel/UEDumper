#pragma once
#include "stdafx.h"
#include "Engine/Userdefined/UEdefinitions.h"
/****************************************************
*													*
*	BasicType.h - Add undefined structs for the		*
*	SDK here. Add all the structs and templates		*
*	here that will get added in the SDK generation	*
*	in the BasicType.h file for a successful SDK	*
*													*
****************************************************/

/*
██████╗░██╗░░░░░███████╗░█████╗░░██████╗███████╗  ██████╗░███████╗░█████╗░██████╗░██╗
██╔══██╗██║░░░░░██╔════╝██╔══██╗██╔════╝██╔════╝  ██╔══██╗██╔════╝██╔══██╗██╔══██╗██║
██████╔╝██║░░░░░█████╗░░███████║╚█████╗░█████╗░░  ██████╔╝█████╗░░███████║██║░░██║██║
██╔═══╝░██║░░░░░██╔══╝░░██╔══██║░╚═══██╗██╔══╝░░  ██╔══██╗██╔══╝░░██╔══██║██║░░██║╚═╝
██║░░░░░███████╗███████╗██║░░██║██████╔╝███████╗  ██║░░██║███████╗██║░░██║██████╔╝██╗
╚═╝░░░░░╚══════╝╚══════╝╚═╝░░╚═╝╚═════╝░╚══════╝  ╚═╝░░╚═╝╚══════╝╚═╝░░╚═╝╚═════╝░╚═╝
*/

/// You HAVE to add all the struct definitions here that are not found in the generation. You can always check the amount of
///	undefined types in the live editor. If you do not add these definitions here, your SDK will not compile as it contains undefined
///	structs. Of course, you can add later on these definitions into the generated BasicType.h file, but its better to add them here.
/// Obviously define the structs that are used in other structs above them :)

struct DefinedStruct
{
    //the name of the struct. This name should match the name in the engine, this is case sensitive!!!!!
    std::string name;

    //your multiline definition of the struct. Dont forget the brackets and ";"
    std::string definition;
};

inline std::vector<DefinedStruct> basicDefinitions()
{
    std::vector<DefinedStruct> definedStructs;

    DefinedStruct dStruct;
    dStruct.name = "TArray";
    dStruct.definition =
        R"(
template <class T = char>
struct TArray
{
    friend struct FString;


public:
    inline TArray()
    {
        Data = nullptr;
        Count = Max = 0;
    };

    inline int Num() const
    {
        return Count;
    };

    inline T& operator[](int i)
    {
        return Data[i];
    };

    inline const T& operator[](int i) const
    {
        return Data[i];
    };

    inline bool IsValidIndex(int i) const
    {
        return i < Num();
    }

    inline int Slack() const
    {
        return Max - Count;
    }

    __forceinline bool RemoveSingle(const int Index)
    {
        if (Index < Count)
        {
            if (Index != Count - 1)
                Data[Index] = Data[Count - 1];

            --Count;

            return true;
        }
        return false;
    }

    __forceinline void RemoveAt(int Index, int Length = 1)
    {
        for (; Length != 0; --Length)
        {
            if (!RemoveSingle(Index++))
                break;
        }
    }

public:
    T* Data;
    int32_t Count;
    int32_t Max;
};
)";
    definedStructs.push_back(dStruct);

    dStruct.name = "FString";
    dStruct.definition =
        R"(
struct FString : public TArray<wchar_t>
{
    inline FString() {};

    FString(const wchar_t* other)
    {
        Max = Count = *other ? static_cast<int32_t>(std::wcslen(other)) + 1 : 0;

        if (Count)
        {
            Data = const_cast<wchar_t*>(other);
        }
    };

    inline bool IsValid() const
    {
        return Data != nullptr;
    }

    inline const wchar_t* c_str() const
    {
        return Data;
    }

    std::string ToString() const
    {
        const auto length = std::wcslen(Data);

        std::string str(length, '\0');

        std::use_facet<std::ctype<wchar_t>>(std::locale()).narrow(Data, Data + length, '?', &str[0]);

        return str;
    }
};
)";
    definedStructs.push_back(dStruct);

    dStruct.name = "FName";
    dStruct.definition =
        R"(
typedef uint32_t FNameEntryId;

struct FName
{
    /** Index into the Names array (used to find String portion of the string/number pair used for comparison) */
    FNameEntryId ComparisonIndex = 0;
)";
    dStruct.definition +=
#if UE_VERSION >= UE_5_01
#if !UE_FNAME_OUTLINE_NUMBER
        R"(
	/** Number portion of the string/number pair (stored internally as 1 more than actual, so zero'd memory will be the default, no-instance case) */
    FNameEntryId Number = 0;
)";
    dStruct.definition +=
#endif
#endif

#if WITH_CASE_PRESERVING_NAME
        R"(
	/** Index into the Names array (used to find String portion of the string/number pair used for display) */
    FNameEntryId DisplayIndex = 0;
)";
    dStruct.definition +=
#endif

#if UE_VERSION < UE_5_01
        R"(
    /** Number portion of the string/number pair (stored internally as 1 more than actual, so zero'd memory will be the default, no-instance case) */
	int32_t Number = 0;
)";
    dStruct.definition +=
#endif
        R"(
};
)";

    definedStructs.push_back(dStruct);


    dStruct.name = "FScriptInterface";
    dStruct.definition =
        R"(
class FScriptInterface
{
private:
    uint64_t* ObjectPointer;
    void* InterfacePointer;

public:
    inline uint64_t* GetObject() const
    {
        return ObjectPointer;
    }

    inline uint64_t*& GetObjectRef()
    {
        return ObjectPointer;
    }

    inline void* GetInterface() const
    {
        return ObjectPointer != nullptr ? InterfacePointer : nullptr;
    }
};
)";

    definedStructs.push_back(dStruct);

    dStruct.name = "TScriptInterface";
    dStruct.definition =
        R"(
template<class InterfaceType>
class TScriptInterface : public FScriptInterface
{
public:
    inline InterfaceType* operator->() const
    {
        return (InterfaceType*)GetInterface();
    }

    inline InterfaceType& operator*() const
    {
        return *((InterfaceType*)GetInterface());
    }

    inline operator bool() const
    {
        return GetInterface() != nullptr;
    }
};
)";

    definedStructs.push_back(dStruct);

    dStruct.name = "TEnumAsByte";
    dStruct.definition =
        R"(
template<class TEnum>
class TEnumAsByte
{
public:
    inline TEnumAsByte()
    {
    }

    inline TEnumAsByte(TEnum _value)
        : value(static_cast<uint8_t>(_value))
    {
    }

    explicit inline TEnumAsByte(int32_t _value)
        : value(static_cast<uint8_t>(_value))
    {
    }

    explicit inline TEnumAsByte(uint8_t _value)
        : value(_value)
    {
    }

    inline operator TEnum() const
    {
        return (TEnum)value;
    }

    inline TEnum GetValue() const
    {
        return (TEnum)value;
    }

private:
    uint8_t value;
};
)";

    definedStructs.push_back(dStruct);

    dStruct.name = "FWeakObjectPtr";
    dStruct.definition =
        R"(
class FWeakObjectPtr
{
public:
	int32_t ObjectIndex;
	int32_t ObjectSerialNumber;
};
)";

    definedStructs.push_back(dStruct);

    dStruct.name = "TWeakObjectPtr";
    dStruct.definition =
        R"(
template<typename UEType>
class TWeakObjectPtr : public FWeakObjectPtr
{
public:
};
)";

    definedStructs.push_back(dStruct);

    dStruct.name = "TPersistentObjectPtr";

#if UE_VERSION < UE_5_03
    dStruct.definition =
        R"(
template<typename TObjectID>
class TPersistentObjectPtr
{
public:
	FWeakObjectPtr WeakPtr;
	int32_t TagAtLastTest;
	TObjectID ObjectID;
};
)";
#else
    dStruct.definition =
        R"(
template<typename TObjectID>
class TPersistentObjectPtr
{
public:
	FWeakObjectPtr WeakPtr;
	TObjectID ObjectID;
};
)";
#endif

    definedStructs.push_back(dStruct);

    dStruct.name = "FUniqueObjectGuid";
    dStruct.definition =
        R"(
class FUniqueObjectGuid final
{
public:
	uint32_t A;
	uint32_t B;
	uint32_t C;
	uint32_t D;
};
)";

    definedStructs.push_back(dStruct);

    dStruct.name = "TLazyObjectPtr";
    dStruct.definition =
        R"(
template<typename UEType>
class TLazyObjectPtr : public TPersistentObjectPtr<FUniqueObjectGuid>
{
public:
};
)";

    definedStructs.push_back(dStruct);

    dStruct.name = "FSoftObjectPath_";
#if UE_VERSION < UE_5_01
    dStruct.definition =
        R"(
struct FSoftObjectPath_
{
public:
	FName AssetPathName;
	FString SubPathString;
};
)";
#else
    dStruct.definition =
        R"(
struct FSoftObjectPath_
{
public:
	FName PackageName;
    FName AssetName;
	FString SubPathString;
};
)";
#endif

    definedStructs.push_back(dStruct);

    dStruct.name = "FSoftObjectPtr";
    dStruct.definition =
        R"(
class FSoftObjectPtr : public TPersistentObjectPtr<FSoftObjectPath_>
{
};
)";

    definedStructs.push_back(dStruct);

    dStruct.name = "TSoftObjectPtr";
    dStruct.definition =
        R"(
template<typename UEType>
class TSoftObjectPtr : public FSoftObjectPtr
{
public:
};
)";

    definedStructs.push_back(dStruct);

    dStruct.name = "TSoftClassPtr";
    dStruct.definition =
        R"(
template<typename UEType>
class TSoftClassPtr : public FSoftObjectPtr
{
public:
};
)";

    definedStructs.push_back(dStruct);

    dStruct.name = "TPair";
    dStruct.definition =
        R"(
template <typename KeyType, typename ValueType>
class TPair
{
public:
	KeyType First;
    ValueType Second;
};
)";

    definedStructs.push_back(dStruct);

    dStruct.name = "TUniquePtr";
    dStruct.definition =
        R"(
template <typename PtrType>
class TUniquePtr
{
public:
	PtrType* Ptr = nullptr;
};
)";

    definedStructs.push_back(dStruct);

    dStruct.name = "FScriptMulticastDelegate";
    dStruct.definition =
        R"(
struct FScriptMulticastDelegate
{
    char UnknownData[16];
    char b : 1;
};
)";

    definedStructs.push_back(dStruct);

    dStruct.name = "FTextData";
    dStruct.definition =
        R"(
class FTextData {
public:
    char pad_0x0000[0x28];  //0x0000
    wchar_t* Name;          //0x0028 
    __int32 Length;         //0x0030 

};
)";

    definedStructs.push_back(dStruct);

    dStruct.name = "FText";
    dStruct.definition =
        R"(
struct FText
{
    FTextData* Data;
    char UnknownData[0x10];
};
)";

    definedStructs.push_back(dStruct);

    dStruct.name = "TSetElement";
    dStruct.definition =
        R"(
template<typename ElementType>
class TSetElement
{
public:
    ElementType                                                Value;                                                   // 0x0000(0x0000)
    int32_t                                                    HashNextId;                                              // 0x0000(0x0000)
    int32_t                                                    HashIndex;                                               // 0x0000(0x0000)
};
)";
    definedStructs.push_back(dStruct);

    dStruct.name = "TMap";
    dStruct.definition =
        R"(
template<typename Key, typename Value>
class TMap
{
public:
	TArray<TSetElement<TPair<Key, Value>>>                     Data;                                                    // 0x0000(0x0000)
private:
	uint8_t                                                    UnknownData01[0x04];                                     // 0x0000(0x0000)
	uint8_t                                                    UnknownData02[0x04];                                     // 0x0000(0x0000)
	uint8_t                                                    UnknownData03[0x08];                                     // 0x0000(0x0000)
	uint8_t                                                    UnknownData04[0x08];                                     // 0x0000(0x0000)
	uint8_t                                                    UnknownData_MayBeSize[0x04];                             // 0x0000(0x0000)
	uint8_t                                                    UnknownData_MayBeFlag[0x04];                             // 0x0000(0x0000)
	uint8_t                                                    UnknownData05[0x08];                                     // 0x0000(0x0000)
	uint8_t                                                    UnknownData06[0x08];                                     // 0x0000(0x0000)
	uint8_t                                                    UnknownData07[0x08];                                     // 0x0000(0x0000)
	uint8_t                                                    UnknownData_MayBeSize02[0x04];                           // 0x0000(0x0000)
	uint8_t                                                    UnknownData08[0x04];                                     // 0x0000(0x0000)
};
)";
    definedStructs.push_back(dStruct);


    dStruct.name = "EObjectFlags";
    // Taken from UnrealClasses.h - copy/update that as the source of truth
    dStruct.definition =
        R"(
enum class EObjectFlags : uint32_t
{
	// Do not add new flags unless they truly belong here. There are alternatives.
	// if you change any the bit of any of the RF_Load flags, then you will need legacy serialization
	RF_NoFlags = 0x00000000,	///< No flags, used to avoid a cast

	// This first group of flags mostly has to do with what kind of object it is. Other than transient, these are the persistent object flags.
	// The garbage collector also tends to look at these.
	RF_Public = 0x00000001,	///< Object is visible outside its package.
	RF_Standalone = 0x00000002,	///< Keep object around for editing even if unreferenced.
	RF_MarkAsNative = 0x00000004,	///< Object (UField) will be marked as native on construction (DO NOT USE THIS FLAG in HasAnyFlags() etc)
	RF_Transactional = 0x00000008,	///< Object is transactional.
	RF_ClassDefaultObject = 0x00000010,	///< This object is its class's default object
	RF_ArchetypeObject = 0x00000020,	///< This object is a template for another object - treat like a class default object
	RF_Transient = 0x00000040,	///< Don't save object.

	// This group of flags is primarily concerned with garbage collection.
	RF_MarkAsRootSet = 0x00000080,	///< Object will be marked as root set on construction and not be garbage collected, even if unreferenced (DO NOT USE THIS FLAG in HasAnyFlags() etc)
	RF_TagGarbageTemp = 0x00000100,	///< This is a temp user flag for various utilities that need to use the garbage collector. The garbage collector itself does not interpret it.

	// The group of flags tracks the stages of the lifetime of a uobject
	RF_NeedInitialization = 0x00000200,	///< This object has not completed its initialization process. Cleared when ~FObjectInitializer completes
	RF_NeedLoad = 0x00000400,	///< During load, indicates object needs loading.
	RF_KeepForCooker = 0x00000800,	///< Keep this object during garbage collection because it's still being used by the cooker
	RF_NeedPostLoad = 0x00001000,	///< Object needs to be postloaded.
	RF_NeedPostLoadSubobjects = 0x00002000,	///< During load, indicates that the object still needs to instance subobjects and fixup serialized component references
	RF_NewerVersionExists = 0x00004000,	///< Object has been consigned to oblivion due to its owner package being reloaded, and a newer version currently exists
	RF_BeginDestroyed = 0x00008000,	///< BeginDestroy has been called on the object.
	RF_FinishDestroyed = 0x00010000,	///< FinishDestroy has been called on the object.

	// Misc. Flags
	RF_BeingRegenerated = 0x00020000,	///< Flagged on UObjects that are used to create UClasses (e.g. Blueprints) while they are regenerating their UClass on load (See FLinkerLoad::CreateExport())
	RF_DefaultSubObject = 0x00040000,	///< Flagged on subobjects that are defaults
	RF_WasLoaded = 0x00080000,	///< Flagged on UObjects that were loaded
	RF_TextExportTransient = 0x00100000,	///< Do not export object to text form (e.g. copy/paste). Generally used for sub-objects that can be regenerated from data in their parent object.
	RF_LoadCompleted = 0x00200000,	///< Object has been completely serialized by linkerload at least once. DO NOT USE THIS FLAG, It should be replaced with RF_WasLoaded.
	RF_InheritableComponentTemplate = 0x00400000, ///< Archetype of the object can be in its super class
	RF_DuplicateTransient = 0x00800000, ///< Object should not be included in any type of duplication (copy/paste, binary duplication, etc.)
	RF_StrongRefOnFrame = 0x01000000,	///< References to this object from persistent function frame are handled as strong ones.
	RF_NonPIEDuplicateTransient = 0x02000000,  ///< Object should not be included for duplication unless it's being duplicated for a PIE session
	RF_Dynamic = 0x04000000, // Field Only. Dynamic field - doesn't get constructed during static initialization, can be constructed multiple times
	RF_WillBeLoaded = 0x08000000, // This object was constructed during load and will be loaded shortly
};
)";

    definedStructs.push_back(dStruct);

    return definedStructs;
}