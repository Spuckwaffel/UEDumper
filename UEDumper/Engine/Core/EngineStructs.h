#pragma once
#include <algorithm>
#include <vector>
#include <cstdint>
#include <set>

#include "../structs.h"
#include "Engine/Userdefined/Datatypes.h"

//objectinfo struct that holds the info of a defined struct/class/enum/function
struct ObjectInfo
{

	enum ObjectType
	{
		OI_Struct,
		OI_Class,
		OI_Enum,
		OI_Function,
		OI_MAX
	};

	bool valid = false;

	ObjectType type;

	void* target = nullptr;;

	operator bool() const { return valid; }

	//converts the struct to a JSON object
	nlohmann::json toJson() const
	{
		nlohmann::json j;
		j["type"] = type;
		j["valid"] = valid;
		//j["packageIndex"] = packageIndex;
		//j["objectIndex"] = objectIndex;
		return j;
	}

	//returns a valid object from a JSON object
	static ObjectInfo fromJson(nlohmann::json& json)
	{
		ObjectInfo j;
		j.type = json["type"];
		j.valid = json["valid"];
		//j.packageIndex = json["packageIndex"];
		//j.objectIndex = json["objectIndex"];
		return j;
	}
};

//type struct that is used for a field in the package
struct fieldType
{
	//linked info if valid
	const ObjectInfo* info = nullptr;
	//clickable if redirection is supported
	bool clickable = false;
	//typedef of the type
	PropertyType propertyType = PropertyType::Unknown;
	//typedef but better naming case. This is needed as some properties have multiple names (bool <-> unsigned char)
	std::string name = "";

	//int size_internal; //useless most of the time because we have engine size, just good for TArray or TSet for easier access to the sizes in live editor

	//a subtype is a (maybe) clickable type. Sometimes there exist more, so vector.
	//it makes it possible to click objects e.g in a TArray<x,y> for redirection
	std::vector<fieldType> subTypes = {};

	fieldType() {}

	fieldType(bool clickable, PropertyType propertyType, const std::string& name)
	{
		this->clickable = clickable;
		this->propertyType = propertyType;
		this->name = name;
	}

	fieldType(bool clickable, PropertyType propertyType, const std::string& name, const std::vector<fieldType>& subTypes)
	{
		this->clickable = clickable;
		this->propertyType = propertyType;
		this->name = name;
		this->subTypes = subTypes;
	}

	/**
	 * \brief essentially for dumpspace, gets the short type
	 * \return returns the short type of the fieldType (S, C, E, D)
	 */
	std::string getTypeShort() const
	{
		std::string typest;
		if (!clickable) //not clickable? always a D (Default) type
			typest = "D";
		else if (name[0] == 'U' || name[0] == 'A')
			typest = "C";
		else if (name[0] == 'E') //Enums always start with a E
			typest = "E";
		else
			typest = "S";

		return typest;
	}

	bool isPointer() const
	{
		return (propertyType == PropertyType::ObjectProperty || propertyType == PropertyType::ClassProperty) && clickable;
	}

	//essentially for dumspace formatting
	nlohmann::json jsonify() const
	{
		//create a array for the fieldType
		nlohmann::json arr = nlohmann::json::array();
		arr.push_back(name);
		arr.push_back(getTypeShort());
		arr.push_back(isPointer() ? "*" : "");
		nlohmann::json subTypeArr = nlohmann::json::array();
		for (auto& subType : subTypes)
			subTypeArr.push_back(subType.jsonify());

		arr.push_back(subTypeArr);

		return arr;
	}

