#pragma once
#include <algorithm>
#include <vector>
#include <cstdint>

#include "../structs.h"

//type struct that is used for a field in the package
struct fieldType
{
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

	//essentially for dumps.host
	std::string stringify() const
	{
		std::string typeStr = name;

		if (subTypes.size() > 0)
		{
			typeStr += "<";


			for (int i = 0; i < subTypes.size(); i++)
			{
				typeStr += subTypes[i].name;

				if ((subTypes[i].propertyType == PropertyType::ObjectProperty || subTypes[i].propertyType == PropertyType::ClassProperty) && clickable)
					typeStr += "*";

				if (i < subTypes.size() - 1)
					typeStr += ", ";

			}

			typeStr += ">";

		}
		else
		{
			if ((propertyType == PropertyType::ObjectProperty || propertyType == PropertyType::ClassProperty) && clickable)
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
	/**
	 * \brief Member struct. Contains info about a single member
	 */
	struct Member
	{

		fieldType type; //type of the member
		std::string name; //name of the member
		int offset = 0; //offset of the member (real offset)
		int size = 0; //size of the member
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
				jParams.push_back({std::get<0>(param).toJson(), std::get<1>(param), std::get<2>(param), std::get<3>(param) });
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
		bool isClass = false; //if struct is actually a class. Even if we have in packages a struct and class vector, every struct should know what it is
		uintptr_t memoryAddress = 0; //the real memory address where the struct is
		std::string fullName; //the full name of the struct
		std::string cppName; //the cppName of the struct
		std::vector<std::string> supers{}; //all the structs it inherits
		bool inherited = false; //if the struct is inherited
		int size = 0; //true size of the struct
		int inheretedSize = 0; //size of the inherited structs
		int unknownCount = 0; //keep track of all missed vars, only used for the package viewer to edit unknowndata
		std::vector<Member> definedMembers{}; //list of all members that are all valid and known
		std::vector<Member> cookedMembers{}; //list of all members that are aligned and contain padding members, unknown members etc
		//std::vector<Member> deprecated_members{}; //array of all members of the struct DEPRECATED
		std::vector<Function> functions{}; //array of all functions of the struct

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
			j["sp"] = supers;
			j["in"] = inherited;
			j["sz"] = size;
			j["is"] = inheretedSize;
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
			s.supers = json["sp"];
			s.inherited = json["in"];
			s.size = json["sz"];
			s.inheretedSize = json["is"];
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
		uintptr_t memoryAddress;
		std::string fullName;
		std::string cppName;
		std::string type;
		std::vector<std::pair<std::string, int>>members;

		nlohmann::json toJson() const
		{
			nlohmann::json j;
			j["ma"] = memoryAddress;
			j["f"] = fullName;
			j["c"] = cppName;
			j["t"] = type;
			nlohmann::json jMembers;
			for(const auto& member : members)
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
			const nlohmann::json jMembers = json["m"];
			for (const nlohmann::json& member : jMembers)
				e.members.push_back(std::pair(member["f"], member["s"]));

			return e;
		}
	};

	struct Package
	{
		std::string packageName;
		int index;

		//seperate structs and classes even if a boolean exists within the struct
		std::vector<Struct> structs;
		std::vector<Struct> classes;
		std::vector<Enum> enums;
		std::vector<std::tuple<bool, int, int>> functions; //vector of tuples for function (bInClassVec, vecidx, funcidx)

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

		nlohmann::json toJson() const
		{
			nlohmann::json j;
			j["p"] = packageName;
			j["i"] = index;

			nlohmann::json jStructs;
			for(const auto& struc : structs)
				jStructs.push_back(struc.toJson());
			j["s"] = jStructs;

			nlohmann::json jClasses;
			for (const auto& clas : classes)
				jClasses.push_back(clas.toJson());
			j["c"] = jClasses;

			nlohmann::json jFunctions;
			for (const auto& function : functions)
				jFunctions.push_back({ std::get<0>(function), std::get<1>(function), std::get<2>(function) });
			j["f"] = jFunctions;

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
			for (const nlohmann::json& function : json["f"])
				p.functions.push_back(std::tuple(function[0], function[1], function[2]));
			for (const nlohmann::json& enu : json["e"])
				p.enums.push_back(Enum::fromJson(enu));

			return p;
		}
	};
};