#pragma once
/****************************************************
*													*
*	StructDefinitions.h - Override structs here.	*
*	This file is used to override or create structs *
*	that are important for the live	editor to work	*
*	properly and like you want to.					*
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

/// - full name, and cppname must always match when overriding existing classes/structs.
/// - e.g for the UObject struct, the cppname is UObject and the full name is /Script/CoreUObject.Object
///   and the size is 0x28 bytes. Make sure the size of the members add up to the byte amount or the live
///   editor will crash!
/// - the offset of a member is always the real offset, so if the class is inherited, make sure to take that offset into account!
/// - mark members that are unknown as "missed = true".
/// - you are responsible for the names of the members, so make sure they don't exist multiple times
/// - only mark types as clickable if they are really clickable. As a reference what is clickable look at UnrealClasses.cpp -> getType
///	  or just remember that classes/structs/enums are clickable, but stuff like bool, int isn't
///	  Don't worry if a clickable doesn't exist in the engine, it wont crash (e.g enum EObjectFlags in UObject isnt in the engine, but defined in UObject)
/// - every function has some examples (just look below) to give you a basic understanding

// type layout:		{bool clickable,  PropertyType propertyType, string name, std::vector<type> subTypes (default empty)}
// Member layout:	{type type, string name, int offset, int size, bool missed (default false), bool isBit (default false), int bitOffset (default 0)}

//override structs/classes here. Make sure the size does match the existing struct, otherwise crash
inline void overrideStructs()
{
	//UObject example here. Keep in mind a class is also a EngineStructs::Struct
	EngineStructs::Struct uObject;
	uObject.fullName = "/Script/CoreUObject.Object"; //the full name
	uObject.cppName = "UObject"; //cpp name
	uObject.size = sizeof(UObject); //this works, because if UObject in engine != UObject in game the UEDumper will fail anyways
	uObject.inherited = false; //is not inherited
	uObject.isClass = true; //is it a class? - Yes

	int uObjectOffset = 0; //just creating a variable for the offset that increases with the members (makes it a lot easier)
	uObject.definedMembers = std::vector<EngineStructs::Member>{
		// a void** is not clickable! The property is a ObjectProperty indicates that its a object (which means basically anything)
		{{false,		PropertyType::ObjectProperty,	"void**"},		"vtable",				uObjectOffset, 8},
		// a enum is clickable! The property is a EnumProperty because, well, its a enum. We can freely use the typename EObjectFlags even if
		// it doesnt exist in the engine. This is no problem. If we click it, nothing will happen, a console message will just appear.
		{{true,		PropertyType::EnumProperty,		"EObjectFlags"},"ObjectFlags",		uObjectOffset += 8, sizeof(EObjectFlags)},
		// ints arent clickable
		{{false,		PropertyType::IntProperty,		"int"},		"InternalIndex",		uObjectOffset += sizeof(EObjectFlags), 4},
		// UClass is a real class, so its clickable. Its a ObjectProperty to indicate that we just have the pointer to the UClass in UObject.
		// In case it would not be a pointer, use StructProperty (which are most of the time just structs, no class is within a class)
		{{true,		PropertyType::ObjectProperty,	"UClass"},		"ClassPrivate",		uObjectOffset += 4, 8},
		// a Fname is a NameProperty and is clickable, because FName is a struct. (To make it work properly, we have to define the FName struct too
		// because it is not in the engine defined)
		{{true,		PropertyType::NameProperty,		"FName"},		"NamePrivate",			uObjectOffset += 8, sizeof(FName)},
		// same as UClass
		{{true,		PropertyType::ObjectProperty,	"UObject"},	"OuterPrivate",		uObjectOffset += sizeof(FName), 8}
	};
	//add the struct/class
	EngineCore::overrideStruct(uObject);

	//Ufield example here
	EngineStructs::Struct uField;
	uField.fullName = "/Script/CoreUObject.Field";
	uField.cppName = "UField";
	uField.size = sizeof(UField);
	uField.isClass = true;
	uField.inherited = true; //Ufield is inherited
	uField.inheretedSize = sizeof(UObject); //you can use the size from our UnrealClasses

	//a vector full of the inherited classes. In case you have multiple, make sure the last one is always the base class
	//e.g if you would define UClass, the vector would look like this: std::vector<std::string>{ "UStruct", "UField", "UObject"};
	//because inheritance for a uclass is UStruct > UField > UObject.
	//but in our case UField just inherits from UObject.
	uField.supers = std::vector<std::string>{ "UObject"}; 
	constexpr int uFieldOffet = sizeof(UObject);
	uField.definedMembers = std::vector<EngineStructs::Member> {
		{{true,		PropertyType::ObjectProperty,	"UField"},		"Next",				uFieldOffet, 8}
	};
	//add the struct/class
	EngineCore::overrideStruct(uField);


	//Ufield example here
	EngineStructs::Struct uStruct;
#if UE_VERSION == UE_4_25
	//please can someone explain what the fuck they decided to write struct in lowercase
	uStruct.fullName = "/Script/CoreUObject.struct";
#else
	uStruct.fullName = "/Script/CoreUObject.Struct";
#endif
	uStruct.cppName = "UStruct";
	uStruct.size = sizeof(UStruct);
	uStruct.isClass = true;
	uStruct.inherited = true; //Ufield is inherited
	uStruct.inheretedSize = sizeof(UField); //you can use the size from our UnrealClasses

	//a vector full of the inherited classes. In case you have multiple, make sure the last one is always the base class
	//e.g if you would define UClass, the vector would look like this: std::vector<std::string>{ "UStruct", "UField", "UObject"};
	//because inheritance for a uclass is UStruct > UField > UObject.
	//but in our case UField just inherits from UObject.
	uStruct.supers = std::vector<std::string>{ "UField","UObject" };
	int uStructOffet = sizeof(UField);
	uStruct.definedMembers = std::vector<EngineStructs::Member>{
		{{true,		PropertyType::ObjectProperty,	"UStruct"},		"SuperStruct",				uStructOffet, 8},
		{{true,		PropertyType::ObjectProperty,	"UField"},		"Children",				uStructOffet += 8, 8}
	};
	//add the struct/class
	EngineCore::overrideStruct(uStruct);
}

//add a struct that does not exist in the SDK. They will be all in the BasicType package.
//keep in mind to follow the rules of the Member struct, setting wrong offsets and sizes or types may result in crashes.
//the normal editor DOES NOT CHECK if a class/struct below also matches the size when the class/struct gets referenced, so make sure it does!
//if its wrong, the live editor will most likely crash
inline void addStructs()
{
	EngineStructs::Struct Fname;
	Fname.fullName = "/Custom/FName"; //Any fullname, preferable with /Custom/ at the beginning
	Fname.cppName = "FName";
	Fname.size = sizeof(FName);
	Fname.isClass = false; //FName is just a struct
	Fname.inherited = false;
	int FnameOffset = 0;
	//of course we can also use defines, just be careful
	Fname.cookedMembers =  std::vector<EngineStructs::Member>{
		{{false,		PropertyType::IntProperty,		"int"},		"ComparisonIndex",		0, 4},
		#if UE_VERSION >= UE_5_01
	#if !UE_FNAME_OUTLINE_NUMBER
		{{false,		PropertyType::IntProperty,		"int"},		"Number",				FnameOffset += 4, 4},
		#endif
		#endif

		#if WITH_CASE_PRESERVING_NAME
		{{false,		PropertyType::IntProperty,		"int"},		"DisplayIndex",				FnameOffset += 4, 4},
	#endif


	#if UE_VERSION < UE_5_01
	/** Number portion of the string/number pair (stored internally as 1 more than actual, so zero'd memory will be the default, no-instance case) */
		{{false,		PropertyType::IntProperty,		"int"},		"Number",				FnameOffset += 4, 4}
	#endif
	};
	//add it
	EngineCore::createStruct(Fname);

	//Basic TArray definition
	EngineStructs::Struct Tarray;
	Tarray.fullName = "/Custom/TArray";
	Tarray.cppName = "TArray";
	Tarray.size = sizeof(TArray<uint64_t>);
	Tarray.inherited = false;
	int TarrayOffset = 0;
	Tarray.definedMembers = std::vector<EngineStructs::Member>{
		{{false,		PropertyType::ObjectProperty,	"T*"},			"Data",		TarrayOffset, 8},
		{{false,		PropertyType::IntProperty,		"int"},		"Count",		TarrayOffset += 8, 4},
		{{false,		PropertyType::IntProperty,		"int"},		"Max",			TarrayOffset += 4, 4},
	};
	//add it
	EngineCore::createStruct(Tarray);
}

