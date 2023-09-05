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
		j["clickable"] = clickable;
		j["propertyType"] = propertyType;
		j["name"] = name;
		nlohmann::json jsubTypes;
		for (const auto& subType : subTypes)
			jsubTypes.push_back(subType.toJson());
		j["subTypes"] = jsubTypes;
		return j;
	}
	static fieldType fromJson(const nlohmann::json& json)
	{
		fieldType t;
		t.clickable = json["clickable"];
		t.propertyType = json["propertyType"];
		t.name = json["name"];
		for (const nlohmann::json& subType : json["subTypes"])
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

		bool operator==(Member obj) const { return obj.name == name && obj.offset == offset && obj.bitOffset == bitOffset; }

		nlohmann::json toJson() const
		{
			nlohmann::json j;
			j["type"] = type.toJson();
			j["name"] = name;
			j["offset"] = offset;
			j["size"] = size;
			j["missed"] = missed;
			j["isBit"] = isBit;
			j["bitOffset"] = bitOffset;
			j["userEdited"] = userEdited;
			return j;
		}

		static Member fromJson(const nlohmann::json& json)
		{
			Member m;
			m.type = fieldType::fromJson(json["type"]);
			m.name = json["name"];
			m.offset = json["offset"];
			m.size = json["size"];
			m.missed = json["missed"];
			m.isBit = json["isBit"];
			m.bitOffset = json["bitOffset"];
			m.userEdited = json["userEdited"];
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
			j["memoryAddress"] = memoryAddress;
			j["returnType"] = returnType.toJson();
			nlohmann::json jParams;
			for (const auto& param : params)
				jParams.push_back({std::get<0>(param).toJson(), std::get<1>(param), std::get<2>(param), std::get<3>(param) });
			j["params"] = jParams;
			j["fullName"] = fullName;
			j["cppName"] = cppName;
			j["functionFlags"] = functionFlags;
			j["binaryOffset"] = binaryOffset;
			return j;
		}

		static Function fromJson(const nlohmann::json& json)
		{
			Function f;
			f.memoryAddress = json["memoryAddress"];
			f.returnType = fieldType::fromJson(json["returnType"]);
			for (const nlohmann::json& param : json["params"])
				f.params.push_back(std::tuple(fieldType::fromJson(param[0]), param[1], param[2], param[3]));
			f.fullName = json["fullName"];
			f.cppName = json["cppName"];
			f.functionFlags = json["functionFlags"];
			f.binaryOffset = json["binaryOffset"];
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
			j["isClass"] = isClass;
			j["memoryAddress"] = memoryAddress;
			j["fullName"] = fullName;
			j["cppName"] = cppName;
			j["supers"] = supers;
			j["inherited"] = inherited;
			j["size"] = size;
			j["inheretedSize"] = inheretedSize;
			j["unknownCount"] = unknownCount;
			nlohmann::json jMembers;
			for (const auto& member : definedMembers)
				jMembers.push_back(member.toJson());
			j["members"] = jMembers;
			nlohmann::json jFunctions;
			for (const auto& fn : functions)
				jFunctions.push_back(fn.toJson());
			j["functions"] = jFunctions;
			return j;
		}

		static Struct fromJson(const nlohmann::json& json)
		{
			Struct s;
			s.isClass = json["isClass"];
			s.memoryAddress = json["memoryAddress"];
			s.fullName = json["fullName"];
			s.cppName = json["cppName"];
			s.supers = json["supers"];
			s.inherited = json["inherited"];
			s.size = json["size"];
			s.inheretedSize = json["inheretedSize"];
			s.unknownCount = json["unknownCount"];
			for (const nlohmann::json& member : json["members"])
				s.definedMembers.push_back(Member::fromJson(member));
			for (const nlohmann::json& fn : json["functions"])
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
			j["memoryAddress"] = memoryAddress;
			j["fullName"] = fullName;
			j["cppName"] = cppName;
			j["type"] = type;
			nlohmann::json jMembers;
			for(const auto& member : members)
			{
				nlohmann::json jMember;
				jMember["first"] = member.first;
				jMember["second"] = member.second;
				jMembers.push_back(jMember);
			}
			j["members"] = jMembers;
			return j;
		}

		static Enum fromJson(const nlohmann::json& json)
		{
			Enum e;
			e.memoryAddress = json["memoryAddress"];
			e.fullName = json["fullName"];
			e.cppName = json["cppName"];
			e.type = json["type"];
			const nlohmann::json jMembers = json["members"];
			for (const nlohmann::json& member : jMembers)
				e.members.push_back(std::pair(member["first"], member["second"]));

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
			j["packageName"] = packageName;
			j["index"] = index;

			nlohmann::json jStructs;
			for(const auto& struc : structs)
				jStructs.push_back(struc.toJson());
			j["structs"] = jStructs;

			nlohmann::json jClasses;
			for (const auto& clas : classes)
				jClasses.push_back(clas.toJson());
			j["classes"] = jClasses;

			nlohmann::json jFunctions;
			for (const auto& function : functions)
				jFunctions.push_back({ std::get<0>(function), std::get<1>(function), std::get<2>(function) });
			j["functions"] = jFunctions;

			nlohmann::json jEnums;
			for (const auto& enu : enums)
				jEnums.push_back(enu.toJson());
			j["enums"] = jEnums;
			return j;
		}

		static Package fromJson(const nlohmann::json& json)
		{
			Package p;
			p.packageName = json["packageName"];
			p.index = json["index"];
			for (const nlohmann::json& struc : json["structs"])
				p.structs.push_back(Struct::fromJson(struc));
			for (const nlohmann::json& clas : json["classes"])
				p.classes.push_back(Struct::fromJson(clas));
			for (const nlohmann::json& function : json["functions"])
				p.functions.push_back(std::tuple(function[0], function[1], function[2]));
			for (const nlohmann::json& enu : json["enums"])
				p.enums.push_back(Enum::fromJson(enu));

			return p;
		}
	};
};