	std::string stringify(bool bAddTypePrefix = true) const
	{

		auto generateValidVarName = [](const std::string& str)
			{
				//hacky way to ignore shit like unsigned char get to unsigned_char
				if (getSize(str) != -1)
					return str;
				std::string result = "";

				for (const char c : str)
				{
					if (static_cast<int>(c) < 0 || !std::isalnum(c))
						result += '_';
					else
						result += c;

				}
				//guaranteed 0 termination
				return result;
			};


		std::string typeStr = generateValidVarName(name);

		if (bAddTypePrefix && (propertyType == PropertyType::ObjectProperty || propertyType == PropertyType::ClassProperty) && (info && info->valid))
		{
			const std::string prefix = info->type == ObjectInfo::OI_Class ? "class " : "struct ";
			typeStr = prefix + typeStr;
		}

		if (subTypes.size() > 0)
		{
			typeStr += "<";


			for (int i = 0; i < subTypes.size(); i++)
			{
				typeStr += subTypes[i].stringify();

				if (i < subTypes.size() - 1)
					typeStr += ", ";

			}

			typeStr += ">";

		}
		else
		{
			if (isPointer())
			{
				typeStr += "*";
			}
		}
		return typeStr;

	}

	nlohmann::json toJson() const
	{
		nlohmann::json j;
		j["c"] = clickable;
		j["p"] = propertyType;
		j["n"] = name;
		nlohmann::json jsubTypes;
		for (const auto& subType : subTypes)
			jsubTypes.push_back(subType.toJson());
		j["s"] = jsubTypes;
		return j;
	}
	static fieldType fromJson(const nlohmann::json& json)
	{
		fieldType t;
		t.clickable = json["c"];
		t.propertyType = json["p"];
		t.name = json["n"];
		for (const nlohmann::json& subType : json["s"])
			t.subTypes.push_back(fromJson(subType));
		return t;
	}

	operator bool() const { return propertyType != PropertyType::Unknown; }

};

//copystatus error used in the dump progress
enum CopyStatus
{
	CS_idle,
	CS_busy,
	CS_success,
	CS_error
};

//used for the packages
namespace EngineStructs
{
	struct Package;
	struct Struct;
	/**
	 * \brief Member struct. Contains info about a single member
	 */
	struct Member
	{

		fieldType type; //type of the member
		std::string name; //name of the member
		int offset = 0; //offset of the member (real offset)
		int size = 0; //total size of the member (size * arrayDim)
		int arrayDim = 0; // the number of elements if it's an array (e.g. int16_t foobar[123])
		bool missed = false; //if the member is actually a missed member and is just used to fill up bytes
		bool isBit = false; //if the member is a bit (": 1")
		int bitOffset = 0; //the offset of the bit (0 if not bit)
		bool userEdited = false; //if the member is edited by a user

		operator bool() const { return size > 0; }

		bool operator==(Member obj) const { return obj.name == name && obj.offset == offset && obj.bitOffset == bitOffset; }

		nlohmann::json toJson() const
		{
			nlohmann::json j;
			j["t"] = type.toJson();
			j["n"] = name;
			j["o"] = offset;
			j["s"] = size;
			j["d"] = arrayDim;
			j["m"] = missed;
			j["i"] = isBit;
			j["b"] = bitOffset;
			j["u"] = userEdited;
			return j;
		}

		static Member fromJson(const nlohmann::json& json)
		{
			Member m;
			m.type = fieldType::fromJson(json["t"]);
			m.name = json["n"];
			m.offset = json["o"];
			m.size = json["s"];
			m.arrayDim = json["d"];
			m.missed = json["m"];
			m.isBit = json["i"];
			m.bitOffset = json["b"];
			m.userEdited = json["u"];
			return m;
		}
	};

	/**
	 * \brief Function struct. Contains info about a single function
	 */
	struct Function
	{
		Struct* owningStruct = nullptr; //the struct this function resides in
		int owningVectorIndex = 0; //the vector index this function resides in
		uintptr_t memoryAddress;
		fieldType returnType;
		std::vector<std::tuple<fieldType, std::string, uint64_t, uint64_t>> params; //fieldType, name, propertyFlags, arrayDim
		std::string fullName;
		std::string cppName;
		std::string functionFlags;
		uint64_t binaryOffset = 0; //offset of the func in the binary