// - use this funtion to override unknown members in existing structs or classes.
// - use this function ONLY FOR a unknownmember block, so not for a single unknown bit
// - in a block, you can freely add bits and other types you know
// - dont add unknown members (missed members), the engine will handle them
// - for single bits, use the function below (overrideSingleBits)
// - keep in mind to add members in order and set the size of the types correctly! Wrong offset and types = most likely 
//	 a crash in the live editor and members wont be added
// - add all types inside one members vector, no matter if one type is in a different block
// - just define the fullname and cppname for the Struct like in the example below
// - the type and typename of a bitfield gets handled, so just use for the type this template: {false,	PropertyType::BoolProperty,	""}

//an (illegal) example here with bits etc
/*
{{true,		PropertyType::MulticastDelegateProperty, "FSimpleMulticastDelegate"},	"OnPostEngineInit",	 sizeof(UObject), 1}, //just for demonstration is the size of a FSimpleMulticastDelegate 1 byte!
{{false,	PropertyType::BoolProperty,	""},										"mydefinedbit",		 sizeof(UObject) + 2, 1, false, true, 0},
{{false,	PropertyType::BoolProperty,	""},										"anotherbit",		 sizeof(UObject) + 2, 1, false, true, 3},
{{true,		PropertyType::MulticastDelegateProperty, "FSimpleMulticastDelegate"},	"OnPostEngineInit2", sizeof(UObject) + 3, 2},
{{false,	PropertyType::BoolProperty,	""},										"coolbit",			 sizeof(UObject) + 5, 1, false, true, 5},
{{true,		PropertyType::MulticastDelegateProperty, "FSimpleMulticastDelegate"},	"OnPostEngineInit3", sizeof(UObject) + 6, 1},
*/
// all the bytes and bits inbetween will get filled up, you dont have to handle that
inline void overrideUnknownMembers()
{
	EngineStructs::Struct Engine;
	Engine.fullName = "/Script/Engine.Engine";
	Engine.cppName = "UEngine";
	Engine.definedMembers = std::vector<EngineStructs::Member>{
		//we can use the typename FSimpleMulticastDelegate even if its not defined in the engine at all, but thats still fine
		{{true,		PropertyType::MulticastDelegateProperty,	"FSimpleMulticastDelegate"},			"OnPostEngineInit",		sizeof(UObject), 8},
		
	};
	EngineCore::overrideStructMembers(Engine);
}
