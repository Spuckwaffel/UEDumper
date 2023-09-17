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
template <class T>
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

    FORCEINLINE bool RemoveSingle(const int Index)
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

    FORCEINLINE void RemoveAt(int Index, int Length = 1)
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

    dStruct.name = "FName";
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

    dStruct.name = "TMap";
    dStruct.definition =
        R"(
template<typename Key, typename Value>
class TMap
{
public:
    char UnknownData[0x50];
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

    dStruct.name = "TPair";
    dStruct.definition =
        R"(
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
    FORCEINLINE KeyType& Key()
    {
        return First;
    }
    FORCEINLINE const KeyType& Key() const
    {
        return First;
    }
    FORCEINLINE ValueType& Value()
    {
        return Second;
    }
    FORCEINLINE const ValueType& Value() const
    {
        return Second;
    }
};
)";

    definedStructs.push_back(dStruct);

    dStruct.name = "TUniquePtr";
    dStruct.definition =
        R"(
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

    FORCEINLINE explicit operator bool() const
    {
        return IsValid();
    }

    FORCEINLINE bool operator!() const
    {
        return !IsValid();
    }

    FORCEINLINE PtrType* operator->() const
    {
        return Ptr;
    }

    FORCEINLINE PtrType& operator*() const
    {
        return *Ptr;
    }

    FORCEINLINE const PtrType*& Get() const
    {
        return Ptr;
    }

    FORCEINLINE PtrType*& Get()
    {
        return Ptr;
    }
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

    return definedStructs;
}