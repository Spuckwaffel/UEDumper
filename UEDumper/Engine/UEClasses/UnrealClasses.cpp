// ReSharper disable CppPossiblyUnintendedObjectSlicing
#include "UnrealClasses.h"

#include "Engine/Core/Core.h"
#include "Engine/Core/ObjectsManager.h"

#define UREADORNULL(x,y) \
    if (y)          \
    {               \
        return ObjectsManager::getUObject<x>(y);\
    }               \
    return nullptr;

UObject* UObject::getOuter() const
{
    UREADORNULL(UObject, OuterPrivate)
}

UClass* UObject::getClass() const
{
    UREADORNULL(UClass, ClassPrivate)
}

std::string UObject::getName() const
{
    return EngineCore::FNameToString(NamePrivate);
}

std::string UObject::getName(const FName& fName)
{
    return EngineCore::FNameToString(fName);
}

std::string UObject::getFullName() const
{
    const std::string name = getName();
    std::string temp = "";
    for (const UObject* outer = getOuter(); outer; outer = outer->getOuter())
    {
        if (!outer)
            break;
        temp = outer->getName() + "." + temp;
    }

    std::string fullname = temp + name;

    return fullname;
}

std::string UObject::getCName()
{
    std::string name = "nil";

    if (!this)
        return name;

    if (IsA<UClass>())
    {
        //read again but as a struct
        auto uStruct = castTo<UStruct>();

        if (!uStruct)
        {
            puts("WARN: invalid state! after casting its invalid????");
            name = "U";
        }

        //whitelisted are: AActor and UObject
        //taken from UnrealFinderTool GenericTypes.cpp:119
        if (getFullName() == "/Script/CoreUObject.Object")
        {
            name = "U";
        }
        else if (getFullName() == "/Script/Engine.Actor")
        {
            name = "A";
        }
        else
        {
            while (uStruct && uStruct->SuperStruct)
            {
                uStruct = uStruct->getSuper();
                if (uStruct == AActor::staticClass())
                {
                    name = "A";
                    break;
                }
                if (uStruct == UObject::staticClass())
                {
                    name = "U";
                    break;
                }
            }
        }
        //make additional check for UObject as that one does not have a superstruct but is valid
        if (name == "nil")
        {
            printf("superstruct failed!\n");
            printf("name: %s\n", getFullName().c_str());
            if (uStruct)
                printf("name: %s\n", uStruct->getFullName().c_str());
            else
                puts("name: ???\n");
            //DebugBreak();
            name = "U";
        }
    }
    else
    {
        name = "F";
    }

    name += getName();
    return name;
}

UObject* UObject::getOwnPointer() const
{
    if (!objectptr)
    {
        printf("%s has no own pointer?\n", getFullName().c_str());
    }


    return reinterpret_cast<UObject*>(objectptr);
}

UObject* UObject::getPackageObject() const
{
    if (const auto ptr = getPackageObjectFnPtr())
    {
        return ObjectsManager::getUObject<UObject>(ptr);
    }
    return nullptr;
}

UObject* UObject::getPackageObjectFnPtr() const
{
    UObject* pouter = OuterPrivate;

    auto package = getOuter();

    while (pouter && package)
    {
        UObject* nOuter = package->OuterPrivate;
        if (pouter == nOuter)
        {
            return nOuter;
        }
        if (nOuter == nullptr)
        {
            return pouter;
        }

        pouter = nOuter;

        package = package->getOuter();
    }
    //printf("returning empty pointer!");
    //DebugBreak();
    return pouter;
}

std::string UObject::getSecondPackageName() const
{
    std::string package;
    if (!getPackageObject())
        package = getName().c_str();
    else
    {
        package = getPackageObject()->getName().c_str();
        if (package == "None")
            package = getName().c_str();
    }
    std::stringstream ss(package.substr(1).c_str());
    std::string token;
    std::vector<std::string> output;
    while (std::getline(ss, token, '/')) {
        output.push_back(token);
    }

    if (output.size() == 0)
        return package.substr(1);

    if (output.size() < 2) {
        return output[0];
    }
    return output[1];
}

