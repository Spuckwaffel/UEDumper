
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// This file contains all definitions of structs that werent defined automatically.



//TODO: Define FMulticastInlineDelegate!


//TODO: Define TWeakObjectPtr!


//TODO: Define FDelegateProperty!


//TODO: Define TSet!


//TODO: Define FMulticastSparseDelegate!


//TODO: Define TLazyObjectPtr!


/// Definition for TArray

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


/// Definition for FString

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


/// Definition for FName

typedef uint32_t FNameEntryId;

struct FName
{
    /** Index into the Names array (used to find String portion of the string/number pair used for comparison) */
    FNameEntryId ComparisonIndex = 0;

	/** Number portion of the string/number pair (stored internally as 1 more than actual, so zero'd memory will be the default, no-instance case) */
    FNameEntryId Number = 0;

};


/// Definition for FScriptInterface

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


/// Definition for TScriptInterface

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


/// Definition for TEnumAsByte

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


/// Definition for TPair

template <typename KeyType, typename ValueType>
class TPair
{
public:
	KeyType First;
    ValueType Second;
};


/// Definition for TUniquePtr

template <typename PtrType>
class TUniquePtr
{
public:
	PtrType* Ptr = nullptr;
};


/// Definition for FScriptMulticastDelegate

struct FScriptMulticastDelegate
{
    char UnknownData[16];
    char b : 1;
};


/// Definition for FTextData

class FTextData {
public:
    char pad_0x0000[0x28];  //0x0000
    wchar_t* Name;          //0x0028 
    __int32 Length;         //0x0030 

};


/// Definition for FText

struct FText
{
    FTextData* Data;
    char UnknownData[0x10];
};


/// Definition for TSetElement

template<typename ElementType>
class TSetElement
{
public:
    ElementType                                                Value;                                                   // 0x0000(0x0000)
    int32_t                                                    HashNextId;                                              // 0x0000(0x0000)
    int32_t                                                    HashIndex;                                               // 0x0000(0x0000)
};


/// Definition for TMap

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


/// Definition for EObjectFlags

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