		nlohmann::json toJson() const
		{
			nlohmann::json j;
			j["m"] = memoryAddress;
			j["r"] = returnType.toJson();
			nlohmann::json jParams;
			for (const auto& param : params)
				jParams.push_back({ std::get<0>(param).toJson(), std::get<1>(param), std::get<2>(param), std::get<3>(param) });
			j["p"] = jParams;
			j["fn"] = fullName;
			j["c"] = cppName;
			j["ff"] = functionFlags;
			j["b"] = binaryOffset;
			return j;
		}

		static Function fromJson(const nlohmann::json& json)
		{
			Function f;
			f.memoryAddress = json["m"];
			f.returnType = fieldType::fromJson(json["r"]);
			for (const nlohmann::json& param : json["p"])
				f.params.push_back(std::tuple(fieldType::fromJson(param[0]), param[1], param[2], param[3]));
			f.fullName = json["fn"];
			f.cppName = json["c"];
			f.functionFlags = json["ff"];
			f.binaryOffset = json["b"];
			return f;
		}
	};

	/**
	 * \brief Struct/Class struct. Contains members and information about the Struct/Class
	 */
	struct Struct
	{
		Package* owningPackage = nullptr; //the package this struct resides in
		int owningVectorIndex = 0; //the vector index this struct resides in
		bool isClass = false; //if struct is actually a class. Even if we have in packages a struct and class vector, every struct should know what it is
		uintptr_t memoryAddress = 0; //the real memory address where the struct is
		std::string fullName; //the full name of the struct
		std::string cppName; //the cppName of the struct
		std::vector<std::string> superNames{}; //all the structs it inherits, empty, only used in package generation
		std::vector<Struct*> supers{}; //all the structs it inherits
		std::vector<Struct*> superOfOthers{}; //all the structs that use this class as a super
		bool inherited = false; //if the struct is inherited
		int maxSize = 0; //the maximum size this struct is "allowed" to have, as size is not accurate due to padding and trailing
		bool noFixedSize = false; // if this boolean is true, the current struct or class has no specific fixed size, meaning it can change (template classes)
		int minAlignment = 0; //minimal alignment defined by ue
		int size = 0; //propertiesSize, possibly wrong, use maxSize
		int unknownCount = 0; //keep track of all missed vars, only used for the package viewer to edit unknowndata
		std::vector<Member> definedMembers{}; //list of all members that are all valid and known
		std::vector<Member> undefinedMembers{}; //list of all members that are all valid and known
		//listing: isDefined, vecIndex;
		std::vector<std::pair<bool, int>> cookedMembers{}; //list of all members that are aligned and contain padding members, unknown members etc
		std::vector<Function> functions{}; //array of all functions of the struct

		int getInheritedSize() const
		{
			if (supers.empty()) return 0;

			return supers[0]->maxSize;
		}

		Member* getMemberForIndex(int i)
		{
			const auto& m = cookedMembers[i];
			if (m.first)
				return &definedMembers[m.second];
			else
				return &undefinedMembers[m.second];
		}

		bool operator==(const Struct& st) const
		{
			return st.fullName == fullName;
		}

		nlohmann::json toJson() const
		{
			nlohmann::json j;
			j["ic"] = isClass;
			j["ma"] = memoryAddress;
			j["fn"] = fullName;
			j["c"] = cppName;
			j["spn"] = superNames;
			j["in"] = inherited;
			j["sz"] = size;
			j["msz"] = maxSize;
			j["uc"] = unknownCount;
			nlohmann::json jMembers;
			for (const auto& member : definedMembers)
				jMembers.push_back(member.toJson());
			j["m"] = jMembers;
			nlohmann::json jFunctions;
			for (const auto& fn : functions)
				jFunctions.push_back(fn.toJson());
			j["f"] = jFunctions;
			return j;
		}