bool UObject::IsA(const UClass* staticClass) const
{
    if (!ClassPrivate) return false;
    UClass* oldSup = nullptr;
    for (auto super = getClass(); super; super = super->getSuper<UClass>())
    {
        if (!super || oldSup == super)
            return false;
        std::string fullname = super->getFullName();
        if (super == staticClass)
        {
            //printf("%s\n", fullname.c_str());
            return true;
        }
        oldSup = super;
    }
    return false;

}

UClass* UObject::staticClass()
{
    return ObjectsManager::findObject<UClass>("/Script/CoreUObject.Object");
}

UClass* AActor::staticClass()
{
    return ObjectsManager::findObject<UClass>("/Script/Engine.Actor");
}

UField* UField::getNext() const
{
    UREADORNULL(UField, Next)
}

UClass* UField::staticClass()
{
    return ObjectsManager::findObject<UClass>("/Script/CoreUObject.Field");
}

template <typename T>
T* UStruct::getSuper()
{
    UREADORNULL(T, SuperStruct)
}

UStruct* UStruct::getSuper() const
{
    UREADORNULL(UStruct, SuperStruct)
}

std::vector<UObject*> UStruct::getAllSupers() const
{
    std::vector<UObject*> supers;
    for (auto obj = getSuper(); obj; obj = obj->getSuper())
    {
        supers.push_back(obj);
    }
    return supers;
}

template <typename T>
T* UStruct::getChildren()
{
    UREADORNULL(T, Children)
}

UField* UStruct::getChildren() const
{
    UREADORNULL(UField, Children)
}

UClass* UStruct::staticClass()
{
#if UE_VERSION == UE_4_25 && USE_LOWERCASE_STRUCT
    //please can someone explain why the fuck they decided to write struct in lowercase
    return ObjectsManager::findObject<UClass>("/Script/CoreUObject.struct", true);
#else
    return ObjectsManager::findObject<UClass>("/Script/CoreUObject.Struct", true);
#endif
}

std::vector<TPair<FName, int64_t>> UEnum::getNames() const
{
    std::vector<TPair<FName, int64_t>> vec(Names.Count);

    Memory::read(Names.Data, vec.data(), sizeof(TPair<FName, int64_t>) * Names.Count);

    return vec;
}

UClass* UEnum::staticClass()
{
    return ObjectsManager::findObject<UClass>("/Script/CoreUObject.Enum", true);
}

UClass* UScriptStruct::staticClass()
{
    return ObjectsManager::findObject<UClass>("/Script/CoreUObject.ScriptStruct", true);
}

std::string UFunction::getFunctionFlagsString() const {
    auto flags = FunctionFlags;
    std::string result;
    if (flags == FUNC_None)
        result = "None";
    else
    {
        if (flags & FUNC_Final)
            result += "Final|";
        if (flags & FUNC_RequiredAPI)
            result += "RequiredAPI|";
        if (flags & FUNC_BlueprintAuthorityOnly)
            result += "BlueprintAuthorityOnly|";
        if (flags & FUNC_BlueprintCosmetic)
            result += "BlueprintCosmetic|";
        if (flags & FUNC_Net)
            result += "Net|";
        if (flags & FUNC_NetReliable)
            result += "NetReliable";
        if (flags & FUNC_NetRequest)
            result += "NetRequest|";
        if (flags & FUNC_Exec)
            result += "Exec|";
        if (flags & FUNC_Native)
            result += "Native|";
        if (flags & FUNC_Event)
            result += "Event|";
        if (flags & FUNC_NetResponse)
            result += "NetResponse|";
        if (flags & FUNC_Static)
            result += "Static|";
        if (flags & FUNC_NetMulticast)
            result += "NetMulticast|";
        if (flags & FUNC_MulticastDelegate)
            result += "MulticastDelegate|";
        if (flags & FUNC_Public)
            result += "Public|";
        if (flags & FUNC_Private)
            result += "Private|";
        if (flags & FUNC_Protected)
            result += "Protected|";
        if (flags & FUNC_Delegate)
            result += "Delegate|";
        if (flags & FUNC_NetServer)
            result += "NetServer|";
        if (flags & FUNC_HasOutParms)
            result += "HasOutParms|";
        if (flags & FUNC_HasDefaults)
            result += "HasDefaults|";
        if (flags & FUNC_NetClient)
            result += "NetClient|";
        if (flags & FUNC_DLLImport)
            result += "DLLImport|";
        if (flags & FUNC_BlueprintCallable)
            result += "BlueprintCallable|";
        if (flags & FUNC_BlueprintEvent)
            result += "BlueprintEvent|";
        if (flags & FUNC_BlueprintPure)
            result += "BlueprintPure|";
        if (flags & FUNC_EditorOnly)
            result += "EditorOnly|";
        if (flags & FUNC_Const)
            result += "Const|";
        if (flags & FUNC_NetValidate)
            result += "NetValidate|";
        if (result.size())
            result.erase(result.size() - 1);
    }
    return result;
}

