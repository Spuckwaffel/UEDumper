
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// This file contains all definitions of structs that werent defined automatically.



//TODO: Define FMulticastInlineDelegate!


//TODO: Define TWeakObjectPtr!


//TODO: Define FString!


//TODO: Define FDelegateProperty!


//TODO: Define TSet!


//TODO: Define FMulticastSparseDelegate!


//TODO: Define EObjectFlags!


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


/// Definition for FName

typedef uint32_t FNameEntryId;

struct FName
{
    /** Index into the Names array (used to find String portion of the string/number pair used for comparison) */
    FNameEntryId ComparisonIndex = 0;

	/** Number portion of the string/number pair (stored internally as 1 more than actual, so zero'd memory will be the default, no-instance case) */
    FNameEntryId Number = 0;

};


/// Definition for TMap

template<typename Key, typename Value>
class TMap
{
public:
    char UnknownData[0x50];
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
private:
    KeyType First;
    ValueType Second;

public:
    TPair(KeyType Key, ValueType Value)
        : First(Key)
        , Second(Value)
    {
    }
    TPair(){};

public:
    __forceinline KeyType& Key()
    {
        return First;
    }
    __forceinline const KeyType& Key() const
    {
        return First;
    }
    __forceinline ValueType& Value()
    {
        return Second;
    }
    __forceinline const ValueType& Value() const
    {
        return Second;
    }
};


/// Definition for TUniquePtr

template <typename PtrType>
class TUniquePtr
{
private:
    PtrType* Ptr = nullptr;

public:
    bool IsValid() const
    {
        return Ptr != nullptr;
    }

    __forceinline explicit operator bool() const
    {
        return IsValid();
    }

    __forceinline bool operator!() const
    {
        return !IsValid();
    }

    __forceinline PtrType* operator->() const
    {
        return Ptr;
    }

    __forceinline PtrType& operator*() const
    {
        return *Ptr;
    }

    __forceinline const PtrType*& Get() const
    {
        return Ptr;
    }

    __forceinline PtrType*& Get()
    {
        return Ptr;
    }
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