		static Struct fromJson(const nlohmann::json& json)
		{
			Struct s;
			s.isClass = json["ic"];
			s.memoryAddress = json["ma"];
			s.fullName = json["fn"];
			s.cppName = json["c"];
			s.superNames = json["spn"];
			s.inherited = json["in"];
			s.size = json["sz"];
			s.maxSize = json["msz"];
			s.unknownCount = json["uc"];
			for (const nlohmann::json& member : json["m"])
				s.definedMembers.push_back(Member::fromJson(member));
			for (const nlohmann::json& fn : json["f"])
				s.functions.push_back(Function::fromJson(fn));


			return s;
		}
	};

	struct Enum
	{
		Package* owningPackage = nullptr;
		int owningVectorIndex = 0;
		uintptr_t memoryAddress;
		std::string fullName;
		std::string cppName;
		std::string type;
		int size;
		std::vector<std::pair<std::string, int>> members;

		nlohmann::json toJson() const
		{
			nlohmann::json j;
			j["ma"] = memoryAddress;
			j["f"] = fullName;
			j["c"] = cppName;
			j["t"] = type;
			j["sz"] = size;
			nlohmann::json jMembers;
			for (const auto& member : members)
			{
				nlohmann::json jMember;
				jMember["f"] = member.first;
				jMember["s"] = member.second;
				jMembers.push_back(jMember);
			}
			j["m"] = jMembers;
			return j;
		}

		static Enum fromJson(const nlohmann::json& json)
		{
			Enum e;
			e.memoryAddress = json["ma"];
			e.fullName = json["f"];
			e.cppName = json["c"];
			e.type = json["t"];
			e.size = json["sz"];
			const nlohmann::json jMembers = json["m"];
			for (const nlohmann::json& member : jMembers)
				e.members.push_back(std::pair(member["f"], member["s"]));

			return e;
		}

		bool operator==(const Enum& en) const
		{
			return en.fullName == fullName;
		}
	};

	struct Package
	{
		std::string packageName;
		int index;

		//all packages this package needs
		std::set<Package*> dependencyPackages;
		//seperate structs and classes even if a boolean exists within the struct
		std::vector<Struct*> combinedStructsAndClasses;
		std::vector<Struct> structs;
		std::vector<Struct> classes;
		std::vector<Enum> enums;
		std::vector<Function*> functions; //pointer because these functions reside in classes and structs and are even ordered

		static bool packageCompare(const Package& a, const Package& b) {
			if (a.packageName == "BasicType")
				return true;
			if (b.packageName == "BasicType")
				return false;

			std::string sa = a.packageName;
			std::string sb = b.packageName;
			std::ranges::transform(sa, sa.begin(),
				[](unsigned char c) { return std::tolower(c); });
			std::ranges::transform(sb, sb.begin(),
				[](unsigned char c) { return std::tolower(c); });
			return sa < sb;
		}

		bool operator==(const Package& p) const
		{
			return p.index == index;
		}

		bool operator==(const Package*& p) const
		{
			return p->index == index;
		}

		nlohmann::json toJson() const
		{
			nlohmann::json j;
			j["p"] = packageName;
			j["i"] = index;

			nlohmann::json jStructs;
			for (const auto& struc : structs)
				jStructs.push_back(struc.toJson());
			j["s"] = jStructs;

			nlohmann::json jClasses;
			for (const auto& clas : classes)
				jClasses.push_back(clas.toJson());
			j["c"] = jClasses;

			nlohmann::json jEnums;
			for (const auto& enu : enums)
				jEnums.push_back(enu.toJson());
			j["e"] = jEnums;
			return j;
		}

		static Package fromJson(const nlohmann::json& json)
		{
			Package p;
			p.packageName = json["p"];
			p.index = json["i"];
			for (const nlohmann::json& struc : json["s"])
				p.structs.push_back(Struct::fromJson(struc));
			for (const nlohmann::json& clas : json["c"])
				p.classes.push_back(Struct::fromJson(clas));
			for (const nlohmann::json& enu : json["e"])
				p.enums.push_back(Enum::fromJson(enu));

			return p;
		}
	};
};