UClass* UFunction::staticClass()
{
    return ObjectsManager::findObject<UClass>("/Script/CoreUObject.Function");
}

UClass* UClass::staticClass()
{
    return ObjectsManager::findObject<UClass>("/Script/CoreUObject.Class", true);
}

UClass* UProperty::staticClass()
{
    return ObjectsManager::findObject<UClass>("/Script/CoreUObject.Property");
}

int32_t UProperty::getOffset() const
{
    return Offset;
}

fieldType UProperty::getType()
{
    if (IsA<UDoubleProperty>()) { return    { false, PropertyType::DoubleProperty, UDoubleProperty::typeName() }; }
    if (IsA<UFloatProperty>()) { return     { false, PropertyType::FloatProperty,  UFloatProperty::typeName() }; };
    if (IsA<UIntProperty>()) { return       { false, PropertyType::IntProperty,    UIntProperty::typeName() }; };
    if (IsA<UInt16Property>()) { return     { false, PropertyType::Int16Property,  UInt16Property::typeName() }; };
    if (IsA<UInt64Property>()) { return     { false, PropertyType::Int64Property,  UInt64Property::typeName() }; };
    if (IsA<UInt8Property>()) { return      { false, PropertyType::Int8Property,   UInt8Property::typeName() }; };
    if (IsA<UUInt16Property>()) { return    { false, PropertyType::UInt16Property, UUInt16Property::typeName() }; };
    if (IsA<UUInt32Property>()) { return    { false, PropertyType::UInt32Property, UUInt32Property::typeName() }; }
    if (IsA<UUInt64Property>()) { return    { false, PropertyType::UInt64Property, UUInt64Property::typeName() }; };
    if (IsA<UTextProperty>()) { return      { true, PropertyType::TextProperty,   UTextProperty::typeName() }; }
    if (IsA<UStrProperty>()) { return       { true, PropertyType::StrProperty,   UStrProperty::typeName() }; };
    if (IsA<UClassProperty>())
    {
        if (const auto cast = castTo<UClassProperty>(); cast->getPropertyClass())
            return     { true, PropertyType::ClassProperty,  cast->typeName() };
    };
    if (IsA<UStructProperty>())
    {
        if (const auto cast = castTo<UStructProperty>(); cast->getStruct())
            return    { true,  PropertyType::StructProperty, cast->typeName() };
    };
    if (IsA<UNameProperty>()) { return      { true, PropertyType::NameProperty,   UNameProperty::typeName() }; };
    if (IsA<UBoolProperty>()) { return      { false, PropertyType::BoolProperty,   castTo<UBoolProperty>()->typeName() }; }
    if (IsA<UByteProperty>()) {
        const auto cast = castTo<UByteProperty>();
        if (cast->Enum && cast->getEnum())
        {
            return { true, PropertyType::ByteProperty, cast->typeName(), cast->getSubTypes() };
        }
        return { false, PropertyType::ByteProperty, cast->typeName() };

    }
    if (IsA<UArrayProperty>())
    {
        if (const auto cast = castTo<UArrayProperty>(); cast->getInner())
            return { true, PropertyType::ArrayProperty,  UArrayProperty::typeName(), cast->getSubTypes() };
    };
    if (IsA<UEnumProperty>())
    {
        if (const auto cast = castTo<UEnumProperty>(); cast->getEnum())
            return { true, PropertyType::EnumProperty,   cast->typeName() };
    };
    //if (IsA<USetProperty>())  { return      { true, PropertyType::SetProperty,      USetProperty::typeName(), castTo<USetProperty>().getSubTypes() }; };
    if (IsA<UMapProperty>())
    {
        if (const auto cast = castTo<UMapProperty>(); cast->getKeyProp() && cast->getValueProp())
            return { true, PropertyType::MapProperty,   UMapProperty::typeName(), cast->getSubTypes() };

    };
    if (IsA<UInterfaceProperty>())
    {
        if (const auto cast = castTo<UInterfaceProperty>(); cast->getInterfaceClass())
            return { true, PropertyType::InterfaceProperty, UInterfaceProperty::typeName(), cast->getSubTypes() };
    };
    if (IsA<UMulticastDelegateProperty>())
    {
        return { true, PropertyType::MulticastDelegateProperty, UMulticastDelegateProperty::typeName() };
    };
    if (IsA<UWeakObjectProperty>())
    {
        if (const auto cast = castTo<UObjectPropertyBase>(); cast->getPropertyClass())
            return{ true, PropertyType::WeakObjectProperty, UObjectPropertyBase::weakTypeName(), cast->getSubTypes() };
    };
    if (IsA<USoftObjectProperty>())
    {
        if (const auto cast = castTo<UObjectPropertyBase>(); cast->getPropertyClass())
            return{ true, PropertyType::SoftObjectProperty, UObjectPropertyBase::softTypeName(), cast->getSubTypes() };
    };
    if (IsA<ULazyObjectProperty>())
    {
        if (const auto cast = castTo<UObjectPropertyBase>(); cast->getPropertyClass())
            return{ true, PropertyType::LazyObjectProperty, UObjectPropertyBase::lazyTypeName(), cast->getSubTypes() };
    };
    if (IsA<UObjectPropertyBase>())
    {
        if (const auto cast = castTo<UObjectPropertyBase>(); cast->getPropertyClass())
            return{ true, PropertyType::ObjectProperty, cast->typeName() };
    };

    //if (IsA<UClass>()) { return {PropertyType::SoftClassProperty, "struct FSoftClassPath"}; };
    if (const auto clas = getClass())
        return { false, PropertyType::Unknown, clas->getName() };
    return { false, PropertyType::Unknown, getName() };
}

