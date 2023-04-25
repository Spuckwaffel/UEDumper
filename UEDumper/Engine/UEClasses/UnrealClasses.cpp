// ReSharper disable CppPossiblyUnintendedObjectSlicing
#include "UnrealClasses.h"

UObject* UObject::getOuter() const
{
    if (OuterPrivate)
    {
        return EngineCore::getUObject<UObject>(OuterPrivate);
    }
    return nullptr;
}

UClass* UObject::getClass() const
{
    if (ClassPrivate)
    {
        return EngineCore::getUObject<UClass>(ClassPrivate);
    }
    return nullptr;
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
        temp = outer->getName() + "." + temp;
    }

    std::string fullname = temp + name;

    return fullname;
}

std::string UObject::getCName()
{
    std::string name = "nil";

    if(!this)
    {
	    return name;
    }

    if (IsA<UClass>())
    {
        //read again but as a struct
        auto uStruct = castTo<UStruct>();

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
            while (uStruct->SuperStruct)
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
            printf("name: %s\n", uStruct->getFullName().c_str());
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
    if(const auto ptr = getPackageObjectFnPtr())
    {
        return EngineCore::getUObject<UObject>(ptr);
    }
    return nullptr;
}


UObject* UObject::getPackageObjectFnPtr() const
{

    UObject* pouter = OuterPrivate;

    auto package = getOuter();

    while (pouter)
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
    std::string package = getPackageObject()->getName().c_str();
    //none packages have no package, they are a package themself
    if (package == "None")
    {
        package = getName().c_str();
    }
    std::stringstream ss(package.substr(1).c_str());
    std::string token;
    std::vector<std::string> output;
    while (std::getline(ss, token, '/')) {
        output.push_back(token);
    }

    if (output.size() < 2) {
        return output[0];
    }
    else {
        return output[1];
    }
}

bool UObject::IsA(const UClass* staticClass) const
{
    if (!ClassPrivate) return false;
    for(auto super = getClass(); super; super = super->getSuper<UClass>())
    {
        std::string fullname = super->getFullName();
	    if(super == staticClass)
	    {
            //printf("%s\n", fullname.c_str());
            return true;
	    }
    }
    return false;
   
}

UClass* UObject::staticClass()
{
    return EngineCore::findObject<UClass>("/Script/CoreUObject.Object");
}

UClass* AActor::staticClass()
{
    return EngineCore::findObject<UClass>("/Script/Engine.Actor");
}

UField* UField::GetNext() const
{
    if (Next)
    {
        return EngineCore::getUObject<UField>(Next);
    }
    return nullptr;
}

UClass* UField::staticClass()
{
    return EngineCore::findObject<UClass>("/Script/CoreUObject.Field");
}

template <typename T>
T* UStruct::getSuper()
{
    if (SuperStruct)
    {
        return EngineCore::getUObject<T>(SuperStruct);
    }

    return nullptr;
}

UStruct* UStruct::getSuper() const
{
    if (SuperStruct)
    {
        return EngineCore::getUObject<UStruct>(SuperStruct);
    }

    return nullptr;
}


std::vector<UObject*> UStruct::getAllSupers() const
{
    std::vector<UObject*> supers;
    for(auto obj = getSuper(); obj; obj = obj->getSuper())
    {
        supers.push_back(obj);
    }
    return supers;
}

template <typename T>
T* UStruct::getChildren()
{
    if (Children)
    {
        return EngineCore::getUObject<T>(Children);
    }

    return nullptr;
}

UField* UStruct::getChildren() const
{
    if (Children)
    {
        return EngineCore::getUObject<UField>(Children);
    }

    return nullptr;
}

UClass* UStruct::staticClass()
{
#if UE_VERSION == UE_4_25
    //please can someone explain what the fuck they decided to write struct in lowercase
    return EngineCore::findObject<UClass>("/Script/CoreUObject.struct");
#else
    return EngineCore::findObject<UClass>("/Script/CoreUObject.Struct");
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
    return EngineCore::findObject<UClass>("/Script/CoreUObject.Enum");
}

UClass* UScriptStruct::staticClass()
{
    return EngineCore::findObject<UClass>("/Script/CoreUObject.ScriptStruct");
}

UClass* UFunction::staticClass()
{
    return EngineCore::findObject<UClass>("/Script/CoreUObject.Function");
}

UClass* UClass::staticClass()
{
    return EngineCore::findObject<UClass>("/Script/CoreUObject.Class");
}

UClass* UProperty::staticClass()
{
    return EngineCore::findObject<UClass>("/Script/CoreUObject.Property");
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
    if (IsA<UClassProperty>()) { return     { true, PropertyType::ClassProperty,  castTo<UClassProperty>()->typeName() }; };
    if (IsA<UStructProperty>()) { return    { true,  PropertyType::StructProperty, castTo<UStructProperty>()->typeName() }; };
    if (IsA<UNameProperty>()) { return      { true, PropertyType::NameProperty,   UNameProperty::typeName() }; };
    if (IsA<UBoolProperty>()) { return      { false, PropertyType::BoolProperty,   castTo<UBoolProperty>()->typeName() }; }
    if (IsA<UByteProperty>()) {
        const auto cast = castTo<UByteProperty>();
        if (cast->Enum)
        {
            return { true, PropertyType::ByteProperty, cast->typeName(), cast->getSubTypes() };
        }
        return { false, PropertyType::ByteProperty, cast->typeName() };
    
    }
    if (IsA<UArrayProperty>()) { return     { true, PropertyType::ArrayProperty,  UArrayProperty::typeName(), castTo<UArrayProperty>()->getSubTypes() }; };
    if (IsA<UEnumProperty>()) { return      { true, PropertyType::EnumProperty,   castTo<UEnumProperty>()->typeName() }; };
    //if (IsA<USetProperty>())  { return      { true, PropertyType::SetProperty,      USetProperty::typeName(), castTo<USetProperty>().getSubTypes() }; };
    if (IsA<UMapProperty>()) { return       { true, PropertyType::MapProperty,   UMapProperty::typeName(), castTo<UMapProperty>()->getSubTypes() }; };
    if (IsA<UInterfaceProperty>()) { return { true, PropertyType::InterfaceProperty, UInterfaceProperty::typeName(), castTo<UInterfaceProperty>()->getSubTypes() }; };
    if (IsA<UMulticastDelegateProperty>()) { return { true, PropertyType::MulticastDelegateProperty, UMulticastDelegateProperty::typeName() }; };
    if (IsA<UWeakObjectProperty>()) { return{ true, PropertyType::WeakObjectProperty, UObjectPropertyBase::weakTypeName(), castTo<UObjectPropertyBase>()->getSubTypes() }; };
    if (IsA<UObjectPropertyBase>()) { return{ true, PropertyType::ObjectProperty, castTo<UObjectPropertyBase>()->typeName() }; };

    //if (IsA<UClass>()) { return {PropertyType::SoftClassProperty, "struct FSoftClassPath"}; };
    return { false, PropertyType::Unknown, getClass()->getName() };
}

UClass* UNumericProperty::staticClass()
{
    return EngineCore::findObject<UClass>("/Script/CoreUObject.NumericProperty");
}

UEnum* UByteProperty::getEnum() const
{
    if (Enum)
    {
        return EngineCore::getUObject<UEnum>(Enum);

    }

    return nullptr;
}

UClass* UByteProperty::staticClass()
{
    return EngineCore::findObject<UClass>("/Script/CoreUObject.ByteProperty");
}

UEnum* UEnumProperty::getEnum() const
{
    if (Enum)
    {
        return EngineCore::getUObject<UEnum>(Enum);

    }

    return nullptr;
}

UClass* UEnumProperty::staticClass()
{
    return EngineCore::findObject<UClass>("/Script/CoreUObject.EnumProperty");
}

UClass* UMulticastDelegateProperty::staticClass()
{
    return EngineCore::findObject<UClass>("/Script/CoreUObject.MulticastDelegateProperty");
}

UClass* UDelegateProperty::staticClass()
{
    return EngineCore::findObject<UClass>("/Script/CoreUObject.DelegateProperty");
}

UProperty* UMapProperty::getKeyProp() const
{
    if (KeyProp)
    {
        return EngineCore::getUObject<UProperty>(KeyProp);

    }

    return nullptr;
}

UProperty* UMapProperty::getValueProp() const
{
    if (ValueProp)
    {
        return EngineCore::getUObject<UProperty>(ValueProp);
    }
    return nullptr;
}

UClass* UMapProperty::staticClass()
{
    return EngineCore::findObject<UClass>("/Script/CoreUObject.MapProperty");
}

UProperty* USetProperty::getElementProp() const
{
    if (ElementProp)
    {
        return EngineCore::getUObject<UProperty>(ElementProp);

    }

    return nullptr;
}

UProperty* UArrayProperty::getInner() const
{
    if (Inner)
    {
        return EngineCore::getUObject<UProperty>(Inner);

    }
    else
        printf("no inner but array?");

    return nullptr;
}

UClass* UArrayProperty::staticClass()
{
    return EngineCore::findObject<UClass>("/Script/CoreUObject.ArrayProperty");
}

UClass* UTextProperty::staticClass()
{
    return EngineCore::findObject<UClass>("/Script/CoreUObject.TextProperty");
}

UClass* UStrProperty::staticClass()
{
    return EngineCore::findObject<UClass>("/Script/CoreUObject.StrProperty");
}

UClass* UStructProperty::staticClass()
{
    return EngineCore::findObject<UClass>("/Script/CoreUObject.StructProperty");
}

UClass* UNameProperty::staticClass()
{
    return EngineCore::findObject<UClass>("/Script/CoreUObject.NameProperty");
}

UScriptStruct* UStructProperty::getStruct() const
{
    if (Struct)
    {
        return EngineCore::getUObject<UScriptStruct>(Struct);
    }

    return nullptr;
}

UClass* ULazyObjectProperty::staticClass()
{
    return EngineCore::findObject<UClass>("/Script/CoreUObject.LazyObjectProperty");
}

UClass* UAssetClassProperty::staticClass()
{
    return EngineCore::findObject<UClass>("/Script/CoreUObject.AssetClassProperty");
}

UClass* UAssetObjectProperty::staticClass()
{
    return EngineCore::findObject<UClass>("/Script/CoreUObject.AssetObjectProperty");
}

UClass* UWeakObjectProperty::staticClass()
{
    return EngineCore::findObject<UClass>("/Script/CoreUObject.WeakObjectProperty");
}

UProperty* UInterfaceProperty::getInterfaceClass() const
{
    if (InterfaceClass)
    {
        return EngineCore::getUObject<UProperty>(InterfaceClass);

    }

    return nullptr;
}

UClass* UInterfaceProperty::staticClass()
{
    return EngineCore::findObject<UClass>("/Script/CoreUObject.InterfaceProperty");
}

std::string UWeakObjectProperty::typeName()
{
    return "struct TWeakObjectPtr<struct " + castTo<UStructProperty>()->typeName() + ">";
}

UClass* UClassProperty::getMetaClass() const
{
    if (MetaClass)
    {
        return EngineCore::getUObject<UClass>(MetaClass);

    }

    return nullptr;
}

UClass* UClassProperty::staticClass()
{
    return EngineCore::findObject<UClass>("/Script/CoreUObject.ClassProperty");
}

UClass* UObjectProperty::staticClass()
{
    return EngineCore::findObject<UClass>("/Script/CoreUObject.ObjectProperty");
}

UClass* UObjectPropertyBase::getPropertyClass() const
{
    if (PropertyClass)
    {
        return EngineCore::getUObject<UClass>(PropertyClass);

    }

    return nullptr;
}

UClass* UObjectPropertyBase::staticClass()
{
    return EngineCore::findObject<UClass>("/Script/CoreUObject.ObjectPropertyBase");
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
    return EngineCore::findObject<UClass>("/Script/CoreUObject.BoolProperty");
}

UClass* UDoubleProperty::staticClass()
{
    return EngineCore::findObject<UClass>("/Script/CoreUObject.DoubleProperty");
}

UClass* UFloatProperty::staticClass()
{
    return EngineCore::findObject<UClass>("/Script/CoreUObject.FloatProperty");
}

UClass* UInt8Property::staticClass()
{
    return EngineCore::findObject<UClass>("/Script/CoreUObject.Int8Property");
}

UClass* UInt16Property::staticClass()
{
    return EngineCore::findObject<UClass>("/Script/CoreUObject.Int16Property");
}

UClass* UIntProperty::staticClass()
{
    return EngineCore::findObject<UClass>("/Script/CoreUObject.IntProperty");
}

UClass* UInt64Property::staticClass()
{
    return EngineCore::findObject<UClass>("/Script/CoreUObject.Int64Property");
}

UClass* UUInt16Property::staticClass()
{
    return EngineCore::findObject<UClass>("/Script/CoreUObject.UInt16Property");
}

UClass* UUInt32Property::staticClass()
{
    return EngineCore::findObject<UClass>("/Script/CoreUObject.UInt32Property");
}


UClass* UUInt64Property::staticClass()
{
    return EngineCore::findObject<UClass>("/Script/CoreUObject.UInt64Property");
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

FProperty* UStruct::getChildProperties() const
{
    if (ChildProperties)
    {
        return EngineCore::getFField<FProperty>(ChildProperties);
    }
    return nullptr;
}

FProperty* FField::getNext() const
{
    if (Next)
    {
        return EngineCore::getFField<FProperty>(Next);
    }
    return nullptr;
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

fieldType FProperty::getType(bool debug)
{
    if (!ClassPrivate)
    {
        if (debug)
            DebugBreak();
        return { false, PropertyType::Unknown, getName() };
        
    }
        //DebugBreak();
    const auto objectClass = EngineCore::getFFieldClass(ClassPrivate);
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
        return { true, PropertyType::EnumProperty, castTo<FEnumProperty>()->typeName()};

    case ECCF_FInterfaceProperty:
        return { true, PropertyType::InterfaceProperty, FInterfaceProperty::typeName(), castTo<FInterfaceProperty>()->getSubTypes() };

    case ECCF_FMapProperty:
        return { true, PropertyType::MapProperty, FMapProperty::typeName(), castTo<FMapProperty>()->getSubTypes() };

    case ECCF_FByteProperty:
	    {
		    const auto cast = castTo<FByteProperty>();
            if(cast->Enum)
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
        return { true, PropertyType::MulticastDelegateProperty, "FMulticastInlineDelegate"};

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
	    {
        windows::LogWindow::Log(windows::LogWindow::log_2, "UCLASSES", "Class %s found but type 0x%llX not supported?", EngineCore::FNameToString(objectClass->Name).c_str(), objectClass->Id);
        return { false, PropertyType::Unknown, getName() };
	    }

        
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
    if (Struct)
    {
        return EngineCore::getUObject<UStruct>(Struct);

    }

    return nullptr;
}

FProperty* FArrayProperty::getInner() const
{
#if FORTNITE_LATEST
    if (Inner2)
    {
        return EngineCore::getFField<FProperty>(Inner2);
    }
#else
    if (Inner)
    {
        return EngineCore::getFField<FProperty>(Inner);
    }
#endif
    return nullptr;
}


UClass* FObjectPropertyBase::getPropertyClass() const
{
    if (PropertyClass)
    {
        return EngineCore::getUObject<UClass>(PropertyClass);

    }

    return nullptr;
}

UClass* FSoftClassProperty::getMetaClass() const
{
    if (MetaClass)
    {
        return EngineCore::getUObject<UClass>(MetaClass);

    }

    return nullptr;
}

UEnum* FEnumProperty::getEnum() const
{
    if (Enum)
    {
    	return EngineCore::getUObject<UEnum>(Enum);
    }

    return nullptr;
}

UProperty* FInterfaceProperty::getInterfaceClass() const
{
    if (InterfaceClass)
    {
        return EngineCore::getUObject<UProperty>(InterfaceClass);

    }

    return nullptr;
}

FProperty* FMapProperty::getKeyProp() const
{
    if (KeyProp)
    {
        return EngineCore::getFField<FProperty>(KeyProp);

    }

    return nullptr;
}

FProperty* FMapProperty::getValueProp() const
{
    if (ValueProp)
    {
        return EngineCore::getFField<FProperty>(ValueProp);
    }

    return nullptr;
}

UEnum* FByteProperty::getEnum() const
{
    if (Enum)
    {
        return EngineCore::getUObject<UEnum>(Enum);
    }

    return nullptr;
}

FProperty* FSetProperty::getElementProp() const
{
    if (ElementProp)
    {
        return EngineCore::getFField<FProperty>(ElementProp);

    }

    return nullptr;
}

FFieldClass* FFieldPathProperty::getPropertyClass() const
{
    if (PropertyClass)
    {
        return EngineCore::getFFieldClass(PropertyClass);

    }

    return nullptr;
}

#endif