UClass* UNumericProperty::staticClass()
{
    return ObjectsManager::findObject<UClass>("/Script/CoreUObject.NumericProperty");
}

UEnum* UByteProperty::getEnum() const
{
    UREADORNULL(UEnum, Enum)
}

UClass* UByteProperty::staticClass()
{
    return ObjectsManager::findObject<UClass>("/Script/CoreUObject.ByteProperty");
}

UEnum* UEnumProperty::getEnum() const
{
    UREADORNULL(UEnum, Enum)
}

UClass* UEnumProperty::staticClass()
{
    return ObjectsManager::findObject<UClass>("/Script/CoreUObject.EnumProperty");
}

UClass* UMulticastDelegateProperty::staticClass()
{
    return ObjectsManager::findObject<UClass>("/Script/CoreUObject.MulticastDelegateProperty");
}

UClass* UDelegateProperty::staticClass()
{
    return ObjectsManager::findObject<UClass>("/Script/CoreUObject.DelegateProperty");
}

UProperty* UMapProperty::getKeyProp() const
{
    UREADORNULL(UProperty, KeyProp)
}

UProperty* UMapProperty::getValueProp() const
{
    UREADORNULL(UProperty, ValueProp)
}

UClass* UMapProperty::staticClass()
{
    return ObjectsManager::findObject<UClass>("/Script/CoreUObject.MapProperty");
}

UProperty* USetProperty::getElementProp() const
{
    UREADORNULL(UProperty, ElementProp)
}

UProperty* UArrayProperty::getInner() const
{
    UREADORNULL(UProperty, Inner)
}

UClass* UArrayProperty::staticClass()
{
    return ObjectsManager::findObject<UClass>("/Script/CoreUObject.ArrayProperty");
}

UClass* UTextProperty::staticClass()
{
    return ObjectsManager::findObject<UClass>("/Script/CoreUObject.TextProperty");
}

UClass* UStrProperty::staticClass()
{
    return ObjectsManager::findObject<UClass>("/Script/CoreUObject.StrProperty");
}

UClass* UStructProperty::staticClass()
{
    return ObjectsManager::findObject<UClass>("/Script/CoreUObject.StructProperty");
}

UClass* UNameProperty::staticClass()
{
    return ObjectsManager::findObject<UClass>("/Script/CoreUObject.NameProperty");
}

UScriptStruct* UStructProperty::getStruct() const
{
    UREADORNULL(UScriptStruct, Struct)
}

UClass* ULazyObjectProperty::staticClass()
{
    return ObjectsManager::findObject<UClass>("/Script/CoreUObject.LazyObjectProperty");
}

UClass* UAssetClassProperty::staticClass()
{
    return ObjectsManager::findObject<UClass>("/Script/CoreUObject.AssetClassProperty");
}

UClass* UAssetObjectProperty::staticClass()
{
    return ObjectsManager::findObject<UClass>("/Script/CoreUObject.AssetObjectProperty");
}

UClass* UWeakObjectProperty::staticClass()
{
    return ObjectsManager::findObject<UClass>("/Script/CoreUObject.WeakObjectProperty");
}

UClass* USoftObjectProperty::staticClass()
{
    return ObjectsManager::findObject<UClass>("/Script/CoreUObject.SoftObjectProperty");
}

UProperty* UInterfaceProperty::getInterfaceClass() const
{
    UREADORNULL(UProperty, InterfaceClass)
}

UClass* UInterfaceProperty::staticClass()
{
    return ObjectsManager::findObject<UClass>("/Script/CoreUObject.InterfaceProperty");
}

//std::string UWeakObjectProperty::typeName()
//{
//    return "struct TWeakObjectPtr<struct " + castTo<UStructProperty>()->typeName() + ">";
//}

UClass* UClassProperty::getMetaClass() const
{
    UREADORNULL(UClass, MetaClass)
}

UClass* UClassProperty::staticClass()
{
    return ObjectsManager::findObject<UClass>("/Script/CoreUObject.ClassProperty");
}

UClass* UObjectProperty::staticClass()
{
    return ObjectsManager::findObject<UClass>("/Script/CoreUObject.ObjectProperty");
}

UClass* UObjectPropertyBase::getPropertyClass() const
{
    UREADORNULL(UClass, PropertyClass)
}

UClass* UObjectPropertyBase::staticClass()
{
    return ObjectsManager::findObject<UClass>("/Script/CoreUObject.ObjectPropertyBase");
}

int UBoolProperty::getBitPosition(uint8_t byteMask)
{
    const int i4 = !(byteMask & 0xf) << 2;
    byteMask >>= i4;

    const int i2 = !(byteMask & 0x3) << 1;
    byteMask >>= i2;

    const int i1 = !(byteMask & 0x1);

    const int i0 = (byteMask >> i1) & 1 ? 0 : -8;

    return i4 + i2 + i1 + i0;
}

UClass* UBoolProperty::staticClass()
{
    return ObjectsManager::findObject<UClass>("/Script/CoreUObject.BoolProperty");
}

UClass* UDoubleProperty::staticClass()
{
    return ObjectsManager::findObject<UClass>("/Script/CoreUObject.DoubleProperty");
}

UClass* UFloatProperty::staticClass()
{
    return ObjectsManager::findObject<UClass>("/Script/CoreUObject.FloatProperty");
}

UClass* UInt8Property::staticClass()
{
    return ObjectsManager::findObject<UClass>("/Script/CoreUObject.Int8Property");
}

UClass* UInt16Property::staticClass()
{
    return ObjectsManager::findObject<UClass>("/Script/CoreUObject.Int16Property");
}

UClass* UIntProperty::staticClass()
{
    return ObjectsManager::findObject<UClass>("/Script/CoreUObject.IntProperty");
}

UClass* UInt64Property::staticClass()
{
    return ObjectsManager::findObject<UClass>("/Script/CoreUObject.Int64Property");
}

UClass* UUInt16Property::staticClass()
{
    return ObjectsManager::findObject<UClass>("/Script/CoreUObject.UInt16Property");
}

UClass* UUInt32Property::staticClass()
{
    return ObjectsManager::findObject<UClass>("/Script/CoreUObject.UInt32Property");
}


UClass* UUInt64Property::staticClass()
{
    return ObjectsManager::findObject<UClass>("/Script/CoreUObject.UInt64Property");
}

//from UnrealFinderTool
UBoolProperty::BitInfo UBoolProperty::getMissingBitsCount(const UBoolProperty& lastProp) const
{
    // If there is no previous bitfield member, just calculate the missing bits.
    if (!lastProp.objectptr)
    {
        return { getBitPosition(ByteMask), -1 };
    }

    // If both bitfield member belong to the same byte, calculate the bit position difference.
    if (getOffset() == lastProp.getOffset())
    {
        return { getBitPosition(ByteMask) - getBitPosition(lastProp.ByteMask) - 1, -1 };
    }

    // If they have different offsets, we need two distances
    // |00001000|00100000|
    // 1.   ^---^
    // 2.       ^--^

    return { std::numeric_limits<uint8_t>::digits - getBitPosition(lastProp.ByteMask) - 1, getBitPosition(ByteMask) };

}

/*
 *
 * UE 4.25 RELATED
 *
 */

#if UE_VERSION >= UE_4_25

#define FREADORNULL(x,y) \
    if (y)          \
    {               \
        return ObjectsManager::getFField<x>(y);\
    }               \
    return nullptr;

FProperty* UStruct::getChildProperties() const
{
    FREADORNULL(FProperty, ChildProperties)
}

FProperty* FField::getNext() const
{
    FREADORNULL(FProperty, Next)
}

std::string FField::getName() const
{
    return EngineCore::FNameToString(NamePrivate);
}

UClass FProperty::staticClass()
{
    return UClass();
}

int32_t FProperty::getOffset() const
{
    return Offset;
}

fieldType FProperty::getType()
{
    if (!ClassPrivate)
    {
        return { false, PropertyType::Unknown, getName() };
    }

    const auto objectClass = ObjectsManager::getFFieldClass(ClassPrivate);
    switch (objectClass->Id)
    {
    case ECCF_FObjectProperty:
    case ECCF_FClassProperty:
    case ECCF_FObjectPtrProperty:
    case ECCF_FClassPtrProperty:
        return { true, PropertyType::ObjectProperty, castTo<FObjectPropertyBase>()->typeName() };

    case ECCF_FStructProperty:
        return { true, PropertyType::StructProperty, castTo<FStructProperty>()->typeName() };

    case ECCF_FInt8Property:
        return { false, PropertyType::Int8Property, UInt8Property::typeName() };

    case ECCF_FInt16Property:
        return { false,  PropertyType::Int16Property, UInt16Property::typeName() };

    case ECCF_FIntProperty:
        return { false, PropertyType::IntProperty, UIntProperty::typeName() };

    case ECCF_FInt64Property:
        return { false, PropertyType::Int64Property, UInt64Property::typeName() };

    case ECCF_FUInt16Property:
        return { false, PropertyType::UInt16Property, UUInt16Property::typeName() };

    case ECCF_FUInt32Property:
        return { false, PropertyType::UInt32Property, UUInt32Property::typeName() };

    case ECCF_FUInt64Property:
        return { false, PropertyType::UInt64Property, UUInt64Property::typeName() };

    case ECCF_FArrayProperty:
        return { true, PropertyType::ArrayProperty, FArrayProperty::typeName(), castTo<FArrayProperty>()->getSubTypes() };

    case ECCF_FFloatProperty:
        return { false, PropertyType::FloatProperty, UFloatProperty::typeName() };

    case ECCF_FDoubleProperty:
        return { false, PropertyType::DoubleProperty, UDoubleProperty::typeName() };

    case ECCF_FBoolProperty:
        return { false, PropertyType::BoolProperty, castTo<FBoolProperty>()->typeName() };

    case ECCF_FStrProperty:
        return { true, PropertyType::TextProperty, UStrProperty::typeName() };

    case ECCF_FNameProperty:
        return { true, PropertyType::NameProperty, UNameProperty::typeName() };

    case ECCF_FTextProperty:
        return { true, PropertyType::TextProperty, UTextProperty::typeName() };

    case ECCF_FEnumProperty:
        return { true, PropertyType::EnumProperty, castTo<FEnumProperty>()->typeName() };

    case ECCF_FInterfaceProperty:
        return { true, PropertyType::InterfaceProperty, FInterfaceProperty::typeName(), castTo<FInterfaceProperty>()->getSubTypes() };

    case ECCF_FMapProperty:
        return { true, PropertyType::MapProperty, FMapProperty::typeName(), castTo<FMapProperty>()->getSubTypes() };

    case ECCF_FByteProperty:
    {
        const auto cast = castTo<FByteProperty>();
        if (cast->Enum)
        {
            return { true, PropertyType::ByteProperty, cast->typeName(), cast->getSubTypes() };
        }
        return { false, PropertyType::ByteProperty, cast->typeName() };
    }

    case ECCF_FDelegateProperty:
        return { true, PropertyType::DelegateProperty, UDelegateProperty::typeName() };

    case ECCF_FMulticastDelegateProperty:
        return { true, PropertyType::MulticastDelegateProperty, UMulticastDelegateProperty::typeName() };

    case ECCF_FMulticastInlineDelegateProperty:
        return { true, PropertyType::MulticastDelegateProperty, "FMulticastInlineDelegate" };

    case ECCF_FMulticastSparseDelegateProperty:
        return { true, PropertyType::MulticastDelegateProperty, "FMulticastSparseDelegate" };

    case ECCF_FSoftObjectProperty:
    case ECCF_FWeakObjectProperty:
        return { true, PropertyType::SoftObjectProperty, FObjectPropertyBase::weakTypeName(), castTo<FObjectPropertyBase>()->getSubTypes() };

    case ECCF_FSoftClassProperty:
        return { true, PropertyType::SoftClassProperty, FSoftClassProperty::typeName(), castTo<FSoftClassProperty>()->getSubTypes() };

    case ECCF_FLazyObjectProperty:
        return { true, PropertyType::LazyObjectProperty, FObjectPropertyBase::lazyTypeName(), castTo<FObjectPropertyBase>()->getSubTypes() };

    case ECCF_FSetProperty:
        return { true, PropertyType::SetProperty, FSetProperty::typeName(), castTo<FSetProperty>()->getSubTypes() };

        //case ECCF_FFieldPathProperty:
        //    return { true, PropertyType::FieldPathProperty, FFieldPathProperty::typeName(), castTo<FFieldPathProperty>().getSubTypes() };

    default:
        return { false, PropertyType::Unknown, getName() };
    }
}

std::string FFieldClass::getName() const
{
    return EngineCore::FNameToString(Name);
}

int FBoolProperty::getBitPosition(const uint8_t byteMask)
{
    return UBoolProperty::getBitPosition(byteMask);
}

FBoolProperty::BitInfo FBoolProperty::getMissingBitsCount(const FBoolProperty& lastProp) const
{
    // If there is no previous bitfield member, just calculate the missing bits.
    if (!lastProp.objectptr)
    {
        return { getBitPosition(ByteMask), -1 };
    }

    // If both bitfield member belong to the same byte, calculate the bit position difference.
    if (getOffset() == lastProp.getOffset())
    {
        return { getBitPosition(ByteMask) - getBitPosition(lastProp.ByteMask) - 1, -1 };
    }

    // If they have different offsets, we need two distances
    // |00001000|00100000|
    // 1.   ^---^
    // 2.       ^--^

    return { std::numeric_limits<uint8_t>::digits - getBitPosition(lastProp.ByteMask) - 1, getBitPosition(ByteMask) };
}

UStruct* FStructProperty::getStruct() const
{
    UREADORNULL(UStruct, Struct)
}

FProperty* FArrayProperty::getInner() const
{
    FREADORNULL(FProperty, Inner)
}


UClass* FObjectPropertyBase::getPropertyClass() const
{
    UREADORNULL(UClass, PropertyClass)
}

UClass* FSoftClassProperty::getMetaClass() const
{
    UREADORNULL(UClass, MetaClass)
}

UEnum* FEnumProperty::getEnum() const
{
    UREADORNULL(UEnum, Enum)
}

UProperty* FInterfaceProperty::getInterfaceClass() const
{
    UREADORNULL(UProperty, InterfaceClass)
}

FProperty* FMapProperty::getKeyProp() const
{
    FREADORNULL(FProperty, KeyProp)
}

FProperty* FMapProperty::getValueProp() const
{
    FREADORNULL(FProperty, ValueProp)
}

UEnum* FByteProperty::getEnum() const
{
    UREADORNULL(UEnum, Enum)
}

FProperty* FSetProperty::getElementProp() const
{
    FREADORNULL(FProperty, ElementProp)
}

FFieldClass* FFieldPathProperty::getPropertyClass() const
{
    if (PropertyClass)
    {
        return ObjectsManager::getFFieldClass(PropertyClass);

    }

    return nullptr;
}

#endif